#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0040E1E0
// Address: 0x40e1e0 - 0x40eb60
void sub_0040E1E0_0x40e1e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0040E1E0_0x40e1e0");
#endif

    switch (ctx->pc) {
        case 0x40e1e0u: goto label_40e1e0;
        case 0x40e1e4u: goto label_40e1e4;
        case 0x40e1e8u: goto label_40e1e8;
        case 0x40e1ecu: goto label_40e1ec;
        case 0x40e1f0u: goto label_40e1f0;
        case 0x40e1f4u: goto label_40e1f4;
        case 0x40e1f8u: goto label_40e1f8;
        case 0x40e1fcu: goto label_40e1fc;
        case 0x40e200u: goto label_40e200;
        case 0x40e204u: goto label_40e204;
        case 0x40e208u: goto label_40e208;
        case 0x40e20cu: goto label_40e20c;
        case 0x40e210u: goto label_40e210;
        case 0x40e214u: goto label_40e214;
        case 0x40e218u: goto label_40e218;
        case 0x40e21cu: goto label_40e21c;
        case 0x40e220u: goto label_40e220;
        case 0x40e224u: goto label_40e224;
        case 0x40e228u: goto label_40e228;
        case 0x40e22cu: goto label_40e22c;
        case 0x40e230u: goto label_40e230;
        case 0x40e234u: goto label_40e234;
        case 0x40e238u: goto label_40e238;
        case 0x40e23cu: goto label_40e23c;
        case 0x40e240u: goto label_40e240;
        case 0x40e244u: goto label_40e244;
        case 0x40e248u: goto label_40e248;
        case 0x40e24cu: goto label_40e24c;
        case 0x40e250u: goto label_40e250;
        case 0x40e254u: goto label_40e254;
        case 0x40e258u: goto label_40e258;
        case 0x40e25cu: goto label_40e25c;
        case 0x40e260u: goto label_40e260;
        case 0x40e264u: goto label_40e264;
        case 0x40e268u: goto label_40e268;
        case 0x40e26cu: goto label_40e26c;
        case 0x40e270u: goto label_40e270;
        case 0x40e274u: goto label_40e274;
        case 0x40e278u: goto label_40e278;
        case 0x40e27cu: goto label_40e27c;
        case 0x40e280u: goto label_40e280;
        case 0x40e284u: goto label_40e284;
        case 0x40e288u: goto label_40e288;
        case 0x40e28cu: goto label_40e28c;
        case 0x40e290u: goto label_40e290;
        case 0x40e294u: goto label_40e294;
        case 0x40e298u: goto label_40e298;
        case 0x40e29cu: goto label_40e29c;
        case 0x40e2a0u: goto label_40e2a0;
        case 0x40e2a4u: goto label_40e2a4;
        case 0x40e2a8u: goto label_40e2a8;
        case 0x40e2acu: goto label_40e2ac;
        case 0x40e2b0u: goto label_40e2b0;
        case 0x40e2b4u: goto label_40e2b4;
        case 0x40e2b8u: goto label_40e2b8;
        case 0x40e2bcu: goto label_40e2bc;
        case 0x40e2c0u: goto label_40e2c0;
        case 0x40e2c4u: goto label_40e2c4;
        case 0x40e2c8u: goto label_40e2c8;
        case 0x40e2ccu: goto label_40e2cc;
        case 0x40e2d0u: goto label_40e2d0;
        case 0x40e2d4u: goto label_40e2d4;
        case 0x40e2d8u: goto label_40e2d8;
        case 0x40e2dcu: goto label_40e2dc;
        case 0x40e2e0u: goto label_40e2e0;
        case 0x40e2e4u: goto label_40e2e4;
        case 0x40e2e8u: goto label_40e2e8;
        case 0x40e2ecu: goto label_40e2ec;
        case 0x40e2f0u: goto label_40e2f0;
        case 0x40e2f4u: goto label_40e2f4;
        case 0x40e2f8u: goto label_40e2f8;
        case 0x40e2fcu: goto label_40e2fc;
        case 0x40e300u: goto label_40e300;
        case 0x40e304u: goto label_40e304;
        case 0x40e308u: goto label_40e308;
        case 0x40e30cu: goto label_40e30c;
        case 0x40e310u: goto label_40e310;
        case 0x40e314u: goto label_40e314;
        case 0x40e318u: goto label_40e318;
        case 0x40e31cu: goto label_40e31c;
        case 0x40e320u: goto label_40e320;
        case 0x40e324u: goto label_40e324;
        case 0x40e328u: goto label_40e328;
        case 0x40e32cu: goto label_40e32c;
        case 0x40e330u: goto label_40e330;
        case 0x40e334u: goto label_40e334;
        case 0x40e338u: goto label_40e338;
        case 0x40e33cu: goto label_40e33c;
        case 0x40e340u: goto label_40e340;
        case 0x40e344u: goto label_40e344;
        case 0x40e348u: goto label_40e348;
        case 0x40e34cu: goto label_40e34c;
        case 0x40e350u: goto label_40e350;
        case 0x40e354u: goto label_40e354;
        case 0x40e358u: goto label_40e358;
        case 0x40e35cu: goto label_40e35c;
        case 0x40e360u: goto label_40e360;
        case 0x40e364u: goto label_40e364;
        case 0x40e368u: goto label_40e368;
        case 0x40e36cu: goto label_40e36c;
        case 0x40e370u: goto label_40e370;
        case 0x40e374u: goto label_40e374;
        case 0x40e378u: goto label_40e378;
        case 0x40e37cu: goto label_40e37c;
        case 0x40e380u: goto label_40e380;
        case 0x40e384u: goto label_40e384;
        case 0x40e388u: goto label_40e388;
        case 0x40e38cu: goto label_40e38c;
        case 0x40e390u: goto label_40e390;
        case 0x40e394u: goto label_40e394;
        case 0x40e398u: goto label_40e398;
        case 0x40e39cu: goto label_40e39c;
        case 0x40e3a0u: goto label_40e3a0;
        case 0x40e3a4u: goto label_40e3a4;
        case 0x40e3a8u: goto label_40e3a8;
        case 0x40e3acu: goto label_40e3ac;
        case 0x40e3b0u: goto label_40e3b0;
        case 0x40e3b4u: goto label_40e3b4;
        case 0x40e3b8u: goto label_40e3b8;
        case 0x40e3bcu: goto label_40e3bc;
        case 0x40e3c0u: goto label_40e3c0;
        case 0x40e3c4u: goto label_40e3c4;
        case 0x40e3c8u: goto label_40e3c8;
        case 0x40e3ccu: goto label_40e3cc;
        case 0x40e3d0u: goto label_40e3d0;
        case 0x40e3d4u: goto label_40e3d4;
        case 0x40e3d8u: goto label_40e3d8;
        case 0x40e3dcu: goto label_40e3dc;
        case 0x40e3e0u: goto label_40e3e0;
        case 0x40e3e4u: goto label_40e3e4;
        case 0x40e3e8u: goto label_40e3e8;
        case 0x40e3ecu: goto label_40e3ec;
        case 0x40e3f0u: goto label_40e3f0;
        case 0x40e3f4u: goto label_40e3f4;
        case 0x40e3f8u: goto label_40e3f8;
        case 0x40e3fcu: goto label_40e3fc;
        case 0x40e400u: goto label_40e400;
        case 0x40e404u: goto label_40e404;
        case 0x40e408u: goto label_40e408;
        case 0x40e40cu: goto label_40e40c;
        case 0x40e410u: goto label_40e410;
        case 0x40e414u: goto label_40e414;
        case 0x40e418u: goto label_40e418;
        case 0x40e41cu: goto label_40e41c;
        case 0x40e420u: goto label_40e420;
        case 0x40e424u: goto label_40e424;
        case 0x40e428u: goto label_40e428;
        case 0x40e42cu: goto label_40e42c;
        case 0x40e430u: goto label_40e430;
        case 0x40e434u: goto label_40e434;
        case 0x40e438u: goto label_40e438;
        case 0x40e43cu: goto label_40e43c;
        case 0x40e440u: goto label_40e440;
        case 0x40e444u: goto label_40e444;
        case 0x40e448u: goto label_40e448;
        case 0x40e44cu: goto label_40e44c;
        case 0x40e450u: goto label_40e450;
        case 0x40e454u: goto label_40e454;
        case 0x40e458u: goto label_40e458;
        case 0x40e45cu: goto label_40e45c;
        case 0x40e460u: goto label_40e460;
        case 0x40e464u: goto label_40e464;
        case 0x40e468u: goto label_40e468;
        case 0x40e46cu: goto label_40e46c;
        case 0x40e470u: goto label_40e470;
        case 0x40e474u: goto label_40e474;
        case 0x40e478u: goto label_40e478;
        case 0x40e47cu: goto label_40e47c;
        case 0x40e480u: goto label_40e480;
        case 0x40e484u: goto label_40e484;
        case 0x40e488u: goto label_40e488;
        case 0x40e48cu: goto label_40e48c;
        case 0x40e490u: goto label_40e490;
        case 0x40e494u: goto label_40e494;
        case 0x40e498u: goto label_40e498;
        case 0x40e49cu: goto label_40e49c;
        case 0x40e4a0u: goto label_40e4a0;
        case 0x40e4a4u: goto label_40e4a4;
        case 0x40e4a8u: goto label_40e4a8;
        case 0x40e4acu: goto label_40e4ac;
        case 0x40e4b0u: goto label_40e4b0;
        case 0x40e4b4u: goto label_40e4b4;
        case 0x40e4b8u: goto label_40e4b8;
        case 0x40e4bcu: goto label_40e4bc;
        case 0x40e4c0u: goto label_40e4c0;
        case 0x40e4c4u: goto label_40e4c4;
        case 0x40e4c8u: goto label_40e4c8;
        case 0x40e4ccu: goto label_40e4cc;
        case 0x40e4d0u: goto label_40e4d0;
        case 0x40e4d4u: goto label_40e4d4;
        case 0x40e4d8u: goto label_40e4d8;
        case 0x40e4dcu: goto label_40e4dc;
        case 0x40e4e0u: goto label_40e4e0;
        case 0x40e4e4u: goto label_40e4e4;
        case 0x40e4e8u: goto label_40e4e8;
        case 0x40e4ecu: goto label_40e4ec;
        case 0x40e4f0u: goto label_40e4f0;
        case 0x40e4f4u: goto label_40e4f4;
        case 0x40e4f8u: goto label_40e4f8;
        case 0x40e4fcu: goto label_40e4fc;
        case 0x40e500u: goto label_40e500;
        case 0x40e504u: goto label_40e504;
        case 0x40e508u: goto label_40e508;
        case 0x40e50cu: goto label_40e50c;
        case 0x40e510u: goto label_40e510;
        case 0x40e514u: goto label_40e514;
        case 0x40e518u: goto label_40e518;
        case 0x40e51cu: goto label_40e51c;
        case 0x40e520u: goto label_40e520;
        case 0x40e524u: goto label_40e524;
        case 0x40e528u: goto label_40e528;
        case 0x40e52cu: goto label_40e52c;
        case 0x40e530u: goto label_40e530;
        case 0x40e534u: goto label_40e534;
        case 0x40e538u: goto label_40e538;
        case 0x40e53cu: goto label_40e53c;
        case 0x40e540u: goto label_40e540;
        case 0x40e544u: goto label_40e544;
        case 0x40e548u: goto label_40e548;
        case 0x40e54cu: goto label_40e54c;
        case 0x40e550u: goto label_40e550;
        case 0x40e554u: goto label_40e554;
        case 0x40e558u: goto label_40e558;
        case 0x40e55cu: goto label_40e55c;
        case 0x40e560u: goto label_40e560;
        case 0x40e564u: goto label_40e564;
        case 0x40e568u: goto label_40e568;
        case 0x40e56cu: goto label_40e56c;
        case 0x40e570u: goto label_40e570;
        case 0x40e574u: goto label_40e574;
        case 0x40e578u: goto label_40e578;
        case 0x40e57cu: goto label_40e57c;
        case 0x40e580u: goto label_40e580;
        case 0x40e584u: goto label_40e584;
        case 0x40e588u: goto label_40e588;
        case 0x40e58cu: goto label_40e58c;
        case 0x40e590u: goto label_40e590;
        case 0x40e594u: goto label_40e594;
        case 0x40e598u: goto label_40e598;
        case 0x40e59cu: goto label_40e59c;
        case 0x40e5a0u: goto label_40e5a0;
        case 0x40e5a4u: goto label_40e5a4;
        case 0x40e5a8u: goto label_40e5a8;
        case 0x40e5acu: goto label_40e5ac;
        case 0x40e5b0u: goto label_40e5b0;
        case 0x40e5b4u: goto label_40e5b4;
        case 0x40e5b8u: goto label_40e5b8;
        case 0x40e5bcu: goto label_40e5bc;
        case 0x40e5c0u: goto label_40e5c0;
        case 0x40e5c4u: goto label_40e5c4;
        case 0x40e5c8u: goto label_40e5c8;
        case 0x40e5ccu: goto label_40e5cc;
        case 0x40e5d0u: goto label_40e5d0;
        case 0x40e5d4u: goto label_40e5d4;
        case 0x40e5d8u: goto label_40e5d8;
        case 0x40e5dcu: goto label_40e5dc;
        case 0x40e5e0u: goto label_40e5e0;
        case 0x40e5e4u: goto label_40e5e4;
        case 0x40e5e8u: goto label_40e5e8;
        case 0x40e5ecu: goto label_40e5ec;
        case 0x40e5f0u: goto label_40e5f0;
        case 0x40e5f4u: goto label_40e5f4;
        case 0x40e5f8u: goto label_40e5f8;
        case 0x40e5fcu: goto label_40e5fc;
        case 0x40e600u: goto label_40e600;
        case 0x40e604u: goto label_40e604;
        case 0x40e608u: goto label_40e608;
        case 0x40e60cu: goto label_40e60c;
        case 0x40e610u: goto label_40e610;
        case 0x40e614u: goto label_40e614;
        case 0x40e618u: goto label_40e618;
        case 0x40e61cu: goto label_40e61c;
        case 0x40e620u: goto label_40e620;
        case 0x40e624u: goto label_40e624;
        case 0x40e628u: goto label_40e628;
        case 0x40e62cu: goto label_40e62c;
        case 0x40e630u: goto label_40e630;
        case 0x40e634u: goto label_40e634;
        case 0x40e638u: goto label_40e638;
        case 0x40e63cu: goto label_40e63c;
        case 0x40e640u: goto label_40e640;
        case 0x40e644u: goto label_40e644;
        case 0x40e648u: goto label_40e648;
        case 0x40e64cu: goto label_40e64c;
        case 0x40e650u: goto label_40e650;
        case 0x40e654u: goto label_40e654;
        case 0x40e658u: goto label_40e658;
        case 0x40e65cu: goto label_40e65c;
        case 0x40e660u: goto label_40e660;
        case 0x40e664u: goto label_40e664;
        case 0x40e668u: goto label_40e668;
        case 0x40e66cu: goto label_40e66c;
        case 0x40e670u: goto label_40e670;
        case 0x40e674u: goto label_40e674;
        case 0x40e678u: goto label_40e678;
        case 0x40e67cu: goto label_40e67c;
        case 0x40e680u: goto label_40e680;
        case 0x40e684u: goto label_40e684;
        case 0x40e688u: goto label_40e688;
        case 0x40e68cu: goto label_40e68c;
        case 0x40e690u: goto label_40e690;
        case 0x40e694u: goto label_40e694;
        case 0x40e698u: goto label_40e698;
        case 0x40e69cu: goto label_40e69c;
        case 0x40e6a0u: goto label_40e6a0;
        case 0x40e6a4u: goto label_40e6a4;
        case 0x40e6a8u: goto label_40e6a8;
        case 0x40e6acu: goto label_40e6ac;
        case 0x40e6b0u: goto label_40e6b0;
        case 0x40e6b4u: goto label_40e6b4;
        case 0x40e6b8u: goto label_40e6b8;
        case 0x40e6bcu: goto label_40e6bc;
        case 0x40e6c0u: goto label_40e6c0;
        case 0x40e6c4u: goto label_40e6c4;
        case 0x40e6c8u: goto label_40e6c8;
        case 0x40e6ccu: goto label_40e6cc;
        case 0x40e6d0u: goto label_40e6d0;
        case 0x40e6d4u: goto label_40e6d4;
        case 0x40e6d8u: goto label_40e6d8;
        case 0x40e6dcu: goto label_40e6dc;
        case 0x40e6e0u: goto label_40e6e0;
        case 0x40e6e4u: goto label_40e6e4;
        case 0x40e6e8u: goto label_40e6e8;
        case 0x40e6ecu: goto label_40e6ec;
        case 0x40e6f0u: goto label_40e6f0;
        case 0x40e6f4u: goto label_40e6f4;
        case 0x40e6f8u: goto label_40e6f8;
        case 0x40e6fcu: goto label_40e6fc;
        case 0x40e700u: goto label_40e700;
        case 0x40e704u: goto label_40e704;
        case 0x40e708u: goto label_40e708;
        case 0x40e70cu: goto label_40e70c;
        case 0x40e710u: goto label_40e710;
        case 0x40e714u: goto label_40e714;
        case 0x40e718u: goto label_40e718;
        case 0x40e71cu: goto label_40e71c;
        case 0x40e720u: goto label_40e720;
        case 0x40e724u: goto label_40e724;
        case 0x40e728u: goto label_40e728;
        case 0x40e72cu: goto label_40e72c;
        case 0x40e730u: goto label_40e730;
        case 0x40e734u: goto label_40e734;
        case 0x40e738u: goto label_40e738;
        case 0x40e73cu: goto label_40e73c;
        case 0x40e740u: goto label_40e740;
        case 0x40e744u: goto label_40e744;
        case 0x40e748u: goto label_40e748;
        case 0x40e74cu: goto label_40e74c;
        case 0x40e750u: goto label_40e750;
        case 0x40e754u: goto label_40e754;
        case 0x40e758u: goto label_40e758;
        case 0x40e75cu: goto label_40e75c;
        case 0x40e760u: goto label_40e760;
        case 0x40e764u: goto label_40e764;
        case 0x40e768u: goto label_40e768;
        case 0x40e76cu: goto label_40e76c;
        case 0x40e770u: goto label_40e770;
        case 0x40e774u: goto label_40e774;
        case 0x40e778u: goto label_40e778;
        case 0x40e77cu: goto label_40e77c;
        case 0x40e780u: goto label_40e780;
        case 0x40e784u: goto label_40e784;
        case 0x40e788u: goto label_40e788;
        case 0x40e78cu: goto label_40e78c;
        case 0x40e790u: goto label_40e790;
        case 0x40e794u: goto label_40e794;
        case 0x40e798u: goto label_40e798;
        case 0x40e79cu: goto label_40e79c;
        case 0x40e7a0u: goto label_40e7a0;
        case 0x40e7a4u: goto label_40e7a4;
        case 0x40e7a8u: goto label_40e7a8;
        case 0x40e7acu: goto label_40e7ac;
        case 0x40e7b0u: goto label_40e7b0;
        case 0x40e7b4u: goto label_40e7b4;
        case 0x40e7b8u: goto label_40e7b8;
        case 0x40e7bcu: goto label_40e7bc;
        case 0x40e7c0u: goto label_40e7c0;
        case 0x40e7c4u: goto label_40e7c4;
        case 0x40e7c8u: goto label_40e7c8;
        case 0x40e7ccu: goto label_40e7cc;
        case 0x40e7d0u: goto label_40e7d0;
        case 0x40e7d4u: goto label_40e7d4;
        case 0x40e7d8u: goto label_40e7d8;
        case 0x40e7dcu: goto label_40e7dc;
        case 0x40e7e0u: goto label_40e7e0;
        case 0x40e7e4u: goto label_40e7e4;
        case 0x40e7e8u: goto label_40e7e8;
        case 0x40e7ecu: goto label_40e7ec;
        case 0x40e7f0u: goto label_40e7f0;
        case 0x40e7f4u: goto label_40e7f4;
        case 0x40e7f8u: goto label_40e7f8;
        case 0x40e7fcu: goto label_40e7fc;
        case 0x40e800u: goto label_40e800;
        case 0x40e804u: goto label_40e804;
        case 0x40e808u: goto label_40e808;
        case 0x40e80cu: goto label_40e80c;
        case 0x40e810u: goto label_40e810;
        case 0x40e814u: goto label_40e814;
        case 0x40e818u: goto label_40e818;
        case 0x40e81cu: goto label_40e81c;
        case 0x40e820u: goto label_40e820;
        case 0x40e824u: goto label_40e824;
        case 0x40e828u: goto label_40e828;
        case 0x40e82cu: goto label_40e82c;
        case 0x40e830u: goto label_40e830;
        case 0x40e834u: goto label_40e834;
        case 0x40e838u: goto label_40e838;
        case 0x40e83cu: goto label_40e83c;
        case 0x40e840u: goto label_40e840;
        case 0x40e844u: goto label_40e844;
        case 0x40e848u: goto label_40e848;
        case 0x40e84cu: goto label_40e84c;
        case 0x40e850u: goto label_40e850;
        case 0x40e854u: goto label_40e854;
        case 0x40e858u: goto label_40e858;
        case 0x40e85cu: goto label_40e85c;
        case 0x40e860u: goto label_40e860;
        case 0x40e864u: goto label_40e864;
        case 0x40e868u: goto label_40e868;
        case 0x40e86cu: goto label_40e86c;
        case 0x40e870u: goto label_40e870;
        case 0x40e874u: goto label_40e874;
        case 0x40e878u: goto label_40e878;
        case 0x40e87cu: goto label_40e87c;
        case 0x40e880u: goto label_40e880;
        case 0x40e884u: goto label_40e884;
        case 0x40e888u: goto label_40e888;
        case 0x40e88cu: goto label_40e88c;
        case 0x40e890u: goto label_40e890;
        case 0x40e894u: goto label_40e894;
        case 0x40e898u: goto label_40e898;
        case 0x40e89cu: goto label_40e89c;
        case 0x40e8a0u: goto label_40e8a0;
        case 0x40e8a4u: goto label_40e8a4;
        case 0x40e8a8u: goto label_40e8a8;
        case 0x40e8acu: goto label_40e8ac;
        case 0x40e8b0u: goto label_40e8b0;
        case 0x40e8b4u: goto label_40e8b4;
        case 0x40e8b8u: goto label_40e8b8;
        case 0x40e8bcu: goto label_40e8bc;
        case 0x40e8c0u: goto label_40e8c0;
        case 0x40e8c4u: goto label_40e8c4;
        case 0x40e8c8u: goto label_40e8c8;
        case 0x40e8ccu: goto label_40e8cc;
        case 0x40e8d0u: goto label_40e8d0;
        case 0x40e8d4u: goto label_40e8d4;
        case 0x40e8d8u: goto label_40e8d8;
        case 0x40e8dcu: goto label_40e8dc;
        case 0x40e8e0u: goto label_40e8e0;
        case 0x40e8e4u: goto label_40e8e4;
        case 0x40e8e8u: goto label_40e8e8;
        case 0x40e8ecu: goto label_40e8ec;
        case 0x40e8f0u: goto label_40e8f0;
        case 0x40e8f4u: goto label_40e8f4;
        case 0x40e8f8u: goto label_40e8f8;
        case 0x40e8fcu: goto label_40e8fc;
        case 0x40e900u: goto label_40e900;
        case 0x40e904u: goto label_40e904;
        case 0x40e908u: goto label_40e908;
        case 0x40e90cu: goto label_40e90c;
        case 0x40e910u: goto label_40e910;
        case 0x40e914u: goto label_40e914;
        case 0x40e918u: goto label_40e918;
        case 0x40e91cu: goto label_40e91c;
        case 0x40e920u: goto label_40e920;
        case 0x40e924u: goto label_40e924;
        case 0x40e928u: goto label_40e928;
        case 0x40e92cu: goto label_40e92c;
        case 0x40e930u: goto label_40e930;
        case 0x40e934u: goto label_40e934;
        case 0x40e938u: goto label_40e938;
        case 0x40e93cu: goto label_40e93c;
        case 0x40e940u: goto label_40e940;
        case 0x40e944u: goto label_40e944;
        case 0x40e948u: goto label_40e948;
        case 0x40e94cu: goto label_40e94c;
        case 0x40e950u: goto label_40e950;
        case 0x40e954u: goto label_40e954;
        case 0x40e958u: goto label_40e958;
        case 0x40e95cu: goto label_40e95c;
        case 0x40e960u: goto label_40e960;
        case 0x40e964u: goto label_40e964;
        case 0x40e968u: goto label_40e968;
        case 0x40e96cu: goto label_40e96c;
        case 0x40e970u: goto label_40e970;
        case 0x40e974u: goto label_40e974;
        case 0x40e978u: goto label_40e978;
        case 0x40e97cu: goto label_40e97c;
        case 0x40e980u: goto label_40e980;
        case 0x40e984u: goto label_40e984;
        case 0x40e988u: goto label_40e988;
        case 0x40e98cu: goto label_40e98c;
        case 0x40e990u: goto label_40e990;
        case 0x40e994u: goto label_40e994;
        case 0x40e998u: goto label_40e998;
        case 0x40e99cu: goto label_40e99c;
        case 0x40e9a0u: goto label_40e9a0;
        case 0x40e9a4u: goto label_40e9a4;
        case 0x40e9a8u: goto label_40e9a8;
        case 0x40e9acu: goto label_40e9ac;
        case 0x40e9b0u: goto label_40e9b0;
        case 0x40e9b4u: goto label_40e9b4;
        case 0x40e9b8u: goto label_40e9b8;
        case 0x40e9bcu: goto label_40e9bc;
        case 0x40e9c0u: goto label_40e9c0;
        case 0x40e9c4u: goto label_40e9c4;
        case 0x40e9c8u: goto label_40e9c8;
        case 0x40e9ccu: goto label_40e9cc;
        case 0x40e9d0u: goto label_40e9d0;
        case 0x40e9d4u: goto label_40e9d4;
        case 0x40e9d8u: goto label_40e9d8;
        case 0x40e9dcu: goto label_40e9dc;
        case 0x40e9e0u: goto label_40e9e0;
        case 0x40e9e4u: goto label_40e9e4;
        case 0x40e9e8u: goto label_40e9e8;
        case 0x40e9ecu: goto label_40e9ec;
        case 0x40e9f0u: goto label_40e9f0;
        case 0x40e9f4u: goto label_40e9f4;
        case 0x40e9f8u: goto label_40e9f8;
        case 0x40e9fcu: goto label_40e9fc;
        case 0x40ea00u: goto label_40ea00;
        case 0x40ea04u: goto label_40ea04;
        case 0x40ea08u: goto label_40ea08;
        case 0x40ea0cu: goto label_40ea0c;
        case 0x40ea10u: goto label_40ea10;
        case 0x40ea14u: goto label_40ea14;
        case 0x40ea18u: goto label_40ea18;
        case 0x40ea1cu: goto label_40ea1c;
        case 0x40ea20u: goto label_40ea20;
        case 0x40ea24u: goto label_40ea24;
        case 0x40ea28u: goto label_40ea28;
        case 0x40ea2cu: goto label_40ea2c;
        case 0x40ea30u: goto label_40ea30;
        case 0x40ea34u: goto label_40ea34;
        case 0x40ea38u: goto label_40ea38;
        case 0x40ea3cu: goto label_40ea3c;
        case 0x40ea40u: goto label_40ea40;
        case 0x40ea44u: goto label_40ea44;
        case 0x40ea48u: goto label_40ea48;
        case 0x40ea4cu: goto label_40ea4c;
        case 0x40ea50u: goto label_40ea50;
        case 0x40ea54u: goto label_40ea54;
        case 0x40ea58u: goto label_40ea58;
        case 0x40ea5cu: goto label_40ea5c;
        case 0x40ea60u: goto label_40ea60;
        case 0x40ea64u: goto label_40ea64;
        case 0x40ea68u: goto label_40ea68;
        case 0x40ea6cu: goto label_40ea6c;
        case 0x40ea70u: goto label_40ea70;
        case 0x40ea74u: goto label_40ea74;
        case 0x40ea78u: goto label_40ea78;
        case 0x40ea7cu: goto label_40ea7c;
        case 0x40ea80u: goto label_40ea80;
        case 0x40ea84u: goto label_40ea84;
        case 0x40ea88u: goto label_40ea88;
        case 0x40ea8cu: goto label_40ea8c;
        case 0x40ea90u: goto label_40ea90;
        case 0x40ea94u: goto label_40ea94;
        case 0x40ea98u: goto label_40ea98;
        case 0x40ea9cu: goto label_40ea9c;
        case 0x40eaa0u: goto label_40eaa0;
        case 0x40eaa4u: goto label_40eaa4;
        case 0x40eaa8u: goto label_40eaa8;
        case 0x40eaacu: goto label_40eaac;
        case 0x40eab0u: goto label_40eab0;
        case 0x40eab4u: goto label_40eab4;
        case 0x40eab8u: goto label_40eab8;
        case 0x40eabcu: goto label_40eabc;
        case 0x40eac0u: goto label_40eac0;
        case 0x40eac4u: goto label_40eac4;
        case 0x40eac8u: goto label_40eac8;
        case 0x40eaccu: goto label_40eacc;
        case 0x40ead0u: goto label_40ead0;
        case 0x40ead4u: goto label_40ead4;
        case 0x40ead8u: goto label_40ead8;
        case 0x40eadcu: goto label_40eadc;
        case 0x40eae0u: goto label_40eae0;
        case 0x40eae4u: goto label_40eae4;
        case 0x40eae8u: goto label_40eae8;
        case 0x40eaecu: goto label_40eaec;
        case 0x40eaf0u: goto label_40eaf0;
        case 0x40eaf4u: goto label_40eaf4;
        case 0x40eaf8u: goto label_40eaf8;
        case 0x40eafcu: goto label_40eafc;
        case 0x40eb00u: goto label_40eb00;
        case 0x40eb04u: goto label_40eb04;
        case 0x40eb08u: goto label_40eb08;
        case 0x40eb0cu: goto label_40eb0c;
        case 0x40eb10u: goto label_40eb10;
        case 0x40eb14u: goto label_40eb14;
        case 0x40eb18u: goto label_40eb18;
        case 0x40eb1cu: goto label_40eb1c;
        case 0x40eb20u: goto label_40eb20;
        case 0x40eb24u: goto label_40eb24;
        case 0x40eb28u: goto label_40eb28;
        case 0x40eb2cu: goto label_40eb2c;
        case 0x40eb30u: goto label_40eb30;
        case 0x40eb34u: goto label_40eb34;
        case 0x40eb38u: goto label_40eb38;
        case 0x40eb3cu: goto label_40eb3c;
        case 0x40eb40u: goto label_40eb40;
        case 0x40eb44u: goto label_40eb44;
        case 0x40eb48u: goto label_40eb48;
        case 0x40eb4cu: goto label_40eb4c;
        case 0x40eb50u: goto label_40eb50;
        case 0x40eb54u: goto label_40eb54;
        case 0x40eb58u: goto label_40eb58;
        case 0x40eb5cu: goto label_40eb5c;
        default: break;
    }

    ctx->pc = 0x40e1e0u;

label_40e1e0:
    // 0x40e1e0: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x40e1e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_40e1e4:
    // 0x40e1e4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x40e1e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_40e1e8:
    // 0x40e1e8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x40e1e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_40e1ec:
    // 0x40e1ec: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x40e1ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_40e1f0:
    // 0x40e1f0: 0x140f02d  daddu       $fp, $t2, $zero
    ctx->pc = 0x40e1f0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_40e1f4:
    // 0x40e1f4: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x40e1f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_40e1f8:
    // 0x40e1f8: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x40e1f8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_40e1fc:
    // 0x40e1fc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x40e1fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_40e200:
    // 0x40e200: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x40e200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_40e204:
    // 0x40e204: 0x160a82d  daddu       $s5, $t3, $zero
    ctx->pc = 0x40e204u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_40e208:
    // 0x40e208: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x40e208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_40e20c:
    // 0x40e20c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x40e20cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_40e210:
    // 0x40e210: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x40e210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_40e214:
    // 0x40e214: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x40e214u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_40e218:
    // 0x40e218: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x40e218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_40e21c:
    // 0x40e21c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x40e21cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_40e220:
    // 0x40e220: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x40e220u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_40e224:
    // 0x40e224: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x40e224u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_40e228:
    // 0x40e228: 0x90830090  lbu         $v1, 0x90($a0)
    ctx->pc = 0x40e228u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 144)));
label_40e22c:
    // 0x40e22c: 0x10600088  beqz        $v1, . + 4 + (0x88 << 2)
label_40e230:
    if (ctx->pc == 0x40E230u) {
        ctx->pc = 0x40E230u;
            // 0x40e230: 0x120802d  daddu       $s0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x40E234u;
        goto label_40e234;
    }
    ctx->pc = 0x40E22Cu;
    {
        const bool branch_taken_0x40e22c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x40E230u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40E22Cu;
            // 0x40e230: 0x120802d  daddu       $s0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40e22c) {
            ctx->pc = 0x40E450u;
            goto label_40e450;
        }
    }
    ctx->pc = 0x40E234u;
label_40e234:
    // 0x40e234: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40e234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_40e238:
    // 0x40e238: 0xc04f278  jal         func_13C9E0
label_40e23c:
    if (ctx->pc == 0x40E23Cu) {
        ctx->pc = 0x40E23Cu;
            // 0x40e23c: 0x26850020  addiu       $a1, $s4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
        ctx->pc = 0x40E240u;
        goto label_40e240;
    }
    ctx->pc = 0x40E238u;
    SET_GPR_U32(ctx, 31, 0x40E240u);
    ctx->pc = 0x40E23Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40E238u;
            // 0x40e23c: 0x26850020  addiu       $a1, $s4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40E240u; }
        if (ctx->pc != 0x40E240u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40E240u; }
        if (ctx->pc != 0x40E240u) { return; }
    }
    ctx->pc = 0x40E240u;
label_40e240:
    // 0x40e240: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40e240u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_40e244:
    // 0x40e244: 0xc04ce80  jal         func_133A00
label_40e248:
    if (ctx->pc == 0x40E248u) {
        ctx->pc = 0x40E248u;
            // 0x40e248: 0x26850010  addiu       $a1, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->pc = 0x40E24Cu;
        goto label_40e24c;
    }
    ctx->pc = 0x40E244u;
    SET_GPR_U32(ctx, 31, 0x40E24Cu);
    ctx->pc = 0x40E248u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40E244u;
            // 0x40e248: 0x26850010  addiu       $a1, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40E24Cu; }
        if (ctx->pc != 0x40E24Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40E24Cu; }
        if (ctx->pc != 0x40E24Cu) { return; }
    }
    ctx->pc = 0x40E24Cu;
label_40e24c:
    // 0x40e24c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x40e24cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_40e250:
    // 0x40e250: 0x9286004c  lbu         $a2, 0x4C($s4)
    ctx->pc = 0x40e250u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 76)));
label_40e254:
    // 0x40e254: 0x8c440ea4  lw          $a0, 0xEA4($v0)
    ctx->pc = 0x40e254u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
label_40e258:
    // 0x40e258: 0x8e760000  lw          $s6, 0x0($s3)
    ctx->pc = 0x40e258u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_40e25c:
    // 0x40e25c: 0xc07698c  jal         func_1DA630
label_40e260:
    if (ctx->pc == 0x40E260u) {
        ctx->pc = 0x40E260u;
            // 0x40e260: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x40E264u;
        goto label_40e264;
    }
    ctx->pc = 0x40E25Cu;
    SET_GPR_U32(ctx, 31, 0x40E264u);
    ctx->pc = 0x40E260u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40E25Cu;
            // 0x40e260: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA630u;
    if (runtime->hasFunction(0x1DA630u)) {
        auto targetFn = runtime->lookupFunction(0x1DA630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40E264u; }
        if (ctx->pc != 0x40E264u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA630_0x1da630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40E264u; }
        if (ctx->pc != 0x40E264u) { return; }
    }
    ctx->pc = 0x40E264u;
label_40e264:
    // 0x40e264: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x40e264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_40e268:
    // 0x40e268: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_40e26c:
    if (ctx->pc == 0x40E26Cu) {
        ctx->pc = 0x40E270u;
        goto label_40e270;
    }
    ctx->pc = 0x40E268u;
    {
        const bool branch_taken_0x40e268 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x40e268) {
            ctx->pc = 0x40E278u;
            goto label_40e278;
        }
    }
    ctx->pc = 0x40E270u;
label_40e270:
    // 0x40e270: 0x10000033  b           . + 4 + (0x33 << 2)
label_40e274:
    if (ctx->pc == 0x40E274u) {
        ctx->pc = 0x40E274u;
            // 0x40e274: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x40E278u;
        goto label_40e278;
    }
    ctx->pc = 0x40E270u;
    {
        const bool branch_taken_0x40e270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40E274u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40E270u;
            // 0x40e274: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40e270) {
            ctx->pc = 0x40E340u;
            goto label_40e340;
        }
    }
    ctx->pc = 0x40E278u;
label_40e278:
    // 0x40e278: 0xc0576f4  jal         func_15DBD0
label_40e27c:
    if (ctx->pc == 0x40E27Cu) {
        ctx->pc = 0x40E280u;
        goto label_40e280;
    }
    ctx->pc = 0x40E278u;
    SET_GPR_U32(ctx, 31, 0x40E280u);
    ctx->pc = 0x15DBD0u;
    if (runtime->hasFunction(0x15DBD0u)) {
        auto targetFn = runtime->lookupFunction(0x15DBD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40E280u; }
        if (ctx->pc != 0x40E280u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015DBD0_0x15dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40E280u; }
        if (ctx->pc != 0x40E280u) { return; }
    }
    ctx->pc = 0x40E280u;
label_40e280:
    // 0x40e280: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x40e280u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_40e284:
    // 0x40e284: 0xc076984  jal         func_1DA610
label_40e288:
    if (ctx->pc == 0x40E288u) {
        ctx->pc = 0x40E288u;
            // 0x40e288: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x40E28Cu;
        goto label_40e28c;
    }
    ctx->pc = 0x40E284u;
    SET_GPR_U32(ctx, 31, 0x40E28Cu);
    ctx->pc = 0x40E288u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40E284u;
            // 0x40e288: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA610u;
    if (runtime->hasFunction(0x1DA610u)) {
        auto targetFn = runtime->lookupFunction(0x1DA610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40E28Cu; }
        if (ctx->pc != 0x40E28Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA610_0x1da610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40E28Cu; }
        if (ctx->pc != 0x40E28Cu) { return; }
    }
    ctx->pc = 0x40E28Cu;
label_40e28c:
    // 0x40e28c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x40e28cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_40e290:
    // 0x40e290: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x40e290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_40e294:
    // 0x40e294: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x40e294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_40e298:
    // 0x40e298: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x40e298u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_40e29c:
    // 0x40e29c: 0xc442fc80  lwc1        $f2, -0x380($v0)
    ctx->pc = 0x40e29cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294966400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_40e2a0:
    // 0x40e2a0: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x40e2a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_40e2a4:
    // 0x40e2a4: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x40e2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_40e2a8:
    // 0x40e2a8: 0xc441fc88  lwc1        $f1, -0x378($v0)
    ctx->pc = 0x40e2a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294966408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_40e2ac:
    // 0x40e2ac: 0xe7a200e0  swc1        $f2, 0xE0($sp)
    ctx->pc = 0x40e2acu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_40e2b0:
    // 0x40e2b0: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x40e2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_40e2b4:
    // 0x40e2b4: 0xc440fc8c  lwc1        $f0, -0x374($v0)
    ctx->pc = 0x40e2b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294966412)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_40e2b8:
    // 0x40e2b8: 0xe7a100e8  swc1        $f1, 0xE8($sp)
    ctx->pc = 0x40e2b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_40e2bc:
    // 0x40e2bc: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x40e2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_40e2c0:
    // 0x40e2c0: 0x8c42fc84  lw          $v0, -0x37C($v0)
    ctx->pc = 0x40e2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294966404)));
label_40e2c4:
    // 0x40e2c4: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x40e2c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
label_40e2c8:
    // 0x40e2c8: 0xafa200e4  sw          $v0, 0xE4($sp)
    ctx->pc = 0x40e2c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 2));
label_40e2cc:
    // 0x40e2cc: 0xc6c00004  lwc1        $f0, 0x4($s6)
    ctx->pc = 0x40e2ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_40e2d0:
    // 0x40e2d0: 0xc04cca0  jal         func_133280
label_40e2d4:
    if (ctx->pc == 0x40E2D4u) {
        ctx->pc = 0x40E2D4u;
            // 0x40e2d4: 0xe7a000e4  swc1        $f0, 0xE4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
        ctx->pc = 0x40E2D8u;
        goto label_40e2d8;
    }
    ctx->pc = 0x40E2D0u;
    SET_GPR_U32(ctx, 31, 0x40E2D8u);
    ctx->pc = 0x40E2D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40E2D0u;
            // 0x40e2d4: 0xe7a000e4  swc1        $f0, 0xE4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40E2D8u; }
        if (ctx->pc != 0x40E2D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40E2D8u; }
        if (ctx->pc != 0x40E2D8u) { return; }
    }
    ctx->pc = 0x40E2D8u;
label_40e2d8:
    // 0x40e2d8: 0xc076980  jal         func_1DA600
label_40e2dc:
    if (ctx->pc == 0x40E2DCu) {
        ctx->pc = 0x40E2DCu;
            // 0x40e2dc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x40E2E0u;
        goto label_40e2e0;
    }
    ctx->pc = 0x40E2D8u;
    SET_GPR_U32(ctx, 31, 0x40E2E0u);
    ctx->pc = 0x40E2DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40E2D8u;
            // 0x40e2dc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA600u;
    if (runtime->hasFunction(0x1DA600u)) {
        auto targetFn = runtime->lookupFunction(0x1DA600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40E2E0u; }
        if (ctx->pc != 0x40E2E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA600_0x1da600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40E2E0u; }
        if (ctx->pc != 0x40E2E0u) { return; }
    }
    ctx->pc = 0x40E2E0u;
label_40e2e0:
    // 0x40e2e0: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x40e2e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_40e2e4:
    // 0x40e2e4: 0xc04cc34  jal         func_1330D0
label_40e2e8:
    if (ctx->pc == 0x40E2E8u) {
        ctx->pc = 0x40E2E8u;
            // 0x40e2e8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x40E2ECu;
        goto label_40e2ec;
    }
    ctx->pc = 0x40E2E4u;
    SET_GPR_U32(ctx, 31, 0x40E2ECu);
    ctx->pc = 0x40E2E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40E2E4u;
            // 0x40e2e8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330D0u;
    if (runtime->hasFunction(0x1330D0u)) {
        auto targetFn = runtime->lookupFunction(0x1330D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40E2ECu; }
        if (ctx->pc != 0x40E2ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330D0_0x1330d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40E2ECu; }
        if (ctx->pc != 0x40E2ECu) { return; }
    }
    ctx->pc = 0x40E2ECu;
label_40e2ec:
    // 0x40e2ec: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x40e2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_40e2f0:
    // 0x40e2f0: 0xc461bc28  lwc1        $f1, -0x43D8($v1)
    ctx->pc = 0x40e2f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294949928)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_40e2f4:
    // 0x40e2f4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x40e2f4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_40e2f8:
    // 0x40e2f8: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_40e2fc:
    if (ctx->pc == 0x40E2FCu) {
        ctx->pc = 0x40E2FCu;
            // 0x40e2fc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x40E300u;
        goto label_40e300;
    }
    ctx->pc = 0x40E2F8u;
    {
        const bool branch_taken_0x40e2f8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x40e2f8) {
            ctx->pc = 0x40E2FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x40E2F8u;
            // 0x40e2fc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x40E308u;
            goto label_40e308;
        }
    }
    ctx->pc = 0x40E300u;
label_40e300:
    // 0x40e300: 0x1000000f  b           . + 4 + (0xF << 2)
label_40e304:
    if (ctx->pc == 0x40E304u) {
        ctx->pc = 0x40E304u;
            // 0x40e304: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x40E308u;
        goto label_40e308;
    }
    ctx->pc = 0x40E300u;
    {
        const bool branch_taken_0x40e300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40E304u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40E300u;
            // 0x40e304: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40e300) {
            ctx->pc = 0x40E340u;
            goto label_40e340;
        }
    }
    ctx->pc = 0x40E308u;
label_40e308:
    // 0x40e308: 0xc07697c  jal         func_1DA5F0
label_40e30c:
    if (ctx->pc == 0x40E30Cu) {
        ctx->pc = 0x40E310u;
        goto label_40e310;
    }
    ctx->pc = 0x40E308u;
    SET_GPR_U32(ctx, 31, 0x40E310u);
    ctx->pc = 0x1DA5F0u;
    if (runtime->hasFunction(0x1DA5F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DA5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40E310u; }
        if (ctx->pc != 0x40E310u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA5F0_0x1da5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40E310u; }
        if (ctx->pc != 0x40E310u) { return; }
    }
    ctx->pc = 0x40E310u;
label_40e310:
    // 0x40e310: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x40e310u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_40e314:
    // 0x40e314: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x40e314u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_40e318:
    // 0x40e318: 0xc04cd60  jal         func_133580
label_40e31c:
    if (ctx->pc == 0x40E31Cu) {
        ctx->pc = 0x40E31Cu;
            // 0x40e31c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x40E320u;
        goto label_40e320;
    }
    ctx->pc = 0x40E318u;
    SET_GPR_U32(ctx, 31, 0x40E320u);
    ctx->pc = 0x40E31Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40E318u;
            // 0x40e31c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40E320u; }
        if (ctx->pc != 0x40E320u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40E320u; }
        if (ctx->pc != 0x40E320u) { return; }
    }
    ctx->pc = 0x40E320u;
label_40e320:
    // 0x40e320: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x40e320u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_40e324:
    // 0x40e324: 0xc04c650  jal         func_131940
label_40e328:
    if (ctx->pc == 0x40E328u) {
        ctx->pc = 0x40E328u;
            // 0x40e328: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x40E32Cu;
        goto label_40e32c;
    }
    ctx->pc = 0x40E324u;
    SET_GPR_U32(ctx, 31, 0x40E32Cu);
    ctx->pc = 0x40E328u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40E324u;
            // 0x40e328: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131940u;
    if (runtime->hasFunction(0x131940u)) {
        auto targetFn = runtime->lookupFunction(0x131940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40E32Cu; }
        if (ctx->pc != 0x40E32Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131940_0x131940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40E32Cu; }
        if (ctx->pc != 0x40E32Cu) { return; }
    }
    ctx->pc = 0x40E32Cu;
label_40e32c:
    // 0x40e32c: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x40e32cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_40e330:
    // 0x40e330: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x40e330u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_40e334:
    // 0x40e334: 0x2463e320  addiu       $v1, $v1, -0x1CE0
    ctx->pc = 0x40e334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959904));
label_40e338:
    // 0x40e338: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x40e338u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_40e33c:
    // 0x40e33c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x40e33cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_40e340:
    // 0x40e340: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x40e340u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_40e344:
    // 0x40e344: 0x10200042  beqz        $at, . + 4 + (0x42 << 2)
label_40e348:
    if (ctx->pc == 0x40E348u) {
        ctx->pc = 0x40E348u;
            // 0x40e348: 0xae830044  sw          $v1, 0x44($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 68), GPR_U32(ctx, 3));
        ctx->pc = 0x40E34Cu;
        goto label_40e34c;
    }
    ctx->pc = 0x40E344u;
    {
        const bool branch_taken_0x40e344 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x40E348u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40E344u;
            // 0x40e348: 0xae830044  sw          $v1, 0x44($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 68), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40e344) {
            ctx->pc = 0x40E450u;
            goto label_40e450;
        }
    }
    ctx->pc = 0x40E34Cu;
label_40e34c:
    // 0x40e34c: 0x8e8200ac  lw          $v0, 0xAC($s4)
    ctx->pc = 0x40e34cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 172)));
label_40e350:
    // 0x40e350: 0x5440001c  bnel        $v0, $zero, . + 4 + (0x1C << 2)
label_40e354:
    if (ctx->pc == 0x40E354u) {
        ctx->pc = 0x40E354u;
            // 0x40e354: 0xc68c00e4  lwc1        $f12, 0xE4($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x40E358u;
        goto label_40e358;
    }
    ctx->pc = 0x40E350u;
    {
        const bool branch_taken_0x40e350 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x40e350) {
            ctx->pc = 0x40E354u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x40E350u;
            // 0x40e354: 0xc68c00e4  lwc1        $f12, 0xE4($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x40E3C4u;
            goto label_40e3c4;
        }
    }
    ctx->pc = 0x40E358u;
label_40e358:
    // 0x40e358: 0x1e10c0  sll         $v0, $fp, 3
    ctx->pc = 0x40e358u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 3));
label_40e35c:
    // 0x40e35c: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_40e360:
    if (ctx->pc == 0x40E360u) {
        ctx->pc = 0x40E360u;
            // 0x40e360: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x40E364u;
        goto label_40e364;
    }
    ctx->pc = 0x40E35Cu;
    {
        const bool branch_taken_0x40e35c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x40e35c) {
            ctx->pc = 0x40E360u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x40E35Cu;
            // 0x40e360: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x40E370u;
            goto label_40e370;
        }
    }
    ctx->pc = 0x40E364u;
label_40e364:
    // 0x40e364: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x40e364u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_40e368:
    // 0x40e368: 0x10000007  b           . + 4 + (0x7 << 2)
label_40e36c:
    if (ctx->pc == 0x40E36Cu) {
        ctx->pc = 0x40E36Cu;
            // 0x40e36c: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x40E370u;
        goto label_40e370;
    }
    ctx->pc = 0x40E368u;
    {
        const bool branch_taken_0x40e368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40E36Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40E368u;
            // 0x40e36c: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x40e368) {
            ctx->pc = 0x40E388u;
            goto label_40e388;
        }
    }
    ctx->pc = 0x40E370u;
label_40e370:
    // 0x40e370: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x40e370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_40e374:
    // 0x40e374: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x40e374u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_40e378:
    // 0x40e378: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x40e378u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_40e37c:
    // 0x40e37c: 0x0  nop
    ctx->pc = 0x40e37cu;
    // NOP
label_40e380:
    // 0x40e380: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x40e380u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_40e384:
    // 0x40e384: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x40e384u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_40e388:
    // 0x40e388: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x40e388u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
label_40e38c:
    // 0x40e38c: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x40e38cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_40e390:
    // 0x40e390: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x40e390u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_40e394:
    // 0x40e394: 0xc0477a8  jal         func_11DEA0
label_40e398:
    if (ctx->pc == 0x40E398u) {
        ctx->pc = 0x40E398u;
            // 0x40e398: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x40E39Cu;
        goto label_40e39c;
    }
    ctx->pc = 0x40E394u;
    SET_GPR_U32(ctx, 31, 0x40E39Cu);
    ctx->pc = 0x40E398u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40E394u;
            // 0x40e398: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DEA0u;
    if (runtime->hasFunction(0x11DEA0u)) {
        auto targetFn = runtime->lookupFunction(0x11DEA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40E39Cu; }
        if (ctx->pc != 0x40E39Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DEA0_0x11dea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40E39Cu; }
        if (ctx->pc != 0x40E39Cu) { return; }
    }
    ctx->pc = 0x40E39Cu;
label_40e39c:
    // 0x40e39c: 0xc6020034  lwc1        $f2, 0x34($s0)
    ctx->pc = 0x40e39cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_40e3a0:
    // 0x40e3a0: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x40e3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
label_40e3a4:
    // 0x40e3a4: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x40e3a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_40e3a8:
    // 0x40e3a8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x40e3a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_40e3ac:
    // 0x40e3ac: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x40e3acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_40e3b0:
    // 0x40e3b0: 0x0  nop
    ctx->pc = 0x40e3b0u;
    // NOP
label_40e3b4:
    // 0x40e3b4: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x40e3b4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_40e3b8:
    // 0x40e3b8: 0x4600181c  madd.s      $f0, $f3, $f0
    ctx->pc = 0x40e3b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
label_40e3bc:
    // 0x40e3bc: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x40e3bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
label_40e3c0:
    // 0x40e3c0: 0xc68c00e4  lwc1        $f12, 0xE4($s4)
    ctx->pc = 0x40e3c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_40e3c4:
    // 0x40e3c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40e3c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_40e3c8:
    // 0x40e3c8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x40e3c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_40e3cc:
    // 0x40e3cc: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x40e3ccu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_40e3d0:
    // 0x40e3d0: 0xc04ce50  jal         func_133940
label_40e3d4:
    if (ctx->pc == 0x40E3D4u) {
        ctx->pc = 0x40E3D4u;
            // 0x40e3d4: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x40E3D8u;
        goto label_40e3d8;
    }
    ctx->pc = 0x40E3D0u;
    SET_GPR_U32(ctx, 31, 0x40E3D8u);
    ctx->pc = 0x40E3D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40E3D0u;
            // 0x40e3d4: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133940u;
    if (runtime->hasFunction(0x133940u)) {
        auto targetFn = runtime->lookupFunction(0x133940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40E3D8u; }
        if (ctx->pc != 0x40E3D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133940_0x133940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40E3D8u; }
        if (ctx->pc != 0x40E3D8u) { return; }
    }
    ctx->pc = 0x40E3D8u;
label_40e3d8:
    // 0x40e3d8: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x40e3d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_40e3dc:
    // 0x40e3dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40e3dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_40e3e0:
    // 0x40e3e0: 0xc04cd60  jal         func_133580
label_40e3e4:
    if (ctx->pc == 0x40E3E4u) {
        ctx->pc = 0x40E3E4u;
            // 0x40e3e4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x40E3E8u;
        goto label_40e3e8;
    }
    ctx->pc = 0x40E3E0u;
    SET_GPR_U32(ctx, 31, 0x40E3E8u);
    ctx->pc = 0x40E3E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40E3E0u;
            // 0x40e3e4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40E3E8u; }
        if (ctx->pc != 0x40E3E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40E3E8u; }
        if (ctx->pc != 0x40E3E8u) { return; }
    }
    ctx->pc = 0x40E3E8u;
label_40e3e8:
    // 0x40e3e8: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x40e3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_40e3ec:
    // 0x40e3ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40e3ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_40e3f0:
    // 0x40e3f0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x40e3f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_40e3f4:
    // 0x40e3f4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x40e3f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_40e3f8:
    // 0x40e3f8: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x40e3f8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_40e3fc:
    // 0x40e3fc: 0xc04ce50  jal         func_133940
label_40e400:
    if (ctx->pc == 0x40E400u) {
        ctx->pc = 0x40E400u;
            // 0x40e400: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x40E404u;
        goto label_40e404;
    }
    ctx->pc = 0x40E3FCu;
    SET_GPR_U32(ctx, 31, 0x40E404u);
    ctx->pc = 0x40E400u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40E3FCu;
            // 0x40e400: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133940u;
    if (runtime->hasFunction(0x133940u)) {
        auto targetFn = runtime->lookupFunction(0x133940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40E404u; }
        if (ctx->pc != 0x40E404u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133940_0x133940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40E404u; }
        if (ctx->pc != 0x40E404u) { return; }
    }
    ctx->pc = 0x40E404u;
label_40e404:
    // 0x40e404: 0x8e660010  lw          $a2, 0x10($s3)
    ctx->pc = 0x40e404u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_40e408:
    // 0x40e408: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x40e408u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_40e40c:
    // 0x40e40c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x40e40cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_40e410:
    // 0x40e410: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x40e410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_40e414:
    // 0x40e414: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x40e414u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_40e418:
    // 0x40e418: 0x2508e350  addiu       $t0, $t0, -0x1CB0
    ctx->pc = 0x40e418u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959952));
label_40e41c:
    // 0x40e41c: 0xc04cfcc  jal         func_133F30
label_40e420:
    if (ctx->pc == 0x40E420u) {
        ctx->pc = 0x40E420u;
            // 0x40e420: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x40E424u;
        goto label_40e424;
    }
    ctx->pc = 0x40E41Cu;
    SET_GPR_U32(ctx, 31, 0x40E424u);
    ctx->pc = 0x40E420u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40E41Cu;
            // 0x40e420: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133F30u;
    if (runtime->hasFunction(0x133F30u)) {
        auto targetFn = runtime->lookupFunction(0x133F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40E424u; }
        if (ctx->pc != 0x40E424u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133F30_0x133f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40E424u; }
        if (ctx->pc != 0x40E424u) { return; }
    }
    ctx->pc = 0x40E424u;
label_40e424:
    // 0x40e424: 0x8e640010  lw          $a0, 0x10($s3)
    ctx->pc = 0x40e424u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_40e428:
    // 0x40e428: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x40e428u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_40e42c:
    // 0x40e42c: 0x8e660014  lw          $a2, 0x14($s3)
    ctx->pc = 0x40e42cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_40e430:
    // 0x40e430: 0xc054bbc  jal         func_152EF0
label_40e434:
    if (ctx->pc == 0x40E434u) {
        ctx->pc = 0x40E434u;
            // 0x40e434: 0xc68c00d8  lwc1        $f12, 0xD8($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x40E438u;
        goto label_40e438;
    }
    ctx->pc = 0x40E430u;
    SET_GPR_U32(ctx, 31, 0x40E438u);
    ctx->pc = 0x40E434u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40E430u;
            // 0x40e434: 0xc68c00d8  lwc1        $f12, 0xD8($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x152EF0u;
    if (runtime->hasFunction(0x152EF0u)) {
        auto targetFn = runtime->lookupFunction(0x152EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40E438u; }
        if (ctx->pc != 0x40E438u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00152EF0_0x152ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40E438u; }
        if (ctx->pc != 0x40E438u) { return; }
    }
    ctx->pc = 0x40E438u;
label_40e438:
    // 0x40e438: 0x8e640010  lw          $a0, 0x10($s3)
    ctx->pc = 0x40e438u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_40e43c:
    // 0x40e43c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x40e43cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_40e440:
    // 0x40e440: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x40e440u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_40e444:
    // 0x40e444: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x40e444u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_40e448:
    // 0x40e448: 0xc054c2c  jal         func_1530B0
label_40e44c:
    if (ctx->pc == 0x40E44Cu) {
        ctx->pc = 0x40E44Cu;
            // 0x40e44c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x40E450u;
        goto label_40e450;
    }
    ctx->pc = 0x40E448u;
    SET_GPR_U32(ctx, 31, 0x40E450u);
    ctx->pc = 0x40E44Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40E448u;
            // 0x40e44c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1530B0u;
    if (runtime->hasFunction(0x1530B0u)) {
        auto targetFn = runtime->lookupFunction(0x1530B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40E450u; }
        if (ctx->pc != 0x40E450u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001530B0_0x1530b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40E450u; }
        if (ctx->pc != 0x40E450u) { return; }
    }
    ctx->pc = 0x40E450u;
label_40e450:
    // 0x40e450: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x40e450u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_40e454:
    // 0x40e454: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x40e454u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_40e458:
    // 0x40e458: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x40e458u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_40e45c:
    // 0x40e45c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x40e45cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_40e460:
    // 0x40e460: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x40e460u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_40e464:
    // 0x40e464: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x40e464u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_40e468:
    // 0x40e468: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x40e468u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_40e46c:
    // 0x40e46c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x40e46cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_40e470:
    // 0x40e470: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x40e470u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_40e474:
    // 0x40e474: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x40e474u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_40e478:
    // 0x40e478: 0x3e00008  jr          $ra
label_40e47c:
    if (ctx->pc == 0x40E47Cu) {
        ctx->pc = 0x40E47Cu;
            // 0x40e47c: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x40E480u;
        goto label_40e480;
    }
    ctx->pc = 0x40E478u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40E47Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40E478u;
            // 0x40e47c: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x40E480u;
label_40e480:
    // 0x40e480: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x40e480u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_40e484:
    // 0x40e484: 0x3e00008  jr          $ra
label_40e488:
    if (ctx->pc == 0x40E488u) {
        ctx->pc = 0x40E488u;
            // 0x40e488: 0x2442bc18  addiu       $v0, $v0, -0x43E8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949912));
        ctx->pc = 0x40E48Cu;
        goto label_40e48c;
    }
    ctx->pc = 0x40E484u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40E488u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40E484u;
            // 0x40e488: 0x2442bc18  addiu       $v0, $v0, -0x43E8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949912));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x40E48Cu;
label_40e48c:
    // 0x40e48c: 0x0  nop
    ctx->pc = 0x40e48cu;
    // NOP
label_40e490:
    // 0x40e490: 0x3e00008  jr          $ra
label_40e494:
    if (ctx->pc == 0x40E494u) {
        ctx->pc = 0x40E498u;
        goto label_40e498;
    }
    ctx->pc = 0x40E490u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x40E498u;
label_40e498:
    // 0x40e498: 0x0  nop
    ctx->pc = 0x40e498u;
    // NOP
label_40e49c:
    // 0x40e49c: 0x0  nop
    ctx->pc = 0x40e49cu;
    // NOP
label_40e4a0:
    // 0x40e4a0: 0x3e00008  jr          $ra
label_40e4a4:
    if (ctx->pc == 0x40E4A4u) {
        ctx->pc = 0x40E4A4u;
            // 0x40e4a4: 0x240236f6  addiu       $v0, $zero, 0x36F6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14070));
        ctx->pc = 0x40E4A8u;
        goto label_40e4a8;
    }
    ctx->pc = 0x40E4A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40E4A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40E4A0u;
            // 0x40e4a4: 0x240236f6  addiu       $v0, $zero, 0x36F6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14070));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x40E4A8u;
label_40e4a8:
    // 0x40e4a8: 0x0  nop
    ctx->pc = 0x40e4a8u;
    // NOP
label_40e4ac:
    // 0x40e4ac: 0x0  nop
    ctx->pc = 0x40e4acu;
    // NOP
label_40e4b0:
    // 0x40e4b0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x40e4b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_40e4b4:
    // 0x40e4b4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x40e4b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_40e4b8:
    // 0x40e4b8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x40e4b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_40e4bc:
    // 0x40e4bc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x40e4bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_40e4c0:
    // 0x40e4c0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x40e4c0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_40e4c4:
    // 0x40e4c4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x40e4c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_40e4c8:
    // 0x40e4c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x40e4c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_40e4cc:
    // 0x40e4cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x40e4ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_40e4d0:
    // 0x40e4d0: 0x8c900070  lw          $s0, 0x70($a0)
    ctx->pc = 0x40e4d0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_40e4d4:
    // 0x40e4d4: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_40e4d8:
    if (ctx->pc == 0x40E4D8u) {
        ctx->pc = 0x40E4D8u;
            // 0x40e4d8: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x40E4DCu;
        goto label_40e4dc;
    }
    ctx->pc = 0x40E4D4u;
    {
        const bool branch_taken_0x40e4d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x40E4D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40E4D4u;
            // 0x40e4d8: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40e4d4) {
            ctx->pc = 0x40E518u;
            goto label_40e518;
        }
    }
    ctx->pc = 0x40E4DCu;
label_40e4dc:
    // 0x40e4dc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x40e4dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_40e4e0:
    // 0x40e4e0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x40e4e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_40e4e4:
    // 0x40e4e4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x40e4e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_40e4e8:
    // 0x40e4e8: 0x8e820074  lw          $v0, 0x74($s4)
    ctx->pc = 0x40e4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_40e4ec:
    // 0x40e4ec: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x40e4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_40e4f0:
    // 0x40e4f0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x40e4f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_40e4f4:
    // 0x40e4f4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x40e4f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_40e4f8:
    // 0x40e4f8: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x40e4f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_40e4fc:
    // 0x40e4fc: 0x320f809  jalr        $t9
label_40e500:
    if (ctx->pc == 0x40E500u) {
        ctx->pc = 0x40E504u;
        goto label_40e504;
    }
    ctx->pc = 0x40E4FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x40E504u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x40E504u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x40E504u; }
            if (ctx->pc != 0x40E504u) { return; }
        }
        }
    }
    ctx->pc = 0x40E504u;
label_40e504:
    // 0x40e504: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x40e504u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_40e508:
    // 0x40e508: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x40e508u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_40e50c:
    // 0x40e50c: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x40e50cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_40e510:
    // 0x40e510: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_40e514:
    if (ctx->pc == 0x40E514u) {
        ctx->pc = 0x40E514u;
            // 0x40e514: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x40E518u;
        goto label_40e518;
    }
    ctx->pc = 0x40E510u;
    {
        const bool branch_taken_0x40e510 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x40E514u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40E510u;
            // 0x40e514: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40e510) {
            ctx->pc = 0x40E4E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_40e4e8;
        }
    }
    ctx->pc = 0x40E518u;
label_40e518:
    // 0x40e518: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x40e518u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_40e51c:
    // 0x40e51c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x40e51cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_40e520:
    // 0x40e520: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x40e520u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_40e524:
    // 0x40e524: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x40e524u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_40e528:
    // 0x40e528: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x40e528u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_40e52c:
    // 0x40e52c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x40e52cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_40e530:
    // 0x40e530: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x40e530u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_40e534:
    // 0x40e534: 0x3e00008  jr          $ra
label_40e538:
    if (ctx->pc == 0x40E538u) {
        ctx->pc = 0x40E538u;
            // 0x40e538: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x40E53Cu;
        goto label_40e53c;
    }
    ctx->pc = 0x40E534u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40E538u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40E534u;
            // 0x40e538: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x40E53Cu;
label_40e53c:
    // 0x40e53c: 0x0  nop
    ctx->pc = 0x40e53cu;
    // NOP
label_40e540:
    // 0x40e540: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x40e540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_40e544:
    // 0x40e544: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x40e544u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_40e548:
    // 0x40e548: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x40e548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_40e54c:
    // 0x40e54c: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x40e54cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_40e550:
    // 0x40e550: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x40e550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_40e554:
    // 0x40e554: 0x8c83007c  lw          $v1, 0x7C($a0)
    ctx->pc = 0x40e554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_40e558:
    // 0x40e558: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x40e558u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_40e55c:
    // 0x40e55c: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x40e55cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_40e560:
    // 0x40e560: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x40e560u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_40e564:
    // 0x40e564: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x40e564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_40e568:
    // 0x40e568: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x40e568u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_40e56c:
    // 0x40e56c: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x40e56cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_40e570:
    // 0x40e570: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x40e570u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_40e574:
    // 0x40e574: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x40e574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_40e578:
    // 0x40e578: 0x8c42fffc  lw          $v0, -0x4($v0)
    ctx->pc = 0x40e578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_40e57c:
    // 0x40e57c: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x40e57cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_40e580:
    // 0x40e580: 0x8c82007c  lw          $v0, 0x7C($a0)
    ctx->pc = 0x40e580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_40e584:
    // 0x40e584: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x40e584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_40e588:
    // 0x40e588: 0xac82007c  sw          $v0, 0x7C($a0)
    ctx->pc = 0x40e588u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
label_40e58c:
    // 0x40e58c: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x40e58cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_40e590:
    // 0x40e590: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x40e590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_40e594:
    // 0x40e594: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x40e594u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_40e598:
    // 0x40e598: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x40e598u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_40e59c:
    // 0x40e59c: 0xc0a997c  jal         func_2A65F0
label_40e5a0:
    if (ctx->pc == 0x40E5A0u) {
        ctx->pc = 0x40E5A0u;
            // 0x40e5a0: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->pc = 0x40E5A4u;
        goto label_40e5a4;
    }
    ctx->pc = 0x40E59Cu;
    SET_GPR_U32(ctx, 31, 0x40E5A4u);
    ctx->pc = 0x40E5A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40E59Cu;
            // 0x40e5a0: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40E5A4u; }
        if (ctx->pc != 0x40E5A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40E5A4u; }
        if (ctx->pc != 0x40E5A4u) { return; }
    }
    ctx->pc = 0x40E5A4u;
label_40e5a4:
    // 0x40e5a4: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x40e5a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_40e5a8:
    // 0x40e5a8: 0xc0d879c  jal         func_361E70
label_40e5ac:
    if (ctx->pc == 0x40E5ACu) {
        ctx->pc = 0x40E5ACu;
            // 0x40e5ac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x40E5B0u;
        goto label_40e5b0;
    }
    ctx->pc = 0x40E5A8u;
    SET_GPR_U32(ctx, 31, 0x40E5B0u);
    ctx->pc = 0x40E5ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40E5A8u;
            // 0x40e5ac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361E70u;
    if (runtime->hasFunction(0x361E70u)) {
        auto targetFn = runtime->lookupFunction(0x361E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40E5B0u; }
        if (ctx->pc != 0x40E5B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361E70_0x361e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40E5B0u; }
        if (ctx->pc != 0x40E5B0u) { return; }
    }
    ctx->pc = 0x40E5B0u;
label_40e5b0:
    // 0x40e5b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x40e5b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_40e5b4:
    // 0x40e5b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x40e5b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_40e5b8:
    // 0x40e5b8: 0x3e00008  jr          $ra
label_40e5bc:
    if (ctx->pc == 0x40E5BCu) {
        ctx->pc = 0x40E5BCu;
            // 0x40e5bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x40E5C0u;
        goto label_40e5c0;
    }
    ctx->pc = 0x40E5B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40E5BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40E5B8u;
            // 0x40e5bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x40E5C0u;
label_40e5c0:
    // 0x40e5c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x40e5c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_40e5c4:
    // 0x40e5c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x40e5c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_40e5c8:
    // 0x40e5c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x40e5c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_40e5cc:
    // 0x40e5cc: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x40e5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_40e5d0:
    // 0x40e5d0: 0x10600047  beqz        $v1, . + 4 + (0x47 << 2)
label_40e5d4:
    if (ctx->pc == 0x40E5D4u) {
        ctx->pc = 0x40E5D4u;
            // 0x40e5d4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x40E5D8u;
        goto label_40e5d8;
    }
    ctx->pc = 0x40E5D0u;
    {
        const bool branch_taken_0x40e5d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x40E5D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40E5D0u;
            // 0x40e5d4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40e5d0) {
            ctx->pc = 0x40E6F0u;
            goto label_40e6f0;
        }
    }
    ctx->pc = 0x40E5D8u;
label_40e5d8:
    // 0x40e5d8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x40e5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_40e5dc:
    // 0x40e5dc: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x40e5dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
label_40e5e0:
    // 0x40e5e0: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x40e5e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_40e5e4:
    // 0x40e5e4: 0xc075128  jal         func_1D44A0
label_40e5e8:
    if (ctx->pc == 0x40E5E8u) {
        ctx->pc = 0x40E5E8u;
            // 0x40e5e8: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x40E5ECu;
        goto label_40e5ec;
    }
    ctx->pc = 0x40E5E4u;
    SET_GPR_U32(ctx, 31, 0x40E5ECu);
    ctx->pc = 0x40E5E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40E5E4u;
            // 0x40e5e8: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D44A0u;
    if (runtime->hasFunction(0x1D44A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40E5ECu; }
        if (ctx->pc != 0x40E5ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D44A0_0x1d44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40E5ECu; }
        if (ctx->pc != 0x40E5ECu) { return; }
    }
    ctx->pc = 0x40E5ECu;
label_40e5ec:
    // 0x40e5ec: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x40e5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_40e5f0:
    // 0x40e5f0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x40e5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_40e5f4:
    // 0x40e5f4: 0x8c42e390  lw          $v0, -0x1C70($v0)
    ctx->pc = 0x40e5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960016)));
label_40e5f8:
    // 0x40e5f8: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x40e5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_40e5fc:
    // 0x40e5fc: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x40e5fcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_40e600:
    // 0x40e600: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_40e604:
    if (ctx->pc == 0x40E604u) {
        ctx->pc = 0x40E604u;
            // 0x40e604: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->pc = 0x40E608u;
        goto label_40e608;
    }
    ctx->pc = 0x40E600u;
    {
        const bool branch_taken_0x40e600 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x40E604u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40E600u;
            // 0x40e604: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40e600) {
            ctx->pc = 0x40E610u;
            goto label_40e610;
        }
    }
    ctx->pc = 0x40E608u;
label_40e608:
    // 0x40e608: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x40e608u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_40e60c:
    // 0x40e60c: 0xac43e390  sw          $v1, -0x1C70($v0)
    ctx->pc = 0x40e60cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960016), GPR_U32(ctx, 3));
label_40e610:
    // 0x40e610: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x40e610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_40e614:
    // 0x40e614: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x40e614u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_40e618:
    // 0x40e618: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x40e618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_40e61c:
    // 0x40e61c: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x40e61cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_40e620:
    // 0x40e620: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x40e620u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_40e624:
    // 0x40e624: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_40e628:
    if (ctx->pc == 0x40E628u) {
        ctx->pc = 0x40E628u;
            // 0x40e628: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x40E62Cu;
        goto label_40e62c;
    }
    ctx->pc = 0x40E624u;
    {
        const bool branch_taken_0x40e624 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x40e624) {
            ctx->pc = 0x40E628u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x40E624u;
            // 0x40e628: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x40E638u;
            goto label_40e638;
        }
    }
    ctx->pc = 0x40E62Cu;
label_40e62c:
    // 0x40e62c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x40e62cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_40e630:
    // 0x40e630: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x40e630u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_40e634:
    // 0x40e634: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x40e634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_40e638:
    // 0x40e638: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x40e638u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_40e63c:
    // 0x40e63c: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x40e63cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_40e640:
    // 0x40e640: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x40e640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_40e644:
    // 0x40e644: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x40e644u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_40e648:
    // 0x40e648: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_40e64c:
    if (ctx->pc == 0x40E64Cu) {
        ctx->pc = 0x40E64Cu;
            // 0x40e64c: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x40E650u;
        goto label_40e650;
    }
    ctx->pc = 0x40E648u;
    {
        const bool branch_taken_0x40e648 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x40e648) {
            ctx->pc = 0x40E64Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x40E648u;
            // 0x40e64c: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x40E65Cu;
            goto label_40e65c;
        }
    }
    ctx->pc = 0x40E650u;
label_40e650:
    // 0x40e650: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x40e650u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_40e654:
    // 0x40e654: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x40e654u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_40e658:
    // 0x40e658: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x40e658u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_40e65c:
    // 0x40e65c: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x40e65cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_40e660:
    // 0x40e660: 0x320f809  jalr        $t9
label_40e664:
    if (ctx->pc == 0x40E664u) {
        ctx->pc = 0x40E664u;
            // 0x40e664: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x40E668u;
        goto label_40e668;
    }
    ctx->pc = 0x40E660u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x40E668u);
        ctx->pc = 0x40E664u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40E660u;
            // 0x40e664: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x40E668u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x40E668u; }
            if (ctx->pc != 0x40E668u) { return; }
        }
        }
    }
    ctx->pc = 0x40E668u;
label_40e668:
    // 0x40e668: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x40e668u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_40e66c:
    // 0x40e66c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x40e66cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_40e670:
    // 0x40e670: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x40e670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
label_40e674:
    // 0x40e674: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x40e674u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_40e678:
    // 0x40e678: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x40e678u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_40e67c:
    // 0x40e67c: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x40e67cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_40e680:
    // 0x40e680: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_40e684:
    if (ctx->pc == 0x40E684u) {
        ctx->pc = 0x40E684u;
            // 0x40e684: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->pc = 0x40E688u;
        goto label_40e688;
    }
    ctx->pc = 0x40E680u;
    {
        const bool branch_taken_0x40e680 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x40e680) {
            ctx->pc = 0x40E684u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x40E680u;
            // 0x40e684: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x40E694u;
            goto label_40e694;
        }
    }
    ctx->pc = 0x40E688u;
label_40e688:
    // 0x40e688: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x40e688u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_40e68c:
    // 0x40e68c: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x40e68cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
label_40e690:
    // 0x40e690: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x40e690u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_40e694:
    // 0x40e694: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x40e694u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_40e698:
    // 0x40e698: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x40e698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
label_40e69c:
    // 0x40e69c: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x40e69cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_40e6a0:
    // 0x40e6a0: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x40e6a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_40e6a4:
    // 0x40e6a4: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x40e6a4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_40e6a8:
    // 0x40e6a8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_40e6ac:
    if (ctx->pc == 0x40E6ACu) {
        ctx->pc = 0x40E6B0u;
        goto label_40e6b0;
    }
    ctx->pc = 0x40E6A8u;
    {
        const bool branch_taken_0x40e6a8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x40e6a8) {
            ctx->pc = 0x40E6B8u;
            goto label_40e6b8;
        }
    }
    ctx->pc = 0x40E6B0u;
label_40e6b0:
    // 0x40e6b0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x40e6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_40e6b4:
    // 0x40e6b4: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x40e6b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_40e6b8:
    // 0x40e6b8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x40e6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_40e6bc:
    // 0x40e6bc: 0x8c63e3c8  lw          $v1, -0x1C38($v1)
    ctx->pc = 0x40e6bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960072)));
label_40e6c0:
    // 0x40e6c0: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x40e6c0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_40e6c4:
    // 0x40e6c4: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_40e6c8:
    if (ctx->pc == 0x40E6C8u) {
        ctx->pc = 0x40E6CCu;
        goto label_40e6cc;
    }
    ctx->pc = 0x40E6C4u;
    {
        const bool branch_taken_0x40e6c4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x40e6c4) {
            ctx->pc = 0x40E6D4u;
            goto label_40e6d4;
        }
    }
    ctx->pc = 0x40E6CCu;
label_40e6cc:
    // 0x40e6cc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x40e6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_40e6d0:
    // 0x40e6d0: 0xac62e3c8  sw          $v0, -0x1C38($v1)
    ctx->pc = 0x40e6d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960072), GPR_U32(ctx, 2));
label_40e6d4:
    // 0x40e6d4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x40e6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_40e6d8:
    // 0x40e6d8: 0x8c63e3d0  lw          $v1, -0x1C30($v1)
    ctx->pc = 0x40e6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960080)));
label_40e6dc:
    // 0x40e6dc: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x40e6dcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_40e6e0:
    // 0x40e6e0: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_40e6e4:
    if (ctx->pc == 0x40E6E4u) {
        ctx->pc = 0x40E6E4u;
            // 0x40e6e4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x40E6E8u;
        goto label_40e6e8;
    }
    ctx->pc = 0x40E6E0u;
    {
        const bool branch_taken_0x40e6e0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x40e6e0) {
            ctx->pc = 0x40E6E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x40E6E0u;
            // 0x40e6e4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x40E6F4u;
            goto label_40e6f4;
        }
    }
    ctx->pc = 0x40E6E8u;
label_40e6e8:
    // 0x40e6e8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x40e6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_40e6ec:
    // 0x40e6ec: 0xac62e3d0  sw          $v0, -0x1C30($v1)
    ctx->pc = 0x40e6ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960080), GPR_U32(ctx, 2));
label_40e6f0:
    // 0x40e6f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x40e6f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_40e6f4:
    // 0x40e6f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x40e6f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_40e6f8:
    // 0x40e6f8: 0x3e00008  jr          $ra
label_40e6fc:
    if (ctx->pc == 0x40E6FCu) {
        ctx->pc = 0x40E6FCu;
            // 0x40e6fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x40E700u;
        goto label_40e700;
    }
    ctx->pc = 0x40E6F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40E6FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40E6F8u;
            // 0x40e6fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x40E700u;
label_40e700:
    // 0x40e700: 0x8103518  j           func_40D460
label_40e704:
    if (ctx->pc == 0x40E704u) {
        ctx->pc = 0x40E704u;
            // 0x40e704: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x40E708u;
        goto label_40e708;
    }
    ctx->pc = 0x40E700u;
    ctx->pc = 0x40E704u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40E700u;
            // 0x40e704: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x40D460u;
    {
        auto targetFn = runtime->lookupFunction(0x40D460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x40E708u;
label_40e708:
    // 0x40e708: 0x0  nop
    ctx->pc = 0x40e708u;
    // NOP
label_40e70c:
    // 0x40e70c: 0x0  nop
    ctx->pc = 0x40e70cu;
    // NOP
label_40e710:
    // 0x40e710: 0x8103394  j           func_40CE50
label_40e714:
    if (ctx->pc == 0x40E714u) {
        ctx->pc = 0x40E714u;
            // 0x40e714: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x40E718u;
        goto label_40e718;
    }
    ctx->pc = 0x40E710u;
    ctx->pc = 0x40E714u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40E710u;
            // 0x40e714: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x40CE50u;
    if (runtime->hasFunction(0x40CE50u)) {
        auto targetFn = runtime->lookupFunction(0x40CE50u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0040CE50_0x40ce50(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x40E718u;
label_40e718:
    // 0x40e718: 0x0  nop
    ctx->pc = 0x40e718u;
    // NOP
label_40e71c:
    // 0x40e71c: 0x0  nop
    ctx->pc = 0x40e71cu;
    // NOP
label_40e720:
    // 0x40e720: 0x81033ec  j           func_40CFB0
label_40e724:
    if (ctx->pc == 0x40E724u) {
        ctx->pc = 0x40E724u;
            // 0x40e724: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->pc = 0x40E728u;
        goto label_40e728;
    }
    ctx->pc = 0x40E720u;
    ctx->pc = 0x40E724u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40E720u;
            // 0x40e724: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x40CFB0u;
    {
        auto targetFn = runtime->lookupFunction(0x40CFB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x40E728u;
label_40e728:
    // 0x40e728: 0x0  nop
    ctx->pc = 0x40e728u;
    // NOP
label_40e72c:
    // 0x40e72c: 0x0  nop
    ctx->pc = 0x40e72cu;
    // NOP
label_40e730:
    // 0x40e730: 0x8103370  j           func_40CDC0
label_40e734:
    if (ctx->pc == 0x40E734u) {
        ctx->pc = 0x40E734u;
            // 0x40e734: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x40E738u;
        goto label_40e738;
    }
    ctx->pc = 0x40E730u;
    ctx->pc = 0x40E734u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40E730u;
            // 0x40e734: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x40CDC0u;
    {
        auto targetFn = runtime->lookupFunction(0x40CDC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x40E738u;
label_40e738:
    // 0x40e738: 0x0  nop
    ctx->pc = 0x40e738u;
    // NOP
label_40e73c:
    // 0x40e73c: 0x0  nop
    ctx->pc = 0x40e73cu;
    // NOP
label_40e740:
    // 0x40e740: 0x24033ab6  addiu       $v1, $zero, 0x3AB6
    ctx->pc = 0x40e740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15030));
label_40e744:
    // 0x40e744: 0x3e00008  jr          $ra
label_40e748:
    if (ctx->pc == 0x40E748u) {
        ctx->pc = 0x40E748u;
            // 0x40e748: 0xac830054  sw          $v1, 0x54($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 3));
        ctx->pc = 0x40E74Cu;
        goto label_40e74c;
    }
    ctx->pc = 0x40E744u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40E748u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40E744u;
            // 0x40e748: 0xac830054  sw          $v1, 0x54($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x40E74Cu;
label_40e74c:
    // 0x40e74c: 0x0  nop
    ctx->pc = 0x40e74cu;
    // NOP
label_40e750:
    // 0x40e750: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x40e750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_40e754:
    // 0x40e754: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x40e754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_40e758:
    // 0x40e758: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x40e758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_40e75c:
    // 0x40e75c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x40e75cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_40e760:
    // 0x40e760: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x40e760u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_40e764:
    // 0x40e764: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
label_40e768:
    if (ctx->pc == 0x40E768u) {
        ctx->pc = 0x40E768u;
            // 0x40e768: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x40E76Cu;
        goto label_40e76c;
    }
    ctx->pc = 0x40E764u;
    {
        const bool branch_taken_0x40e764 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x40E768u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40E764u;
            // 0x40e768: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40e764) {
            ctx->pc = 0x40E804u;
            goto label_40e804;
        }
    }
    ctx->pc = 0x40E76Cu;
label_40e76c:
    // 0x40e76c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x40e76cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_40e770:
    // 0x40e770: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x40e770u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_40e774:
    // 0x40e774: 0x2463ae50  addiu       $v1, $v1, -0x51B0
    ctx->pc = 0x40e774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946384));
label_40e778:
    // 0x40e778: 0x2442ae88  addiu       $v0, $v0, -0x5178
    ctx->pc = 0x40e778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946440));
label_40e77c:
    // 0x40e77c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x40e77cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_40e780:
    // 0x40e780: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
label_40e784:
    if (ctx->pc == 0x40E784u) {
        ctx->pc = 0x40E784u;
            // 0x40e784: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x40E788u;
        goto label_40e788;
    }
    ctx->pc = 0x40E780u;
    {
        const bool branch_taken_0x40e780 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x40E784u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40E780u;
            // 0x40e784: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40e780) {
            ctx->pc = 0x40E7ECu;
            goto label_40e7ec;
        }
    }
    ctx->pc = 0x40E788u;
label_40e788:
    // 0x40e788: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x40e788u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_40e78c:
    // 0x40e78c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x40e78cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_40e790:
    // 0x40e790: 0x24631930  addiu       $v1, $v1, 0x1930
    ctx->pc = 0x40e790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6448));
label_40e794:
    // 0x40e794: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x40e794u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
label_40e798:
    // 0x40e798: 0x24421968  addiu       $v0, $v0, 0x1968
    ctx->pc = 0x40e798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6504));
label_40e79c:
    // 0x40e79c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x40e79cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_40e7a0:
    // 0x40e7a0: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x40e7a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
label_40e7a4:
    // 0x40e7a4: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x40e7a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
label_40e7a8:
    // 0x40e7a8: 0xc0407c0  jal         func_101F00
label_40e7ac:
    if (ctx->pc == 0x40E7ACu) {
        ctx->pc = 0x40E7ACu;
            // 0x40e7ac: 0x24a50030  addiu       $a1, $a1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
        ctx->pc = 0x40E7B0u;
        goto label_40e7b0;
    }
    ctx->pc = 0x40E7A8u;
    SET_GPR_U32(ctx, 31, 0x40E7B0u);
    ctx->pc = 0x40E7ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40E7A8u;
            // 0x40e7ac: 0x24a50030  addiu       $a1, $a1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40E7B0u; }
        if (ctx->pc != 0x40E7B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40E7B0u; }
        if (ctx->pc != 0x40E7B0u) { return; }
    }
    ctx->pc = 0x40E7B0u;
label_40e7b0:
    // 0x40e7b0: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x40e7b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
label_40e7b4:
    // 0x40e7b4: 0xc0a8cf8  jal         func_2A33E0
label_40e7b8:
    if (ctx->pc == 0x40E7B8u) {
        ctx->pc = 0x40E7B8u;
            // 0x40e7b8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x40E7BCu;
        goto label_40e7bc;
    }
    ctx->pc = 0x40E7B4u;
    SET_GPR_U32(ctx, 31, 0x40E7BCu);
    ctx->pc = 0x40E7B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40E7B4u;
            // 0x40e7b8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A33E0u;
    if (runtime->hasFunction(0x2A33E0u)) {
        auto targetFn = runtime->lookupFunction(0x2A33E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40E7BCu; }
        if (ctx->pc != 0x40E7BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A33E0_0x2a33e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40E7BCu; }
        if (ctx->pc != 0x40E7BCu) { return; }
    }
    ctx->pc = 0x40E7BCu;
label_40e7bc:
    // 0x40e7bc: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x40e7bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
label_40e7c0:
    // 0x40e7c0: 0xc0affcc  jal         func_2BFF30
label_40e7c4:
    if (ctx->pc == 0x40E7C4u) {
        ctx->pc = 0x40E7C4u;
            // 0x40e7c4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x40E7C8u;
        goto label_40e7c8;
    }
    ctx->pc = 0x40E7C0u;
    SET_GPR_U32(ctx, 31, 0x40E7C8u);
    ctx->pc = 0x40E7C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40E7C0u;
            // 0x40e7c4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BFF30u;
    if (runtime->hasFunction(0x2BFF30u)) {
        auto targetFn = runtime->lookupFunction(0x2BFF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40E7C8u; }
        if (ctx->pc != 0x40E7C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BFF30_0x2bff30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40E7C8u; }
        if (ctx->pc != 0x40E7C8u) { return; }
    }
    ctx->pc = 0x40E7C8u;
label_40e7c8:
    // 0x40e7c8: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x40e7c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
label_40e7cc:
    // 0x40e7cc: 0xc0affcc  jal         func_2BFF30
label_40e7d0:
    if (ctx->pc == 0x40E7D0u) {
        ctx->pc = 0x40E7D0u;
            // 0x40e7d0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x40E7D4u;
        goto label_40e7d4;
    }
    ctx->pc = 0x40E7CCu;
    SET_GPR_U32(ctx, 31, 0x40E7D4u);
    ctx->pc = 0x40E7D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40E7CCu;
            // 0x40e7d0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BFF30u;
    if (runtime->hasFunction(0x2BFF30u)) {
        auto targetFn = runtime->lookupFunction(0x2BFF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40E7D4u; }
        if (ctx->pc != 0x40E7D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BFF30_0x2bff30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40E7D4u; }
        if (ctx->pc != 0x40E7D4u) { return; }
    }
    ctx->pc = 0x40E7D4u;
label_40e7d4:
    // 0x40e7d4: 0x26040064  addiu       $a0, $s0, 0x64
    ctx->pc = 0x40e7d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
label_40e7d8:
    // 0x40e7d8: 0xc0affe8  jal         func_2BFFA0
label_40e7dc:
    if (ctx->pc == 0x40E7DCu) {
        ctx->pc = 0x40E7DCu;
            // 0x40e7dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x40E7E0u;
        goto label_40e7e0;
    }
    ctx->pc = 0x40E7D8u;
    SET_GPR_U32(ctx, 31, 0x40E7E0u);
    ctx->pc = 0x40E7DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40E7D8u;
            // 0x40e7dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BFFA0u;
    if (runtime->hasFunction(0x2BFFA0u)) {
        auto targetFn = runtime->lookupFunction(0x2BFFA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40E7E0u; }
        if (ctx->pc != 0x40E7E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BFFA0_0x2bffa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40E7E0u; }
        if (ctx->pc != 0x40E7E0u) { return; }
    }
    ctx->pc = 0x40E7E0u;
label_40e7e0:
    // 0x40e7e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40e7e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_40e7e4:
    // 0x40e7e4: 0xc0ae1c0  jal         func_2B8700
label_40e7e8:
    if (ctx->pc == 0x40E7E8u) {
        ctx->pc = 0x40E7E8u;
            // 0x40e7e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x40E7ECu;
        goto label_40e7ec;
    }
    ctx->pc = 0x40E7E4u;
    SET_GPR_U32(ctx, 31, 0x40E7ECu);
    ctx->pc = 0x40E7E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40E7E4u;
            // 0x40e7e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40E7ECu; }
        if (ctx->pc != 0x40E7ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40E7ECu; }
        if (ctx->pc != 0x40E7ECu) { return; }
    }
    ctx->pc = 0x40E7ECu;
label_40e7ec:
    // 0x40e7ec: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x40e7ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_40e7f0:
    // 0x40e7f0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x40e7f0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_40e7f4:
    // 0x40e7f4: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_40e7f8:
    if (ctx->pc == 0x40E7F8u) {
        ctx->pc = 0x40E7F8u;
            // 0x40e7f8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x40E7FCu;
        goto label_40e7fc;
    }
    ctx->pc = 0x40E7F4u;
    {
        const bool branch_taken_0x40e7f4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x40e7f4) {
            ctx->pc = 0x40E7F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x40E7F4u;
            // 0x40e7f8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x40E808u;
            goto label_40e808;
        }
    }
    ctx->pc = 0x40E7FCu;
label_40e7fc:
    // 0x40e7fc: 0xc0400a8  jal         func_1002A0
label_40e800:
    if (ctx->pc == 0x40E800u) {
        ctx->pc = 0x40E800u;
            // 0x40e800: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x40E804u;
        goto label_40e804;
    }
    ctx->pc = 0x40E7FCu;
    SET_GPR_U32(ctx, 31, 0x40E804u);
    ctx->pc = 0x40E800u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40E7FCu;
            // 0x40e800: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40E804u; }
        if (ctx->pc != 0x40E804u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40E804u; }
        if (ctx->pc != 0x40E804u) { return; }
    }
    ctx->pc = 0x40E804u;
label_40e804:
    // 0x40e804: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x40e804u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_40e808:
    // 0x40e808: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x40e808u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_40e80c:
    // 0x40e80c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x40e80cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_40e810:
    // 0x40e810: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x40e810u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_40e814:
    // 0x40e814: 0x3e00008  jr          $ra
label_40e818:
    if (ctx->pc == 0x40E818u) {
        ctx->pc = 0x40E818u;
            // 0x40e818: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x40E81Cu;
        goto label_40e81c;
    }
    ctx->pc = 0x40E814u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40E818u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40E814u;
            // 0x40e818: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x40E81Cu;
label_40e81c:
    // 0x40e81c: 0x0  nop
    ctx->pc = 0x40e81cu;
    // NOP
label_40e820:
    // 0x40e820: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x40e820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_40e824:
    // 0x40e824: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x40e824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_40e828:
    // 0x40e828: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x40e828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_40e82c:
    // 0x40e82c: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x40e82cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_40e830:
    // 0x40e830: 0x50a30012  beql        $a1, $v1, . + 4 + (0x12 << 2)
label_40e834:
    if (ctx->pc == 0x40E834u) {
        ctx->pc = 0x40E834u;
            // 0x40e834: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x40E838u;
        goto label_40e838;
    }
    ctx->pc = 0x40E830u;
    {
        const bool branch_taken_0x40e830 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x40e830) {
            ctx->pc = 0x40E834u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x40E830u;
            // 0x40e834: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x40E87Cu;
            goto label_40e87c;
        }
    }
    ctx->pc = 0x40E838u;
label_40e838:
    // 0x40e838: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x40e838u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_40e83c:
    // 0x40e83c: 0x10a3000e  beq         $a1, $v1, . + 4 + (0xE << 2)
label_40e840:
    if (ctx->pc == 0x40E840u) {
        ctx->pc = 0x40E844u;
        goto label_40e844;
    }
    ctx->pc = 0x40E83Cu;
    {
        const bool branch_taken_0x40e83c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x40e83c) {
            ctx->pc = 0x40E878u;
            goto label_40e878;
        }
    }
    ctx->pc = 0x40E844u;
label_40e844:
    // 0x40e844: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x40e844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_40e848:
    // 0x40e848: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_40e84c:
    if (ctx->pc == 0x40E84Cu) {
        ctx->pc = 0x40E850u;
        goto label_40e850;
    }
    ctx->pc = 0x40E848u;
    {
        const bool branch_taken_0x40e848 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x40e848) {
            ctx->pc = 0x40E858u;
            goto label_40e858;
        }
    }
    ctx->pc = 0x40E850u;
label_40e850:
    // 0x40e850: 0x10000009  b           . + 4 + (0x9 << 2)
label_40e854:
    if (ctx->pc == 0x40E854u) {
        ctx->pc = 0x40E858u;
        goto label_40e858;
    }
    ctx->pc = 0x40E850u;
    {
        const bool branch_taken_0x40e850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x40e850) {
            ctx->pc = 0x40E878u;
            goto label_40e878;
        }
    }
    ctx->pc = 0x40E858u;
label_40e858:
    // 0x40e858: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x40e858u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_40e85c:
    // 0x40e85c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x40e85cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_40e860:
    // 0x40e860: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x40e860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_40e864:
    // 0x40e864: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x40e864u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_40e868:
    // 0x40e868: 0x8c420cb4  lw          $v0, 0xCB4($v0)
    ctx->pc = 0x40e868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3252)));
label_40e86c:
    // 0x40e86c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x40e86cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_40e870:
    // 0x40e870: 0x320f809  jalr        $t9
label_40e874:
    if (ctx->pc == 0x40E874u) {
        ctx->pc = 0x40E874u;
            // 0x40e874: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x40E878u;
        goto label_40e878;
    }
    ctx->pc = 0x40E870u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x40E878u);
        ctx->pc = 0x40E874u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40E870u;
            // 0x40e874: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x40E878u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x40E878u; }
            if (ctx->pc != 0x40E878u) { return; }
        }
        }
    }
    ctx->pc = 0x40E878u;
label_40e878:
    // 0x40e878: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x40e878u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_40e87c:
    // 0x40e87c: 0x3e00008  jr          $ra
label_40e880:
    if (ctx->pc == 0x40E880u) {
        ctx->pc = 0x40E880u;
            // 0x40e880: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x40E884u;
        goto label_40e884;
    }
    ctx->pc = 0x40E87Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40E880u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40E87Cu;
            // 0x40e880: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x40E884u;
label_40e884:
    // 0x40e884: 0x0  nop
    ctx->pc = 0x40e884u;
    // NOP
label_40e888:
    // 0x40e888: 0x0  nop
    ctx->pc = 0x40e888u;
    // NOP
label_40e88c:
    // 0x40e88c: 0x0  nop
    ctx->pc = 0x40e88cu;
    // NOP
label_40e890:
    // 0x40e890: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x40e890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_40e894:
    // 0x40e894: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x40e894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_40e898:
    // 0x40e898: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x40e898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_40e89c:
    // 0x40e89c: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x40e89cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_40e8a0:
    // 0x40e8a0: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x40e8a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_40e8a4:
    // 0x40e8a4: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x40e8a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_40e8a8:
    // 0x40e8a8: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x40e8a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_40e8ac:
    // 0x40e8ac: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x40e8acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_40e8b0:
    // 0x40e8b0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x40e8b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_40e8b4:
    // 0x40e8b4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x40e8b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_40e8b8:
    // 0x40e8b8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x40e8b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_40e8bc:
    // 0x40e8bc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x40e8bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_40e8c0:
    // 0x40e8c0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x40e8c0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_40e8c4:
    // 0x40e8c4: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x40e8c4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_40e8c8:
    // 0x40e8c8: 0x10a3000c  beq         $a1, $v1, . + 4 + (0xC << 2)
label_40e8cc:
    if (ctx->pc == 0x40E8CCu) {
        ctx->pc = 0x40E8CCu;
            // 0x40e8cc: 0xafa400bc  sw          $a0, 0xBC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 4));
        ctx->pc = 0x40E8D0u;
        goto label_40e8d0;
    }
    ctx->pc = 0x40E8C8u;
    {
        const bool branch_taken_0x40e8c8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x40E8CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40E8C8u;
            // 0x40e8cc: 0xafa400bc  sw          $a0, 0xBC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40e8c8) {
            ctx->pc = 0x40E8FCu;
            goto label_40e8fc;
        }
    }
    ctx->pc = 0x40E8D0u;
label_40e8d0:
    // 0x40e8d0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x40e8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_40e8d4:
    // 0x40e8d4: 0x50a30006  beql        $a1, $v1, . + 4 + (0x6 << 2)
label_40e8d8:
    if (ctx->pc == 0x40E8D8u) {
        ctx->pc = 0x40E8D8u;
            // 0x40e8d8: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x40E8DCu;
        goto label_40e8dc;
    }
    ctx->pc = 0x40E8D4u;
    {
        const bool branch_taken_0x40e8d4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x40e8d4) {
            ctx->pc = 0x40E8D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x40E8D4u;
            // 0x40e8d8: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x40E8F0u;
            goto label_40e8f0;
        }
    }
    ctx->pc = 0x40E8DCu;
label_40e8dc:
    // 0x40e8dc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x40e8dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_40e8e0:
    // 0x40e8e0: 0x10a30091  beq         $a1, $v1, . + 4 + (0x91 << 2)
label_40e8e4:
    if (ctx->pc == 0x40E8E4u) {
        ctx->pc = 0x40E8E8u;
        goto label_40e8e8;
    }
    ctx->pc = 0x40E8E0u;
    {
        const bool branch_taken_0x40e8e0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x40e8e0) {
            ctx->pc = 0x40EB28u;
            goto label_40eb28;
        }
    }
    ctx->pc = 0x40E8E8u;
label_40e8e8:
    // 0x40e8e8: 0x1000008f  b           . + 4 + (0x8F << 2)
label_40e8ec:
    if (ctx->pc == 0x40E8ECu) {
        ctx->pc = 0x40E8F0u;
        goto label_40e8f0;
    }
    ctx->pc = 0x40E8E8u;
    {
        const bool branch_taken_0x40e8e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x40e8e8) {
            ctx->pc = 0x40EB28u;
            goto label_40eb28;
        }
    }
    ctx->pc = 0x40E8F0u;
label_40e8f0:
    // 0x40e8f0: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x40e8f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_40e8f4:
    // 0x40e8f4: 0x320f809  jalr        $t9
label_40e8f8:
    if (ctx->pc == 0x40E8F8u) {
        ctx->pc = 0x40E8FCu;
        goto label_40e8fc;
    }
    ctx->pc = 0x40E8F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x40E8FCu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x40E8FCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x40E8FCu; }
            if (ctx->pc != 0x40E8FCu) { return; }
        }
        }
    }
    ctx->pc = 0x40E8FCu;
label_40e8fc:
    // 0x40e8fc: 0x8fa300bc  lw          $v1, 0xBC($sp)
    ctx->pc = 0x40e8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_40e900:
    // 0x40e900: 0x8c7e0070  lw          $fp, 0x70($v1)
    ctx->pc = 0x40e900u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 112)));
label_40e904:
    // 0x40e904: 0x13c00088  beqz        $fp, . + 4 + (0x88 << 2)
label_40e908:
    if (ctx->pc == 0x40E908u) {
        ctx->pc = 0x40E90Cu;
        goto label_40e90c;
    }
    ctx->pc = 0x40E904u;
    {
        const bool branch_taken_0x40e904 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x40e904) {
            ctx->pc = 0x40EB28u;
            goto label_40eb28;
        }
    }
    ctx->pc = 0x40E90Cu;
label_40e90c:
    // 0x40e90c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x40e90cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_40e910:
    // 0x40e910: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x40e910u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_40e914:
    // 0x40e914: 0x8fa300bc  lw          $v1, 0xBC($sp)
    ctx->pc = 0x40e914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_40e918:
    // 0x40e918: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x40e918u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_40e91c:
    // 0x40e91c: 0x8c630074  lw          $v1, 0x74($v1)
    ctx->pc = 0x40e91cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_40e920:
    // 0x40e920: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x40e920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_40e924:
    // 0x40e924: 0x8c740000  lw          $s4, 0x0($v1)
    ctx->pc = 0x40e924u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_40e928:
    // 0x40e928: 0x8e830060  lw          $v1, 0x60($s4)
    ctx->pc = 0x40e928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 96)));
label_40e92c:
    // 0x40e92c: 0x10650008  beq         $v1, $a1, . + 4 + (0x8 << 2)
label_40e930:
    if (ctx->pc == 0x40E930u) {
        ctx->pc = 0x40E934u;
        goto label_40e934;
    }
    ctx->pc = 0x40E92Cu;
    {
        const bool branch_taken_0x40e92c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x40e92c) {
            ctx->pc = 0x40E950u;
            goto label_40e950;
        }
    }
    ctx->pc = 0x40E934u;
label_40e934:
    // 0x40e934: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_40e938:
    if (ctx->pc == 0x40E938u) {
        ctx->pc = 0x40E93Cu;
        goto label_40e93c;
    }
    ctx->pc = 0x40E934u;
    {
        const bool branch_taken_0x40e934 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x40e934) {
            ctx->pc = 0x40E948u;
            goto label_40e948;
        }
    }
    ctx->pc = 0x40E93Cu;
label_40e93c:
    // 0x40e93c: 0x10000076  b           . + 4 + (0x76 << 2)
label_40e940:
    if (ctx->pc == 0x40E940u) {
        ctx->pc = 0x40E944u;
        goto label_40e944;
    }
    ctx->pc = 0x40E93Cu;
    {
        const bool branch_taken_0x40e93c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x40e93c) {
            ctx->pc = 0x40EB18u;
            goto label_40eb18;
        }
    }
    ctx->pc = 0x40E944u;
label_40e944:
    // 0x40e944: 0x0  nop
    ctx->pc = 0x40e944u;
    // NOP
label_40e948:
    // 0x40e948: 0xc103b14  jal         func_40EC50
label_40e94c:
    if (ctx->pc == 0x40E94Cu) {
        ctx->pc = 0x40E94Cu;
            // 0x40e94c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x40E950u;
        goto label_40e950;
    }
    ctx->pc = 0x40E948u;
    SET_GPR_U32(ctx, 31, 0x40E950u);
    ctx->pc = 0x40E94Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40E948u;
            // 0x40e94c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x40EC50u;
    if (runtime->hasFunction(0x40EC50u)) {
        auto targetFn = runtime->lookupFunction(0x40EC50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40E950u; }
        if (ctx->pc != 0x40E950u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0040EC50_0x40ec50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40E950u; }
        if (ctx->pc != 0x40E950u) { return; }
    }
    ctx->pc = 0x40E950u;
label_40e950:
    // 0x40e950: 0xc0d63d8  jal         func_358F60
label_40e954:
    if (ctx->pc == 0x40E954u) {
        ctx->pc = 0x40E954u;
            // 0x40e954: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x40E958u;
        goto label_40e958;
    }
    ctx->pc = 0x40E950u;
    SET_GPR_U32(ctx, 31, 0x40E958u);
    ctx->pc = 0x40E954u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40E950u;
            // 0x40e954: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x358F60u;
    if (runtime->hasFunction(0x358F60u)) {
        auto targetFn = runtime->lookupFunction(0x358F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40E958u; }
        if (ctx->pc != 0x40E958u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00358F60_0x358f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40E958u; }
        if (ctx->pc != 0x40E958u) { return; }
    }
    ctx->pc = 0x40E958u;
label_40e958:
    // 0x40e958: 0x1440006f  bnez        $v0, . + 4 + (0x6F << 2)
label_40e95c:
    if (ctx->pc == 0x40E95Cu) {
        ctx->pc = 0x40E960u;
        goto label_40e960;
    }
    ctx->pc = 0x40E958u;
    {
        const bool branch_taken_0x40e958 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x40e958) {
            ctx->pc = 0x40EB18u;
            goto label_40eb18;
        }
    }
    ctx->pc = 0x40E960u;
label_40e960:
    // 0x40e960: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x40e960u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_40e964:
    // 0x40e964: 0x3c1300af  lui         $s3, 0xAF
    ctx->pc = 0x40e964u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)175 << 16));
label_40e968:
    // 0x40e968: 0x8c440e80  lw          $a0, 0xE80($v0)
    ctx->pc = 0x40e968u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_40e96c:
    // 0x40e96c: 0x26960070  addiu       $s6, $s4, 0x70
    ctx->pc = 0x40e96cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 20), 112));
label_40e970:
    // 0x40e970: 0xc0ae0e4  jal         func_2B8390
label_40e974:
    if (ctx->pc == 0x40E974u) {
        ctx->pc = 0x40E974u;
            // 0x40e974: 0x26730e84  addiu       $s3, $s3, 0xE84 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 3716));
        ctx->pc = 0x40E978u;
        goto label_40e978;
    }
    ctx->pc = 0x40E970u;
    SET_GPR_U32(ctx, 31, 0x40E978u);
    ctx->pc = 0x40E974u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40E970u;
            // 0x40e974: 0x26730e84  addiu       $s3, $s3, 0xE84 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 3716));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8390u;
    if (runtime->hasFunction(0x2B8390u)) {
        auto targetFn = runtime->lookupFunction(0x2B8390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40E978u; }
        if (ctx->pc != 0x40E978u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8390_0x2b8390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40E978u; }
        if (ctx->pc != 0x40E978u) { return; }
    }
    ctx->pc = 0x40E978u;
label_40e978:
    // 0x40e978: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x40e978u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_40e97c:
    // 0x40e97c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x40e97cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_40e980:
    // 0x40e980: 0x269100b0  addiu       $s1, $s4, 0xB0
    ctx->pc = 0x40e980u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 176));
label_40e984:
    // 0x40e984: 0x0  nop
    ctx->pc = 0x40e984u;
    // NOP
label_40e988:
    // 0x40e988: 0xc07753c  jal         func_1DD4F0
label_40e98c:
    if (ctx->pc == 0x40E98Cu) {
        ctx->pc = 0x40E98Cu;
            // 0x40e98c: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->pc = 0x40E990u;
        goto label_40e990;
    }
    ctx->pc = 0x40E988u;
    SET_GPR_U32(ctx, 31, 0x40E990u);
    ctx->pc = 0x40E98Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40E988u;
            // 0x40e98c: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD4F0u;
    if (runtime->hasFunction(0x1DD4F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40E990u; }
        if (ctx->pc != 0x40E990u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD4F0_0x1dd4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40E990u; }
        if (ctx->pc != 0x40E990u) { return; }
    }
    ctx->pc = 0x40E990u;
label_40e990:
    // 0x40e990: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x40e990u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_40e994:
    // 0x40e994: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x40e994u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_40e998:
    // 0x40e998: 0xc04cca0  jal         func_133280
label_40e99c:
    if (ctx->pc == 0x40E99Cu) {
        ctx->pc = 0x40E99Cu;
            // 0x40e99c: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x40E9A0u;
        goto label_40e9a0;
    }
    ctx->pc = 0x40E998u;
    SET_GPR_U32(ctx, 31, 0x40E9A0u);
    ctx->pc = 0x40E99Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40E998u;
            // 0x40e99c: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40E9A0u; }
        if (ctx->pc != 0x40E9A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40E9A0u; }
        if (ctx->pc != 0x40E9A0u) { return; }
    }
    ctx->pc = 0x40E9A0u;
label_40e9a0:
    // 0x40e9a0: 0xc7b400c8  lwc1        $f20, 0xC8($sp)
    ctx->pc = 0x40e9a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_40e9a4:
    // 0x40e9a4: 0xc049514  jal         func_125450
label_40e9a8:
    if (ctx->pc == 0x40E9A8u) {
        ctx->pc = 0x40E9A8u;
            // 0x40e9a8: 0xc7ac00c0  lwc1        $f12, 0xC0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x40E9ACu;
        goto label_40e9ac;
    }
    ctx->pc = 0x40E9A4u;
    SET_GPR_U32(ctx, 31, 0x40E9ACu);
    ctx->pc = 0x40E9A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40E9A4u;
            // 0x40e9a8: 0xc7ac00c0  lwc1        $f12, 0xC0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x125450u;
    if (runtime->hasFunction(0x125450u)) {
        auto targetFn = runtime->lookupFunction(0x125450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40E9ACu; }
        if (ctx->pc != 0x40E9ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125450_0x125450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40E9ACu; }
        if (ctx->pc != 0x40E9ACu) { return; }
    }
    ctx->pc = 0x40E9ACu;
label_40e9ac:
    // 0x40e9ac: 0xc0474b6  jal         func_11D2D8
label_40e9b0:
    if (ctx->pc == 0x40E9B0u) {
        ctx->pc = 0x40E9B0u;
            // 0x40e9b0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x40E9B4u;
        goto label_40e9b4;
    }
    ctx->pc = 0x40E9ACu;
    SET_GPR_U32(ctx, 31, 0x40E9B4u);
    ctx->pc = 0x40E9B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40E9ACu;
            // 0x40e9b0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11D2D8u;
    if (runtime->hasFunction(0x11D2D8u)) {
        auto targetFn = runtime->lookupFunction(0x11D2D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40E9B4u; }
        if (ctx->pc != 0x40E9B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011D2D8_0x11d2d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40E9B4u; }
        if (ctx->pc != 0x40E9B4u) { return; }
    }
    ctx->pc = 0x40E9B4u;
label_40e9b4:
    // 0x40e9b4: 0xc0497dc  jal         func_125F70
label_40e9b8:
    if (ctx->pc == 0x40E9B8u) {
        ctx->pc = 0x40E9B8u;
            // 0x40e9b8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x40E9BCu;
        goto label_40e9bc;
    }
    ctx->pc = 0x40E9B4u;
    SET_GPR_U32(ctx, 31, 0x40E9BCu);
    ctx->pc = 0x40E9B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40E9B4u;
            // 0x40e9b8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125F70u;
    if (runtime->hasFunction(0x125F70u)) {
        auto targetFn = runtime->lookupFunction(0x125F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40E9BCu; }
        if (ctx->pc != 0x40E9BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125F70_0x125f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40E9BCu; }
        if (ctx->pc != 0x40E9BCu) { return; }
    }
    ctx->pc = 0x40E9BCu;
label_40e9bc:
    // 0x40e9bc: 0xc7ac00c4  lwc1        $f12, 0xC4($sp)
    ctx->pc = 0x40e9bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_40e9c0:
    // 0x40e9c0: 0xc049514  jal         func_125450
label_40e9c4:
    if (ctx->pc == 0x40E9C4u) {
        ctx->pc = 0x40E9C4u;
            // 0x40e9c4: 0xe7a000c0  swc1        $f0, 0xC0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
        ctx->pc = 0x40E9C8u;
        goto label_40e9c8;
    }
    ctx->pc = 0x40E9C0u;
    SET_GPR_U32(ctx, 31, 0x40E9C8u);
    ctx->pc = 0x40E9C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40E9C0u;
            // 0x40e9c4: 0xe7a000c0  swc1        $f0, 0xC0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x125450u;
    if (runtime->hasFunction(0x125450u)) {
        auto targetFn = runtime->lookupFunction(0x125450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40E9C8u; }
        if (ctx->pc != 0x40E9C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125450_0x125450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40E9C8u; }
        if (ctx->pc != 0x40E9C8u) { return; }
    }
    ctx->pc = 0x40E9C8u;
label_40e9c8:
    // 0x40e9c8: 0xc0474b6  jal         func_11D2D8
label_40e9cc:
    if (ctx->pc == 0x40E9CCu) {
        ctx->pc = 0x40E9CCu;
            // 0x40e9cc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x40E9D0u;
        goto label_40e9d0;
    }
    ctx->pc = 0x40E9C8u;
    SET_GPR_U32(ctx, 31, 0x40E9D0u);
    ctx->pc = 0x40E9CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40E9C8u;
            // 0x40e9cc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11D2D8u;
    if (runtime->hasFunction(0x11D2D8u)) {
        auto targetFn = runtime->lookupFunction(0x11D2D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40E9D0u; }
        if (ctx->pc != 0x40E9D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011D2D8_0x11d2d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40E9D0u; }
        if (ctx->pc != 0x40E9D0u) { return; }
    }
    ctx->pc = 0x40E9D0u;
label_40e9d0:
    // 0x40e9d0: 0xc0497dc  jal         func_125F70
label_40e9d4:
    if (ctx->pc == 0x40E9D4u) {
        ctx->pc = 0x40E9D4u;
            // 0x40e9d4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x40E9D8u;
        goto label_40e9d8;
    }
    ctx->pc = 0x40E9D0u;
    SET_GPR_U32(ctx, 31, 0x40E9D8u);
    ctx->pc = 0x40E9D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40E9D0u;
            // 0x40e9d4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125F70u;
    if (runtime->hasFunction(0x125F70u)) {
        auto targetFn = runtime->lookupFunction(0x125F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40E9D8u; }
        if (ctx->pc != 0x40E9D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125F70_0x125f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40E9D8u; }
        if (ctx->pc != 0x40E9D8u) { return; }
    }
    ctx->pc = 0x40E9D8u;
label_40e9d8:
    // 0x40e9d8: 0xc7ac00c8  lwc1        $f12, 0xC8($sp)
    ctx->pc = 0x40e9d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_40e9dc:
    // 0x40e9dc: 0xc049514  jal         func_125450
label_40e9e0:
    if (ctx->pc == 0x40E9E0u) {
        ctx->pc = 0x40E9E0u;
            // 0x40e9e0: 0xe7a000c4  swc1        $f0, 0xC4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
        ctx->pc = 0x40E9E4u;
        goto label_40e9e4;
    }
    ctx->pc = 0x40E9DCu;
    SET_GPR_U32(ctx, 31, 0x40E9E4u);
    ctx->pc = 0x40E9E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40E9DCu;
            // 0x40e9e0: 0xe7a000c4  swc1        $f0, 0xC4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x125450u;
    if (runtime->hasFunction(0x125450u)) {
        auto targetFn = runtime->lookupFunction(0x125450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40E9E4u; }
        if (ctx->pc != 0x40E9E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125450_0x125450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40E9E4u; }
        if (ctx->pc != 0x40E9E4u) { return; }
    }
    ctx->pc = 0x40E9E4u;
label_40e9e4:
    // 0x40e9e4: 0xc0474b6  jal         func_11D2D8
label_40e9e8:
    if (ctx->pc == 0x40E9E8u) {
        ctx->pc = 0x40E9E8u;
            // 0x40e9e8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x40E9ECu;
        goto label_40e9ec;
    }
    ctx->pc = 0x40E9E4u;
    SET_GPR_U32(ctx, 31, 0x40E9ECu);
    ctx->pc = 0x40E9E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40E9E4u;
            // 0x40e9e8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11D2D8u;
    if (runtime->hasFunction(0x11D2D8u)) {
        auto targetFn = runtime->lookupFunction(0x11D2D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40E9ECu; }
        if (ctx->pc != 0x40E9ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011D2D8_0x11d2d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40E9ECu; }
        if (ctx->pc != 0x40E9ECu) { return; }
    }
    ctx->pc = 0x40E9ECu;
label_40e9ec:
    // 0x40e9ec: 0xc0497dc  jal         func_125F70
label_40e9f0:
    if (ctx->pc == 0x40E9F0u) {
        ctx->pc = 0x40E9F0u;
            // 0x40e9f0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x40E9F4u;
        goto label_40e9f4;
    }
    ctx->pc = 0x40E9ECu;
    SET_GPR_U32(ctx, 31, 0x40E9F4u);
    ctx->pc = 0x40E9F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40E9ECu;
            // 0x40e9f0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125F70u;
    if (runtime->hasFunction(0x125F70u)) {
        auto targetFn = runtime->lookupFunction(0x125F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40E9F4u; }
        if (ctx->pc != 0x40E9F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125F70_0x125f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40E9F4u; }
        if (ctx->pc != 0x40E9F4u) { return; }
    }
    ctx->pc = 0x40E9F4u;
label_40e9f4:
    // 0x40e9f4: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x40e9f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_40e9f8:
    // 0x40e9f8: 0x92260004  lbu         $a2, 0x4($s1)
    ctx->pc = 0x40e9f8u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
label_40e9fc:
    // 0x40e9fc: 0x14c00016  bnez        $a2, . + 4 + (0x16 << 2)
label_40ea00:
    if (ctx->pc == 0x40EA00u) {
        ctx->pc = 0x40EA04u;
        goto label_40ea04;
    }
    ctx->pc = 0x40E9FCu;
    {
        const bool branch_taken_0x40e9fc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x40e9fc) {
            ctx->pc = 0x40EA58u;
            goto label_40ea58;
        }
    }
    ctx->pc = 0x40EA04u;
label_40ea04:
    // 0x40ea04: 0xc7a100c0  lwc1        $f1, 0xC0($sp)
    ctx->pc = 0x40ea04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_40ea08:
    // 0x40ea08: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x40ea08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_40ea0c:
    // 0x40ea0c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x40ea0cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_40ea10:
    // 0x40ea10: 0x0  nop
    ctx->pc = 0x40ea10u;
    // NOP
label_40ea14:
    // 0x40ea14: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x40ea14u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_40ea18:
    // 0x40ea18: 0x4500000f  bc1f        . + 4 + (0xF << 2)
label_40ea1c:
    if (ctx->pc == 0x40EA1Cu) {
        ctx->pc = 0x40EA20u;
        goto label_40ea20;
    }
    ctx->pc = 0x40EA18u;
    {
        const bool branch_taken_0x40ea18 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x40ea18) {
            ctx->pc = 0x40EA58u;
            goto label_40ea58;
        }
    }
    ctx->pc = 0x40EA20u;
label_40ea20:
    // 0x40ea20: 0xc7a100c4  lwc1        $f1, 0xC4($sp)
    ctx->pc = 0x40ea20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_40ea24:
    // 0x40ea24: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x40ea24u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_40ea28:
    // 0x40ea28: 0x4500000b  bc1f        . + 4 + (0xB << 2)
label_40ea2c:
    if (ctx->pc == 0x40EA2Cu) {
        ctx->pc = 0x40EA30u;
        goto label_40ea30;
    }
    ctx->pc = 0x40EA28u;
    {
        const bool branch_taken_0x40ea28 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x40ea28) {
            ctx->pc = 0x40EA58u;
            goto label_40ea58;
        }
    }
    ctx->pc = 0x40EA30u;
label_40ea30:
    // 0x40ea30: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x40ea30u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_40ea34:
    // 0x40ea34: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_40ea38:
    if (ctx->pc == 0x40EA38u) {
        ctx->pc = 0x40EA3Cu;
        goto label_40ea3c;
    }
    ctx->pc = 0x40EA34u;
    {
        const bool branch_taken_0x40ea34 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x40ea34) {
            ctx->pc = 0x40EA58u;
            goto label_40ea58;
        }
    }
    ctx->pc = 0x40EA3Cu;
label_40ea3c:
    // 0x40ea3c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x40ea3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_40ea40:
    // 0x40ea40: 0xa2220004  sb          $v0, 0x4($s1)
    ctx->pc = 0x40ea40u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4), (uint8_t)GPR_U32(ctx, 2));
label_40ea44:
    // 0x40ea44: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x40ea44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_40ea48:
    // 0x40ea48: 0xc103ad8  jal         func_40EB60
label_40ea4c:
    if (ctx->pc == 0x40EA4Cu) {
        ctx->pc = 0x40EA4Cu;
            // 0x40ea4c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x40EA50u;
        goto label_40ea50;
    }
    ctx->pc = 0x40EA48u;
    SET_GPR_U32(ctx, 31, 0x40EA50u);
    ctx->pc = 0x40EA4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40EA48u;
            // 0x40ea4c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x40EB60u;
    if (runtime->hasFunction(0x40EB60u)) {
        auto targetFn = runtime->lookupFunction(0x40EB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40EA50u; }
        if (ctx->pc != 0x40EA50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0040EB60_0x40eb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40EA50u; }
        if (ctx->pc != 0x40EA50u) { return; }
    }
    ctx->pc = 0x40EA50u;
label_40ea50:
    // 0x40ea50: 0x1000002b  b           . + 4 + (0x2B << 2)
label_40ea54:
    if (ctx->pc == 0x40EA54u) {
        ctx->pc = 0x40EA58u;
        goto label_40ea58;
    }
    ctx->pc = 0x40EA50u;
    {
        const bool branch_taken_0x40ea50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x40ea50) {
            ctx->pc = 0x40EB00u;
            goto label_40eb00;
        }
    }
    ctx->pc = 0x40EA58u;
label_40ea58:
    // 0x40ea58: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_40ea5c:
    if (ctx->pc == 0x40EA5Cu) {
        ctx->pc = 0x40EA60u;
        goto label_40ea60;
    }
    ctx->pc = 0x40EA58u;
    {
        const bool branch_taken_0x40ea58 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x40ea58) {
            ctx->pc = 0x40EA78u;
            goto label_40ea78;
        }
    }
    ctx->pc = 0x40EA60u;
label_40ea60:
    // 0x40ea60: 0xa2200004  sb          $zero, 0x4($s1)
    ctx->pc = 0x40ea60u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4), (uint8_t)GPR_U32(ctx, 0));
label_40ea64:
    // 0x40ea64: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x40ea64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_40ea68:
    // 0x40ea68: 0xc103bb0  jal         func_40EEC0
label_40ea6c:
    if (ctx->pc == 0x40EA6Cu) {
        ctx->pc = 0x40EA6Cu;
            // 0x40ea6c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x40EA70u;
        goto label_40ea70;
    }
    ctx->pc = 0x40EA68u;
    SET_GPR_U32(ctx, 31, 0x40EA70u);
    ctx->pc = 0x40EA6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40EA68u;
            // 0x40ea6c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x40EEC0u;
    if (runtime->hasFunction(0x40EEC0u)) {
        auto targetFn = runtime->lookupFunction(0x40EEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40EA70u; }
        if (ctx->pc != 0x40EA70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0040EEC0_0x40eec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40EA70u; }
        if (ctx->pc != 0x40EA70u) { return; }
    }
    ctx->pc = 0x40EA70u;
label_40ea70:
    // 0x40ea70: 0x10000023  b           . + 4 + (0x23 << 2)
label_40ea74:
    if (ctx->pc == 0x40EA74u) {
        ctx->pc = 0x40EA78u;
        goto label_40ea78;
    }
    ctx->pc = 0x40EA70u;
    {
        const bool branch_taken_0x40ea70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x40ea70) {
            ctx->pc = 0x40EB00u;
            goto label_40eb00;
        }
    }
    ctx->pc = 0x40EA78u;
label_40ea78:
    // 0x40ea78: 0x14c00021  bnez        $a2, . + 4 + (0x21 << 2)
label_40ea7c:
    if (ctx->pc == 0x40EA7Cu) {
        ctx->pc = 0x40EA80u;
        goto label_40ea80;
    }
    ctx->pc = 0x40EA78u;
    {
        const bool branch_taken_0x40ea78 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x40ea78) {
            ctx->pc = 0x40EB00u;
            goto label_40eb00;
        }
    }
    ctx->pc = 0x40EA80u;
label_40ea80:
    // 0x40ea80: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x40ea80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_40ea84:
    // 0x40ea84: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x40ea84u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_40ea88:
    // 0x40ea88: 0x0  nop
    ctx->pc = 0x40ea88u;
    // NOP
label_40ea8c:
    // 0x40ea8c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x40ea8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_40ea90:
    // 0x40ea90: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
label_40ea94:
    if (ctx->pc == 0x40EA94u) {
        ctx->pc = 0x40EA98u;
        goto label_40ea98;
    }
    ctx->pc = 0x40EA90u;
    {
        const bool branch_taken_0x40ea90 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x40ea90) {
            ctx->pc = 0x40EB00u;
            goto label_40eb00;
        }
    }
    ctx->pc = 0x40EA98u;
label_40ea98:
    // 0x40ea98: 0xc049514  jal         func_125450
label_40ea9c:
    if (ctx->pc == 0x40EA9Cu) {
        ctx->pc = 0x40EA9Cu;
            // 0x40ea9c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x40EAA0u;
        goto label_40eaa0;
    }
    ctx->pc = 0x40EA98u;
    SET_GPR_U32(ctx, 31, 0x40EAA0u);
    ctx->pc = 0x40EA9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40EA98u;
            // 0x40ea9c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x125450u;
    if (runtime->hasFunction(0x125450u)) {
        auto targetFn = runtime->lookupFunction(0x125450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40EAA0u; }
        if (ctx->pc != 0x40EAA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125450_0x125450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40EAA0u; }
        if (ctx->pc != 0x40EAA0u) { return; }
    }
    ctx->pc = 0x40EAA0u;
label_40eaa0:
    // 0x40eaa0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x40eaa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_40eaa4:
    // 0x40eaa4: 0xc04020c  jal         func_100830
label_40eaa8:
    if (ctx->pc == 0x40EAA8u) {
        ctx->pc = 0x40EAA8u;
            // 0x40eaa8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x40EAACu;
        goto label_40eaac;
    }
    ctx->pc = 0x40EAA4u;
    SET_GPR_U32(ctx, 31, 0x40EAACu);
    ctx->pc = 0x40EAA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40EAA4u;
            // 0x40eaa8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100830u;
    if (runtime->hasFunction(0x100830u)) {
        auto targetFn = runtime->lookupFunction(0x100830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40EAACu; }
        if (ctx->pc != 0x40EAACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100830_0x100830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40EAACu; }
        if (ctx->pc != 0x40EAACu) { return; }
    }
    ctx->pc = 0x40EAACu;
label_40eaac:
    // 0x40eaac: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_40eab0:
    if (ctx->pc == 0x40EAB0u) {
        ctx->pc = 0x40EAB4u;
        goto label_40eab4;
    }
    ctx->pc = 0x40EAACu;
    {
        const bool branch_taken_0x40eaac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x40eaac) {
            ctx->pc = 0x40EB00u;
            goto label_40eb00;
        }
    }
    ctx->pc = 0x40EAB4u;
label_40eab4:
    // 0x40eab4: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x40eab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_40eab8:
    // 0x40eab8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x40eab8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_40eabc:
    // 0x40eabc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x40eabcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_40eac0:
    // 0x40eac0: 0x0  nop
    ctx->pc = 0x40eac0u;
    // NOP
label_40eac4:
    // 0x40eac4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x40eac4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_40eac8:
    // 0x40eac8: 0x4500000d  bc1f        . + 4 + (0xD << 2)
label_40eacc:
    if (ctx->pc == 0x40EACCu) {
        ctx->pc = 0x40EAD0u;
        goto label_40ead0;
    }
    ctx->pc = 0x40EAC8u;
    {
        const bool branch_taken_0x40eac8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x40eac8) {
            ctx->pc = 0x40EB00u;
            goto label_40eb00;
        }
    }
    ctx->pc = 0x40EAD0u;
label_40ead0:
    // 0x40ead0: 0xc7a000c4  lwc1        $f0, 0xC4($sp)
    ctx->pc = 0x40ead0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_40ead4:
    // 0x40ead4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x40ead4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_40ead8:
    // 0x40ead8: 0x45000009  bc1f        . + 4 + (0x9 << 2)
label_40eadc:
    if (ctx->pc == 0x40EADCu) {
        ctx->pc = 0x40EAE0u;
        goto label_40eae0;
    }
    ctx->pc = 0x40EAD8u;
    {
        const bool branch_taken_0x40ead8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x40ead8) {
            ctx->pc = 0x40EB00u;
            goto label_40eb00;
        }
    }
    ctx->pc = 0x40EAE0u;
label_40eae0:
    // 0x40eae0: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x40eae0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_40eae4:
    // 0x40eae4: 0xc103ad8  jal         func_40EB60
label_40eae8:
    if (ctx->pc == 0x40EAE8u) {
        ctx->pc = 0x40EAE8u;
            // 0x40eae8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x40EAECu;
        goto label_40eaec;
    }
    ctx->pc = 0x40EAE4u;
    SET_GPR_U32(ctx, 31, 0x40EAECu);
    ctx->pc = 0x40EAE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40EAE4u;
            // 0x40eae8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x40EB60u;
    if (runtime->hasFunction(0x40EB60u)) {
        auto targetFn = runtime->lookupFunction(0x40EB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40EAECu; }
        if (ctx->pc != 0x40EAECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0040EB60_0x40eb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40EAECu; }
        if (ctx->pc != 0x40EAECu) { return; }
    }
    ctx->pc = 0x40EAECu;
label_40eaec:
    // 0x40eaec: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x40eaecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_40eaf0:
    // 0x40eaf0: 0xc103bb0  jal         func_40EEC0
label_40eaf4:
    if (ctx->pc == 0x40EAF4u) {
        ctx->pc = 0x40EAF4u;
            // 0x40eaf4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x40EAF8u;
        goto label_40eaf8;
    }
    ctx->pc = 0x40EAF0u;
    SET_GPR_U32(ctx, 31, 0x40EAF8u);
    ctx->pc = 0x40EAF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40EAF0u;
            // 0x40eaf4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x40EEC0u;
    if (runtime->hasFunction(0x40EEC0u)) {
        auto targetFn = runtime->lookupFunction(0x40EEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40EAF8u; }
        if (ctx->pc != 0x40EAF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0040EEC0_0x40eec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40EAF8u; }
        if (ctx->pc != 0x40EAF8u) { return; }
    }
    ctx->pc = 0x40EAF8u;
label_40eaf8:
    // 0x40eaf8: 0xa2200004  sb          $zero, 0x4($s1)
    ctx->pc = 0x40eaf8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4), (uint8_t)GPR_U32(ctx, 0));
label_40eafc:
    // 0x40eafc: 0x0  nop
    ctx->pc = 0x40eafcu;
    // NOP
label_40eb00:
    // 0x40eb00: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x40eb00u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_40eb04:
    // 0x40eb04: 0xe6340000  swc1        $f20, 0x0($s1)
    ctx->pc = 0x40eb04u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_40eb08:
    // 0x40eb08: 0x257182b  sltu        $v1, $s2, $s7
    ctx->pc = 0x40eb08u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
label_40eb0c:
    // 0x40eb0c: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x40eb0cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_40eb10:
    // 0x40eb10: 0x1460ff9d  bnez        $v1, . + 4 + (-0x63 << 2)
label_40eb14:
    if (ctx->pc == 0x40EB14u) {
        ctx->pc = 0x40EB14u;
            // 0x40eb14: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->pc = 0x40EB18u;
        goto label_40eb18;
    }
    ctx->pc = 0x40EB10u;
    {
        const bool branch_taken_0x40eb10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x40EB14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40EB10u;
            // 0x40eb14: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40eb10) {
            ctx->pc = 0x40E988u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_40e988;
        }
    }
    ctx->pc = 0x40EB18u;
label_40eb18:
    // 0x40eb18: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x40eb18u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_40eb1c:
    // 0x40eb1c: 0x2be182b  sltu        $v1, $s5, $fp
    ctx->pc = 0x40eb1cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
label_40eb20:
    // 0x40eb20: 0x1460ff7c  bnez        $v1, . + 4 + (-0x84 << 2)
label_40eb24:
    if (ctx->pc == 0x40EB24u) {
        ctx->pc = 0x40EB24u;
            // 0x40eb24: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x40EB28u;
        goto label_40eb28;
    }
    ctx->pc = 0x40EB20u;
    {
        const bool branch_taken_0x40eb20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x40EB24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40EB20u;
            // 0x40eb24: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40eb20) {
            ctx->pc = 0x40E914u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_40e914;
        }
    }
    ctx->pc = 0x40EB28u;
label_40eb28:
    // 0x40eb28: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x40eb28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_40eb2c:
    // 0x40eb2c: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x40eb2cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_40eb30:
    // 0x40eb30: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x40eb30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_40eb34:
    // 0x40eb34: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x40eb34u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_40eb38:
    // 0x40eb38: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x40eb38u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_40eb3c:
    // 0x40eb3c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x40eb3cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_40eb40:
    // 0x40eb40: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x40eb40u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_40eb44:
    // 0x40eb44: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x40eb44u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_40eb48:
    // 0x40eb48: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x40eb48u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_40eb4c:
    // 0x40eb4c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x40eb4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_40eb50:
    // 0x40eb50: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x40eb50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_40eb54:
    // 0x40eb54: 0x3e00008  jr          $ra
label_40eb58:
    if (ctx->pc == 0x40EB58u) {
        ctx->pc = 0x40EB58u;
            // 0x40eb58: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x40EB5Cu;
        goto label_40eb5c;
    }
    ctx->pc = 0x40EB54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40EB58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40EB54u;
            // 0x40eb58: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x40EB5Cu;
label_40eb5c:
    // 0x40eb5c: 0x0  nop
    ctx->pc = 0x40eb5cu;
    // NOP
}
