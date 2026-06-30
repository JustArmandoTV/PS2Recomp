#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0025E170
// Address: 0x25e170 - 0x25fab0
void sub_0025E170_0x25e170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025E170_0x25e170");
#endif

    switch (ctx->pc) {
        case 0x25e170u: goto label_25e170;
        case 0x25e174u: goto label_25e174;
        case 0x25e178u: goto label_25e178;
        case 0x25e17cu: goto label_25e17c;
        case 0x25e180u: goto label_25e180;
        case 0x25e184u: goto label_25e184;
        case 0x25e188u: goto label_25e188;
        case 0x25e18cu: goto label_25e18c;
        case 0x25e190u: goto label_25e190;
        case 0x25e194u: goto label_25e194;
        case 0x25e198u: goto label_25e198;
        case 0x25e19cu: goto label_25e19c;
        case 0x25e1a0u: goto label_25e1a0;
        case 0x25e1a4u: goto label_25e1a4;
        case 0x25e1a8u: goto label_25e1a8;
        case 0x25e1acu: goto label_25e1ac;
        case 0x25e1b0u: goto label_25e1b0;
        case 0x25e1b4u: goto label_25e1b4;
        case 0x25e1b8u: goto label_25e1b8;
        case 0x25e1bcu: goto label_25e1bc;
        case 0x25e1c0u: goto label_25e1c0;
        case 0x25e1c4u: goto label_25e1c4;
        case 0x25e1c8u: goto label_25e1c8;
        case 0x25e1ccu: goto label_25e1cc;
        case 0x25e1d0u: goto label_25e1d0;
        case 0x25e1d4u: goto label_25e1d4;
        case 0x25e1d8u: goto label_25e1d8;
        case 0x25e1dcu: goto label_25e1dc;
        case 0x25e1e0u: goto label_25e1e0;
        case 0x25e1e4u: goto label_25e1e4;
        case 0x25e1e8u: goto label_25e1e8;
        case 0x25e1ecu: goto label_25e1ec;
        case 0x25e1f0u: goto label_25e1f0;
        case 0x25e1f4u: goto label_25e1f4;
        case 0x25e1f8u: goto label_25e1f8;
        case 0x25e1fcu: goto label_25e1fc;
        case 0x25e200u: goto label_25e200;
        case 0x25e204u: goto label_25e204;
        case 0x25e208u: goto label_25e208;
        case 0x25e20cu: goto label_25e20c;
        case 0x25e210u: goto label_25e210;
        case 0x25e214u: goto label_25e214;
        case 0x25e218u: goto label_25e218;
        case 0x25e21cu: goto label_25e21c;
        case 0x25e220u: goto label_25e220;
        case 0x25e224u: goto label_25e224;
        case 0x25e228u: goto label_25e228;
        case 0x25e22cu: goto label_25e22c;
        case 0x25e230u: goto label_25e230;
        case 0x25e234u: goto label_25e234;
        case 0x25e238u: goto label_25e238;
        case 0x25e23cu: goto label_25e23c;
        case 0x25e240u: goto label_25e240;
        case 0x25e244u: goto label_25e244;
        case 0x25e248u: goto label_25e248;
        case 0x25e24cu: goto label_25e24c;
        case 0x25e250u: goto label_25e250;
        case 0x25e254u: goto label_25e254;
        case 0x25e258u: goto label_25e258;
        case 0x25e25cu: goto label_25e25c;
        case 0x25e260u: goto label_25e260;
        case 0x25e264u: goto label_25e264;
        case 0x25e268u: goto label_25e268;
        case 0x25e26cu: goto label_25e26c;
        case 0x25e270u: goto label_25e270;
        case 0x25e274u: goto label_25e274;
        case 0x25e278u: goto label_25e278;
        case 0x25e27cu: goto label_25e27c;
        case 0x25e280u: goto label_25e280;
        case 0x25e284u: goto label_25e284;
        case 0x25e288u: goto label_25e288;
        case 0x25e28cu: goto label_25e28c;
        case 0x25e290u: goto label_25e290;
        case 0x25e294u: goto label_25e294;
        case 0x25e298u: goto label_25e298;
        case 0x25e29cu: goto label_25e29c;
        case 0x25e2a0u: goto label_25e2a0;
        case 0x25e2a4u: goto label_25e2a4;
        case 0x25e2a8u: goto label_25e2a8;
        case 0x25e2acu: goto label_25e2ac;
        case 0x25e2b0u: goto label_25e2b0;
        case 0x25e2b4u: goto label_25e2b4;
        case 0x25e2b8u: goto label_25e2b8;
        case 0x25e2bcu: goto label_25e2bc;
        case 0x25e2c0u: goto label_25e2c0;
        case 0x25e2c4u: goto label_25e2c4;
        case 0x25e2c8u: goto label_25e2c8;
        case 0x25e2ccu: goto label_25e2cc;
        case 0x25e2d0u: goto label_25e2d0;
        case 0x25e2d4u: goto label_25e2d4;
        case 0x25e2d8u: goto label_25e2d8;
        case 0x25e2dcu: goto label_25e2dc;
        case 0x25e2e0u: goto label_25e2e0;
        case 0x25e2e4u: goto label_25e2e4;
        case 0x25e2e8u: goto label_25e2e8;
        case 0x25e2ecu: goto label_25e2ec;
        case 0x25e2f0u: goto label_25e2f0;
        case 0x25e2f4u: goto label_25e2f4;
        case 0x25e2f8u: goto label_25e2f8;
        case 0x25e2fcu: goto label_25e2fc;
        case 0x25e300u: goto label_25e300;
        case 0x25e304u: goto label_25e304;
        case 0x25e308u: goto label_25e308;
        case 0x25e30cu: goto label_25e30c;
        case 0x25e310u: goto label_25e310;
        case 0x25e314u: goto label_25e314;
        case 0x25e318u: goto label_25e318;
        case 0x25e31cu: goto label_25e31c;
        case 0x25e320u: goto label_25e320;
        case 0x25e324u: goto label_25e324;
        case 0x25e328u: goto label_25e328;
        case 0x25e32cu: goto label_25e32c;
        case 0x25e330u: goto label_25e330;
        case 0x25e334u: goto label_25e334;
        case 0x25e338u: goto label_25e338;
        case 0x25e33cu: goto label_25e33c;
        case 0x25e340u: goto label_25e340;
        case 0x25e344u: goto label_25e344;
        case 0x25e348u: goto label_25e348;
        case 0x25e34cu: goto label_25e34c;
        case 0x25e350u: goto label_25e350;
        case 0x25e354u: goto label_25e354;
        case 0x25e358u: goto label_25e358;
        case 0x25e35cu: goto label_25e35c;
        case 0x25e360u: goto label_25e360;
        case 0x25e364u: goto label_25e364;
        case 0x25e368u: goto label_25e368;
        case 0x25e36cu: goto label_25e36c;
        case 0x25e370u: goto label_25e370;
        case 0x25e374u: goto label_25e374;
        case 0x25e378u: goto label_25e378;
        case 0x25e37cu: goto label_25e37c;
        case 0x25e380u: goto label_25e380;
        case 0x25e384u: goto label_25e384;
        case 0x25e388u: goto label_25e388;
        case 0x25e38cu: goto label_25e38c;
        case 0x25e390u: goto label_25e390;
        case 0x25e394u: goto label_25e394;
        case 0x25e398u: goto label_25e398;
        case 0x25e39cu: goto label_25e39c;
        case 0x25e3a0u: goto label_25e3a0;
        case 0x25e3a4u: goto label_25e3a4;
        case 0x25e3a8u: goto label_25e3a8;
        case 0x25e3acu: goto label_25e3ac;
        case 0x25e3b0u: goto label_25e3b0;
        case 0x25e3b4u: goto label_25e3b4;
        case 0x25e3b8u: goto label_25e3b8;
        case 0x25e3bcu: goto label_25e3bc;
        case 0x25e3c0u: goto label_25e3c0;
        case 0x25e3c4u: goto label_25e3c4;
        case 0x25e3c8u: goto label_25e3c8;
        case 0x25e3ccu: goto label_25e3cc;
        case 0x25e3d0u: goto label_25e3d0;
        case 0x25e3d4u: goto label_25e3d4;
        case 0x25e3d8u: goto label_25e3d8;
        case 0x25e3dcu: goto label_25e3dc;
        case 0x25e3e0u: goto label_25e3e0;
        case 0x25e3e4u: goto label_25e3e4;
        case 0x25e3e8u: goto label_25e3e8;
        case 0x25e3ecu: goto label_25e3ec;
        case 0x25e3f0u: goto label_25e3f0;
        case 0x25e3f4u: goto label_25e3f4;
        case 0x25e3f8u: goto label_25e3f8;
        case 0x25e3fcu: goto label_25e3fc;
        case 0x25e400u: goto label_25e400;
        case 0x25e404u: goto label_25e404;
        case 0x25e408u: goto label_25e408;
        case 0x25e40cu: goto label_25e40c;
        case 0x25e410u: goto label_25e410;
        case 0x25e414u: goto label_25e414;
        case 0x25e418u: goto label_25e418;
        case 0x25e41cu: goto label_25e41c;
        case 0x25e420u: goto label_25e420;
        case 0x25e424u: goto label_25e424;
        case 0x25e428u: goto label_25e428;
        case 0x25e42cu: goto label_25e42c;
        case 0x25e430u: goto label_25e430;
        case 0x25e434u: goto label_25e434;
        case 0x25e438u: goto label_25e438;
        case 0x25e43cu: goto label_25e43c;
        case 0x25e440u: goto label_25e440;
        case 0x25e444u: goto label_25e444;
        case 0x25e448u: goto label_25e448;
        case 0x25e44cu: goto label_25e44c;
        case 0x25e450u: goto label_25e450;
        case 0x25e454u: goto label_25e454;
        case 0x25e458u: goto label_25e458;
        case 0x25e45cu: goto label_25e45c;
        case 0x25e460u: goto label_25e460;
        case 0x25e464u: goto label_25e464;
        case 0x25e468u: goto label_25e468;
        case 0x25e46cu: goto label_25e46c;
        case 0x25e470u: goto label_25e470;
        case 0x25e474u: goto label_25e474;
        case 0x25e478u: goto label_25e478;
        case 0x25e47cu: goto label_25e47c;
        case 0x25e480u: goto label_25e480;
        case 0x25e484u: goto label_25e484;
        case 0x25e488u: goto label_25e488;
        case 0x25e48cu: goto label_25e48c;
        case 0x25e490u: goto label_25e490;
        case 0x25e494u: goto label_25e494;
        case 0x25e498u: goto label_25e498;
        case 0x25e49cu: goto label_25e49c;
        case 0x25e4a0u: goto label_25e4a0;
        case 0x25e4a4u: goto label_25e4a4;
        case 0x25e4a8u: goto label_25e4a8;
        case 0x25e4acu: goto label_25e4ac;
        case 0x25e4b0u: goto label_25e4b0;
        case 0x25e4b4u: goto label_25e4b4;
        case 0x25e4b8u: goto label_25e4b8;
        case 0x25e4bcu: goto label_25e4bc;
        case 0x25e4c0u: goto label_25e4c0;
        case 0x25e4c4u: goto label_25e4c4;
        case 0x25e4c8u: goto label_25e4c8;
        case 0x25e4ccu: goto label_25e4cc;
        case 0x25e4d0u: goto label_25e4d0;
        case 0x25e4d4u: goto label_25e4d4;
        case 0x25e4d8u: goto label_25e4d8;
        case 0x25e4dcu: goto label_25e4dc;
        case 0x25e4e0u: goto label_25e4e0;
        case 0x25e4e4u: goto label_25e4e4;
        case 0x25e4e8u: goto label_25e4e8;
        case 0x25e4ecu: goto label_25e4ec;
        case 0x25e4f0u: goto label_25e4f0;
        case 0x25e4f4u: goto label_25e4f4;
        case 0x25e4f8u: goto label_25e4f8;
        case 0x25e4fcu: goto label_25e4fc;
        case 0x25e500u: goto label_25e500;
        case 0x25e504u: goto label_25e504;
        case 0x25e508u: goto label_25e508;
        case 0x25e50cu: goto label_25e50c;
        case 0x25e510u: goto label_25e510;
        case 0x25e514u: goto label_25e514;
        case 0x25e518u: goto label_25e518;
        case 0x25e51cu: goto label_25e51c;
        case 0x25e520u: goto label_25e520;
        case 0x25e524u: goto label_25e524;
        case 0x25e528u: goto label_25e528;
        case 0x25e52cu: goto label_25e52c;
        case 0x25e530u: goto label_25e530;
        case 0x25e534u: goto label_25e534;
        case 0x25e538u: goto label_25e538;
        case 0x25e53cu: goto label_25e53c;
        case 0x25e540u: goto label_25e540;
        case 0x25e544u: goto label_25e544;
        case 0x25e548u: goto label_25e548;
        case 0x25e54cu: goto label_25e54c;
        case 0x25e550u: goto label_25e550;
        case 0x25e554u: goto label_25e554;
        case 0x25e558u: goto label_25e558;
        case 0x25e55cu: goto label_25e55c;
        case 0x25e560u: goto label_25e560;
        case 0x25e564u: goto label_25e564;
        case 0x25e568u: goto label_25e568;
        case 0x25e56cu: goto label_25e56c;
        case 0x25e570u: goto label_25e570;
        case 0x25e574u: goto label_25e574;
        case 0x25e578u: goto label_25e578;
        case 0x25e57cu: goto label_25e57c;
        case 0x25e580u: goto label_25e580;
        case 0x25e584u: goto label_25e584;
        case 0x25e588u: goto label_25e588;
        case 0x25e58cu: goto label_25e58c;
        case 0x25e590u: goto label_25e590;
        case 0x25e594u: goto label_25e594;
        case 0x25e598u: goto label_25e598;
        case 0x25e59cu: goto label_25e59c;
        case 0x25e5a0u: goto label_25e5a0;
        case 0x25e5a4u: goto label_25e5a4;
        case 0x25e5a8u: goto label_25e5a8;
        case 0x25e5acu: goto label_25e5ac;
        case 0x25e5b0u: goto label_25e5b0;
        case 0x25e5b4u: goto label_25e5b4;
        case 0x25e5b8u: goto label_25e5b8;
        case 0x25e5bcu: goto label_25e5bc;
        case 0x25e5c0u: goto label_25e5c0;
        case 0x25e5c4u: goto label_25e5c4;
        case 0x25e5c8u: goto label_25e5c8;
        case 0x25e5ccu: goto label_25e5cc;
        case 0x25e5d0u: goto label_25e5d0;
        case 0x25e5d4u: goto label_25e5d4;
        case 0x25e5d8u: goto label_25e5d8;
        case 0x25e5dcu: goto label_25e5dc;
        case 0x25e5e0u: goto label_25e5e0;
        case 0x25e5e4u: goto label_25e5e4;
        case 0x25e5e8u: goto label_25e5e8;
        case 0x25e5ecu: goto label_25e5ec;
        case 0x25e5f0u: goto label_25e5f0;
        case 0x25e5f4u: goto label_25e5f4;
        case 0x25e5f8u: goto label_25e5f8;
        case 0x25e5fcu: goto label_25e5fc;
        case 0x25e600u: goto label_25e600;
        case 0x25e604u: goto label_25e604;
        case 0x25e608u: goto label_25e608;
        case 0x25e60cu: goto label_25e60c;
        case 0x25e610u: goto label_25e610;
        case 0x25e614u: goto label_25e614;
        case 0x25e618u: goto label_25e618;
        case 0x25e61cu: goto label_25e61c;
        case 0x25e620u: goto label_25e620;
        case 0x25e624u: goto label_25e624;
        case 0x25e628u: goto label_25e628;
        case 0x25e62cu: goto label_25e62c;
        case 0x25e630u: goto label_25e630;
        case 0x25e634u: goto label_25e634;
        case 0x25e638u: goto label_25e638;
        case 0x25e63cu: goto label_25e63c;
        case 0x25e640u: goto label_25e640;
        case 0x25e644u: goto label_25e644;
        case 0x25e648u: goto label_25e648;
        case 0x25e64cu: goto label_25e64c;
        case 0x25e650u: goto label_25e650;
        case 0x25e654u: goto label_25e654;
        case 0x25e658u: goto label_25e658;
        case 0x25e65cu: goto label_25e65c;
        case 0x25e660u: goto label_25e660;
        case 0x25e664u: goto label_25e664;
        case 0x25e668u: goto label_25e668;
        case 0x25e66cu: goto label_25e66c;
        case 0x25e670u: goto label_25e670;
        case 0x25e674u: goto label_25e674;
        case 0x25e678u: goto label_25e678;
        case 0x25e67cu: goto label_25e67c;
        case 0x25e680u: goto label_25e680;
        case 0x25e684u: goto label_25e684;
        case 0x25e688u: goto label_25e688;
        case 0x25e68cu: goto label_25e68c;
        case 0x25e690u: goto label_25e690;
        case 0x25e694u: goto label_25e694;
        case 0x25e698u: goto label_25e698;
        case 0x25e69cu: goto label_25e69c;
        case 0x25e6a0u: goto label_25e6a0;
        case 0x25e6a4u: goto label_25e6a4;
        case 0x25e6a8u: goto label_25e6a8;
        case 0x25e6acu: goto label_25e6ac;
        case 0x25e6b0u: goto label_25e6b0;
        case 0x25e6b4u: goto label_25e6b4;
        case 0x25e6b8u: goto label_25e6b8;
        case 0x25e6bcu: goto label_25e6bc;
        case 0x25e6c0u: goto label_25e6c0;
        case 0x25e6c4u: goto label_25e6c4;
        case 0x25e6c8u: goto label_25e6c8;
        case 0x25e6ccu: goto label_25e6cc;
        case 0x25e6d0u: goto label_25e6d0;
        case 0x25e6d4u: goto label_25e6d4;
        case 0x25e6d8u: goto label_25e6d8;
        case 0x25e6dcu: goto label_25e6dc;
        case 0x25e6e0u: goto label_25e6e0;
        case 0x25e6e4u: goto label_25e6e4;
        case 0x25e6e8u: goto label_25e6e8;
        case 0x25e6ecu: goto label_25e6ec;
        case 0x25e6f0u: goto label_25e6f0;
        case 0x25e6f4u: goto label_25e6f4;
        case 0x25e6f8u: goto label_25e6f8;
        case 0x25e6fcu: goto label_25e6fc;
        case 0x25e700u: goto label_25e700;
        case 0x25e704u: goto label_25e704;
        case 0x25e708u: goto label_25e708;
        case 0x25e70cu: goto label_25e70c;
        case 0x25e710u: goto label_25e710;
        case 0x25e714u: goto label_25e714;
        case 0x25e718u: goto label_25e718;
        case 0x25e71cu: goto label_25e71c;
        case 0x25e720u: goto label_25e720;
        case 0x25e724u: goto label_25e724;
        case 0x25e728u: goto label_25e728;
        case 0x25e72cu: goto label_25e72c;
        case 0x25e730u: goto label_25e730;
        case 0x25e734u: goto label_25e734;
        case 0x25e738u: goto label_25e738;
        case 0x25e73cu: goto label_25e73c;
        case 0x25e740u: goto label_25e740;
        case 0x25e744u: goto label_25e744;
        case 0x25e748u: goto label_25e748;
        case 0x25e74cu: goto label_25e74c;
        case 0x25e750u: goto label_25e750;
        case 0x25e754u: goto label_25e754;
        case 0x25e758u: goto label_25e758;
        case 0x25e75cu: goto label_25e75c;
        case 0x25e760u: goto label_25e760;
        case 0x25e764u: goto label_25e764;
        case 0x25e768u: goto label_25e768;
        case 0x25e76cu: goto label_25e76c;
        case 0x25e770u: goto label_25e770;
        case 0x25e774u: goto label_25e774;
        case 0x25e778u: goto label_25e778;
        case 0x25e77cu: goto label_25e77c;
        case 0x25e780u: goto label_25e780;
        case 0x25e784u: goto label_25e784;
        case 0x25e788u: goto label_25e788;
        case 0x25e78cu: goto label_25e78c;
        case 0x25e790u: goto label_25e790;
        case 0x25e794u: goto label_25e794;
        case 0x25e798u: goto label_25e798;
        case 0x25e79cu: goto label_25e79c;
        case 0x25e7a0u: goto label_25e7a0;
        case 0x25e7a4u: goto label_25e7a4;
        case 0x25e7a8u: goto label_25e7a8;
        case 0x25e7acu: goto label_25e7ac;
        case 0x25e7b0u: goto label_25e7b0;
        case 0x25e7b4u: goto label_25e7b4;
        case 0x25e7b8u: goto label_25e7b8;
        case 0x25e7bcu: goto label_25e7bc;
        case 0x25e7c0u: goto label_25e7c0;
        case 0x25e7c4u: goto label_25e7c4;
        case 0x25e7c8u: goto label_25e7c8;
        case 0x25e7ccu: goto label_25e7cc;
        case 0x25e7d0u: goto label_25e7d0;
        case 0x25e7d4u: goto label_25e7d4;
        case 0x25e7d8u: goto label_25e7d8;
        case 0x25e7dcu: goto label_25e7dc;
        case 0x25e7e0u: goto label_25e7e0;
        case 0x25e7e4u: goto label_25e7e4;
        case 0x25e7e8u: goto label_25e7e8;
        case 0x25e7ecu: goto label_25e7ec;
        case 0x25e7f0u: goto label_25e7f0;
        case 0x25e7f4u: goto label_25e7f4;
        case 0x25e7f8u: goto label_25e7f8;
        case 0x25e7fcu: goto label_25e7fc;
        case 0x25e800u: goto label_25e800;
        case 0x25e804u: goto label_25e804;
        case 0x25e808u: goto label_25e808;
        case 0x25e80cu: goto label_25e80c;
        case 0x25e810u: goto label_25e810;
        case 0x25e814u: goto label_25e814;
        case 0x25e818u: goto label_25e818;
        case 0x25e81cu: goto label_25e81c;
        case 0x25e820u: goto label_25e820;
        case 0x25e824u: goto label_25e824;
        case 0x25e828u: goto label_25e828;
        case 0x25e82cu: goto label_25e82c;
        case 0x25e830u: goto label_25e830;
        case 0x25e834u: goto label_25e834;
        case 0x25e838u: goto label_25e838;
        case 0x25e83cu: goto label_25e83c;
        case 0x25e840u: goto label_25e840;
        case 0x25e844u: goto label_25e844;
        case 0x25e848u: goto label_25e848;
        case 0x25e84cu: goto label_25e84c;
        case 0x25e850u: goto label_25e850;
        case 0x25e854u: goto label_25e854;
        case 0x25e858u: goto label_25e858;
        case 0x25e85cu: goto label_25e85c;
        case 0x25e860u: goto label_25e860;
        case 0x25e864u: goto label_25e864;
        case 0x25e868u: goto label_25e868;
        case 0x25e86cu: goto label_25e86c;
        case 0x25e870u: goto label_25e870;
        case 0x25e874u: goto label_25e874;
        case 0x25e878u: goto label_25e878;
        case 0x25e87cu: goto label_25e87c;
        case 0x25e880u: goto label_25e880;
        case 0x25e884u: goto label_25e884;
        case 0x25e888u: goto label_25e888;
        case 0x25e88cu: goto label_25e88c;
        case 0x25e890u: goto label_25e890;
        case 0x25e894u: goto label_25e894;
        case 0x25e898u: goto label_25e898;
        case 0x25e89cu: goto label_25e89c;
        case 0x25e8a0u: goto label_25e8a0;
        case 0x25e8a4u: goto label_25e8a4;
        case 0x25e8a8u: goto label_25e8a8;
        case 0x25e8acu: goto label_25e8ac;
        case 0x25e8b0u: goto label_25e8b0;
        case 0x25e8b4u: goto label_25e8b4;
        case 0x25e8b8u: goto label_25e8b8;
        case 0x25e8bcu: goto label_25e8bc;
        case 0x25e8c0u: goto label_25e8c0;
        case 0x25e8c4u: goto label_25e8c4;
        case 0x25e8c8u: goto label_25e8c8;
        case 0x25e8ccu: goto label_25e8cc;
        case 0x25e8d0u: goto label_25e8d0;
        case 0x25e8d4u: goto label_25e8d4;
        case 0x25e8d8u: goto label_25e8d8;
        case 0x25e8dcu: goto label_25e8dc;
        case 0x25e8e0u: goto label_25e8e0;
        case 0x25e8e4u: goto label_25e8e4;
        case 0x25e8e8u: goto label_25e8e8;
        case 0x25e8ecu: goto label_25e8ec;
        case 0x25e8f0u: goto label_25e8f0;
        case 0x25e8f4u: goto label_25e8f4;
        case 0x25e8f8u: goto label_25e8f8;
        case 0x25e8fcu: goto label_25e8fc;
        case 0x25e900u: goto label_25e900;
        case 0x25e904u: goto label_25e904;
        case 0x25e908u: goto label_25e908;
        case 0x25e90cu: goto label_25e90c;
        case 0x25e910u: goto label_25e910;
        case 0x25e914u: goto label_25e914;
        case 0x25e918u: goto label_25e918;
        case 0x25e91cu: goto label_25e91c;
        case 0x25e920u: goto label_25e920;
        case 0x25e924u: goto label_25e924;
        case 0x25e928u: goto label_25e928;
        case 0x25e92cu: goto label_25e92c;
        case 0x25e930u: goto label_25e930;
        case 0x25e934u: goto label_25e934;
        case 0x25e938u: goto label_25e938;
        case 0x25e93cu: goto label_25e93c;
        case 0x25e940u: goto label_25e940;
        case 0x25e944u: goto label_25e944;
        case 0x25e948u: goto label_25e948;
        case 0x25e94cu: goto label_25e94c;
        case 0x25e950u: goto label_25e950;
        case 0x25e954u: goto label_25e954;
        case 0x25e958u: goto label_25e958;
        case 0x25e95cu: goto label_25e95c;
        case 0x25e960u: goto label_25e960;
        case 0x25e964u: goto label_25e964;
        case 0x25e968u: goto label_25e968;
        case 0x25e96cu: goto label_25e96c;
        case 0x25e970u: goto label_25e970;
        case 0x25e974u: goto label_25e974;
        case 0x25e978u: goto label_25e978;
        case 0x25e97cu: goto label_25e97c;
        case 0x25e980u: goto label_25e980;
        case 0x25e984u: goto label_25e984;
        case 0x25e988u: goto label_25e988;
        case 0x25e98cu: goto label_25e98c;
        case 0x25e990u: goto label_25e990;
        case 0x25e994u: goto label_25e994;
        case 0x25e998u: goto label_25e998;
        case 0x25e99cu: goto label_25e99c;
        case 0x25e9a0u: goto label_25e9a0;
        case 0x25e9a4u: goto label_25e9a4;
        case 0x25e9a8u: goto label_25e9a8;
        case 0x25e9acu: goto label_25e9ac;
        case 0x25e9b0u: goto label_25e9b0;
        case 0x25e9b4u: goto label_25e9b4;
        case 0x25e9b8u: goto label_25e9b8;
        case 0x25e9bcu: goto label_25e9bc;
        case 0x25e9c0u: goto label_25e9c0;
        case 0x25e9c4u: goto label_25e9c4;
        case 0x25e9c8u: goto label_25e9c8;
        case 0x25e9ccu: goto label_25e9cc;
        case 0x25e9d0u: goto label_25e9d0;
        case 0x25e9d4u: goto label_25e9d4;
        case 0x25e9d8u: goto label_25e9d8;
        case 0x25e9dcu: goto label_25e9dc;
        case 0x25e9e0u: goto label_25e9e0;
        case 0x25e9e4u: goto label_25e9e4;
        case 0x25e9e8u: goto label_25e9e8;
        case 0x25e9ecu: goto label_25e9ec;
        case 0x25e9f0u: goto label_25e9f0;
        case 0x25e9f4u: goto label_25e9f4;
        case 0x25e9f8u: goto label_25e9f8;
        case 0x25e9fcu: goto label_25e9fc;
        case 0x25ea00u: goto label_25ea00;
        case 0x25ea04u: goto label_25ea04;
        case 0x25ea08u: goto label_25ea08;
        case 0x25ea0cu: goto label_25ea0c;
        case 0x25ea10u: goto label_25ea10;
        case 0x25ea14u: goto label_25ea14;
        case 0x25ea18u: goto label_25ea18;
        case 0x25ea1cu: goto label_25ea1c;
        case 0x25ea20u: goto label_25ea20;
        case 0x25ea24u: goto label_25ea24;
        case 0x25ea28u: goto label_25ea28;
        case 0x25ea2cu: goto label_25ea2c;
        case 0x25ea30u: goto label_25ea30;
        case 0x25ea34u: goto label_25ea34;
        case 0x25ea38u: goto label_25ea38;
        case 0x25ea3cu: goto label_25ea3c;
        case 0x25ea40u: goto label_25ea40;
        case 0x25ea44u: goto label_25ea44;
        case 0x25ea48u: goto label_25ea48;
        case 0x25ea4cu: goto label_25ea4c;
        case 0x25ea50u: goto label_25ea50;
        case 0x25ea54u: goto label_25ea54;
        case 0x25ea58u: goto label_25ea58;
        case 0x25ea5cu: goto label_25ea5c;
        case 0x25ea60u: goto label_25ea60;
        case 0x25ea64u: goto label_25ea64;
        case 0x25ea68u: goto label_25ea68;
        case 0x25ea6cu: goto label_25ea6c;
        case 0x25ea70u: goto label_25ea70;
        case 0x25ea74u: goto label_25ea74;
        case 0x25ea78u: goto label_25ea78;
        case 0x25ea7cu: goto label_25ea7c;
        case 0x25ea80u: goto label_25ea80;
        case 0x25ea84u: goto label_25ea84;
        case 0x25ea88u: goto label_25ea88;
        case 0x25ea8cu: goto label_25ea8c;
        case 0x25ea90u: goto label_25ea90;
        case 0x25ea94u: goto label_25ea94;
        case 0x25ea98u: goto label_25ea98;
        case 0x25ea9cu: goto label_25ea9c;
        case 0x25eaa0u: goto label_25eaa0;
        case 0x25eaa4u: goto label_25eaa4;
        case 0x25eaa8u: goto label_25eaa8;
        case 0x25eaacu: goto label_25eaac;
        case 0x25eab0u: goto label_25eab0;
        case 0x25eab4u: goto label_25eab4;
        case 0x25eab8u: goto label_25eab8;
        case 0x25eabcu: goto label_25eabc;
        case 0x25eac0u: goto label_25eac0;
        case 0x25eac4u: goto label_25eac4;
        case 0x25eac8u: goto label_25eac8;
        case 0x25eaccu: goto label_25eacc;
        case 0x25ead0u: goto label_25ead0;
        case 0x25ead4u: goto label_25ead4;
        case 0x25ead8u: goto label_25ead8;
        case 0x25eadcu: goto label_25eadc;
        case 0x25eae0u: goto label_25eae0;
        case 0x25eae4u: goto label_25eae4;
        case 0x25eae8u: goto label_25eae8;
        case 0x25eaecu: goto label_25eaec;
        case 0x25eaf0u: goto label_25eaf0;
        case 0x25eaf4u: goto label_25eaf4;
        case 0x25eaf8u: goto label_25eaf8;
        case 0x25eafcu: goto label_25eafc;
        case 0x25eb00u: goto label_25eb00;
        case 0x25eb04u: goto label_25eb04;
        case 0x25eb08u: goto label_25eb08;
        case 0x25eb0cu: goto label_25eb0c;
        case 0x25eb10u: goto label_25eb10;
        case 0x25eb14u: goto label_25eb14;
        case 0x25eb18u: goto label_25eb18;
        case 0x25eb1cu: goto label_25eb1c;
        case 0x25eb20u: goto label_25eb20;
        case 0x25eb24u: goto label_25eb24;
        case 0x25eb28u: goto label_25eb28;
        case 0x25eb2cu: goto label_25eb2c;
        case 0x25eb30u: goto label_25eb30;
        case 0x25eb34u: goto label_25eb34;
        case 0x25eb38u: goto label_25eb38;
        case 0x25eb3cu: goto label_25eb3c;
        case 0x25eb40u: goto label_25eb40;
        case 0x25eb44u: goto label_25eb44;
        case 0x25eb48u: goto label_25eb48;
        case 0x25eb4cu: goto label_25eb4c;
        case 0x25eb50u: goto label_25eb50;
        case 0x25eb54u: goto label_25eb54;
        case 0x25eb58u: goto label_25eb58;
        case 0x25eb5cu: goto label_25eb5c;
        case 0x25eb60u: goto label_25eb60;
        case 0x25eb64u: goto label_25eb64;
        case 0x25eb68u: goto label_25eb68;
        case 0x25eb6cu: goto label_25eb6c;
        case 0x25eb70u: goto label_25eb70;
        case 0x25eb74u: goto label_25eb74;
        case 0x25eb78u: goto label_25eb78;
        case 0x25eb7cu: goto label_25eb7c;
        case 0x25eb80u: goto label_25eb80;
        case 0x25eb84u: goto label_25eb84;
        case 0x25eb88u: goto label_25eb88;
        case 0x25eb8cu: goto label_25eb8c;
        case 0x25eb90u: goto label_25eb90;
        case 0x25eb94u: goto label_25eb94;
        case 0x25eb98u: goto label_25eb98;
        case 0x25eb9cu: goto label_25eb9c;
        case 0x25eba0u: goto label_25eba0;
        case 0x25eba4u: goto label_25eba4;
        case 0x25eba8u: goto label_25eba8;
        case 0x25ebacu: goto label_25ebac;
        case 0x25ebb0u: goto label_25ebb0;
        case 0x25ebb4u: goto label_25ebb4;
        case 0x25ebb8u: goto label_25ebb8;
        case 0x25ebbcu: goto label_25ebbc;
        case 0x25ebc0u: goto label_25ebc0;
        case 0x25ebc4u: goto label_25ebc4;
        case 0x25ebc8u: goto label_25ebc8;
        case 0x25ebccu: goto label_25ebcc;
        case 0x25ebd0u: goto label_25ebd0;
        case 0x25ebd4u: goto label_25ebd4;
        case 0x25ebd8u: goto label_25ebd8;
        case 0x25ebdcu: goto label_25ebdc;
        case 0x25ebe0u: goto label_25ebe0;
        case 0x25ebe4u: goto label_25ebe4;
        case 0x25ebe8u: goto label_25ebe8;
        case 0x25ebecu: goto label_25ebec;
        case 0x25ebf0u: goto label_25ebf0;
        case 0x25ebf4u: goto label_25ebf4;
        case 0x25ebf8u: goto label_25ebf8;
        case 0x25ebfcu: goto label_25ebfc;
        case 0x25ec00u: goto label_25ec00;
        case 0x25ec04u: goto label_25ec04;
        case 0x25ec08u: goto label_25ec08;
        case 0x25ec0cu: goto label_25ec0c;
        case 0x25ec10u: goto label_25ec10;
        case 0x25ec14u: goto label_25ec14;
        case 0x25ec18u: goto label_25ec18;
        case 0x25ec1cu: goto label_25ec1c;
        case 0x25ec20u: goto label_25ec20;
        case 0x25ec24u: goto label_25ec24;
        case 0x25ec28u: goto label_25ec28;
        case 0x25ec2cu: goto label_25ec2c;
        case 0x25ec30u: goto label_25ec30;
        case 0x25ec34u: goto label_25ec34;
        case 0x25ec38u: goto label_25ec38;
        case 0x25ec3cu: goto label_25ec3c;
        case 0x25ec40u: goto label_25ec40;
        case 0x25ec44u: goto label_25ec44;
        case 0x25ec48u: goto label_25ec48;
        case 0x25ec4cu: goto label_25ec4c;
        case 0x25ec50u: goto label_25ec50;
        case 0x25ec54u: goto label_25ec54;
        case 0x25ec58u: goto label_25ec58;
        case 0x25ec5cu: goto label_25ec5c;
        case 0x25ec60u: goto label_25ec60;
        case 0x25ec64u: goto label_25ec64;
        case 0x25ec68u: goto label_25ec68;
        case 0x25ec6cu: goto label_25ec6c;
        case 0x25ec70u: goto label_25ec70;
        case 0x25ec74u: goto label_25ec74;
        case 0x25ec78u: goto label_25ec78;
        case 0x25ec7cu: goto label_25ec7c;
        case 0x25ec80u: goto label_25ec80;
        case 0x25ec84u: goto label_25ec84;
        case 0x25ec88u: goto label_25ec88;
        case 0x25ec8cu: goto label_25ec8c;
        case 0x25ec90u: goto label_25ec90;
        case 0x25ec94u: goto label_25ec94;
        case 0x25ec98u: goto label_25ec98;
        case 0x25ec9cu: goto label_25ec9c;
        case 0x25eca0u: goto label_25eca0;
        case 0x25eca4u: goto label_25eca4;
        case 0x25eca8u: goto label_25eca8;
        case 0x25ecacu: goto label_25ecac;
        case 0x25ecb0u: goto label_25ecb0;
        case 0x25ecb4u: goto label_25ecb4;
        case 0x25ecb8u: goto label_25ecb8;
        case 0x25ecbcu: goto label_25ecbc;
        case 0x25ecc0u: goto label_25ecc0;
        case 0x25ecc4u: goto label_25ecc4;
        case 0x25ecc8u: goto label_25ecc8;
        case 0x25ecccu: goto label_25eccc;
        case 0x25ecd0u: goto label_25ecd0;
        case 0x25ecd4u: goto label_25ecd4;
        case 0x25ecd8u: goto label_25ecd8;
        case 0x25ecdcu: goto label_25ecdc;
        case 0x25ece0u: goto label_25ece0;
        case 0x25ece4u: goto label_25ece4;
        case 0x25ece8u: goto label_25ece8;
        case 0x25ececu: goto label_25ecec;
        case 0x25ecf0u: goto label_25ecf0;
        case 0x25ecf4u: goto label_25ecf4;
        case 0x25ecf8u: goto label_25ecf8;
        case 0x25ecfcu: goto label_25ecfc;
        case 0x25ed00u: goto label_25ed00;
        case 0x25ed04u: goto label_25ed04;
        case 0x25ed08u: goto label_25ed08;
        case 0x25ed0cu: goto label_25ed0c;
        case 0x25ed10u: goto label_25ed10;
        case 0x25ed14u: goto label_25ed14;
        case 0x25ed18u: goto label_25ed18;
        case 0x25ed1cu: goto label_25ed1c;
        case 0x25ed20u: goto label_25ed20;
        case 0x25ed24u: goto label_25ed24;
        case 0x25ed28u: goto label_25ed28;
        case 0x25ed2cu: goto label_25ed2c;
        case 0x25ed30u: goto label_25ed30;
        case 0x25ed34u: goto label_25ed34;
        case 0x25ed38u: goto label_25ed38;
        case 0x25ed3cu: goto label_25ed3c;
        case 0x25ed40u: goto label_25ed40;
        case 0x25ed44u: goto label_25ed44;
        case 0x25ed48u: goto label_25ed48;
        case 0x25ed4cu: goto label_25ed4c;
        case 0x25ed50u: goto label_25ed50;
        case 0x25ed54u: goto label_25ed54;
        case 0x25ed58u: goto label_25ed58;
        case 0x25ed5cu: goto label_25ed5c;
        case 0x25ed60u: goto label_25ed60;
        case 0x25ed64u: goto label_25ed64;
        case 0x25ed68u: goto label_25ed68;
        case 0x25ed6cu: goto label_25ed6c;
        case 0x25ed70u: goto label_25ed70;
        case 0x25ed74u: goto label_25ed74;
        case 0x25ed78u: goto label_25ed78;
        case 0x25ed7cu: goto label_25ed7c;
        case 0x25ed80u: goto label_25ed80;
        case 0x25ed84u: goto label_25ed84;
        case 0x25ed88u: goto label_25ed88;
        case 0x25ed8cu: goto label_25ed8c;
        case 0x25ed90u: goto label_25ed90;
        case 0x25ed94u: goto label_25ed94;
        case 0x25ed98u: goto label_25ed98;
        case 0x25ed9cu: goto label_25ed9c;
        case 0x25eda0u: goto label_25eda0;
        case 0x25eda4u: goto label_25eda4;
        case 0x25eda8u: goto label_25eda8;
        case 0x25edacu: goto label_25edac;
        case 0x25edb0u: goto label_25edb0;
        case 0x25edb4u: goto label_25edb4;
        case 0x25edb8u: goto label_25edb8;
        case 0x25edbcu: goto label_25edbc;
        case 0x25edc0u: goto label_25edc0;
        case 0x25edc4u: goto label_25edc4;
        case 0x25edc8u: goto label_25edc8;
        case 0x25edccu: goto label_25edcc;
        case 0x25edd0u: goto label_25edd0;
        case 0x25edd4u: goto label_25edd4;
        case 0x25edd8u: goto label_25edd8;
        case 0x25eddcu: goto label_25eddc;
        case 0x25ede0u: goto label_25ede0;
        case 0x25ede4u: goto label_25ede4;
        case 0x25ede8u: goto label_25ede8;
        case 0x25edecu: goto label_25edec;
        case 0x25edf0u: goto label_25edf0;
        case 0x25edf4u: goto label_25edf4;
        case 0x25edf8u: goto label_25edf8;
        case 0x25edfcu: goto label_25edfc;
        case 0x25ee00u: goto label_25ee00;
        case 0x25ee04u: goto label_25ee04;
        case 0x25ee08u: goto label_25ee08;
        case 0x25ee0cu: goto label_25ee0c;
        case 0x25ee10u: goto label_25ee10;
        case 0x25ee14u: goto label_25ee14;
        case 0x25ee18u: goto label_25ee18;
        case 0x25ee1cu: goto label_25ee1c;
        case 0x25ee20u: goto label_25ee20;
        case 0x25ee24u: goto label_25ee24;
        case 0x25ee28u: goto label_25ee28;
        case 0x25ee2cu: goto label_25ee2c;
        case 0x25ee30u: goto label_25ee30;
        case 0x25ee34u: goto label_25ee34;
        case 0x25ee38u: goto label_25ee38;
        case 0x25ee3cu: goto label_25ee3c;
        case 0x25ee40u: goto label_25ee40;
        case 0x25ee44u: goto label_25ee44;
        case 0x25ee48u: goto label_25ee48;
        case 0x25ee4cu: goto label_25ee4c;
        case 0x25ee50u: goto label_25ee50;
        case 0x25ee54u: goto label_25ee54;
        case 0x25ee58u: goto label_25ee58;
        case 0x25ee5cu: goto label_25ee5c;
        case 0x25ee60u: goto label_25ee60;
        case 0x25ee64u: goto label_25ee64;
        case 0x25ee68u: goto label_25ee68;
        case 0x25ee6cu: goto label_25ee6c;
        case 0x25ee70u: goto label_25ee70;
        case 0x25ee74u: goto label_25ee74;
        case 0x25ee78u: goto label_25ee78;
        case 0x25ee7cu: goto label_25ee7c;
        case 0x25ee80u: goto label_25ee80;
        case 0x25ee84u: goto label_25ee84;
        case 0x25ee88u: goto label_25ee88;
        case 0x25ee8cu: goto label_25ee8c;
        case 0x25ee90u: goto label_25ee90;
        case 0x25ee94u: goto label_25ee94;
        case 0x25ee98u: goto label_25ee98;
        case 0x25ee9cu: goto label_25ee9c;
        case 0x25eea0u: goto label_25eea0;
        case 0x25eea4u: goto label_25eea4;
        case 0x25eea8u: goto label_25eea8;
        case 0x25eeacu: goto label_25eeac;
        case 0x25eeb0u: goto label_25eeb0;
        case 0x25eeb4u: goto label_25eeb4;
        case 0x25eeb8u: goto label_25eeb8;
        case 0x25eebcu: goto label_25eebc;
        case 0x25eec0u: goto label_25eec0;
        case 0x25eec4u: goto label_25eec4;
        case 0x25eec8u: goto label_25eec8;
        case 0x25eeccu: goto label_25eecc;
        case 0x25eed0u: goto label_25eed0;
        case 0x25eed4u: goto label_25eed4;
        case 0x25eed8u: goto label_25eed8;
        case 0x25eedcu: goto label_25eedc;
        case 0x25eee0u: goto label_25eee0;
        case 0x25eee4u: goto label_25eee4;
        case 0x25eee8u: goto label_25eee8;
        case 0x25eeecu: goto label_25eeec;
        case 0x25eef0u: goto label_25eef0;
        case 0x25eef4u: goto label_25eef4;
        case 0x25eef8u: goto label_25eef8;
        case 0x25eefcu: goto label_25eefc;
        case 0x25ef00u: goto label_25ef00;
        case 0x25ef04u: goto label_25ef04;
        case 0x25ef08u: goto label_25ef08;
        case 0x25ef0cu: goto label_25ef0c;
        case 0x25ef10u: goto label_25ef10;
        case 0x25ef14u: goto label_25ef14;
        case 0x25ef18u: goto label_25ef18;
        case 0x25ef1cu: goto label_25ef1c;
        case 0x25ef20u: goto label_25ef20;
        case 0x25ef24u: goto label_25ef24;
        case 0x25ef28u: goto label_25ef28;
        case 0x25ef2cu: goto label_25ef2c;
        case 0x25ef30u: goto label_25ef30;
        case 0x25ef34u: goto label_25ef34;
        case 0x25ef38u: goto label_25ef38;
        case 0x25ef3cu: goto label_25ef3c;
        case 0x25ef40u: goto label_25ef40;
        case 0x25ef44u: goto label_25ef44;
        case 0x25ef48u: goto label_25ef48;
        case 0x25ef4cu: goto label_25ef4c;
        case 0x25ef50u: goto label_25ef50;
        case 0x25ef54u: goto label_25ef54;
        case 0x25ef58u: goto label_25ef58;
        case 0x25ef5cu: goto label_25ef5c;
        case 0x25ef60u: goto label_25ef60;
        case 0x25ef64u: goto label_25ef64;
        case 0x25ef68u: goto label_25ef68;
        case 0x25ef6cu: goto label_25ef6c;
        case 0x25ef70u: goto label_25ef70;
        case 0x25ef74u: goto label_25ef74;
        case 0x25ef78u: goto label_25ef78;
        case 0x25ef7cu: goto label_25ef7c;
        case 0x25ef80u: goto label_25ef80;
        case 0x25ef84u: goto label_25ef84;
        case 0x25ef88u: goto label_25ef88;
        case 0x25ef8cu: goto label_25ef8c;
        case 0x25ef90u: goto label_25ef90;
        case 0x25ef94u: goto label_25ef94;
        case 0x25ef98u: goto label_25ef98;
        case 0x25ef9cu: goto label_25ef9c;
        case 0x25efa0u: goto label_25efa0;
        case 0x25efa4u: goto label_25efa4;
        case 0x25efa8u: goto label_25efa8;
        case 0x25efacu: goto label_25efac;
        case 0x25efb0u: goto label_25efb0;
        case 0x25efb4u: goto label_25efb4;
        case 0x25efb8u: goto label_25efb8;
        case 0x25efbcu: goto label_25efbc;
        case 0x25efc0u: goto label_25efc0;
        case 0x25efc4u: goto label_25efc4;
        case 0x25efc8u: goto label_25efc8;
        case 0x25efccu: goto label_25efcc;
        case 0x25efd0u: goto label_25efd0;
        case 0x25efd4u: goto label_25efd4;
        case 0x25efd8u: goto label_25efd8;
        case 0x25efdcu: goto label_25efdc;
        case 0x25efe0u: goto label_25efe0;
        case 0x25efe4u: goto label_25efe4;
        case 0x25efe8u: goto label_25efe8;
        case 0x25efecu: goto label_25efec;
        case 0x25eff0u: goto label_25eff0;
        case 0x25eff4u: goto label_25eff4;
        case 0x25eff8u: goto label_25eff8;
        case 0x25effcu: goto label_25effc;
        case 0x25f000u: goto label_25f000;
        case 0x25f004u: goto label_25f004;
        case 0x25f008u: goto label_25f008;
        case 0x25f00cu: goto label_25f00c;
        case 0x25f010u: goto label_25f010;
        case 0x25f014u: goto label_25f014;
        case 0x25f018u: goto label_25f018;
        case 0x25f01cu: goto label_25f01c;
        case 0x25f020u: goto label_25f020;
        case 0x25f024u: goto label_25f024;
        case 0x25f028u: goto label_25f028;
        case 0x25f02cu: goto label_25f02c;
        case 0x25f030u: goto label_25f030;
        case 0x25f034u: goto label_25f034;
        case 0x25f038u: goto label_25f038;
        case 0x25f03cu: goto label_25f03c;
        case 0x25f040u: goto label_25f040;
        case 0x25f044u: goto label_25f044;
        case 0x25f048u: goto label_25f048;
        case 0x25f04cu: goto label_25f04c;
        case 0x25f050u: goto label_25f050;
        case 0x25f054u: goto label_25f054;
        case 0x25f058u: goto label_25f058;
        case 0x25f05cu: goto label_25f05c;
        case 0x25f060u: goto label_25f060;
        case 0x25f064u: goto label_25f064;
        case 0x25f068u: goto label_25f068;
        case 0x25f06cu: goto label_25f06c;
        case 0x25f070u: goto label_25f070;
        case 0x25f074u: goto label_25f074;
        case 0x25f078u: goto label_25f078;
        case 0x25f07cu: goto label_25f07c;
        case 0x25f080u: goto label_25f080;
        case 0x25f084u: goto label_25f084;
        case 0x25f088u: goto label_25f088;
        case 0x25f08cu: goto label_25f08c;
        case 0x25f090u: goto label_25f090;
        case 0x25f094u: goto label_25f094;
        case 0x25f098u: goto label_25f098;
        case 0x25f09cu: goto label_25f09c;
        case 0x25f0a0u: goto label_25f0a0;
        case 0x25f0a4u: goto label_25f0a4;
        case 0x25f0a8u: goto label_25f0a8;
        case 0x25f0acu: goto label_25f0ac;
        case 0x25f0b0u: goto label_25f0b0;
        case 0x25f0b4u: goto label_25f0b4;
        case 0x25f0b8u: goto label_25f0b8;
        case 0x25f0bcu: goto label_25f0bc;
        case 0x25f0c0u: goto label_25f0c0;
        case 0x25f0c4u: goto label_25f0c4;
        case 0x25f0c8u: goto label_25f0c8;
        case 0x25f0ccu: goto label_25f0cc;
        case 0x25f0d0u: goto label_25f0d0;
        case 0x25f0d4u: goto label_25f0d4;
        case 0x25f0d8u: goto label_25f0d8;
        case 0x25f0dcu: goto label_25f0dc;
        case 0x25f0e0u: goto label_25f0e0;
        case 0x25f0e4u: goto label_25f0e4;
        case 0x25f0e8u: goto label_25f0e8;
        case 0x25f0ecu: goto label_25f0ec;
        case 0x25f0f0u: goto label_25f0f0;
        case 0x25f0f4u: goto label_25f0f4;
        case 0x25f0f8u: goto label_25f0f8;
        case 0x25f0fcu: goto label_25f0fc;
        case 0x25f100u: goto label_25f100;
        case 0x25f104u: goto label_25f104;
        case 0x25f108u: goto label_25f108;
        case 0x25f10cu: goto label_25f10c;
        case 0x25f110u: goto label_25f110;
        case 0x25f114u: goto label_25f114;
        case 0x25f118u: goto label_25f118;
        case 0x25f11cu: goto label_25f11c;
        case 0x25f120u: goto label_25f120;
        case 0x25f124u: goto label_25f124;
        case 0x25f128u: goto label_25f128;
        case 0x25f12cu: goto label_25f12c;
        case 0x25f130u: goto label_25f130;
        case 0x25f134u: goto label_25f134;
        case 0x25f138u: goto label_25f138;
        case 0x25f13cu: goto label_25f13c;
        case 0x25f140u: goto label_25f140;
        case 0x25f144u: goto label_25f144;
        case 0x25f148u: goto label_25f148;
        case 0x25f14cu: goto label_25f14c;
        case 0x25f150u: goto label_25f150;
        case 0x25f154u: goto label_25f154;
        case 0x25f158u: goto label_25f158;
        case 0x25f15cu: goto label_25f15c;
        case 0x25f160u: goto label_25f160;
        case 0x25f164u: goto label_25f164;
        case 0x25f168u: goto label_25f168;
        case 0x25f16cu: goto label_25f16c;
        case 0x25f170u: goto label_25f170;
        case 0x25f174u: goto label_25f174;
        case 0x25f178u: goto label_25f178;
        case 0x25f17cu: goto label_25f17c;
        case 0x25f180u: goto label_25f180;
        case 0x25f184u: goto label_25f184;
        case 0x25f188u: goto label_25f188;
        case 0x25f18cu: goto label_25f18c;
        case 0x25f190u: goto label_25f190;
        case 0x25f194u: goto label_25f194;
        case 0x25f198u: goto label_25f198;
        case 0x25f19cu: goto label_25f19c;
        case 0x25f1a0u: goto label_25f1a0;
        case 0x25f1a4u: goto label_25f1a4;
        case 0x25f1a8u: goto label_25f1a8;
        case 0x25f1acu: goto label_25f1ac;
        case 0x25f1b0u: goto label_25f1b0;
        case 0x25f1b4u: goto label_25f1b4;
        case 0x25f1b8u: goto label_25f1b8;
        case 0x25f1bcu: goto label_25f1bc;
        case 0x25f1c0u: goto label_25f1c0;
        case 0x25f1c4u: goto label_25f1c4;
        case 0x25f1c8u: goto label_25f1c8;
        case 0x25f1ccu: goto label_25f1cc;
        case 0x25f1d0u: goto label_25f1d0;
        case 0x25f1d4u: goto label_25f1d4;
        case 0x25f1d8u: goto label_25f1d8;
        case 0x25f1dcu: goto label_25f1dc;
        case 0x25f1e0u: goto label_25f1e0;
        case 0x25f1e4u: goto label_25f1e4;
        case 0x25f1e8u: goto label_25f1e8;
        case 0x25f1ecu: goto label_25f1ec;
        case 0x25f1f0u: goto label_25f1f0;
        case 0x25f1f4u: goto label_25f1f4;
        case 0x25f1f8u: goto label_25f1f8;
        case 0x25f1fcu: goto label_25f1fc;
        case 0x25f200u: goto label_25f200;
        case 0x25f204u: goto label_25f204;
        case 0x25f208u: goto label_25f208;
        case 0x25f20cu: goto label_25f20c;
        case 0x25f210u: goto label_25f210;
        case 0x25f214u: goto label_25f214;
        case 0x25f218u: goto label_25f218;
        case 0x25f21cu: goto label_25f21c;
        case 0x25f220u: goto label_25f220;
        case 0x25f224u: goto label_25f224;
        case 0x25f228u: goto label_25f228;
        case 0x25f22cu: goto label_25f22c;
        case 0x25f230u: goto label_25f230;
        case 0x25f234u: goto label_25f234;
        case 0x25f238u: goto label_25f238;
        case 0x25f23cu: goto label_25f23c;
        case 0x25f240u: goto label_25f240;
        case 0x25f244u: goto label_25f244;
        case 0x25f248u: goto label_25f248;
        case 0x25f24cu: goto label_25f24c;
        case 0x25f250u: goto label_25f250;
        case 0x25f254u: goto label_25f254;
        case 0x25f258u: goto label_25f258;
        case 0x25f25cu: goto label_25f25c;
        case 0x25f260u: goto label_25f260;
        case 0x25f264u: goto label_25f264;
        case 0x25f268u: goto label_25f268;
        case 0x25f26cu: goto label_25f26c;
        case 0x25f270u: goto label_25f270;
        case 0x25f274u: goto label_25f274;
        case 0x25f278u: goto label_25f278;
        case 0x25f27cu: goto label_25f27c;
        case 0x25f280u: goto label_25f280;
        case 0x25f284u: goto label_25f284;
        case 0x25f288u: goto label_25f288;
        case 0x25f28cu: goto label_25f28c;
        case 0x25f290u: goto label_25f290;
        case 0x25f294u: goto label_25f294;
        case 0x25f298u: goto label_25f298;
        case 0x25f29cu: goto label_25f29c;
        case 0x25f2a0u: goto label_25f2a0;
        case 0x25f2a4u: goto label_25f2a4;
        case 0x25f2a8u: goto label_25f2a8;
        case 0x25f2acu: goto label_25f2ac;
        case 0x25f2b0u: goto label_25f2b0;
        case 0x25f2b4u: goto label_25f2b4;
        case 0x25f2b8u: goto label_25f2b8;
        case 0x25f2bcu: goto label_25f2bc;
        case 0x25f2c0u: goto label_25f2c0;
        case 0x25f2c4u: goto label_25f2c4;
        case 0x25f2c8u: goto label_25f2c8;
        case 0x25f2ccu: goto label_25f2cc;
        case 0x25f2d0u: goto label_25f2d0;
        case 0x25f2d4u: goto label_25f2d4;
        case 0x25f2d8u: goto label_25f2d8;
        case 0x25f2dcu: goto label_25f2dc;
        case 0x25f2e0u: goto label_25f2e0;
        case 0x25f2e4u: goto label_25f2e4;
        case 0x25f2e8u: goto label_25f2e8;
        case 0x25f2ecu: goto label_25f2ec;
        case 0x25f2f0u: goto label_25f2f0;
        case 0x25f2f4u: goto label_25f2f4;
        case 0x25f2f8u: goto label_25f2f8;
        case 0x25f2fcu: goto label_25f2fc;
        case 0x25f300u: goto label_25f300;
        case 0x25f304u: goto label_25f304;
        case 0x25f308u: goto label_25f308;
        case 0x25f30cu: goto label_25f30c;
        case 0x25f310u: goto label_25f310;
        case 0x25f314u: goto label_25f314;
        case 0x25f318u: goto label_25f318;
        case 0x25f31cu: goto label_25f31c;
        case 0x25f320u: goto label_25f320;
        case 0x25f324u: goto label_25f324;
        case 0x25f328u: goto label_25f328;
        case 0x25f32cu: goto label_25f32c;
        case 0x25f330u: goto label_25f330;
        case 0x25f334u: goto label_25f334;
        case 0x25f338u: goto label_25f338;
        case 0x25f33cu: goto label_25f33c;
        case 0x25f340u: goto label_25f340;
        case 0x25f344u: goto label_25f344;
        case 0x25f348u: goto label_25f348;
        case 0x25f34cu: goto label_25f34c;
        case 0x25f350u: goto label_25f350;
        case 0x25f354u: goto label_25f354;
        case 0x25f358u: goto label_25f358;
        case 0x25f35cu: goto label_25f35c;
        case 0x25f360u: goto label_25f360;
        case 0x25f364u: goto label_25f364;
        case 0x25f368u: goto label_25f368;
        case 0x25f36cu: goto label_25f36c;
        case 0x25f370u: goto label_25f370;
        case 0x25f374u: goto label_25f374;
        case 0x25f378u: goto label_25f378;
        case 0x25f37cu: goto label_25f37c;
        case 0x25f380u: goto label_25f380;
        case 0x25f384u: goto label_25f384;
        case 0x25f388u: goto label_25f388;
        case 0x25f38cu: goto label_25f38c;
        case 0x25f390u: goto label_25f390;
        case 0x25f394u: goto label_25f394;
        case 0x25f398u: goto label_25f398;
        case 0x25f39cu: goto label_25f39c;
        case 0x25f3a0u: goto label_25f3a0;
        case 0x25f3a4u: goto label_25f3a4;
        case 0x25f3a8u: goto label_25f3a8;
        case 0x25f3acu: goto label_25f3ac;
        case 0x25f3b0u: goto label_25f3b0;
        case 0x25f3b4u: goto label_25f3b4;
        case 0x25f3b8u: goto label_25f3b8;
        case 0x25f3bcu: goto label_25f3bc;
        case 0x25f3c0u: goto label_25f3c0;
        case 0x25f3c4u: goto label_25f3c4;
        case 0x25f3c8u: goto label_25f3c8;
        case 0x25f3ccu: goto label_25f3cc;
        case 0x25f3d0u: goto label_25f3d0;
        case 0x25f3d4u: goto label_25f3d4;
        case 0x25f3d8u: goto label_25f3d8;
        case 0x25f3dcu: goto label_25f3dc;
        case 0x25f3e0u: goto label_25f3e0;
        case 0x25f3e4u: goto label_25f3e4;
        case 0x25f3e8u: goto label_25f3e8;
        case 0x25f3ecu: goto label_25f3ec;
        case 0x25f3f0u: goto label_25f3f0;
        case 0x25f3f4u: goto label_25f3f4;
        case 0x25f3f8u: goto label_25f3f8;
        case 0x25f3fcu: goto label_25f3fc;
        case 0x25f400u: goto label_25f400;
        case 0x25f404u: goto label_25f404;
        case 0x25f408u: goto label_25f408;
        case 0x25f40cu: goto label_25f40c;
        case 0x25f410u: goto label_25f410;
        case 0x25f414u: goto label_25f414;
        case 0x25f418u: goto label_25f418;
        case 0x25f41cu: goto label_25f41c;
        case 0x25f420u: goto label_25f420;
        case 0x25f424u: goto label_25f424;
        case 0x25f428u: goto label_25f428;
        case 0x25f42cu: goto label_25f42c;
        case 0x25f430u: goto label_25f430;
        case 0x25f434u: goto label_25f434;
        case 0x25f438u: goto label_25f438;
        case 0x25f43cu: goto label_25f43c;
        case 0x25f440u: goto label_25f440;
        case 0x25f444u: goto label_25f444;
        case 0x25f448u: goto label_25f448;
        case 0x25f44cu: goto label_25f44c;
        case 0x25f450u: goto label_25f450;
        case 0x25f454u: goto label_25f454;
        case 0x25f458u: goto label_25f458;
        case 0x25f45cu: goto label_25f45c;
        case 0x25f460u: goto label_25f460;
        case 0x25f464u: goto label_25f464;
        case 0x25f468u: goto label_25f468;
        case 0x25f46cu: goto label_25f46c;
        case 0x25f470u: goto label_25f470;
        case 0x25f474u: goto label_25f474;
        case 0x25f478u: goto label_25f478;
        case 0x25f47cu: goto label_25f47c;
        case 0x25f480u: goto label_25f480;
        case 0x25f484u: goto label_25f484;
        case 0x25f488u: goto label_25f488;
        case 0x25f48cu: goto label_25f48c;
        case 0x25f490u: goto label_25f490;
        case 0x25f494u: goto label_25f494;
        case 0x25f498u: goto label_25f498;
        case 0x25f49cu: goto label_25f49c;
        case 0x25f4a0u: goto label_25f4a0;
        case 0x25f4a4u: goto label_25f4a4;
        case 0x25f4a8u: goto label_25f4a8;
        case 0x25f4acu: goto label_25f4ac;
        case 0x25f4b0u: goto label_25f4b0;
        case 0x25f4b4u: goto label_25f4b4;
        case 0x25f4b8u: goto label_25f4b8;
        case 0x25f4bcu: goto label_25f4bc;
        case 0x25f4c0u: goto label_25f4c0;
        case 0x25f4c4u: goto label_25f4c4;
        case 0x25f4c8u: goto label_25f4c8;
        case 0x25f4ccu: goto label_25f4cc;
        case 0x25f4d0u: goto label_25f4d0;
        case 0x25f4d4u: goto label_25f4d4;
        case 0x25f4d8u: goto label_25f4d8;
        case 0x25f4dcu: goto label_25f4dc;
        case 0x25f4e0u: goto label_25f4e0;
        case 0x25f4e4u: goto label_25f4e4;
        case 0x25f4e8u: goto label_25f4e8;
        case 0x25f4ecu: goto label_25f4ec;
        case 0x25f4f0u: goto label_25f4f0;
        case 0x25f4f4u: goto label_25f4f4;
        case 0x25f4f8u: goto label_25f4f8;
        case 0x25f4fcu: goto label_25f4fc;
        case 0x25f500u: goto label_25f500;
        case 0x25f504u: goto label_25f504;
        case 0x25f508u: goto label_25f508;
        case 0x25f50cu: goto label_25f50c;
        case 0x25f510u: goto label_25f510;
        case 0x25f514u: goto label_25f514;
        case 0x25f518u: goto label_25f518;
        case 0x25f51cu: goto label_25f51c;
        case 0x25f520u: goto label_25f520;
        case 0x25f524u: goto label_25f524;
        case 0x25f528u: goto label_25f528;
        case 0x25f52cu: goto label_25f52c;
        case 0x25f530u: goto label_25f530;
        case 0x25f534u: goto label_25f534;
        case 0x25f538u: goto label_25f538;
        case 0x25f53cu: goto label_25f53c;
        case 0x25f540u: goto label_25f540;
        case 0x25f544u: goto label_25f544;
        case 0x25f548u: goto label_25f548;
        case 0x25f54cu: goto label_25f54c;
        case 0x25f550u: goto label_25f550;
        case 0x25f554u: goto label_25f554;
        case 0x25f558u: goto label_25f558;
        case 0x25f55cu: goto label_25f55c;
        case 0x25f560u: goto label_25f560;
        case 0x25f564u: goto label_25f564;
        case 0x25f568u: goto label_25f568;
        case 0x25f56cu: goto label_25f56c;
        case 0x25f570u: goto label_25f570;
        case 0x25f574u: goto label_25f574;
        case 0x25f578u: goto label_25f578;
        case 0x25f57cu: goto label_25f57c;
        case 0x25f580u: goto label_25f580;
        case 0x25f584u: goto label_25f584;
        case 0x25f588u: goto label_25f588;
        case 0x25f58cu: goto label_25f58c;
        case 0x25f590u: goto label_25f590;
        case 0x25f594u: goto label_25f594;
        case 0x25f598u: goto label_25f598;
        case 0x25f59cu: goto label_25f59c;
        case 0x25f5a0u: goto label_25f5a0;
        case 0x25f5a4u: goto label_25f5a4;
        case 0x25f5a8u: goto label_25f5a8;
        case 0x25f5acu: goto label_25f5ac;
        case 0x25f5b0u: goto label_25f5b0;
        case 0x25f5b4u: goto label_25f5b4;
        case 0x25f5b8u: goto label_25f5b8;
        case 0x25f5bcu: goto label_25f5bc;
        case 0x25f5c0u: goto label_25f5c0;
        case 0x25f5c4u: goto label_25f5c4;
        case 0x25f5c8u: goto label_25f5c8;
        case 0x25f5ccu: goto label_25f5cc;
        case 0x25f5d0u: goto label_25f5d0;
        case 0x25f5d4u: goto label_25f5d4;
        case 0x25f5d8u: goto label_25f5d8;
        case 0x25f5dcu: goto label_25f5dc;
        case 0x25f5e0u: goto label_25f5e0;
        case 0x25f5e4u: goto label_25f5e4;
        case 0x25f5e8u: goto label_25f5e8;
        case 0x25f5ecu: goto label_25f5ec;
        case 0x25f5f0u: goto label_25f5f0;
        case 0x25f5f4u: goto label_25f5f4;
        case 0x25f5f8u: goto label_25f5f8;
        case 0x25f5fcu: goto label_25f5fc;
        case 0x25f600u: goto label_25f600;
        case 0x25f604u: goto label_25f604;
        case 0x25f608u: goto label_25f608;
        case 0x25f60cu: goto label_25f60c;
        case 0x25f610u: goto label_25f610;
        case 0x25f614u: goto label_25f614;
        case 0x25f618u: goto label_25f618;
        case 0x25f61cu: goto label_25f61c;
        case 0x25f620u: goto label_25f620;
        case 0x25f624u: goto label_25f624;
        case 0x25f628u: goto label_25f628;
        case 0x25f62cu: goto label_25f62c;
        case 0x25f630u: goto label_25f630;
        case 0x25f634u: goto label_25f634;
        case 0x25f638u: goto label_25f638;
        case 0x25f63cu: goto label_25f63c;
        case 0x25f640u: goto label_25f640;
        case 0x25f644u: goto label_25f644;
        case 0x25f648u: goto label_25f648;
        case 0x25f64cu: goto label_25f64c;
        case 0x25f650u: goto label_25f650;
        case 0x25f654u: goto label_25f654;
        case 0x25f658u: goto label_25f658;
        case 0x25f65cu: goto label_25f65c;
        case 0x25f660u: goto label_25f660;
        case 0x25f664u: goto label_25f664;
        case 0x25f668u: goto label_25f668;
        case 0x25f66cu: goto label_25f66c;
        case 0x25f670u: goto label_25f670;
        case 0x25f674u: goto label_25f674;
        case 0x25f678u: goto label_25f678;
        case 0x25f67cu: goto label_25f67c;
        case 0x25f680u: goto label_25f680;
        case 0x25f684u: goto label_25f684;
        case 0x25f688u: goto label_25f688;
        case 0x25f68cu: goto label_25f68c;
        case 0x25f690u: goto label_25f690;
        case 0x25f694u: goto label_25f694;
        case 0x25f698u: goto label_25f698;
        case 0x25f69cu: goto label_25f69c;
        case 0x25f6a0u: goto label_25f6a0;
        case 0x25f6a4u: goto label_25f6a4;
        case 0x25f6a8u: goto label_25f6a8;
        case 0x25f6acu: goto label_25f6ac;
        case 0x25f6b0u: goto label_25f6b0;
        case 0x25f6b4u: goto label_25f6b4;
        case 0x25f6b8u: goto label_25f6b8;
        case 0x25f6bcu: goto label_25f6bc;
        case 0x25f6c0u: goto label_25f6c0;
        case 0x25f6c4u: goto label_25f6c4;
        case 0x25f6c8u: goto label_25f6c8;
        case 0x25f6ccu: goto label_25f6cc;
        case 0x25f6d0u: goto label_25f6d0;
        case 0x25f6d4u: goto label_25f6d4;
        case 0x25f6d8u: goto label_25f6d8;
        case 0x25f6dcu: goto label_25f6dc;
        case 0x25f6e0u: goto label_25f6e0;
        case 0x25f6e4u: goto label_25f6e4;
        case 0x25f6e8u: goto label_25f6e8;
        case 0x25f6ecu: goto label_25f6ec;
        case 0x25f6f0u: goto label_25f6f0;
        case 0x25f6f4u: goto label_25f6f4;
        case 0x25f6f8u: goto label_25f6f8;
        case 0x25f6fcu: goto label_25f6fc;
        case 0x25f700u: goto label_25f700;
        case 0x25f704u: goto label_25f704;
        case 0x25f708u: goto label_25f708;
        case 0x25f70cu: goto label_25f70c;
        case 0x25f710u: goto label_25f710;
        case 0x25f714u: goto label_25f714;
        case 0x25f718u: goto label_25f718;
        case 0x25f71cu: goto label_25f71c;
        case 0x25f720u: goto label_25f720;
        case 0x25f724u: goto label_25f724;
        case 0x25f728u: goto label_25f728;
        case 0x25f72cu: goto label_25f72c;
        case 0x25f730u: goto label_25f730;
        case 0x25f734u: goto label_25f734;
        case 0x25f738u: goto label_25f738;
        case 0x25f73cu: goto label_25f73c;
        case 0x25f740u: goto label_25f740;
        case 0x25f744u: goto label_25f744;
        case 0x25f748u: goto label_25f748;
        case 0x25f74cu: goto label_25f74c;
        case 0x25f750u: goto label_25f750;
        case 0x25f754u: goto label_25f754;
        case 0x25f758u: goto label_25f758;
        case 0x25f75cu: goto label_25f75c;
        case 0x25f760u: goto label_25f760;
        case 0x25f764u: goto label_25f764;
        case 0x25f768u: goto label_25f768;
        case 0x25f76cu: goto label_25f76c;
        case 0x25f770u: goto label_25f770;
        case 0x25f774u: goto label_25f774;
        case 0x25f778u: goto label_25f778;
        case 0x25f77cu: goto label_25f77c;
        case 0x25f780u: goto label_25f780;
        case 0x25f784u: goto label_25f784;
        case 0x25f788u: goto label_25f788;
        case 0x25f78cu: goto label_25f78c;
        case 0x25f790u: goto label_25f790;
        case 0x25f794u: goto label_25f794;
        case 0x25f798u: goto label_25f798;
        case 0x25f79cu: goto label_25f79c;
        case 0x25f7a0u: goto label_25f7a0;
        case 0x25f7a4u: goto label_25f7a4;
        case 0x25f7a8u: goto label_25f7a8;
        case 0x25f7acu: goto label_25f7ac;
        case 0x25f7b0u: goto label_25f7b0;
        case 0x25f7b4u: goto label_25f7b4;
        case 0x25f7b8u: goto label_25f7b8;
        case 0x25f7bcu: goto label_25f7bc;
        case 0x25f7c0u: goto label_25f7c0;
        case 0x25f7c4u: goto label_25f7c4;
        case 0x25f7c8u: goto label_25f7c8;
        case 0x25f7ccu: goto label_25f7cc;
        case 0x25f7d0u: goto label_25f7d0;
        case 0x25f7d4u: goto label_25f7d4;
        case 0x25f7d8u: goto label_25f7d8;
        case 0x25f7dcu: goto label_25f7dc;
        case 0x25f7e0u: goto label_25f7e0;
        case 0x25f7e4u: goto label_25f7e4;
        case 0x25f7e8u: goto label_25f7e8;
        case 0x25f7ecu: goto label_25f7ec;
        case 0x25f7f0u: goto label_25f7f0;
        case 0x25f7f4u: goto label_25f7f4;
        case 0x25f7f8u: goto label_25f7f8;
        case 0x25f7fcu: goto label_25f7fc;
        case 0x25f800u: goto label_25f800;
        case 0x25f804u: goto label_25f804;
        case 0x25f808u: goto label_25f808;
        case 0x25f80cu: goto label_25f80c;
        case 0x25f810u: goto label_25f810;
        case 0x25f814u: goto label_25f814;
        case 0x25f818u: goto label_25f818;
        case 0x25f81cu: goto label_25f81c;
        case 0x25f820u: goto label_25f820;
        case 0x25f824u: goto label_25f824;
        case 0x25f828u: goto label_25f828;
        case 0x25f82cu: goto label_25f82c;
        case 0x25f830u: goto label_25f830;
        case 0x25f834u: goto label_25f834;
        case 0x25f838u: goto label_25f838;
        case 0x25f83cu: goto label_25f83c;
        case 0x25f840u: goto label_25f840;
        case 0x25f844u: goto label_25f844;
        case 0x25f848u: goto label_25f848;
        case 0x25f84cu: goto label_25f84c;
        case 0x25f850u: goto label_25f850;
        case 0x25f854u: goto label_25f854;
        case 0x25f858u: goto label_25f858;
        case 0x25f85cu: goto label_25f85c;
        case 0x25f860u: goto label_25f860;
        case 0x25f864u: goto label_25f864;
        case 0x25f868u: goto label_25f868;
        case 0x25f86cu: goto label_25f86c;
        case 0x25f870u: goto label_25f870;
        case 0x25f874u: goto label_25f874;
        case 0x25f878u: goto label_25f878;
        case 0x25f87cu: goto label_25f87c;
        case 0x25f880u: goto label_25f880;
        case 0x25f884u: goto label_25f884;
        case 0x25f888u: goto label_25f888;
        case 0x25f88cu: goto label_25f88c;
        case 0x25f890u: goto label_25f890;
        case 0x25f894u: goto label_25f894;
        case 0x25f898u: goto label_25f898;
        case 0x25f89cu: goto label_25f89c;
        case 0x25f8a0u: goto label_25f8a0;
        case 0x25f8a4u: goto label_25f8a4;
        case 0x25f8a8u: goto label_25f8a8;
        case 0x25f8acu: goto label_25f8ac;
        case 0x25f8b0u: goto label_25f8b0;
        case 0x25f8b4u: goto label_25f8b4;
        case 0x25f8b8u: goto label_25f8b8;
        case 0x25f8bcu: goto label_25f8bc;
        case 0x25f8c0u: goto label_25f8c0;
        case 0x25f8c4u: goto label_25f8c4;
        case 0x25f8c8u: goto label_25f8c8;
        case 0x25f8ccu: goto label_25f8cc;
        case 0x25f8d0u: goto label_25f8d0;
        case 0x25f8d4u: goto label_25f8d4;
        case 0x25f8d8u: goto label_25f8d8;
        case 0x25f8dcu: goto label_25f8dc;
        case 0x25f8e0u: goto label_25f8e0;
        case 0x25f8e4u: goto label_25f8e4;
        case 0x25f8e8u: goto label_25f8e8;
        case 0x25f8ecu: goto label_25f8ec;
        case 0x25f8f0u: goto label_25f8f0;
        case 0x25f8f4u: goto label_25f8f4;
        case 0x25f8f8u: goto label_25f8f8;
        case 0x25f8fcu: goto label_25f8fc;
        case 0x25f900u: goto label_25f900;
        case 0x25f904u: goto label_25f904;
        case 0x25f908u: goto label_25f908;
        case 0x25f90cu: goto label_25f90c;
        case 0x25f910u: goto label_25f910;
        case 0x25f914u: goto label_25f914;
        case 0x25f918u: goto label_25f918;
        case 0x25f91cu: goto label_25f91c;
        case 0x25f920u: goto label_25f920;
        case 0x25f924u: goto label_25f924;
        case 0x25f928u: goto label_25f928;
        case 0x25f92cu: goto label_25f92c;
        case 0x25f930u: goto label_25f930;
        case 0x25f934u: goto label_25f934;
        case 0x25f938u: goto label_25f938;
        case 0x25f93cu: goto label_25f93c;
        case 0x25f940u: goto label_25f940;
        case 0x25f944u: goto label_25f944;
        case 0x25f948u: goto label_25f948;
        case 0x25f94cu: goto label_25f94c;
        case 0x25f950u: goto label_25f950;
        case 0x25f954u: goto label_25f954;
        case 0x25f958u: goto label_25f958;
        case 0x25f95cu: goto label_25f95c;
        case 0x25f960u: goto label_25f960;
        case 0x25f964u: goto label_25f964;
        case 0x25f968u: goto label_25f968;
        case 0x25f96cu: goto label_25f96c;
        case 0x25f970u: goto label_25f970;
        case 0x25f974u: goto label_25f974;
        case 0x25f978u: goto label_25f978;
        case 0x25f97cu: goto label_25f97c;
        case 0x25f980u: goto label_25f980;
        case 0x25f984u: goto label_25f984;
        case 0x25f988u: goto label_25f988;
        case 0x25f98cu: goto label_25f98c;
        case 0x25f990u: goto label_25f990;
        case 0x25f994u: goto label_25f994;
        case 0x25f998u: goto label_25f998;
        case 0x25f99cu: goto label_25f99c;
        case 0x25f9a0u: goto label_25f9a0;
        case 0x25f9a4u: goto label_25f9a4;
        case 0x25f9a8u: goto label_25f9a8;
        case 0x25f9acu: goto label_25f9ac;
        case 0x25f9b0u: goto label_25f9b0;
        case 0x25f9b4u: goto label_25f9b4;
        case 0x25f9b8u: goto label_25f9b8;
        case 0x25f9bcu: goto label_25f9bc;
        case 0x25f9c0u: goto label_25f9c0;
        case 0x25f9c4u: goto label_25f9c4;
        case 0x25f9c8u: goto label_25f9c8;
        case 0x25f9ccu: goto label_25f9cc;
        case 0x25f9d0u: goto label_25f9d0;
        case 0x25f9d4u: goto label_25f9d4;
        case 0x25f9d8u: goto label_25f9d8;
        case 0x25f9dcu: goto label_25f9dc;
        case 0x25f9e0u: goto label_25f9e0;
        case 0x25f9e4u: goto label_25f9e4;
        case 0x25f9e8u: goto label_25f9e8;
        case 0x25f9ecu: goto label_25f9ec;
        case 0x25f9f0u: goto label_25f9f0;
        case 0x25f9f4u: goto label_25f9f4;
        case 0x25f9f8u: goto label_25f9f8;
        case 0x25f9fcu: goto label_25f9fc;
        case 0x25fa00u: goto label_25fa00;
        case 0x25fa04u: goto label_25fa04;
        case 0x25fa08u: goto label_25fa08;
        case 0x25fa0cu: goto label_25fa0c;
        case 0x25fa10u: goto label_25fa10;
        case 0x25fa14u: goto label_25fa14;
        case 0x25fa18u: goto label_25fa18;
        case 0x25fa1cu: goto label_25fa1c;
        case 0x25fa20u: goto label_25fa20;
        case 0x25fa24u: goto label_25fa24;
        case 0x25fa28u: goto label_25fa28;
        case 0x25fa2cu: goto label_25fa2c;
        case 0x25fa30u: goto label_25fa30;
        case 0x25fa34u: goto label_25fa34;
        case 0x25fa38u: goto label_25fa38;
        case 0x25fa3cu: goto label_25fa3c;
        case 0x25fa40u: goto label_25fa40;
        case 0x25fa44u: goto label_25fa44;
        case 0x25fa48u: goto label_25fa48;
        case 0x25fa4cu: goto label_25fa4c;
        case 0x25fa50u: goto label_25fa50;
        case 0x25fa54u: goto label_25fa54;
        case 0x25fa58u: goto label_25fa58;
        case 0x25fa5cu: goto label_25fa5c;
        case 0x25fa60u: goto label_25fa60;
        case 0x25fa64u: goto label_25fa64;
        case 0x25fa68u: goto label_25fa68;
        case 0x25fa6cu: goto label_25fa6c;
        case 0x25fa70u: goto label_25fa70;
        case 0x25fa74u: goto label_25fa74;
        case 0x25fa78u: goto label_25fa78;
        case 0x25fa7cu: goto label_25fa7c;
        case 0x25fa80u: goto label_25fa80;
        case 0x25fa84u: goto label_25fa84;
        case 0x25fa88u: goto label_25fa88;
        case 0x25fa8cu: goto label_25fa8c;
        case 0x25fa90u: goto label_25fa90;
        case 0x25fa94u: goto label_25fa94;
        case 0x25fa98u: goto label_25fa98;
        case 0x25fa9cu: goto label_25fa9c;
        case 0x25faa0u: goto label_25faa0;
        case 0x25faa4u: goto label_25faa4;
        case 0x25faa8u: goto label_25faa8;
        case 0x25faacu: goto label_25faac;
        default: break;
    }

    ctx->pc = 0x25e170u;

label_25e170:
    // 0x25e170: 0x27bdf8f0  addiu       $sp, $sp, -0x710
    ctx->pc = 0x25e170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965488));
label_25e174:
    // 0x25e174: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x25e174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
label_25e178:
    // 0x25e178: 0x7fbe00c0  sq          $fp, 0xC0($sp)
    ctx->pc = 0x25e178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 30));
label_25e17c:
    // 0x25e17c: 0x7fb700b0  sq          $s7, 0xB0($sp)
    ctx->pc = 0x25e17cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 23));
label_25e180:
    // 0x25e180: 0x7fb600a0  sq          $s6, 0xA0($sp)
    ctx->pc = 0x25e180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 22));
label_25e184:
    // 0x25e184: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x25e184u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
label_25e188:
    // 0x25e188: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x25e188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
label_25e18c:
    // 0x25e18c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x25e18cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_25e190:
    // 0x25e190: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x25e190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_25e194:
    // 0x25e194: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x25e194u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_25e198:
    // 0x25e198: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x25e198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_25e19c:
    // 0x25e19c: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x25e19cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_25e1a0:
    // 0x25e1a0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x25e1a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_25e1a4:
    // 0x25e1a4: 0xe7be0038  swc1        $f30, 0x38($sp)
    ctx->pc = 0x25e1a4u;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_25e1a8:
    // 0x25e1a8: 0xe7bd0034  swc1        $f29, 0x34($sp)
    ctx->pc = 0x25e1a8u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_25e1ac:
    // 0x25e1ac: 0xe7bc0030  swc1        $f28, 0x30($sp)
    ctx->pc = 0x25e1acu;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_25e1b0:
    // 0x25e1b0: 0xe7bb002c  swc1        $f27, 0x2C($sp)
    ctx->pc = 0x25e1b0u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_25e1b4:
    // 0x25e1b4: 0xe7ba0028  swc1        $f26, 0x28($sp)
    ctx->pc = 0x25e1b4u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_25e1b8:
    // 0x25e1b8: 0xe7b90024  swc1        $f25, 0x24($sp)
    ctx->pc = 0x25e1b8u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_25e1bc:
    // 0x25e1bc: 0xe7b80020  swc1        $f24, 0x20($sp)
    ctx->pc = 0x25e1bcu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_25e1c0:
    // 0x25e1c0: 0xe7b7001c  swc1        $f23, 0x1C($sp)
    ctx->pc = 0x25e1c0u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_25e1c4:
    // 0x25e1c4: 0xe7b60018  swc1        $f22, 0x18($sp)
    ctx->pc = 0x25e1c4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_25e1c8:
    // 0x25e1c8: 0xe7b50014  swc1        $f21, 0x14($sp)
    ctx->pc = 0x25e1c8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_25e1cc:
    // 0x25e1cc: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x25e1ccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_25e1d0:
    // 0x25e1d0: 0xafa5013c  sw          $a1, 0x13C($sp)
    ctx->pc = 0x25e1d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 5));
label_25e1d4:
    // 0x25e1d4: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x25e1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_25e1d8:
    // 0x25e1d8: 0x8c430030  lw          $v1, 0x30($v0)
    ctx->pc = 0x25e1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_25e1dc:
    // 0x25e1dc: 0x27a206d4  addiu       $v0, $sp, 0x6D4
    ctx->pc = 0x25e1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1748));
label_25e1e0:
    // 0x25e1e0: 0xe44d0000  swc1        $f13, 0x0($v0)
    ctx->pc = 0x25e1e0u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_25e1e4:
    // 0x25e1e4: 0xe7ae06d0  swc1        $f14, 0x6D0($sp)
    ctx->pc = 0x25e1e4u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1744), bits); }
label_25e1e8:
    // 0x25e1e8: 0x27a206e0  addiu       $v0, $sp, 0x6E0
    ctx->pc = 0x25e1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1760));
label_25e1ec:
    // 0x25e1ec: 0xc460002c  lwc1        $f0, 0x2C($v1)
    ctx->pc = 0x25e1ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25e1f0:
    // 0x25e1f0: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x25e1f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
label_25e1f4:
    // 0x25e1f4: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x25e1f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_25e1f8:
    // 0x25e1f8: 0xc460001c  lwc1        $f0, 0x1C($v1)
    ctx->pc = 0x25e1f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25e1fc:
    // 0x25e1fc: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x25e1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_25e200:
    // 0x25e200: 0xc4620020  lwc1        $f2, 0x20($v1)
    ctx->pc = 0x25e200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_25e204:
    // 0x25e204: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x25e204u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
label_25e208:
    // 0x25e208: 0xc441002c  lwc1        $f1, 0x2C($v0)
    ctx->pc = 0x25e208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25e20c:
    // 0x25e20c: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x25e20cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_25e210:
    // 0x25e210: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_25e214:
    if (ctx->pc == 0x25E214u) {
        ctx->pc = 0x25E214u;
            // 0x25e214: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25E218u;
        goto label_25e218;
    }
    ctx->pc = 0x25E210u;
    {
        const bool branch_taken_0x25e210 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x25E214u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E210u;
            // 0x25e214: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e210) {
            ctx->pc = 0x25E220u;
            goto label_25e220;
        }
    }
    ctx->pc = 0x25E218u;
label_25e218:
    // 0x25e218: 0x10000003  b           . + 4 + (0x3 << 2)
label_25e21c:
    if (ctx->pc == 0x25E21Cu) {
        ctx->pc = 0x25E21Cu;
            // 0x25e21c: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x25E220u;
        goto label_25e220;
    }
    ctx->pc = 0x25E218u;
    {
        const bool branch_taken_0x25e218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E21Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E218u;
            // 0x25e21c: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e218) {
            ctx->pc = 0x25E228u;
            goto label_25e228;
        }
    }
    ctx->pc = 0x25E220u;
label_25e220:
    // 0x25e220: 0x46001006  mov.s       $f0, $f2
    ctx->pc = 0x25e220u;
    ctx->f[0] = FPU_MOV_S(ctx->f[2]);
label_25e224:
    // 0x25e224: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x25e224u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_25e228:
    // 0x25e228: 0xa3a000f0  sb          $zero, 0xF0($sp)
    ctx->pc = 0x25e228u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 240), (uint8_t)GPR_U32(ctx, 0));
label_25e22c:
    // 0x25e22c: 0x27a206d8  addiu       $v0, $sp, 0x6D8
    ctx->pc = 0x25e22cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1752));
label_25e230:
    // 0x25e230: 0x27a704e0  addiu       $a3, $sp, 0x4E0
    ctx->pc = 0x25e230u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1248));
label_25e234:
    // 0x25e234: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x25e234u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25e238:
    // 0x25e238: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x25e238u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_25e23c:
    // 0x25e23c: 0xc4600034  lwc1        $f0, 0x34($v1)
    ctx->pc = 0x25e23cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25e240:
    // 0x25e240: 0x8fa5013c  lw          $a1, 0x13C($sp)
    ctx->pc = 0x25e240u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
label_25e244:
    // 0x25e244: 0x27a206dc  addiu       $v0, $sp, 0x6DC
    ctx->pc = 0x25e244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1756));
label_25e248:
    // 0x25e248: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x25e248u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_25e24c:
    // 0x25e24c: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x25e24cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_25e250:
    // 0x25e250: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x25e250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_25e254:
    // 0x25e254: 0x8c5e0000  lw          $fp, 0x0($v0)
    ctx->pc = 0x25e254u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_25e258:
    // 0x25e258: 0x8c520008  lw          $s2, 0x8($v0)
    ctx->pc = 0x25e258u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_25e25c:
    // 0x25e25c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x25e25cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_25e260:
    // 0x25e260: 0xafa20120  sw          $v0, 0x120($sp)
    ctx->pc = 0x25e260u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 2));
label_25e264:
    // 0x25e264: 0x8c710008  lw          $s1, 0x8($v1)
    ctx->pc = 0x25e264u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_25e268:
    // 0x25e268: 0x27a20648  addiu       $v0, $sp, 0x648
    ctx->pc = 0x25e268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1608));
label_25e26c:
    // 0x25e26c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x25e26cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_25e270:
    // 0x25e270: 0x8ea20008  lw          $v0, 0x8($s5)
    ctx->pc = 0x25e270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_25e274:
    // 0x25e274: 0xc649005c  lwc1        $f9, 0x5C($s2)
    ctx->pc = 0x25e274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_25e278:
    // 0x25e278: 0xc6400090  lwc1        $f0, 0x90($s2)
    ctx->pc = 0x25e278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25e27c:
    // 0x25e27c: 0xc6470094  lwc1        $f7, 0x94($s2)
    ctx->pc = 0x25e27cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_25e280:
    // 0x25e280: 0xc628005c  lwc1        $f8, 0x5C($s1)
    ctx->pc = 0x25e280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_25e284:
    // 0x25e284: 0xc6460098  lwc1        $f6, 0x98($s2)
    ctx->pc = 0x25e284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_25e288:
    // 0x25e288: 0xc645009c  lwc1        $f5, 0x9C($s2)
    ctx->pc = 0x25e288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_25e28c:
    // 0x25e28c: 0xc44a0028  lwc1        $f10, 0x28($v0)
    ctx->pc = 0x25e28cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_25e290:
    // 0x25e290: 0xc6240090  lwc1        $f4, 0x90($s1)
    ctx->pc = 0x25e290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_25e294:
    // 0x25e294: 0xc6230094  lwc1        $f3, 0x94($s1)
    ctx->pc = 0x25e294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_25e298:
    // 0x25e298: 0xc6220098  lwc1        $f2, 0x98($s1)
    ctx->pc = 0x25e298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_25e29c:
    // 0x25e29c: 0xc621009c  lwc1        $f1, 0x9C($s1)
    ctx->pc = 0x25e29cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25e2a0:
    // 0x25e2a0: 0x46095242  mul.s       $f9, $f10, $f9
    ctx->pc = 0x25e2a0u;
    ctx->f[9] = FPU_MUL_S(ctx->f[10], ctx->f[9]);
label_25e2a4:
    // 0x25e2a4: 0x27a206a0  addiu       $v0, $sp, 0x6A0
    ctx->pc = 0x25e2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1696));
label_25e2a8:
    // 0x25e2a8: 0x46004802  mul.s       $f0, $f9, $f0
    ctx->pc = 0x25e2a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[9], ctx->f[0]);
label_25e2ac:
    // 0x25e2ac: 0x46085202  mul.s       $f8, $f10, $f8
    ctx->pc = 0x25e2acu;
    ctx->f[8] = FPU_MUL_S(ctx->f[10], ctx->f[8]);
label_25e2b0:
    // 0x25e2b0: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x25e2b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_25e2b4:
    // 0x25e2b4: 0x460749c2  mul.s       $f7, $f9, $f7
    ctx->pc = 0x25e2b4u;
    ctx->f[7] = FPU_MUL_S(ctx->f[9], ctx->f[7]);
label_25e2b8:
    // 0x25e2b8: 0x27a206a4  addiu       $v0, $sp, 0x6A4
    ctx->pc = 0x25e2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1700));
label_25e2bc:
    // 0x25e2bc: 0xe4470000  swc1        $f7, 0x0($v0)
    ctx->pc = 0x25e2bcu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_25e2c0:
    // 0x25e2c0: 0x46064982  mul.s       $f6, $f9, $f6
    ctx->pc = 0x25e2c0u;
    ctx->f[6] = FPU_MUL_S(ctx->f[9], ctx->f[6]);
label_25e2c4:
    // 0x25e2c4: 0x27a206a8  addiu       $v0, $sp, 0x6A8
    ctx->pc = 0x25e2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1704));
label_25e2c8:
    // 0x25e2c8: 0xe4460000  swc1        $f6, 0x0($v0)
    ctx->pc = 0x25e2c8u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_25e2cc:
    // 0x25e2cc: 0x46054942  mul.s       $f5, $f9, $f5
    ctx->pc = 0x25e2ccu;
    ctx->f[5] = FPU_MUL_S(ctx->f[9], ctx->f[5]);
label_25e2d0:
    // 0x25e2d0: 0x27a206ac  addiu       $v0, $sp, 0x6AC
    ctx->pc = 0x25e2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1708));
label_25e2d4:
    // 0x25e2d4: 0xe4450000  swc1        $f5, 0x0($v0)
    ctx->pc = 0x25e2d4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_25e2d8:
    // 0x25e2d8: 0x46044002  mul.s       $f0, $f8, $f4
    ctx->pc = 0x25e2d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[8], ctx->f[4]);
label_25e2dc:
    // 0x25e2dc: 0x27a206b0  addiu       $v0, $sp, 0x6B0
    ctx->pc = 0x25e2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1712));
label_25e2e0:
    // 0x25e2e0: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x25e2e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_25e2e4:
    // 0x25e2e4: 0x46034002  mul.s       $f0, $f8, $f3
    ctx->pc = 0x25e2e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[8], ctx->f[3]);
label_25e2e8:
    // 0x25e2e8: 0x27a206b4  addiu       $v0, $sp, 0x6B4
    ctx->pc = 0x25e2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1716));
label_25e2ec:
    // 0x25e2ec: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x25e2ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_25e2f0:
    // 0x25e2f0: 0x46024082  mul.s       $f2, $f8, $f2
    ctx->pc = 0x25e2f0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[8], ctx->f[2]);
label_25e2f4:
    // 0x25e2f4: 0x27a206b8  addiu       $v0, $sp, 0x6B8
    ctx->pc = 0x25e2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1720));
label_25e2f8:
    // 0x25e2f8: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x25e2f8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_25e2fc:
    // 0x25e2fc: 0x46014002  mul.s       $f0, $f8, $f1
    ctx->pc = 0x25e2fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[8], ctx->f[1]);
label_25e300:
    // 0x25e300: 0x27a206bc  addiu       $v0, $sp, 0x6BC
    ctx->pc = 0x25e300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1724));
label_25e304:
    // 0x25e304: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x25e304u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_25e308:
    // 0x25e308: 0x8fa2013c  lw          $v0, 0x13C($sp)
    ctx->pc = 0x25e308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
label_25e30c:
    // 0x25e30c: 0xafa004d0  sw          $zero, 0x4D0($sp)
    ctx->pc = 0x25e30cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1232), GPR_U32(ctx, 0));
label_25e310:
    // 0x25e310: 0x90420008  lbu         $v0, 0x8($v0)
    ctx->pc = 0x25e310u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 8)));
label_25e314:
    // 0x25e314: 0xafa204c0  sw          $v0, 0x4C0($sp)
    ctx->pc = 0x25e314u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1216), GPR_U32(ctx, 2));
label_25e318:
    // 0x25e318: 0x8fa2013c  lw          $v0, 0x13C($sp)
    ctx->pc = 0x25e318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
label_25e31c:
    // 0x25e31c: 0x90430009  lbu         $v1, 0x9($v0)
    ctx->pc = 0x25e31cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 9)));
label_25e320:
    // 0x25e320: 0x27a204c4  addiu       $v0, $sp, 0x4C4
    ctx->pc = 0x25e320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1220));
label_25e324:
    // 0x25e324: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x25e324u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_25e328:
    // 0x25e328: 0x8fa2013c  lw          $v0, 0x13C($sp)
    ctx->pc = 0x25e328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
label_25e32c:
    // 0x25e32c: 0x9042000a  lbu         $v0, 0xA($v0)
    ctx->pc = 0x25e32cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 10)));
label_25e330:
    // 0x25e330: 0xafa204c8  sw          $v0, 0x4C8($sp)
    ctx->pc = 0x25e330u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1224), GPR_U32(ctx, 2));
label_25e334:
    // 0x25e334: 0x8fa2013c  lw          $v0, 0x13C($sp)
    ctx->pc = 0x25e334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
label_25e338:
    // 0x25e338: 0x9042000b  lbu         $v0, 0xB($v0)
    ctx->pc = 0x25e338u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 11)));
label_25e33c:
    // 0x25e33c: 0xafa204cc  sw          $v0, 0x4CC($sp)
    ctx->pc = 0x25e33cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1228), GPR_U32(ctx, 2));
label_25e340:
    // 0x25e340: 0x27a204d4  addiu       $v0, $sp, 0x4D4
    ctx->pc = 0x25e340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1236));
label_25e344:
    // 0x25e344: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x25e344u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_25e348:
    // 0x25e348: 0x8fd90000  lw          $t9, 0x0($fp)
    ctx->pc = 0x25e348u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_25e34c:
    // 0x25e34c: 0x8fa604c0  lw          $a2, 0x4C0($sp)
    ctx->pc = 0x25e34cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1216)));
label_25e350:
    // 0x25e350: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x25e350u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_25e354:
    // 0x25e354: 0x320f809  jalr        $t9
label_25e358:
    if (ctx->pc == 0x25E358u) {
        ctx->pc = 0x25E358u;
            // 0x25e358: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25E35Cu;
        goto label_25e35c;
    }
    ctx->pc = 0x25E354u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x25E35Cu);
        ctx->pc = 0x25E358u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E354u;
            // 0x25e358: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x25E35Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x25E35Cu; }
            if (ctx->pc != 0x25E35Cu) { return; }
        }
        }
    }
    ctx->pc = 0x25E35Cu;
label_25e35c:
    // 0x25e35c: 0x27a204c4  addiu       $v0, $sp, 0x4C4
    ctx->pc = 0x25e35cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1220));
label_25e360:
    // 0x25e360: 0x8fa304c0  lw          $v1, 0x4C0($sp)
    ctx->pc = 0x25e360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1216)));
label_25e364:
    // 0x25e364: 0x8fa40120  lw          $a0, 0x120($sp)
    ctx->pc = 0x25e364u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_25e368:
    // 0x25e368: 0x27a705a0  addiu       $a3, $sp, 0x5A0
    ctx->pc = 0x25e368u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1440));
label_25e36c:
    // 0x25e36c: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x25e36cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_25e370:
    // 0x25e370: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x25e370u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_25e374:
    // 0x25e374: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x25e374u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_25e378:
    // 0x25e378: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x25e378u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_25e37c:
    // 0x25e37c: 0x8fa2013c  lw          $v0, 0x13C($sp)
    ctx->pc = 0x25e37cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
label_25e380:
    // 0x25e380: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x25e380u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_25e384:
    // 0x25e384: 0x320f809  jalr        $t9
label_25e388:
    if (ctx->pc == 0x25E388u) {
        ctx->pc = 0x25E388u;
            // 0x25e388: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x25E38Cu;
        goto label_25e38c;
    }
    ctx->pc = 0x25E384u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x25E38Cu);
        ctx->pc = 0x25E388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E384u;
            // 0x25e388: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x25E38Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x25E38Cu; }
            if (ctx->pc != 0x25E38Cu) { return; }
        }
        }
    }
    ctx->pc = 0x25E38Cu;
label_25e38c:
    // 0x25e38c: 0xc69d000c  lwc1        $f29, 0xC($s4)
    ctx->pc = 0x25e38cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
label_25e390:
    // 0x25e390: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x25e390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_25e394:
    // 0x25e394: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x25e394u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_25e398:
    // 0x25e398: 0x0  nop
    ctx->pc = 0x25e398u;
    // NOP
label_25e39c:
    // 0x25e39c: 0x4600a546  mov.s       $f21, $f20
    ctx->pc = 0x25e39cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[20]);
label_25e3a0:
    // 0x25e3a0: 0x4600a586  mov.s       $f22, $f20
    ctx->pc = 0x25e3a0u;
    ctx->f[22] = FPU_MOV_S(ctx->f[20]);
label_25e3a4:
    // 0x25e3a4: 0x4600a706  mov.s       $f28, $f20
    ctx->pc = 0x25e3a4u;
    ctx->f[28] = FPU_MOV_S(ctx->f[20]);
label_25e3a8:
    // 0x25e3a8: 0xafa30110  sw          $v1, 0x110($sp)
    ctx->pc = 0x25e3a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 3));
label_25e3ac:
    // 0x25e3ac: 0x4600a6c6  mov.s       $f27, $f20
    ctx->pc = 0x25e3acu;
    ctx->f[27] = FPU_MOV_S(ctx->f[20]);
label_25e3b0:
    // 0x25e3b0: 0x27a306e0  addiu       $v1, $sp, 0x6E0
    ctx->pc = 0x25e3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1760));
label_25e3b4:
    // 0x25e3b4: 0xc7a106d0  lwc1        $f1, 0x6D0($sp)
    ctx->pc = 0x25e3b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25e3b8:
    // 0x25e3b8: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x25e3b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25e3bc:
    // 0x25e3bc: 0xc69a000c  lwc1        $f26, 0xC($s4)
    ctx->pc = 0x25e3bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
label_25e3c0:
    // 0x25e3c0: 0xc7a306d0  lwc1        $f3, 0x6D0($sp)
    ctx->pc = 0x25e3c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_25e3c4:
    // 0x25e3c4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x25e3c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_25e3c8:
    // 0x25e3c8: 0x4600d036  c.le.s      $f26, $f0
    ctx->pc = 0x25e3c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[26], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_25e3cc:
    // 0x25e3cc: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_25e3d0:
    if (ctx->pc == 0x25E3D0u) {
        ctx->pc = 0x25E3D0u;
            // 0x25e3d0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x25E3D4u;
        goto label_25e3d4;
    }
    ctx->pc = 0x25E3CCu;
    {
        const bool branch_taken_0x25e3cc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x25E3D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E3CCu;
            // 0x25e3d0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e3cc) {
            ctx->pc = 0x25E3D8u;
            goto label_25e3d8;
        }
    }
    ctx->pc = 0x25E3D4u;
label_25e3d4:
    // 0x25e3d4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x25e3d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25e3d8:
    // 0x25e3d8: 0x38830001  xori        $v1, $a0, 0x1
    ctx->pc = 0x25e3d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
label_25e3dc:
    // 0x25e3dc: 0x146003d0  bnez        $v1, . + 4 + (0x3D0 << 2)
label_25e3e0:
    if (ctx->pc == 0x25E3E0u) {
        ctx->pc = 0x25E3E0u;
            // 0x25e3e0: 0x461dd041  sub.s       $f1, $f26, $f29 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[26], ctx->f[29]);
        ctx->pc = 0x25E3E4u;
        goto label_25e3e4;
    }
    ctx->pc = 0x25E3DCu;
    {
        const bool branch_taken_0x25e3dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x25E3E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E3DCu;
            // 0x25e3e0: 0x461dd041  sub.s       $f1, $f26, $f29 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[26], ctx->f[29]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e3dc) {
            ctx->pc = 0x25F320u;
            goto label_25f320;
        }
    }
    ctx->pc = 0x25E3E4u;
label_25e3e4:
    // 0x25e3e4: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x25e3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_25e3e8:
    // 0x25e3e8: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x25e3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_25e3ec:
    // 0x25e3ec: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x25e3ecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25e3f0:
    // 0x25e3f0: 0x27b20404  addiu       $s2, $sp, 0x404
    ctx->pc = 0x25e3f0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 1028));
label_25e3f4:
    // 0x25e3f4: 0x27b10408  addiu       $s1, $sp, 0x408
    ctx->pc = 0x25e3f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 1032));
label_25e3f8:
    // 0x25e3f8: 0x27b0040c  addiu       $s0, $sp, 0x40C
    ctx->pc = 0x25e3f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 1036));
label_25e3fc:
    // 0x25e3fc: 0x27b601b0  addiu       $s6, $sp, 0x1B0
    ctx->pc = 0x25e3fcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_25e400:
    // 0x25e400: 0x461be001  sub.s       $f0, $f28, $f27
    ctx->pc = 0x25e400u;
    ctx->f[0] = FPU_SUB_S(ctx->f[28], ctx->f[27]);
label_25e404:
    // 0x25e404: 0x27b701c0  addiu       $s7, $sp, 0x1C0
    ctx->pc = 0x25e404u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_25e408:
    // 0x25e408: 0x27be01d0  addiu       $fp, $sp, 0x1D0
    ctx->pc = 0x25e408u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
label_25e40c:
    // 0x25e40c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x25e40cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_25e410:
    // 0x25e410: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x25e410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_25e414:
    // 0x25e414: 0x46000dc3  div.s       $f23, $f1, $f0
    ctx->pc = 0x25e414u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[23] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[23] = ctx->f[1] / ctx->f[0];
label_25e418:
    // 0x25e418: 0xc4780010  lwc1        $f24, 0x10($v1)
    ctx->pc = 0x25e418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_25e41c:
    // 0x25e41c: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x25e41cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25e420:
    // 0x25e420: 0x4600c600  add.s       $f24, $f24, $f0
    ctx->pc = 0x25e420u;
    ctx->f[24] = FPU_ADD_S(ctx->f[24], ctx->f[0]);
label_25e424:
    // 0x25e424: 0x0  nop
    ctx->pc = 0x25e424u;
    // NOP
label_25e428:
    // 0x25e428: 0x27a206e0  addiu       $v0, $sp, 0x6E0
    ctx->pc = 0x25e428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1760));
label_25e42c:
    // 0x25e42c: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x25e42cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25e430:
    // 0x25e430: 0x461dd081  sub.s       $f2, $f26, $f29
    ctx->pc = 0x25e430u;
    ctx->f[2] = FPU_SUB_S(ctx->f[26], ctx->f[29]);
label_25e434:
    // 0x25e434: 0x46000807  neg.s       $f0, $f1
    ctx->pc = 0x25e434u;
    ctx->f[0] = FPU_NEG_S(ctx->f[1]);
label_25e438:
    // 0x25e438: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x25e438u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_25e43c:
    // 0x25e43c: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_25e440:
    if (ctx->pc == 0x25E440u) {
        ctx->pc = 0x25E440u;
            // 0x25e440: 0x3c023f00  lui         $v0, 0x3F00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
        ctx->pc = 0x25E444u;
        goto label_25e444;
    }
    ctx->pc = 0x25E43Cu;
    {
        const bool branch_taken_0x25e43c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x25E440u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E43Cu;
            // 0x25e440: 0x3c023f00  lui         $v0, 0x3F00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e43c) {
            ctx->pc = 0x25E450u;
            goto label_25e450;
        }
    }
    ctx->pc = 0x25E444u;
label_25e444:
    // 0x25e444: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x25e444u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_25e448:
    // 0x25e448: 0x4600df06  mov.s       $f28, $f27
    ctx->pc = 0x25e448u;
    ctx->f[28] = FPU_MOV_S(ctx->f[27]);
label_25e44c:
    // 0x25e44c: 0x0  nop
    ctx->pc = 0x25e44cu;
    // NOP
label_25e450:
    // 0x25e450: 0x4603d001  sub.s       $f0, $f26, $f3
    ctx->pc = 0x25e450u;
    ctx->f[0] = FPU_SUB_S(ctx->f[26], ctx->f[3]);
label_25e454:
    // 0x25e454: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x25e454u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_25e458:
    // 0x25e458: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x25e458u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_25e45c:
    // 0x25e45c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_25e460:
    if (ctx->pc == 0x25E460u) {
        ctx->pc = 0x25E460u;
            // 0x25e460: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x25E464u;
        goto label_25e464;
    }
    ctx->pc = 0x25E45Cu;
    {
        const bool branch_taken_0x25e45c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x25E460u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E45Cu;
            // 0x25e460: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e45c) {
            ctx->pc = 0x25E468u;
            goto label_25e468;
        }
    }
    ctx->pc = 0x25E464u;
label_25e464:
    // 0x25e464: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x25e464u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25e468:
    // 0x25e468: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x25e468u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
label_25e46c:
    // 0x25e46c: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x25e46cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
label_25e470:
    // 0x25e470: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_25e474:
    if (ctx->pc == 0x25E474u) {
        ctx->pc = 0x25E478u;
        goto label_25e478;
    }
    ctx->pc = 0x25E470u;
    {
        const bool branch_taken_0x25e470 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25e470) {
            ctx->pc = 0x25E490u;
            goto label_25e490;
        }
    }
    ctx->pc = 0x25E478u;
label_25e478:
    // 0x25e478: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25e478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_25e47c:
    // 0x25e47c: 0xafa00110  sw          $zero, 0x110($sp)
    ctx->pc = 0x25e47cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 0));
label_25e480:
    // 0x25e480: 0x4600e646  mov.s       $f25, $f28
    ctx->pc = 0x25e480u;
    ctx->f[25] = FPU_MOV_S(ctx->f[28]);
label_25e484:
    // 0x25e484: 0x10000020  b           . + 4 + (0x20 << 2)
label_25e488:
    if (ctx->pc == 0x25E488u) {
        ctx->pc = 0x25E488u;
            // 0x25e488: 0xa3a200e0  sb          $v0, 0xE0($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 224), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x25E48Cu;
        goto label_25e48c;
    }
    ctx->pc = 0x25E484u;
    {
        const bool branch_taken_0x25e484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E488u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E484u;
            // 0x25e488: 0xa3a200e0  sb          $v0, 0xE0($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 224), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e484) {
            ctx->pc = 0x25E508u;
            goto label_25e508;
        }
    }
    ctx->pc = 0x25E48Cu;
label_25e48c:
    // 0x25e48c: 0x0  nop
    ctx->pc = 0x25e48cu;
    // NOP
label_25e490:
    // 0x25e490: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x25e490u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
label_25e494:
    // 0x25e494: 0x461d1841  sub.s       $f1, $f3, $f29
    ctx->pc = 0x25e494u;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[29]);
label_25e498:
    // 0x25e498: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x25e498u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_25e49c:
    // 0x25e49c: 0xa3a000e0  sb          $zero, 0xE0($sp)
    ctx->pc = 0x25e49cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 224), (uint8_t)GPR_U32(ctx, 0));
label_25e4a0:
    // 0x25e4a0: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x25e4a0u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[2];
label_25e4a4:
    // 0x25e4a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25e4a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_25e4a8:
    // 0x25e4a8: 0x0  nop
    ctx->pc = 0x25e4a8u;
    // NOP
label_25e4ac:
    // 0x25e4ac: 0x0  nop
    ctx->pc = 0x25e4acu;
    // NOP
label_25e4b0:
    // 0x25e4b0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x25e4b0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_25e4b4:
    // 0x25e4b4: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_25e4b8:
    if (ctx->pc == 0x25E4B8u) {
        ctx->pc = 0x25E4BCu;
        goto label_25e4bc;
    }
    ctx->pc = 0x25E4B4u;
    {
        const bool branch_taken_0x25e4b4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x25e4b4) {
            ctx->pc = 0x25E4C4u;
            goto label_25e4c4;
        }
    }
    ctx->pc = 0x25E4BCu;
label_25e4bc:
    // 0x25e4bc: 0x10000003  b           . + 4 + (0x3 << 2)
label_25e4c0:
    if (ctx->pc == 0x25E4C0u) {
        ctx->pc = 0x25E4C0u;
            // 0x25e4c0: 0x3c023f66  lui         $v0, 0x3F66 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
        ctx->pc = 0x25E4C4u;
        goto label_25e4c4;
    }
    ctx->pc = 0x25E4BCu;
    {
        const bool branch_taken_0x25e4bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E4C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E4BCu;
            // 0x25e4c0: 0x3c023f66  lui         $v0, 0x3F66 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e4bc) {
            ctx->pc = 0x25E4CCu;
            goto label_25e4cc;
        }
    }
    ctx->pc = 0x25E4C4u;
label_25e4c4:
    // 0x25e4c4: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x25e4c4u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_25e4c8:
    // 0x25e4c8: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x25e4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
label_25e4cc:
    // 0x25e4cc: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x25e4ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
label_25e4d0:
    // 0x25e4d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25e4d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_25e4d4:
    // 0x25e4d4: 0x0  nop
    ctx->pc = 0x25e4d4u;
    // NOP
label_25e4d8:
    // 0x25e4d8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x25e4d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_25e4dc:
    // 0x25e4dc: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_25e4e0:
    if (ctx->pc == 0x25E4E0u) {
        ctx->pc = 0x25E4E4u;
        goto label_25e4e4;
    }
    ctx->pc = 0x25E4DCu;
    {
        const bool branch_taken_0x25e4dc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25e4dc) {
            ctx->pc = 0x25E4ECu;
            goto label_25e4ec;
        }
    }
    ctx->pc = 0x25E4E4u;
label_25e4e4:
    // 0x25e4e4: 0x10000003  b           . + 4 + (0x3 << 2)
label_25e4e8:
    if (ctx->pc == 0x25E4E8u) {
        ctx->pc = 0x25E4E8u;
            // 0x25e4e8: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->pc = 0x25E4ECu;
        goto label_25e4ec;
    }
    ctx->pc = 0x25E4E4u;
    {
        const bool branch_taken_0x25e4e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E4E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E4E4u;
            // 0x25e4e8: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e4e4) {
            ctx->pc = 0x25E4F4u;
            goto label_25e4f4;
        }
    }
    ctx->pc = 0x25E4ECu;
label_25e4ec:
    // 0x25e4ec: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x25e4ecu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_25e4f0:
    // 0x25e4f0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x25e4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_25e4f4:
    // 0x25e4f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25e4f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_25e4f8:
    // 0x25e4f8: 0x0  nop
    ctx->pc = 0x25e4f8u;
    // NOP
label_25e4fc:
    // 0x25e4fc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x25e4fcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_25e500:
    // 0x25e500: 0x4600d81a  mula.s      $f27, $f0
    ctx->pc = 0x25e500u;
    ctx->f[31] = FPU_MUL_S(ctx->f[27], ctx->f[0]);
label_25e504:
    // 0x25e504: 0x4601e65c  madd.s      $f25, $f28, $f1
    ctx->pc = 0x25e504u;
    ctx->f[25] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[28], ctx->f[1]));
label_25e508:
    // 0x25e508: 0x8ea40008  lw          $a0, 0x8($s5)
    ctx->pc = 0x25e508u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_25e50c:
    // 0x25e50c: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x25e50cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_25e510:
    // 0x25e510: 0x27a503c0  addiu       $a1, $sp, 0x3C0
    ctx->pc = 0x25e510u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 960));
label_25e514:
    // 0x25e514: 0xc4800028  lwc1        $f0, 0x28($a0)
    ctx->pc = 0x25e514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25e518:
    // 0x25e518: 0x24820020  addiu       $v0, $a0, 0x20
    ctx->pc = 0x25e518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
label_25e51c:
    // 0x25e51c: 0xafa20100  sw          $v0, 0x100($sp)
    ctx->pc = 0x25e51cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
label_25e520:
    // 0x25e520: 0x4600cf82  mul.s       $f30, $f25, $f0
    ctx->pc = 0x25e520u;
    ctx->f[30] = FPU_MUL_S(ctx->f[25], ctx->f[0]);
label_25e524:
    // 0x25e524: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x25e524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_25e528:
    // 0x25e528: 0xc48c0020  lwc1        $f12, 0x20($a0)
    ctx->pc = 0x25e528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_25e52c:
    // 0x25e52c: 0x4600f346  mov.s       $f13, $f30
    ctx->pc = 0x25e52cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[30]);
label_25e530:
    // 0x25e530: 0xc0a3cb4  jal         func_28F2D0
label_25e534:
    if (ctx->pc == 0x25E534u) {
        ctx->pc = 0x25E534u;
            // 0x25e534: 0x24440040  addiu       $a0, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->pc = 0x25E538u;
        goto label_25e538;
    }
    ctx->pc = 0x25E530u;
    SET_GPR_U32(ctx, 31, 0x25E538u);
    ctx->pc = 0x25E534u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25E530u;
            // 0x25e534: 0x24440040  addiu       $a0, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28F2D0u;
    if (runtime->hasFunction(0x28F2D0u)) {
        auto targetFn = runtime->lookupFunction(0x28F2D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25E538u; }
        if (ctx->pc != 0x25E538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028F2D0_0x28f2d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25E538u; }
        if (ctx->pc != 0x25E538u) { return; }
    }
    ctx->pc = 0x25E538u;
label_25e538:
    // 0x25e538: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x25e538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_25e53c:
    // 0x25e53c: 0x4600f346  mov.s       $f13, $f30
    ctx->pc = 0x25e53cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[30]);
label_25e540:
    // 0x25e540: 0x27a50380  addiu       $a1, $sp, 0x380
    ctx->pc = 0x25e540u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 896));
label_25e544:
    // 0x25e544: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x25e544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_25e548:
    // 0x25e548: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x25e548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_25e54c:
    // 0x25e54c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x25e54cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_25e550:
    // 0x25e550: 0xc0a3cb4  jal         func_28F2D0
label_25e554:
    if (ctx->pc == 0x25E554u) {
        ctx->pc = 0x25E554u;
            // 0x25e554: 0x24440040  addiu       $a0, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->pc = 0x25E558u;
        goto label_25e558;
    }
    ctx->pc = 0x25E550u;
    SET_GPR_U32(ctx, 31, 0x25E558u);
    ctx->pc = 0x25E554u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25E550u;
            // 0x25e554: 0x24440040  addiu       $a0, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28F2D0u;
    if (runtime->hasFunction(0x28F2D0u)) {
        auto targetFn = runtime->lookupFunction(0x28F2D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25E558u; }
        if (ctx->pc != 0x25E558u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028F2D0_0x28f2d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25E558u; }
        if (ctx->pc != 0x25E558u) { return; }
    }
    ctx->pc = 0x25E558u;
label_25e558:
    // 0x25e558: 0x27a40340  addiu       $a0, $sp, 0x340
    ctx->pc = 0x25e558u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 832));
label_25e55c:
    // 0x25e55c: 0x27a503c0  addiu       $a1, $sp, 0x3C0
    ctx->pc = 0x25e55cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 960));
label_25e560:
    // 0x25e560: 0xc0a45a0  jal         func_291680
label_25e564:
    if (ctx->pc == 0x25E564u) {
        ctx->pc = 0x25E564u;
            // 0x25e564: 0x27a60380  addiu       $a2, $sp, 0x380 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 896));
        ctx->pc = 0x25E568u;
        goto label_25e568;
    }
    ctx->pc = 0x25E560u;
    SET_GPR_U32(ctx, 31, 0x25E568u);
    ctx->pc = 0x25E564u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25E560u;
            // 0x25e564: 0x27a60380  addiu       $a2, $sp, 0x380 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 896));
        ctx->in_delay_slot = false;
    ctx->pc = 0x291680u;
    if (runtime->hasFunction(0x291680u)) {
        auto targetFn = runtime->lookupFunction(0x291680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25E568u; }
        if (ctx->pc != 0x25E568u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00291680_0x291680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25E568u; }
        if (ctx->pc != 0x25E568u) { return; }
    }
    ctx->pc = 0x25E568u;
label_25e568:
    // 0x25e568: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x25e568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_25e56c:
    // 0x25e56c: 0x10400052  beqz        $v0, . + 4 + (0x52 << 2)
label_25e570:
    if (ctx->pc == 0x25E570u) {
        ctx->pc = 0x25E574u;
        goto label_25e574;
    }
    ctx->pc = 0x25E56Cu;
    {
        const bool branch_taken_0x25e56c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25e56c) {
            ctx->pc = 0x25E6B8u;
            goto label_25e6b8;
        }
    }
    ctx->pc = 0x25E574u;
label_25e574:
    // 0x25e574: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x25e574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_25e578:
    // 0x25e578: 0x27a404c0  addiu       $a0, $sp, 0x4C0
    ctx->pc = 0x25e578u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1216));
label_25e57c:
    // 0x25e57c: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x25e57cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_25e580:
    // 0x25e580: 0x27a70340  addiu       $a3, $sp, 0x340
    ctx->pc = 0x25e580u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 832));
label_25e584:
    // 0x25e584: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x25e584u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_25e588:
    // 0x25e588: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x25e588u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_25e58c:
    // 0x25e58c: 0xc098b60  jal         func_262D80
label_25e590:
    if (ctx->pc == 0x25E590u) {
        ctx->pc = 0x25E590u;
            // 0x25e590: 0x27a80410  addiu       $t0, $sp, 0x410 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
        ctx->pc = 0x25E594u;
        goto label_25e594;
    }
    ctx->pc = 0x25E58Cu;
    SET_GPR_U32(ctx, 31, 0x25E594u);
    ctx->pc = 0x25E590u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25E58Cu;
            // 0x25e590: 0x27a80410  addiu       $t0, $sp, 0x410 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
        ctx->in_delay_slot = false;
    ctx->pc = 0x262D80u;
    if (runtime->hasFunction(0x262D80u)) {
        auto targetFn = runtime->lookupFunction(0x262D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25E594u; }
        if (ctx->pc != 0x25E594u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00262D80_0x262d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25E594u; }
        if (ctx->pc != 0x25E594u) { return; }
    }
    ctx->pc = 0x25E594u;
label_25e594:
    // 0x25e594: 0x8fa304c0  lw          $v1, 0x4C0($sp)
    ctx->pc = 0x25e594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1216)));
label_25e598:
    // 0x25e598: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x25e598u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_25e59c:
    // 0x25e59c: 0x1464000e  bne         $v1, $a0, . + 4 + (0xE << 2)
label_25e5a0:
    if (ctx->pc == 0x25E5A0u) {
        ctx->pc = 0x25E5A0u;
            // 0x25e5a0: 0x27a304e0  addiu       $v1, $sp, 0x4E0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1248));
        ctx->pc = 0x25E5A4u;
        goto label_25e5a4;
    }
    ctx->pc = 0x25E59Cu;
    {
        const bool branch_taken_0x25e59c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x25E5A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E59Cu;
            // 0x25e5a0: 0x27a304e0  addiu       $v1, $sp, 0x4E0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e59c) {
            ctx->pc = 0x25E5D8u;
            goto label_25e5d8;
        }
    }
    ctx->pc = 0x25E5A4u;
label_25e5a4:
    // 0x25e5a4: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x25e5a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25e5a8:
    // 0x25e5a8: 0xe7a00400  swc1        $f0, 0x400($sp)
    ctx->pc = 0x25e5a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1024), bits); }
label_25e5ac:
    // 0x25e5ac: 0x27a304e4  addiu       $v1, $sp, 0x4E4
    ctx->pc = 0x25e5acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1252));
label_25e5b0:
    // 0x25e5b0: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x25e5b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25e5b4:
    // 0x25e5b4: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x25e5b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
label_25e5b8:
    // 0x25e5b8: 0x27a304e8  addiu       $v1, $sp, 0x4E8
    ctx->pc = 0x25e5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1256));
label_25e5bc:
    // 0x25e5bc: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x25e5bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25e5c0:
    // 0x25e5c0: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x25e5c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_25e5c4:
    // 0x25e5c4: 0x27a304ec  addiu       $v1, $sp, 0x4EC
    ctx->pc = 0x25e5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1260));
label_25e5c8:
    // 0x25e5c8: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x25e5c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25e5cc:
    // 0x25e5cc: 0x100000da  b           . + 4 + (0xDA << 2)
label_25e5d0:
    if (ctx->pc == 0x25E5D0u) {
        ctx->pc = 0x25E5D0u;
            // 0x25e5d0: 0xe6000000  swc1        $f0, 0x0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->pc = 0x25E5D4u;
        goto label_25e5d4;
    }
    ctx->pc = 0x25E5CCu;
    {
        const bool branch_taken_0x25e5cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E5D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E5CCu;
            // 0x25e5d0: 0xe6000000  swc1        $f0, 0x0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e5cc) {
            ctx->pc = 0x25E938u;
            goto label_25e938;
        }
    }
    ctx->pc = 0x25E5D4u;
label_25e5d4:
    // 0x25e5d4: 0x0  nop
    ctx->pc = 0x25e5d4u;
    // NOP
label_25e5d8:
    // 0x25e5d8: 0x27a304c4  addiu       $v1, $sp, 0x4C4
    ctx->pc = 0x25e5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1220));
label_25e5dc:
    // 0x25e5dc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x25e5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_25e5e0:
    // 0x25e5e0: 0x14640027  bne         $v1, $a0, . + 4 + (0x27 << 2)
label_25e5e4:
    if (ctx->pc == 0x25E5E4u) {
        ctx->pc = 0x25E5E4u;
            // 0x25e5e4: 0x27a30560  addiu       $v1, $sp, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1376));
        ctx->pc = 0x25E5E8u;
        goto label_25e5e8;
    }
    ctx->pc = 0x25E5E0u;
    {
        const bool branch_taken_0x25e5e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x25E5E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E5E0u;
            // 0x25e5e4: 0x27a30560  addiu       $v1, $sp, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1376));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e5e0) {
            ctx->pc = 0x25E680u;
            goto label_25e680;
        }
    }
    ctx->pc = 0x25E5E8u;
label_25e5e8:
    // 0x25e5e8: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x25e5e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25e5ec:
    // 0x25e5ec: 0xe7a00400  swc1        $f0, 0x400($sp)
    ctx->pc = 0x25e5ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1024), bits); }
label_25e5f0:
    // 0x25e5f0: 0x27a30564  addiu       $v1, $sp, 0x564
    ctx->pc = 0x25e5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1380));
label_25e5f4:
    // 0x25e5f4: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x25e5f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25e5f8:
    // 0x25e5f8: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x25e5f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
label_25e5fc:
    // 0x25e5fc: 0x27a30568  addiu       $v1, $sp, 0x568
    ctx->pc = 0x25e5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1384));
label_25e600:
    // 0x25e600: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x25e600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25e604:
    // 0x25e604: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x25e604u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_25e608:
    // 0x25e608: 0x27a3056c  addiu       $v1, $sp, 0x56C
    ctx->pc = 0x25e608u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1388));
label_25e60c:
    // 0x25e60c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x25e60cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25e610:
    // 0x25e610: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x25e610u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_25e614:
    // 0x25e614: 0x27a3041c  addiu       $v1, $sp, 0x41C
    ctx->pc = 0x25e614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1052));
label_25e618:
    // 0x25e618: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x25e618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_25e61c:
    // 0x25e61c: 0xc7a00410  lwc1        $f0, 0x410($sp)
    ctx->pc = 0x25e61cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1040)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25e620:
    // 0x25e620: 0xc7a10400  lwc1        $f1, 0x400($sp)
    ctx->pc = 0x25e620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1024)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25e624:
    // 0x25e624: 0x27a30414  addiu       $v1, $sp, 0x414
    ctx->pc = 0x25e624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1044));
label_25e628:
    // 0x25e628: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x25e628u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_25e62c:
    // 0x25e62c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x25e62cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_25e630:
    // 0x25e630: 0xe7a00400  swc1        $f0, 0x400($sp)
    ctx->pc = 0x25e630u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1024), bits); }
label_25e634:
    // 0x25e634: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x25e634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25e638:
    // 0x25e638: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x25e638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25e63c:
    // 0x25e63c: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x25e63cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_25e640:
    // 0x25e640: 0x27a30418  addiu       $v1, $sp, 0x418
    ctx->pc = 0x25e640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1048));
label_25e644:
    // 0x25e644: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x25e644u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_25e648:
    // 0x25e648: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x25e648u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
label_25e64c:
    // 0x25e64c: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x25e64cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25e650:
    // 0x25e650: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x25e650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25e654:
    // 0x25e654: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x25e654u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_25e658:
    // 0x25e658: 0x27a3041c  addiu       $v1, $sp, 0x41C
    ctx->pc = 0x25e658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1052));
label_25e65c:
    // 0x25e65c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x25e65cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_25e660:
    // 0x25e660: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x25e660u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_25e664:
    // 0x25e664: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x25e664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25e668:
    // 0x25e668: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x25e668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25e66c:
    // 0x25e66c: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x25e66cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_25e670:
    // 0x25e670: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x25e670u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_25e674:
    // 0x25e674: 0x100000b0  b           . + 4 + (0xB0 << 2)
label_25e678:
    if (ctx->pc == 0x25E678u) {
        ctx->pc = 0x25E678u;
            // 0x25e678: 0xe6000000  swc1        $f0, 0x0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->pc = 0x25E67Cu;
        goto label_25e67c;
    }
    ctx->pc = 0x25E674u;
    {
        const bool branch_taken_0x25e674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E678u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E674u;
            // 0x25e678: 0xe6000000  swc1        $f0, 0x0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e674) {
            ctx->pc = 0x25E938u;
            goto label_25e938;
        }
    }
    ctx->pc = 0x25E67Cu;
label_25e67c:
    // 0x25e67c: 0x0  nop
    ctx->pc = 0x25e67cu;
    // NOP
label_25e680:
    // 0x25e680: 0x27a305f0  addiu       $v1, $sp, 0x5F0
    ctx->pc = 0x25e680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1520));
label_25e684:
    // 0x25e684: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x25e684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25e688:
    // 0x25e688: 0xe7a00400  swc1        $f0, 0x400($sp)
    ctx->pc = 0x25e688u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1024), bits); }
label_25e68c:
    // 0x25e68c: 0x27a305f4  addiu       $v1, $sp, 0x5F4
    ctx->pc = 0x25e68cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1524));
label_25e690:
    // 0x25e690: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x25e690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25e694:
    // 0x25e694: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x25e694u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
label_25e698:
    // 0x25e698: 0x27a305f8  addiu       $v1, $sp, 0x5F8
    ctx->pc = 0x25e698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1528));
label_25e69c:
    // 0x25e69c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x25e69cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25e6a0:
    // 0x25e6a0: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x25e6a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_25e6a4:
    // 0x25e6a4: 0x27a305fc  addiu       $v1, $sp, 0x5FC
    ctx->pc = 0x25e6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1532));
label_25e6a8:
    // 0x25e6a8: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x25e6a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25e6ac:
    // 0x25e6ac: 0x100000a2  b           . + 4 + (0xA2 << 2)
label_25e6b0:
    if (ctx->pc == 0x25E6B0u) {
        ctx->pc = 0x25E6B0u;
            // 0x25e6b0: 0xe6000000  swc1        $f0, 0x0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->pc = 0x25E6B4u;
        goto label_25e6b4;
    }
    ctx->pc = 0x25E6ACu;
    {
        const bool branch_taken_0x25e6ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E6B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E6ACu;
            // 0x25e6b0: 0xe6000000  swc1        $f0, 0x0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e6ac) {
            ctx->pc = 0x25E938u;
            goto label_25e938;
        }
    }
    ctx->pc = 0x25E6B4u;
label_25e6b4:
    // 0x25e6b4: 0x0  nop
    ctx->pc = 0x25e6b4u;
    // NOP
label_25e6b8:
    // 0x25e6b8: 0x27a204c4  addiu       $v0, $sp, 0x4C4
    ctx->pc = 0x25e6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1220));
label_25e6bc:
    // 0x25e6bc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x25e6bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_25e6c0:
    // 0x25e6c0: 0x27a30170  addiu       $v1, $sp, 0x170
    ctx->pc = 0x25e6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_25e6c4:
    // 0x25e6c4: 0x27a80160  addiu       $t0, $sp, 0x160
    ctx->pc = 0x25e6c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_25e6c8:
    // 0x25e6c8: 0x27a70150  addiu       $a3, $sp, 0x150
    ctx->pc = 0x25e6c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_25e6cc:
    // 0x25e6cc: 0x27a60140  addiu       $a2, $sp, 0x140
    ctx->pc = 0x25e6ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_25e6d0:
    // 0x25e6d0: 0x27a20340  addiu       $v0, $sp, 0x340
    ctx->pc = 0x25e6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 832));
label_25e6d4:
    // 0x25e6d4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x25e6d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_25e6d8:
    // 0x25e6d8: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x25e6d8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_25e6dc:
    // 0x25e6dc: 0x42900  sll         $a1, $a0, 4
    ctx->pc = 0x25e6dcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_25e6e0:
    // 0x25e6e0: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x25e6e0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
label_25e6e4:
    // 0x25e6e4: 0x27a205a0  addiu       $v0, $sp, 0x5A0
    ctx->pc = 0x25e6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1440));
label_25e6e8:
    // 0x25e6e8: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x25e6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_25e6ec:
    // 0x25e6ec: 0x27a20560  addiu       $v0, $sp, 0x560
    ctx->pc = 0x25e6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1376));
label_25e6f0:
    // 0x25e6f0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x25e6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_25e6f4:
    // 0x25e6f4: 0x27a50350  addiu       $a1, $sp, 0x350
    ctx->pc = 0x25e6f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 848));
label_25e6f8:
    // 0x25e6f8: 0x78a50000  lq          $a1, 0x0($a1)
    ctx->pc = 0x25e6f8u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_25e6fc:
    // 0x25e6fc: 0x7d050000  sq          $a1, 0x0($t0)
    ctx->pc = 0x25e6fcu;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 5));
label_25e700:
    // 0x25e700: 0x27a50360  addiu       $a1, $sp, 0x360
    ctx->pc = 0x25e700u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 864));
label_25e704:
    // 0x25e704: 0x78a50000  lq          $a1, 0x0($a1)
    ctx->pc = 0x25e704u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_25e708:
    // 0x25e708: 0x7ce50000  sq          $a1, 0x0($a3)
    ctx->pc = 0x25e708u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 5));
label_25e70c:
    // 0x25e70c: 0x27a50370  addiu       $a1, $sp, 0x370
    ctx->pc = 0x25e70cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 880));
label_25e710:
    // 0x25e710: 0x78a50000  lq          $a1, 0x0($a1)
    ctx->pc = 0x25e710u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_25e714:
    // 0x25e714: 0x7cc50000  sq          $a1, 0x0($a2)
    ctx->pc = 0x25e714u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 5));
label_25e718:
    // 0x25e718: 0xc7a00170  lwc1        $f0, 0x170($sp)
    ctx->pc = 0x25e718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25e71c:
    // 0x25e71c: 0x27a50174  addiu       $a1, $sp, 0x174
    ctx->pc = 0x25e71cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 372));
label_25e720:
    // 0x25e720: 0xe7a001a0  swc1        $f0, 0x1A0($sp)
    ctx->pc = 0x25e720u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
label_25e724:
    // 0x25e724: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x25e724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25e728:
    // 0x25e728: 0x27a501a4  addiu       $a1, $sp, 0x1A4
    ctx->pc = 0x25e728u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 420));
label_25e72c:
    // 0x25e72c: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x25e72cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_25e730:
    // 0x25e730: 0x27a50178  addiu       $a1, $sp, 0x178
    ctx->pc = 0x25e730u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 376));
label_25e734:
    // 0x25e734: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x25e734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25e738:
    // 0x25e738: 0x27a501a8  addiu       $a1, $sp, 0x1A8
    ctx->pc = 0x25e738u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 424));
label_25e73c:
    // 0x25e73c: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x25e73cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_25e740:
    // 0x25e740: 0x27a5017c  addiu       $a1, $sp, 0x17C
    ctx->pc = 0x25e740u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 380));
label_25e744:
    // 0x25e744: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x25e744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25e748:
    // 0x25e748: 0x27a501ac  addiu       $a1, $sp, 0x1AC
    ctx->pc = 0x25e748u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 428));
label_25e74c:
    // 0x25e74c: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x25e74cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_25e750:
    // 0x25e750: 0xc7a00160  lwc1        $f0, 0x160($sp)
    ctx->pc = 0x25e750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25e754:
    // 0x25e754: 0x27a50164  addiu       $a1, $sp, 0x164
    ctx->pc = 0x25e754u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 356));
label_25e758:
    // 0x25e758: 0xe6c00000  swc1        $f0, 0x0($s6)
    ctx->pc = 0x25e758u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
label_25e75c:
    // 0x25e75c: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x25e75cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25e760:
    // 0x25e760: 0xe6c00004  swc1        $f0, 0x4($s6)
    ctx->pc = 0x25e760u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 4), bits); }
label_25e764:
    // 0x25e764: 0x27a50168  addiu       $a1, $sp, 0x168
    ctx->pc = 0x25e764u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 360));
label_25e768:
    // 0x25e768: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x25e768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25e76c:
    // 0x25e76c: 0xe6c00008  swc1        $f0, 0x8($s6)
    ctx->pc = 0x25e76cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 8), bits); }
label_25e770:
    // 0x25e770: 0x27a5016c  addiu       $a1, $sp, 0x16C
    ctx->pc = 0x25e770u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 364));
label_25e774:
    // 0x25e774: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x25e774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25e778:
    // 0x25e778: 0xe6c0000c  swc1        $f0, 0xC($s6)
    ctx->pc = 0x25e778u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 12), bits); }
label_25e77c:
    // 0x25e77c: 0x27a50154  addiu       $a1, $sp, 0x154
    ctx->pc = 0x25e77cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 340));
label_25e780:
    // 0x25e780: 0xc7a00150  lwc1        $f0, 0x150($sp)
    ctx->pc = 0x25e780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25e784:
    // 0x25e784: 0xe6e00000  swc1        $f0, 0x0($s7)
    ctx->pc = 0x25e784u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
label_25e788:
    // 0x25e788: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x25e788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25e78c:
    // 0x25e78c: 0xe6e00004  swc1        $f0, 0x4($s7)
    ctx->pc = 0x25e78cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4), bits); }
label_25e790:
    // 0x25e790: 0x27a50158  addiu       $a1, $sp, 0x158
    ctx->pc = 0x25e790u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 344));
label_25e794:
    // 0x25e794: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x25e794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25e798:
    // 0x25e798: 0xe6e00008  swc1        $f0, 0x8($s7)
    ctx->pc = 0x25e798u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 8), bits); }
label_25e79c:
    // 0x25e79c: 0x27a5015c  addiu       $a1, $sp, 0x15C
    ctx->pc = 0x25e79cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 348));
label_25e7a0:
    // 0x25e7a0: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x25e7a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25e7a4:
    // 0x25e7a4: 0xe6e0000c  swc1        $f0, 0xC($s7)
    ctx->pc = 0x25e7a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 12), bits); }
label_25e7a8:
    // 0x25e7a8: 0x27a50144  addiu       $a1, $sp, 0x144
    ctx->pc = 0x25e7a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 324));
label_25e7ac:
    // 0x25e7ac: 0xc7a00140  lwc1        $f0, 0x140($sp)
    ctx->pc = 0x25e7acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25e7b0:
    // 0x25e7b0: 0xe7c00000  swc1        $f0, 0x0($fp)
    ctx->pc = 0x25e7b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 0), bits); }
label_25e7b4:
    // 0x25e7b4: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x25e7b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25e7b8:
    // 0x25e7b8: 0xe7c00004  swc1        $f0, 0x4($fp)
    ctx->pc = 0x25e7b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 4), bits); }
label_25e7bc:
    // 0x25e7bc: 0x27a50148  addiu       $a1, $sp, 0x148
    ctx->pc = 0x25e7bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 328));
label_25e7c0:
    // 0x25e7c0: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x25e7c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25e7c4:
    // 0x25e7c4: 0xe7c00008  swc1        $f0, 0x8($fp)
    ctx->pc = 0x25e7c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 8), bits); }
label_25e7c8:
    // 0x25e7c8: 0x27a5014c  addiu       $a1, $sp, 0x14C
    ctx->pc = 0x25e7c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 332));
label_25e7cc:
    // 0x25e7cc: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x25e7ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25e7d0:
    // 0x25e7d0: 0xe7c0000c  swc1        $f0, 0xC($fp)
    ctx->pc = 0x25e7d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 12), bits); }
label_25e7d4:
    // 0x25e7d4: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x25e7d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_25e7d8:
    // 0x25e7d8: 0x27a501a4  addiu       $a1, $sp, 0x1A4
    ctx->pc = 0x25e7d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 420));
label_25e7dc:
    // 0x25e7dc: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x25e7dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_25e7e0:
    // 0x25e7e0: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x25e7e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_25e7e4:
    // 0x25e7e4: 0xc7a701a0  lwc1        $f7, 0x1A0($sp)
    ctx->pc = 0x25e7e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_25e7e8:
    // 0x25e7e8: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x25e7e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25e7ec:
    // 0x25e7ec: 0xc6c60000  lwc1        $f6, 0x0($s6)
    ctx->pc = 0x25e7ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_25e7f0:
    // 0x25e7f0: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x25e7f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25e7f4:
    // 0x25e7f4: 0xc6e50000  lwc1        $f5, 0x0($s7)
    ctx->pc = 0x25e7f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_25e7f8:
    // 0x25e7f8: 0xc7c40000  lwc1        $f4, 0x0($fp)
    ctx->pc = 0x25e7f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_25e7fc:
    // 0x25e7fc: 0x460711c2  mul.s       $f7, $f2, $f7
    ctx->pc = 0x25e7fcu;
    ctx->f[7] = FPU_MUL_S(ctx->f[2], ctx->f[7]);
label_25e800:
    // 0x25e800: 0x2463fff0  addiu       $v1, $v1, -0x10
    ctx->pc = 0x25e800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
label_25e804:
    // 0x25e804: 0x46060982  mul.s       $f6, $f1, $f6
    ctx->pc = 0x25e804u;
    ctx->f[6] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
label_25e808:
    // 0x25e808: 0x46063818  adda.s      $f7, $f6
    ctx->pc = 0x25e808u;
    ctx->f[31] = FPU_ADD_S(ctx->f[7], ctx->f[6]);
label_25e80c:
    // 0x25e80c: 0x4605015c  madd.s      $f5, $f0, $f5
    ctx->pc = 0x25e80cu;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[5]));
label_25e810:
    // 0x25e810: 0x46052100  add.s       $f4, $f4, $f5
    ctx->pc = 0x25e810u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[5]);
label_25e814:
    // 0x25e814: 0xe4440000  swc1        $f4, 0x0($v0)
    ctx->pc = 0x25e814u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_25e818:
    // 0x25e818: 0xc4a70000  lwc1        $f7, 0x0($a1)
    ctx->pc = 0x25e818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_25e81c:
    // 0x25e81c: 0x27a501b4  addiu       $a1, $sp, 0x1B4
    ctx->pc = 0x25e81cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 436));
label_25e820:
    // 0x25e820: 0xc4a60000  lwc1        $f6, 0x0($a1)
    ctx->pc = 0x25e820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_25e824:
    // 0x25e824: 0x460711c2  mul.s       $f7, $f2, $f7
    ctx->pc = 0x25e824u;
    ctx->f[7] = FPU_MUL_S(ctx->f[2], ctx->f[7]);
label_25e828:
    // 0x25e828: 0x27a501c4  addiu       $a1, $sp, 0x1C4
    ctx->pc = 0x25e828u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 452));
label_25e82c:
    // 0x25e82c: 0xc4a50000  lwc1        $f5, 0x0($a1)
    ctx->pc = 0x25e82cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_25e830:
    // 0x25e830: 0x46060982  mul.s       $f6, $f1, $f6
    ctx->pc = 0x25e830u;
    ctx->f[6] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
label_25e834:
    // 0x25e834: 0x27a501d4  addiu       $a1, $sp, 0x1D4
    ctx->pc = 0x25e834u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 468));
label_25e838:
    // 0x25e838: 0xc4a40000  lwc1        $f4, 0x0($a1)
    ctx->pc = 0x25e838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_25e83c:
    // 0x25e83c: 0x46063818  adda.s      $f7, $f6
    ctx->pc = 0x25e83cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[7], ctx->f[6]);
label_25e840:
    // 0x25e840: 0x4605015c  madd.s      $f5, $f0, $f5
    ctx->pc = 0x25e840u;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[5]));
label_25e844:
    // 0x25e844: 0x46052100  add.s       $f4, $f4, $f5
    ctx->pc = 0x25e844u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[5]);
label_25e848:
    // 0x25e848: 0x27a501a8  addiu       $a1, $sp, 0x1A8
    ctx->pc = 0x25e848u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 424));
label_25e84c:
    // 0x25e84c: 0xe4440004  swc1        $f4, 0x4($v0)
    ctx->pc = 0x25e84cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_25e850:
    // 0x25e850: 0xc4a70000  lwc1        $f7, 0x0($a1)
    ctx->pc = 0x25e850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_25e854:
    // 0x25e854: 0x27a501b8  addiu       $a1, $sp, 0x1B8
    ctx->pc = 0x25e854u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 440));
label_25e858:
    // 0x25e858: 0xc4a60000  lwc1        $f6, 0x0($a1)
    ctx->pc = 0x25e858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_25e85c:
    // 0x25e85c: 0x46071082  mul.s       $f2, $f2, $f7
    ctx->pc = 0x25e85cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[7]);
label_25e860:
    // 0x25e860: 0x27a501c8  addiu       $a1, $sp, 0x1C8
    ctx->pc = 0x25e860u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 456));
label_25e864:
    // 0x25e864: 0xc4a50000  lwc1        $f5, 0x0($a1)
    ctx->pc = 0x25e864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_25e868:
    // 0x25e868: 0x46060842  mul.s       $f1, $f1, $f6
    ctx->pc = 0x25e868u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
label_25e86c:
    // 0x25e86c: 0x27a501d8  addiu       $a1, $sp, 0x1D8
    ctx->pc = 0x25e86cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 472));
label_25e870:
    // 0x25e870: 0x46011018  adda.s      $f2, $f1
    ctx->pc = 0x25e870u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_25e874:
    // 0x25e874: 0xc4a40000  lwc1        $f4, 0x0($a1)
    ctx->pc = 0x25e874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_25e878:
    // 0x25e878: 0x4605001c  madd.s      $f0, $f0, $f5
    ctx->pc = 0x25e878u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[5]));
label_25e87c:
    // 0x25e87c: 0x46002000  add.s       $f0, $f4, $f0
    ctx->pc = 0x25e87cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
label_25e880:
    // 0x25e880: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x25e880u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_25e884:
    // 0x25e884: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x25e884u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
label_25e888:
    // 0x25e888: 0x481ffd3  bgez        $a0, . + 4 + (-0x2D << 2)
label_25e88c:
    if (ctx->pc == 0x25E88Cu) {
        ctx->pc = 0x25E88Cu;
            // 0x25e88c: 0x2442fff0  addiu       $v0, $v0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
        ctx->pc = 0x25E890u;
        goto label_25e890;
    }
    ctx->pc = 0x25E888u;
    {
        const bool branch_taken_0x25e888 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x25E88Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E888u;
            // 0x25e88c: 0x2442fff0  addiu       $v0, $v0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e888) {
            ctx->pc = 0x25E7D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_25e7d8;
        }
    }
    ctx->pc = 0x25E890u;
label_25e890:
    // 0x25e890: 0x27a203c4  addiu       $v0, $sp, 0x3C4
    ctx->pc = 0x25e890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 964));
label_25e894:
    // 0x25e894: 0x27a404e0  addiu       $a0, $sp, 0x4E0
    ctx->pc = 0x25e894u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1248));
label_25e898:
    // 0x25e898: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x25e898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25e89c:
    // 0x25e89c: 0x27a50560  addiu       $a1, $sp, 0x560
    ctx->pc = 0x25e89cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1376));
label_25e8a0:
    // 0x25e8a0: 0xc7a203c0  lwc1        $f2, 0x3C0($sp)
    ctx->pc = 0x25e8a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_25e8a4:
    // 0x25e8a4: 0x27a80330  addiu       $t0, $sp, 0x330
    ctx->pc = 0x25e8a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 816));
label_25e8a8:
    // 0x25e8a8: 0x27a90400  addiu       $t1, $sp, 0x400
    ctx->pc = 0x25e8a8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 1024));
label_25e8ac:
    // 0x25e8ac: 0x27a203c8  addiu       $v0, $sp, 0x3C8
    ctx->pc = 0x25e8acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 968));
label_25e8b0:
    // 0x25e8b0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x25e8b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25e8b4:
    // 0x25e8b4: 0x4602b082  mul.s       $f2, $f22, $f2
    ctx->pc = 0x25e8b4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[22], ctx->f[2]);
label_25e8b8:
    // 0x25e8b8: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x25e8b8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
label_25e8bc:
    // 0x25e8bc: 0x27a203d0  addiu       $v0, $sp, 0x3D0
    ctx->pc = 0x25e8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 976));
label_25e8c0:
    // 0x25e8c0: 0x46011018  adda.s      $f2, $f1
    ctx->pc = 0x25e8c0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_25e8c4:
    // 0x25e8c4: 0x4600a01c  madd.s      $f0, $f20, $f0
    ctx->pc = 0x25e8c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[20], ctx->f[0]));
label_25e8c8:
    // 0x25e8c8: 0xe7a00330  swc1        $f0, 0x330($sp)
    ctx->pc = 0x25e8c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 816), bits); }
label_25e8cc:
    // 0x25e8cc: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x25e8ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_25e8d0:
    // 0x25e8d0: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x25e8d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25e8d4:
    // 0x25e8d4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x25e8d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25e8d8:
    // 0x25e8d8: 0x4602b082  mul.s       $f2, $f22, $f2
    ctx->pc = 0x25e8d8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[22], ctx->f[2]);
label_25e8dc:
    // 0x25e8dc: 0x27a20334  addiu       $v0, $sp, 0x334
    ctx->pc = 0x25e8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 820));
label_25e8e0:
    // 0x25e8e0: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x25e8e0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
label_25e8e4:
    // 0x25e8e4: 0x46011018  adda.s      $f2, $f1
    ctx->pc = 0x25e8e4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_25e8e8:
    // 0x25e8e8: 0x4600a01c  madd.s      $f0, $f20, $f0
    ctx->pc = 0x25e8e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[20], ctx->f[0]));
label_25e8ec:
    // 0x25e8ec: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x25e8ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_25e8f0:
    // 0x25e8f0: 0x27a203e0  addiu       $v0, $sp, 0x3E0
    ctx->pc = 0x25e8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 992));
label_25e8f4:
    // 0x25e8f4: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x25e8f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_25e8f8:
    // 0x25e8f8: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x25e8f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25e8fc:
    // 0x25e8fc: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x25e8fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25e900:
    // 0x25e900: 0x4602b082  mul.s       $f2, $f22, $f2
    ctx->pc = 0x25e900u;
    ctx->f[2] = FPU_MUL_S(ctx->f[22], ctx->f[2]);
label_25e904:
    // 0x25e904: 0x27a20338  addiu       $v0, $sp, 0x338
    ctx->pc = 0x25e904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 824));
label_25e908:
    // 0x25e908: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x25e908u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
label_25e90c:
    // 0x25e90c: 0x46011018  adda.s      $f2, $f1
    ctx->pc = 0x25e90cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_25e910:
    // 0x25e910: 0x4600a01c  madd.s      $f0, $f20, $f0
    ctx->pc = 0x25e910u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[20], ctx->f[0]));
label_25e914:
    // 0x25e914: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x25e914u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_25e918:
    // 0x25e918: 0x27a2033c  addiu       $v0, $sp, 0x33C
    ctx->pc = 0x25e918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 828));
label_25e91c:
    // 0x25e91c: 0xe4430000  swc1        $f3, 0x0($v0)
    ctx->pc = 0x25e91cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_25e920:
    // 0x25e920: 0x27a204c4  addiu       $v0, $sp, 0x4C4
    ctx->pc = 0x25e920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1220));
label_25e924:
    // 0x25e924: 0x8fa604c0  lw          $a2, 0x4C0($sp)
    ctx->pc = 0x25e924u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1216)));
label_25e928:
    // 0x25e928: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x25e928u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_25e92c:
    // 0x25e92c: 0xc099584  jal         func_265610
label_25e930:
    if (ctx->pc == 0x25E930u) {
        ctx->pc = 0x25E930u;
            // 0x25e930: 0x27aa0410  addiu       $t2, $sp, 0x410 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
        ctx->pc = 0x25E934u;
        goto label_25e934;
    }
    ctx->pc = 0x25E92Cu;
    SET_GPR_U32(ctx, 31, 0x25E934u);
    ctx->pc = 0x25E930u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25E92Cu;
            // 0x25e930: 0x27aa0410  addiu       $t2, $sp, 0x410 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
        ctx->in_delay_slot = false;
    ctx->pc = 0x265610u;
    if (runtime->hasFunction(0x265610u)) {
        auto targetFn = runtime->lookupFunction(0x265610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25E934u; }
        if (ctx->pc != 0x25E934u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00265610_0x265610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25E934u; }
        if (ctx->pc != 0x25E934u) { return; }
    }
    ctx->pc = 0x25E934u;
label_25e934:
    // 0x25e934: 0x0  nop
    ctx->pc = 0x25e934u;
    // NOP
label_25e938:
    // 0x25e938: 0x27a3041c  addiu       $v1, $sp, 0x41C
    ctx->pc = 0x25e938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1052));
label_25e93c:
    // 0x25e93c: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x25e93cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_25e940:
    // 0x25e940: 0xc7a106d0  lwc1        $f1, 0x6D0($sp)
    ctx->pc = 0x25e940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25e944:
    // 0x25e944: 0xc7a306d0  lwc1        $f3, 0x6D0($sp)
    ctx->pc = 0x25e944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_25e948:
    // 0x25e948: 0x46181781  sub.s       $f30, $f2, $f24
    ctx->pc = 0x25e948u;
    ctx->f[30] = FPU_SUB_S(ctx->f[2], ctx->f[24]);
label_25e94c:
    // 0x25e94c: 0x27a306e0  addiu       $v1, $sp, 0x6E0
    ctx->pc = 0x25e94cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1760));
label_25e950:
    // 0x25e950: 0x4601f041  sub.s       $f1, $f30, $f1
    ctx->pc = 0x25e950u;
    ctx->f[1] = FPU_SUB_S(ctx->f[30], ctx->f[1]);
label_25e954:
    // 0x25e954: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x25e954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25e958:
    // 0x25e958: 0x46000845  abs.s       $f1, $f1
    ctx->pc = 0x25e958u;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
label_25e95c:
    // 0x25e95c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x25e95cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_25e960:
    // 0x25e960: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_25e964:
    if (ctx->pc == 0x25E964u) {
        ctx->pc = 0x25E964u;
            // 0x25e964: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x25E968u;
        goto label_25e968;
    }
    ctx->pc = 0x25E960u;
    {
        const bool branch_taken_0x25e960 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x25E964u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E960u;
            // 0x25e964: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e960) {
            ctx->pc = 0x25E96Cu;
            goto label_25e96c;
        }
    }
    ctx->pc = 0x25E968u;
label_25e968:
    // 0x25e968: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x25e968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25e96c:
    // 0x25e96c: 0x41e3c  dsll32      $v1, $a0, 24
    ctx->pc = 0x25e96cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 24));
label_25e970:
    // 0x25e970: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x25e970u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
label_25e974:
    // 0x25e974: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
label_25e978:
    if (ctx->pc == 0x25E978u) {
        ctx->pc = 0x25E97Cu;
        goto label_25e97c;
    }
    ctx->pc = 0x25E974u;
    {
        const bool branch_taken_0x25e974 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x25e974) {
            ctx->pc = 0x25E9C8u;
            goto label_25e9c8;
        }
    }
    ctx->pc = 0x25E97Cu;
label_25e97c:
    // 0x25e97c: 0x83a300e0  lb          $v1, 0xE0($sp)
    ctx->pc = 0x25e97cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 224)));
label_25e980:
    // 0x25e980: 0x60182d  daddu       $v1, $v1, $zero
    ctx->pc = 0x25e980u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_25e984:
    // 0x25e984: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
label_25e988:
    if (ctx->pc == 0x25E988u) {
        ctx->pc = 0x25E98Cu;
        goto label_25e98c;
    }
    ctx->pc = 0x25E984u;
    {
        const bool branch_taken_0x25e984 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x25e984) {
            ctx->pc = 0x25E9C8u;
            goto label_25e9c8;
        }
    }
    ctx->pc = 0x25E98Cu;
label_25e98c:
    // 0x25e98c: 0x461cd832  c.eq.s      $f27, $f28
    ctx->pc = 0x25e98cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[27], ctx->f[28])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_25e990:
    // 0x25e990: 0x4501000d  bc1t        . + 4 + (0xD << 2)
label_25e994:
    if (ctx->pc == 0x25E994u) {
        ctx->pc = 0x25E998u;
        goto label_25e998;
    }
    ctx->pc = 0x25E990u;
    {
        const bool branch_taken_0x25e990 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x25e990) {
            ctx->pc = 0x25E9C8u;
            goto label_25e9c8;
        }
    }
    ctx->pc = 0x25E998u;
label_25e998:
    // 0x25e998: 0x4603f034  c.lt.s      $f30, $f3
    ctx->pc = 0x25e998u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[30], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_25e99c:
    // 0x25e99c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_25e9a0:
    if (ctx->pc == 0x25E9A0u) {
        ctx->pc = 0x25E9A4u;
        goto label_25e9a4;
    }
    ctx->pc = 0x25E99Cu;
    {
        const bool branch_taken_0x25e99c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25e99c) {
            ctx->pc = 0x25E9B0u;
            goto label_25e9b0;
        }
    }
    ctx->pc = 0x25E9A4u;
label_25e9a4:
    // 0x25e9a4: 0x4600cf06  mov.s       $f28, $f25
    ctx->pc = 0x25e9a4u;
    ctx->f[28] = FPU_MOV_S(ctx->f[25]);
label_25e9a8:
    // 0x25e9a8: 0x10000003  b           . + 4 + (0x3 << 2)
label_25e9ac:
    if (ctx->pc == 0x25E9ACu) {
        ctx->pc = 0x25E9ACu;
            // 0x25e9ac: 0x4600f686  mov.s       $f26, $f30 (Delay Slot)
        ctx->f[26] = FPU_MOV_S(ctx->f[30]);
        ctx->pc = 0x25E9B0u;
        goto label_25e9b0;
    }
    ctx->pc = 0x25E9A8u;
    {
        const bool branch_taken_0x25e9a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E9ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E9A8u;
            // 0x25e9ac: 0x4600f686  mov.s       $f26, $f30 (Delay Slot)
        ctx->f[26] = FPU_MOV_S(ctx->f[30]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e9a8) {
            ctx->pc = 0x25E9B8u;
            goto label_25e9b8;
        }
    }
    ctx->pc = 0x25E9B0u;
label_25e9b0:
    // 0x25e9b0: 0x4600cec6  mov.s       $f27, $f25
    ctx->pc = 0x25e9b0u;
    ctx->f[27] = FPU_MOV_S(ctx->f[25]);
label_25e9b4:
    // 0x25e9b4: 0x4600f746  mov.s       $f29, $f30
    ctx->pc = 0x25e9b4u;
    ctx->f[29] = FPU_MOV_S(ctx->f[30]);
label_25e9b8:
    // 0x25e9b8: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x25e9b8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_25e9bc:
    // 0x25e9bc: 0x2a83000a  slti        $v1, $s4, 0xA
    ctx->pc = 0x25e9bcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)10) ? 1 : 0);
label_25e9c0:
    // 0x25e9c0: 0x1460fe99  bnez        $v1, . + 4 + (-0x167 << 2)
label_25e9c4:
    if (ctx->pc == 0x25E9C4u) {
        ctx->pc = 0x25E9C8u;
        goto label_25e9c8;
    }
    ctx->pc = 0x25E9C0u;
    {
        const bool branch_taken_0x25e9c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x25e9c0) {
            ctx->pc = 0x25E428u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_25e428;
        }
    }
    ctx->pc = 0x25E9C8u;
label_25e9c8:
    // 0x25e9c8: 0x27a306dc  addiu       $v1, $sp, 0x6DC
    ctx->pc = 0x25e9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1756));
label_25e9cc:
    // 0x25e9cc: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x25e9ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_25e9d0:
    // 0x25e9d0: 0x8ea30008  lw          $v1, 0x8($s5)
    ctx->pc = 0x25e9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_25e9d4:
    // 0x25e9d4: 0xc4600028  lwc1        $f0, 0x28($v1)
    ctx->pc = 0x25e9d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25e9d8:
    // 0x25e9d8: 0x4600c8c2  mul.s       $f3, $f25, $f0
    ctx->pc = 0x25e9d8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[25], ctx->f[0]);
label_25e9dc:
    // 0x25e9dc: 0x46021836  c.le.s      $f3, $f2
    ctx->pc = 0x25e9dcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_25e9e0:
    // 0x25e9e0: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_25e9e4:
    if (ctx->pc == 0x25E9E4u) {
        ctx->pc = 0x25E9E4u;
            // 0x25e9e4: 0x24740020  addiu       $s4, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->pc = 0x25E9E8u;
        goto label_25e9e8;
    }
    ctx->pc = 0x25E9E0u;
    {
        const bool branch_taken_0x25e9e0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x25E9E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E9E0u;
            // 0x25e9e4: 0x24740020  addiu       $s4, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e9e0) {
            ctx->pc = 0x25E9F0u;
            goto label_25e9f0;
        }
    }
    ctx->pc = 0x25E9E8u;
label_25e9e8:
    // 0x25e9e8: 0x10000003  b           . + 4 + (0x3 << 2)
label_25e9ec:
    if (ctx->pc == 0x25E9ECu) {
        ctx->pc = 0x25E9ECu;
            // 0x25e9ec: 0xc6810000  lwc1        $f1, 0x0($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x25E9F0u;
        goto label_25e9f0;
    }
    ctx->pc = 0x25E9E8u;
    {
        const bool branch_taken_0x25e9e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E9ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E9E8u;
            // 0x25e9ec: 0xc6810000  lwc1        $f1, 0x0($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e9e8) {
            ctx->pc = 0x25E9F8u;
            goto label_25e9f8;
        }
    }
    ctx->pc = 0x25E9F0u;
label_25e9f0:
    // 0x25e9f0: 0x460010c6  mov.s       $f3, $f2
    ctx->pc = 0x25e9f0u;
    ctx->f[3] = FPU_MOV_S(ctx->f[2]);
label_25e9f4:
    // 0x25e9f4: 0xc6810000  lwc1        $f1, 0x0($s4)
    ctx->pc = 0x25e9f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25e9f8:
    // 0x25e9f8: 0xc6603030  lwc1        $f0, 0x3030($s3)
    ctx->pc = 0x25e9f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25e9fc:
    // 0x25e9fc: 0x46011d00  add.s       $f20, $f3, $f1
    ctx->pc = 0x25e9fcu;
    ctx->f[20] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
label_25ea00:
    // 0x25ea00: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x25ea00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_25ea04:
    // 0x25ea04: 0x450003fc  bc1f        . + 4 + (0x3FC << 2)
label_25ea08:
    if (ctx->pc == 0x25EA08u) {
        ctx->pc = 0x25EA0Cu;
        goto label_25ea0c;
    }
    ctx->pc = 0x25EA04u;
    {
        const bool branch_taken_0x25ea04 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25ea04) {
            ctx->pc = 0x25F9F8u;
            goto label_25f9f8;
        }
    }
    ctx->pc = 0x25EA0Cu;
label_25ea0c:
    // 0x25ea0c: 0xc6800004  lwc1        $f0, 0x4($s4)
    ctx->pc = 0x25ea0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25ea10:
    // 0x25ea10: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x25ea10u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_25ea14:
    // 0x25ea14: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x25ea14u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_25ea18:
    // 0x25ea18: 0x450003f7  bc1f        . + 4 + (0x3F7 << 2)
label_25ea1c:
    if (ctx->pc == 0x25EA1Cu) {
        ctx->pc = 0x25EA20u;
        goto label_25ea20;
    }
    ctx->pc = 0x25EA18u;
    {
        const bool branch_taken_0x25ea18 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25ea18) {
            ctx->pc = 0x25F9F8u;
            goto label_25f9f8;
        }
    }
    ctx->pc = 0x25EA20u;
label_25ea20:
    // 0x25ea20: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x25ea20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_25ea24:
    // 0x25ea24: 0x27a40300  addiu       $a0, $sp, 0x300
    ctx->pc = 0x25ea24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
label_25ea28:
    // 0x25ea28: 0x27a503c0  addiu       $a1, $sp, 0x3C0
    ctx->pc = 0x25ea28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 960));
label_25ea2c:
    // 0x25ea2c: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x25ea2cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_25ea30:
    // 0x25ea30: 0xc0a45e8  jal         func_2917A0
label_25ea34:
    if (ctx->pc == 0x25EA34u) {
        ctx->pc = 0x25EA34u;
            // 0x25ea34: 0x27a60400  addiu       $a2, $sp, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1024));
        ctx->pc = 0x25EA38u;
        goto label_25ea38;
    }
    ctx->pc = 0x25EA30u;
    SET_GPR_U32(ctx, 31, 0x25EA38u);
    ctx->pc = 0x25EA34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25EA30u;
            // 0x25ea34: 0x27a60400  addiu       $a2, $sp, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1024));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2917A0u;
    if (runtime->hasFunction(0x2917A0u)) {
        auto targetFn = runtime->lookupFunction(0x2917A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25EA38u; }
        if (ctx->pc != 0x25EA38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002917A0_0x2917a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25EA38u; }
        if (ctx->pc != 0x25EA38u) { return; }
    }
    ctx->pc = 0x25EA38u;
label_25ea38:
    // 0x25ea38: 0x27b10320  addiu       $s1, $sp, 0x320
    ctx->pc = 0x25ea38u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
label_25ea3c:
    // 0x25ea3c: 0x27a503c0  addiu       $a1, $sp, 0x3C0
    ctx->pc = 0x25ea3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 960));
label_25ea40:
    // 0x25ea40: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25ea40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25ea44:
    // 0x25ea44: 0xc0a4628  jal         func_2918A0
label_25ea48:
    if (ctx->pc == 0x25EA48u) {
        ctx->pc = 0x25EA48u;
            // 0x25ea48: 0x27a60410  addiu       $a2, $sp, 0x410 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
        ctx->pc = 0x25EA4Cu;
        goto label_25ea4c;
    }
    ctx->pc = 0x25EA44u;
    SET_GPR_U32(ctx, 31, 0x25EA4Cu);
    ctx->pc = 0x25EA48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25EA44u;
            // 0x25ea48: 0x27a60410  addiu       $a2, $sp, 0x410 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2918A0u;
    if (runtime->hasFunction(0x2918A0u)) {
        auto targetFn = runtime->lookupFunction(0x2918A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25EA4Cu; }
        if (ctx->pc != 0x25EA4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002918A0_0x2918a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25EA4Cu; }
        if (ctx->pc != 0x25EA4Cu) { return; }
    }
    ctx->pc = 0x25EA4Cu;
label_25ea4c:
    // 0x25ea4c: 0xc6430010  lwc1        $f3, 0x10($s2)
    ctx->pc = 0x25ea4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_25ea50:
    // 0x25ea50: 0x27a30314  addiu       $v1, $sp, 0x314
    ctx->pc = 0x25ea50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 788));
label_25ea54:
    // 0x25ea54: 0xc6220000  lwc1        $f2, 0x0($s1)
    ctx->pc = 0x25ea54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_25ea58:
    // 0x25ea58: 0x27b0032c  addiu       $s0, $sp, 0x32C
    ctx->pc = 0x25ea58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 812));
label_25ea5c:
    // 0x25ea5c: 0xc7a10300  lwc1        $f1, 0x300($sp)
    ctx->pc = 0x25ea5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25ea60:
    // 0x25ea60: 0x27a502f0  addiu       $a1, $sp, 0x2F0
    ctx->pc = 0x25ea60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 752));
label_25ea64:
    // 0x25ea64: 0xc7a00304  lwc1        $f0, 0x304($sp)
    ctx->pc = 0x25ea64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 772)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25ea68:
    // 0x25ea68: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x25ea68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_25ea6c:
    // 0x25ea6c: 0x460018c7  neg.s       $f3, $f3
    ctx->pc = 0x25ea6cu;
    ctx->f[3] = FPU_NEG_S(ctx->f[3]);
label_25ea70:
    // 0x25ea70: 0x461e18c1  sub.s       $f3, $f3, $f30
    ctx->pc = 0x25ea70u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[30]);
label_25ea74:
    // 0x25ea74: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x25ea74u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_25ea78:
    // 0x25ea78: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x25ea78u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_25ea7c:
    // 0x25ea7c: 0xe7a10310  swc1        $f1, 0x310($sp)
    ctx->pc = 0x25ea7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 784), bits); }
label_25ea80:
    // 0x25ea80: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x25ea80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25ea84:
    // 0x25ea84: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x25ea84u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_25ea88:
    // 0x25ea88: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x25ea88u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_25ea8c:
    // 0x25ea8c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x25ea8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_25ea90:
    // 0x25ea90: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x25ea90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25ea94:
    // 0x25ea94: 0x27a30318  addiu       $v1, $sp, 0x318
    ctx->pc = 0x25ea94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 792));
label_25ea98:
    // 0x25ea98: 0xc7a00308  lwc1        $f0, 0x308($sp)
    ctx->pc = 0x25ea98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25ea9c:
    // 0x25ea9c: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x25ea9cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_25eaa0:
    // 0x25eaa0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x25eaa0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_25eaa4:
    // 0x25eaa4: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x25eaa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_25eaa8:
    // 0x25eaa8: 0xc621000c  lwc1        $f1, 0xC($s1)
    ctx->pc = 0x25eaa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25eaac:
    // 0x25eaac: 0x27a3031c  addiu       $v1, $sp, 0x31C
    ctx->pc = 0x25eaacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 796));
label_25eab0:
    // 0x25eab0: 0xc7a0030c  lwc1        $f0, 0x30C($sp)
    ctx->pc = 0x25eab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 780)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25eab4:
    // 0x25eab4: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x25eab4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_25eab8:
    // 0x25eab8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x25eab8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_25eabc:
    // 0x25eabc: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x25eabcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_25eac0:
    // 0x25eac0: 0xe61e0000  swc1        $f30, 0x0($s0)
    ctx->pc = 0x25eac0u;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_25eac4:
    // 0x25eac4: 0x7a230000  lq          $v1, 0x0($s1)
    ctx->pc = 0x25eac4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_25eac8:
    // 0x25eac8: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x25eac8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
label_25eacc:
    // 0x25eacc: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x25eaccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_25ead0:
    // 0x25ead0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x25ead0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_25ead4:
    // 0x25ead4: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x25ead4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_25ead8:
    // 0x25ead8: 0x1464002d  bne         $v1, $a0, . + 4 + (0x2D << 2)
label_25eadc:
    if (ctx->pc == 0x25EADCu) {
        ctx->pc = 0x25EADCu;
            // 0x25eadc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x25EAE0u;
        goto label_25eae0;
    }
    ctx->pc = 0x25EAD8u;
    {
        const bool branch_taken_0x25ead8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x25EADCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25EAD8u;
            // 0x25eadc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ead8) {
            ctx->pc = 0x25EB90u;
            goto label_25eb90;
        }
    }
    ctx->pc = 0x25EAE0u;
label_25eae0:
    // 0x25eae0: 0x27a204c4  addiu       $v0, $sp, 0x4C4
    ctx->pc = 0x25eae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1220));
label_25eae4:
    // 0x25eae4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x25eae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_25eae8:
    // 0x25eae8: 0xa3a3070f  sb          $v1, 0x70F($sp)
    ctx->pc = 0x25eae8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1807), (uint8_t)GPR_U32(ctx, 3));
label_25eaec:
    // 0x25eaec: 0x27a205a0  addiu       $v0, $sp, 0x5A0
    ctx->pc = 0x25eaecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1440));
label_25eaf0:
    // 0x25eaf0: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x25eaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_25eaf4:
    // 0x25eaf4: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x25eaf4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_25eaf8:
    // 0x25eaf8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_25eafc:
    if (ctx->pc == 0x25EAFCu) {
        ctx->pc = 0x25EAFCu;
            // 0x25eafc: 0xa7a20700  sh          $v0, 0x700($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 1792), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x25EB00u;
        goto label_25eb00;
    }
    ctx->pc = 0x25EAF8u;
    {
        const bool branch_taken_0x25eaf8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x25EAFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25EAF8u;
            // 0x25eafc: 0xa7a20700  sh          $v0, 0x700($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 1792), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25eaf8) {
            ctx->pc = 0x25EB08u;
            goto label_25eb08;
        }
    }
    ctx->pc = 0x25EB00u;
label_25eb00:
    // 0x25eb00: 0x10000002  b           . + 4 + (0x2 << 2)
label_25eb04:
    if (ctx->pc == 0x25EB04u) {
        ctx->pc = 0x25EB04u;
            // 0x25eb04: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->pc = 0x25EB08u;
        goto label_25eb08;
    }
    ctx->pc = 0x25EB00u;
    {
        const bool branch_taken_0x25eb00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25EB04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25EB00u;
            // 0x25eb04: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25eb00) {
            ctx->pc = 0x25EB0Cu;
            goto label_25eb0c;
        }
    }
    ctx->pc = 0x25EB08u;
label_25eb08:
    // 0x25eb08: 0x97a205bc  lhu         $v0, 0x5BC($sp)
    ctx->pc = 0x25eb08u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 1468)));
label_25eb0c:
    // 0x25eb0c: 0x28610003  slti        $at, $v1, 0x3
    ctx->pc = 0x25eb0cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_25eb10:
    // 0x25eb10: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_25eb14:
    if (ctx->pc == 0x25EB14u) {
        ctx->pc = 0x25EB14u;
            // 0x25eb14: 0xa7a20702  sh          $v0, 0x702($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 1794), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x25EB18u;
        goto label_25eb18;
    }
    ctx->pc = 0x25EB10u;
    {
        const bool branch_taken_0x25eb10 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x25EB14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25EB10u;
            // 0x25eb14: 0xa7a20702  sh          $v0, 0x702($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 1794), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25eb10) {
            ctx->pc = 0x25EB20u;
            goto label_25eb20;
        }
    }
    ctx->pc = 0x25EB18u;
label_25eb18:
    // 0x25eb18: 0x10000002  b           . + 4 + (0x2 << 2)
label_25eb1c:
    if (ctx->pc == 0x25EB1Cu) {
        ctx->pc = 0x25EB1Cu;
            // 0x25eb1c: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->pc = 0x25EB20u;
        goto label_25eb20;
    }
    ctx->pc = 0x25EB18u;
    {
        const bool branch_taken_0x25eb18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25EB1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25EB18u;
            // 0x25eb1c: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25eb18) {
            ctx->pc = 0x25EB24u;
            goto label_25eb24;
        }
    }
    ctx->pc = 0x25EB20u;
label_25eb20:
    // 0x25eb20: 0x97a205cc  lhu         $v0, 0x5CC($sp)
    ctx->pc = 0x25eb20u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 1484)));
label_25eb24:
    // 0x25eb24: 0xa7a20704  sh          $v0, 0x704($sp)
    ctx->pc = 0x25eb24u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 1796), (uint16_t)GPR_U32(ctx, 2));
label_25eb28:
    // 0x25eb28: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x25eb28u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25eb2c:
    // 0x25eb2c: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x25eb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_25eb30:
    // 0x25eb30: 0x27a50700  addiu       $a1, $sp, 0x700
    ctx->pc = 0x25eb30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1792));
label_25eb34:
    // 0x25eb34: 0x27a6070f  addiu       $a2, $sp, 0x70F
    ctx->pc = 0x25eb34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1807));
label_25eb38:
    // 0x25eb38: 0x27a70310  addiu       $a3, $sp, 0x310
    ctx->pc = 0x25eb38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 784));
label_25eb3c:
    // 0x25eb3c: 0x27a80380  addiu       $t0, $sp, 0x380
    ctx->pc = 0x25eb3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 896));
label_25eb40:
    // 0x25eb40: 0x27aa03c0  addiu       $t2, $sp, 0x3C0
    ctx->pc = 0x25eb40u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 960));
label_25eb44:
    // 0x25eb44: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x25eb44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_25eb48:
    // 0x25eb48: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x25eb48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_25eb4c:
    // 0x25eb4c: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x25eb4cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_25eb50:
    // 0x25eb50: 0x320f809  jalr        $t9
label_25eb54:
    if (ctx->pc == 0x25EB54u) {
        ctx->pc = 0x25EB54u;
            // 0x25eb54: 0x27ab02f0  addiu       $t3, $sp, 0x2F0 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 752));
        ctx->pc = 0x25EB58u;
        goto label_25eb58;
    }
    ctx->pc = 0x25EB50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x25EB58u);
        ctx->pc = 0x25EB54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25EB50u;
            // 0x25eb54: 0x27ab02f0  addiu       $t3, $sp, 0x2F0 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 752));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x25EB58u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x25EB58u; }
            if (ctx->pc != 0x25EB58u) { return; }
        }
        }
    }
    ctx->pc = 0x25EB58u;
label_25eb58:
    // 0x25eb58: 0xc7a002f0  lwc1        $f0, 0x2F0($sp)
    ctx->pc = 0x25eb58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25eb5c:
    // 0x25eb5c: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x25eb5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_25eb60:
    // 0x25eb60: 0xc7a202f4  lwc1        $f2, 0x2F4($sp)
    ctx->pc = 0x25eb60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 756)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_25eb64:
    // 0x25eb64: 0xc7a102f8  lwc1        $f1, 0x2F8($sp)
    ctx->pc = 0x25eb64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25eb68:
    // 0x25eb68: 0xc7a002fc  lwc1        $f0, 0x2FC($sp)
    ctx->pc = 0x25eb68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 764)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25eb6c:
    // 0x25eb6c: 0xe7a20324  swc1        $f2, 0x324($sp)
    ctx->pc = 0x25eb6cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 804), bits); }
label_25eb70:
    // 0x25eb70: 0xe7a10328  swc1        $f1, 0x328($sp)
    ctx->pc = 0x25eb70u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 808), bits); }
label_25eb74:
    // 0x25eb74: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_25eb78:
    if (ctx->pc == 0x25EB78u) {
        ctx->pc = 0x25EB78u;
            // 0x25eb78: 0xe6000000  swc1        $f0, 0x0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->pc = 0x25EB7Cu;
        goto label_25eb7c;
    }
    ctx->pc = 0x25EB74u;
    {
        const bool branch_taken_0x25eb74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25EB78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25EB74u;
            // 0x25eb78: 0xe6000000  swc1        $f0, 0x0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25eb74) {
            ctx->pc = 0x25EB90u;
            goto label_25eb90;
        }
    }
    ctx->pc = 0x25EB7Cu;
label_25eb7c:
    // 0x25eb7c: 0x8ea30008  lw          $v1, 0x8($s5)
    ctx->pc = 0x25eb7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_25eb80:
    // 0x25eb80: 0x8c630030  lw          $v1, 0x30($v1)
    ctx->pc = 0x25eb80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_25eb84:
    // 0x25eb84: 0x8063003a  lb          $v1, 0x3A($v1)
    ctx->pc = 0x25eb84u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 58)));
label_25eb88:
    // 0x25eb88: 0x1460039b  bnez        $v1, . + 4 + (0x39B << 2)
label_25eb8c:
    if (ctx->pc == 0x25EB8Cu) {
        ctx->pc = 0x25EB90u;
        goto label_25eb90;
    }
    ctx->pc = 0x25EB88u;
    {
        const bool branch_taken_0x25eb88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x25eb88) {
            ctx->pc = 0x25F9F8u;
            goto label_25f9f8;
        }
    }
    ctx->pc = 0x25EB90u;
label_25eb90:
    // 0x25eb90: 0x8ea50000  lw          $a1, 0x0($s5)
    ctx->pc = 0x25eb90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_25eb94:
    // 0x25eb94: 0xc6a20064  lwc1        $f2, 0x64($s5)
    ctx->pc = 0x25eb94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_25eb98:
    // 0x25eb98: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x25eb98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_25eb9c:
    // 0x25eb9c: 0xc6a10068  lwc1        $f1, 0x68($s5)
    ctx->pc = 0x25eb9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25eba0:
    // 0x25eba0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x25eba0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_25eba4:
    // 0x25eba4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x25eba4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_25eba8:
    // 0x25eba8: 0x27be06a0  addiu       $fp, $sp, 0x6A0
    ctx->pc = 0x25eba8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 1696));
label_25ebac:
    // 0x25ebac: 0xc6a40060  lwc1        $f4, 0x60($s5)
    ctx->pc = 0x25ebacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_25ebb0:
    // 0x25ebb0: 0x27b00320  addiu       $s0, $sp, 0x320
    ctx->pc = 0x25ebb0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
label_25ebb4:
    // 0x25ebb4: 0xc7a30310  lwc1        $f3, 0x310($sp)
    ctx->pc = 0x25ebb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_25ebb8:
    // 0x25ebb8: 0x27a30314  addiu       $v1, $sp, 0x314
    ctx->pc = 0x25ebb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 788));
label_25ebbc:
    // 0x25ebbc: 0x8ca80008  lw          $t0, 0x8($a1)
    ctx->pc = 0x25ebbcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_25ebc0:
    // 0x25ebc0: 0xc7a706a4  lwc1        $f7, 0x6A4($sp)
    ctx->pc = 0x25ebc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1700)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_25ebc4:
    // 0x25ebc4: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x25ebc4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_25ebc8:
    // 0x25ebc8: 0x460012c7  neg.s       $f11, $f2
    ctx->pc = 0x25ebc8u;
    ctx->f[11] = FPU_NEG_S(ctx->f[2]);
label_25ebcc:
    // 0x25ebcc: 0x46000a87  neg.s       $f10, $f1
    ctx->pc = 0x25ebccu;
    ctx->f[10] = FPU_NEG_S(ctx->f[1]);
label_25ebd0:
    // 0x25ebd0: 0xc7a806a8  lwc1        $f8, 0x6A8($sp)
    ctx->pc = 0x25ebd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_25ebd4:
    // 0x25ebd4: 0x46002307  neg.s       $f12, $f4
    ctx->pc = 0x25ebd4u;
    ctx->f[12] = FPU_NEG_S(ctx->f[4]);
label_25ebd8:
    // 0x25ebd8: 0xc7a506b4  lwc1        $f5, 0x6B4($sp)
    ctx->pc = 0x25ebd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1716)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_25ebdc:
    // 0x25ebdc: 0xc50d004c  lwc1        $f13, 0x4C($t0)
    ctx->pc = 0x25ebdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_25ebe0:
    // 0x25ebe0: 0x25060050  addiu       $a2, $t0, 0x50
    ctx->pc = 0x25ebe0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 80));
label_25ebe4:
    // 0x25ebe4: 0xc509005c  lwc1        $f9, 0x5C($t0)
    ctx->pc = 0x25ebe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_25ebe8:
    // 0x25ebe8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x25ebe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_25ebec:
    // 0x25ebec: 0xc5020040  lwc1        $f2, 0x40($t0)
    ctx->pc = 0x25ebecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_25ebf0:
    // 0x25ebf0: 0x24e50050  addiu       $a1, $a3, 0x50
    ctx->pc = 0x25ebf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 80));
label_25ebf4:
    // 0x25ebf4: 0xc5010050  lwc1        $f1, 0x50($t0)
    ctx->pc = 0x25ebf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25ebf8:
    // 0x25ebf8: 0xc7a606b8  lwc1        $f6, 0x6B8($sp)
    ctx->pc = 0x25ebf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_25ebfc:
    // 0x25ebfc: 0xc7a406b0  lwc1        $f4, 0x6B0($sp)
    ctx->pc = 0x25ebfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_25ec00:
    // 0x25ec00: 0x460da341  sub.s       $f13, $f20, $f13
    ctx->pc = 0x25ec00u;
    ctx->f[13] = FPU_SUB_S(ctx->f[20], ctx->f[13]);
label_25ec04:
    // 0x25ec04: 0x46096bc2  mul.s       $f15, $f13, $f9
    ctx->pc = 0x25ec04u;
    ctx->f[15] = FPU_MUL_S(ctx->f[13], ctx->f[9]);
label_25ec08:
    // 0x25ec08: 0x460f0341  sub.s       $f13, $f0, $f15
    ctx->pc = 0x25ec08u;
    ctx->f[13] = FPU_SUB_S(ctx->f[0], ctx->f[15]);
label_25ec0c:
    // 0x25ec0c: 0x4602681a  mula.s      $f13, $f2
    ctx->pc = 0x25ec0cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[13], ctx->f[2]);
label_25ec10:
    // 0x25ec10: 0x4601785c  madd.s      $f1, $f15, $f1
    ctx->pc = 0x25ec10u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[15], ctx->f[1]));
label_25ec14:
    // 0x25ec14: 0xe7a10190  swc1        $f1, 0x190($sp)
    ctx->pc = 0x25ec14u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
label_25ec18:
    // 0x25ec18: 0xc5090044  lwc1        $f9, 0x44($t0)
    ctx->pc = 0x25ec18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_25ec1c:
    // 0x25ec1c: 0xc7a10190  lwc1        $f1, 0x190($sp)
    ctx->pc = 0x25ec1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25ec20:
    // 0x25ec20: 0xc5020054  lwc1        $f2, 0x54($t0)
    ctx->pc = 0x25ec20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_25ec24:
    // 0x25ec24: 0x4609681a  mula.s      $f13, $f9
    ctx->pc = 0x25ec24u;
    ctx->f[31] = FPU_MUL_S(ctx->f[13], ctx->f[9]);
label_25ec28:
    // 0x25ec28: 0x46011a41  sub.s       $f9, $f3, $f1
    ctx->pc = 0x25ec28u;
    ctx->f[9] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
label_25ec2c:
    // 0x25ec2c: 0x4602789c  madd.s      $f2, $f15, $f2
    ctx->pc = 0x25ec2cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[15], ctx->f[2]));
label_25ec30:
    // 0x25ec30: 0xe7a20194  swc1        $f2, 0x194($sp)
    ctx->pc = 0x25ec30u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 404), bits); }
label_25ec34:
    // 0x25ec34: 0xc5020048  lwc1        $f2, 0x48($t0)
    ctx->pc = 0x25ec34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_25ec38:
    // 0x25ec38: 0xc5010058  lwc1        $f1, 0x58($t0)
    ctx->pc = 0x25ec38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25ec3c:
    // 0x25ec3c: 0xc7ae0194  lwc1        $f14, 0x194($sp)
    ctx->pc = 0x25ec3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_25ec40:
    // 0x25ec40: 0x4602681a  mula.s      $f13, $f2
    ctx->pc = 0x25ec40u;
    ctx->f[31] = FPU_MUL_S(ctx->f[13], ctx->f[2]);
label_25ec44:
    // 0x25ec44: 0x4601785c  madd.s      $f1, $f15, $f1
    ctx->pc = 0x25ec44u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[15], ctx->f[1]));
label_25ec48:
    // 0x25ec48: 0xe7a10198  swc1        $f1, 0x198($sp)
    ctx->pc = 0x25ec48u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 408), bits); }
label_25ec4c:
    // 0x25ec4c: 0xc502004c  lwc1        $f2, 0x4C($t0)
    ctx->pc = 0x25ec4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_25ec50:
    // 0x25ec50: 0xc501005c  lwc1        $f1, 0x5C($t0)
    ctx->pc = 0x25ec50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25ec54:
    // 0x25ec54: 0xc7b10198  lwc1        $f17, 0x198($sp)
    ctx->pc = 0x25ec54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
label_25ec58:
    // 0x25ec58: 0x4602681a  mula.s      $f13, $f2
    ctx->pc = 0x25ec58u;
    ctx->f[31] = FPU_MUL_S(ctx->f[13], ctx->f[2]);
label_25ec5c:
    // 0x25ec5c: 0x4601785c  madd.s      $f1, $f15, $f1
    ctx->pc = 0x25ec5cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[15], ctx->f[1]));
label_25ec60:
    // 0x25ec60: 0xe7a1019c  swc1        $f1, 0x19C($sp)
    ctx->pc = 0x25ec60u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 412), bits); }
label_25ec64:
    // 0x25ec64: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x25ec64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_25ec68:
    // 0x25ec68: 0xc4f0004c  lwc1        $f16, 0x4C($a3)
    ctx->pc = 0x25ec68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
label_25ec6c:
    // 0x25ec6c: 0xc4ed005c  lwc1        $f13, 0x5C($a3)
    ctx->pc = 0x25ec6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_25ec70:
    // 0x25ec70: 0xc7d20000  lwc1        $f18, 0x0($fp)
    ctx->pc = 0x25ec70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
label_25ec74:
    // 0x25ec74: 0xc4ef0040  lwc1        $f15, 0x40($a3)
    ctx->pc = 0x25ec74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_25ec78:
    // 0x25ec78: 0x27a30318  addiu       $v1, $sp, 0x318
    ctx->pc = 0x25ec78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 792));
label_25ec7c:
    // 0x25ec7c: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x25ec7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25ec80:
    // 0x25ec80: 0x4610a401  sub.s       $f16, $f20, $f16
    ctx->pc = 0x25ec80u;
    ctx->f[16] = FPU_SUB_S(ctx->f[20], ctx->f[16]);
label_25ec84:
    // 0x25ec84: 0x460d8342  mul.s       $f13, $f16, $f13
    ctx->pc = 0x25ec84u;
    ctx->f[13] = FPU_MUL_S(ctx->f[16], ctx->f[13]);
label_25ec88:
    // 0x25ec88: 0x27a30324  addiu       $v1, $sp, 0x324
    ctx->pc = 0x25ec88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 804));
label_25ec8c:
    // 0x25ec8c: 0x46110c41  sub.s       $f17, $f1, $f17
    ctx->pc = 0x25ec8cu;
    ctx->f[17] = FPU_SUB_S(ctx->f[1], ctx->f[17]);
label_25ec90:
    // 0x25ec90: 0x460e14c1  sub.s       $f19, $f2, $f14
    ctx->pc = 0x25ec90u;
    ctx->f[19] = FPU_SUB_S(ctx->f[2], ctx->f[14]);
label_25ec94:
    // 0x25ec94: 0x4611381a  mula.s      $f7, $f17
    ctx->pc = 0x25ec94u;
    ctx->f[31] = FPU_MUL_S(ctx->f[7], ctx->f[17]);
label_25ec98:
    // 0x25ec98: 0x4613441d  msub.s      $f16, $f8, $f19
    ctx->pc = 0x25ec98u;
    ctx->f[16] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[8], ctx->f[19]));
label_25ec9c:
    // 0x25ec9c: 0x4609401a  mula.s      $f8, $f9
    ctx->pc = 0x25ec9cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[8], ctx->f[9]);
label_25eca0:
    // 0x25eca0: 0x4611921d  msub.s      $f8, $f18, $f17
    ctx->pc = 0x25eca0u;
    ctx->f[8] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[18], ctx->f[17]));
label_25eca4:
    // 0x25eca4: 0x4613901a  mula.s      $f18, $f19
    ctx->pc = 0x25eca4u;
    ctx->f[31] = FPU_MUL_S(ctx->f[18], ctx->f[19]);
label_25eca8:
    // 0x25eca8: 0x460939dd  msub.s      $f7, $f7, $f9
    ctx->pc = 0x25eca8u;
    ctx->f[7] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[9]));
label_25ecac:
    // 0x25ecac: 0x460d0001  sub.s       $f0, $f0, $f13
    ctx->pc = 0x25ecacu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[13]);
label_25ecb0:
    // 0x25ecb0: 0xc4ee0050  lwc1        $f14, 0x50($a3)
    ctx->pc = 0x25ecb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_25ecb4:
    // 0x25ecb4: 0x46075280  add.s       $f10, $f10, $f7
    ctx->pc = 0x25ecb4u;
    ctx->f[10] = FPU_ADD_S(ctx->f[10], ctx->f[7]);
label_25ecb8:
    // 0x25ecb8: 0x460f001a  mula.s      $f0, $f15
    ctx->pc = 0x25ecb8u;
    ctx->f[31] = FPU_MUL_S(ctx->f[0], ctx->f[15]);
label_25ecbc:
    // 0x25ecbc: 0x460e69dc  madd.s      $f7, $f13, $f14
    ctx->pc = 0x25ecbcu;
    ctx->f[7] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[13], ctx->f[14]));
label_25ecc0:
    // 0x25ecc0: 0xe7a70180  swc1        $f7, 0x180($sp)
    ctx->pc = 0x25ecc0u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
label_25ecc4:
    // 0x25ecc4: 0x46085ac0  add.s       $f11, $f11, $f8
    ctx->pc = 0x25ecc4u;
    ctx->f[11] = FPU_ADD_S(ctx->f[11], ctx->f[8]);
label_25ecc8:
    // 0x25ecc8: 0xc4e90044  lwc1        $f9, 0x44($a3)
    ctx->pc = 0x25ecc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_25eccc:
    // 0x25eccc: 0xc7a70180  lwc1        $f7, 0x180($sp)
    ctx->pc = 0x25ecccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_25ecd0:
    // 0x25ecd0: 0xc4e80054  lwc1        $f8, 0x54($a3)
    ctx->pc = 0x25ecd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_25ecd4:
    // 0x25ecd4: 0x46106300  add.s       $f12, $f12, $f16
    ctx->pc = 0x25ecd4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[16]);
label_25ecd8:
    // 0x25ecd8: 0x4609001a  mula.s      $f0, $f9
    ctx->pc = 0x25ecd8u;
    ctx->f[31] = FPU_MUL_S(ctx->f[0], ctx->f[9]);
label_25ecdc:
    // 0x25ecdc: 0x46086a1c  madd.s      $f8, $f13, $f8
    ctx->pc = 0x25ecdcu;
    ctx->f[8] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[13], ctx->f[8]));
label_25ece0:
    // 0x25ece0: 0xe7a80184  swc1        $f8, 0x184($sp)
    ctx->pc = 0x25ece0u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 388), bits); }
label_25ece4:
    // 0x25ece4: 0x46071a41  sub.s       $f9, $f3, $f7
    ctx->pc = 0x25ece4u;
    ctx->f[9] = FPU_SUB_S(ctx->f[3], ctx->f[7]);
label_25ece8:
    // 0x25ece8: 0xc4e80048  lwc1        $f8, 0x48($a3)
    ctx->pc = 0x25ece8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_25ecec:
    // 0x25ecec: 0xc7a30184  lwc1        $f3, 0x184($sp)
    ctx->pc = 0x25ececu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_25ecf0:
    // 0x25ecf0: 0xc4e70058  lwc1        $f7, 0x58($a3)
    ctx->pc = 0x25ecf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_25ecf4:
    // 0x25ecf4: 0x4608001a  mula.s      $f0, $f8
    ctx->pc = 0x25ecf4u;
    ctx->f[31] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
label_25ecf8:
    // 0x25ecf8: 0x46031201  sub.s       $f8, $f2, $f3
    ctx->pc = 0x25ecf8u;
    ctx->f[8] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
label_25ecfc:
    // 0x25ecfc: 0x460769dc  madd.s      $f7, $f13, $f7
    ctx->pc = 0x25ecfcu;
    ctx->f[7] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[13], ctx->f[7]));
label_25ed00:
    // 0x25ed00: 0xe7a70188  swc1        $f7, 0x188($sp)
    ctx->pc = 0x25ed00u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
label_25ed04:
    // 0x25ed04: 0xc4e7004c  lwc1        $f7, 0x4C($a3)
    ctx->pc = 0x25ed04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_25ed08:
    // 0x25ed08: 0xc7a20188  lwc1        $f2, 0x188($sp)
    ctx->pc = 0x25ed08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_25ed0c:
    // 0x25ed0c: 0xc4e3005c  lwc1        $f3, 0x5C($a3)
    ctx->pc = 0x25ed0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_25ed10:
    // 0x25ed10: 0x4607001a  mula.s      $f0, $f7
    ctx->pc = 0x25ed10u;
    ctx->f[31] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
label_25ed14:
    // 0x25ed14: 0x460209c1  sub.s       $f7, $f1, $f2
    ctx->pc = 0x25ed14u;
    ctx->f[7] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_25ed18:
    // 0x25ed18: 0x4603681c  madd.s      $f0, $f13, $f3
    ctx->pc = 0x25ed18u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[13], ctx->f[3]));
label_25ed1c:
    // 0x25ed1c: 0xe7a0018c  swc1        $f0, 0x18C($sp)
    ctx->pc = 0x25ed1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 396), bits); }
label_25ed20:
    // 0x25ed20: 0x4607281a  mula.s      $f5, $f7
    ctx->pc = 0x25ed20u;
    ctx->f[31] = FPU_MUL_S(ctx->f[5], ctx->f[7]);
label_25ed24:
    // 0x25ed24: 0x460830dd  msub.s      $f3, $f6, $f8
    ctx->pc = 0x25ed24u;
    ctx->f[3] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[8]));
label_25ed28:
    // 0x25ed28: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x25ed28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25ed2c:
    // 0x25ed2c: 0x4609301a  mula.s      $f6, $f9
    ctx->pc = 0x25ed2cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[6], ctx->f[9]);
label_25ed30:
    // 0x25ed30: 0x4607219d  msub.s      $f6, $f4, $f7
    ctx->pc = 0x25ed30u;
    ctx->f[6] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[7]));
label_25ed34:
    // 0x25ed34: 0x46065ac1  sub.s       $f11, $f11, $f6
    ctx->pc = 0x25ed34u;
    ctx->f[11] = FPU_SUB_S(ctx->f[11], ctx->f[6]);
label_25ed38:
    // 0x25ed38: 0x27a30328  addiu       $v1, $sp, 0x328
    ctx->pc = 0x25ed38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 808));
label_25ed3c:
    // 0x25ed3c: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x25ed3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_25ed40:
    // 0x25ed40: 0x46036301  sub.s       $f12, $f12, $f3
    ctx->pc = 0x25ed40u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[3]);
label_25ed44:
    // 0x25ed44: 0x4608201a  mula.s      $f4, $f8
    ctx->pc = 0x25ed44u;
    ctx->f[31] = FPU_MUL_S(ctx->f[4], ctx->f[8]);
label_25ed48:
    // 0x25ed48: 0x460928dd  msub.s      $f3, $f5, $f9
    ctx->pc = 0x25ed48u;
    ctx->f[3] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[9]));
label_25ed4c:
    // 0x25ed4c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x25ed4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25ed50:
    // 0x25ed50: 0x46026082  mul.s       $f2, $f12, $f2
    ctx->pc = 0x25ed50u;
    ctx->f[2] = FPU_MUL_S(ctx->f[12], ctx->f[2]);
label_25ed54:
    // 0x25ed54: 0x46015842  mul.s       $f1, $f11, $f1
    ctx->pc = 0x25ed54u;
    ctx->f[1] = FPU_MUL_S(ctx->f[11], ctx->f[1]);
label_25ed58:
    // 0x25ed58: 0x46035281  sub.s       $f10, $f10, $f3
    ctx->pc = 0x25ed58u;
    ctx->f[10] = FPU_SUB_S(ctx->f[10], ctx->f[3]);
label_25ed5c:
    // 0x25ed5c: 0x46011018  adda.s      $f2, $f1
    ctx->pc = 0x25ed5cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_25ed60:
    // 0x25ed60: 0x4600505c  madd.s      $f1, $f10, $f0
    ctx->pc = 0x25ed60u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[10], ctx->f[0]));
label_25ed64:
    // 0x25ed64: 0x144400d4  bne         $v0, $a0, . + 4 + (0xD4 << 2)
label_25ed68:
    if (ctx->pc == 0x25ED68u) {
        ctx->pc = 0x25ED68u;
            // 0x25ed68: 0xe7a10708  swc1        $f1, 0x708($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1800), bits); }
        ctx->pc = 0x25ED6Cu;
        goto label_25ed6c;
    }
    ctx->pc = 0x25ED64u;
    {
        const bool branch_taken_0x25ed64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x25ED68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25ED64u;
            // 0x25ed68: 0xe7a10708  swc1        $f1, 0x708($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1800), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ed64) {
            ctx->pc = 0x25F0B8u;
            goto label_25f0b8;
        }
    }
    ctx->pc = 0x25ED6Cu;
label_25ed6c:
    // 0x25ed6c: 0x3c02b400  lui         $v0, 0xB400
    ctx->pc = 0x25ed6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)46080 << 16));
label_25ed70:
    // 0x25ed70: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25ed70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_25ed74:
    // 0x25ed74: 0x0  nop
    ctx->pc = 0x25ed74u;
    // NOP
label_25ed78:
    // 0x25ed78: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x25ed78u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_25ed7c:
    // 0x25ed7c: 0x450100ce  bc1t        . + 4 + (0xCE << 2)
label_25ed80:
    if (ctx->pc == 0x25ED80u) {
        ctx->pc = 0x25ED84u;
        goto label_25ed84;
    }
    ctx->pc = 0x25ED7Cu;
    {
        const bool branch_taken_0x25ed7c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x25ed7c) {
            ctx->pc = 0x25F0B8u;
            goto label_25f0b8;
        }
    }
    ctx->pc = 0x25ED84u;
label_25ed84:
    // 0x25ed84: 0xe7b902e0  swc1        $f25, 0x2E0($sp)
    ctx->pc = 0x25ed84u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 736), bits); }
label_25ed88:
    // 0x25ed88: 0x8ea20008  lw          $v0, 0x8($s5)
    ctx->pc = 0x25ed88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_25ed8c:
    // 0x25ed8c: 0xc4c9000c  lwc1        $f9, 0xC($a2)
    ctx->pc = 0x25ed8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_25ed90:
    // 0x25ed90: 0xc5000090  lwc1        $f0, 0x90($t0)
    ctx->pc = 0x25ed90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25ed94:
    // 0x25ed94: 0xc4a8000c  lwc1        $f8, 0xC($a1)
    ctx->pc = 0x25ed94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_25ed98:
    // 0x25ed98: 0xc5070094  lwc1        $f7, 0x94($t0)
    ctx->pc = 0x25ed98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_25ed9c:
    // 0x25ed9c: 0xc5060098  lwc1        $f6, 0x98($t0)
    ctx->pc = 0x25ed9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_25eda0:
    // 0x25eda0: 0xc505009c  lwc1        $f5, 0x9C($t0)
    ctx->pc = 0x25eda0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_25eda4:
    // 0x25eda4: 0xc44a0028  lwc1        $f10, 0x28($v0)
    ctx->pc = 0x25eda4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_25eda8:
    // 0x25eda8: 0xc4e40090  lwc1        $f4, 0x90($a3)
    ctx->pc = 0x25eda8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_25edac:
    // 0x25edac: 0xc4e30094  lwc1        $f3, 0x94($a3)
    ctx->pc = 0x25edacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_25edb0:
    // 0x25edb0: 0xc4e20098  lwc1        $f2, 0x98($a3)
    ctx->pc = 0x25edb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_25edb4:
    // 0x25edb4: 0xc4e1009c  lwc1        $f1, 0x9C($a3)
    ctx->pc = 0x25edb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25edb8:
    // 0x25edb8: 0x46095242  mul.s       $f9, $f10, $f9
    ctx->pc = 0x25edb8u;
    ctx->f[9] = FPU_MUL_S(ctx->f[10], ctx->f[9]);
label_25edbc:
    // 0x25edbc: 0x27a202cc  addiu       $v0, $sp, 0x2CC
    ctx->pc = 0x25edbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 716));
label_25edc0:
    // 0x25edc0: 0x46004802  mul.s       $f0, $f9, $f0
    ctx->pc = 0x25edc0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[9], ctx->f[0]);
label_25edc4:
    // 0x25edc4: 0x46085202  mul.s       $f8, $f10, $f8
    ctx->pc = 0x25edc4u;
    ctx->f[8] = FPU_MUL_S(ctx->f[10], ctx->f[8]);
label_25edc8:
    // 0x25edc8: 0x460749c2  mul.s       $f7, $f9, $f7
    ctx->pc = 0x25edc8u;
    ctx->f[7] = FPU_MUL_S(ctx->f[9], ctx->f[7]);
label_25edcc:
    // 0x25edcc: 0x46064982  mul.s       $f6, $f9, $f6
    ctx->pc = 0x25edccu;
    ctx->f[6] = FPU_MUL_S(ctx->f[9], ctx->f[6]);
label_25edd0:
    // 0x25edd0: 0xe7a002c0  swc1        $f0, 0x2C0($sp)
    ctx->pc = 0x25edd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 704), bits); }
label_25edd4:
    // 0x25edd4: 0x46054942  mul.s       $f5, $f9, $f5
    ctx->pc = 0x25edd4u;
    ctx->f[5] = FPU_MUL_S(ctx->f[9], ctx->f[5]);
label_25edd8:
    // 0x25edd8: 0x46044002  mul.s       $f0, $f8, $f4
    ctx->pc = 0x25edd8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[8], ctx->f[4]);
label_25eddc:
    // 0x25eddc: 0xe7a702c4  swc1        $f7, 0x2C4($sp)
    ctx->pc = 0x25eddcu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 708), bits); }
label_25ede0:
    // 0x25ede0: 0xe7a602c8  swc1        $f6, 0x2C8($sp)
    ctx->pc = 0x25ede0u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 712), bits); }
label_25ede4:
    // 0x25ede4: 0xe4450000  swc1        $f5, 0x0($v0)
    ctx->pc = 0x25ede4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_25ede8:
    // 0x25ede8: 0xe7a002d0  swc1        $f0, 0x2D0($sp)
    ctx->pc = 0x25ede8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 720), bits); }
label_25edec:
    // 0x25edec: 0x27a202dc  addiu       $v0, $sp, 0x2DC
    ctx->pc = 0x25edecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 732));
label_25edf0:
    // 0x25edf0: 0x46034002  mul.s       $f0, $f8, $f3
    ctx->pc = 0x25edf0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[8], ctx->f[3]);
label_25edf4:
    // 0x25edf4: 0xe7a002d4  swc1        $f0, 0x2D4($sp)
    ctx->pc = 0x25edf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 724), bits); }
label_25edf8:
    // 0x25edf8: 0x46024082  mul.s       $f2, $f8, $f2
    ctx->pc = 0x25edf8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[8], ctx->f[2]);
label_25edfc:
    // 0x25edfc: 0x46014002  mul.s       $f0, $f8, $f1
    ctx->pc = 0x25edfcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[8], ctx->f[1]);
label_25ee00:
    // 0x25ee00: 0xe7a202d8  swc1        $f2, 0x2D8($sp)
    ctx->pc = 0x25ee00u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 728), bits); }
label_25ee04:
    // 0x25ee04: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x25ee04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_25ee08:
    // 0x25ee08: 0xc60e0008  lwc1        $f14, 0x8($s0)
    ctx->pc = 0x25ee08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_25ee0c:
    // 0x25ee0c: 0xc7ac02c4  lwc1        $f12, 0x2C4($sp)
    ctx->pc = 0x25ee0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_25ee10:
    // 0x25ee10: 0xc60b0004  lwc1        $f11, 0x4($s0)
    ctx->pc = 0x25ee10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
label_25ee14:
    // 0x25ee14: 0xc6a30064  lwc1        $f3, 0x64($s5)
    ctx->pc = 0x25ee14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_25ee18:
    // 0x25ee18: 0xc7a502c8  lwc1        $f5, 0x2C8($sp)
    ctx->pc = 0x25ee18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_25ee1c:
    // 0x25ee1c: 0xc60d0000  lwc1        $f13, 0x0($s0)
    ctx->pc = 0x25ee1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_25ee20:
    // 0x25ee20: 0xc6a40060  lwc1        $f4, 0x60($s5)
    ctx->pc = 0x25ee20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_25ee24:
    // 0x25ee24: 0x460e601a  mula.s      $f12, $f14
    ctx->pc = 0x25ee24u;
    ctx->f[31] = FPU_MUL_S(ctx->f[12], ctx->f[14]);
label_25ee28:
    // 0x25ee28: 0xc7a602c0  lwc1        $f6, 0x2C0($sp)
    ctx->pc = 0x25ee28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_25ee2c:
    // 0x25ee2c: 0xc7a902d4  lwc1        $f9, 0x2D4($sp)
    ctx->pc = 0x25ee2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 724)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_25ee30:
    // 0x25ee30: 0x460b289d  msub.s      $f2, $f5, $f11
    ctx->pc = 0x25ee30u;
    ctx->f[2] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[11]));
label_25ee34:
    // 0x25ee34: 0x460d281a  mula.s      $f5, $f13
    ctx->pc = 0x25ee34u;
    ctx->f[31] = FPU_MUL_S(ctx->f[5], ctx->f[13]);
label_25ee38:
    // 0x25ee38: 0x460211c2  mul.s       $f7, $f2, $f2
    ctx->pc = 0x25ee38u;
    ctx->f[7] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
label_25ee3c:
    // 0x25ee3c: 0x460e315d  msub.s      $f5, $f6, $f14
    ctx->pc = 0x25ee3cu;
    ctx->f[5] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[14]));
label_25ee40:
    // 0x25ee40: 0x460b301a  mula.s      $f6, $f11
    ctx->pc = 0x25ee40u;
    ctx->f[31] = FPU_MUL_S(ctx->f[6], ctx->f[11]);
label_25ee44:
    // 0x25ee44: 0x460d631d  msub.s      $f12, $f12, $f13
    ctx->pc = 0x25ee44u;
    ctx->f[12] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[12], ctx->f[13]));
label_25ee48:
    // 0x25ee48: 0xc7aa02d8  lwc1        $f10, 0x2D8($sp)
    ctx->pc = 0x25ee48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_25ee4c:
    // 0x25ee4c: 0x460e481a  mula.s      $f9, $f14
    ctx->pc = 0x25ee4cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[9], ctx->f[14]);
label_25ee50:
    // 0x25ee50: 0xc7a802d0  lwc1        $f8, 0x2D0($sp)
    ctx->pc = 0x25ee50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_25ee54:
    // 0x25ee54: 0x46052942  mul.s       $f5, $f5, $f5
    ctx->pc = 0x25ee54u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
label_25ee58:
    // 0x25ee58: 0x460b519d  msub.s      $f6, $f10, $f11
    ctx->pc = 0x25ee58u;
    ctx->f[6] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[10], ctx->f[11]));
label_25ee5c:
    // 0x25ee5c: 0x460d501a  mula.s      $f10, $f13
    ctx->pc = 0x25ee5cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[10], ctx->f[13]);
label_25ee60:
    // 0x25ee60: 0x460e429d  msub.s      $f10, $f8, $f14
    ctx->pc = 0x25ee60u;
    ctx->f[10] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[8], ctx->f[14]));
label_25ee64:
    // 0x25ee64: 0x460b401a  mula.s      $f8, $f11
    ctx->pc = 0x25ee64u;
    ctx->f[31] = FPU_MUL_S(ctx->f[8], ctx->f[11]);
label_25ee68:
    // 0x25ee68: 0x460d4a1d  msub.s      $f8, $f9, $f13
    ctx->pc = 0x25ee68u;
    ctx->f[8] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[9], ctx->f[13]));
label_25ee6c:
    // 0x25ee6c: 0x46053818  adda.s      $f7, $f5
    ctx->pc = 0x25ee6cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[7], ctx->f[5]);
label_25ee70:
    // 0x25ee70: 0x46063182  mul.s       $f6, $f6, $f6
    ctx->pc = 0x25ee70u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[6]);
label_25ee74:
    // 0x25ee74: 0x460a5142  mul.s       $f5, $f10, $f10
    ctx->pc = 0x25ee74u;
    ctx->f[5] = FPU_MUL_S(ctx->f[10], ctx->f[10]);
label_25ee78:
    // 0x25ee78: 0x460c61dc  madd.s      $f7, $f12, $f12
    ctx->pc = 0x25ee78u;
    ctx->f[7] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[12], ctx->f[12]));
label_25ee7c:
    // 0x25ee7c: 0x46053018  adda.s      $f6, $f5
    ctx->pc = 0x25ee7cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[6], ctx->f[5]);
label_25ee80:
    // 0x25ee80: 0x460d2102  mul.s       $f4, $f4, $f13
    ctx->pc = 0x25ee80u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[13]);
label_25ee84:
    // 0x25ee84: 0x460b18c2  mul.s       $f3, $f3, $f11
    ctx->pc = 0x25ee84u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[11]);
label_25ee88:
    // 0x25ee88: 0x4608415c  madd.s      $f5, $f8, $f8
    ctx->pc = 0x25ee88u;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[8], ctx->f[8]));
label_25ee8c:
    // 0x25ee8c: 0x46032018  adda.s      $f4, $f3
    ctx->pc = 0x25ee8cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
label_25ee90:
    // 0x25ee90: 0xc6a20068  lwc1        $f2, 0x68($s5)
    ctx->pc = 0x25ee90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_25ee94:
    // 0x25ee94: 0x460700c4  c1          0x700C4
    ctx->pc = 0x25ee94u;
    ctx->f[3] = FPU_SQRT_S(ctx->f[0]);
label_25ee98:
    // 0x25ee98: 0xc50100a0  lwc1        $f1, 0xA0($t0)
    ctx->pc = 0x25ee98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25ee9c:
    // 0x25ee9c: 0x460e109c  madd.s      $f2, $f2, $f14
    ctx->pc = 0x25ee9cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[14]));
label_25eea0:
    // 0x25eea0: 0xc4e000a0  lwc1        $f0, 0xA0($a3)
    ctx->pc = 0x25eea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25eea4:
    // 0x25eea4: 0x4603081a  mula.s      $f1, $f3
    ctx->pc = 0x25eea4u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_25eea8:
    // 0x25eea8: 0x46050044  c1          0x50044
    ctx->pc = 0x25eea8u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
label_25eeac:
    // 0x25eeac: 0x4601001c  madd.s      $f0, $f0, $f1
    ctx->pc = 0x25eeacu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[1]));
label_25eeb0:
    // 0x25eeb0: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x25eeb0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_25eeb4:
    // 0x25eeb4: 0xe7a002a4  swc1        $f0, 0x2A4($sp)
    ctx->pc = 0x25eeb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 676), bits); }
label_25eeb8:
    // 0x25eeb8: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x25eeb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_25eebc:
    // 0x25eebc: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x25eebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_25eec0:
    // 0x25eec0: 0x8c720000  lw          $s2, 0x0($v1)
    ctx->pc = 0x25eec0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_25eec4:
    // 0x25eec4: 0x8c710008  lw          $s1, 0x8($v1)
    ctx->pc = 0x25eec4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_25eec8:
    // 0x25eec8: 0x8c560008  lw          $s6, 0x8($v0)
    ctx->pc = 0x25eec8u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_25eecc:
    // 0x25eecc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x25eeccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_25eed0:
    // 0x25eed0: 0xafb10260  sw          $s1, 0x260($sp)
    ctx->pc = 0x25eed0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 608), GPR_U32(ctx, 17));
label_25eed4:
    // 0x25eed4: 0xafb60264  sw          $s6, 0x264($sp)
    ctx->pc = 0x25eed4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 22));
label_25eed8:
    // 0x25eed8: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x25eed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25eedc:
    // 0x25eedc: 0xc6410010  lwc1        $f1, 0x10($s2)
    ctx->pc = 0x25eedcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25eee0:
    // 0x25eee0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x25eee0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_25eee4:
    // 0x25eee4: 0xe7a00274  swc1        $f0, 0x274($sp)
    ctx->pc = 0x25eee4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 628), bits); }
label_25eee8:
    // 0x25eee8: 0xc6a00060  lwc1        $f0, 0x60($s5)
    ctx->pc = 0x25eee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25eeec:
    // 0x25eeec: 0xe7a002b0  swc1        $f0, 0x2B0($sp)
    ctx->pc = 0x25eeecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 688), bits); }
label_25eef0:
    // 0x25eef0: 0xc6a00064  lwc1        $f0, 0x64($s5)
    ctx->pc = 0x25eef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25eef4:
    // 0x25eef4: 0xe7a002b4  swc1        $f0, 0x2B4($sp)
    ctx->pc = 0x25eef4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 692), bits); }
label_25eef8:
    // 0x25eef8: 0xc6a00068  lwc1        $f0, 0x68($s5)
    ctx->pc = 0x25eef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25eefc:
    // 0x25eefc: 0xe7a002b8  swc1        $f0, 0x2B8($sp)
    ctx->pc = 0x25eefcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 696), bits); }
label_25ef00:
    // 0x25ef00: 0xc6a0006c  lwc1        $f0, 0x6C($s5)
    ctx->pc = 0x25ef00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25ef04:
    // 0x25ef04: 0xe7a002bc  swc1        $f0, 0x2BC($sp)
    ctx->pc = 0x25ef04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 700), bits); }
label_25ef08:
    // 0x25ef08: 0x8ea20008  lw          $v0, 0x8($s5)
    ctx->pc = 0x25ef08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_25ef0c:
    // 0x25ef0c: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x25ef0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_25ef10:
    // 0x25ef10: 0xafa202a0  sw          $v0, 0x2A0($sp)
    ctx->pc = 0x25ef10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 672), GPR_U32(ctx, 2));
label_25ef14:
    // 0x25ef14: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x25ef14u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_25ef18:
    // 0x25ef18: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x25ef18u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_25ef1c:
    // 0x25ef1c: 0x320f809  jalr        $t9
label_25ef20:
    if (ctx->pc == 0x25EF20u) {
        ctx->pc = 0x25EF20u;
            // 0x25ef20: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25EF24u;
        goto label_25ef24;
    }
    ctx->pc = 0x25EF1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x25EF24u);
        ctx->pc = 0x25EF20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25EF1Cu;
            // 0x25ef20: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x25EF24u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x25EF24u; }
            if (ctx->pc != 0x25EF24u) { return; }
        }
        }
    }
    ctx->pc = 0x25EF24u;
label_25ef24:
    // 0x25ef24: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x25ef24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_25ef28:
    // 0x25ef28: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x25ef28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_25ef2c:
    // 0x25ef2c: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x25ef2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_25ef30:
    // 0x25ef30: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x25ef30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_25ef34:
    // 0x25ef34: 0xafa20270  sw          $v0, 0x270($sp)
    ctx->pc = 0x25ef34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 624), GPR_U32(ctx, 2));
label_25ef38:
    // 0x25ef38: 0xafa2026c  sw          $v0, 0x26C($sp)
    ctx->pc = 0x25ef38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 620), GPR_U32(ctx, 2));
label_25ef3c:
    // 0x25ef3c: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x25ef3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
label_25ef40:
    // 0x25ef40: 0x622824  and         $a1, $v1, $v0
    ctx->pc = 0x25ef40u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_25ef44:
    // 0x25ef44: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x25ef44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_25ef48:
    // 0x25ef48: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x25ef48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_25ef4c:
    // 0x25ef4c: 0x453021  addu        $a2, $v0, $a1
    ctx->pc = 0x25ef4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_25ef50:
    // 0x25ef50: 0x66082b  sltu        $at, $v1, $a2
    ctx->pc = 0x25ef50u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_25ef54:
    // 0x25ef54: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
label_25ef58:
    if (ctx->pc == 0x25EF58u) {
        ctx->pc = 0x25EF5Cu;
        goto label_25ef5c;
    }
    ctx->pc = 0x25EF54u;
    {
        const bool branch_taken_0x25ef54 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x25ef54) {
            ctx->pc = 0x25EF68u;
            goto label_25ef68;
        }
    }
    ctx->pc = 0x25EF5Cu;
label_25ef5c:
    // 0x25ef5c: 0x10000006  b           . + 4 + (0x6 << 2)
label_25ef60:
    if (ctx->pc == 0x25EF60u) {
        ctx->pc = 0x25EF60u;
            // 0x25ef60: 0xac86000c  sw          $a2, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
        ctx->pc = 0x25EF64u;
        goto label_25ef64;
    }
    ctx->pc = 0x25EF5Cu;
    {
        const bool branch_taken_0x25ef5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25EF60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25EF5Cu;
            // 0x25ef60: 0xac86000c  sw          $a2, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ef5c) {
            ctx->pc = 0x25EF78u;
            goto label_25ef78;
        }
    }
    ctx->pc = 0x25EF64u;
label_25ef64:
    // 0x25ef64: 0x0  nop
    ctx->pc = 0x25ef64u;
    // NOP
label_25ef68:
    // 0x25ef68: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x25ef68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_25ef6c:
    // 0x25ef6c: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x25ef6cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_25ef70:
    // 0x25ef70: 0x320f809  jalr        $t9
label_25ef74:
    if (ctx->pc == 0x25EF74u) {
        ctx->pc = 0x25EF78u;
        goto label_25ef78;
    }
    ctx->pc = 0x25EF70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x25EF78u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x25EF78u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x25EF78u; }
            if (ctx->pc != 0x25EF78u) { return; }
        }
        }
    }
    ctx->pc = 0x25EF78u;
label_25ef78:
    // 0x25ef78: 0x27b70268  addiu       $s7, $sp, 0x268
    ctx->pc = 0x25ef78u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 616));
label_25ef7c:
    // 0x25ef7c: 0xaee20000  sw          $v0, 0x0($s7)
    ctx->pc = 0x25ef7cu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
label_25ef80:
    // 0x25ef80: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x25ef80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_25ef84:
    // 0x25ef84: 0x8ee50000  lw          $a1, 0x0($s7)
    ctx->pc = 0x25ef84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_25ef88:
    // 0x25ef88: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x25ef88u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_25ef8c:
    // 0x25ef8c: 0x320f809  jalr        $t9
label_25ef90:
    if (ctx->pc == 0x25EF90u) {
        ctx->pc = 0x25EF90u;
            // 0x25ef90: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25EF94u;
        goto label_25ef94;
    }
    ctx->pc = 0x25EF8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x25EF94u);
        ctx->pc = 0x25EF90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25EF8Cu;
            // 0x25ef90: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x25EF94u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x25EF94u; }
            if (ctx->pc != 0x25EF94u) { return; }
        }
        }
    }
    ctx->pc = 0x25EF94u;
label_25ef94:
    // 0x25ef94: 0x27a202dc  addiu       $v0, $sp, 0x2DC
    ctx->pc = 0x25ef94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 732));
label_25ef98:
    // 0x25ef98: 0x27a30278  addiu       $v1, $sp, 0x278
    ctx->pc = 0x25ef98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 632));
label_25ef9c:
    // 0x25ef9c: 0xc4450000  lwc1        $f5, 0x0($v0)
    ctx->pc = 0x25ef9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_25efa0:
    // 0x25efa0: 0x27a40280  addiu       $a0, $sp, 0x280
    ctx->pc = 0x25efa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
label_25efa4:
    // 0x25efa4: 0xc6c200a0  lwc1        $f2, 0xA0($s6)
    ctx->pc = 0x25efa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_25efa8:
    // 0x25efa8: 0x27a50380  addiu       $a1, $sp, 0x380
    ctx->pc = 0x25efa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 896));
label_25efac:
    // 0x25efac: 0xc62300a0  lwc1        $f3, 0xA0($s1)
    ctx->pc = 0x25efacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_25efb0:
    // 0x25efb0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x25efb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25efb4:
    // 0x25efb4: 0x27a202cc  addiu       $v0, $sp, 0x2CC
    ctx->pc = 0x25efb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 716));
label_25efb8:
    // 0x25efb8: 0xc4440000  lwc1        $f4, 0x0($v0)
    ctx->pc = 0x25efb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_25efbc:
    // 0x25efbc: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x25efbcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
label_25efc0:
    // 0x25efc0: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x25efc0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
label_25efc4:
    // 0x25efc4: 0x3c023400  lui         $v0, 0x3400
    ctx->pc = 0x25efc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)13312 << 16));
label_25efc8:
    // 0x25efc8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x25efc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_25efcc:
    // 0x25efcc: 0x4604181a  mula.s      $f3, $f4
    ctx->pc = 0x25efccu;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
label_25efd0:
    // 0x25efd0: 0x4605109c  madd.s      $f2, $f2, $f5
    ctx->pc = 0x25efd0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[5]));
label_25efd4:
    // 0x25efd4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x25efd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_25efd8:
    // 0x25efd8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x25efd8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_25efdc:
    // 0x25efdc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25efdcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_25efe0:
    // 0x25efe0: 0xe4620000  swc1        $f2, 0x0($v1)
    ctx->pc = 0x25efe0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_25efe4:
    // 0x25efe4: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x25efe4u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
label_25efe8:
    // 0x25efe8: 0x0  nop
    ctx->pc = 0x25efe8u;
    // NOP
label_25efec:
    // 0x25efec: 0x0  nop
    ctx->pc = 0x25efecu;
    // NOP
label_25eff0:
    // 0x25eff0: 0xc0a4644  jal         func_291910
label_25eff4:
    if (ctx->pc == 0x25EFF4u) {
        ctx->pc = 0x25EFF4u;
            // 0x25eff4: 0xe7a0027c  swc1        $f0, 0x27C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 636), bits); }
        ctx->pc = 0x25EFF8u;
        goto label_25eff8;
    }
    ctx->pc = 0x25EFF0u;
    SET_GPR_U32(ctx, 31, 0x25EFF8u);
    ctx->pc = 0x25EFF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25EFF0u;
            // 0x25eff4: 0xe7a0027c  swc1        $f0, 0x27C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 636), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x291910u;
    if (runtime->hasFunction(0x291910u)) {
        auto targetFn = runtime->lookupFunction(0x291910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25EFF8u; }
        if (ctx->pc != 0x25EFF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00291910_0x291910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25EFF8u; }
        if (ctx->pc != 0x25EFF8u) { return; }
    }
    ctx->pc = 0x25EFF8u;
label_25eff8:
    // 0x25eff8: 0xc7a305a0  lwc1        $f3, 0x5A0($sp)
    ctx->pc = 0x25eff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_25effc:
    // 0x25effc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x25effcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_25f000:
    // 0x25f000: 0xc7a205a4  lwc1        $f2, 0x5A4($sp)
    ctx->pc = 0x25f000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_25f004:
    // 0x25f004: 0xafa20240  sw          $v0, 0x240($sp)
    ctx->pc = 0x25f004u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 576), GPR_U32(ctx, 2));
label_25f008:
    // 0x25f008: 0xc7a105a8  lwc1        $f1, 0x5A8($sp)
    ctx->pc = 0x25f008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25f00c:
    // 0x25f00c: 0x27a40260  addiu       $a0, $sp, 0x260
    ctx->pc = 0x25f00cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
label_25f010:
    // 0x25f010: 0xc7a005ac  lwc1        $f0, 0x5AC($sp)
    ctx->pc = 0x25f010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1452)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25f014:
    // 0x25f014: 0x27a506d0  addiu       $a1, $sp, 0x6D0
    ctx->pc = 0x25f014u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1744));
label_25f018:
    // 0x25f018: 0x27a60240  addiu       $a2, $sp, 0x240
    ctx->pc = 0x25f018u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
label_25f01c:
    // 0x25f01c: 0xe7a30290  swc1        $f3, 0x290($sp)
    ctx->pc = 0x25f01cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 656), bits); }
label_25f020:
    // 0x25f020: 0xe7a20294  swc1        $f2, 0x294($sp)
    ctx->pc = 0x25f020u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 660), bits); }
label_25f024:
    // 0x25f024: 0xe7a10298  swc1        $f1, 0x298($sp)
    ctx->pc = 0x25f024u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 664), bits); }
label_25f028:
    // 0x25f028: 0xc0976a8  jal         func_25DAA0
label_25f02c:
    if (ctx->pc == 0x25F02Cu) {
        ctx->pc = 0x25F02Cu;
            // 0x25f02c: 0xe7a0029c  swc1        $f0, 0x29C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 668), bits); }
        ctx->pc = 0x25F030u;
        goto label_25f030;
    }
    ctx->pc = 0x25F028u;
    SET_GPR_U32(ctx, 31, 0x25F030u);
    ctx->pc = 0x25F02Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25F028u;
            // 0x25f02c: 0xe7a0029c  swc1        $f0, 0x29C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 668), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x25DAA0u;
    if (runtime->hasFunction(0x25DAA0u)) {
        auto targetFn = runtime->lookupFunction(0x25DAA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25F030u; }
        if (ctx->pc != 0x25F030u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025DAA0_0x25daa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25F030u; }
        if (ctx->pc != 0x25F030u) { return; }
    }
    ctx->pc = 0x25F030u;
label_25f030:
    // 0x25f030: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x25f030u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_25f034:
    // 0x25f034: 0x8ee50000  lw          $a1, 0x0($s7)
    ctx->pc = 0x25f034u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_25f038:
    // 0x25f038: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x25f038u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_25f03c:
    // 0x25f03c: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x25f03cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
label_25f040:
    // 0x25f040: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x25f040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_25f044:
    // 0x25f044: 0x14a20006  bne         $a1, $v0, . + 4 + (0x6 << 2)
label_25f048:
    if (ctx->pc == 0x25F048u) {
        ctx->pc = 0x25F04Cu;
        goto label_25f04c;
    }
    ctx->pc = 0x25F044u;
    {
        const bool branch_taken_0x25f044 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x25f044) {
            ctx->pc = 0x25F060u;
            goto label_25f060;
        }
    }
    ctx->pc = 0x25F04Cu;
label_25f04c:
    // 0x25f04c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x25f04cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_25f050:
    // 0x25f050: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x25f050u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_25f054:
    // 0x25f054: 0x320f809  jalr        $t9
label_25f058:
    if (ctx->pc == 0x25F058u) {
        ctx->pc = 0x25F05Cu;
        goto label_25f05c;
    }
    ctx->pc = 0x25F054u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x25F05Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x25F05Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x25F05Cu; }
            if (ctx->pc != 0x25F05Cu) { return; }
        }
        }
    }
    ctx->pc = 0x25F05Cu;
label_25f05c:
    // 0x25f05c: 0x0  nop
    ctx->pc = 0x25f05cu;
    // NOP
label_25f060:
    // 0x25f060: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x25f060u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_25f064:
    // 0x25f064: 0xc7a10240  lwc1        $f1, 0x240($sp)
    ctx->pc = 0x25f064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25f068:
    // 0x25f068: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25f068u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_25f06c:
    // 0x25f06c: 0x0  nop
    ctx->pc = 0x25f06cu;
    // NOP
label_25f070:
    // 0x25f070: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x25f070u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_25f074:
    // 0x25f074: 0x45000010  bc1f        . + 4 + (0x10 << 2)
label_25f078:
    if (ctx->pc == 0x25F078u) {
        ctx->pc = 0x25F078u;
            // 0x25f078: 0x27a40230  addiu       $a0, $sp, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
        ctx->pc = 0x25F07Cu;
        goto label_25f07c;
    }
    ctx->pc = 0x25F074u;
    {
        const bool branch_taken_0x25f074 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x25F078u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25F074u;
            // 0x25f078: 0x27a40230  addiu       $a0, $sp, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f074) {
            ctx->pc = 0x25F0B8u;
            goto label_25f0b8;
        }
    }
    ctx->pc = 0x25F07Cu;
label_25f07c:
    // 0x25f07c: 0x27a503c0  addiu       $a1, $sp, 0x3C0
    ctx->pc = 0x25f07cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 960));
label_25f080:
    // 0x25f080: 0xc0a45e8  jal         func_2917A0
label_25f084:
    if (ctx->pc == 0x25F084u) {
        ctx->pc = 0x25F084u;
            // 0x25f084: 0x27a60250  addiu       $a2, $sp, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
        ctx->pc = 0x25F088u;
        goto label_25f088;
    }
    ctx->pc = 0x25F080u;
    SET_GPR_U32(ctx, 31, 0x25F088u);
    ctx->pc = 0x25F084u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25F080u;
            // 0x25f084: 0x27a60250  addiu       $a2, $sp, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2917A0u;
    if (runtime->hasFunction(0x2917A0u)) {
        auto targetFn = runtime->lookupFunction(0x2917A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25F088u; }
        if (ctx->pc != 0x25F088u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002917A0_0x2917a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25F088u; }
        if (ctx->pc != 0x25F088u) { return; }
    }
    ctx->pc = 0x25F088u;
label_25f088:
    // 0x25f088: 0xc7a10230  lwc1        $f1, 0x230($sp)
    ctx->pc = 0x25f088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25f08c:
    // 0x25f08c: 0x27a20314  addiu       $v0, $sp, 0x314
    ctx->pc = 0x25f08cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 788));
label_25f090:
    // 0x25f090: 0xc7a20238  lwc1        $f2, 0x238($sp)
    ctx->pc = 0x25f090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_25f094:
    // 0x25f094: 0xc7a00234  lwc1        $f0, 0x234($sp)
    ctx->pc = 0x25f094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25f098:
    // 0x25f098: 0xe7a10310  swc1        $f1, 0x310($sp)
    ctx->pc = 0x25f098u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 784), bits); }
label_25f09c:
    // 0x25f09c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x25f09cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_25f0a0:
    // 0x25f0a0: 0x27a20318  addiu       $v0, $sp, 0x318
    ctx->pc = 0x25f0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 792));
label_25f0a4:
    // 0x25f0a4: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x25f0a4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_25f0a8:
    // 0x25f0a8: 0xc7a0023c  lwc1        $f0, 0x23C($sp)
    ctx->pc = 0x25f0a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25f0ac:
    // 0x25f0ac: 0x27a2031c  addiu       $v0, $sp, 0x31C
    ctx->pc = 0x25f0acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 796));
label_25f0b0:
    // 0x25f0b0: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x25f0b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_25f0b4:
    // 0x25f0b4: 0x0  nop
    ctx->pc = 0x25f0b4u;
    // NOP
label_25f0b8:
    // 0x25f0b8: 0xc7a10708  lwc1        $f1, 0x708($sp)
    ctx->pc = 0x25f0b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1800)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25f0bc:
    // 0x25f0bc: 0x4601b834  c.lt.s      $f23, $f1
    ctx->pc = 0x25f0bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_25f0c0:
    // 0x25f0c0: 0x4500001d  bc1f        . + 4 + (0x1D << 2)
label_25f0c4:
    if (ctx->pc == 0x25F0C4u) {
        ctx->pc = 0x25F0C4u;
            // 0x25f0c4: 0x3c023f99  lui         $v0, 0x3F99 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16281 << 16));
        ctx->pc = 0x25F0C8u;
        goto label_25f0c8;
    }
    ctx->pc = 0x25F0C0u;
    {
        const bool branch_taken_0x25f0c0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x25F0C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25F0C0u;
            // 0x25f0c4: 0x3c023f99  lui         $v0, 0x3F99 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16281 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f0c0) {
            ctx->pc = 0x25F138u;
            goto label_25f138;
        }
    }
    ctx->pc = 0x25F0C8u;
label_25f0c8:
    // 0x25f0c8: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x25f0c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_25f0cc:
    // 0x25f0cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25f0ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_25f0d0:
    // 0x25f0d0: 0x0  nop
    ctx->pc = 0x25f0d0u;
    // NOP
label_25f0d4:
    // 0x25f0d4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x25f0d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_25f0d8:
    // 0x25f0d8: 0x4600b836  c.le.s      $f23, $f0
    ctx->pc = 0x25f0d8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[23], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_25f0dc:
    // 0x25f0dc: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_25f0e0:
    if (ctx->pc == 0x25F0E0u) {
        ctx->pc = 0x25F0E4u;
        goto label_25f0e4;
    }
    ctx->pc = 0x25F0DCu;
    {
        const bool branch_taken_0x25f0dc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x25f0dc) {
            ctx->pc = 0x25F0F0u;
            goto label_25f0f0;
        }
    }
    ctx->pc = 0x25F0E4u;
label_25f0e4:
    // 0x25f0e4: 0x10000014  b           . + 4 + (0x14 << 2)
label_25f0e8:
    if (ctx->pc == 0x25F0E8u) {
        ctx->pc = 0x25F0E8u;
            // 0x25f0e8: 0xe7b70708  swc1        $f23, 0x708($sp) (Delay Slot)
        { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1800), bits); }
        ctx->pc = 0x25F0ECu;
        goto label_25f0ec;
    }
    ctx->pc = 0x25F0E4u;
    {
        const bool branch_taken_0x25f0e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F0E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25F0E4u;
            // 0x25f0e8: 0xe7b70708  swc1        $f23, 0x708($sp) (Delay Slot)
        { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1800), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f0e4) {
            ctx->pc = 0x25F138u;
            goto label_25f138;
        }
    }
    ctx->pc = 0x25F0ECu;
label_25f0ec:
    // 0x25f0ec: 0x0  nop
    ctx->pc = 0x25f0ecu;
    // NOP
label_25f0f0:
    // 0x25f0f0: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x25f0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_25f0f4:
    // 0x25f0f4: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x25f0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_25f0f8:
    // 0x25f0f8: 0x3c0482d  daddu       $t1, $fp, $zero
    ctx->pc = 0x25f0f8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_25f0fc:
    // 0x25f0fc: 0x27a60310  addiu       $a2, $sp, 0x310
    ctx->pc = 0x25f0fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 784));
label_25f100:
    // 0x25f100: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x25f100u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25f104:
    // 0x25f104: 0x26a80060  addiu       $t0, $s5, 0x60
    ctx->pc = 0x25f104u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
label_25f108:
    // 0x25f108: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x25f108u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_25f10c:
    // 0x25f10c: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x25f10cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_25f110:
    // 0x25f110: 0xc0977d0  jal         func_25DF40
label_25f114:
    if (ctx->pc == 0x25F114u) {
        ctx->pc = 0x25F114u;
            // 0x25f114: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x25F118u;
        goto label_25f118;
    }
    ctx->pc = 0x25F110u;
    SET_GPR_U32(ctx, 31, 0x25F118u);
    ctx->pc = 0x25F114u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25F110u;
            // 0x25f114: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x25DF40u;
    if (runtime->hasFunction(0x25DF40u)) {
        auto targetFn = runtime->lookupFunction(0x25DF40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25F118u; }
        if (ctx->pc != 0x25F118u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025DF40_0x25df40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25F118u; }
        if (ctx->pc != 0x25F118u) { return; }
    }
    ctx->pc = 0x25F118u;
label_25f118:
    // 0x25f118: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x25f118u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_25f11c:
    // 0x25f11c: 0x0  nop
    ctx->pc = 0x25f11cu;
    // NOP
label_25f120:
    // 0x25f120: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x25f120u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_25f124:
    // 0x25f124: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_25f128:
    if (ctx->pc == 0x25F128u) {
        ctx->pc = 0x25F128u;
            // 0x25f128: 0xe7a00708  swc1        $f0, 0x708($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1800), bits); }
        ctx->pc = 0x25F12Cu;
        goto label_25f12c;
    }
    ctx->pc = 0x25F124u;
    {
        const bool branch_taken_0x25f124 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x25F128u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25F124u;
            // 0x25f128: 0xe7a00708  swc1        $f0, 0x708($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1800), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f124) {
            ctx->pc = 0x25F130u;
            goto label_25f130;
        }
    }
    ctx->pc = 0x25F12Cu;
label_25f12c:
    // 0x25f12c: 0x46000806  mov.s       $f0, $f1
    ctx->pc = 0x25f12cu;
    ctx->f[0] = FPU_MOV_S(ctx->f[1]);
label_25f130:
    // 0x25f130: 0xe7a00708  swc1        $f0, 0x708($sp)
    ctx->pc = 0x25f130u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1800), bits); }
label_25f134:
    // 0x25f134: 0x0  nop
    ctx->pc = 0x25f134u;
    // NOP
label_25f138:
    // 0x25f138: 0x27a404c0  addiu       $a0, $sp, 0x4C0
    ctx->pc = 0x25f138u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1216));
label_25f13c:
    // 0x25f13c: 0xc681000c  lwc1        $f1, 0xC($s4)
    ctx->pc = 0x25f13cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25f140:
    // 0x25f140: 0x27a506e8  addiu       $a1, $sp, 0x6E8
    ctx->pc = 0x25f140u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1768));
label_25f144:
    // 0x25f144: 0xc7a00708  lwc1        $f0, 0x708($sp)
    ctx->pc = 0x25f144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1800)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25f148:
    // 0x25f148: 0xafa006f8  sw          $zero, 0x6F8($sp)
    ctx->pc = 0x25f148u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1784), GPR_U32(ctx, 0));
label_25f14c:
    // 0x25f14c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x25f14cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_25f150:
    // 0x25f150: 0xc099150  jal         func_264540
label_25f154:
    if (ctx->pc == 0x25F154u) {
        ctx->pc = 0x25F154u;
            // 0x25f154: 0xe7a00708  swc1        $f0, 0x708($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1800), bits); }
        ctx->pc = 0x25F158u;
        goto label_25f158;
    }
    ctx->pc = 0x25F150u;
    SET_GPR_U32(ctx, 31, 0x25F158u);
    ctx->pc = 0x25F154u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25F150u;
            // 0x25f154: 0xe7a00708  swc1        $f0, 0x708($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1800), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x264540u;
    if (runtime->hasFunction(0x264540u)) {
        auto targetFn = runtime->lookupFunction(0x264540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25F158u; }
        if (ctx->pc != 0x25F158u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00264540_0x264540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25F158u; }
        if (ctx->pc != 0x25F158u) { return; }
    }
    ctx->pc = 0x25F158u;
label_25f158:
    // 0x25f158: 0x27a206f8  addiu       $v0, $sp, 0x6F8
    ctx->pc = 0x25f158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1784));
label_25f15c:
    // 0x25f15c: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x25f15cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_25f160:
    // 0x25f160: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x25f160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_25f164:
    // 0x25f164: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x25f164u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_25f168:
    // 0x25f168: 0x8ea4000c  lw          $a0, 0xC($s5)
    ctx->pc = 0x25f168u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
label_25f16c:
    // 0x25f16c: 0x27a90310  addiu       $t1, $sp, 0x310
    ctx->pc = 0x25f16cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 784));
label_25f170:
    // 0x25f170: 0x8ea50000  lw          $a1, 0x0($s5)
    ctx->pc = 0x25f170u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_25f174:
    // 0x25f174: 0x27aa06e8  addiu       $t2, $sp, 0x6E8
    ctx->pc = 0x25f174u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 1768));
label_25f178:
    // 0x25f178: 0x8ea60004  lw          $a2, 0x4($s5)
    ctx->pc = 0x25f178u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_25f17c:
    // 0x25f17c: 0x8ea70008  lw          $a3, 0x8($s5)
    ctx->pc = 0x25f17cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_25f180:
    // 0x25f180: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x25f180u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_25f184:
    // 0x25f184: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x25f184u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_25f188:
    // 0x25f188: 0x320f809  jalr        $t9
label_25f18c:
    if (ctx->pc == 0x25F18Cu) {
        ctx->pc = 0x25F18Cu;
            // 0x25f18c: 0x27ab0708  addiu       $t3, $sp, 0x708 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 1800));
        ctx->pc = 0x25F190u;
        goto label_25f190;
    }
    ctx->pc = 0x25F188u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x25F190u);
        ctx->pc = 0x25F18Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25F188u;
            // 0x25f18c: 0x27ab0708  addiu       $t3, $sp, 0x708 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 1800));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x25F190u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x25F190u; }
            if (ctx->pc != 0x25F190u) { return; }
        }
        }
    }
    ctx->pc = 0x25F190u;
label_25f190:
    // 0x25f190: 0x14400219  bnez        $v0, . + 4 + (0x219 << 2)
label_25f194:
    if (ctx->pc == 0x25F194u) {
        ctx->pc = 0x25F198u;
        goto label_25f198;
    }
    ctx->pc = 0x25F190u;
    {
        const bool branch_taken_0x25f190 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25f190) {
            ctx->pc = 0x25F9F8u;
            goto label_25f9f8;
        }
    }
    ctx->pc = 0x25F198u;
label_25f198:
    // 0x25f198: 0xc6613030  lwc1        $f1, 0x3030($s3)
    ctx->pc = 0x25f198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25f19c:
    // 0x25f19c: 0x3c037f7f  lui         $v1, 0x7F7F
    ctx->pc = 0x25f19cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32639 << 16));
label_25f1a0:
    // 0x25f1a0: 0x3463ffee  ori         $v1, $v1, 0xFFEE
    ctx->pc = 0x25f1a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65518);
label_25f1a4:
    // 0x25f1a4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x25f1a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_25f1a8:
    // 0x25f1a8: 0x0  nop
    ctx->pc = 0x25f1a8u;
    // NOP
label_25f1ac:
    // 0x25f1ac: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x25f1acu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_25f1b0:
    // 0x25f1b0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_25f1b4:
    if (ctx->pc == 0x25F1B4u) {
        ctx->pc = 0x25F1B4u;
            // 0x25f1b4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x25F1B8u;
        goto label_25f1b8;
    }
    ctx->pc = 0x25F1B0u;
    {
        const bool branch_taken_0x25f1b0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x25F1B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25F1B0u;
            // 0x25f1b4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f1b0) {
            ctx->pc = 0x25F1BCu;
            goto label_25f1bc;
        }
    }
    ctx->pc = 0x25F1B8u;
label_25f1b8:
    // 0x25f1b8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x25f1b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25f1bc:
    // 0x25f1bc: 0x41e3c  dsll32      $v1, $a0, 24
    ctx->pc = 0x25f1bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 24));
label_25f1c0:
    // 0x25f1c0: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x25f1c0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
label_25f1c4:
    // 0x25f1c4: 0x10600020  beqz        $v1, . + 4 + (0x20 << 2)
label_25f1c8:
    if (ctx->pc == 0x25F1C8u) {
        ctx->pc = 0x25F1CCu;
        goto label_25f1cc;
    }
    ctx->pc = 0x25F1C4u;
    {
        const bool branch_taken_0x25f1c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25f1c4) {
            ctx->pc = 0x25F248u;
            goto label_25f248;
        }
    }
    ctx->pc = 0x25F1CCu;
label_25f1cc:
    // 0x25f1cc: 0x8ea60004  lw          $a2, 0x4($s5)
    ctx->pc = 0x25f1ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_25f1d0:
    // 0x25f1d0: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x25f1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_25f1d4:
    // 0x25f1d4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_25f1d8:
    if (ctx->pc == 0x25F1D8u) {
        ctx->pc = 0x25F1D8u;
            // 0x25f1d8: 0x8e670004  lw          $a3, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->pc = 0x25F1DCu;
        goto label_25f1dc;
    }
    ctx->pc = 0x25F1D4u;
    {
        const bool branch_taken_0x25f1d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F1D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25F1D4u;
            // 0x25f1d8: 0x8e670004  lw          $a3, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f1d4) {
            ctx->pc = 0x25F200u;
            goto label_25f200;
        }
    }
    ctx->pc = 0x25F1DCu;
label_25f1dc:
    // 0x25f1dc: 0x0  nop
    ctx->pc = 0x25f1dcu;
    // NOP
label_25f1e0:
    // 0x25f1e0: 0x8cc6000c  lw          $a2, 0xC($a2)
    ctx->pc = 0x25f1e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_25f1e4:
    // 0x25f1e4: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x25f1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_25f1e8:
    // 0x25f1e8: 0x0  nop
    ctx->pc = 0x25f1e8u;
    // NOP
label_25f1ec:
    // 0x25f1ec: 0x0  nop
    ctx->pc = 0x25f1ecu;
    // NOP
label_25f1f0:
    // 0x25f1f0: 0x0  nop
    ctx->pc = 0x25f1f0u;
    // NOP
label_25f1f4:
    // 0x25f1f4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_25f1f8:
    if (ctx->pc == 0x25F1F8u) {
        ctx->pc = 0x25F1FCu;
        goto label_25f1fc;
    }
    ctx->pc = 0x25F1F4u;
    {
        const bool branch_taken_0x25f1f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25f1f4) {
            ctx->pc = 0x25F1E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_25f1e0;
        }
    }
    ctx->pc = 0x25F1FCu;
label_25f1fc:
    // 0x25f1fc: 0x0  nop
    ctx->pc = 0x25f1fcu;
    // NOP
label_25f200:
    // 0x25f200: 0x8ea50000  lw          $a1, 0x0($s5)
    ctx->pc = 0x25f200u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_25f204:
    // 0x25f204: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x25f204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_25f208:
    // 0x25f208: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_25f20c:
    if (ctx->pc == 0x25F20Cu) {
        ctx->pc = 0x25F210u;
        goto label_25f210;
    }
    ctx->pc = 0x25F208u;
    {
        const bool branch_taken_0x25f208 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25f208) {
            ctx->pc = 0x25F230u;
            goto label_25f230;
        }
    }
    ctx->pc = 0x25F210u;
label_25f210:
    // 0x25f210: 0x8ca5000c  lw          $a1, 0xC($a1)
    ctx->pc = 0x25f210u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_25f214:
    // 0x25f214: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x25f214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_25f218:
    // 0x25f218: 0x0  nop
    ctx->pc = 0x25f218u;
    // NOP
label_25f21c:
    // 0x25f21c: 0x0  nop
    ctx->pc = 0x25f21cu;
    // NOP
label_25f220:
    // 0x25f220: 0x0  nop
    ctx->pc = 0x25f220u;
    // NOP
label_25f224:
    // 0x25f224: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_25f228:
    if (ctx->pc == 0x25F228u) {
        ctx->pc = 0x25F22Cu;
        goto label_25f22c;
    }
    ctx->pc = 0x25F224u;
    {
        const bool branch_taken_0x25f224 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25f224) {
            ctx->pc = 0x25F210u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_25f210;
        }
    }
    ctx->pc = 0x25F22Cu;
label_25f22c:
    // 0x25f22c: 0x0  nop
    ctx->pc = 0x25f22cu;
    // NOP
label_25f230:
    // 0x25f230: 0x8ea4000c  lw          $a0, 0xC($s5)
    ctx->pc = 0x25f230u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
label_25f234:
    // 0x25f234: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x25f234u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_25f238:
    // 0x25f238: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x25f238u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_25f23c:
    // 0x25f23c: 0x320f809  jalr        $t9
label_25f240:
    if (ctx->pc == 0x25F240u) {
        ctx->pc = 0x25F240u;
            // 0x25f240: 0x26683044  addiu       $t0, $s3, 0x3044 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 12356));
        ctx->pc = 0x25F244u;
        goto label_25f244;
    }
    ctx->pc = 0x25F23Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x25F244u);
        ctx->pc = 0x25F240u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25F23Cu;
            // 0x25f240: 0x26683044  addiu       $t0, $s3, 0x3044 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 12356));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x25F244u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x25F244u; }
            if (ctx->pc != 0x25F244u) { return; }
        }
        }
    }
    ctx->pc = 0x25F244u;
label_25f244:
    // 0x25f244: 0x0  nop
    ctx->pc = 0x25f244u;
    // NOP
label_25f248:
    // 0x25f248: 0x27a30314  addiu       $v1, $sp, 0x314
    ctx->pc = 0x25f248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 788));
label_25f24c:
    // 0x25f24c: 0xc7a00708  lwc1        $f0, 0x708($sp)
    ctx->pc = 0x25f24cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1800)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25f250:
    // 0x25f250: 0x27a506fc  addiu       $a1, $sp, 0x6FC
    ctx->pc = 0x25f250u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1788));
label_25f254:
    // 0x25f254: 0x27a406fe  addiu       $a0, $sp, 0x6FE
    ctx->pc = 0x25f254u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1790));
label_25f258:
    // 0x25f258: 0x27a706e8  addiu       $a3, $sp, 0x6E8
    ctx->pc = 0x25f258u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1768));
label_25f25c:
    // 0x25f25c: 0xe6603034  swc1        $f0, 0x3034($s3)
    ctx->pc = 0x25f25cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12340), bits); }
label_25f260:
    // 0x25f260: 0xc7a00310  lwc1        $f0, 0x310($sp)
    ctx->pc = 0x25f260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25f264:
    // 0x25f264: 0xe6603010  swc1        $f0, 0x3010($s3)
    ctx->pc = 0x25f264u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12304), bits); }
label_25f268:
    // 0x25f268: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x25f268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25f26c:
    // 0x25f26c: 0xe6603014  swc1        $f0, 0x3014($s3)
    ctx->pc = 0x25f26cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12308), bits); }
label_25f270:
    // 0x25f270: 0x27a30318  addiu       $v1, $sp, 0x318
    ctx->pc = 0x25f270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 792));
label_25f274:
    // 0x25f274: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x25f274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25f278:
    // 0x25f278: 0xe6603018  swc1        $f0, 0x3018($s3)
    ctx->pc = 0x25f278u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12312), bits); }
label_25f27c:
    // 0x25f27c: 0x27a30324  addiu       $v1, $sp, 0x324
    ctx->pc = 0x25f27cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 804));
label_25f280:
    // 0x25f280: 0xc7a0031c  lwc1        $f0, 0x31C($sp)
    ctx->pc = 0x25f280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 796)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25f284:
    // 0x25f284: 0xe660301c  swc1        $f0, 0x301C($s3)
    ctx->pc = 0x25f284u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12316), bits); }
label_25f288:
    // 0x25f288: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x25f288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25f28c:
    // 0x25f28c: 0xe6603020  swc1        $f0, 0x3020($s3)
    ctx->pc = 0x25f28cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12320), bits); }
label_25f290:
    // 0x25f290: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x25f290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25f294:
    // 0x25f294: 0xe6603024  swc1        $f0, 0x3024($s3)
    ctx->pc = 0x25f294u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12324), bits); }
label_25f298:
    // 0x25f298: 0x27a30328  addiu       $v1, $sp, 0x328
    ctx->pc = 0x25f298u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 808));
label_25f29c:
    // 0x25f29c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x25f29cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25f2a0:
    // 0x25f2a0: 0xe6603028  swc1        $f0, 0x3028($s3)
    ctx->pc = 0x25f2a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12328), bits); }
label_25f2a4:
    // 0x25f2a4: 0xc7a0032c  lwc1        $f0, 0x32C($sp)
    ctx->pc = 0x25f2a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25f2a8:
    // 0x25f2a8: 0xe660302c  swc1        $f0, 0x302C($s3)
    ctx->pc = 0x25f2a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12332), bits); }
label_25f2ac:
    // 0x25f2ac: 0xe6743030  swc1        $f20, 0x3030($s3)
    ctx->pc = 0x25f2acu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12336), bits); }
label_25f2b0:
    // 0x25f2b0: 0x8fa306f8  lw          $v1, 0x6F8($sp)
    ctx->pc = 0x25f2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1784)));
label_25f2b4:
    // 0x25f2b4: 0xae633044  sw          $v1, 0x3044($s3)
    ctx->pc = 0x25f2b4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12356), GPR_U32(ctx, 3));
label_25f2b8:
    // 0x25f2b8: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x25f2b8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_25f2bc:
    // 0x25f2bc: 0xa2633048  sb          $v1, 0x3048($s3)
    ctx->pc = 0x25f2bcu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 12360), (uint8_t)GPR_U32(ctx, 3));
label_25f2c0:
    // 0x25f2c0: 0x93a306fd  lbu         $v1, 0x6FD($sp)
    ctx->pc = 0x25f2c0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1789)));
label_25f2c4:
    // 0x25f2c4: 0xa2633049  sb          $v1, 0x3049($s3)
    ctx->pc = 0x25f2c4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 12361), (uint8_t)GPR_U32(ctx, 3));
label_25f2c8:
    // 0x25f2c8: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x25f2c8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_25f2cc:
    // 0x25f2cc: 0xa263304a  sb          $v1, 0x304A($s3)
    ctx->pc = 0x25f2ccu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 12362), (uint8_t)GPR_U32(ctx, 3));
label_25f2d0:
    // 0x25f2d0: 0x93a306ff  lbu         $v1, 0x6FF($sp)
    ctx->pc = 0x25f2d0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1791)));
label_25f2d4:
    // 0x25f2d4: 0xa263304b  sb          $v1, 0x304B($s3)
    ctx->pc = 0x25f2d4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 12363), (uint8_t)GPR_U32(ctx, 3));
label_25f2d8:
    // 0x25f2d8: 0x84e60000  lh          $a2, 0x0($a3)
    ctx->pc = 0x25f2d8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
label_25f2dc:
    // 0x25f2dc: 0x84e50002  lh          $a1, 0x2($a3)
    ctx->pc = 0x25f2dcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
label_25f2e0:
    // 0x25f2e0: 0x84e40004  lh          $a0, 0x4($a3)
    ctx->pc = 0x25f2e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 4)));
label_25f2e4:
    // 0x25f2e4: 0x84e30006  lh          $v1, 0x6($a3)
    ctx->pc = 0x25f2e4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 6)));
label_25f2e8:
    // 0x25f2e8: 0xa6663038  sh          $a2, 0x3038($s3)
    ctx->pc = 0x25f2e8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 12344), (uint16_t)GPR_U32(ctx, 6));
label_25f2ec:
    // 0x25f2ec: 0xa665303a  sh          $a1, 0x303A($s3)
    ctx->pc = 0x25f2ecu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 12346), (uint16_t)GPR_U32(ctx, 5));
label_25f2f0:
    // 0x25f2f0: 0xa664303c  sh          $a0, 0x303C($s3)
    ctx->pc = 0x25f2f0u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 12348), (uint16_t)GPR_U32(ctx, 4));
label_25f2f4:
    // 0x25f2f4: 0xa663303e  sh          $v1, 0x303E($s3)
    ctx->pc = 0x25f2f4u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 12350), (uint16_t)GPR_U32(ctx, 3));
label_25f2f8:
    // 0x25f2f8: 0x93a306f0  lbu         $v1, 0x6F0($sp)
    ctx->pc = 0x25f2f8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1776)));
label_25f2fc:
    // 0x25f2fc: 0xa2633040  sb          $v1, 0x3040($s3)
    ctx->pc = 0x25f2fcu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 12352), (uint8_t)GPR_U32(ctx, 3));
label_25f300:
    // 0x25f300: 0x93a306f1  lbu         $v1, 0x6F1($sp)
    ctx->pc = 0x25f300u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1777)));
label_25f304:
    // 0x25f304: 0xa2633041  sb          $v1, 0x3041($s3)
    ctx->pc = 0x25f304u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 12353), (uint8_t)GPR_U32(ctx, 3));
label_25f308:
    // 0x25f308: 0x93a306f2  lbu         $v1, 0x6F2($sp)
    ctx->pc = 0x25f308u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1778)));
label_25f30c:
    // 0x25f30c: 0xa2633042  sb          $v1, 0x3042($s3)
    ctx->pc = 0x25f30cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 12354), (uint8_t)GPR_U32(ctx, 3));
label_25f310:
    // 0x25f310: 0x93a306f3  lbu         $v1, 0x6F3($sp)
    ctx->pc = 0x25f310u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1779)));
label_25f314:
    // 0x25f314: 0x100001b8  b           . + 4 + (0x1B8 << 2)
label_25f318:
    if (ctx->pc == 0x25F318u) {
        ctx->pc = 0x25F318u;
            // 0x25f318: 0xa2633043  sb          $v1, 0x3043($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 12355), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x25F31Cu;
        goto label_25f31c;
    }
    ctx->pc = 0x25F314u;
    {
        const bool branch_taken_0x25f314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F318u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25F314u;
            // 0x25f318: 0xa2633043  sb          $v1, 0x3043($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 12355), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f314) {
            ctx->pc = 0x25F9F8u;
            goto label_25f9f8;
        }
    }
    ctx->pc = 0x25F31Cu;
label_25f31c:
    // 0x25f31c: 0x0  nop
    ctx->pc = 0x25f31cu;
    // NOP
label_25f320:
    // 0x25f320: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x25f320u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_25f324:
    // 0x25f324: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x25f324u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_25f328:
    // 0x25f328: 0x44804800  mtc1        $zero, $f9
    ctx->pc = 0x25f328u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
label_25f32c:
    // 0x25f32c: 0x461c0001  sub.s       $f0, $f0, $f28
    ctx->pc = 0x25f32cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[28]);
label_25f330:
    // 0x25f330: 0x46090036  c.le.s      $f0, $f9
    ctx->pc = 0x25f330u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[9])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_25f334:
    // 0x25f334: 0x450101b0  bc1t        . + 4 + (0x1B0 << 2)
label_25f338:
    if (ctx->pc == 0x25F338u) {
        ctx->pc = 0x25F338u;
            // 0x25f338: 0x27a306a8  addiu       $v1, $sp, 0x6A8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1704));
        ctx->pc = 0x25F33Cu;
        goto label_25f33c;
    }
    ctx->pc = 0x25F334u;
    {
        const bool branch_taken_0x25f334 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x25F338u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25F334u;
            // 0x25f338: 0x27a306a8  addiu       $v1, $sp, 0x6A8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1704));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f334) {
            ctx->pc = 0x25F9F8u;
            goto label_25f9f8;
        }
    }
    ctx->pc = 0x25F33Cu;
label_25f33c:
    // 0x25f33c: 0xc4660000  lwc1        $f6, 0x0($v1)
    ctx->pc = 0x25f33cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_25f340:
    // 0x25f340: 0xc6910008  lwc1        $f17, 0x8($s4)
    ctx->pc = 0x25f340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
label_25f344:
    // 0x25f344: 0xc68e0004  lwc1        $f14, 0x4($s4)
    ctx->pc = 0x25f344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_25f348:
    // 0x25f348: 0xc6a20064  lwc1        $f2, 0x64($s5)
    ctx->pc = 0x25f348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_25f34c:
    // 0x25f34c: 0xc6900000  lwc1        $f16, 0x0($s4)
    ctx->pc = 0x25f34cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
label_25f350:
    // 0x25f350: 0xc6a30060  lwc1        $f3, 0x60($s5)
    ctx->pc = 0x25f350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_25f354:
    // 0x25f354: 0x27a306a4  addiu       $v1, $sp, 0x6A4
    ctx->pc = 0x25f354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1700));
label_25f358:
    // 0x25f358: 0xc46f0000  lwc1        $f15, 0x0($v1)
    ctx->pc = 0x25f358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_25f35c:
    // 0x25f35c: 0xc64500a0  lwc1        $f5, 0xA0($s2)
    ctx->pc = 0x25f35cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_25f360:
    // 0x25f360: 0xc62400a0  lwc1        $f4, 0xA0($s1)
    ctx->pc = 0x25f360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_25f364:
    // 0x25f364: 0x460e1082  mul.s       $f2, $f2, $f14
    ctx->pc = 0x25f364u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[14]);
label_25f368:
    // 0x25f368: 0x27a306a0  addiu       $v1, $sp, 0x6A0
    ctx->pc = 0x25f368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1696));
label_25f36c:
    // 0x25f36c: 0xc4670000  lwc1        $f7, 0x0($v1)
    ctx->pc = 0x25f36cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_25f370:
    // 0x25f370: 0x4611781a  mula.s      $f15, $f17
    ctx->pc = 0x25f370u;
    ctx->f[31] = FPU_MUL_S(ctx->f[15], ctx->f[17]);
label_25f374:
    // 0x25f374: 0x460e305d  msub.s      $f1, $f6, $f14
    ctx->pc = 0x25f374u;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[14]));
label_25f378:
    // 0x25f378: 0x4610301a  mula.s      $f6, $f16
    ctx->pc = 0x25f378u;
    ctx->f[31] = FPU_MUL_S(ctx->f[6], ctx->f[16]);
label_25f37c:
    // 0x25f37c: 0x46010a02  mul.s       $f8, $f1, $f1
    ctx->pc = 0x25f37cu;
    ctx->f[8] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_25f380:
    // 0x25f380: 0x27a306b8  addiu       $v1, $sp, 0x6B8
    ctx->pc = 0x25f380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1720));
label_25f384:
    // 0x25f384: 0xc46d0000  lwc1        $f13, 0x0($v1)
    ctx->pc = 0x25f384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_25f388:
    // 0x25f388: 0x4611399d  msub.s      $f6, $f7, $f17
    ctx->pc = 0x25f388u;
    ctx->f[6] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[17]));
label_25f38c:
    // 0x25f38c: 0x460e381a  mula.s      $f7, $f14
    ctx->pc = 0x25f38cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[7], ctx->f[14]);
label_25f390:
    // 0x25f390: 0x46107bdd  msub.s      $f15, $f15, $f16
    ctx->pc = 0x25f390u;
    ctx->f[15] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[15], ctx->f[16]));
label_25f394:
    // 0x25f394: 0x46063182  mul.s       $f6, $f6, $f6
    ctx->pc = 0x25f394u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[6]);
label_25f398:
    // 0x25f398: 0x27a306b4  addiu       $v1, $sp, 0x6B4
    ctx->pc = 0x25f398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1716));
label_25f39c:
    // 0x25f39c: 0xc46c0000  lwc1        $f12, 0x0($v1)
    ctx->pc = 0x25f39cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_25f3a0:
    // 0x25f3a0: 0xc6a10068  lwc1        $f1, 0x68($s5)
    ctx->pc = 0x25f3a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25f3a4:
    // 0x25f3a4: 0x461018c2  mul.s       $f3, $f3, $f16
    ctx->pc = 0x25f3a4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[16]);
label_25f3a8:
    // 0x25f3a8: 0x27a306b0  addiu       $v1, $sp, 0x6B0
    ctx->pc = 0x25f3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1712));
label_25f3ac:
    // 0x25f3ac: 0x4611601a  mula.s      $f12, $f17
    ctx->pc = 0x25f3acu;
    ctx->f[31] = FPU_MUL_S(ctx->f[12], ctx->f[17]);
label_25f3b0:
    // 0x25f3b0: 0x460e69dd  msub.s      $f7, $f13, $f14
    ctx->pc = 0x25f3b0u;
    ctx->f[7] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[13], ctx->f[14]));
label_25f3b4:
    // 0x25f3b4: 0xc46b0000  lwc1        $f11, 0x0($v1)
    ctx->pc = 0x25f3b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
label_25f3b8:
    // 0x25f3b8: 0x4610681a  mula.s      $f13, $f16
    ctx->pc = 0x25f3b8u;
    ctx->f[31] = FPU_MUL_S(ctx->f[13], ctx->f[16]);
label_25f3bc:
    // 0x25f3bc: 0x460739c2  mul.s       $f7, $f7, $f7
    ctx->pc = 0x25f3bcu;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[7]);
label_25f3c0:
    // 0x25f3c0: 0x46115b5d  msub.s      $f13, $f11, $f17
    ctx->pc = 0x25f3c0u;
    ctx->f[13] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[11], ctx->f[17]));
label_25f3c4:
    // 0x25f3c4: 0x460e581a  mula.s      $f11, $f14
    ctx->pc = 0x25f3c4u;
    ctx->f[31] = FPU_MUL_S(ctx->f[11], ctx->f[14]);
label_25f3c8:
    // 0x25f3c8: 0x461062dd  msub.s      $f11, $f12, $f16
    ctx->pc = 0x25f3c8u;
    ctx->f[11] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[12], ctx->f[16]));
label_25f3cc:
    // 0x25f3cc: 0x46064018  adda.s      $f8, $f6
    ctx->pc = 0x25f3ccu;
    ctx->f[31] = FPU_ADD_S(ctx->f[8], ctx->f[6]);
label_25f3d0:
    // 0x25f3d0: 0x460d6982  mul.s       $f6, $f13, $f13
    ctx->pc = 0x25f3d0u;
    ctx->f[6] = FPU_MUL_S(ctx->f[13], ctx->f[13]);
label_25f3d4:
    // 0x25f3d4: 0x460f7a1c  madd.s      $f8, $f15, $f15
    ctx->pc = 0x25f3d4u;
    ctx->f[8] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[15], ctx->f[15]));
label_25f3d8:
    // 0x25f3d8: 0x46063818  adda.s      $f7, $f6
    ctx->pc = 0x25f3d8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[7], ctx->f[6]);
label_25f3dc:
    // 0x25f3dc: 0x460801c4  c1          0x801C4
    ctx->pc = 0x25f3dcu;
    ctx->f[7] = FPU_SQRT_S(ctx->f[0]);
label_25f3e0:
    // 0x25f3e0: 0x460b599c  madd.s      $f6, $f11, $f11
    ctx->pc = 0x25f3e0u;
    ctx->f[6] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[11], ctx->f[11]));
label_25f3e4:
    // 0x25f3e4: 0x4607281a  mula.s      $f5, $f7
    ctx->pc = 0x25f3e4u;
    ctx->f[31] = FPU_MUL_S(ctx->f[5], ctx->f[7]);
label_25f3e8:
    // 0x25f3e8: 0x46060144  c1          0x60144
    ctx->pc = 0x25f3e8u;
    ctx->f[5] = FPU_SQRT_S(ctx->f[0]);
label_25f3ec:
    // 0x25f3ec: 0x4605211c  madd.s      $f4, $f4, $f5
    ctx->pc = 0x25f3ecu;
    ctx->f[4] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[5]));
label_25f3f0:
    // 0x25f3f0: 0x46021818  adda.s      $f3, $f2
    ctx->pc = 0x25f3f0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
label_25f3f4:
    // 0x25f3f4: 0x4611089c  madd.s      $f2, $f1, $f17
    ctx->pc = 0x25f3f4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[17]));
label_25f3f8:
    // 0x25f3f8: 0x46041540  add.s       $f21, $f2, $f4
    ctx->pc = 0x25f3f8u;
    ctx->f[21] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
label_25f3fc:
    // 0x25f3fc: 0xc68a000c  lwc1        $f10, 0xC($s4)
    ctx->pc = 0x25f3fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_25f400:
    // 0x25f400: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x25f400u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_25f404:
    // 0x25f404: 0x4609a836  c.le.s      $f21, $f9
    ctx->pc = 0x25f404u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[9])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_25f408:
    // 0x25f408: 0x4501017b  bc1t        . + 4 + (0x17B << 2)
label_25f40c:
    if (ctx->pc == 0x25F40Cu) {
        ctx->pc = 0x25F40Cu;
            // 0x25f40c: 0x46005041  sub.s       $f1, $f10, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[10], ctx->f[0]);
        ctx->pc = 0x25F410u;
        goto label_25f410;
    }
    ctx->pc = 0x25F408u;
    {
        const bool branch_taken_0x25f408 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x25F40Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25F408u;
            // 0x25f40c: 0x46005041  sub.s       $f1, $f10, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[10], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f408) {
            ctx->pc = 0x25F9F8u;
            goto label_25f9f8;
        }
    }
    ctx->pc = 0x25F410u;
label_25f410:
    // 0x25f410: 0x27a306d4  addiu       $v1, $sp, 0x6D4
    ctx->pc = 0x25f410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1748));
label_25f414:
    // 0x25f414: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x25f414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25f418:
    // 0x25f418: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x25f418u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_25f41c:
    // 0x25f41c: 0x45000176  bc1f        . + 4 + (0x176 << 2)
label_25f420:
    if (ctx->pc == 0x25F420u) {
        ctx->pc = 0x25F424u;
        goto label_25f424;
    }
    ctx->pc = 0x25F41Cu;
    {
        const bool branch_taken_0x25f41c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25f41c) {
            ctx->pc = 0x25F9F8u;
            goto label_25f9f8;
        }
    }
    ctx->pc = 0x25F424u;
label_25f424:
    // 0x25f424: 0x46005041  sub.s       $f1, $f10, $f0
    ctx->pc = 0x25f424u;
    ctx->f[1] = FPU_SUB_S(ctx->f[10], ctx->f[0]);
label_25f428:
    // 0x25f428: 0x3c033e4c  lui         $v1, 0x3E4C
    ctx->pc = 0x25f428u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15948 << 16));
label_25f42c:
    // 0x25f42c: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x25f42cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_25f430:
    // 0x25f430: 0x46150d03  div.s       $f20, $f1, $f21
    ctx->pc = 0x25f430u;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[20] = ctx->f[1] / ctx->f[21];
label_25f434:
    // 0x25f434: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x25f434u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_25f438:
    // 0x25f438: 0x0  nop
    ctx->pc = 0x25f438u;
    // NOP
label_25f43c:
    // 0x25f43c: 0x0  nop
    ctx->pc = 0x25f43cu;
    // NOP
label_25f440:
    // 0x25f440: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x25f440u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_25f444:
    // 0x25f444: 0x4500007e  bc1f        . + 4 + (0x7E << 2)
label_25f448:
    if (ctx->pc == 0x25F448u) {
        ctx->pc = 0x25F44Cu;
        goto label_25f44c;
    }
    ctx->pc = 0x25F444u;
    {
        const bool branch_taken_0x25f444 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25f444) {
            ctx->pc = 0x25F640u;
            goto label_25f640;
        }
    }
    ctx->pc = 0x25F44Cu;
label_25f44c:
    // 0x25f44c: 0x83a300f0  lb          $v1, 0xF0($sp)
    ctx->pc = 0x25f44cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 240)));
label_25f450:
    // 0x25f450: 0x60182d  daddu       $v1, $v1, $zero
    ctx->pc = 0x25f450u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_25f454:
    // 0x25f454: 0x1460007a  bnez        $v1, . + 4 + (0x7A << 2)
label_25f458:
    if (ctx->pc == 0x25F458u) {
        ctx->pc = 0x25F458u;
            // 0x25f458: 0x101e3c  dsll32      $v1, $s0, 24 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 24));
        ctx->pc = 0x25F45Cu;
        goto label_25f45c;
    }
    ctx->pc = 0x25F454u;
    {
        const bool branch_taken_0x25f454 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x25F458u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25F454u;
            // 0x25f458: 0x101e3c  dsll32      $v1, $s0, 24 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f454) {
            ctx->pc = 0x25F640u;
            goto label_25f640;
        }
    }
    ctx->pc = 0x25F45Cu;
label_25f45c:
    // 0x25f45c: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x25f45cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
label_25f460:
    // 0x25f460: 0x10600077  beqz        $v1, . + 4 + (0x77 << 2)
label_25f464:
    if (ctx->pc == 0x25F464u) {
        ctx->pc = 0x25F468u;
        goto label_25f468;
    }
    ctx->pc = 0x25F460u;
    {
        const bool branch_taken_0x25f460 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25f460) {
            ctx->pc = 0x25F640u;
            goto label_25f640;
        }
    }
    ctx->pc = 0x25F468u;
label_25f468:
    // 0x25f468: 0x46041034  c.lt.s      $f2, $f4
    ctx->pc = 0x25f468u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_25f46c:
    // 0x25f46c: 0x45000074  bc1f        . + 4 + (0x74 << 2)
label_25f470:
    if (ctx->pc == 0x25F470u) {
        ctx->pc = 0x25F474u;
        goto label_25f474;
    }
    ctx->pc = 0x25F46Cu;
    {
        const bool branch_taken_0x25f46c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25f46c) {
            ctx->pc = 0x25F640u;
            goto label_25f640;
        }
    }
    ctx->pc = 0x25F474u;
label_25f474:
    // 0x25f474: 0x27a20648  addiu       $v0, $sp, 0x648
    ctx->pc = 0x25f474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1608));
label_25f478:
    // 0x25f478: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x25f478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_25f47c:
    // 0x25f47c: 0x14400056  bnez        $v0, . + 4 + (0x56 << 2)
label_25f480:
    if (ctx->pc == 0x25F480u) {
        ctx->pc = 0x25F484u;
        goto label_25f484;
    }
    ctx->pc = 0x25F47Cu;
    {
        const bool branch_taken_0x25f47c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25f47c) {
            ctx->pc = 0x25F5D8u;
            goto label_25f5d8;
        }
    }
    ctx->pc = 0x25F484u;
label_25f484:
    // 0x25f484: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x25f484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_25f488:
    // 0x25f488: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x25f488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_25f48c:
    // 0x25f48c: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x25f48cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_25f490:
    // 0x25f490: 0x8c760008  lw          $s6, 0x8($v1)
    ctx->pc = 0x25f490u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_25f494:
    // 0x25f494: 0x8c570008  lw          $s7, 0x8($v0)
    ctx->pc = 0x25f494u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_25f498:
    // 0x25f498: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x25f498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_25f49c:
    // 0x25f49c: 0xafb60640  sw          $s6, 0x640($sp)
    ctx->pc = 0x25f49cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1600), GPR_U32(ctx, 22));
label_25f4a0:
    // 0x25f4a0: 0x27a20644  addiu       $v0, $sp, 0x644
    ctx->pc = 0x25f4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1604));
label_25f4a4:
    // 0x25f4a4: 0xac570000  sw          $s7, 0x0($v0)
    ctx->pc = 0x25f4a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 23));
label_25f4a8:
    // 0x25f4a8: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x25f4a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25f4ac:
    // 0x25f4ac: 0x27a20654  addiu       $v0, $sp, 0x654
    ctx->pc = 0x25f4acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1620));
label_25f4b0:
    // 0x25f4b0: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x25f4b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25f4b4:
    // 0x25f4b4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x25f4b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_25f4b8:
    // 0x25f4b8: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x25f4b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_25f4bc:
    // 0x25f4bc: 0xc6a00060  lwc1        $f0, 0x60($s5)
    ctx->pc = 0x25f4bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25f4c0:
    // 0x25f4c0: 0x27a20690  addiu       $v0, $sp, 0x690
    ctx->pc = 0x25f4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1680));
label_25f4c4:
    // 0x25f4c4: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x25f4c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_25f4c8:
    // 0x25f4c8: 0xc6a00064  lwc1        $f0, 0x64($s5)
    ctx->pc = 0x25f4c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25f4cc:
    // 0x25f4cc: 0x27a20694  addiu       $v0, $sp, 0x694
    ctx->pc = 0x25f4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1684));
label_25f4d0:
    // 0x25f4d0: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x25f4d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_25f4d4:
    // 0x25f4d4: 0xc6a00068  lwc1        $f0, 0x68($s5)
    ctx->pc = 0x25f4d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25f4d8:
    // 0x25f4d8: 0x27a20698  addiu       $v0, $sp, 0x698
    ctx->pc = 0x25f4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1688));
label_25f4dc:
    // 0x25f4dc: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x25f4dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_25f4e0:
    // 0x25f4e0: 0xc6a0006c  lwc1        $f0, 0x6C($s5)
    ctx->pc = 0x25f4e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25f4e4:
    // 0x25f4e4: 0x27a2069c  addiu       $v0, $sp, 0x69C
    ctx->pc = 0x25f4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1692));
label_25f4e8:
    // 0x25f4e8: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x25f4e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_25f4ec:
    // 0x25f4ec: 0x8ea20008  lw          $v0, 0x8($s5)
    ctx->pc = 0x25f4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_25f4f0:
    // 0x25f4f0: 0x24430020  addiu       $v1, $v0, 0x20
    ctx->pc = 0x25f4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_25f4f4:
    // 0x25f4f4: 0x27a20680  addiu       $v0, $sp, 0x680
    ctx->pc = 0x25f4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1664));
label_25f4f8:
    // 0x25f4f8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x25f4f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_25f4fc:
    // 0x25f4fc: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x25f4fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_25f500:
    // 0x25f500: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x25f500u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_25f504:
    // 0x25f504: 0x320f809  jalr        $t9
label_25f508:
    if (ctx->pc == 0x25F508u) {
        ctx->pc = 0x25F508u;
            // 0x25f508: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25F50Cu;
        goto label_25f50c;
    }
    ctx->pc = 0x25F504u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x25F50Cu);
        ctx->pc = 0x25F508u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25F504u;
            // 0x25f508: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x25F50Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x25F50Cu; }
            if (ctx->pc != 0x25F50Cu) { return; }
        }
        }
    }
    ctx->pc = 0x25F50Cu;
label_25f50c:
    // 0x25f50c: 0x27a30650  addiu       $v1, $sp, 0x650
    ctx->pc = 0x25f50cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1616));
label_25f510:
    // 0x25f510: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x25f510u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_25f514:
    // 0x25f514: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x25f514u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_25f518:
    // 0x25f518: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x25f518u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_25f51c:
    // 0x25f51c: 0x24650010  addiu       $a1, $v1, 0x10
    ctx->pc = 0x25f51cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_25f520:
    // 0x25f520: 0x27a3064c  addiu       $v1, $sp, 0x64C
    ctx->pc = 0x25f520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1612));
label_25f524:
    // 0x25f524: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x25f524u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_25f528:
    // 0x25f528: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x25f528u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_25f52c:
    // 0x25f52c: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x25f52cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
label_25f530:
    // 0x25f530: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x25f530u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
label_25f534:
    // 0x25f534: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x25f534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_25f538:
    // 0x25f538: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x25f538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_25f53c:
    // 0x25f53c: 0x453021  addu        $a2, $v0, $a1
    ctx->pc = 0x25f53cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_25f540:
    // 0x25f540: 0x66082b  sltu        $at, $v1, $a2
    ctx->pc = 0x25f540u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_25f544:
    // 0x25f544: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
label_25f548:
    if (ctx->pc == 0x25F548u) {
        ctx->pc = 0x25F54Cu;
        goto label_25f54c;
    }
    ctx->pc = 0x25F544u;
    {
        const bool branch_taken_0x25f544 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x25f544) {
            ctx->pc = 0x25F558u;
            goto label_25f558;
        }
    }
    ctx->pc = 0x25F54Cu;
label_25f54c:
    // 0x25f54c: 0x10000006  b           . + 4 + (0x6 << 2)
label_25f550:
    if (ctx->pc == 0x25F550u) {
        ctx->pc = 0x25F550u;
            // 0x25f550: 0xac86000c  sw          $a2, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
        ctx->pc = 0x25F554u;
        goto label_25f554;
    }
    ctx->pc = 0x25F54Cu;
    {
        const bool branch_taken_0x25f54c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F550u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25F54Cu;
            // 0x25f550: 0xac86000c  sw          $a2, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f54c) {
            ctx->pc = 0x25F568u;
            goto label_25f568;
        }
    }
    ctx->pc = 0x25F554u;
label_25f554:
    // 0x25f554: 0x0  nop
    ctx->pc = 0x25f554u;
    // NOP
label_25f558:
    // 0x25f558: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x25f558u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_25f55c:
    // 0x25f55c: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x25f55cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_25f560:
    // 0x25f560: 0x320f809  jalr        $t9
label_25f564:
    if (ctx->pc == 0x25F564u) {
        ctx->pc = 0x25F568u;
        goto label_25f568;
    }
    ctx->pc = 0x25F560u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x25F568u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x25F568u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x25F568u; }
            if (ctx->pc != 0x25F568u) { return; }
        }
        }
    }
    ctx->pc = 0x25F568u;
label_25f568:
    // 0x25f568: 0x27a30648  addiu       $v1, $sp, 0x648
    ctx->pc = 0x25f568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1608));
label_25f56c:
    // 0x25f56c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x25f56cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_25f570:
    // 0x25f570: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x25f570u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_25f574:
    // 0x25f574: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x25f574u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_25f578:
    // 0x25f578: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x25f578u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_25f57c:
    // 0x25f57c: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x25f57cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_25f580:
    // 0x25f580: 0x320f809  jalr        $t9
label_25f584:
    if (ctx->pc == 0x25F584u) {
        ctx->pc = 0x25F584u;
            // 0x25f584: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25F588u;
        goto label_25f588;
    }
    ctx->pc = 0x25F580u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x25F588u);
        ctx->pc = 0x25F584u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25F580u;
            // 0x25f584: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x25F588u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x25F588u; }
            if (ctx->pc != 0x25F588u) { return; }
        }
        }
    }
    ctx->pc = 0x25F588u;
label_25f588:
    // 0x25f588: 0x3c023400  lui         $v0, 0x3400
    ctx->pc = 0x25f588u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)13312 << 16));
label_25f58c:
    // 0x25f58c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x25f58cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_25f590:
    // 0x25f590: 0xc6c300a0  lwc1        $f3, 0xA0($s6)
    ctx->pc = 0x25f590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_25f594:
    // 0x25f594: 0x27a206bc  addiu       $v0, $sp, 0x6BC
    ctx->pc = 0x25f594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1724));
label_25f598:
    // 0x25f598: 0xc4450000  lwc1        $f5, 0x0($v0)
    ctx->pc = 0x25f598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_25f59c:
    // 0x25f59c: 0xc6e200a0  lwc1        $f2, 0xA0($s7)
    ctx->pc = 0x25f59cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_25f5a0:
    // 0x25f5a0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x25f5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_25f5a4:
    // 0x25f5a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25f5a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_25f5a8:
    // 0x25f5a8: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x25f5a8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
label_25f5ac:
    // 0x25f5ac: 0x27a206ac  addiu       $v0, $sp, 0x6AC
    ctx->pc = 0x25f5acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1708));
label_25f5b0:
    // 0x25f5b0: 0xc4440000  lwc1        $f4, 0x0($v0)
    ctx->pc = 0x25f5b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_25f5b4:
    // 0x25f5b4: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x25f5b4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
label_25f5b8:
    // 0x25f5b8: 0x27a20658  addiu       $v0, $sp, 0x658
    ctx->pc = 0x25f5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1624));
label_25f5bc:
    // 0x25f5bc: 0x4604181a  mula.s      $f3, $f4
    ctx->pc = 0x25f5bcu;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
label_25f5c0:
    // 0x25f5c0: 0x4605109c  madd.s      $f2, $f2, $f5
    ctx->pc = 0x25f5c0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[5]));
label_25f5c4:
    // 0x25f5c4: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x25f5c4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_25f5c8:
    // 0x25f5c8: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x25f5c8u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
label_25f5cc:
    // 0x25f5cc: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x25f5ccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_25f5d0:
    // 0x25f5d0: 0x27a2065c  addiu       $v0, $sp, 0x65C
    ctx->pc = 0x25f5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1628));
label_25f5d4:
    // 0x25f5d4: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x25f5d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_25f5d8:
    // 0x25f5d8: 0x27a206c0  addiu       $v0, $sp, 0x6C0
    ctx->pc = 0x25f5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1728));
label_25f5dc:
    // 0x25f5dc: 0xe45c0000  swc1        $f28, 0x0($v0)
    ctx->pc = 0x25f5dcu;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_25f5e0:
    // 0x25f5e0: 0x27a40640  addiu       $a0, $sp, 0x640
    ctx->pc = 0x25f5e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1600));
label_25f5e4:
    // 0x25f5e4: 0x27a20684  addiu       $v0, $sp, 0x684
    ctx->pc = 0x25f5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1668));
label_25f5e8:
    // 0x25f5e8: 0x27a506d0  addiu       $a1, $sp, 0x6D0
    ctx->pc = 0x25f5e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1744));
label_25f5ec:
    // 0x25f5ec: 0xe4550000  swc1        $f21, 0x0($v0)
    ctx->pc = 0x25f5ecu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_25f5f0:
    // 0x25f5f0: 0x27a604a0  addiu       $a2, $sp, 0x4A0
    ctx->pc = 0x25f5f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1184));
label_25f5f4:
    // 0x25f5f4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x25f5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_25f5f8:
    // 0x25f5f8: 0xc0976a8  jal         func_25DAA0
label_25f5fc:
    if (ctx->pc == 0x25F5FCu) {
        ctx->pc = 0x25F5FCu;
            // 0x25f5fc: 0xafa204a0  sw          $v0, 0x4A0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1184), GPR_U32(ctx, 2));
        ctx->pc = 0x25F600u;
        goto label_25f600;
    }
    ctx->pc = 0x25F5F8u;
    SET_GPR_U32(ctx, 31, 0x25F600u);
    ctx->pc = 0x25F5FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25F5F8u;
            // 0x25f5fc: 0xafa204a0  sw          $v0, 0x4A0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1184), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25DAA0u;
    if (runtime->hasFunction(0x25DAA0u)) {
        auto targetFn = runtime->lookupFunction(0x25DAA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25F600u; }
        if (ctx->pc != 0x25F600u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025DAA0_0x25daa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25F600u; }
        if (ctx->pc != 0x25F600u) { return; }
    }
    ctx->pc = 0x25F600u;
label_25f600:
    // 0x25f600: 0xc7a104a0  lwc1        $f1, 0x4A0($sp)
    ctx->pc = 0x25f600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25f604:
    // 0x25f604: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x25f604u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_25f608:
    // 0x25f608: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x25f608u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_25f60c:
    // 0x25f60c: 0x0  nop
    ctx->pc = 0x25f60cu;
    // NOP
label_25f610:
    // 0x25f610: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x25f610u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_25f614:
    // 0x25f614: 0x461c0841  sub.s       $f1, $f1, $f28
    ctx->pc = 0x25f614u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[28]);
label_25f618:
    // 0x25f618: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x25f618u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_25f61c:
    // 0x25f61c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_25f620:
    if (ctx->pc == 0x25F620u) {
        ctx->pc = 0x25F620u;
            // 0x25f620: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x25F624u;
        goto label_25f624;
    }
    ctx->pc = 0x25F61Cu;
    {
        const bool branch_taken_0x25f61c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x25F620u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25F61Cu;
            // 0x25f620: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f61c) {
            ctx->pc = 0x25F628u;
            goto label_25f628;
        }
    }
    ctx->pc = 0x25F624u;
label_25f624:
    // 0x25f624: 0xa3a300f0  sb          $v1, 0xF0($sp)
    ctx->pc = 0x25f624u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 240), (uint8_t)GPR_U32(ctx, 3));
label_25f628:
    // 0x25f628: 0x4601a036  c.le.s      $f20, $f1
    ctx->pc = 0x25f628u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_25f62c:
    // 0x25f62c: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_25f630:
    if (ctx->pc == 0x25F630u) {
        ctx->pc = 0x25F634u;
        goto label_25f634;
    }
    ctx->pc = 0x25F62Cu;
    {
        const bool branch_taken_0x25f62c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x25f62c) {
            ctx->pc = 0x25F63Cu;
            goto label_25f63c;
        }
    }
    ctx->pc = 0x25F634u;
label_25f634:
    // 0x25f634: 0x10000002  b           . + 4 + (0x2 << 2)
label_25f638:
    if (ctx->pc == 0x25F638u) {
        ctx->pc = 0x25F63Cu;
        goto label_25f63c;
    }
    ctx->pc = 0x25F634u;
    {
        const bool branch_taken_0x25f634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25f634) {
            ctx->pc = 0x25F640u;
            goto label_25f640;
        }
    }
    ctx->pc = 0x25F63Cu;
label_25f63c:
    // 0x25f63c: 0x46000d06  mov.s       $f20, $f1
    ctx->pc = 0x25f63cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[1]);
label_25f640:
    // 0x25f640: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x25f640u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_25f644:
    // 0x25f644: 0x4614e040  add.s       $f1, $f28, $f20
    ctx->pc = 0x25f644u;
    ctx->f[1] = FPU_ADD_S(ctx->f[28], ctx->f[20]);
label_25f648:
    // 0x25f648: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x25f648u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_25f64c:
    // 0x25f64c: 0x0  nop
    ctx->pc = 0x25f64cu;
    // NOP
label_25f650:
    // 0x25f650: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x25f650u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_25f654:
    // 0x25f654: 0x450000e8  bc1f        . + 4 + (0xE8 << 2)
label_25f658:
    if (ctx->pc == 0x25F658u) {
        ctx->pc = 0x25F65Cu;
        goto label_25f65c;
    }
    ctx->pc = 0x25F654u;
    {
        const bool branch_taken_0x25f654 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25f654) {
            ctx->pc = 0x25F9F8u;
            goto label_25f9f8;
        }
    }
    ctx->pc = 0x25F65Cu;
label_25f65c:
    // 0x25f65c: 0x27a206d8  addiu       $v0, $sp, 0x6D8
    ctx->pc = 0x25f65cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1752));
label_25f660:
    // 0x25f660: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x25f660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25f664:
    // 0x25f664: 0x46140836  c.le.s      $f1, $f20
    ctx->pc = 0x25f664u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_25f668:
    // 0x25f668: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_25f66c:
    if (ctx->pc == 0x25F66Cu) {
        ctx->pc = 0x25F66Cu;
            // 0x25f66c: 0x4600e6c6  mov.s       $f27, $f28 (Delay Slot)
        ctx->f[27] = FPU_MOV_S(ctx->f[28]);
        ctx->pc = 0x25F670u;
        goto label_25f670;
    }
    ctx->pc = 0x25F668u;
    {
        const bool branch_taken_0x25f668 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x25F66Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25F668u;
            // 0x25f66c: 0x4600e6c6  mov.s       $f27, $f28 (Delay Slot)
        ctx->f[27] = FPU_MOV_S(ctx->f[28]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f668) {
            ctx->pc = 0x25F678u;
            goto label_25f678;
        }
    }
    ctx->pc = 0x25F670u;
label_25f670:
    // 0x25f670: 0x10000003  b           . + 4 + (0x3 << 2)
label_25f674:
    if (ctx->pc == 0x25F674u) {
        ctx->pc = 0x25F678u;
        goto label_25f678;
    }
    ctx->pc = 0x25F670u;
    {
        const bool branch_taken_0x25f670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25f670) {
            ctx->pc = 0x25F680u;
            goto label_25f680;
        }
    }
    ctx->pc = 0x25F678u;
label_25f678:
    // 0x25f678: 0x4600a046  mov.s       $f1, $f20
    ctx->pc = 0x25f678u;
    ctx->f[1] = FPU_MOV_S(ctx->f[20]);
label_25f67c:
    // 0x25f67c: 0x0  nop
    ctx->pc = 0x25f67cu;
    // NOP
label_25f680:
    // 0x25f680: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x25f680u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_25f684:
    // 0x25f684: 0x4601e700  add.s       $f28, $f28, $f1
    ctx->pc = 0x25f684u;
    ctx->f[28] = FPU_ADD_S(ctx->f[28], ctx->f[1]);
label_25f688:
    // 0x25f688: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25f688u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_25f68c:
    // 0x25f68c: 0x0  nop
    ctx->pc = 0x25f68cu;
    // NOP
label_25f690:
    // 0x25f690: 0x4600e034  c.lt.s      $f28, $f0
    ctx->pc = 0x25f690u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[28], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_25f694:
    // 0x25f694: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_25f698:
    if (ctx->pc == 0x25F698u) {
        ctx->pc = 0x25F69Cu;
        goto label_25f69c;
    }
    ctx->pc = 0x25F694u;
    {
        const bool branch_taken_0x25f694 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25f694) {
            ctx->pc = 0x25F6A4u;
            goto label_25f6a4;
        }
    }
    ctx->pc = 0x25F69Cu;
label_25f69c:
    // 0x25f69c: 0x10000003  b           . + 4 + (0x3 << 2)
label_25f6a0:
    if (ctx->pc == 0x25F6A0u) {
        ctx->pc = 0x25F6A0u;
            // 0x25f6a0: 0x8ea20008  lw          $v0, 0x8($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
        ctx->pc = 0x25F6A4u;
        goto label_25f6a4;
    }
    ctx->pc = 0x25F69Cu;
    {
        const bool branch_taken_0x25f69c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F6A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25F69Cu;
            // 0x25f6a0: 0x8ea20008  lw          $v0, 0x8($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f69c) {
            ctx->pc = 0x25F6ACu;
            goto label_25f6ac;
        }
    }
    ctx->pc = 0x25F6A4u;
label_25f6a4:
    // 0x25f6a4: 0x46000706  mov.s       $f28, $f0
    ctx->pc = 0x25f6a4u;
    ctx->f[28] = FPU_MOV_S(ctx->f[0]);
label_25f6a8:
    // 0x25f6a8: 0x8ea20008  lw          $v0, 0x8($s5)
    ctx->pc = 0x25f6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_25f6ac:
    // 0x25f6ac: 0xc6960000  lwc1        $f22, 0x0($s4)
    ctx->pc = 0x25f6acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_25f6b0:
    // 0x25f6b0: 0xc6950004  lwc1        $f21, 0x4($s4)
    ctx->pc = 0x25f6b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_25f6b4:
    // 0x25f6b4: 0x26440040  addiu       $a0, $s2, 0x40
    ctx->pc = 0x25f6b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
label_25f6b8:
    // 0x25f6b8: 0xc6940008  lwc1        $f20, 0x8($s4)
    ctx->pc = 0x25f6b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_25f6bc:
    // 0x25f6bc: 0x27a50460  addiu       $a1, $sp, 0x460
    ctx->pc = 0x25f6bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1120));
label_25f6c0:
    // 0x25f6c0: 0xc69d000c  lwc1        $f29, 0xC($s4)
    ctx->pc = 0x25f6c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
label_25f6c4:
    // 0x25f6c4: 0xc4400028  lwc1        $f0, 0x28($v0)
    ctx->pc = 0x25f6c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25f6c8:
    // 0x25f6c8: 0x24500020  addiu       $s0, $v0, 0x20
    ctx->pc = 0x25f6c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_25f6cc:
    // 0x25f6cc: 0xc44c0020  lwc1        $f12, 0x20($v0)
    ctx->pc = 0x25f6ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_25f6d0:
    // 0x25f6d0: 0x4600e5c2  mul.s       $f23, $f28, $f0
    ctx->pc = 0x25f6d0u;
    ctx->f[23] = FPU_MUL_S(ctx->f[28], ctx->f[0]);
label_25f6d4:
    // 0x25f6d4: 0xc0a3cb4  jal         func_28F2D0
label_25f6d8:
    if (ctx->pc == 0x25F6D8u) {
        ctx->pc = 0x25F6D8u;
            // 0x25f6d8: 0x4600bb46  mov.s       $f13, $f23 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[23]);
        ctx->pc = 0x25F6DCu;
        goto label_25f6dc;
    }
    ctx->pc = 0x25F6D4u;
    SET_GPR_U32(ctx, 31, 0x25F6DCu);
    ctx->pc = 0x25F6D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25F6D4u;
            // 0x25f6d8: 0x4600bb46  mov.s       $f13, $f23 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[23]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x28F2D0u;
    if (runtime->hasFunction(0x28F2D0u)) {
        auto targetFn = runtime->lookupFunction(0x28F2D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25F6DCu; }
        if (ctx->pc != 0x25F6DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028F2D0_0x28f2d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25F6DCu; }
        if (ctx->pc != 0x25F6DCu) { return; }
    }
    ctx->pc = 0x25F6DCu;
label_25f6dc:
    // 0x25f6dc: 0xc60c0000  lwc1        $f12, 0x0($s0)
    ctx->pc = 0x25f6dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_25f6e0:
    // 0x25f6e0: 0x26240040  addiu       $a0, $s1, 0x40
    ctx->pc = 0x25f6e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
label_25f6e4:
    // 0x25f6e4: 0x4600bb46  mov.s       $f13, $f23
    ctx->pc = 0x25f6e4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
label_25f6e8:
    // 0x25f6e8: 0xc0a3cb4  jal         func_28F2D0
label_25f6ec:
    if (ctx->pc == 0x25F6ECu) {
        ctx->pc = 0x25F6ECu;
            // 0x25f6ec: 0x27a50420  addiu       $a1, $sp, 0x420 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
        ctx->pc = 0x25F6F0u;
        goto label_25f6f0;
    }
    ctx->pc = 0x25F6E8u;
    SET_GPR_U32(ctx, 31, 0x25F6F0u);
    ctx->pc = 0x25F6ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25F6E8u;
            // 0x25f6ec: 0x27a50420  addiu       $a1, $sp, 0x420 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28F2D0u;
    if (runtime->hasFunction(0x28F2D0u)) {
        auto targetFn = runtime->lookupFunction(0x28F2D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25F6F0u; }
        if (ctx->pc != 0x25F6F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028F2D0_0x28f2d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25F6F0u; }
        if (ctx->pc != 0x25F6F0u) { return; }
    }
    ctx->pc = 0x25F6F0u;
label_25f6f0:
    // 0x25f6f0: 0x27a401f0  addiu       $a0, $sp, 0x1F0
    ctx->pc = 0x25f6f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_25f6f4:
    // 0x25f6f4: 0x27a50460  addiu       $a1, $sp, 0x460
    ctx->pc = 0x25f6f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1120));
label_25f6f8:
    // 0x25f6f8: 0xc0a45a0  jal         func_291680
label_25f6fc:
    if (ctx->pc == 0x25F6FCu) {
        ctx->pc = 0x25F6FCu;
            // 0x25f6fc: 0x27a60420  addiu       $a2, $sp, 0x420 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
        ctx->pc = 0x25F700u;
        goto label_25f700;
    }
    ctx->pc = 0x25F6F8u;
    SET_GPR_U32(ctx, 31, 0x25F700u);
    ctx->pc = 0x25F6FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25F6F8u;
            // 0x25f6fc: 0x27a60420  addiu       $a2, $sp, 0x420 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
        ctx->in_delay_slot = false;
    ctx->pc = 0x291680u;
    if (runtime->hasFunction(0x291680u)) {
        auto targetFn = runtime->lookupFunction(0x291680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25F700u; }
        if (ctx->pc != 0x25F700u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00291680_0x291680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25F700u; }
        if (ctx->pc != 0x25F700u) { return; }
    }
    ctx->pc = 0x25F700u;
label_25f700:
    // 0x25f700: 0x8fa60120  lw          $a2, 0x120($sp)
    ctx->pc = 0x25f700u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_25f704:
    // 0x25f704: 0x27a404c0  addiu       $a0, $sp, 0x4C0
    ctx->pc = 0x25f704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1216));
label_25f708:
    // 0x25f708: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x25f708u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_25f70c:
    // 0x25f70c: 0x27a701f0  addiu       $a3, $sp, 0x1F0
    ctx->pc = 0x25f70cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_25f710:
    // 0x25f710: 0xc098b60  jal         func_262D80
label_25f714:
    if (ctx->pc == 0x25F714u) {
        ctx->pc = 0x25F714u;
            // 0x25f714: 0x27a801e0  addiu       $t0, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->pc = 0x25F718u;
        goto label_25f718;
    }
    ctx->pc = 0x25F710u;
    SET_GPR_U32(ctx, 31, 0x25F718u);
    ctx->pc = 0x25F714u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25F710u;
            // 0x25f714: 0x27a801e0  addiu       $t0, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
    ctx->pc = 0x262D80u;
    if (runtime->hasFunction(0x262D80u)) {
        auto targetFn = runtime->lookupFunction(0x262D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25F718u; }
        if (ctx->pc != 0x25F718u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00262D80_0x262d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25F718u; }
        if (ctx->pc != 0x25F718u) { return; }
    }
    ctx->pc = 0x25F718u;
label_25f718:
    // 0x25f718: 0x27a301e4  addiu       $v1, $sp, 0x1E4
    ctx->pc = 0x25f718u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 484));
label_25f71c:
    // 0x25f71c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x25f71cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_25f720:
    // 0x25f720: 0xc4640000  lwc1        $f4, 0x0($v1)
    ctx->pc = 0x25f720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_25f724:
    // 0x25f724: 0xc7a501e0  lwc1        $f5, 0x1E0($sp)
    ctx->pc = 0x25f724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_25f728:
    // 0x25f728: 0xc7a20460  lwc1        $f2, 0x460($sp)
    ctx->pc = 0x25f728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_25f72c:
    // 0x25f72c: 0x27a301e8  addiu       $v1, $sp, 0x1E8
    ctx->pc = 0x25f72cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 488));
label_25f730:
    // 0x25f730: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x25f730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_25f734:
    // 0x25f734: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x25f734u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_25f738:
    // 0x25f738: 0x27a30470  addiu       $v1, $sp, 0x470
    ctx->pc = 0x25f738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
label_25f73c:
    // 0x25f73c: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x25f73cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25f740:
    // 0x25f740: 0x27a30480  addiu       $v1, $sp, 0x480
    ctx->pc = 0x25f740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1152));
label_25f744:
    // 0x25f744: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x25f744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25f748:
    // 0x25f748: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x25f748u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
label_25f74c:
    // 0x25f74c: 0x46011018  adda.s      $f2, $f1
    ctx->pc = 0x25f74cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_25f750:
    // 0x25f750: 0x27a30464  addiu       $v1, $sp, 0x464
    ctx->pc = 0x25f750u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1124));
label_25f754:
    // 0x25f754: 0x4600181c  madd.s      $f0, $f3, $f0
    ctx->pc = 0x25f754u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
label_25f758:
    // 0x25f758: 0xe6800000  swc1        $f0, 0x0($s4)
    ctx->pc = 0x25f758u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
label_25f75c:
    // 0x25f75c: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x25f75cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_25f760:
    // 0x25f760: 0x27a30470  addiu       $v1, $sp, 0x470
    ctx->pc = 0x25f760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
label_25f764:
    // 0x25f764: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x25f764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25f768:
    // 0x25f768: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x25f768u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_25f76c:
    // 0x25f76c: 0x27a30480  addiu       $v1, $sp, 0x480
    ctx->pc = 0x25f76cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1152));
label_25f770:
    // 0x25f770: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x25f770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25f774:
    // 0x25f774: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x25f774u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
label_25f778:
    // 0x25f778: 0x46011018  adda.s      $f2, $f1
    ctx->pc = 0x25f778u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_25f77c:
    // 0x25f77c: 0x27a30468  addiu       $v1, $sp, 0x468
    ctx->pc = 0x25f77cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1128));
label_25f780:
    // 0x25f780: 0x4600181c  madd.s      $f0, $f3, $f0
    ctx->pc = 0x25f780u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
label_25f784:
    // 0x25f784: 0xe6800004  swc1        $f0, 0x4($s4)
    ctx->pc = 0x25f784u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
label_25f788:
    // 0x25f788: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x25f788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_25f78c:
    // 0x25f78c: 0x27a30470  addiu       $v1, $sp, 0x470
    ctx->pc = 0x25f78cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
label_25f790:
    // 0x25f790: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x25f790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25f794:
    // 0x25f794: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x25f794u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_25f798:
    // 0x25f798: 0x27a30480  addiu       $v1, $sp, 0x480
    ctx->pc = 0x25f798u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1152));
label_25f79c:
    // 0x25f79c: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x25f79cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
label_25f7a0:
    // 0x25f7a0: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x25f7a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25f7a4:
    // 0x25f7a4: 0x46011018  adda.s      $f2, $f1
    ctx->pc = 0x25f7a4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_25f7a8:
    // 0x25f7a8: 0x4600181c  madd.s      $f0, $f3, $f0
    ctx->pc = 0x25f7a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
label_25f7ac:
    // 0x25f7ac: 0xe6800008  swc1        $f0, 0x8($s4)
    ctx->pc = 0x25f7acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8), bits); }
label_25f7b0:
    // 0x25f7b0: 0xae80000c  sw          $zero, 0xC($s4)
    ctx->pc = 0x25f7b0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 0));
label_25f7b4:
    // 0x25f7b4: 0x8fa304c0  lw          $v1, 0x4C0($sp)
    ctx->pc = 0x25f7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1216)));
label_25f7b8:
    // 0x25f7b8: 0x14640007  bne         $v1, $a0, . + 4 + (0x7 << 2)
label_25f7bc:
    if (ctx->pc == 0x25F7BCu) {
        ctx->pc = 0x25F7BCu;
            // 0x25f7bc: 0x27a304e0  addiu       $v1, $sp, 0x4E0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1248));
        ctx->pc = 0x25F7C0u;
        goto label_25f7c0;
    }
    ctx->pc = 0x25F7B8u;
    {
        const bool branch_taken_0x25f7b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x25F7BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25F7B8u;
            // 0x25f7bc: 0x27a304e0  addiu       $v1, $sp, 0x4E0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f7b8) {
            ctx->pc = 0x25F7D8u;
            goto label_25f7d8;
        }
    }
    ctx->pc = 0x25F7C0u;
label_25f7c0:
    // 0x25f7c0: 0xc46b0000  lwc1        $f11, 0x0($v1)
    ctx->pc = 0x25f7c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
label_25f7c4:
    // 0x25f7c4: 0x27a304e4  addiu       $v1, $sp, 0x4E4
    ctx->pc = 0x25f7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1252));
label_25f7c8:
    // 0x25f7c8: 0xc46a0000  lwc1        $f10, 0x0($v1)
    ctx->pc = 0x25f7c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_25f7cc:
    // 0x25f7cc: 0x27a304e8  addiu       $v1, $sp, 0x4E8
    ctx->pc = 0x25f7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1256));
label_25f7d0:
    // 0x25f7d0: 0x1000001f  b           . + 4 + (0x1F << 2)
label_25f7d4:
    if (ctx->pc == 0x25F7D4u) {
        ctx->pc = 0x25F7D4u;
            // 0x25f7d4: 0xc4690000  lwc1        $f9, 0x0($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
        ctx->pc = 0x25F7D8u;
        goto label_25f7d8;
    }
    ctx->pc = 0x25F7D0u;
    {
        const bool branch_taken_0x25f7d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F7D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25F7D0u;
            // 0x25f7d4: 0xc4690000  lwc1        $f9, 0x0($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f7d0) {
            ctx->pc = 0x25F850u;
            goto label_25f850;
        }
    }
    ctx->pc = 0x25F7D8u;
label_25f7d8:
    // 0x25f7d8: 0x27a304c4  addiu       $v1, $sp, 0x4C4
    ctx->pc = 0x25f7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1220));
label_25f7dc:
    // 0x25f7dc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x25f7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_25f7e0:
    // 0x25f7e0: 0x14640015  bne         $v1, $a0, . + 4 + (0x15 << 2)
label_25f7e4:
    if (ctx->pc == 0x25F7E4u) {
        ctx->pc = 0x25F7E4u;
            // 0x25f7e4: 0x27a30560  addiu       $v1, $sp, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1376));
        ctx->pc = 0x25F7E8u;
        goto label_25f7e8;
    }
    ctx->pc = 0x25F7E0u;
    {
        const bool branch_taken_0x25f7e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x25F7E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25F7E0u;
            // 0x25f7e4: 0x27a30560  addiu       $v1, $sp, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1376));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f7e0) {
            ctx->pc = 0x25F838u;
            goto label_25f838;
        }
    }
    ctx->pc = 0x25F7E8u;
label_25f7e8:
    // 0x25f7e8: 0xc46b0000  lwc1        $f11, 0x0($v1)
    ctx->pc = 0x25f7e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
label_25f7ec:
    // 0x25f7ec: 0xc7a201e0  lwc1        $f2, 0x1E0($sp)
    ctx->pc = 0x25f7ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_25f7f0:
    // 0x25f7f0: 0x27a30564  addiu       $v1, $sp, 0x564
    ctx->pc = 0x25f7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1380));
label_25f7f4:
    // 0x25f7f4: 0xc46a0000  lwc1        $f10, 0x0($v1)
    ctx->pc = 0x25f7f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_25f7f8:
    // 0x25f7f8: 0x27a30568  addiu       $v1, $sp, 0x568
    ctx->pc = 0x25f7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1384));
label_25f7fc:
    // 0x25f7fc: 0xc4690000  lwc1        $f9, 0x0($v1)
    ctx->pc = 0x25f7fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_25f800:
    // 0x25f800: 0x27a301ec  addiu       $v1, $sp, 0x1EC
    ctx->pc = 0x25f800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 492));
label_25f804:
    // 0x25f804: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x25f804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_25f808:
    // 0x25f808: 0x27a301e4  addiu       $v1, $sp, 0x1E4
    ctx->pc = 0x25f808u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 484));
label_25f80c:
    // 0x25f80c: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x25f80cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25f810:
    // 0x25f810: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x25f810u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_25f814:
    // 0x25f814: 0x27a301e8  addiu       $v1, $sp, 0x1E8
    ctx->pc = 0x25f814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 488));
label_25f818:
    // 0x25f818: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x25f818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25f81c:
    // 0x25f81c: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x25f81cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_25f820:
    // 0x25f820: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x25f820u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_25f824:
    // 0x25f824: 0x46025ac0  add.s       $f11, $f11, $f2
    ctx->pc = 0x25f824u;
    ctx->f[11] = FPU_ADD_S(ctx->f[11], ctx->f[2]);
label_25f828:
    // 0x25f828: 0x46015280  add.s       $f10, $f10, $f1
    ctx->pc = 0x25f828u;
    ctx->f[10] = FPU_ADD_S(ctx->f[10], ctx->f[1]);
label_25f82c:
    // 0x25f82c: 0x10000008  b           . + 4 + (0x8 << 2)
label_25f830:
    if (ctx->pc == 0x25F830u) {
        ctx->pc = 0x25F830u;
            // 0x25f830: 0x46004a40  add.s       $f9, $f9, $f0 (Delay Slot)
        ctx->f[9] = FPU_ADD_S(ctx->f[9], ctx->f[0]);
        ctx->pc = 0x25F834u;
        goto label_25f834;
    }
    ctx->pc = 0x25F82Cu;
    {
        const bool branch_taken_0x25f82c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F830u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25F82Cu;
            // 0x25f830: 0x46004a40  add.s       $f9, $f9, $f0 (Delay Slot)
        ctx->f[9] = FPU_ADD_S(ctx->f[9], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f82c) {
            ctx->pc = 0x25F850u;
            goto label_25f850;
        }
    }
    ctx->pc = 0x25F834u;
label_25f834:
    // 0x25f834: 0x0  nop
    ctx->pc = 0x25f834u;
    // NOP
label_25f838:
    // 0x25f838: 0x27a305f0  addiu       $v1, $sp, 0x5F0
    ctx->pc = 0x25f838u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1520));
label_25f83c:
    // 0x25f83c: 0xc46b0000  lwc1        $f11, 0x0($v1)
    ctx->pc = 0x25f83cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
label_25f840:
    // 0x25f840: 0x27a305f4  addiu       $v1, $sp, 0x5F4
    ctx->pc = 0x25f840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1524));
label_25f844:
    // 0x25f844: 0xc46a0000  lwc1        $f10, 0x0($v1)
    ctx->pc = 0x25f844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_25f848:
    // 0x25f848: 0x27a305f8  addiu       $v1, $sp, 0x5F8
    ctx->pc = 0x25f848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1528));
label_25f84c:
    // 0x25f84c: 0xc4690000  lwc1        $f9, 0x0($v1)
    ctx->pc = 0x25f84cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_25f850:
    // 0x25f850: 0x27a301ec  addiu       $v1, $sp, 0x1EC
    ctx->pc = 0x25f850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 492));
label_25f854:
    // 0x25f854: 0xc46c0000  lwc1        $f12, 0x0($v1)
    ctx->pc = 0x25f854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_25f858:
    // 0x25f858: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x25f858u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_25f85c:
    // 0x25f85c: 0xc7a101e0  lwc1        $f1, 0x1E0($sp)
    ctx->pc = 0x25f85cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25f860:
    // 0x25f860: 0xc7a301f0  lwc1        $f3, 0x1F0($sp)
    ctx->pc = 0x25f860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_25f864:
    // 0x25f864: 0x27a301e4  addiu       $v1, $sp, 0x1E4
    ctx->pc = 0x25f864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 484));
label_25f868:
    // 0x25f868: 0xc4670000  lwc1        $f7, 0x0($v1)
    ctx->pc = 0x25f868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_25f86c:
    // 0x25f86c: 0x46016202  mul.s       $f8, $f12, $f1
    ctx->pc = 0x25f86cu;
    ctx->f[8] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
label_25f870:
    // 0x25f870: 0x27a301e8  addiu       $v1, $sp, 0x1E8
    ctx->pc = 0x25f870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 488));
label_25f874:
    // 0x25f874: 0xc4660000  lwc1        $f6, 0x0($v1)
    ctx->pc = 0x25f874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_25f878:
    // 0x25f878: 0x460761c2  mul.s       $f7, $f12, $f7
    ctx->pc = 0x25f878u;
    ctx->f[7] = FPU_MUL_S(ctx->f[12], ctx->f[7]);
label_25f87c:
    // 0x25f87c: 0x27a30220  addiu       $v1, $sp, 0x220
    ctx->pc = 0x25f87cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
label_25f880:
    // 0x25f880: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x25f880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25f884:
    // 0x25f884: 0x46085ac1  sub.s       $f11, $f11, $f8
    ctx->pc = 0x25f884u;
    ctx->f[11] = FPU_SUB_S(ctx->f[11], ctx->f[8]);
label_25f888:
    // 0x25f888: 0x46066182  mul.s       $f6, $f12, $f6
    ctx->pc = 0x25f888u;
    ctx->f[6] = FPU_MUL_S(ctx->f[12], ctx->f[6]);
label_25f88c:
    // 0x25f88c: 0x27a30224  addiu       $v1, $sp, 0x224
    ctx->pc = 0x25f88cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 548));
label_25f890:
    // 0x25f890: 0xc4650000  lwc1        $f5, 0x0($v1)
    ctx->pc = 0x25f890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_25f894:
    // 0x25f894: 0x46075281  sub.s       $f10, $f10, $f7
    ctx->pc = 0x25f894u;
    ctx->f[10] = FPU_SUB_S(ctx->f[10], ctx->f[7]);
label_25f898:
    // 0x25f898: 0x46005801  sub.s       $f0, $f11, $f0
    ctx->pc = 0x25f898u;
    ctx->f[0] = FPU_SUB_S(ctx->f[11], ctx->f[0]);
label_25f89c:
    // 0x25f89c: 0x27a30228  addiu       $v1, $sp, 0x228
    ctx->pc = 0x25f89cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 552));
label_25f8a0:
    // 0x25f8a0: 0xc4640000  lwc1        $f4, 0x0($v1)
    ctx->pc = 0x25f8a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_25f8a4:
    // 0x25f8a4: 0x46064a41  sub.s       $f9, $f9, $f6
    ctx->pc = 0x25f8a4u;
    ctx->f[9] = FPU_SUB_S(ctx->f[9], ctx->f[6]);
label_25f8a8:
    // 0x25f8a8: 0x46055141  sub.s       $f5, $f10, $f5
    ctx->pc = 0x25f8a8u;
    ctx->f[5] = FPU_SUB_S(ctx->f[10], ctx->f[5]);
label_25f8ac:
    // 0x25f8ac: 0x27a301f4  addiu       $v1, $sp, 0x1F4
    ctx->pc = 0x25f8acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 500));
label_25f8b0:
    // 0x25f8b0: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x25f8b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_25f8b4:
    // 0x25f8b4: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x25f8b4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_25f8b8:
    // 0x25f8b8: 0x27a301f8  addiu       $v1, $sp, 0x1F8
    ctx->pc = 0x25f8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 504));
label_25f8bc:
    // 0x25f8bc: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x25f8bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25f8c0:
    // 0x25f8c0: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x25f8c0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_25f8c4:
    // 0x25f8c4: 0x46044901  sub.s       $f4, $f9, $f4
    ctx->pc = 0x25f8c4u;
    ctx->f[4] = FPU_SUB_S(ctx->f[9], ctx->f[4]);
label_25f8c8:
    // 0x25f8c8: 0x27a30670  addiu       $v1, $sp, 0x670
    ctx->pc = 0x25f8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1648));
label_25f8cc:
    // 0x25f8cc: 0x46021818  adda.s      $f3, $f2
    ctx->pc = 0x25f8ccu;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
label_25f8d0:
    // 0x25f8d0: 0x4601205c  madd.s      $f1, $f4, $f1
    ctx->pc = 0x25f8d0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[1]));
label_25f8d4:
    // 0x25f8d4: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x25f8d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_25f8d8:
    // 0x25f8d8: 0x27a30200  addiu       $v1, $sp, 0x200
    ctx->pc = 0x25f8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
label_25f8dc:
    // 0x25f8dc: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x25f8dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_25f8e0:
    // 0x25f8e0: 0x27a30204  addiu       $v1, $sp, 0x204
    ctx->pc = 0x25f8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 516));
label_25f8e4:
    // 0x25f8e4: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x25f8e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_25f8e8:
    // 0x25f8e8: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x25f8e8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_25f8ec:
    // 0x25f8ec: 0x27a30208  addiu       $v1, $sp, 0x208
    ctx->pc = 0x25f8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 520));
label_25f8f0:
    // 0x25f8f0: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x25f8f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25f8f4:
    // 0x25f8f4: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x25f8f4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_25f8f8:
    // 0x25f8f8: 0x46021818  adda.s      $f3, $f2
    ctx->pc = 0x25f8f8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
label_25f8fc:
    // 0x25f8fc: 0x27a30670  addiu       $v1, $sp, 0x670
    ctx->pc = 0x25f8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1648));
label_25f900:
    // 0x25f900: 0x4601205c  madd.s      $f1, $f4, $f1
    ctx->pc = 0x25f900u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[1]));
label_25f904:
    // 0x25f904: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x25f904u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_25f908:
    // 0x25f908: 0x27a30210  addiu       $v1, $sp, 0x210
    ctx->pc = 0x25f908u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
label_25f90c:
    // 0x25f90c: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x25f90cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_25f910:
    // 0x25f910: 0x27a30214  addiu       $v1, $sp, 0x214
    ctx->pc = 0x25f910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 532));
label_25f914:
    // 0x25f914: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x25f914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_25f918:
    // 0x25f918: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x25f918u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_25f91c:
    // 0x25f91c: 0x27a30218  addiu       $v1, $sp, 0x218
    ctx->pc = 0x25f91cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 536));
label_25f920:
    // 0x25f920: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x25f920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25f924:
    // 0x25f924: 0x46022802  mul.s       $f0, $f5, $f2
    ctx->pc = 0x25f924u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_25f928:
    // 0x25f928: 0x46001818  adda.s      $f3, $f0
    ctx->pc = 0x25f928u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_25f92c:
    // 0x25f92c: 0x27a30670  addiu       $v1, $sp, 0x670
    ctx->pc = 0x25f92cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1648));
label_25f930:
    // 0x25f930: 0x4601201c  madd.s      $f0, $f4, $f1
    ctx->pc = 0x25f930u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[1]));
label_25f934:
    // 0x25f934: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x25f934u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_25f938:
    // 0x25f938: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x25f938u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
label_25f93c:
    // 0x25f93c: 0x27a301ec  addiu       $v1, $sp, 0x1EC
    ctx->pc = 0x25f93cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 492));
label_25f940:
    // 0x25f940: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x25f940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25f944:
    // 0x25f944: 0xc7c20010  lwc1        $f2, 0x10($fp)
    ctx->pc = 0x25f944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_25f948:
    // 0x25f948: 0x8fa30120  lw          $v1, 0x120($sp)
    ctx->pc = 0x25f948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_25f94c:
    // 0x25f94c: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x25f94cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_25f950:
    // 0x25f950: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x25f950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25f954:
    // 0x25f954: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x25f954u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_25f958:
    // 0x25f958: 0x27a30424  addiu       $v1, $sp, 0x424
    ctx->pc = 0x25f958u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1060));
label_25f95c:
    // 0x25f95c: 0xe680000c  swc1        $f0, 0xC($s4)
    ctx->pc = 0x25f95cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
label_25f960:
    // 0x25f960: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x25f960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25f964:
    // 0x25f964: 0xc6840004  lwc1        $f4, 0x4($s4)
    ctx->pc = 0x25f964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_25f968:
    // 0x25f968: 0xc6850000  lwc1        $f5, 0x0($s4)
    ctx->pc = 0x25f968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_25f96c:
    // 0x25f96c: 0xc7a20420  lwc1        $f2, 0x420($sp)
    ctx->pc = 0x25f96cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_25f970:
    // 0x25f970: 0xc6830008  lwc1        $f3, 0x8($s4)
    ctx->pc = 0x25f970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_25f974:
    // 0x25f974: 0x27a30428  addiu       $v1, $sp, 0x428
    ctx->pc = 0x25f974u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1064));
label_25f978:
    // 0x25f978: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x25f978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25f97c:
    // 0x25f97c: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x25f97cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
label_25f980:
    // 0x25f980: 0x27a304d4  addiu       $v1, $sp, 0x4D4
    ctx->pc = 0x25f980u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1236));
label_25f984:
    // 0x25f984: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x25f984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_25f988:
    // 0x25f988: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x25f988u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_25f98c:
    // 0x25f98c: 0x46011018  adda.s      $f2, $f1
    ctx->pc = 0x25f98cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_25f990:
    // 0x25f990: 0xafa30110  sw          $v1, 0x110($sp)
    ctx->pc = 0x25f990u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 3));
label_25f994:
    // 0x25f994: 0x4600181c  madd.s      $f0, $f3, $f0
    ctx->pc = 0x25f994u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
label_25f998:
    // 0x25f998: 0x27a30660  addiu       $v1, $sp, 0x660
    ctx->pc = 0x25f998u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1632));
label_25f99c:
    // 0x25f99c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x25f99cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_25f9a0:
    // 0x25f9a0: 0x27a30430  addiu       $v1, $sp, 0x430
    ctx->pc = 0x25f9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1072));
label_25f9a4:
    // 0x25f9a4: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x25f9a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_25f9a8:
    // 0x25f9a8: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x25f9a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25f9ac:
    // 0x25f9ac: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x25f9acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25f9b0:
    // 0x25f9b0: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x25f9b0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_25f9b4:
    // 0x25f9b4: 0x27a30660  addiu       $v1, $sp, 0x660
    ctx->pc = 0x25f9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1632));
label_25f9b8:
    // 0x25f9b8: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x25f9b8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
label_25f9bc:
    // 0x25f9bc: 0x46011018  adda.s      $f2, $f1
    ctx->pc = 0x25f9bcu;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_25f9c0:
    // 0x25f9c0: 0x4600181c  madd.s      $f0, $f3, $f0
    ctx->pc = 0x25f9c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
label_25f9c4:
    // 0x25f9c4: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x25f9c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_25f9c8:
    // 0x25f9c8: 0x27a30440  addiu       $v1, $sp, 0x440
    ctx->pc = 0x25f9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
label_25f9cc:
    // 0x25f9cc: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x25f9ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_25f9d0:
    // 0x25f9d0: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x25f9d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25f9d4:
    // 0x25f9d4: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x25f9d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25f9d8:
    // 0x25f9d8: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x25f9d8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_25f9dc:
    // 0x25f9dc: 0x27a30660  addiu       $v1, $sp, 0x660
    ctx->pc = 0x25f9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1632));
label_25f9e0:
    // 0x25f9e0: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x25f9e0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
label_25f9e4:
    // 0x25f9e4: 0x46011018  adda.s      $f2, $f1
    ctx->pc = 0x25f9e4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_25f9e8:
    // 0x25f9e8: 0x4600181c  madd.s      $f0, $f3, $f0
    ctx->pc = 0x25f9e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
label_25f9ec:
    // 0x25f9ec: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x25f9ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_25f9f0:
    // 0x25f9f0: 0x1000fa6f  b           . + 4 + (-0x591 << 2)
label_25f9f4:
    if (ctx->pc == 0x25F9F4u) {
        ctx->pc = 0x25F9F4u;
            // 0x25f9f4: 0xac60000c  sw          $zero, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
        ctx->pc = 0x25F9F8u;
        goto label_25f9f8;
    }
    ctx->pc = 0x25F9F0u;
    {
        const bool branch_taken_0x25f9f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F9F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25F9F0u;
            // 0x25f9f4: 0xac60000c  sw          $zero, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f9f0) {
            ctx->pc = 0x25E3B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_25e3b0;
        }
    }
    ctx->pc = 0x25F9F8u;
label_25f9f8:
    // 0x25f9f8: 0x27a30648  addiu       $v1, $sp, 0x648
    ctx->pc = 0x25f9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1608));
label_25f9fc:
    // 0x25f9fc: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x25f9fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_25fa00:
    // 0x25fa00: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
label_25fa04:
    if (ctx->pc == 0x25FA04u) {
        ctx->pc = 0x25FA04u;
            // 0x25fa04: 0x3c01006f  lui         $at, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
        ctx->pc = 0x25FA08u;
        goto label_25fa08;
    }
    ctx->pc = 0x25FA00u;
    {
        const bool branch_taken_0x25fa00 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FA04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25FA00u;
            // 0x25fa04: 0x3c01006f  lui         $at, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fa00) {
            ctx->pc = 0x25FA30u;
            goto label_25fa30;
        }
    }
    ctx->pc = 0x25FA08u;
label_25fa08:
    // 0x25fa08: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x25fa08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_25fa0c:
    // 0x25fa0c: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x25fa0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
label_25fa10:
    // 0x25fa10: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x25fa10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_25fa14:
    // 0x25fa14: 0x14a30006  bne         $a1, $v1, . + 4 + (0x6 << 2)
label_25fa18:
    if (ctx->pc == 0x25FA18u) {
        ctx->pc = 0x25FA1Cu;
        goto label_25fa1c;
    }
    ctx->pc = 0x25FA14u;
    {
        const bool branch_taken_0x25fa14 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x25fa14) {
            ctx->pc = 0x25FA30u;
            goto label_25fa30;
        }
    }
    ctx->pc = 0x25FA1Cu;
label_25fa1c:
    // 0x25fa1c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x25fa1cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_25fa20:
    // 0x25fa20: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x25fa20u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_25fa24:
    // 0x25fa24: 0x320f809  jalr        $t9
label_25fa28:
    if (ctx->pc == 0x25FA28u) {
        ctx->pc = 0x25FA2Cu;
        goto label_25fa2c;
    }
    ctx->pc = 0x25FA24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x25FA2Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x25FA2Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x25FA2Cu; }
            if (ctx->pc != 0x25FA2Cu) { return; }
        }
        }
    }
    ctx->pc = 0x25FA2Cu;
label_25fa2c:
    // 0x25fa2c: 0x0  nop
    ctx->pc = 0x25fa2cu;
    // NOP
label_25fa30:
    // 0x25fa30: 0x27a304d4  addiu       $v1, $sp, 0x4D4
    ctx->pc = 0x25fa30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1236));
label_25fa34:
    // 0x25fa34: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x25fa34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_25fa38:
    // 0x25fa38: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_25fa3c:
    if (ctx->pc == 0x25FA3Cu) {
        ctx->pc = 0x25FA40u;
        goto label_25fa40;
    }
    ctx->pc = 0x25FA38u;
    {
        const bool branch_taken_0x25fa38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25fa38) {
            ctx->pc = 0x25FA50u;
            goto label_25fa50;
        }
    }
    ctx->pc = 0x25FA40u;
label_25fa40:
    // 0x25fa40: 0x8fa5013c  lw          $a1, 0x13C($sp)
    ctx->pc = 0x25fa40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
label_25fa44:
    // 0x25fa44: 0xc099150  jal         func_264540
label_25fa48:
    if (ctx->pc == 0x25FA48u) {
        ctx->pc = 0x25FA48u;
            // 0x25fa48: 0x27a404c0  addiu       $a0, $sp, 0x4C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1216));
        ctx->pc = 0x25FA4Cu;
        goto label_25fa4c;
    }
    ctx->pc = 0x25FA44u;
    SET_GPR_U32(ctx, 31, 0x25FA4Cu);
    ctx->pc = 0x25FA48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25FA44u;
            // 0x25fa48: 0x27a404c0  addiu       $a0, $sp, 0x4C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x264540u;
    if (runtime->hasFunction(0x264540u)) {
        auto targetFn = runtime->lookupFunction(0x264540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25FA4Cu; }
        if (ctx->pc != 0x25FA4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00264540_0x264540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25FA4Cu; }
        if (ctx->pc != 0x25FA4Cu) { return; }
    }
    ctx->pc = 0x25FA4Cu;
label_25fa4c:
    // 0x25fa4c: 0x0  nop
    ctx->pc = 0x25fa4cu;
    // NOP
label_25fa50:
    // 0x25fa50: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x25fa50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
label_25fa54:
    // 0x25fa54: 0x7bbe00c0  lq          $fp, 0xC0($sp)
    ctx->pc = 0x25fa54u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_25fa58:
    // 0x25fa58: 0xc7be0038  lwc1        $f30, 0x38($sp)
    ctx->pc = 0x25fa58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[30] = f; }
label_25fa5c:
    // 0x25fa5c: 0x7bb700b0  lq          $s7, 0xB0($sp)
    ctx->pc = 0x25fa5cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_25fa60:
    // 0x25fa60: 0xc7bd0034  lwc1        $f29, 0x34($sp)
    ctx->pc = 0x25fa60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
label_25fa64:
    // 0x25fa64: 0x7bb600a0  lq          $s6, 0xA0($sp)
    ctx->pc = 0x25fa64u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_25fa68:
    // 0x25fa68: 0xc7bc0030  lwc1        $f28, 0x30($sp)
    ctx->pc = 0x25fa68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
label_25fa6c:
    // 0x25fa6c: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x25fa6cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_25fa70:
    // 0x25fa70: 0xc7bb002c  lwc1        $f27, 0x2C($sp)
    ctx->pc = 0x25fa70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
label_25fa74:
    // 0x25fa74: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x25fa74u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_25fa78:
    // 0x25fa78: 0xc7ba0028  lwc1        $f26, 0x28($sp)
    ctx->pc = 0x25fa78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
label_25fa7c:
    // 0x25fa7c: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x25fa7cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_25fa80:
    // 0x25fa80: 0xc7b90024  lwc1        $f25, 0x24($sp)
    ctx->pc = 0x25fa80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_25fa84:
    // 0x25fa84: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x25fa84u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_25fa88:
    // 0x25fa88: 0xc7b80020  lwc1        $f24, 0x20($sp)
    ctx->pc = 0x25fa88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_25fa8c:
    // 0x25fa8c: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x25fa8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_25fa90:
    // 0x25fa90: 0xc7b7001c  lwc1        $f23, 0x1C($sp)
    ctx->pc = 0x25fa90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_25fa94:
    // 0x25fa94: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x25fa94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_25fa98:
    // 0x25fa98: 0xc7b60018  lwc1        $f22, 0x18($sp)
    ctx->pc = 0x25fa98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_25fa9c:
    // 0x25fa9c: 0xc7b50014  lwc1        $f21, 0x14($sp)
    ctx->pc = 0x25fa9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_25faa0:
    // 0x25faa0: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x25faa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_25faa4:
    // 0x25faa4: 0x3e00008  jr          $ra
label_25faa8:
    if (ctx->pc == 0x25FAA8u) {
        ctx->pc = 0x25FAA8u;
            // 0x25faa8: 0x27bd0710  addiu       $sp, $sp, 0x710 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1808));
        ctx->pc = 0x25FAACu;
        goto label_25faac;
    }
    ctx->pc = 0x25FAA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25FAA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25FAA4u;
            // 0x25faa8: 0x27bd0710  addiu       $sp, $sp, 0x710 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1808));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25FAACu;
label_25faac:
    // 0x25faac: 0x0  nop
    ctx->pc = 0x25faacu;
    // NOP
}
