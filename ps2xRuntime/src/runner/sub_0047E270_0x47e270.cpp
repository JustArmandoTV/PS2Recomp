#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0047E270
// Address: 0x47e270 - 0x47f0e0
void sub_0047E270_0x47e270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047E270_0x47e270");
#endif

    switch (ctx->pc) {
        case 0x47e270u: goto label_47e270;
        case 0x47e274u: goto label_47e274;
        case 0x47e278u: goto label_47e278;
        case 0x47e27cu: goto label_47e27c;
        case 0x47e280u: goto label_47e280;
        case 0x47e284u: goto label_47e284;
        case 0x47e288u: goto label_47e288;
        case 0x47e28cu: goto label_47e28c;
        case 0x47e290u: goto label_47e290;
        case 0x47e294u: goto label_47e294;
        case 0x47e298u: goto label_47e298;
        case 0x47e29cu: goto label_47e29c;
        case 0x47e2a0u: goto label_47e2a0;
        case 0x47e2a4u: goto label_47e2a4;
        case 0x47e2a8u: goto label_47e2a8;
        case 0x47e2acu: goto label_47e2ac;
        case 0x47e2b0u: goto label_47e2b0;
        case 0x47e2b4u: goto label_47e2b4;
        case 0x47e2b8u: goto label_47e2b8;
        case 0x47e2bcu: goto label_47e2bc;
        case 0x47e2c0u: goto label_47e2c0;
        case 0x47e2c4u: goto label_47e2c4;
        case 0x47e2c8u: goto label_47e2c8;
        case 0x47e2ccu: goto label_47e2cc;
        case 0x47e2d0u: goto label_47e2d0;
        case 0x47e2d4u: goto label_47e2d4;
        case 0x47e2d8u: goto label_47e2d8;
        case 0x47e2dcu: goto label_47e2dc;
        case 0x47e2e0u: goto label_47e2e0;
        case 0x47e2e4u: goto label_47e2e4;
        case 0x47e2e8u: goto label_47e2e8;
        case 0x47e2ecu: goto label_47e2ec;
        case 0x47e2f0u: goto label_47e2f0;
        case 0x47e2f4u: goto label_47e2f4;
        case 0x47e2f8u: goto label_47e2f8;
        case 0x47e2fcu: goto label_47e2fc;
        case 0x47e300u: goto label_47e300;
        case 0x47e304u: goto label_47e304;
        case 0x47e308u: goto label_47e308;
        case 0x47e30cu: goto label_47e30c;
        case 0x47e310u: goto label_47e310;
        case 0x47e314u: goto label_47e314;
        case 0x47e318u: goto label_47e318;
        case 0x47e31cu: goto label_47e31c;
        case 0x47e320u: goto label_47e320;
        case 0x47e324u: goto label_47e324;
        case 0x47e328u: goto label_47e328;
        case 0x47e32cu: goto label_47e32c;
        case 0x47e330u: goto label_47e330;
        case 0x47e334u: goto label_47e334;
        case 0x47e338u: goto label_47e338;
        case 0x47e33cu: goto label_47e33c;
        case 0x47e340u: goto label_47e340;
        case 0x47e344u: goto label_47e344;
        case 0x47e348u: goto label_47e348;
        case 0x47e34cu: goto label_47e34c;
        case 0x47e350u: goto label_47e350;
        case 0x47e354u: goto label_47e354;
        case 0x47e358u: goto label_47e358;
        case 0x47e35cu: goto label_47e35c;
        case 0x47e360u: goto label_47e360;
        case 0x47e364u: goto label_47e364;
        case 0x47e368u: goto label_47e368;
        case 0x47e36cu: goto label_47e36c;
        case 0x47e370u: goto label_47e370;
        case 0x47e374u: goto label_47e374;
        case 0x47e378u: goto label_47e378;
        case 0x47e37cu: goto label_47e37c;
        case 0x47e380u: goto label_47e380;
        case 0x47e384u: goto label_47e384;
        case 0x47e388u: goto label_47e388;
        case 0x47e38cu: goto label_47e38c;
        case 0x47e390u: goto label_47e390;
        case 0x47e394u: goto label_47e394;
        case 0x47e398u: goto label_47e398;
        case 0x47e39cu: goto label_47e39c;
        case 0x47e3a0u: goto label_47e3a0;
        case 0x47e3a4u: goto label_47e3a4;
        case 0x47e3a8u: goto label_47e3a8;
        case 0x47e3acu: goto label_47e3ac;
        case 0x47e3b0u: goto label_47e3b0;
        case 0x47e3b4u: goto label_47e3b4;
        case 0x47e3b8u: goto label_47e3b8;
        case 0x47e3bcu: goto label_47e3bc;
        case 0x47e3c0u: goto label_47e3c0;
        case 0x47e3c4u: goto label_47e3c4;
        case 0x47e3c8u: goto label_47e3c8;
        case 0x47e3ccu: goto label_47e3cc;
        case 0x47e3d0u: goto label_47e3d0;
        case 0x47e3d4u: goto label_47e3d4;
        case 0x47e3d8u: goto label_47e3d8;
        case 0x47e3dcu: goto label_47e3dc;
        case 0x47e3e0u: goto label_47e3e0;
        case 0x47e3e4u: goto label_47e3e4;
        case 0x47e3e8u: goto label_47e3e8;
        case 0x47e3ecu: goto label_47e3ec;
        case 0x47e3f0u: goto label_47e3f0;
        case 0x47e3f4u: goto label_47e3f4;
        case 0x47e3f8u: goto label_47e3f8;
        case 0x47e3fcu: goto label_47e3fc;
        case 0x47e400u: goto label_47e400;
        case 0x47e404u: goto label_47e404;
        case 0x47e408u: goto label_47e408;
        case 0x47e40cu: goto label_47e40c;
        case 0x47e410u: goto label_47e410;
        case 0x47e414u: goto label_47e414;
        case 0x47e418u: goto label_47e418;
        case 0x47e41cu: goto label_47e41c;
        case 0x47e420u: goto label_47e420;
        case 0x47e424u: goto label_47e424;
        case 0x47e428u: goto label_47e428;
        case 0x47e42cu: goto label_47e42c;
        case 0x47e430u: goto label_47e430;
        case 0x47e434u: goto label_47e434;
        case 0x47e438u: goto label_47e438;
        case 0x47e43cu: goto label_47e43c;
        case 0x47e440u: goto label_47e440;
        case 0x47e444u: goto label_47e444;
        case 0x47e448u: goto label_47e448;
        case 0x47e44cu: goto label_47e44c;
        case 0x47e450u: goto label_47e450;
        case 0x47e454u: goto label_47e454;
        case 0x47e458u: goto label_47e458;
        case 0x47e45cu: goto label_47e45c;
        case 0x47e460u: goto label_47e460;
        case 0x47e464u: goto label_47e464;
        case 0x47e468u: goto label_47e468;
        case 0x47e46cu: goto label_47e46c;
        case 0x47e470u: goto label_47e470;
        case 0x47e474u: goto label_47e474;
        case 0x47e478u: goto label_47e478;
        case 0x47e47cu: goto label_47e47c;
        case 0x47e480u: goto label_47e480;
        case 0x47e484u: goto label_47e484;
        case 0x47e488u: goto label_47e488;
        case 0x47e48cu: goto label_47e48c;
        case 0x47e490u: goto label_47e490;
        case 0x47e494u: goto label_47e494;
        case 0x47e498u: goto label_47e498;
        case 0x47e49cu: goto label_47e49c;
        case 0x47e4a0u: goto label_47e4a0;
        case 0x47e4a4u: goto label_47e4a4;
        case 0x47e4a8u: goto label_47e4a8;
        case 0x47e4acu: goto label_47e4ac;
        case 0x47e4b0u: goto label_47e4b0;
        case 0x47e4b4u: goto label_47e4b4;
        case 0x47e4b8u: goto label_47e4b8;
        case 0x47e4bcu: goto label_47e4bc;
        case 0x47e4c0u: goto label_47e4c0;
        case 0x47e4c4u: goto label_47e4c4;
        case 0x47e4c8u: goto label_47e4c8;
        case 0x47e4ccu: goto label_47e4cc;
        case 0x47e4d0u: goto label_47e4d0;
        case 0x47e4d4u: goto label_47e4d4;
        case 0x47e4d8u: goto label_47e4d8;
        case 0x47e4dcu: goto label_47e4dc;
        case 0x47e4e0u: goto label_47e4e0;
        case 0x47e4e4u: goto label_47e4e4;
        case 0x47e4e8u: goto label_47e4e8;
        case 0x47e4ecu: goto label_47e4ec;
        case 0x47e4f0u: goto label_47e4f0;
        case 0x47e4f4u: goto label_47e4f4;
        case 0x47e4f8u: goto label_47e4f8;
        case 0x47e4fcu: goto label_47e4fc;
        case 0x47e500u: goto label_47e500;
        case 0x47e504u: goto label_47e504;
        case 0x47e508u: goto label_47e508;
        case 0x47e50cu: goto label_47e50c;
        case 0x47e510u: goto label_47e510;
        case 0x47e514u: goto label_47e514;
        case 0x47e518u: goto label_47e518;
        case 0x47e51cu: goto label_47e51c;
        case 0x47e520u: goto label_47e520;
        case 0x47e524u: goto label_47e524;
        case 0x47e528u: goto label_47e528;
        case 0x47e52cu: goto label_47e52c;
        case 0x47e530u: goto label_47e530;
        case 0x47e534u: goto label_47e534;
        case 0x47e538u: goto label_47e538;
        case 0x47e53cu: goto label_47e53c;
        case 0x47e540u: goto label_47e540;
        case 0x47e544u: goto label_47e544;
        case 0x47e548u: goto label_47e548;
        case 0x47e54cu: goto label_47e54c;
        case 0x47e550u: goto label_47e550;
        case 0x47e554u: goto label_47e554;
        case 0x47e558u: goto label_47e558;
        case 0x47e55cu: goto label_47e55c;
        case 0x47e560u: goto label_47e560;
        case 0x47e564u: goto label_47e564;
        case 0x47e568u: goto label_47e568;
        case 0x47e56cu: goto label_47e56c;
        case 0x47e570u: goto label_47e570;
        case 0x47e574u: goto label_47e574;
        case 0x47e578u: goto label_47e578;
        case 0x47e57cu: goto label_47e57c;
        case 0x47e580u: goto label_47e580;
        case 0x47e584u: goto label_47e584;
        case 0x47e588u: goto label_47e588;
        case 0x47e58cu: goto label_47e58c;
        case 0x47e590u: goto label_47e590;
        case 0x47e594u: goto label_47e594;
        case 0x47e598u: goto label_47e598;
        case 0x47e59cu: goto label_47e59c;
        case 0x47e5a0u: goto label_47e5a0;
        case 0x47e5a4u: goto label_47e5a4;
        case 0x47e5a8u: goto label_47e5a8;
        case 0x47e5acu: goto label_47e5ac;
        case 0x47e5b0u: goto label_47e5b0;
        case 0x47e5b4u: goto label_47e5b4;
        case 0x47e5b8u: goto label_47e5b8;
        case 0x47e5bcu: goto label_47e5bc;
        case 0x47e5c0u: goto label_47e5c0;
        case 0x47e5c4u: goto label_47e5c4;
        case 0x47e5c8u: goto label_47e5c8;
        case 0x47e5ccu: goto label_47e5cc;
        case 0x47e5d0u: goto label_47e5d0;
        case 0x47e5d4u: goto label_47e5d4;
        case 0x47e5d8u: goto label_47e5d8;
        case 0x47e5dcu: goto label_47e5dc;
        case 0x47e5e0u: goto label_47e5e0;
        case 0x47e5e4u: goto label_47e5e4;
        case 0x47e5e8u: goto label_47e5e8;
        case 0x47e5ecu: goto label_47e5ec;
        case 0x47e5f0u: goto label_47e5f0;
        case 0x47e5f4u: goto label_47e5f4;
        case 0x47e5f8u: goto label_47e5f8;
        case 0x47e5fcu: goto label_47e5fc;
        case 0x47e600u: goto label_47e600;
        case 0x47e604u: goto label_47e604;
        case 0x47e608u: goto label_47e608;
        case 0x47e60cu: goto label_47e60c;
        case 0x47e610u: goto label_47e610;
        case 0x47e614u: goto label_47e614;
        case 0x47e618u: goto label_47e618;
        case 0x47e61cu: goto label_47e61c;
        case 0x47e620u: goto label_47e620;
        case 0x47e624u: goto label_47e624;
        case 0x47e628u: goto label_47e628;
        case 0x47e62cu: goto label_47e62c;
        case 0x47e630u: goto label_47e630;
        case 0x47e634u: goto label_47e634;
        case 0x47e638u: goto label_47e638;
        case 0x47e63cu: goto label_47e63c;
        case 0x47e640u: goto label_47e640;
        case 0x47e644u: goto label_47e644;
        case 0x47e648u: goto label_47e648;
        case 0x47e64cu: goto label_47e64c;
        case 0x47e650u: goto label_47e650;
        case 0x47e654u: goto label_47e654;
        case 0x47e658u: goto label_47e658;
        case 0x47e65cu: goto label_47e65c;
        case 0x47e660u: goto label_47e660;
        case 0x47e664u: goto label_47e664;
        case 0x47e668u: goto label_47e668;
        case 0x47e66cu: goto label_47e66c;
        case 0x47e670u: goto label_47e670;
        case 0x47e674u: goto label_47e674;
        case 0x47e678u: goto label_47e678;
        case 0x47e67cu: goto label_47e67c;
        case 0x47e680u: goto label_47e680;
        case 0x47e684u: goto label_47e684;
        case 0x47e688u: goto label_47e688;
        case 0x47e68cu: goto label_47e68c;
        case 0x47e690u: goto label_47e690;
        case 0x47e694u: goto label_47e694;
        case 0x47e698u: goto label_47e698;
        case 0x47e69cu: goto label_47e69c;
        case 0x47e6a0u: goto label_47e6a0;
        case 0x47e6a4u: goto label_47e6a4;
        case 0x47e6a8u: goto label_47e6a8;
        case 0x47e6acu: goto label_47e6ac;
        case 0x47e6b0u: goto label_47e6b0;
        case 0x47e6b4u: goto label_47e6b4;
        case 0x47e6b8u: goto label_47e6b8;
        case 0x47e6bcu: goto label_47e6bc;
        case 0x47e6c0u: goto label_47e6c0;
        case 0x47e6c4u: goto label_47e6c4;
        case 0x47e6c8u: goto label_47e6c8;
        case 0x47e6ccu: goto label_47e6cc;
        case 0x47e6d0u: goto label_47e6d0;
        case 0x47e6d4u: goto label_47e6d4;
        case 0x47e6d8u: goto label_47e6d8;
        case 0x47e6dcu: goto label_47e6dc;
        case 0x47e6e0u: goto label_47e6e0;
        case 0x47e6e4u: goto label_47e6e4;
        case 0x47e6e8u: goto label_47e6e8;
        case 0x47e6ecu: goto label_47e6ec;
        case 0x47e6f0u: goto label_47e6f0;
        case 0x47e6f4u: goto label_47e6f4;
        case 0x47e6f8u: goto label_47e6f8;
        case 0x47e6fcu: goto label_47e6fc;
        case 0x47e700u: goto label_47e700;
        case 0x47e704u: goto label_47e704;
        case 0x47e708u: goto label_47e708;
        case 0x47e70cu: goto label_47e70c;
        case 0x47e710u: goto label_47e710;
        case 0x47e714u: goto label_47e714;
        case 0x47e718u: goto label_47e718;
        case 0x47e71cu: goto label_47e71c;
        case 0x47e720u: goto label_47e720;
        case 0x47e724u: goto label_47e724;
        case 0x47e728u: goto label_47e728;
        case 0x47e72cu: goto label_47e72c;
        case 0x47e730u: goto label_47e730;
        case 0x47e734u: goto label_47e734;
        case 0x47e738u: goto label_47e738;
        case 0x47e73cu: goto label_47e73c;
        case 0x47e740u: goto label_47e740;
        case 0x47e744u: goto label_47e744;
        case 0x47e748u: goto label_47e748;
        case 0x47e74cu: goto label_47e74c;
        case 0x47e750u: goto label_47e750;
        case 0x47e754u: goto label_47e754;
        case 0x47e758u: goto label_47e758;
        case 0x47e75cu: goto label_47e75c;
        case 0x47e760u: goto label_47e760;
        case 0x47e764u: goto label_47e764;
        case 0x47e768u: goto label_47e768;
        case 0x47e76cu: goto label_47e76c;
        case 0x47e770u: goto label_47e770;
        case 0x47e774u: goto label_47e774;
        case 0x47e778u: goto label_47e778;
        case 0x47e77cu: goto label_47e77c;
        case 0x47e780u: goto label_47e780;
        case 0x47e784u: goto label_47e784;
        case 0x47e788u: goto label_47e788;
        case 0x47e78cu: goto label_47e78c;
        case 0x47e790u: goto label_47e790;
        case 0x47e794u: goto label_47e794;
        case 0x47e798u: goto label_47e798;
        case 0x47e79cu: goto label_47e79c;
        case 0x47e7a0u: goto label_47e7a0;
        case 0x47e7a4u: goto label_47e7a4;
        case 0x47e7a8u: goto label_47e7a8;
        case 0x47e7acu: goto label_47e7ac;
        case 0x47e7b0u: goto label_47e7b0;
        case 0x47e7b4u: goto label_47e7b4;
        case 0x47e7b8u: goto label_47e7b8;
        case 0x47e7bcu: goto label_47e7bc;
        case 0x47e7c0u: goto label_47e7c0;
        case 0x47e7c4u: goto label_47e7c4;
        case 0x47e7c8u: goto label_47e7c8;
        case 0x47e7ccu: goto label_47e7cc;
        case 0x47e7d0u: goto label_47e7d0;
        case 0x47e7d4u: goto label_47e7d4;
        case 0x47e7d8u: goto label_47e7d8;
        case 0x47e7dcu: goto label_47e7dc;
        case 0x47e7e0u: goto label_47e7e0;
        case 0x47e7e4u: goto label_47e7e4;
        case 0x47e7e8u: goto label_47e7e8;
        case 0x47e7ecu: goto label_47e7ec;
        case 0x47e7f0u: goto label_47e7f0;
        case 0x47e7f4u: goto label_47e7f4;
        case 0x47e7f8u: goto label_47e7f8;
        case 0x47e7fcu: goto label_47e7fc;
        case 0x47e800u: goto label_47e800;
        case 0x47e804u: goto label_47e804;
        case 0x47e808u: goto label_47e808;
        case 0x47e80cu: goto label_47e80c;
        case 0x47e810u: goto label_47e810;
        case 0x47e814u: goto label_47e814;
        case 0x47e818u: goto label_47e818;
        case 0x47e81cu: goto label_47e81c;
        case 0x47e820u: goto label_47e820;
        case 0x47e824u: goto label_47e824;
        case 0x47e828u: goto label_47e828;
        case 0x47e82cu: goto label_47e82c;
        case 0x47e830u: goto label_47e830;
        case 0x47e834u: goto label_47e834;
        case 0x47e838u: goto label_47e838;
        case 0x47e83cu: goto label_47e83c;
        case 0x47e840u: goto label_47e840;
        case 0x47e844u: goto label_47e844;
        case 0x47e848u: goto label_47e848;
        case 0x47e84cu: goto label_47e84c;
        case 0x47e850u: goto label_47e850;
        case 0x47e854u: goto label_47e854;
        case 0x47e858u: goto label_47e858;
        case 0x47e85cu: goto label_47e85c;
        case 0x47e860u: goto label_47e860;
        case 0x47e864u: goto label_47e864;
        case 0x47e868u: goto label_47e868;
        case 0x47e86cu: goto label_47e86c;
        case 0x47e870u: goto label_47e870;
        case 0x47e874u: goto label_47e874;
        case 0x47e878u: goto label_47e878;
        case 0x47e87cu: goto label_47e87c;
        case 0x47e880u: goto label_47e880;
        case 0x47e884u: goto label_47e884;
        case 0x47e888u: goto label_47e888;
        case 0x47e88cu: goto label_47e88c;
        case 0x47e890u: goto label_47e890;
        case 0x47e894u: goto label_47e894;
        case 0x47e898u: goto label_47e898;
        case 0x47e89cu: goto label_47e89c;
        case 0x47e8a0u: goto label_47e8a0;
        case 0x47e8a4u: goto label_47e8a4;
        case 0x47e8a8u: goto label_47e8a8;
        case 0x47e8acu: goto label_47e8ac;
        case 0x47e8b0u: goto label_47e8b0;
        case 0x47e8b4u: goto label_47e8b4;
        case 0x47e8b8u: goto label_47e8b8;
        case 0x47e8bcu: goto label_47e8bc;
        case 0x47e8c0u: goto label_47e8c0;
        case 0x47e8c4u: goto label_47e8c4;
        case 0x47e8c8u: goto label_47e8c8;
        case 0x47e8ccu: goto label_47e8cc;
        case 0x47e8d0u: goto label_47e8d0;
        case 0x47e8d4u: goto label_47e8d4;
        case 0x47e8d8u: goto label_47e8d8;
        case 0x47e8dcu: goto label_47e8dc;
        case 0x47e8e0u: goto label_47e8e0;
        case 0x47e8e4u: goto label_47e8e4;
        case 0x47e8e8u: goto label_47e8e8;
        case 0x47e8ecu: goto label_47e8ec;
        case 0x47e8f0u: goto label_47e8f0;
        case 0x47e8f4u: goto label_47e8f4;
        case 0x47e8f8u: goto label_47e8f8;
        case 0x47e8fcu: goto label_47e8fc;
        case 0x47e900u: goto label_47e900;
        case 0x47e904u: goto label_47e904;
        case 0x47e908u: goto label_47e908;
        case 0x47e90cu: goto label_47e90c;
        case 0x47e910u: goto label_47e910;
        case 0x47e914u: goto label_47e914;
        case 0x47e918u: goto label_47e918;
        case 0x47e91cu: goto label_47e91c;
        case 0x47e920u: goto label_47e920;
        case 0x47e924u: goto label_47e924;
        case 0x47e928u: goto label_47e928;
        case 0x47e92cu: goto label_47e92c;
        case 0x47e930u: goto label_47e930;
        case 0x47e934u: goto label_47e934;
        case 0x47e938u: goto label_47e938;
        case 0x47e93cu: goto label_47e93c;
        case 0x47e940u: goto label_47e940;
        case 0x47e944u: goto label_47e944;
        case 0x47e948u: goto label_47e948;
        case 0x47e94cu: goto label_47e94c;
        case 0x47e950u: goto label_47e950;
        case 0x47e954u: goto label_47e954;
        case 0x47e958u: goto label_47e958;
        case 0x47e95cu: goto label_47e95c;
        case 0x47e960u: goto label_47e960;
        case 0x47e964u: goto label_47e964;
        case 0x47e968u: goto label_47e968;
        case 0x47e96cu: goto label_47e96c;
        case 0x47e970u: goto label_47e970;
        case 0x47e974u: goto label_47e974;
        case 0x47e978u: goto label_47e978;
        case 0x47e97cu: goto label_47e97c;
        case 0x47e980u: goto label_47e980;
        case 0x47e984u: goto label_47e984;
        case 0x47e988u: goto label_47e988;
        case 0x47e98cu: goto label_47e98c;
        case 0x47e990u: goto label_47e990;
        case 0x47e994u: goto label_47e994;
        case 0x47e998u: goto label_47e998;
        case 0x47e99cu: goto label_47e99c;
        case 0x47e9a0u: goto label_47e9a0;
        case 0x47e9a4u: goto label_47e9a4;
        case 0x47e9a8u: goto label_47e9a8;
        case 0x47e9acu: goto label_47e9ac;
        case 0x47e9b0u: goto label_47e9b0;
        case 0x47e9b4u: goto label_47e9b4;
        case 0x47e9b8u: goto label_47e9b8;
        case 0x47e9bcu: goto label_47e9bc;
        case 0x47e9c0u: goto label_47e9c0;
        case 0x47e9c4u: goto label_47e9c4;
        case 0x47e9c8u: goto label_47e9c8;
        case 0x47e9ccu: goto label_47e9cc;
        case 0x47e9d0u: goto label_47e9d0;
        case 0x47e9d4u: goto label_47e9d4;
        case 0x47e9d8u: goto label_47e9d8;
        case 0x47e9dcu: goto label_47e9dc;
        case 0x47e9e0u: goto label_47e9e0;
        case 0x47e9e4u: goto label_47e9e4;
        case 0x47e9e8u: goto label_47e9e8;
        case 0x47e9ecu: goto label_47e9ec;
        case 0x47e9f0u: goto label_47e9f0;
        case 0x47e9f4u: goto label_47e9f4;
        case 0x47e9f8u: goto label_47e9f8;
        case 0x47e9fcu: goto label_47e9fc;
        case 0x47ea00u: goto label_47ea00;
        case 0x47ea04u: goto label_47ea04;
        case 0x47ea08u: goto label_47ea08;
        case 0x47ea0cu: goto label_47ea0c;
        case 0x47ea10u: goto label_47ea10;
        case 0x47ea14u: goto label_47ea14;
        case 0x47ea18u: goto label_47ea18;
        case 0x47ea1cu: goto label_47ea1c;
        case 0x47ea20u: goto label_47ea20;
        case 0x47ea24u: goto label_47ea24;
        case 0x47ea28u: goto label_47ea28;
        case 0x47ea2cu: goto label_47ea2c;
        case 0x47ea30u: goto label_47ea30;
        case 0x47ea34u: goto label_47ea34;
        case 0x47ea38u: goto label_47ea38;
        case 0x47ea3cu: goto label_47ea3c;
        case 0x47ea40u: goto label_47ea40;
        case 0x47ea44u: goto label_47ea44;
        case 0x47ea48u: goto label_47ea48;
        case 0x47ea4cu: goto label_47ea4c;
        case 0x47ea50u: goto label_47ea50;
        case 0x47ea54u: goto label_47ea54;
        case 0x47ea58u: goto label_47ea58;
        case 0x47ea5cu: goto label_47ea5c;
        case 0x47ea60u: goto label_47ea60;
        case 0x47ea64u: goto label_47ea64;
        case 0x47ea68u: goto label_47ea68;
        case 0x47ea6cu: goto label_47ea6c;
        case 0x47ea70u: goto label_47ea70;
        case 0x47ea74u: goto label_47ea74;
        case 0x47ea78u: goto label_47ea78;
        case 0x47ea7cu: goto label_47ea7c;
        case 0x47ea80u: goto label_47ea80;
        case 0x47ea84u: goto label_47ea84;
        case 0x47ea88u: goto label_47ea88;
        case 0x47ea8cu: goto label_47ea8c;
        case 0x47ea90u: goto label_47ea90;
        case 0x47ea94u: goto label_47ea94;
        case 0x47ea98u: goto label_47ea98;
        case 0x47ea9cu: goto label_47ea9c;
        case 0x47eaa0u: goto label_47eaa0;
        case 0x47eaa4u: goto label_47eaa4;
        case 0x47eaa8u: goto label_47eaa8;
        case 0x47eaacu: goto label_47eaac;
        case 0x47eab0u: goto label_47eab0;
        case 0x47eab4u: goto label_47eab4;
        case 0x47eab8u: goto label_47eab8;
        case 0x47eabcu: goto label_47eabc;
        case 0x47eac0u: goto label_47eac0;
        case 0x47eac4u: goto label_47eac4;
        case 0x47eac8u: goto label_47eac8;
        case 0x47eaccu: goto label_47eacc;
        case 0x47ead0u: goto label_47ead0;
        case 0x47ead4u: goto label_47ead4;
        case 0x47ead8u: goto label_47ead8;
        case 0x47eadcu: goto label_47eadc;
        case 0x47eae0u: goto label_47eae0;
        case 0x47eae4u: goto label_47eae4;
        case 0x47eae8u: goto label_47eae8;
        case 0x47eaecu: goto label_47eaec;
        case 0x47eaf0u: goto label_47eaf0;
        case 0x47eaf4u: goto label_47eaf4;
        case 0x47eaf8u: goto label_47eaf8;
        case 0x47eafcu: goto label_47eafc;
        case 0x47eb00u: goto label_47eb00;
        case 0x47eb04u: goto label_47eb04;
        case 0x47eb08u: goto label_47eb08;
        case 0x47eb0cu: goto label_47eb0c;
        case 0x47eb10u: goto label_47eb10;
        case 0x47eb14u: goto label_47eb14;
        case 0x47eb18u: goto label_47eb18;
        case 0x47eb1cu: goto label_47eb1c;
        case 0x47eb20u: goto label_47eb20;
        case 0x47eb24u: goto label_47eb24;
        case 0x47eb28u: goto label_47eb28;
        case 0x47eb2cu: goto label_47eb2c;
        case 0x47eb30u: goto label_47eb30;
        case 0x47eb34u: goto label_47eb34;
        case 0x47eb38u: goto label_47eb38;
        case 0x47eb3cu: goto label_47eb3c;
        case 0x47eb40u: goto label_47eb40;
        case 0x47eb44u: goto label_47eb44;
        case 0x47eb48u: goto label_47eb48;
        case 0x47eb4cu: goto label_47eb4c;
        case 0x47eb50u: goto label_47eb50;
        case 0x47eb54u: goto label_47eb54;
        case 0x47eb58u: goto label_47eb58;
        case 0x47eb5cu: goto label_47eb5c;
        case 0x47eb60u: goto label_47eb60;
        case 0x47eb64u: goto label_47eb64;
        case 0x47eb68u: goto label_47eb68;
        case 0x47eb6cu: goto label_47eb6c;
        case 0x47eb70u: goto label_47eb70;
        case 0x47eb74u: goto label_47eb74;
        case 0x47eb78u: goto label_47eb78;
        case 0x47eb7cu: goto label_47eb7c;
        case 0x47eb80u: goto label_47eb80;
        case 0x47eb84u: goto label_47eb84;
        case 0x47eb88u: goto label_47eb88;
        case 0x47eb8cu: goto label_47eb8c;
        case 0x47eb90u: goto label_47eb90;
        case 0x47eb94u: goto label_47eb94;
        case 0x47eb98u: goto label_47eb98;
        case 0x47eb9cu: goto label_47eb9c;
        case 0x47eba0u: goto label_47eba0;
        case 0x47eba4u: goto label_47eba4;
        case 0x47eba8u: goto label_47eba8;
        case 0x47ebacu: goto label_47ebac;
        case 0x47ebb0u: goto label_47ebb0;
        case 0x47ebb4u: goto label_47ebb4;
        case 0x47ebb8u: goto label_47ebb8;
        case 0x47ebbcu: goto label_47ebbc;
        case 0x47ebc0u: goto label_47ebc0;
        case 0x47ebc4u: goto label_47ebc4;
        case 0x47ebc8u: goto label_47ebc8;
        case 0x47ebccu: goto label_47ebcc;
        case 0x47ebd0u: goto label_47ebd0;
        case 0x47ebd4u: goto label_47ebd4;
        case 0x47ebd8u: goto label_47ebd8;
        case 0x47ebdcu: goto label_47ebdc;
        case 0x47ebe0u: goto label_47ebe0;
        case 0x47ebe4u: goto label_47ebe4;
        case 0x47ebe8u: goto label_47ebe8;
        case 0x47ebecu: goto label_47ebec;
        case 0x47ebf0u: goto label_47ebf0;
        case 0x47ebf4u: goto label_47ebf4;
        case 0x47ebf8u: goto label_47ebf8;
        case 0x47ebfcu: goto label_47ebfc;
        case 0x47ec00u: goto label_47ec00;
        case 0x47ec04u: goto label_47ec04;
        case 0x47ec08u: goto label_47ec08;
        case 0x47ec0cu: goto label_47ec0c;
        case 0x47ec10u: goto label_47ec10;
        case 0x47ec14u: goto label_47ec14;
        case 0x47ec18u: goto label_47ec18;
        case 0x47ec1cu: goto label_47ec1c;
        case 0x47ec20u: goto label_47ec20;
        case 0x47ec24u: goto label_47ec24;
        case 0x47ec28u: goto label_47ec28;
        case 0x47ec2cu: goto label_47ec2c;
        case 0x47ec30u: goto label_47ec30;
        case 0x47ec34u: goto label_47ec34;
        case 0x47ec38u: goto label_47ec38;
        case 0x47ec3cu: goto label_47ec3c;
        case 0x47ec40u: goto label_47ec40;
        case 0x47ec44u: goto label_47ec44;
        case 0x47ec48u: goto label_47ec48;
        case 0x47ec4cu: goto label_47ec4c;
        case 0x47ec50u: goto label_47ec50;
        case 0x47ec54u: goto label_47ec54;
        case 0x47ec58u: goto label_47ec58;
        case 0x47ec5cu: goto label_47ec5c;
        case 0x47ec60u: goto label_47ec60;
        case 0x47ec64u: goto label_47ec64;
        case 0x47ec68u: goto label_47ec68;
        case 0x47ec6cu: goto label_47ec6c;
        case 0x47ec70u: goto label_47ec70;
        case 0x47ec74u: goto label_47ec74;
        case 0x47ec78u: goto label_47ec78;
        case 0x47ec7cu: goto label_47ec7c;
        case 0x47ec80u: goto label_47ec80;
        case 0x47ec84u: goto label_47ec84;
        case 0x47ec88u: goto label_47ec88;
        case 0x47ec8cu: goto label_47ec8c;
        case 0x47ec90u: goto label_47ec90;
        case 0x47ec94u: goto label_47ec94;
        case 0x47ec98u: goto label_47ec98;
        case 0x47ec9cu: goto label_47ec9c;
        case 0x47eca0u: goto label_47eca0;
        case 0x47eca4u: goto label_47eca4;
        case 0x47eca8u: goto label_47eca8;
        case 0x47ecacu: goto label_47ecac;
        case 0x47ecb0u: goto label_47ecb0;
        case 0x47ecb4u: goto label_47ecb4;
        case 0x47ecb8u: goto label_47ecb8;
        case 0x47ecbcu: goto label_47ecbc;
        case 0x47ecc0u: goto label_47ecc0;
        case 0x47ecc4u: goto label_47ecc4;
        case 0x47ecc8u: goto label_47ecc8;
        case 0x47ecccu: goto label_47eccc;
        case 0x47ecd0u: goto label_47ecd0;
        case 0x47ecd4u: goto label_47ecd4;
        case 0x47ecd8u: goto label_47ecd8;
        case 0x47ecdcu: goto label_47ecdc;
        case 0x47ece0u: goto label_47ece0;
        case 0x47ece4u: goto label_47ece4;
        case 0x47ece8u: goto label_47ece8;
        case 0x47ececu: goto label_47ecec;
        case 0x47ecf0u: goto label_47ecf0;
        case 0x47ecf4u: goto label_47ecf4;
        case 0x47ecf8u: goto label_47ecf8;
        case 0x47ecfcu: goto label_47ecfc;
        case 0x47ed00u: goto label_47ed00;
        case 0x47ed04u: goto label_47ed04;
        case 0x47ed08u: goto label_47ed08;
        case 0x47ed0cu: goto label_47ed0c;
        case 0x47ed10u: goto label_47ed10;
        case 0x47ed14u: goto label_47ed14;
        case 0x47ed18u: goto label_47ed18;
        case 0x47ed1cu: goto label_47ed1c;
        case 0x47ed20u: goto label_47ed20;
        case 0x47ed24u: goto label_47ed24;
        case 0x47ed28u: goto label_47ed28;
        case 0x47ed2cu: goto label_47ed2c;
        case 0x47ed30u: goto label_47ed30;
        case 0x47ed34u: goto label_47ed34;
        case 0x47ed38u: goto label_47ed38;
        case 0x47ed3cu: goto label_47ed3c;
        case 0x47ed40u: goto label_47ed40;
        case 0x47ed44u: goto label_47ed44;
        case 0x47ed48u: goto label_47ed48;
        case 0x47ed4cu: goto label_47ed4c;
        case 0x47ed50u: goto label_47ed50;
        case 0x47ed54u: goto label_47ed54;
        case 0x47ed58u: goto label_47ed58;
        case 0x47ed5cu: goto label_47ed5c;
        case 0x47ed60u: goto label_47ed60;
        case 0x47ed64u: goto label_47ed64;
        case 0x47ed68u: goto label_47ed68;
        case 0x47ed6cu: goto label_47ed6c;
        case 0x47ed70u: goto label_47ed70;
        case 0x47ed74u: goto label_47ed74;
        case 0x47ed78u: goto label_47ed78;
        case 0x47ed7cu: goto label_47ed7c;
        case 0x47ed80u: goto label_47ed80;
        case 0x47ed84u: goto label_47ed84;
        case 0x47ed88u: goto label_47ed88;
        case 0x47ed8cu: goto label_47ed8c;
        case 0x47ed90u: goto label_47ed90;
        case 0x47ed94u: goto label_47ed94;
        case 0x47ed98u: goto label_47ed98;
        case 0x47ed9cu: goto label_47ed9c;
        case 0x47eda0u: goto label_47eda0;
        case 0x47eda4u: goto label_47eda4;
        case 0x47eda8u: goto label_47eda8;
        case 0x47edacu: goto label_47edac;
        case 0x47edb0u: goto label_47edb0;
        case 0x47edb4u: goto label_47edb4;
        case 0x47edb8u: goto label_47edb8;
        case 0x47edbcu: goto label_47edbc;
        case 0x47edc0u: goto label_47edc0;
        case 0x47edc4u: goto label_47edc4;
        case 0x47edc8u: goto label_47edc8;
        case 0x47edccu: goto label_47edcc;
        case 0x47edd0u: goto label_47edd0;
        case 0x47edd4u: goto label_47edd4;
        case 0x47edd8u: goto label_47edd8;
        case 0x47eddcu: goto label_47eddc;
        case 0x47ede0u: goto label_47ede0;
        case 0x47ede4u: goto label_47ede4;
        case 0x47ede8u: goto label_47ede8;
        case 0x47edecu: goto label_47edec;
        case 0x47edf0u: goto label_47edf0;
        case 0x47edf4u: goto label_47edf4;
        case 0x47edf8u: goto label_47edf8;
        case 0x47edfcu: goto label_47edfc;
        case 0x47ee00u: goto label_47ee00;
        case 0x47ee04u: goto label_47ee04;
        case 0x47ee08u: goto label_47ee08;
        case 0x47ee0cu: goto label_47ee0c;
        case 0x47ee10u: goto label_47ee10;
        case 0x47ee14u: goto label_47ee14;
        case 0x47ee18u: goto label_47ee18;
        case 0x47ee1cu: goto label_47ee1c;
        case 0x47ee20u: goto label_47ee20;
        case 0x47ee24u: goto label_47ee24;
        case 0x47ee28u: goto label_47ee28;
        case 0x47ee2cu: goto label_47ee2c;
        case 0x47ee30u: goto label_47ee30;
        case 0x47ee34u: goto label_47ee34;
        case 0x47ee38u: goto label_47ee38;
        case 0x47ee3cu: goto label_47ee3c;
        case 0x47ee40u: goto label_47ee40;
        case 0x47ee44u: goto label_47ee44;
        case 0x47ee48u: goto label_47ee48;
        case 0x47ee4cu: goto label_47ee4c;
        case 0x47ee50u: goto label_47ee50;
        case 0x47ee54u: goto label_47ee54;
        case 0x47ee58u: goto label_47ee58;
        case 0x47ee5cu: goto label_47ee5c;
        case 0x47ee60u: goto label_47ee60;
        case 0x47ee64u: goto label_47ee64;
        case 0x47ee68u: goto label_47ee68;
        case 0x47ee6cu: goto label_47ee6c;
        case 0x47ee70u: goto label_47ee70;
        case 0x47ee74u: goto label_47ee74;
        case 0x47ee78u: goto label_47ee78;
        case 0x47ee7cu: goto label_47ee7c;
        case 0x47ee80u: goto label_47ee80;
        case 0x47ee84u: goto label_47ee84;
        case 0x47ee88u: goto label_47ee88;
        case 0x47ee8cu: goto label_47ee8c;
        case 0x47ee90u: goto label_47ee90;
        case 0x47ee94u: goto label_47ee94;
        case 0x47ee98u: goto label_47ee98;
        case 0x47ee9cu: goto label_47ee9c;
        case 0x47eea0u: goto label_47eea0;
        case 0x47eea4u: goto label_47eea4;
        case 0x47eea8u: goto label_47eea8;
        case 0x47eeacu: goto label_47eeac;
        case 0x47eeb0u: goto label_47eeb0;
        case 0x47eeb4u: goto label_47eeb4;
        case 0x47eeb8u: goto label_47eeb8;
        case 0x47eebcu: goto label_47eebc;
        case 0x47eec0u: goto label_47eec0;
        case 0x47eec4u: goto label_47eec4;
        case 0x47eec8u: goto label_47eec8;
        case 0x47eeccu: goto label_47eecc;
        case 0x47eed0u: goto label_47eed0;
        case 0x47eed4u: goto label_47eed4;
        case 0x47eed8u: goto label_47eed8;
        case 0x47eedcu: goto label_47eedc;
        case 0x47eee0u: goto label_47eee0;
        case 0x47eee4u: goto label_47eee4;
        case 0x47eee8u: goto label_47eee8;
        case 0x47eeecu: goto label_47eeec;
        case 0x47eef0u: goto label_47eef0;
        case 0x47eef4u: goto label_47eef4;
        case 0x47eef8u: goto label_47eef8;
        case 0x47eefcu: goto label_47eefc;
        case 0x47ef00u: goto label_47ef00;
        case 0x47ef04u: goto label_47ef04;
        case 0x47ef08u: goto label_47ef08;
        case 0x47ef0cu: goto label_47ef0c;
        case 0x47ef10u: goto label_47ef10;
        case 0x47ef14u: goto label_47ef14;
        case 0x47ef18u: goto label_47ef18;
        case 0x47ef1cu: goto label_47ef1c;
        case 0x47ef20u: goto label_47ef20;
        case 0x47ef24u: goto label_47ef24;
        case 0x47ef28u: goto label_47ef28;
        case 0x47ef2cu: goto label_47ef2c;
        case 0x47ef30u: goto label_47ef30;
        case 0x47ef34u: goto label_47ef34;
        case 0x47ef38u: goto label_47ef38;
        case 0x47ef3cu: goto label_47ef3c;
        case 0x47ef40u: goto label_47ef40;
        case 0x47ef44u: goto label_47ef44;
        case 0x47ef48u: goto label_47ef48;
        case 0x47ef4cu: goto label_47ef4c;
        case 0x47ef50u: goto label_47ef50;
        case 0x47ef54u: goto label_47ef54;
        case 0x47ef58u: goto label_47ef58;
        case 0x47ef5cu: goto label_47ef5c;
        case 0x47ef60u: goto label_47ef60;
        case 0x47ef64u: goto label_47ef64;
        case 0x47ef68u: goto label_47ef68;
        case 0x47ef6cu: goto label_47ef6c;
        case 0x47ef70u: goto label_47ef70;
        case 0x47ef74u: goto label_47ef74;
        case 0x47ef78u: goto label_47ef78;
        case 0x47ef7cu: goto label_47ef7c;
        case 0x47ef80u: goto label_47ef80;
        case 0x47ef84u: goto label_47ef84;
        case 0x47ef88u: goto label_47ef88;
        case 0x47ef8cu: goto label_47ef8c;
        case 0x47ef90u: goto label_47ef90;
        case 0x47ef94u: goto label_47ef94;
        case 0x47ef98u: goto label_47ef98;
        case 0x47ef9cu: goto label_47ef9c;
        case 0x47efa0u: goto label_47efa0;
        case 0x47efa4u: goto label_47efa4;
        case 0x47efa8u: goto label_47efa8;
        case 0x47efacu: goto label_47efac;
        case 0x47efb0u: goto label_47efb0;
        case 0x47efb4u: goto label_47efb4;
        case 0x47efb8u: goto label_47efb8;
        case 0x47efbcu: goto label_47efbc;
        case 0x47efc0u: goto label_47efc0;
        case 0x47efc4u: goto label_47efc4;
        case 0x47efc8u: goto label_47efc8;
        case 0x47efccu: goto label_47efcc;
        case 0x47efd0u: goto label_47efd0;
        case 0x47efd4u: goto label_47efd4;
        case 0x47efd8u: goto label_47efd8;
        case 0x47efdcu: goto label_47efdc;
        case 0x47efe0u: goto label_47efe0;
        case 0x47efe4u: goto label_47efe4;
        case 0x47efe8u: goto label_47efe8;
        case 0x47efecu: goto label_47efec;
        case 0x47eff0u: goto label_47eff0;
        case 0x47eff4u: goto label_47eff4;
        case 0x47eff8u: goto label_47eff8;
        case 0x47effcu: goto label_47effc;
        case 0x47f000u: goto label_47f000;
        case 0x47f004u: goto label_47f004;
        case 0x47f008u: goto label_47f008;
        case 0x47f00cu: goto label_47f00c;
        case 0x47f010u: goto label_47f010;
        case 0x47f014u: goto label_47f014;
        case 0x47f018u: goto label_47f018;
        case 0x47f01cu: goto label_47f01c;
        case 0x47f020u: goto label_47f020;
        case 0x47f024u: goto label_47f024;
        case 0x47f028u: goto label_47f028;
        case 0x47f02cu: goto label_47f02c;
        case 0x47f030u: goto label_47f030;
        case 0x47f034u: goto label_47f034;
        case 0x47f038u: goto label_47f038;
        case 0x47f03cu: goto label_47f03c;
        case 0x47f040u: goto label_47f040;
        case 0x47f044u: goto label_47f044;
        case 0x47f048u: goto label_47f048;
        case 0x47f04cu: goto label_47f04c;
        case 0x47f050u: goto label_47f050;
        case 0x47f054u: goto label_47f054;
        case 0x47f058u: goto label_47f058;
        case 0x47f05cu: goto label_47f05c;
        case 0x47f060u: goto label_47f060;
        case 0x47f064u: goto label_47f064;
        case 0x47f068u: goto label_47f068;
        case 0x47f06cu: goto label_47f06c;
        case 0x47f070u: goto label_47f070;
        case 0x47f074u: goto label_47f074;
        case 0x47f078u: goto label_47f078;
        case 0x47f07cu: goto label_47f07c;
        case 0x47f080u: goto label_47f080;
        case 0x47f084u: goto label_47f084;
        case 0x47f088u: goto label_47f088;
        case 0x47f08cu: goto label_47f08c;
        case 0x47f090u: goto label_47f090;
        case 0x47f094u: goto label_47f094;
        case 0x47f098u: goto label_47f098;
        case 0x47f09cu: goto label_47f09c;
        case 0x47f0a0u: goto label_47f0a0;
        case 0x47f0a4u: goto label_47f0a4;
        case 0x47f0a8u: goto label_47f0a8;
        case 0x47f0acu: goto label_47f0ac;
        case 0x47f0b0u: goto label_47f0b0;
        case 0x47f0b4u: goto label_47f0b4;
        case 0x47f0b8u: goto label_47f0b8;
        case 0x47f0bcu: goto label_47f0bc;
        case 0x47f0c0u: goto label_47f0c0;
        case 0x47f0c4u: goto label_47f0c4;
        case 0x47f0c8u: goto label_47f0c8;
        case 0x47f0ccu: goto label_47f0cc;
        case 0x47f0d0u: goto label_47f0d0;
        case 0x47f0d4u: goto label_47f0d4;
        case 0x47f0d8u: goto label_47f0d8;
        case 0x47f0dcu: goto label_47f0dc;
        default: break;
    }

    ctx->pc = 0x47e270u;

label_47e270:
    // 0x47e270: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x47e270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_47e274:
    // 0x47e274: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x47e274u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_47e278:
    // 0x47e278: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x47e278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_47e27c:
    // 0x47e27c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x47e27cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_47e280:
    // 0x47e280: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x47e280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_47e284:
    // 0x47e284: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x47e284u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_47e288:
    // 0x47e288: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x47e288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_47e28c:
    // 0x47e28c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x47e28cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_47e290:
    // 0x47e290: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x47e290u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_47e294:
    // 0x47e294: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x47e294u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_47e298:
    // 0x47e298: 0xc10ca68  jal         func_4329A0
label_47e29c:
    if (ctx->pc == 0x47E29Cu) {
        ctx->pc = 0x47E29Cu;
            // 0x47e29c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x47E2A0u;
        goto label_47e2a0;
    }
    ctx->pc = 0x47E298u;
    SET_GPR_U32(ctx, 31, 0x47E2A0u);
    ctx->pc = 0x47E29Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47E298u;
            // 0x47e29c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47E2A0u; }
        if (ctx->pc != 0x47E2A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47E2A0u; }
        if (ctx->pc != 0x47E2A0u) { return; }
    }
    ctx->pc = 0x47E2A0u;
label_47e2a0:
    // 0x47e2a0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x47e2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_47e2a4:
    // 0x47e2a4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x47e2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_47e2a8:
    // 0x47e2a8: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x47e2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
label_47e2ac:
    // 0x47e2ac: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x47e2acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_47e2b0:
    // 0x47e2b0: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x47e2b0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_47e2b4:
    // 0x47e2b4: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x47e2b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
label_47e2b8:
    // 0x47e2b8: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x47e2b8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_47e2bc:
    // 0x47e2bc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x47e2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_47e2c0:
    // 0x47e2c0: 0xae630054  sw          $v1, 0x54($s3)
    ctx->pc = 0x47e2c0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
label_47e2c4:
    // 0x47e2c4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x47e2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_47e2c8:
    // 0x47e2c8: 0xae700058  sw          $s0, 0x58($s3)
    ctx->pc = 0x47e2c8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 16));
label_47e2cc:
    // 0x47e2cc: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x47e2ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_47e2d0:
    // 0x47e2d0: 0xae60005c  sw          $zero, 0x5C($s3)
    ctx->pc = 0x47e2d0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
label_47e2d4:
    // 0x47e2d4: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x47e2d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
label_47e2d8:
    // 0x47e2d8: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x47e2d8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
label_47e2dc:
    // 0x47e2dc: 0x8c430e60  lw          $v1, 0xE60($v0)
    ctx->pc = 0x47e2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3680)));
label_47e2e0:
    // 0x47e2e0: 0xafb30058  sw          $s3, 0x58($sp)
    ctx->pc = 0x47e2e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 19));
label_47e2e4:
    // 0x47e2e4: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x47e2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_47e2e8:
    // 0x47e2e8: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x47e2e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_47e2ec:
    // 0x47e2ec: 0xc0582cc  jal         func_160B30
label_47e2f0:
    if (ctx->pc == 0x47E2F0u) {
        ctx->pc = 0x47E2F0u;
            // 0x47e2f0: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->pc = 0x47E2F4u;
        goto label_47e2f4;
    }
    ctx->pc = 0x47E2ECu;
    SET_GPR_U32(ctx, 31, 0x47E2F4u);
    ctx->pc = 0x47E2F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47E2ECu;
            // 0x47e2f0: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160B30u;
    if (runtime->hasFunction(0x160B30u)) {
        auto targetFn = runtime->lookupFunction(0x160B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47E2F4u; }
        if (ctx->pc != 0x47E2F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B30_0x160b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47E2F4u; }
        if (ctx->pc != 0x47E2F4u) { return; }
    }
    ctx->pc = 0x47E2F4u;
label_47e2f4:
    // 0x47e2f4: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x47e2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_47e2f8:
    // 0x47e2f8: 0x26620064  addiu       $v0, $s3, 0x64
    ctx->pc = 0x47e2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 100));
label_47e2fc:
    // 0x47e2fc: 0x2463ee00  addiu       $v1, $v1, -0x1200
    ctx->pc = 0x47e2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962688));
label_47e300:
    // 0x47e300: 0x2444ff9c  addiu       $a0, $v0, -0x64
    ctx->pc = 0x47e300u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
label_47e304:
    // 0x47e304: 0xae630064  sw          $v1, 0x64($s3)
    ctx->pc = 0x47e304u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 3));
label_47e308:
    // 0x47e308: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x47e308u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_47e30c:
    // 0x47e30c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x47e30cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_47e310:
    // 0x47e310: 0xac447778  sw          $a0, 0x7778($v0)
    ctx->pc = 0x47e310u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 30584), GPR_U32(ctx, 4));
label_47e314:
    // 0x47e314: 0x2463ee10  addiu       $v1, $v1, -0x11F0
    ctx->pc = 0x47e314u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962704));
label_47e318:
    // 0x47e318: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x47e318u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_47e31c:
    // 0x47e31c: 0x2442ee48  addiu       $v0, $v0, -0x11B8
    ctx->pc = 0x47e31cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962760));
label_47e320:
    // 0x47e320: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x47e320u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_47e324:
    // 0x47e324: 0xae620064  sw          $v0, 0x64($s3)
    ctx->pc = 0x47e324u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
label_47e328:
    // 0x47e328: 0xae600068  sw          $zero, 0x68($s3)
    ctx->pc = 0x47e328u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 0));
label_47e32c:
    // 0x47e32c: 0xae60006c  sw          $zero, 0x6C($s3)
    ctx->pc = 0x47e32cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 0));
label_47e330:
    // 0x47e330: 0xae600070  sw          $zero, 0x70($s3)
    ctx->pc = 0x47e330u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 0));
label_47e334:
    // 0x47e334: 0xae600074  sw          $zero, 0x74($s3)
    ctx->pc = 0x47e334u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 0));
label_47e338:
    // 0x47e338: 0xae600078  sw          $zero, 0x78($s3)
    ctx->pc = 0x47e338u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 0));
label_47e33c:
    // 0x47e33c: 0xae60007c  sw          $zero, 0x7C($s3)
    ctx->pc = 0x47e33cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 0));
label_47e340:
    // 0x47e340: 0xae600080  sw          $zero, 0x80($s3)
    ctx->pc = 0x47e340u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 0));
label_47e344:
    // 0x47e344: 0xae600084  sw          $zero, 0x84($s3)
    ctx->pc = 0x47e344u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 0));
label_47e348:
    // 0x47e348: 0xae600088  sw          $zero, 0x88($s3)
    ctx->pc = 0x47e348u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 0));
label_47e34c:
    // 0x47e34c: 0xae60008c  sw          $zero, 0x8C($s3)
    ctx->pc = 0x47e34cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 0));
label_47e350:
    // 0x47e350: 0x8e700058  lw          $s0, 0x58($s3)
    ctx->pc = 0x47e350u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_47e354:
    // 0x47e354: 0x12000024  beqz        $s0, . + 4 + (0x24 << 2)
label_47e358:
    if (ctx->pc == 0x47E358u) {
        ctx->pc = 0x47E35Cu;
        goto label_47e35c;
    }
    ctx->pc = 0x47E354u;
    {
        const bool branch_taken_0x47e354 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x47e354) {
            ctx->pc = 0x47E3E8u;
            goto label_47e3e8;
        }
    }
    ctx->pc = 0x47E35Cu;
label_47e35c:
    // 0x47e35c: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x47e35cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_47e360:
    // 0x47e360: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x47e360u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_47e364:
    // 0x47e364: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x47e364u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_47e368:
    // 0x47e368: 0xc040138  jal         func_1004E0
label_47e36c:
    if (ctx->pc == 0x47E36Cu) {
        ctx->pc = 0x47E36Cu;
            // 0x47e36c: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x47E370u;
        goto label_47e370;
    }
    ctx->pc = 0x47E368u;
    SET_GPR_U32(ctx, 31, 0x47E370u);
    ctx->pc = 0x47E36Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47E368u;
            // 0x47e36c: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47E370u; }
        if (ctx->pc != 0x47E370u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47E370u; }
        if (ctx->pc != 0x47E370u) { return; }
    }
    ctx->pc = 0x47E370u;
label_47e370:
    // 0x47e370: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x47e370u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_47e374:
    // 0x47e374: 0x3c060048  lui         $a2, 0x48
    ctx->pc = 0x47e374u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)72 << 16));
label_47e378:
    // 0x47e378: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x47e378u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_47e37c:
    // 0x47e37c: 0x24a5e410  addiu       $a1, $a1, -0x1BF0
    ctx->pc = 0x47e37cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960144));
label_47e380:
    // 0x47e380: 0x24c6dbc0  addiu       $a2, $a2, -0x2440
    ctx->pc = 0x47e380u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294958016));
label_47e384:
    // 0x47e384: 0x240700e0  addiu       $a3, $zero, 0xE0
    ctx->pc = 0x47e384u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
label_47e388:
    // 0x47e388: 0xc040840  jal         func_102100
label_47e38c:
    if (ctx->pc == 0x47E38Cu) {
        ctx->pc = 0x47E38Cu;
            // 0x47e38c: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47E390u;
        goto label_47e390;
    }
    ctx->pc = 0x47E388u;
    SET_GPR_U32(ctx, 31, 0x47E390u);
    ctx->pc = 0x47E38Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47E388u;
            // 0x47e38c: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47E390u; }
        if (ctx->pc != 0x47E390u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47E390u; }
        if (ctx->pc != 0x47E390u) { return; }
    }
    ctx->pc = 0x47E390u;
label_47e390:
    // 0x47e390: 0xae620068  sw          $v0, 0x68($s3)
    ctx->pc = 0x47e390u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 2));
label_47e394:
    // 0x47e394: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x47e394u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_47e398:
    // 0x47e398: 0x2664006c  addiu       $a0, $s3, 0x6C
    ctx->pc = 0x47e398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
label_47e39c:
    // 0x47e39c: 0xc0788fc  jal         func_1E23F0
label_47e3a0:
    if (ctx->pc == 0x47E3A0u) {
        ctx->pc = 0x47E3A0u;
            // 0x47e3a0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47E3A4u;
        goto label_47e3a4;
    }
    ctx->pc = 0x47E39Cu;
    SET_GPR_U32(ctx, 31, 0x47E3A4u);
    ctx->pc = 0x47E3A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47E39Cu;
            // 0x47e3a0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47E3A4u; }
        if (ctx->pc != 0x47E3A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47E3A4u; }
        if (ctx->pc != 0x47E3A4u) { return; }
    }
    ctx->pc = 0x47E3A4u;
label_47e3a4:
    // 0x47e3a4: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x47e3a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
label_47e3a8:
    // 0x47e3a8: 0xc0788fc  jal         func_1E23F0
label_47e3ac:
    if (ctx->pc == 0x47E3ACu) {
        ctx->pc = 0x47E3ACu;
            // 0x47e3ac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47E3B0u;
        goto label_47e3b0;
    }
    ctx->pc = 0x47E3A8u;
    SET_GPR_U32(ctx, 31, 0x47E3B0u);
    ctx->pc = 0x47E3ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47E3A8u;
            // 0x47e3ac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47E3B0u; }
        if (ctx->pc != 0x47E3B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47E3B0u; }
        if (ctx->pc != 0x47E3B0u) { return; }
    }
    ctx->pc = 0x47E3B0u;
label_47e3b0:
    // 0x47e3b0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x47e3b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_47e3b4:
    // 0x47e3b4: 0xafb2005c  sw          $s2, 0x5C($sp)
    ctx->pc = 0x47e3b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 18));
label_47e3b8:
    // 0x47e3b8: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x47e3b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
label_47e3bc:
    // 0x47e3bc: 0x8e63007c  lw          $v1, 0x7C($s3)
    ctx->pc = 0x47e3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
label_47e3c0:
    // 0x47e3c0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x47e3c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_47e3c4:
    // 0x47e3c4: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x47e3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
label_47e3c8:
    // 0x47e3c8: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x47e3c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
label_47e3cc:
    // 0x47e3cc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x47e3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_47e3d0:
    // 0x47e3d0: 0xc0a997c  jal         func_2A65F0
label_47e3d4:
    if (ctx->pc == 0x47E3D4u) {
        ctx->pc = 0x47E3D4u;
            // 0x47e3d4: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x47E3D8u;
        goto label_47e3d8;
    }
    ctx->pc = 0x47E3D0u;
    SET_GPR_U32(ctx, 31, 0x47E3D8u);
    ctx->pc = 0x47E3D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47E3D0u;
            // 0x47e3d4: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47E3D8u; }
        if (ctx->pc != 0x47E3D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47E3D8u; }
        if (ctx->pc != 0x47E3D8u) { return; }
    }
    ctx->pc = 0x47E3D8u;
label_47e3d8:
    // 0x47e3d8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x47e3d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_47e3dc:
    // 0x47e3dc: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x47e3dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_47e3e0:
    // 0x47e3e0: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_47e3e4:
    if (ctx->pc == 0x47E3E4u) {
        ctx->pc = 0x47E3E4u;
            // 0x47e3e4: 0x265200e0  addiu       $s2, $s2, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 224));
        ctx->pc = 0x47E3E8u;
        goto label_47e3e8;
    }
    ctx->pc = 0x47E3E0u;
    {
        const bool branch_taken_0x47e3e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x47E3E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47E3E0u;
            // 0x47e3e4: 0x265200e0  addiu       $s2, $s2, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47e3e0) {
            ctx->pc = 0x47E3B4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_47e3b4;
        }
    }
    ctx->pc = 0x47E3E8u;
label_47e3e8:
    // 0x47e3e8: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x47e3e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_47e3ec:
    // 0x47e3ec: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x47e3ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_47e3f0:
    // 0x47e3f0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x47e3f0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_47e3f4:
    // 0x47e3f4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x47e3f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_47e3f8:
    // 0x47e3f8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x47e3f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_47e3fc:
    // 0x47e3fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x47e3fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_47e400:
    // 0x47e400: 0x3e00008  jr          $ra
label_47e404:
    if (ctx->pc == 0x47E404u) {
        ctx->pc = 0x47E404u;
            // 0x47e404: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x47E408u;
        goto label_47e408;
    }
    ctx->pc = 0x47E400u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47E404u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47E400u;
            // 0x47e404: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x47E408u;
label_47e408:
    // 0x47e408: 0x0  nop
    ctx->pc = 0x47e408u;
    // NOP
label_47e40c:
    // 0x47e40c: 0x0  nop
    ctx->pc = 0x47e40cu;
    // NOP
label_47e410:
    // 0x47e410: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x47e410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_47e414:
    // 0x47e414: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x47e414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_47e418:
    // 0x47e418: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x47e418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_47e41c:
    // 0x47e41c: 0xc0aeebc  jal         func_2BBAF0
label_47e420:
    if (ctx->pc == 0x47E420u) {
        ctx->pc = 0x47E420u;
            // 0x47e420: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47E424u;
        goto label_47e424;
    }
    ctx->pc = 0x47E41Cu;
    SET_GPR_U32(ctx, 31, 0x47E424u);
    ctx->pc = 0x47E420u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47E41Cu;
            // 0x47e420: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBAF0u;
    if (runtime->hasFunction(0x2BBAF0u)) {
        auto targetFn = runtime->lookupFunction(0x2BBAF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47E424u; }
        if (ctx->pc != 0x47E424u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBAF0_0x2bbaf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47E424u; }
        if (ctx->pc != 0x47E424u) { return; }
    }
    ctx->pc = 0x47E424u;
label_47e424:
    // 0x47e424: 0xc0aeeb4  jal         func_2BBAD0
label_47e428:
    if (ctx->pc == 0x47E428u) {
        ctx->pc = 0x47E428u;
            // 0x47e428: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->pc = 0x47E42Cu;
        goto label_47e42c;
    }
    ctx->pc = 0x47E424u;
    SET_GPR_U32(ctx, 31, 0x47E42Cu);
    ctx->pc = 0x47E428u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47E424u;
            // 0x47e428: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBAD0u;
    if (runtime->hasFunction(0x2BBAD0u)) {
        auto targetFn = runtime->lookupFunction(0x2BBAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47E42Cu; }
        if (ctx->pc != 0x47E42Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBAD0_0x2bbad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47E42Cu; }
        if (ctx->pc != 0x47E42Cu) { return; }
    }
    ctx->pc = 0x47E42Cu;
label_47e42c:
    // 0x47e42c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x47e42cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_47e430:
    // 0x47e430: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x47e430u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_47e434:
    // 0x47e434: 0x24632290  addiu       $v1, $v1, 0x2290
    ctx->pc = 0x47e434u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8848));
label_47e438:
    // 0x47e438: 0x244222d0  addiu       $v0, $v0, 0x22D0
    ctx->pc = 0x47e438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8912));
label_47e43c:
    // 0x47e43c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x47e43cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_47e440:
    // 0x47e440: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x47e440u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
label_47e444:
    // 0x47e444: 0xc0aeea4  jal         func_2BBA90
label_47e448:
    if (ctx->pc == 0x47E448u) {
        ctx->pc = 0x47E448u;
            // 0x47e448: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->pc = 0x47E44Cu;
        goto label_47e44c;
    }
    ctx->pc = 0x47E444u;
    SET_GPR_U32(ctx, 31, 0x47E44Cu);
    ctx->pc = 0x47E448u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47E444u;
            // 0x47e448: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBA90u;
    if (runtime->hasFunction(0x2BBA90u)) {
        auto targetFn = runtime->lookupFunction(0x2BBA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47E44Cu; }
        if (ctx->pc != 0x47E44Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBA90_0x2bba90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47E44Cu; }
        if (ctx->pc != 0x47E44Cu) { return; }
    }
    ctx->pc = 0x47E44Cu;
label_47e44c:
    // 0x47e44c: 0xc0aee8c  jal         func_2BBA30
label_47e450:
    if (ctx->pc == 0x47E450u) {
        ctx->pc = 0x47E450u;
            // 0x47e450: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->pc = 0x47E454u;
        goto label_47e454;
    }
    ctx->pc = 0x47E44Cu;
    SET_GPR_U32(ctx, 31, 0x47E454u);
    ctx->pc = 0x47E450u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47E44Cu;
            // 0x47e450: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBA30u;
    if (runtime->hasFunction(0x2BBA30u)) {
        auto targetFn = runtime->lookupFunction(0x2BBA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47E454u; }
        if (ctx->pc != 0x47E454u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBA30_0x2bba30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47E454u; }
        if (ctx->pc != 0x47E454u) { return; }
    }
    ctx->pc = 0x47E454u;
label_47e454:
    // 0x47e454: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x47e454u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
label_47e458:
    // 0x47e458: 0x24050073  addiu       $a1, $zero, 0x73
    ctx->pc = 0x47e458u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
label_47e45c:
    // 0x47e45c: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x47e45cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
label_47e460:
    // 0x47e460: 0x3c0442b4  lui         $a0, 0x42B4
    ctx->pc = 0x47e460u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17076 << 16));
label_47e464:
    // 0x47e464: 0xae0000a4  sw          $zero, 0xA4($s0)
    ctx->pc = 0x47e464u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 0));
label_47e468:
    // 0x47e468: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x47e468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_47e46c:
    // 0x47e46c: 0xae0000a8  sw          $zero, 0xA8($s0)
    ctx->pc = 0x47e46cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
label_47e470:
    // 0x47e470: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x47e470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_47e474:
    // 0x47e474: 0xae0000ac  sw          $zero, 0xAC($s0)
    ctx->pc = 0x47e474u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 0));
label_47e478:
    // 0x47e478: 0xae0500b0  sw          $a1, 0xB0($s0)
    ctx->pc = 0x47e478u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 5));
label_47e47c:
    // 0x47e47c: 0xae0000b4  sw          $zero, 0xB4($s0)
    ctx->pc = 0x47e47cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
label_47e480:
    // 0x47e480: 0xae0000b8  sw          $zero, 0xB8($s0)
    ctx->pc = 0x47e480u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 0));
label_47e484:
    // 0x47e484: 0xae0000c0  sw          $zero, 0xC0($s0)
    ctx->pc = 0x47e484u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 0));
label_47e488:
    // 0x47e488: 0xae0400c4  sw          $a0, 0xC4($s0)
    ctx->pc = 0x47e488u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 4));
label_47e48c:
    // 0x47e48c: 0xae0300c8  sw          $v1, 0xC8($s0)
    ctx->pc = 0x47e48cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 3));
label_47e490:
    // 0x47e490: 0xc0775b8  jal         func_1DD6E0
label_47e494:
    if (ctx->pc == 0x47E494u) {
        ctx->pc = 0x47E494u;
            // 0x47e494: 0xa20200cc  sb          $v0, 0xCC($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 204), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x47E498u;
        goto label_47e498;
    }
    ctx->pc = 0x47E490u;
    SET_GPR_U32(ctx, 31, 0x47E498u);
    ctx->pc = 0x47E494u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47E490u;
            // 0x47e494: 0xa20200cc  sb          $v0, 0xCC($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 204), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47E498u; }
        if (ctx->pc != 0x47E498u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47E498u; }
        if (ctx->pc != 0x47E498u) { return; }
    }
    ctx->pc = 0x47E498u;
label_47e498:
    // 0x47e498: 0xc077314  jal         func_1DCC50
label_47e49c:
    if (ctx->pc == 0x47E49Cu) {
        ctx->pc = 0x47E49Cu;
            // 0x47e49c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x47E4A0u;
        goto label_47e4a0;
    }
    ctx->pc = 0x47E498u;
    SET_GPR_U32(ctx, 31, 0x47E4A0u);
    ctx->pc = 0x47E49Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47E498u;
            // 0x47e49c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC50u;
    if (runtime->hasFunction(0x1DCC50u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47E4A0u; }
        if (ctx->pc != 0x47E4A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC50_0x1dcc50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47E4A0u; }
        if (ctx->pc != 0x47E4A0u) { return; }
    }
    ctx->pc = 0x47E4A0u;
label_47e4a0:
    // 0x47e4a0: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x47e4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
label_47e4a4:
    // 0x47e4a4: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x47e4a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
label_47e4a8:
    // 0x47e4a8: 0x24635f60  addiu       $v1, $v1, 0x5F60
    ctx->pc = 0x47e4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24416));
label_47e4ac:
    // 0x47e4ac: 0x8e0500c8  lw          $a1, 0xC8($s0)
    ctx->pc = 0x47e4acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
label_47e4b0:
    // 0x47e4b0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x47e4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_47e4b4:
    // 0x47e4b4: 0x2484ed60  addiu       $a0, $a0, -0x12A0
    ctx->pc = 0x47e4b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962528));
label_47e4b8:
    // 0x47e4b8: 0x90460000  lbu         $a2, 0x0($v0)
    ctx->pc = 0x47e4b8u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_47e4bc:
    // 0x47e4bc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x47e4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_47e4c0:
    // 0x47e4c0: 0x2463eda0  addiu       $v1, $v1, -0x1260
    ctx->pc = 0x47e4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962592));
label_47e4c4:
    // 0x47e4c4: 0xa62818  mult        $a1, $a1, $a2
    ctx->pc = 0x47e4c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_47e4c8:
    // 0x47e4c8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x47e4c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_47e4cc:
    // 0x47e4cc: 0xae0500c8  sw          $a1, 0xC8($s0)
    ctx->pc = 0x47e4ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 5));
label_47e4d0:
    // 0x47e4d0: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x47e4d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_47e4d4:
    // 0x47e4d4: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x47e4d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
label_47e4d8:
    // 0x47e4d8: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x47e4d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
label_47e4dc:
    // 0x47e4dc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x47e4dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_47e4e0:
    // 0x47e4e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x47e4e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_47e4e4:
    // 0x47e4e4: 0x3e00008  jr          $ra
label_47e4e8:
    if (ctx->pc == 0x47E4E8u) {
        ctx->pc = 0x47E4E8u;
            // 0x47e4e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x47E4ECu;
        goto label_47e4ec;
    }
    ctx->pc = 0x47E4E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47E4E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47E4E4u;
            // 0x47e4e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x47E4ECu;
label_47e4ec:
    // 0x47e4ec: 0x0  nop
    ctx->pc = 0x47e4ecu;
    // NOP
label_47e4f0:
    // 0x47e4f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x47e4f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_47e4f4:
    // 0x47e4f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x47e4f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_47e4f8:
    // 0x47e4f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x47e4f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_47e4fc:
    // 0x47e4fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x47e4fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_47e500:
    // 0x47e500: 0x8c90009c  lw          $s0, 0x9C($a0)
    ctx->pc = 0x47e500u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 156)));
label_47e504:
    // 0x47e504: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
label_47e508:
    if (ctx->pc == 0x47E508u) {
        ctx->pc = 0x47E508u;
            // 0x47e508: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47E50Cu;
        goto label_47e50c;
    }
    ctx->pc = 0x47E504u;
    {
        const bool branch_taken_0x47e504 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x47E508u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47E504u;
            // 0x47e508: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47e504) {
            ctx->pc = 0x47E53Cu;
            goto label_47e53c;
        }
    }
    ctx->pc = 0x47E50Cu;
label_47e50c:
    // 0x47e50c: 0xc04008c  jal         func_100230
label_47e510:
    if (ctx->pc == 0x47E510u) {
        ctx->pc = 0x47E510u;
            // 0x47e510: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x47E514u;
        goto label_47e514;
    }
    ctx->pc = 0x47E50Cu;
    SET_GPR_U32(ctx, 31, 0x47E514u);
    ctx->pc = 0x47E510u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47E50Cu;
            // 0x47e510: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100230u;
    if (runtime->hasFunction(0x100230u)) {
        auto targetFn = runtime->lookupFunction(0x100230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47E514u; }
        if (ctx->pc != 0x47E514u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100230_0x100230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47E514u; }
        if (ctx->pc != 0x47E514u) { return; }
    }
    ctx->pc = 0x47E514u;
label_47e514:
    // 0x47e514: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x47e514u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_47e518:
    // 0x47e518: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x47e518u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
label_47e51c:
    // 0x47e51c: 0xc0407c0  jal         func_101F00
label_47e520:
    if (ctx->pc == 0x47E520u) {
        ctx->pc = 0x47E520u;
            // 0x47e520: 0x24a5b410  addiu       $a1, $a1, -0x4BF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947856));
        ctx->pc = 0x47E524u;
        goto label_47e524;
    }
    ctx->pc = 0x47E51Cu;
    SET_GPR_U32(ctx, 31, 0x47E524u);
    ctx->pc = 0x47E520u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47E51Cu;
            // 0x47e520: 0x24a5b410  addiu       $a1, $a1, -0x4BF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947856));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47E524u; }
        if (ctx->pc != 0x47E524u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47E524u; }
        if (ctx->pc != 0x47E524u) { return; }
    }
    ctx->pc = 0x47E524u;
label_47e524:
    // 0x47e524: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x47e524u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_47e528:
    // 0x47e528: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x47e528u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
label_47e52c:
    // 0x47e52c: 0xc0407c0  jal         func_101F00
label_47e530:
    if (ctx->pc == 0x47E530u) {
        ctx->pc = 0x47E530u;
            // 0x47e530: 0x24a5b390  addiu       $a1, $a1, -0x4C70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947728));
        ctx->pc = 0x47E534u;
        goto label_47e534;
    }
    ctx->pc = 0x47E52Cu;
    SET_GPR_U32(ctx, 31, 0x47E534u);
    ctx->pc = 0x47E530u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47E52Cu;
            // 0x47e530: 0x24a5b390  addiu       $a1, $a1, -0x4C70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947728));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47E534u; }
        if (ctx->pc != 0x47E534u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47E534u; }
        if (ctx->pc != 0x47E534u) { return; }
    }
    ctx->pc = 0x47E534u;
label_47e534:
    // 0x47e534: 0xc0400a8  jal         func_1002A0
label_47e538:
    if (ctx->pc == 0x47E538u) {
        ctx->pc = 0x47E538u;
            // 0x47e538: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47E53Cu;
        goto label_47e53c;
    }
    ctx->pc = 0x47E534u;
    SET_GPR_U32(ctx, 31, 0x47E53Cu);
    ctx->pc = 0x47E538u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47E534u;
            // 0x47e538: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47E53Cu; }
        if (ctx->pc != 0x47E53Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47E53Cu; }
        if (ctx->pc != 0x47E53Cu) { return; }
    }
    ctx->pc = 0x47E53Cu;
label_47e53c:
    // 0x47e53c: 0xae20009c  sw          $zero, 0x9C($s1)
    ctx->pc = 0x47e53cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 0));
label_47e540:
    // 0x47e540: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x47e540u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_47e544:
    // 0x47e544: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_47e548:
    if (ctx->pc == 0x47E548u) {
        ctx->pc = 0x47E548u;
            // 0x47e548: 0xae200050  sw          $zero, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x47E54Cu;
        goto label_47e54c;
    }
    ctx->pc = 0x47E544u;
    {
        const bool branch_taken_0x47e544 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x47e544) {
            ctx->pc = 0x47E548u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x47E544u;
            // 0x47e548: 0xae200050  sw          $zero, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x47E560u;
            goto label_47e560;
        }
    }
    ctx->pc = 0x47E54Cu;
label_47e54c:
    // 0x47e54c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x47e54cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_47e550:
    // 0x47e550: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x47e550u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_47e554:
    // 0x47e554: 0x320f809  jalr        $t9
label_47e558:
    if (ctx->pc == 0x47E558u) {
        ctx->pc = 0x47E558u;
            // 0x47e558: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x47E55Cu;
        goto label_47e55c;
    }
    ctx->pc = 0x47E554u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x47E55Cu);
        ctx->pc = 0x47E558u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47E554u;
            // 0x47e558: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x47E55Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x47E55Cu; }
            if (ctx->pc != 0x47E55Cu) { return; }
        }
        }
    }
    ctx->pc = 0x47E55Cu;
label_47e55c:
    // 0x47e55c: 0xae200050  sw          $zero, 0x50($s1)
    ctx->pc = 0x47e55cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
label_47e560:
    // 0x47e560: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x47e560u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_47e564:
    // 0x47e564: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x47e564u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_47e568:
    // 0x47e568: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x47e568u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_47e56c:
    // 0x47e56c: 0x3e00008  jr          $ra
label_47e570:
    if (ctx->pc == 0x47E570u) {
        ctx->pc = 0x47E570u;
            // 0x47e570: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x47E574u;
        goto label_47e574;
    }
    ctx->pc = 0x47E56Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47E570u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47E56Cu;
            // 0x47e570: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x47E574u;
label_47e574:
    // 0x47e574: 0x0  nop
    ctx->pc = 0x47e574u;
    // NOP
label_47e578:
    // 0x47e578: 0x0  nop
    ctx->pc = 0x47e578u;
    // NOP
label_47e57c:
    // 0x47e57c: 0x0  nop
    ctx->pc = 0x47e57cu;
    // NOP
label_47e580:
    // 0x47e580: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x47e580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
label_47e584:
    // 0x47e584: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x47e584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_47e588:
    // 0x47e588: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x47e588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_47e58c:
    // 0x47e58c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x47e58cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_47e590:
    // 0x47e590: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x47e590u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_47e594:
    // 0x47e594: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x47e594u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_47e598:
    // 0x47e598: 0xc0892d0  jal         func_224B40
label_47e59c:
    if (ctx->pc == 0x47E59Cu) {
        ctx->pc = 0x47E59Cu;
            // 0x47e59c: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x47E5A0u;
        goto label_47e5a0;
    }
    ctx->pc = 0x47E598u;
    SET_GPR_U32(ctx, 31, 0x47E5A0u);
    ctx->pc = 0x47E59Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47E598u;
            // 0x47e59c: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224B40u;
    if (runtime->hasFunction(0x224B40u)) {
        auto targetFn = runtime->lookupFunction(0x224B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47E5A0u; }
        if (ctx->pc != 0x47E5A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224B40_0x224b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47E5A0u; }
        if (ctx->pc != 0x47E5A0u) { return; }
    }
    ctx->pc = 0x47E5A0u;
label_47e5a0:
    // 0x47e5a0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x47e5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_47e5a4:
    // 0x47e5a4: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x47e5a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_47e5a8:
    // 0x47e5a8: 0x8c427778  lw          $v0, 0x7778($v0)
    ctx->pc = 0x47e5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 30584)));
label_47e5ac:
    // 0x47e5ac: 0x8c500060  lw          $s0, 0x60($v0)
    ctx->pc = 0x47e5acu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_47e5b0:
    // 0x47e5b0: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x47e5b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
label_47e5b4:
    // 0x47e5b4: 0xc0b6e68  jal         func_2DB9A0
label_47e5b8:
    if (ctx->pc == 0x47E5B8u) {
        ctx->pc = 0x47E5B8u;
            // 0x47e5b8: 0xafa00074  sw          $zero, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
        ctx->pc = 0x47E5BCu;
        goto label_47e5bc;
    }
    ctx->pc = 0x47E5B4u;
    SET_GPR_U32(ctx, 31, 0x47E5BCu);
    ctx->pc = 0x47E5B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47E5B4u;
            // 0x47e5b8: 0xafa00074  sw          $zero, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB9A0u;
    if (runtime->hasFunction(0x2DB9A0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47E5BCu; }
        if (ctx->pc != 0x47E5BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB9A0_0x2db9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47E5BCu; }
        if (ctx->pc != 0x47E5BCu) { return; }
    }
    ctx->pc = 0x47E5BCu;
label_47e5bc:
    // 0x47e5bc: 0xc0b6dac  jal         func_2DB6B0
label_47e5c0:
    if (ctx->pc == 0x47E5C0u) {
        ctx->pc = 0x47E5C0u;
            // 0x47e5c0: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x47E5C4u;
        goto label_47e5c4;
    }
    ctx->pc = 0x47E5BCu;
    SET_GPR_U32(ctx, 31, 0x47E5C4u);
    ctx->pc = 0x47E5C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47E5BCu;
            // 0x47e5c0: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (runtime->hasFunction(0x2DB6B0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47E5C4u; }
        if (ctx->pc != 0x47E5C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB6B0_0x2db6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47E5C4u; }
        if (ctx->pc != 0x47E5C4u) { return; }
    }
    ctx->pc = 0x47E5C4u;
label_47e5c4:
    // 0x47e5c4: 0xc0cac94  jal         func_32B250
label_47e5c8:
    if (ctx->pc == 0x47E5C8u) {
        ctx->pc = 0x47E5C8u;
            // 0x47e5c8: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x47E5CCu;
        goto label_47e5cc;
    }
    ctx->pc = 0x47E5C4u;
    SET_GPR_U32(ctx, 31, 0x47E5CCu);
    ctx->pc = 0x47E5C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47E5C4u;
            // 0x47e5c8: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B250u;
    if (runtime->hasFunction(0x32B250u)) {
        auto targetFn = runtime->lookupFunction(0x32B250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47E5CCu; }
        if (ctx->pc != 0x47E5CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B250_0x32b250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47E5CCu; }
        if (ctx->pc != 0x47E5CCu) { return; }
    }
    ctx->pc = 0x47E5CCu;
label_47e5cc:
    // 0x47e5cc: 0xc0cac84  jal         func_32B210
label_47e5d0:
    if (ctx->pc == 0x47E5D0u) {
        ctx->pc = 0x47E5D0u;
            // 0x47e5d0: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x47E5D4u;
        goto label_47e5d4;
    }
    ctx->pc = 0x47E5CCu;
    SET_GPR_U32(ctx, 31, 0x47E5D4u);
    ctx->pc = 0x47E5D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47E5CCu;
            // 0x47e5d0: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B210u;
    if (runtime->hasFunction(0x32B210u)) {
        auto targetFn = runtime->lookupFunction(0x32B210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47E5D4u; }
        if (ctx->pc != 0x47E5D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B210_0x32b210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47E5D4u; }
        if (ctx->pc != 0x47E5D4u) { return; }
    }
    ctx->pc = 0x47E5D4u;
label_47e5d4:
    // 0x47e5d4: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x47e5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_47e5d8:
    // 0x47e5d8: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x47e5d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_47e5dc:
    // 0x47e5dc: 0xc44cc910  lwc1        $f12, -0x36F0($v0)
    ctx->pc = 0x47e5dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_47e5e0:
    // 0x47e5e0: 0xc0a5a68  jal         func_2969A0
label_47e5e4:
    if (ctx->pc == 0x47E5E4u) {
        ctx->pc = 0x47E5E4u;
            // 0x47e5e4: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x47E5E8u;
        goto label_47e5e8;
    }
    ctx->pc = 0x47E5E0u;
    SET_GPR_U32(ctx, 31, 0x47E5E8u);
    ctx->pc = 0x47E5E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47E5E0u;
            // 0x47e5e4: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2969A0u;
    if (runtime->hasFunction(0x2969A0u)) {
        auto targetFn = runtime->lookupFunction(0x2969A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47E5E8u; }
        if (ctx->pc != 0x47E5E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002969A0_0x2969a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47E5E8u; }
        if (ctx->pc != 0x47E5E8u) { return; }
    }
    ctx->pc = 0x47E5E8u;
label_47e5e8:
    // 0x47e5e8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x47e5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_47e5ec:
    // 0x47e5ec: 0x3c0a42c8  lui         $t2, 0x42C8
    ctx->pc = 0x47e5ecu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)17096 << 16));
label_47e5f0:
    // 0x47e5f0: 0x8c437778  lw          $v1, 0x7778($v0)
    ctx->pc = 0x47e5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 30584)));
label_47e5f4:
    // 0x47e5f4: 0xc7a200a4  lwc1        $f2, 0xA4($sp)
    ctx->pc = 0x47e5f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_47e5f8:
    // 0x47e5f8: 0xc7a100a8  lwc1        $f1, 0xA8($sp)
    ctx->pc = 0x47e5f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_47e5fc:
    // 0x47e5fc: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x47e5fcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_47e600:
    // 0x47e600: 0xc7a000ac  lwc1        $f0, 0xAC($sp)
    ctx->pc = 0x47e600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_47e604:
    // 0x47e604: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x47e604u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_47e608:
    // 0x47e608: 0x8c640060  lw          $a0, 0x60($v1)
    ctx->pc = 0x47e608u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
label_47e60c:
    // 0x47e60c: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x47e60cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
label_47e610:
    // 0x47e610: 0x3448d70a  ori         $t0, $v0, 0xD70A
    ctx->pc = 0x47e610u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_47e614:
    // 0x47e614: 0x24050220  addiu       $a1, $zero, 0x220
    ctx->pc = 0x47e614u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_47e618:
    // 0x47e618: 0x3c0200e0  lui         $v0, 0xE0
    ctx->pc = 0x47e618u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)224 << 16));
label_47e61c:
    // 0x47e61c: 0x2406002b  addiu       $a2, $zero, 0x2B
    ctx->pc = 0x47e61cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_47e620:
    // 0x47e620: 0xafa400c4  sw          $a0, 0xC4($sp)
    ctx->pc = 0x47e620u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 4));
label_47e624:
    // 0x47e624: 0x34430020  ori         $v1, $v0, 0x20
    ctx->pc = 0x47e624u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
label_47e628:
    // 0x47e628: 0xc62a0018  lwc1        $f10, 0x18($s1)
    ctx->pc = 0x47e628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_47e62c:
    // 0x47e62c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x47e62cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_47e630:
    // 0x47e630: 0xc6290014  lwc1        $f9, 0x14($s1)
    ctx->pc = 0x47e630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_47e634:
    // 0x47e634: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x47e634u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_47e638:
    // 0x47e638: 0xc6280010  lwc1        $f8, 0x10($s1)
    ctx->pc = 0x47e638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_47e63c:
    // 0x47e63c: 0xc7a70090  lwc1        $f7, 0x90($sp)
    ctx->pc = 0x47e63cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_47e640:
    // 0x47e640: 0xc7a60094  lwc1        $f6, 0x94($sp)
    ctx->pc = 0x47e640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_47e644:
    // 0x47e644: 0xe7a20124  swc1        $f2, 0x124($sp)
    ctx->pc = 0x47e644u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
label_47e648:
    // 0x47e648: 0xafaa0168  sw          $t2, 0x168($sp)
    ctx->pc = 0x47e648u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 360), GPR_U32(ctx, 10));
label_47e64c:
    // 0x47e64c: 0xe7a10128  swc1        $f1, 0x128($sp)
    ctx->pc = 0x47e64cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_47e650:
    // 0x47e650: 0xa3a90170  sb          $t1, 0x170($sp)
    ctx->pc = 0x47e650u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 368), (uint8_t)GPR_U32(ctx, 9));
label_47e654:
    // 0x47e654: 0xe7a0012c  swc1        $f0, 0x12C($sp)
    ctx->pc = 0x47e654u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
label_47e658:
    // 0x47e658: 0xafa8016c  sw          $t0, 0x16C($sp)
    ctx->pc = 0x47e658u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 364), GPR_U32(ctx, 8));
label_47e65c:
    // 0x47e65c: 0xc7a200b0  lwc1        $f2, 0xB0($sp)
    ctx->pc = 0x47e65cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_47e660:
    // 0x47e660: 0xa3a70172  sb          $a3, 0x172($sp)
    ctx->pc = 0x47e660u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 370), (uint8_t)GPR_U32(ctx, 7));
label_47e664:
    // 0x47e664: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x47e664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_47e668:
    // 0x47e668: 0xafa300c0  sw          $v1, 0xC0($sp)
    ctx->pc = 0x47e668u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
label_47e66c:
    // 0x47e66c: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x47e66cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_47e670:
    // 0x47e670: 0xafa000dc  sw          $zero, 0xDC($sp)
    ctx->pc = 0x47e670u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 0));
label_47e674:
    // 0x47e674: 0xe7a20130  swc1        $f2, 0x130($sp)
    ctx->pc = 0x47e674u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_47e678:
    // 0x47e678: 0xe7a10134  swc1        $f1, 0x134($sp)
    ctx->pc = 0x47e678u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
label_47e67c:
    // 0x47e67c: 0xe7a00138  swc1        $f0, 0x138($sp)
    ctx->pc = 0x47e67cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_47e680:
    // 0x47e680: 0xc7a200bc  lwc1        $f2, 0xBC($sp)
    ctx->pc = 0x47e680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_47e684:
    // 0x47e684: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x47e684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_47e688:
    // 0x47e688: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x47e688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_47e68c:
    // 0x47e68c: 0xe7a2013c  swc1        $f2, 0x13C($sp)
    ctx->pc = 0x47e68cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
label_47e690:
    // 0x47e690: 0xe7a10140  swc1        $f1, 0x140($sp)
    ctx->pc = 0x47e690u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_47e694:
    // 0x47e694: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x47e694u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
label_47e698:
    // 0x47e698: 0xc7a50098  lwc1        $f5, 0x98($sp)
    ctx->pc = 0x47e698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_47e69c:
    // 0x47e69c: 0xc7a4009c  lwc1        $f4, 0x9C($sp)
    ctx->pc = 0x47e69cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_47e6a0:
    // 0x47e6a0: 0xc7a300a0  lwc1        $f3, 0xA0($sp)
    ctx->pc = 0x47e6a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_47e6a4:
    // 0x47e6a4: 0xc7a20088  lwc1        $f2, 0x88($sp)
    ctx->pc = 0x47e6a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_47e6a8:
    // 0x47e6a8: 0xc7a1008c  lwc1        $f1, 0x8C($sp)
    ctx->pc = 0x47e6a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_47e6ac:
    // 0x47e6ac: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x47e6acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_47e6b0:
    // 0x47e6b0: 0xe7a800d0  swc1        $f8, 0xD0($sp)
    ctx->pc = 0x47e6b0u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_47e6b4:
    // 0x47e6b4: 0xe7a900d4  swc1        $f9, 0xD4($sp)
    ctx->pc = 0x47e6b4u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_47e6b8:
    // 0x47e6b8: 0xe7aa00d8  swc1        $f10, 0xD8($sp)
    ctx->pc = 0x47e6b8u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_47e6bc:
    // 0x47e6bc: 0xe7a70110  swc1        $f7, 0x110($sp)
    ctx->pc = 0x47e6bcu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_47e6c0:
    // 0x47e6c0: 0xe7a60114  swc1        $f6, 0x114($sp)
    ctx->pc = 0x47e6c0u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
label_47e6c4:
    // 0x47e6c4: 0xe7a50118  swc1        $f5, 0x118($sp)
    ctx->pc = 0x47e6c4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_47e6c8:
    // 0x47e6c8: 0xe7a4011c  swc1        $f4, 0x11C($sp)
    ctx->pc = 0x47e6c8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
label_47e6cc:
    // 0x47e6cc: 0xe7a30120  swc1        $f3, 0x120($sp)
    ctx->pc = 0x47e6ccu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_47e6d0:
    // 0x47e6d0: 0xe7a20148  swc1        $f2, 0x148($sp)
    ctx->pc = 0x47e6d0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
label_47e6d4:
    // 0x47e6d4: 0xe7a1014c  swc1        $f1, 0x14C($sp)
    ctx->pc = 0x47e6d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
label_47e6d8:
    // 0x47e6d8: 0xc0a7a88  jal         func_29EA20
label_47e6dc:
    if (ctx->pc == 0x47E6DCu) {
        ctx->pc = 0x47E6DCu;
            // 0x47e6dc: 0xe7a00150  swc1        $f0, 0x150($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
        ctx->pc = 0x47E6E0u;
        goto label_47e6e0;
    }
    ctx->pc = 0x47E6D8u;
    SET_GPR_U32(ctx, 31, 0x47E6E0u);
    ctx->pc = 0x47E6DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47E6D8u;
            // 0x47e6dc: 0xe7a00150  swc1        $f0, 0x150($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47E6E0u; }
        if (ctx->pc != 0x47E6E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47E6E0u; }
        if (ctx->pc != 0x47E6E0u) { return; }
    }
    ctx->pc = 0x47E6E0u;
label_47e6e0:
    // 0x47e6e0: 0x24030220  addiu       $v1, $zero, 0x220
    ctx->pc = 0x47e6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_47e6e4:
    // 0x47e6e4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x47e6e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_47e6e8:
    // 0x47e6e8: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
label_47e6ec:
    if (ctx->pc == 0x47E6ECu) {
        ctx->pc = 0x47E6ECu;
            // 0x47e6ec: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x47E6F0u;
        goto label_47e6f0;
    }
    ctx->pc = 0x47E6E8u;
    {
        const bool branch_taken_0x47e6e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x47E6ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47E6E8u;
            // 0x47e6ec: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47e6e8) {
            ctx->pc = 0x47E738u;
            goto label_47e738;
        }
    }
    ctx->pc = 0x47E6F0u;
label_47e6f0:
    // 0x47e6f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x47e6f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_47e6f4:
    // 0x47e6f4: 0xc088ef4  jal         func_223BD0
label_47e6f8:
    if (ctx->pc == 0x47E6F8u) {
        ctx->pc = 0x47E6F8u;
            // 0x47e6f8: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x47E6FCu;
        goto label_47e6fc;
    }
    ctx->pc = 0x47E6F4u;
    SET_GPR_U32(ctx, 31, 0x47E6FCu);
    ctx->pc = 0x47E6F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47E6F4u;
            // 0x47e6f8: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x223BD0u;
    if (runtime->hasFunction(0x223BD0u)) {
        auto targetFn = runtime->lookupFunction(0x223BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47E6FCu; }
        if (ctx->pc != 0x47E6FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00223BD0_0x223bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47E6FCu; }
        if (ctx->pc != 0x47E6FCu) { return; }
    }
    ctx->pc = 0x47E6FCu;
label_47e6fc:
    // 0x47e6fc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x47e6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_47e700:
    // 0x47e700: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x47e700u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_47e704:
    // 0x47e704: 0x24422240  addiu       $v0, $v0, 0x2240
    ctx->pc = 0x47e704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8768));
label_47e708:
    // 0x47e708: 0x24632260  addiu       $v1, $v1, 0x2260
    ctx->pc = 0x47e708u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8800));
label_47e70c:
    // 0x47e70c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x47e70cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_47e710:
    // 0x47e710: 0xae000200  sw          $zero, 0x200($s0)
    ctx->pc = 0x47e710u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
label_47e714:
    // 0x47e714: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x47e714u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_47e718:
    // 0x47e718: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x47e718u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_47e71c:
    // 0x47e71c: 0xae000210  sw          $zero, 0x210($s0)
    ctx->pc = 0x47e71cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 0));
label_47e720:
    // 0x47e720: 0xae000214  sw          $zero, 0x214($s0)
    ctx->pc = 0x47e720u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 0));
label_47e724:
    // 0x47e724: 0xae11000c  sw          $s1, 0xC($s0)
    ctx->pc = 0x47e724u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 17));
label_47e728:
    // 0x47e728: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x47e728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_47e72c:
    // 0x47e72c: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x47e72cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_47e730:
    // 0x47e730: 0xc088b38  jal         func_222CE0
label_47e734:
    if (ctx->pc == 0x47E734u) {
        ctx->pc = 0x47E734u;
            // 0x47e734: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47E738u;
        goto label_47e738;
    }
    ctx->pc = 0x47E730u;
    SET_GPR_U32(ctx, 31, 0x47E738u);
    ctx->pc = 0x47E734u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47E730u;
            // 0x47e734: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222CE0u;
    if (runtime->hasFunction(0x222CE0u)) {
        auto targetFn = runtime->lookupFunction(0x222CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47E738u; }
        if (ctx->pc != 0x47E738u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222CE0_0x222ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47E738u; }
        if (ctx->pc != 0x47E738u) { return; }
    }
    ctx->pc = 0x47E738u;
label_47e738:
    // 0x47e738: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x47e738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_47e73c:
    // 0x47e73c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x47e73cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_47e740:
    // 0x47e740: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x47e740u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_47e744:
    // 0x47e744: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x47e744u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_47e748:
    // 0x47e748: 0xc08914c  jal         func_224530
label_47e74c:
    if (ctx->pc == 0x47E74Cu) {
        ctx->pc = 0x47E74Cu;
            // 0x47e74c: 0xae000200  sw          $zero, 0x200($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
        ctx->pc = 0x47E750u;
        goto label_47e750;
    }
    ctx->pc = 0x47E748u;
    SET_GPR_U32(ctx, 31, 0x47E750u);
    ctx->pc = 0x47E74Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47E748u;
            // 0x47e74c: 0xae000200  sw          $zero, 0x200($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47E750u; }
        if (ctx->pc != 0x47E750u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47E750u; }
        if (ctx->pc != 0x47E750u) { return; }
    }
    ctx->pc = 0x47E750u;
label_47e750:
    // 0x47e750: 0xc6220018  lwc1        $f2, 0x18($s1)
    ctx->pc = 0x47e750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_47e754:
    // 0x47e754: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x47e754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_47e758:
    // 0x47e758: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x47e758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_47e75c:
    // 0x47e75c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x47e75cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_47e760:
    // 0x47e760: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x47e760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_47e764:
    // 0x47e764: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x47e764u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_47e768:
    // 0x47e768: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x47e768u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_47e76c:
    // 0x47e76c: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x47e76cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
label_47e770:
    // 0x47e770: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x47e770u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_47e774:
    // 0x47e774: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x47e774u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_47e778:
    // 0x47e778: 0xc623002c  lwc1        $f3, 0x2C($s1)
    ctx->pc = 0x47e778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_47e77c:
    // 0x47e77c: 0xc6220028  lwc1        $f2, 0x28($s1)
    ctx->pc = 0x47e77cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_47e780:
    // 0x47e780: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x47e780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_47e784:
    // 0x47e784: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x47e784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_47e788:
    // 0x47e788: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x47e788u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_47e78c:
    // 0x47e78c: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x47e78cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_47e790:
    // 0x47e790: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x47e790u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_47e794:
    // 0x47e794: 0xc0892b0  jal         func_224AC0
label_47e798:
    if (ctx->pc == 0x47E798u) {
        ctx->pc = 0x47E798u;
            // 0x47e798: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->pc = 0x47E79Cu;
        goto label_47e79c;
    }
    ctx->pc = 0x47E794u;
    SET_GPR_U32(ctx, 31, 0x47E79Cu);
    ctx->pc = 0x47E798u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47E794u;
            // 0x47e798: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224AC0u;
    if (runtime->hasFunction(0x224AC0u)) {
        auto targetFn = runtime->lookupFunction(0x224AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47E79Cu; }
        if (ctx->pc != 0x47E79Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224AC0_0x224ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47E79Cu; }
        if (ctx->pc != 0x47E79Cu) { return; }
    }
    ctx->pc = 0x47E79Cu;
label_47e79c:
    // 0x47e79c: 0x3c02bf00  lui         $v0, 0xBF00
    ctx->pc = 0x47e79cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48896 << 16));
label_47e7a0:
    // 0x47e7a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x47e7a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_47e7a4:
    // 0x47e7a4: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x47e7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
label_47e7a8:
    // 0x47e7a8: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x47e7a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_47e7ac:
    // 0x47e7ac: 0xafa20068  sw          $v0, 0x68($sp)
    ctx->pc = 0x47e7acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
label_47e7b0:
    // 0x47e7b0: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x47e7b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
label_47e7b4:
    // 0x47e7b4: 0xc0891d8  jal         func_224760
label_47e7b8:
    if (ctx->pc == 0x47E7B8u) {
        ctx->pc = 0x47E7B8u;
            // 0x47e7b8: 0xafa0006c  sw          $zero, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
        ctx->pc = 0x47E7BCu;
        goto label_47e7bc;
    }
    ctx->pc = 0x47E7B4u;
    SET_GPR_U32(ctx, 31, 0x47E7BCu);
    ctx->pc = 0x47E7B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47E7B4u;
            // 0x47e7b8: 0xafa0006c  sw          $zero, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224760u;
    if (runtime->hasFunction(0x224760u)) {
        auto targetFn = runtime->lookupFunction(0x224760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47E7BCu; }
        if (ctx->pc != 0x47E7BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224760_0x224760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47E7BCu; }
        if (ctx->pc != 0x47E7BCu) { return; }
    }
    ctx->pc = 0x47E7BCu;
label_47e7bc:
    // 0x47e7bc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x47e7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_47e7c0:
    // 0x47e7c0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x47e7c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_47e7c4:
    // 0x47e7c4: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x47e7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_47e7c8:
    // 0x47e7c8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x47e7c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_47e7cc:
    // 0x47e7cc: 0xc08c164  jal         func_230590
label_47e7d0:
    if (ctx->pc == 0x47E7D0u) {
        ctx->pc = 0x47E7D0u;
            // 0x47e7d0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x47E7D4u;
        goto label_47e7d4;
    }
    ctx->pc = 0x47E7CCu;
    SET_GPR_U32(ctx, 31, 0x47E7D4u);
    ctx->pc = 0x47E7D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47E7CCu;
            // 0x47e7d0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x230590u;
    if (runtime->hasFunction(0x230590u)) {
        auto targetFn = runtime->lookupFunction(0x230590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47E7D4u; }
        if (ctx->pc != 0x47E7D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00230590_0x230590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47E7D4u; }
        if (ctx->pc != 0x47E7D4u) { return; }
    }
    ctx->pc = 0x47E7D4u;
label_47e7d4:
    // 0x47e7d4: 0xae300050  sw          $s0, 0x50($s1)
    ctx->pc = 0x47e7d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 16));
label_47e7d8:
    // 0x47e7d8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x47e7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_47e7dc:
    // 0x47e7dc: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x47e7dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_47e7e0:
    // 0x47e7e0: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x47e7e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_47e7e4:
    // 0x47e7e4: 0xc0a7a88  jal         func_29EA20
label_47e7e8:
    if (ctx->pc == 0x47E7E8u) {
        ctx->pc = 0x47E7E8u;
            // 0x47e7e8: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->pc = 0x47E7ECu;
        goto label_47e7ec;
    }
    ctx->pc = 0x47E7E4u;
    SET_GPR_U32(ctx, 31, 0x47E7ECu);
    ctx->pc = 0x47E7E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47E7E4u;
            // 0x47e7e8: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47E7ECu; }
        if (ctx->pc != 0x47E7ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47E7ECu; }
        if (ctx->pc != 0x47E7ECu) { return; }
    }
    ctx->pc = 0x47E7ECu;
label_47e7ec:
    // 0x47e7ec: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x47e7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_47e7f0:
    // 0x47e7f0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x47e7f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_47e7f4:
    // 0x47e7f4: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
label_47e7f8:
    if (ctx->pc == 0x47E7F8u) {
        ctx->pc = 0x47E7F8u;
            // 0x47e7f8: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x47E7FCu;
        goto label_47e7fc;
    }
    ctx->pc = 0x47E7F4u;
    {
        const bool branch_taken_0x47e7f4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x47E7F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47E7F4u;
            // 0x47e7f8: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47e7f4) {
            ctx->pc = 0x47E818u;
            goto label_47e818;
        }
    }
    ctx->pc = 0x47E7FCu;
label_47e7fc:
    // 0x47e7fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x47e7fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_47e800:
    // 0x47e800: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x47e800u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_47e804:
    // 0x47e804: 0xc0869d0  jal         func_21A740
label_47e808:
    if (ctx->pc == 0x47E808u) {
        ctx->pc = 0x47E808u;
            // 0x47e808: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47E80Cu;
        goto label_47e80c;
    }
    ctx->pc = 0x47E804u;
    SET_GPR_U32(ctx, 31, 0x47E80Cu);
    ctx->pc = 0x47E808u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47E804u;
            // 0x47e808: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21A740u;
    if (runtime->hasFunction(0x21A740u)) {
        auto targetFn = runtime->lookupFunction(0x21A740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47E80Cu; }
        if (ctx->pc != 0x47E80Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021A740_0x21a740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47E80Cu; }
        if (ctx->pc != 0x47E80Cu) { return; }
    }
    ctx->pc = 0x47E80Cu;
label_47e80c:
    // 0x47e80c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x47e80cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_47e810:
    // 0x47e810: 0x24422210  addiu       $v0, $v0, 0x2210
    ctx->pc = 0x47e810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8720));
label_47e814:
    // 0x47e814: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x47e814u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_47e818:
    // 0x47e818: 0xae120210  sw          $s2, 0x210($s0)
    ctx->pc = 0x47e818u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 18));
label_47e81c:
    // 0x47e81c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x47e81cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_47e820:
    // 0x47e820: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x47e820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_47e824:
    // 0x47e824: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x47e824u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_47e828:
    // 0x47e828: 0xc08c650  jal         func_231940
label_47e82c:
    if (ctx->pc == 0x47E82Cu) {
        ctx->pc = 0x47E82Cu;
            // 0x47e82c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47E830u;
        goto label_47e830;
    }
    ctx->pc = 0x47E828u;
    SET_GPR_U32(ctx, 31, 0x47E830u);
    ctx->pc = 0x47E82Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47E828u;
            // 0x47e82c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231940u;
    if (runtime->hasFunction(0x231940u)) {
        auto targetFn = runtime->lookupFunction(0x231940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47E830u; }
        if (ctx->pc != 0x47E830u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231940_0x231940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47E830u; }
        if (ctx->pc != 0x47E830u) { return; }
    }
    ctx->pc = 0x47E830u;
label_47e830:
    // 0x47e830: 0xc040180  jal         func_100600
label_47e834:
    if (ctx->pc == 0x47E834u) {
        ctx->pc = 0x47E834u;
            // 0x47e834: 0x24040024  addiu       $a0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->pc = 0x47E838u;
        goto label_47e838;
    }
    ctx->pc = 0x47E830u;
    SET_GPR_U32(ctx, 31, 0x47E838u);
    ctx->pc = 0x47E834u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47E830u;
            // 0x47e834: 0x24040024  addiu       $a0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47E838u; }
        if (ctx->pc != 0x47E838u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47E838u; }
        if (ctx->pc != 0x47E838u) { return; }
    }
    ctx->pc = 0x47E838u;
label_47e838:
    // 0x47e838: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x47e838u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_47e83c:
    // 0x47e83c: 0x12000020  beqz        $s0, . + 4 + (0x20 << 2)
label_47e840:
    if (ctx->pc == 0x47E840u) {
        ctx->pc = 0x47E844u;
        goto label_47e844;
    }
    ctx->pc = 0x47E83Cu;
    {
        const bool branch_taken_0x47e83c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x47e83c) {
            ctx->pc = 0x47E8C0u;
            goto label_47e8c0;
        }
    }
    ctx->pc = 0x47E844u;
label_47e844:
    // 0x47e844: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x47e844u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_47e848:
    // 0x47e848: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x47e848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_47e84c:
    // 0x47e84c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x47e84cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_47e850:
    // 0x47e850: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x47e850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_47e854:
    // 0x47e854: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x47e854u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_47e858:
    // 0x47e858: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x47e858u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_47e85c:
    // 0x47e85c: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x47e85cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_47e860:
    // 0x47e860: 0xc040138  jal         func_1004E0
label_47e864:
    if (ctx->pc == 0x47E864u) {
        ctx->pc = 0x47E864u;
            // 0x47e864: 0xa2000020  sb          $zero, 0x20($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 32), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x47E868u;
        goto label_47e868;
    }
    ctx->pc = 0x47E860u;
    SET_GPR_U32(ctx, 31, 0x47E868u);
    ctx->pc = 0x47E864u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47E860u;
            // 0x47e864: 0xa2000020  sb          $zero, 0x20($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 32), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47E868u; }
        if (ctx->pc != 0x47E868u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47E868u; }
        if (ctx->pc != 0x47E868u) { return; }
    }
    ctx->pc = 0x47E868u;
label_47e868:
    // 0x47e868: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x47e868u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_47e86c:
    // 0x47e86c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x47e86cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_47e870:
    // 0x47e870: 0xc040138  jal         func_1004E0
label_47e874:
    if (ctx->pc == 0x47E874u) {
        ctx->pc = 0x47E874u;
            // 0x47e874: 0x240401f0  addiu       $a0, $zero, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 496));
        ctx->pc = 0x47E878u;
        goto label_47e878;
    }
    ctx->pc = 0x47E870u;
    SET_GPR_U32(ctx, 31, 0x47E878u);
    ctx->pc = 0x47E874u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47E870u;
            // 0x47e874: 0x240401f0  addiu       $a0, $zero, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 496));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47E878u; }
        if (ctx->pc != 0x47E878u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47E878u; }
        if (ctx->pc != 0x47E878u) { return; }
    }
    ctx->pc = 0x47E878u;
label_47e878:
    // 0x47e878: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x47e878u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_47e87c:
    // 0x47e87c: 0x3c06002c  lui         $a2, 0x2C
    ctx->pc = 0x47e87cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)44 << 16));
label_47e880:
    // 0x47e880: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x47e880u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_47e884:
    // 0x47e884: 0x24a583b0  addiu       $a1, $a1, -0x7C50
    ctx->pc = 0x47e884u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935472));
label_47e888:
    // 0x47e888: 0x24c6b410  addiu       $a2, $a2, -0x4BF0
    ctx->pc = 0x47e888u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294947856));
label_47e88c:
    // 0x47e88c: 0x24070060  addiu       $a3, $zero, 0x60
    ctx->pc = 0x47e88cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_47e890:
    // 0x47e890: 0xc040840  jal         func_102100
label_47e894:
    if (ctx->pc == 0x47E894u) {
        ctx->pc = 0x47E894u;
            // 0x47e894: 0x24080005  addiu       $t0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x47E898u;
        goto label_47e898;
    }
    ctx->pc = 0x47E890u;
    SET_GPR_U32(ctx, 31, 0x47E898u);
    ctx->pc = 0x47E894u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47E890u;
            // 0x47e894: 0x24080005  addiu       $t0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47E898u; }
        if (ctx->pc != 0x47E898u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47E898u; }
        if (ctx->pc != 0x47E898u) { return; }
    }
    ctx->pc = 0x47E898u;
label_47e898:
    // 0x47e898: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x47e898u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_47e89c:
    // 0x47e89c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x47e89cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_47e8a0:
    // 0x47e8a0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x47e8a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_47e8a4:
    // 0x47e8a4: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x47e8a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_47e8a8:
    // 0x47e8a8: 0x28830005  slti        $v1, $a0, 0x5
    ctx->pc = 0x47e8a8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)5) ? 1 : 0);
label_47e8ac:
    // 0x47e8ac: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x47e8acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
label_47e8b0:
    // 0x47e8b0: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x47e8b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_47e8b4:
    // 0x47e8b4: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_47e8b8:
    if (ctx->pc == 0x47E8B8u) {
        ctx->pc = 0x47E8BCu;
        goto label_47e8bc;
    }
    ctx->pc = 0x47E8B4u;
    {
        const bool branch_taken_0x47e8b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x47e8b4) {
            ctx->pc = 0x47E8A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_47e8a0;
        }
    }
    ctx->pc = 0x47E8BCu;
label_47e8bc:
    // 0x47e8bc: 0x0  nop
    ctx->pc = 0x47e8bcu;
    // NOP
label_47e8c0:
    // 0x47e8c0: 0xae30009c  sw          $s0, 0x9C($s1)
    ctx->pc = 0x47e8c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 16));
label_47e8c4:
    // 0x47e8c4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x47e8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_47e8c8:
    // 0x47e8c8: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x47e8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
label_47e8cc:
    // 0x47e8cc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x47e8ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_47e8d0:
    // 0x47e8d0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x47e8d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_47e8d4:
    // 0x47e8d4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x47e8d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_47e8d8:
    // 0x47e8d8: 0xc0e7d2c  jal         func_39F4B0
label_47e8dc:
    if (ctx->pc == 0x47E8DCu) {
        ctx->pc = 0x47E8DCu;
            // 0x47e8dc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47E8E0u;
        goto label_47e8e0;
    }
    ctx->pc = 0x47E8D8u;
    SET_GPR_U32(ctx, 31, 0x47E8E0u);
    ctx->pc = 0x47E8DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47E8D8u;
            // 0x47e8dc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x39F4B0u;
    if (runtime->hasFunction(0x39F4B0u)) {
        auto targetFn = runtime->lookupFunction(0x39F4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47E8E0u; }
        if (ctx->pc != 0x47E8E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0039F4B0_0x39f4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47E8E0u; }
        if (ctx->pc != 0x47E8E0u) { return; }
    }
    ctx->pc = 0x47E8E0u;
label_47e8e0:
    // 0x47e8e0: 0x8e23009c  lw          $v1, 0x9C($s1)
    ctx->pc = 0x47e8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_47e8e4:
    // 0x47e8e4: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x47e8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
label_47e8e8:
    // 0x47e8e8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x47e8e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_47e8ec:
    // 0x47e8ec: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x47e8ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_47e8f0:
    // 0x47e8f0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x47e8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_47e8f4:
    // 0x47e8f4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x47e8f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_47e8f8:
    // 0x47e8f8: 0xc0e7d2c  jal         func_39F4B0
label_47e8fc:
    if (ctx->pc == 0x47E8FCu) {
        ctx->pc = 0x47E8FCu;
            // 0x47e8fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47E900u;
        goto label_47e900;
    }
    ctx->pc = 0x47E8F8u;
    SET_GPR_U32(ctx, 31, 0x47E900u);
    ctx->pc = 0x47E8FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47E8F8u;
            // 0x47e8fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x39F4B0u;
    if (runtime->hasFunction(0x39F4B0u)) {
        auto targetFn = runtime->lookupFunction(0x39F4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47E900u; }
        if (ctx->pc != 0x47E900u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0039F4B0_0x39f4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47E900u; }
        if (ctx->pc != 0x47E900u) { return; }
    }
    ctx->pc = 0x47E900u;
label_47e900:
    // 0x47e900: 0x8e23009c  lw          $v1, 0x9C($s1)
    ctx->pc = 0x47e900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_47e904:
    // 0x47e904: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x47e904u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
label_47e908:
    // 0x47e908: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x47e908u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_47e90c:
    // 0x47e90c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x47e90cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_47e910:
    // 0x47e910: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x47e910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_47e914:
    // 0x47e914: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x47e914u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_47e918:
    // 0x47e918: 0xc0e7d2c  jal         func_39F4B0
label_47e91c:
    if (ctx->pc == 0x47E91Cu) {
        ctx->pc = 0x47E91Cu;
            // 0x47e91c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47E920u;
        goto label_47e920;
    }
    ctx->pc = 0x47E918u;
    SET_GPR_U32(ctx, 31, 0x47E920u);
    ctx->pc = 0x47E91Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47E918u;
            // 0x47e91c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x39F4B0u;
    if (runtime->hasFunction(0x39F4B0u)) {
        auto targetFn = runtime->lookupFunction(0x39F4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47E920u; }
        if (ctx->pc != 0x47E920u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0039F4B0_0x39f4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47E920u; }
        if (ctx->pc != 0x47E920u) { return; }
    }
    ctx->pc = 0x47E920u;
label_47e920:
    // 0x47e920: 0x8e23009c  lw          $v1, 0x9C($s1)
    ctx->pc = 0x47e920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_47e924:
    // 0x47e924: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x47e924u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
label_47e928:
    // 0x47e928: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x47e928u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_47e92c:
    // 0x47e92c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x47e92cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_47e930:
    // 0x47e930: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x47e930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_47e934:
    // 0x47e934: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x47e934u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_47e938:
    // 0x47e938: 0xc0e7d2c  jal         func_39F4B0
label_47e93c:
    if (ctx->pc == 0x47E93Cu) {
        ctx->pc = 0x47E93Cu;
            // 0x47e93c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47E940u;
        goto label_47e940;
    }
    ctx->pc = 0x47E938u;
    SET_GPR_U32(ctx, 31, 0x47E940u);
    ctx->pc = 0x47E93Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47E938u;
            // 0x47e93c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x39F4B0u;
    if (runtime->hasFunction(0x39F4B0u)) {
        auto targetFn = runtime->lookupFunction(0x39F4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47E940u; }
        if (ctx->pc != 0x47E940u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0039F4B0_0x39f4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47E940u; }
        if (ctx->pc != 0x47E940u) { return; }
    }
    ctx->pc = 0x47E940u;
label_47e940:
    // 0x47e940: 0x8e23009c  lw          $v1, 0x9C($s1)
    ctx->pc = 0x47e940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_47e944:
    // 0x47e944: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x47e944u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
label_47e948:
    // 0x47e948: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x47e948u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_47e94c:
    // 0x47e94c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x47e94cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_47e950:
    // 0x47e950: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x47e950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_47e954:
    // 0x47e954: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x47e954u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_47e958:
    // 0x47e958: 0xc0e7d2c  jal         func_39F4B0
label_47e95c:
    if (ctx->pc == 0x47E95Cu) {
        ctx->pc = 0x47E95Cu;
            // 0x47e95c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47E960u;
        goto label_47e960;
    }
    ctx->pc = 0x47E958u;
    SET_GPR_U32(ctx, 31, 0x47E960u);
    ctx->pc = 0x47E95Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47E958u;
            // 0x47e95c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x39F4B0u;
    if (runtime->hasFunction(0x39F4B0u)) {
        auto targetFn = runtime->lookupFunction(0x39F4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47E960u; }
        if (ctx->pc != 0x47E960u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0039F4B0_0x39f4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47E960u; }
        if (ctx->pc != 0x47E960u) { return; }
    }
    ctx->pc = 0x47E960u;
label_47e960:
    // 0x47e960: 0x8e2600b0  lw          $a2, 0xB0($s1)
    ctx->pc = 0x47e960u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_47e964:
    // 0x47e964: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x47e964u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_47e968:
    // 0x47e968: 0x2405fff7  addiu       $a1, $zero, -0x9
    ctx->pc = 0x47e968u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
label_47e96c:
    // 0x47e96c: 0x2404ffdf  addiu       $a0, $zero, -0x21
    ctx->pc = 0x47e96cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
label_47e970:
    // 0x47e970: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x47e970u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_47e974:
    // 0x47e974: 0xc51824  and         $v1, $a2, $a1
    ctx->pc = 0x47e974u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
label_47e978:
    // 0x47e978: 0x34650008  ori         $a1, $v1, 0x8
    ctx->pc = 0x47e978u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
label_47e97c:
    // 0x47e97c: 0xa41824  and         $v1, $a1, $a0
    ctx->pc = 0x47e97cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_47e980:
    // 0x47e980: 0xae2500b0  sw          $a1, 0xB0($s1)
    ctx->pc = 0x47e980u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 5));
label_47e984:
    // 0x47e984: 0xae2300b0  sw          $v1, 0xB0($s1)
    ctx->pc = 0x47e984u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 3));
label_47e988:
    // 0x47e988: 0xc6210034  lwc1        $f1, 0x34($s1)
    ctx->pc = 0x47e988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_47e98c:
    // 0x47e98c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x47e98cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_47e990:
    // 0x47e990: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_47e994:
    if (ctx->pc == 0x47E994u) {
        ctx->pc = 0x47E994u;
            // 0x47e994: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x47E998u;
        goto label_47e998;
    }
    ctx->pc = 0x47E990u;
    {
        const bool branch_taken_0x47e990 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x47e990) {
            ctx->pc = 0x47E994u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x47E990u;
            // 0x47e994: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x47E9A8u;
            goto label_47e9a8;
        }
    }
    ctx->pc = 0x47E998u;
label_47e998:
    // 0x47e998: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x47e998u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_47e99c:
    // 0x47e99c: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x47e99cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_47e9a0:
    // 0x47e9a0: 0x10000007  b           . + 4 + (0x7 << 2)
label_47e9a4:
    if (ctx->pc == 0x47E9A4u) {
        ctx->pc = 0x47E9A4u;
            // 0x47e9a4: 0xae2400d4  sw          $a0, 0xD4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 4));
        ctx->pc = 0x47E9A8u;
        goto label_47e9a8;
    }
    ctx->pc = 0x47E9A0u;
    {
        const bool branch_taken_0x47e9a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47E9A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47E9A0u;
            // 0x47e9a4: 0xae2400d4  sw          $a0, 0xD4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47e9a0) {
            ctx->pc = 0x47E9C0u;
            goto label_47e9c0;
        }
    }
    ctx->pc = 0x47E9A8u;
label_47e9a8:
    // 0x47e9a8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x47e9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_47e9ac:
    // 0x47e9ac: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x47e9acu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_47e9b0:
    // 0x47e9b0: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x47e9b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_47e9b4:
    // 0x47e9b4: 0x0  nop
    ctx->pc = 0x47e9b4u;
    // NOP
label_47e9b8:
    // 0x47e9b8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x47e9b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_47e9bc:
    // 0x47e9bc: 0xae2400d4  sw          $a0, 0xD4($s1)
    ctx->pc = 0x47e9bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 4));
label_47e9c0:
    // 0x47e9c0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x47e9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_47e9c4:
    // 0x47e9c4: 0xa2230068  sb          $v1, 0x68($s1)
    ctx->pc = 0x47e9c4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 104), (uint8_t)GPR_U32(ctx, 3));
label_47e9c8:
    // 0x47e9c8: 0xa2200069  sb          $zero, 0x69($s1)
    ctx->pc = 0x47e9c8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 105), (uint8_t)GPR_U32(ctx, 0));
label_47e9cc:
    // 0x47e9cc: 0xa223006a  sb          $v1, 0x6A($s1)
    ctx->pc = 0x47e9ccu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 106), (uint8_t)GPR_U32(ctx, 3));
label_47e9d0:
    // 0x47e9d0: 0xa220006b  sb          $zero, 0x6B($s1)
    ctx->pc = 0x47e9d0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 107), (uint8_t)GPR_U32(ctx, 0));
label_47e9d4:
    // 0x47e9d4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x47e9d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_47e9d8:
    // 0x47e9d8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x47e9d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_47e9dc:
    // 0x47e9dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x47e9dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_47e9e0:
    // 0x47e9e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x47e9e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_47e9e4:
    // 0x47e9e4: 0x3e00008  jr          $ra
label_47e9e8:
    if (ctx->pc == 0x47E9E8u) {
        ctx->pc = 0x47E9E8u;
            // 0x47e9e8: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->pc = 0x47E9ECu;
        goto label_47e9ec;
    }
    ctx->pc = 0x47E9E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47E9E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47E9E4u;
            // 0x47e9e8: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x47E9ECu;
label_47e9ec:
    // 0x47e9ec: 0x0  nop
    ctx->pc = 0x47e9ecu;
    // NOP
label_47e9f0:
    // 0x47e9f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x47e9f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_47e9f4:
    // 0x47e9f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x47e9f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_47e9f8:
    // 0x47e9f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x47e9f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_47e9fc:
    // 0x47e9fc: 0xc0e3580  jal         func_38D600
label_47ea00:
    if (ctx->pc == 0x47EA00u) {
        ctx->pc = 0x47EA00u;
            // 0x47ea00: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47EA04u;
        goto label_47ea04;
    }
    ctx->pc = 0x47E9FCu;
    SET_GPR_U32(ctx, 31, 0x47EA04u);
    ctx->pc = 0x47EA00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47E9FCu;
            // 0x47ea00: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38D600u;
    if (runtime->hasFunction(0x38D600u)) {
        auto targetFn = runtime->lookupFunction(0x38D600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47EA04u; }
        if (ctx->pc != 0x47EA04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038D600_0x38d600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47EA04u; }
        if (ctx->pc != 0x47EA04u) { return; }
    }
    ctx->pc = 0x47EA04u;
label_47ea04:
    // 0x47ea04: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x47ea04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_47ea08:
    // 0x47ea08: 0x3c044416  lui         $a0, 0x4416
    ctx->pc = 0x47ea08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17430 << 16));
label_47ea0c:
    // 0x47ea0c: 0xae03008c  sw          $v1, 0x8C($s0)
    ctx->pc = 0x47ea0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 3));
label_47ea10:
    // 0x47ea10: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x47ea10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
label_47ea14:
    // 0x47ea14: 0xae000070  sw          $zero, 0x70($s0)
    ctx->pc = 0x47ea14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
label_47ea18:
    // 0x47ea18: 0xc4605de0  lwc1        $f0, 0x5DE0($v1)
    ctx->pc = 0x47ea18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24032)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_47ea1c:
    // 0x47ea1c: 0xae040078  sw          $a0, 0x78($s0)
    ctx->pc = 0x47ea1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 4));
label_47ea20:
    // 0x47ea20: 0xe6000080  swc1        $f0, 0x80($s0)
    ctx->pc = 0x47ea20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 128), bits); }
label_47ea24:
    // 0x47ea24: 0x2403f9ff  addiu       $v1, $zero, -0x601
    ctx->pc = 0x47ea24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965759));
label_47ea28:
    // 0x47ea28: 0x8e0400b0  lw          $a0, 0xB0($s0)
    ctx->pc = 0x47ea28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_47ea2c:
    // 0x47ea2c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x47ea2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_47ea30:
    // 0x47ea30: 0x34630600  ori         $v1, $v1, 0x600
    ctx->pc = 0x47ea30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1536);
label_47ea34:
    // 0x47ea34: 0xae0300b0  sw          $v1, 0xB0($s0)
    ctx->pc = 0x47ea34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 3));
label_47ea38:
    // 0x47ea38: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x47ea38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_47ea3c:
    // 0x47ea3c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x47ea3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_47ea40:
    // 0x47ea40: 0x3e00008  jr          $ra
label_47ea44:
    if (ctx->pc == 0x47EA44u) {
        ctx->pc = 0x47EA44u;
            // 0x47ea44: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x47EA48u;
        goto label_47ea48;
    }
    ctx->pc = 0x47EA40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47EA44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47EA40u;
            // 0x47ea44: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x47EA48u;
label_47ea48:
    // 0x47ea48: 0x0  nop
    ctx->pc = 0x47ea48u;
    // NOP
label_47ea4c:
    // 0x47ea4c: 0x0  nop
    ctx->pc = 0x47ea4cu;
    // NOP
label_47ea50:
    // 0x47ea50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x47ea50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_47ea54:
    // 0x47ea54: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x47ea54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_47ea58:
    // 0x47ea58: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x47ea58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_47ea5c:
    // 0x47ea5c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x47ea5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_47ea60:
    // 0x47ea60: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x47ea60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_47ea64:
    // 0x47ea64: 0x8c42e410  lw          $v0, -0x1BF0($v0)
    ctx->pc = 0x47ea64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960144)));
label_47ea68:
    // 0x47ea68: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x47ea68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_47ea6c:
    // 0x47ea6c: 0x8c480004  lw          $t0, 0x4($v0)
    ctx->pc = 0x47ea6cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_47ea70:
    // 0x47ea70: 0x8c46000c  lw          $a2, 0xC($v0)
    ctx->pc = 0x47ea70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_47ea74:
    // 0x47ea74: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x47ea74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_47ea78:
    // 0x47ea78: 0x8d050004  lw          $a1, 0x4($t0)
    ctx->pc = 0x47ea78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_47ea7c:
    // 0x47ea7c: 0x8ca30200  lw          $v1, 0x200($a1)
    ctx->pc = 0x47ea7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 512)));
label_47ea80:
    // 0x47ea80: 0x90620001  lbu         $v0, 0x1($v1)
    ctx->pc = 0x47ea80u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
label_47ea84:
    // 0x47ea84: 0x54440012  bnel        $v0, $a0, . + 4 + (0x12 << 2)
label_47ea88:
    if (ctx->pc == 0x47EA88u) {
        ctx->pc = 0x47EA88u;
            // 0x47ea88: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->pc = 0x47EA8Cu;
        goto label_47ea8c;
    }
    ctx->pc = 0x47EA84u;
    {
        const bool branch_taken_0x47ea84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x47ea84) {
            ctx->pc = 0x47EA88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x47EA84u;
            // 0x47ea88: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x47EAD0u;
            goto label_47ead0;
        }
    }
    ctx->pc = 0x47EA8Cu;
label_47ea8c:
    // 0x47ea8c: 0x90630005  lbu         $v1, 0x5($v1)
    ctx->pc = 0x47ea8cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5)));
label_47ea90:
    // 0x47ea90: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x47ea90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_47ea94:
    // 0x47ea94: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
label_47ea98:
    if (ctx->pc == 0x47EA98u) {
        ctx->pc = 0x47EA9Cu;
        goto label_47ea9c;
    }
    ctx->pc = 0x47EA94u;
    {
        const bool branch_taken_0x47ea94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x47ea94) {
            ctx->pc = 0x47EACCu;
            goto label_47eacc;
        }
    }
    ctx->pc = 0x47EA9Cu;
label_47ea9c:
    // 0x47ea9c: 0x8ca4002c  lw          $a0, 0x2C($a1)
    ctx->pc = 0x47ea9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_47eaa0:
    // 0x47eaa0: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x47eaa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_47eaa4:
    // 0x47eaa4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x47eaa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_47eaa8:
    // 0x47eaa8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x47eaa8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_47eaac:
    // 0x47eaac: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x47eaacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_47eab0:
    // 0x47eab0: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x47eab0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
label_47eab4:
    // 0x47eab4: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x47eab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_47eab8:
    // 0x47eab8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x47eab8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_47eabc:
    // 0x47eabc: 0xc08bff0  jal         func_22FFC0
label_47eac0:
    if (ctx->pc == 0x47EAC0u) {
        ctx->pc = 0x47EAC0u;
            // 0x47eac0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47EAC4u;
        goto label_47eac4;
    }
    ctx->pc = 0x47EABCu;
    SET_GPR_U32(ctx, 31, 0x47EAC4u);
    ctx->pc = 0x47EAC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47EABCu;
            // 0x47eac0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47EAC4u; }
        if (ctx->pc != 0x47EAC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47EAC4u; }
        if (ctx->pc != 0x47EAC4u) { return; }
    }
    ctx->pc = 0x47EAC4u;
label_47eac4:
    // 0x47eac4: 0x10000006  b           . + 4 + (0x6 << 2)
label_47eac8:
    if (ctx->pc == 0x47EAC8u) {
        ctx->pc = 0x47EACCu;
        goto label_47eacc;
    }
    ctx->pc = 0x47EAC4u;
    {
        const bool branch_taken_0x47eac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x47eac4) {
            ctx->pc = 0x47EAE0u;
            goto label_47eae0;
        }
    }
    ctx->pc = 0x47EACCu;
label_47eacc:
    // 0x47eacc: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x47eaccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_47ead0:
    // 0x47ead0: 0xe6102a  slt         $v0, $a3, $a2
    ctx->pc = 0x47ead0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_47ead4:
    // 0x47ead4: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
label_47ead8:
    if (ctx->pc == 0x47EAD8u) {
        ctx->pc = 0x47EAD8u;
            // 0x47ead8: 0x25080008  addiu       $t0, $t0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
        ctx->pc = 0x47EADCu;
        goto label_47eadc;
    }
    ctx->pc = 0x47EAD4u;
    {
        const bool branch_taken_0x47ead4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x47EAD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47EAD4u;
            // 0x47ead8: 0x25080008  addiu       $t0, $t0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47ead4) {
            ctx->pc = 0x47EA78u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_47ea78;
        }
    }
    ctx->pc = 0x47EADCu;
label_47eadc:
    // 0x47eadc: 0x0  nop
    ctx->pc = 0x47eadcu;
    // NOP
label_47eae0:
    // 0x47eae0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x47eae0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_47eae4:
    // 0x47eae4: 0x8e0600d4  lw          $a2, 0xD4($s0)
    ctx->pc = 0x47eae4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_47eae8:
    // 0x47eae8: 0x8c440ea4  lw          $a0, 0xEA4($v0)
    ctx->pc = 0x47eae8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
label_47eaec:
    // 0x47eaec: 0xc0c2f44  jal         func_30BD10
label_47eaf0:
    if (ctx->pc == 0x47EAF0u) {
        ctx->pc = 0x47EAF0u;
            // 0x47eaf0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47EAF4u;
        goto label_47eaf4;
    }
    ctx->pc = 0x47EAECu;
    SET_GPR_U32(ctx, 31, 0x47EAF4u);
    ctx->pc = 0x47EAF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47EAECu;
            // 0x47eaf0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30BD10u;
    if (runtime->hasFunction(0x30BD10u)) {
        auto targetFn = runtime->lookupFunction(0x30BD10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47EAF4u; }
        if (ctx->pc != 0x47EAF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0030BD10_0x30bd10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47EAF4u; }
        if (ctx->pc != 0x47EAF4u) { return; }
    }
    ctx->pc = 0x47EAF4u;
label_47eaf4:
    // 0x47eaf4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x47eaf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_47eaf8:
    // 0x47eaf8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x47eaf8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_47eafc:
    // 0x47eafc: 0x3e00008  jr          $ra
label_47eb00:
    if (ctx->pc == 0x47EB00u) {
        ctx->pc = 0x47EB00u;
            // 0x47eb00: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x47EB04u;
        goto label_47eb04;
    }
    ctx->pc = 0x47EAFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47EB00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47EAFCu;
            // 0x47eb00: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x47EB04u;
label_47eb04:
    // 0x47eb04: 0x0  nop
    ctx->pc = 0x47eb04u;
    // NOP
label_47eb08:
    // 0x47eb08: 0x0  nop
    ctx->pc = 0x47eb08u;
    // NOP
label_47eb0c:
    // 0x47eb0c: 0x0  nop
    ctx->pc = 0x47eb0cu;
    // NOP
label_47eb10:
    // 0x47eb10: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x47eb10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_47eb14:
    // 0x47eb14: 0x3e00008  jr          $ra
label_47eb18:
    if (ctx->pc == 0x47EB18u) {
        ctx->pc = 0x47EB18u;
            // 0x47eb18: 0xac8300d0  sw          $v1, 0xD0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 208), GPR_U32(ctx, 3));
        ctx->pc = 0x47EB1Cu;
        goto label_47eb1c;
    }
    ctx->pc = 0x47EB14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47EB18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47EB14u;
            // 0x47eb18: 0xac8300d0  sw          $v1, 0xD0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 208), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x47EB1Cu;
label_47eb1c:
    // 0x47eb1c: 0x0  nop
    ctx->pc = 0x47eb1cu;
    // NOP
label_47eb20:
    // 0x47eb20: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x47eb20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_47eb24:
    // 0x47eb24: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x47eb24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_47eb28:
    // 0x47eb28: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x47eb28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_47eb2c:
    // 0x47eb2c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x47eb2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_47eb30:
    // 0x47eb30: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x47eb30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_47eb34:
    // 0x47eb34: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x47eb34u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_47eb38:
    // 0x47eb38: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x47eb38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_47eb3c:
    // 0x47eb3c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x47eb3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_47eb40:
    // 0x47eb40: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x47eb40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_47eb44:
    // 0x47eb44: 0x8c8400d0  lw          $a0, 0xD0($a0)
    ctx->pc = 0x47eb44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 208)));
label_47eb48:
    // 0x47eb48: 0x50830020  beql        $a0, $v1, . + 4 + (0x20 << 2)
label_47eb4c:
    if (ctx->pc == 0x47EB4Cu) {
        ctx->pc = 0x47EB4Cu;
            // 0x47eb4c: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x47EB50u;
        goto label_47eb50;
    }
    ctx->pc = 0x47EB48u;
    {
        const bool branch_taken_0x47eb48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x47eb48) {
            ctx->pc = 0x47EB4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x47EB48u;
            // 0x47eb4c: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x47EBCCu;
            goto label_47ebcc;
        }
    }
    ctx->pc = 0x47EB50u;
label_47eb50:
    // 0x47eb50: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x47eb50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_47eb54:
    // 0x47eb54: 0x1083001c  beq         $a0, $v1, . + 4 + (0x1C << 2)
label_47eb58:
    if (ctx->pc == 0x47EB58u) {
        ctx->pc = 0x47EB5Cu;
        goto label_47eb5c;
    }
    ctx->pc = 0x47EB54u;
    {
        const bool branch_taken_0x47eb54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x47eb54) {
            ctx->pc = 0x47EBC8u;
            goto label_47ebc8;
        }
    }
    ctx->pc = 0x47EB5Cu;
label_47eb5c:
    // 0x47eb5c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_47eb60:
    if (ctx->pc == 0x47EB60u) {
        ctx->pc = 0x47EB64u;
        goto label_47eb64;
    }
    ctx->pc = 0x47EB5Cu;
    {
        const bool branch_taken_0x47eb5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x47eb5c) {
            ctx->pc = 0x47EB6Cu;
            goto label_47eb6c;
        }
    }
    ctx->pc = 0x47EB64u;
label_47eb64:
    // 0x47eb64: 0x10000018  b           . + 4 + (0x18 << 2)
label_47eb68:
    if (ctx->pc == 0x47EB68u) {
        ctx->pc = 0x47EB6Cu;
        goto label_47eb6c;
    }
    ctx->pc = 0x47EB64u;
    {
        const bool branch_taken_0x47eb64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x47eb64) {
            ctx->pc = 0x47EBC8u;
            goto label_47ebc8;
        }
    }
    ctx->pc = 0x47EB6Cu;
label_47eb6c:
    // 0x47eb6c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x47eb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_47eb70:
    // 0x47eb70: 0x8e83009c  lw          $v1, 0x9C($s4)
    ctx->pc = 0x47eb70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 156)));
label_47eb74:
    // 0x47eb74: 0x8c427778  lw          $v0, 0x7778($v0)
    ctx->pc = 0x47eb74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 30584)));
label_47eb78:
    // 0x47eb78: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x47eb78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
label_47eb7c:
    // 0x47eb7c: 0x8c510030  lw          $s1, 0x30($v0)
    ctx->pc = 0x47eb7cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_47eb80:
    // 0x47eb80: 0xac71000c  sw          $s1, 0xC($v1)
    ctx->pc = 0x47eb80u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 17));
label_47eb84:
    // 0x47eb84: 0x8c730000  lw          $s3, 0x0($v1)
    ctx->pc = 0x47eb84u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_47eb88:
    // 0x47eb88: 0x8c720010  lw          $s2, 0x10($v1)
    ctx->pc = 0x47eb88u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_47eb8c:
    // 0x47eb8c: 0x8e700000  lw          $s0, 0x0($s3)
    ctx->pc = 0x47eb8cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_47eb90:
    // 0x47eb90: 0x3c050061  lui         $a1, 0x61
    ctx->pc = 0x47eb90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)97 << 16));
label_47eb94:
    // 0x47eb94: 0x24a508c0  addiu       $a1, $a1, 0x8C0
    ctx->pc = 0x47eb94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2240));
label_47eb98:
    // 0x47eb98: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x47eb98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_47eb9c:
    // 0x47eb9c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x47eb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_47eba0:
    // 0x47eba0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x47eba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_47eba4:
    // 0x47eba4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x47eba4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_47eba8:
    // 0x47eba8: 0xc0d615c  jal         func_358570
label_47ebac:
    if (ctx->pc == 0x47EBACu) {
        ctx->pc = 0x47EBACu;
            // 0x47ebac: 0x2222021  addu        $a0, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->pc = 0x47EBB0u;
        goto label_47ebb0;
    }
    ctx->pc = 0x47EBA8u;
    SET_GPR_U32(ctx, 31, 0x47EBB0u);
    ctx->pc = 0x47EBACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47EBA8u;
            // 0x47ebac: 0x2222021  addu        $a0, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x358570u;
    if (runtime->hasFunction(0x358570u)) {
        auto targetFn = runtime->lookupFunction(0x358570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47EBB0u; }
        if (ctx->pc != 0x47EBB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00358570_0x358570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47EBB0u; }
        if (ctx->pc != 0x47EBB0u) { return; }
    }
    ctx->pc = 0x47EBB0u;
label_47ebb0:
    // 0x47ebb0: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x47ebb0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_47ebb4:
    // 0x47ebb4: 0xa2020020  sb          $v0, 0x20($s0)
    ctx->pc = 0x47ebb4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 32), (uint8_t)GPR_U32(ctx, 2));
label_47ebb8:
    // 0x47ebb8: 0x1e40fff4  bgtz        $s2, . + 4 + (-0xC << 2)
label_47ebbc:
    if (ctx->pc == 0x47EBBCu) {
        ctx->pc = 0x47EBBCu;
            // 0x47ebbc: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->pc = 0x47EBC0u;
        goto label_47ebc0;
    }
    ctx->pc = 0x47EBB8u;
    {
        const bool branch_taken_0x47ebb8 = (GPR_S32(ctx, 18) > 0);
        ctx->pc = 0x47EBBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47EBB8u;
            // 0x47ebbc: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47ebb8) {
            ctx->pc = 0x47EB8Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_47eb8c;
        }
    }
    ctx->pc = 0x47EBC0u;
label_47ebc0:
    // 0x47ebc0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x47ebc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_47ebc4:
    // 0x47ebc4: 0xae8300d0  sw          $v1, 0xD0($s4)
    ctx->pc = 0x47ebc4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 208), GPR_U32(ctx, 3));
label_47ebc8:
    // 0x47ebc8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x47ebc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_47ebcc:
    // 0x47ebcc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x47ebccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_47ebd0:
    // 0x47ebd0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x47ebd0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_47ebd4:
    // 0x47ebd4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x47ebd4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_47ebd8:
    // 0x47ebd8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x47ebd8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_47ebdc:
    // 0x47ebdc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x47ebdcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_47ebe0:
    // 0x47ebe0: 0x3e00008  jr          $ra
label_47ebe4:
    if (ctx->pc == 0x47EBE4u) {
        ctx->pc = 0x47EBE4u;
            // 0x47ebe4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x47EBE8u;
        goto label_47ebe8;
    }
    ctx->pc = 0x47EBE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47EBE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47EBE0u;
            // 0x47ebe4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x47EBE8u;
label_47ebe8:
    // 0x47ebe8: 0x0  nop
    ctx->pc = 0x47ebe8u;
    // NOP
label_47ebec:
    // 0x47ebec: 0x0  nop
    ctx->pc = 0x47ebecu;
    // NOP
label_47ebf0:
    // 0x47ebf0: 0x8c820084  lw          $v0, 0x84($a0)
    ctx->pc = 0x47ebf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
label_47ebf4:
    // 0x47ebf4: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x47ebf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
label_47ebf8:
    // 0x47ebf8: 0x3e00008  jr          $ra
label_47ebfc:
    if (ctx->pc == 0x47EBFCu) {
        ctx->pc = 0x47EBFCu;
            // 0x47ebfc: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->pc = 0x47EC00u;
        goto label_47ec00;
    }
    ctx->pc = 0x47EBF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47EBFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47EBF8u;
            // 0x47ebfc: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x47EC00u;
label_47ec00:
    // 0x47ec00: 0x3e00008  jr          $ra
label_47ec04:
    if (ctx->pc == 0x47EC04u) {
        ctx->pc = 0x47EC04u;
            // 0x47ec04: 0x240261ee  addiu       $v0, $zero, 0x61EE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25070));
        ctx->pc = 0x47EC08u;
        goto label_47ec08;
    }
    ctx->pc = 0x47EC00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47EC04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47EC00u;
            // 0x47ec04: 0x240261ee  addiu       $v0, $zero, 0x61EE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25070));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x47EC08u;
label_47ec08:
    // 0x47ec08: 0x0  nop
    ctx->pc = 0x47ec08u;
    // NOP
label_47ec0c:
    // 0x47ec0c: 0x0  nop
    ctx->pc = 0x47ec0cu;
    // NOP
label_47ec10:
    // 0x47ec10: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x47ec10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_47ec14:
    // 0x47ec14: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x47ec14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_47ec18:
    // 0x47ec18: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x47ec18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_47ec1c:
    // 0x47ec1c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x47ec1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_47ec20:
    // 0x47ec20: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x47ec20u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_47ec24:
    // 0x47ec24: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x47ec24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_47ec28:
    // 0x47ec28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x47ec28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_47ec2c:
    // 0x47ec2c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x47ec2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_47ec30:
    // 0x47ec30: 0x8c900070  lw          $s0, 0x70($a0)
    ctx->pc = 0x47ec30u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_47ec34:
    // 0x47ec34: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_47ec38:
    if (ctx->pc == 0x47EC38u) {
        ctx->pc = 0x47EC38u;
            // 0x47ec38: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47EC3Cu;
        goto label_47ec3c;
    }
    ctx->pc = 0x47EC34u;
    {
        const bool branch_taken_0x47ec34 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x47EC38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47EC34u;
            // 0x47ec38: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47ec34) {
            ctx->pc = 0x47EC78u;
            goto label_47ec78;
        }
    }
    ctx->pc = 0x47EC3Cu;
label_47ec3c:
    // 0x47ec3c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x47ec3cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_47ec40:
    // 0x47ec40: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x47ec40u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_47ec44:
    // 0x47ec44: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x47ec44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_47ec48:
    // 0x47ec48: 0x8e820074  lw          $v0, 0x74($s4)
    ctx->pc = 0x47ec48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_47ec4c:
    // 0x47ec4c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x47ec4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_47ec50:
    // 0x47ec50: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x47ec50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_47ec54:
    // 0x47ec54: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x47ec54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_47ec58:
    // 0x47ec58: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x47ec58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_47ec5c:
    // 0x47ec5c: 0x320f809  jalr        $t9
label_47ec60:
    if (ctx->pc == 0x47EC60u) {
        ctx->pc = 0x47EC64u;
        goto label_47ec64;
    }
    ctx->pc = 0x47EC5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x47EC64u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x47EC64u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x47EC64u; }
            if (ctx->pc != 0x47EC64u) { return; }
        }
        }
    }
    ctx->pc = 0x47EC64u;
label_47ec64:
    // 0x47ec64: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x47ec64u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_47ec68:
    // 0x47ec68: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x47ec68u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_47ec6c:
    // 0x47ec6c: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x47ec6cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_47ec70:
    // 0x47ec70: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_47ec74:
    if (ctx->pc == 0x47EC74u) {
        ctx->pc = 0x47EC74u;
            // 0x47ec74: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x47EC78u;
        goto label_47ec78;
    }
    ctx->pc = 0x47EC70u;
    {
        const bool branch_taken_0x47ec70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x47EC74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47EC70u;
            // 0x47ec74: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47ec70) {
            ctx->pc = 0x47EC48u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_47ec48;
        }
    }
    ctx->pc = 0x47EC78u;
label_47ec78:
    // 0x47ec78: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x47ec78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_47ec7c:
    // 0x47ec7c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x47ec7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_47ec80:
    // 0x47ec80: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x47ec80u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_47ec84:
    // 0x47ec84: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x47ec84u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_47ec88:
    // 0x47ec88: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x47ec88u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_47ec8c:
    // 0x47ec8c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x47ec8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_47ec90:
    // 0x47ec90: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x47ec90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_47ec94:
    // 0x47ec94: 0x3e00008  jr          $ra
label_47ec98:
    if (ctx->pc == 0x47EC98u) {
        ctx->pc = 0x47EC98u;
            // 0x47ec98: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x47EC9Cu;
        goto label_47ec9c;
    }
    ctx->pc = 0x47EC94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47EC98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47EC94u;
            // 0x47ec98: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x47EC9Cu;
label_47ec9c:
    // 0x47ec9c: 0x0  nop
    ctx->pc = 0x47ec9cu;
    // NOP
label_47eca0:
    // 0x47eca0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x47eca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_47eca4:
    // 0x47eca4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x47eca4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_47eca8:
    // 0x47eca8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x47eca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_47ecac:
    // 0x47ecac: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x47ecacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_47ecb0:
    // 0x47ecb0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x47ecb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_47ecb4:
    // 0x47ecb4: 0x8c83007c  lw          $v1, 0x7C($a0)
    ctx->pc = 0x47ecb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_47ecb8:
    // 0x47ecb8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x47ecb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_47ecbc:
    // 0x47ecbc: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x47ecbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_47ecc0:
    // 0x47ecc0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x47ecc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_47ecc4:
    // 0x47ecc4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x47ecc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_47ecc8:
    // 0x47ecc8: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x47ecc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_47eccc:
    // 0x47eccc: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x47ecccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_47ecd0:
    // 0x47ecd0: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x47ecd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_47ecd4:
    // 0x47ecd4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x47ecd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_47ecd8:
    // 0x47ecd8: 0x8c42fffc  lw          $v0, -0x4($v0)
    ctx->pc = 0x47ecd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_47ecdc:
    // 0x47ecdc: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x47ecdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_47ece0:
    // 0x47ece0: 0x8c82007c  lw          $v0, 0x7C($a0)
    ctx->pc = 0x47ece0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_47ece4:
    // 0x47ece4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x47ece4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_47ece8:
    // 0x47ece8: 0xac82007c  sw          $v0, 0x7C($a0)
    ctx->pc = 0x47ece8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
label_47ecec:
    // 0x47ecec: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x47ececu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_47ecf0:
    // 0x47ecf0: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x47ecf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_47ecf4:
    // 0x47ecf4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x47ecf4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_47ecf8:
    // 0x47ecf8: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x47ecf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_47ecfc:
    // 0x47ecfc: 0xc0a997c  jal         func_2A65F0
label_47ed00:
    if (ctx->pc == 0x47ED00u) {
        ctx->pc = 0x47ED00u;
            // 0x47ed00: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->pc = 0x47ED04u;
        goto label_47ed04;
    }
    ctx->pc = 0x47ECFCu;
    SET_GPR_U32(ctx, 31, 0x47ED04u);
    ctx->pc = 0x47ED00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47ECFCu;
            // 0x47ed00: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47ED04u; }
        if (ctx->pc != 0x47ED04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47ED04u; }
        if (ctx->pc != 0x47ED04u) { return; }
    }
    ctx->pc = 0x47ED04u;
label_47ed04:
    // 0x47ed04: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x47ed04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_47ed08:
    // 0x47ed08: 0xc0d879c  jal         func_361E70
label_47ed0c:
    if (ctx->pc == 0x47ED0Cu) {
        ctx->pc = 0x47ED0Cu;
            // 0x47ed0c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47ED10u;
        goto label_47ed10;
    }
    ctx->pc = 0x47ED08u;
    SET_GPR_U32(ctx, 31, 0x47ED10u);
    ctx->pc = 0x47ED0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47ED08u;
            // 0x47ed0c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361E70u;
    if (runtime->hasFunction(0x361E70u)) {
        auto targetFn = runtime->lookupFunction(0x361E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47ED10u; }
        if (ctx->pc != 0x47ED10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361E70_0x361e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47ED10u; }
        if (ctx->pc != 0x47ED10u) { return; }
    }
    ctx->pc = 0x47ED10u;
label_47ed10:
    // 0x47ed10: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x47ed10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_47ed14:
    // 0x47ed14: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x47ed14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_47ed18:
    // 0x47ed18: 0x3e00008  jr          $ra
label_47ed1c:
    if (ctx->pc == 0x47ED1Cu) {
        ctx->pc = 0x47ED1Cu;
            // 0x47ed1c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x47ED20u;
        goto label_47ed20;
    }
    ctx->pc = 0x47ED18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47ED1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47ED18u;
            // 0x47ed1c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x47ED20u;
label_47ed20:
    // 0x47ed20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x47ed20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_47ed24:
    // 0x47ed24: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x47ed24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_47ed28:
    // 0x47ed28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x47ed28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_47ed2c:
    // 0x47ed2c: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x47ed2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_47ed30:
    // 0x47ed30: 0x10600047  beqz        $v1, . + 4 + (0x47 << 2)
label_47ed34:
    if (ctx->pc == 0x47ED34u) {
        ctx->pc = 0x47ED34u;
            // 0x47ed34: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47ED38u;
        goto label_47ed38;
    }
    ctx->pc = 0x47ED30u;
    {
        const bool branch_taken_0x47ed30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x47ED34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47ED30u;
            // 0x47ed34: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47ed30) {
            ctx->pc = 0x47EE50u;
            goto label_47ee50;
        }
    }
    ctx->pc = 0x47ED38u;
label_47ed38:
    // 0x47ed38: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x47ed38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_47ed3c:
    // 0x47ed3c: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x47ed3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
label_47ed40:
    // 0x47ed40: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x47ed40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_47ed44:
    // 0x47ed44: 0xc075128  jal         func_1D44A0
label_47ed48:
    if (ctx->pc == 0x47ED48u) {
        ctx->pc = 0x47ED48u;
            // 0x47ed48: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x47ED4Cu;
        goto label_47ed4c;
    }
    ctx->pc = 0x47ED44u;
    SET_GPR_U32(ctx, 31, 0x47ED4Cu);
    ctx->pc = 0x47ED48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47ED44u;
            // 0x47ed48: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D44A0u;
    if (runtime->hasFunction(0x1D44A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47ED4Cu; }
        if (ctx->pc != 0x47ED4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D44A0_0x1d44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47ED4Cu; }
        if (ctx->pc != 0x47ED4Cu) { return; }
    }
    ctx->pc = 0x47ED4Cu;
label_47ed4c:
    // 0x47ed4c: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x47ed4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_47ed50:
    // 0x47ed50: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x47ed50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_47ed54:
    // 0x47ed54: 0x8c42e390  lw          $v0, -0x1C70($v0)
    ctx->pc = 0x47ed54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960016)));
label_47ed58:
    // 0x47ed58: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x47ed58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_47ed5c:
    // 0x47ed5c: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x47ed5cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_47ed60:
    // 0x47ed60: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_47ed64:
    if (ctx->pc == 0x47ED64u) {
        ctx->pc = 0x47ED64u;
            // 0x47ed64: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->pc = 0x47ED68u;
        goto label_47ed68;
    }
    ctx->pc = 0x47ED60u;
    {
        const bool branch_taken_0x47ed60 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x47ED64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47ED60u;
            // 0x47ed64: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47ed60) {
            ctx->pc = 0x47ED70u;
            goto label_47ed70;
        }
    }
    ctx->pc = 0x47ED68u;
label_47ed68:
    // 0x47ed68: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x47ed68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_47ed6c:
    // 0x47ed6c: 0xac43e390  sw          $v1, -0x1C70($v0)
    ctx->pc = 0x47ed6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960016), GPR_U32(ctx, 3));
label_47ed70:
    // 0x47ed70: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x47ed70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_47ed74:
    // 0x47ed74: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x47ed74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_47ed78:
    // 0x47ed78: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x47ed78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_47ed7c:
    // 0x47ed7c: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x47ed7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_47ed80:
    // 0x47ed80: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x47ed80u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_47ed84:
    // 0x47ed84: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_47ed88:
    if (ctx->pc == 0x47ED88u) {
        ctx->pc = 0x47ED88u;
            // 0x47ed88: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x47ED8Cu;
        goto label_47ed8c;
    }
    ctx->pc = 0x47ED84u;
    {
        const bool branch_taken_0x47ed84 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x47ed84) {
            ctx->pc = 0x47ED88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x47ED84u;
            // 0x47ed88: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x47ED98u;
            goto label_47ed98;
        }
    }
    ctx->pc = 0x47ED8Cu;
label_47ed8c:
    // 0x47ed8c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x47ed8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_47ed90:
    // 0x47ed90: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x47ed90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_47ed94:
    // 0x47ed94: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x47ed94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_47ed98:
    // 0x47ed98: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x47ed98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_47ed9c:
    // 0x47ed9c: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x47ed9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_47eda0:
    // 0x47eda0: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x47eda0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_47eda4:
    // 0x47eda4: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x47eda4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_47eda8:
    // 0x47eda8: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_47edac:
    if (ctx->pc == 0x47EDACu) {
        ctx->pc = 0x47EDACu;
            // 0x47edac: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x47EDB0u;
        goto label_47edb0;
    }
    ctx->pc = 0x47EDA8u;
    {
        const bool branch_taken_0x47eda8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x47eda8) {
            ctx->pc = 0x47EDACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x47EDA8u;
            // 0x47edac: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x47EDBCu;
            goto label_47edbc;
        }
    }
    ctx->pc = 0x47EDB0u;
label_47edb0:
    // 0x47edb0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x47edb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_47edb4:
    // 0x47edb4: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x47edb4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_47edb8:
    // 0x47edb8: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x47edb8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_47edbc:
    // 0x47edbc: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x47edbcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_47edc0:
    // 0x47edc0: 0x320f809  jalr        $t9
label_47edc4:
    if (ctx->pc == 0x47EDC4u) {
        ctx->pc = 0x47EDC4u;
            // 0x47edc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47EDC8u;
        goto label_47edc8;
    }
    ctx->pc = 0x47EDC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x47EDC8u);
        ctx->pc = 0x47EDC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47EDC0u;
            // 0x47edc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x47EDC8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x47EDC8u; }
            if (ctx->pc != 0x47EDC8u) { return; }
        }
        }
    }
    ctx->pc = 0x47EDC8u;
label_47edc8:
    // 0x47edc8: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x47edc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_47edcc:
    // 0x47edcc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x47edccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_47edd0:
    // 0x47edd0: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x47edd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
label_47edd4:
    // 0x47edd4: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x47edd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_47edd8:
    // 0x47edd8: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x47edd8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_47eddc:
    // 0x47eddc: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x47eddcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_47ede0:
    // 0x47ede0: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_47ede4:
    if (ctx->pc == 0x47EDE4u) {
        ctx->pc = 0x47EDE4u;
            // 0x47ede4: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->pc = 0x47EDE8u;
        goto label_47ede8;
    }
    ctx->pc = 0x47EDE0u;
    {
        const bool branch_taken_0x47ede0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x47ede0) {
            ctx->pc = 0x47EDE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x47EDE0u;
            // 0x47ede4: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x47EDF4u;
            goto label_47edf4;
        }
    }
    ctx->pc = 0x47EDE8u;
label_47ede8:
    // 0x47ede8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x47ede8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_47edec:
    // 0x47edec: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x47edecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
label_47edf0:
    // 0x47edf0: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x47edf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_47edf4:
    // 0x47edf4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x47edf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_47edf8:
    // 0x47edf8: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x47edf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
label_47edfc:
    // 0x47edfc: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x47edfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_47ee00:
    // 0x47ee00: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x47ee00u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_47ee04:
    // 0x47ee04: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x47ee04u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_47ee08:
    // 0x47ee08: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_47ee0c:
    if (ctx->pc == 0x47EE0Cu) {
        ctx->pc = 0x47EE10u;
        goto label_47ee10;
    }
    ctx->pc = 0x47EE08u;
    {
        const bool branch_taken_0x47ee08 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x47ee08) {
            ctx->pc = 0x47EE18u;
            goto label_47ee18;
        }
    }
    ctx->pc = 0x47EE10u;
label_47ee10:
    // 0x47ee10: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x47ee10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_47ee14:
    // 0x47ee14: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x47ee14u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_47ee18:
    // 0x47ee18: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x47ee18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_47ee1c:
    // 0x47ee1c: 0x8c63e3c8  lw          $v1, -0x1C38($v1)
    ctx->pc = 0x47ee1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960072)));
label_47ee20:
    // 0x47ee20: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x47ee20u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_47ee24:
    // 0x47ee24: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_47ee28:
    if (ctx->pc == 0x47EE28u) {
        ctx->pc = 0x47EE2Cu;
        goto label_47ee2c;
    }
    ctx->pc = 0x47EE24u;
    {
        const bool branch_taken_0x47ee24 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x47ee24) {
            ctx->pc = 0x47EE34u;
            goto label_47ee34;
        }
    }
    ctx->pc = 0x47EE2Cu;
label_47ee2c:
    // 0x47ee2c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x47ee2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_47ee30:
    // 0x47ee30: 0xac62e3c8  sw          $v0, -0x1C38($v1)
    ctx->pc = 0x47ee30u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960072), GPR_U32(ctx, 2));
label_47ee34:
    // 0x47ee34: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x47ee34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_47ee38:
    // 0x47ee38: 0x8c63e3d0  lw          $v1, -0x1C30($v1)
    ctx->pc = 0x47ee38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960080)));
label_47ee3c:
    // 0x47ee3c: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x47ee3cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_47ee40:
    // 0x47ee40: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_47ee44:
    if (ctx->pc == 0x47EE44u) {
        ctx->pc = 0x47EE44u;
            // 0x47ee44: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x47EE48u;
        goto label_47ee48;
    }
    ctx->pc = 0x47EE40u;
    {
        const bool branch_taken_0x47ee40 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x47ee40) {
            ctx->pc = 0x47EE44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x47EE40u;
            // 0x47ee44: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x47EE54u;
            goto label_47ee54;
        }
    }
    ctx->pc = 0x47EE48u;
label_47ee48:
    // 0x47ee48: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x47ee48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_47ee4c:
    // 0x47ee4c: 0xac62e3d0  sw          $v0, -0x1C30($v1)
    ctx->pc = 0x47ee4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960080), GPR_U32(ctx, 2));
label_47ee50:
    // 0x47ee50: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x47ee50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_47ee54:
    // 0x47ee54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x47ee54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_47ee58:
    // 0x47ee58: 0x3e00008  jr          $ra
label_47ee5c:
    if (ctx->pc == 0x47EE5Cu) {
        ctx->pc = 0x47EE5Cu;
            // 0x47ee5c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x47EE60u;
        goto label_47ee60;
    }
    ctx->pc = 0x47EE58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47EE5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47EE58u;
            // 0x47ee5c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x47EE60u;
label_47ee60:
    // 0x47ee60: 0x811f830  j           func_47E0C0
label_47ee64:
    if (ctx->pc == 0x47EE64u) {
        ctx->pc = 0x47EE64u;
            // 0x47ee64: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x47EE68u;
        goto label_47ee68;
    }
    ctx->pc = 0x47EE60u;
    ctx->pc = 0x47EE64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47EE60u;
            // 0x47ee64: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x47E0C0u;
    {
        auto targetFn = runtime->lookupFunction(0x47E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x47EE68u;
label_47ee68:
    // 0x47ee68: 0x0  nop
    ctx->pc = 0x47ee68u;
    // NOP
label_47ee6c:
    // 0x47ee6c: 0x0  nop
    ctx->pc = 0x47ee6cu;
    // NOP
label_47ee70:
    // 0x47ee70: 0x811f698  j           func_47DA60
label_47ee74:
    if (ctx->pc == 0x47EE74u) {
        ctx->pc = 0x47EE74u;
            // 0x47ee74: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x47EE78u;
        goto label_47ee78;
    }
    ctx->pc = 0x47EE70u;
    ctx->pc = 0x47EE74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47EE70u;
            // 0x47ee74: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x47DA60u;
    if (runtime->hasFunction(0x47DA60u)) {
        auto targetFn = runtime->lookupFunction(0x47DA60u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0047DA60_0x47da60(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x47EE78u;
label_47ee78:
    // 0x47ee78: 0x0  nop
    ctx->pc = 0x47ee78u;
    // NOP
label_47ee7c:
    // 0x47ee7c: 0x0  nop
    ctx->pc = 0x47ee7cu;
    // NOP
label_47ee80:
    // 0x47ee80: 0x811f6f0  j           func_47DBC0
label_47ee84:
    if (ctx->pc == 0x47EE84u) {
        ctx->pc = 0x47EE84u;
            // 0x47ee84: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->pc = 0x47EE88u;
        goto label_47ee88;
    }
    ctx->pc = 0x47EE80u;
    ctx->pc = 0x47EE84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47EE80u;
            // 0x47ee84: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x47DBC0u;
    {
        auto targetFn = runtime->lookupFunction(0x47DBC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x47EE88u;
label_47ee88:
    // 0x47ee88: 0x0  nop
    ctx->pc = 0x47ee88u;
    // NOP
label_47ee8c:
    // 0x47ee8c: 0x0  nop
    ctx->pc = 0x47ee8cu;
    // NOP
label_47ee90:
    // 0x47ee90: 0x811f674  j           func_47D9D0
label_47ee94:
    if (ctx->pc == 0x47EE94u) {
        ctx->pc = 0x47EE94u;
            // 0x47ee94: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x47EE98u;
        goto label_47ee98;
    }
    ctx->pc = 0x47EE90u;
    ctx->pc = 0x47EE94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47EE90u;
            // 0x47ee94: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x47D9D0u;
    {
        auto targetFn = runtime->lookupFunction(0x47D9D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x47EE98u;
label_47ee98:
    // 0x47ee98: 0x0  nop
    ctx->pc = 0x47ee98u;
    // NOP
label_47ee9c:
    // 0x47ee9c: 0x0  nop
    ctx->pc = 0x47ee9cu;
    // NOP
label_47eea0:
    // 0x47eea0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x47eea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_47eea4:
    // 0x47eea4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x47eea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_47eea8:
    // 0x47eea8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x47eea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_47eeac:
    // 0x47eeac: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x47eeacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_47eeb0:
    // 0x47eeb0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x47eeb0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_47eeb4:
    // 0x47eeb4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x47eeb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_47eeb8:
    // 0x47eeb8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x47eeb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_47eebc:
    // 0x47eebc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x47eebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_47eec0:
    // 0x47eec0: 0x8c900070  lw          $s0, 0x70($a0)
    ctx->pc = 0x47eec0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_47eec4:
    // 0x47eec4: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_47eec8:
    if (ctx->pc == 0x47EEC8u) {
        ctx->pc = 0x47EEC8u;
            // 0x47eec8: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47EECCu;
        goto label_47eecc;
    }
    ctx->pc = 0x47EEC4u;
    {
        const bool branch_taken_0x47eec4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x47EEC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47EEC4u;
            // 0x47eec8: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47eec4) {
            ctx->pc = 0x47EF08u;
            goto label_47ef08;
        }
    }
    ctx->pc = 0x47EECCu;
label_47eecc:
    // 0x47eecc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x47eeccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_47eed0:
    // 0x47eed0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x47eed0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_47eed4:
    // 0x47eed4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x47eed4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_47eed8:
    // 0x47eed8: 0x8e820074  lw          $v0, 0x74($s4)
    ctx->pc = 0x47eed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_47eedc:
    // 0x47eedc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x47eedcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_47eee0:
    // 0x47eee0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x47eee0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_47eee4:
    // 0x47eee4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x47eee4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_47eee8:
    // 0x47eee8: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x47eee8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_47eeec:
    // 0x47eeec: 0x320f809  jalr        $t9
label_47eef0:
    if (ctx->pc == 0x47EEF0u) {
        ctx->pc = 0x47EEF4u;
        goto label_47eef4;
    }
    ctx->pc = 0x47EEECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x47EEF4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x47EEF4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x47EEF4u; }
            if (ctx->pc != 0x47EEF4u) { return; }
        }
        }
    }
    ctx->pc = 0x47EEF4u;
label_47eef4:
    // 0x47eef4: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x47eef4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_47eef8:
    // 0x47eef8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x47eef8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_47eefc:
    // 0x47eefc: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x47eefcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_47ef00:
    // 0x47ef00: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_47ef04:
    if (ctx->pc == 0x47EF04u) {
        ctx->pc = 0x47EF04u;
            // 0x47ef04: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x47EF08u;
        goto label_47ef08;
    }
    ctx->pc = 0x47EF00u;
    {
        const bool branch_taken_0x47ef00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x47EF04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47EF00u;
            // 0x47ef04: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47ef00) {
            ctx->pc = 0x47EED8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_47eed8;
        }
    }
    ctx->pc = 0x47EF08u;
label_47ef08:
    // 0x47ef08: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x47ef08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_47ef0c:
    // 0x47ef0c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x47ef0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_47ef10:
    // 0x47ef10: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x47ef10u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_47ef14:
    // 0x47ef14: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x47ef14u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_47ef18:
    // 0x47ef18: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x47ef18u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_47ef1c:
    // 0x47ef1c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x47ef1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_47ef20:
    // 0x47ef20: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x47ef20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_47ef24:
    // 0x47ef24: 0x3e00008  jr          $ra
label_47ef28:
    if (ctx->pc == 0x47EF28u) {
        ctx->pc = 0x47EF28u;
            // 0x47ef28: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x47EF2Cu;
        goto label_47ef2c;
    }
    ctx->pc = 0x47EF24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47EF28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47EF24u;
            // 0x47ef28: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x47EF2Cu;
label_47ef2c:
    // 0x47ef2c: 0x0  nop
    ctx->pc = 0x47ef2cu;
    // NOP
label_47ef30:
    // 0x47ef30: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x47ef30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_47ef34:
    // 0x47ef34: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x47ef34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_47ef38:
    // 0x47ef38: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x47ef38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_47ef3c:
    // 0x47ef3c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x47ef3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_47ef40:
    // 0x47ef40: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x47ef40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_47ef44:
    // 0x47ef44: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x47ef44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_47ef48:
    // 0x47ef48: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x47ef48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_47ef4c:
    // 0x47ef4c: 0x1220005c  beqz        $s1, . + 4 + (0x5C << 2)
label_47ef50:
    if (ctx->pc == 0x47EF50u) {
        ctx->pc = 0x47EF50u;
            // 0x47ef50: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47EF54u;
        goto label_47ef54;
    }
    ctx->pc = 0x47EF4Cu;
    {
        const bool branch_taken_0x47ef4c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x47EF50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47EF4Cu;
            // 0x47ef50: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47ef4c) {
            ctx->pc = 0x47F0C0u;
            goto label_47f0c0;
        }
    }
    ctx->pc = 0x47EF54u;
label_47ef54:
    // 0x47ef54: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x47ef54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_47ef58:
    // 0x47ef58: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x47ef58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_47ef5c:
    // 0x47ef5c: 0x2463eeb0  addiu       $v1, $v1, -0x1150
    ctx->pc = 0x47ef5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962864));
label_47ef60:
    // 0x47ef60: 0x2442eee8  addiu       $v0, $v0, -0x1118
    ctx->pc = 0x47ef60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962920));
label_47ef64:
    // 0x47ef64: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x47ef64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_47ef68:
    // 0x47ef68: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x47ef68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_47ef6c:
    // 0x47ef6c: 0x8e24009c  lw          $a0, 0x9C($s1)
    ctx->pc = 0x47ef6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_47ef70:
    // 0x47ef70: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x47ef70u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_47ef74:
    // 0x47ef74: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
label_47ef78:
    if (ctx->pc == 0x47EF78u) {
        ctx->pc = 0x47EF78u;
            // 0x47ef78: 0x8e3200d4  lw          $s2, 0xD4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
        ctx->pc = 0x47EF7Cu;
        goto label_47ef7c;
    }
    ctx->pc = 0x47EF74u;
    {
        const bool branch_taken_0x47ef74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47ef74) {
            ctx->pc = 0x47EF78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x47EF74u;
            // 0x47ef78: 0x8e3200d4  lw          $s2, 0xD4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x47EFB4u;
            goto label_47efb4;
        }
    }
    ctx->pc = 0x47EF7Cu;
label_47ef7c:
    // 0x47ef7c: 0x84820006  lh          $v0, 0x6($a0)
    ctx->pc = 0x47ef7cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_47ef80:
    // 0x47ef80: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x47ef80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_47ef84:
    // 0x47ef84: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x47ef84u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
label_47ef88:
    // 0x47ef88: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x47ef88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_47ef8c:
    // 0x47ef8c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x47ef8cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_47ef90:
    // 0x47ef90: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_47ef94:
    if (ctx->pc == 0x47EF94u) {
        ctx->pc = 0x47EF98u;
        goto label_47ef98;
    }
    ctx->pc = 0x47EF90u;
    {
        const bool branch_taken_0x47ef90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x47ef90) {
            ctx->pc = 0x47EFB0u;
            goto label_47efb0;
        }
    }
    ctx->pc = 0x47EF98u;
label_47ef98:
    // 0x47ef98: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_47ef9c:
    if (ctx->pc == 0x47EF9Cu) {
        ctx->pc = 0x47EFA0u;
        goto label_47efa0;
    }
    ctx->pc = 0x47EF98u;
    {
        const bool branch_taken_0x47ef98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x47ef98) {
            ctx->pc = 0x47EFB0u;
            goto label_47efb0;
        }
    }
    ctx->pc = 0x47EFA0u;
label_47efa0:
    // 0x47efa0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x47efa0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_47efa4:
    // 0x47efa4: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x47efa4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_47efa8:
    // 0x47efa8: 0x320f809  jalr        $t9
label_47efac:
    if (ctx->pc == 0x47EFACu) {
        ctx->pc = 0x47EFACu;
            // 0x47efac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x47EFB0u;
        goto label_47efb0;
    }
    ctx->pc = 0x47EFA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x47EFB0u);
        ctx->pc = 0x47EFACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47EFA8u;
            // 0x47efac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x47EFB0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x47EFB0u; }
            if (ctx->pc != 0x47EFB0u) { return; }
        }
        }
    }
    ctx->pc = 0x47EFB0u;
label_47efb0:
    // 0x47efb0: 0x8e3200d4  lw          $s2, 0xD4($s1)
    ctx->pc = 0x47efb0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_47efb4:
    // 0x47efb4: 0x52400010  beql        $s2, $zero, . + 4 + (0x10 << 2)
label_47efb8:
    if (ctx->pc == 0x47EFB8u) {
        ctx->pc = 0x47EFB8u;
            // 0x47efb8: 0x262200dc  addiu       $v0, $s1, 0xDC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 220));
        ctx->pc = 0x47EFBCu;
        goto label_47efbc;
    }
    ctx->pc = 0x47EFB4u;
    {
        const bool branch_taken_0x47efb4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x47efb4) {
            ctx->pc = 0x47EFB8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x47EFB4u;
            // 0x47efb8: 0x262200dc  addiu       $v0, $s1, 0xDC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 220));
        ctx->in_delay_slot = false;
            ctx->pc = 0x47EFF8u;
            goto label_47eff8;
        }
    }
    ctx->pc = 0x47EFBCu;
label_47efbc:
    // 0x47efbc: 0x8e3300d0  lw          $s3, 0xD0($s1)
    ctx->pc = 0x47efbcu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 208)));
label_47efc0:
    // 0x47efc0: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x47efc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_47efc4:
    // 0x47efc4: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_47efc8:
    if (ctx->pc == 0x47EFC8u) {
        ctx->pc = 0x47EFCCu;
        goto label_47efcc;
    }
    ctx->pc = 0x47EFC4u;
    {
        const bool branch_taken_0x47efc4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x47efc4) {
            ctx->pc = 0x47EFE0u;
            goto label_47efe0;
        }
    }
    ctx->pc = 0x47EFCCu;
label_47efcc:
    // 0x47efcc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x47efccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_47efd0:
    // 0x47efd0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x47efd0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_47efd4:
    // 0x47efd4: 0x320f809  jalr        $t9
label_47efd8:
    if (ctx->pc == 0x47EFD8u) {
        ctx->pc = 0x47EFD8u;
            // 0x47efd8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x47EFDCu;
        goto label_47efdc;
    }
    ctx->pc = 0x47EFD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x47EFDCu);
        ctx->pc = 0x47EFD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47EFD4u;
            // 0x47efd8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x47EFDCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x47EFDCu; }
            if (ctx->pc != 0x47EFDCu) { return; }
        }
        }
    }
    ctx->pc = 0x47EFDCu;
label_47efdc:
    // 0x47efdc: 0x0  nop
    ctx->pc = 0x47efdcu;
    // NOP
label_47efe0:
    // 0x47efe0: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x47efe0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_47efe4:
    // 0x47efe4: 0x1e60fff6  bgtz        $s3, . + 4 + (-0xA << 2)
label_47efe8:
    if (ctx->pc == 0x47EFE8u) {
        ctx->pc = 0x47EFE8u;
            // 0x47efe8: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->pc = 0x47EFECu;
        goto label_47efec;
    }
    ctx->pc = 0x47EFE4u;
    {
        const bool branch_taken_0x47efe4 = (GPR_S32(ctx, 19) > 0);
        ctx->pc = 0x47EFE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47EFE4u;
            // 0x47efe8: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47efe4) {
            ctx->pc = 0x47EFC0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_47efc0;
        }
    }
    ctx->pc = 0x47EFECu;
label_47efec:
    // 0x47efec: 0xc0400a8  jal         func_1002A0
label_47eff0:
    if (ctx->pc == 0x47EFF0u) {
        ctx->pc = 0x47EFF0u;
            // 0x47eff0: 0x8e2400d4  lw          $a0, 0xD4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
        ctx->pc = 0x47EFF4u;
        goto label_47eff4;
    }
    ctx->pc = 0x47EFECu;
    SET_GPR_U32(ctx, 31, 0x47EFF4u);
    ctx->pc = 0x47EFF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47EFECu;
            // 0x47eff0: 0x8e2400d4  lw          $a0, 0xD4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47EFF4u; }
        if (ctx->pc != 0x47EFF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47EFF4u; }
        if (ctx->pc != 0x47EFF4u) { return; }
    }
    ctx->pc = 0x47EFF4u;
label_47eff4:
    // 0x47eff4: 0x262200dc  addiu       $v0, $s1, 0xDC
    ctx->pc = 0x47eff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 220));
label_47eff8:
    // 0x47eff8: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_47effc:
    if (ctx->pc == 0x47EFFCu) {
        ctx->pc = 0x47F000u;
        goto label_47f000;
    }
    ctx->pc = 0x47EFF8u;
    {
        const bool branch_taken_0x47eff8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47eff8) {
            ctx->pc = 0x47F024u;
            goto label_47f024;
        }
    }
    ctx->pc = 0x47F000u;
label_47f000:
    // 0x47f000: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_47f004:
    if (ctx->pc == 0x47F004u) {
        ctx->pc = 0x47F008u;
        goto label_47f008;
    }
    ctx->pc = 0x47F000u;
    {
        const bool branch_taken_0x47f000 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47f000) {
            ctx->pc = 0x47F024u;
            goto label_47f024;
        }
    }
    ctx->pc = 0x47F008u;
label_47f008:
    // 0x47f008: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_47f00c:
    if (ctx->pc == 0x47F00Cu) {
        ctx->pc = 0x47F010u;
        goto label_47f010;
    }
    ctx->pc = 0x47F008u;
    {
        const bool branch_taken_0x47f008 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47f008) {
            ctx->pc = 0x47F024u;
            goto label_47f024;
        }
    }
    ctx->pc = 0x47F010u;
label_47f010:
    // 0x47f010: 0x8e2400e4  lw          $a0, 0xE4($s1)
    ctx->pc = 0x47f010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 228)));
label_47f014:
    // 0x47f014: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_47f018:
    if (ctx->pc == 0x47F018u) {
        ctx->pc = 0x47F01Cu;
        goto label_47f01c;
    }
    ctx->pc = 0x47F014u;
    {
        const bool branch_taken_0x47f014 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x47f014) {
            ctx->pc = 0x47F024u;
            goto label_47f024;
        }
    }
    ctx->pc = 0x47F01Cu;
label_47f01c:
    // 0x47f01c: 0xc0400a8  jal         func_1002A0
label_47f020:
    if (ctx->pc == 0x47F020u) {
        ctx->pc = 0x47F024u;
        goto label_47f024;
    }
    ctx->pc = 0x47F01Cu;
    SET_GPR_U32(ctx, 31, 0x47F024u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47F024u; }
        if (ctx->pc != 0x47F024u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47F024u; }
        if (ctx->pc != 0x47F024u) { return; }
    }
    ctx->pc = 0x47F024u;
label_47f024:
    // 0x47f024: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x47f024u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_47f028:
    // 0x47f028: 0x262400a0  addiu       $a0, $s1, 0xA0
    ctx->pc = 0x47f028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
label_47f02c:
    // 0x47f02c: 0x24a5f3a0  addiu       $a1, $a1, -0xC60
    ctx->pc = 0x47f02cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964128));
label_47f030:
    // 0x47f030: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x47f030u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_47f034:
    // 0x47f034: 0xc0407e8  jal         func_101FA0
label_47f038:
    if (ctx->pc == 0x47F038u) {
        ctx->pc = 0x47F038u;
            // 0x47f038: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x47F03Cu;
        goto label_47f03c;
    }
    ctx->pc = 0x47F034u;
    SET_GPR_U32(ctx, 31, 0x47F03Cu);
    ctx->pc = 0x47F038u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47F034u;
            // 0x47f038: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101FA0u;
    if (runtime->hasFunction(0x101FA0u)) {
        auto targetFn = runtime->lookupFunction(0x101FA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47F03Cu; }
        if (ctx->pc != 0x47F03Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101FA0_0x101fa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47F03Cu; }
        if (ctx->pc != 0x47F03Cu) { return; }
    }
    ctx->pc = 0x47F03Cu;
label_47f03c:
    // 0x47f03c: 0x5220001b  beql        $s1, $zero, . + 4 + (0x1B << 2)
label_47f040:
    if (ctx->pc == 0x47F040u) {
        ctx->pc = 0x47F040u;
            // 0x47f040: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x47F044u;
        goto label_47f044;
    }
    ctx->pc = 0x47F03Cu;
    {
        const bool branch_taken_0x47f03c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x47f03c) {
            ctx->pc = 0x47F040u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x47F03Cu;
            // 0x47f040: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x47F0ACu;
            goto label_47f0ac;
        }
    }
    ctx->pc = 0x47F044u;
label_47f044:
    // 0x47f044: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x47f044u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_47f048:
    // 0x47f048: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x47f048u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_47f04c:
    // 0x47f04c: 0x2463ef10  addiu       $v1, $v1, -0x10F0
    ctx->pc = 0x47f04cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962960));
label_47f050:
    // 0x47f050: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x47f050u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_47f054:
    // 0x47f054: 0x2442ef48  addiu       $v0, $v0, -0x10B8
    ctx->pc = 0x47f054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963016));
label_47f058:
    // 0x47f058: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x47f058u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_47f05c:
    // 0x47f05c: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x47f05cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_47f060:
    // 0x47f060: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x47f060u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_47f064:
    // 0x47f064: 0xc0407c0  jal         func_101F00
label_47f068:
    if (ctx->pc == 0x47F068u) {
        ctx->pc = 0x47F068u;
            // 0x47f068: 0x24a5f210  addiu       $a1, $a1, -0xDF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963728));
        ctx->pc = 0x47F06Cu;
        goto label_47f06c;
    }
    ctx->pc = 0x47F064u;
    SET_GPR_U32(ctx, 31, 0x47F06Cu);
    ctx->pc = 0x47F068u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47F064u;
            // 0x47f068: 0x24a5f210  addiu       $a1, $a1, -0xDF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963728));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47F06Cu; }
        if (ctx->pc != 0x47F06Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47F06Cu; }
        if (ctx->pc != 0x47F06Cu) { return; }
    }
    ctx->pc = 0x47F06Cu;
label_47f06c:
    // 0x47f06c: 0x26240084  addiu       $a0, $s1, 0x84
    ctx->pc = 0x47f06cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_47f070:
    // 0x47f070: 0xc11fc6c  jal         func_47F1B0
label_47f074:
    if (ctx->pc == 0x47F074u) {
        ctx->pc = 0x47F074u;
            // 0x47f074: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x47F078u;
        goto label_47f078;
    }
    ctx->pc = 0x47F070u;
    SET_GPR_U32(ctx, 31, 0x47F078u);
    ctx->pc = 0x47F074u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47F070u;
            // 0x47f074: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x47F1B0u;
    if (runtime->hasFunction(0x47F1B0u)) {
        auto targetFn = runtime->lookupFunction(0x47F1B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47F078u; }
        if (ctx->pc != 0x47F078u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0047F1B0_0x47f1b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47F078u; }
        if (ctx->pc != 0x47F078u) { return; }
    }
    ctx->pc = 0x47F078u;
label_47f078:
    // 0x47f078: 0x26240078  addiu       $a0, $s1, 0x78
    ctx->pc = 0x47f078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_47f07c:
    // 0x47f07c: 0xc11fc50  jal         func_47F140
label_47f080:
    if (ctx->pc == 0x47F080u) {
        ctx->pc = 0x47F080u;
            // 0x47f080: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x47F084u;
        goto label_47f084;
    }
    ctx->pc = 0x47F07Cu;
    SET_GPR_U32(ctx, 31, 0x47F084u);
    ctx->pc = 0x47F080u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47F07Cu;
            // 0x47f080: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x47F140u;
    if (runtime->hasFunction(0x47F140u)) {
        auto targetFn = runtime->lookupFunction(0x47F140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47F084u; }
        if (ctx->pc != 0x47F084u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0047F140_0x47f140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47F084u; }
        if (ctx->pc != 0x47F084u) { return; }
    }
    ctx->pc = 0x47F084u;
label_47f084:
    // 0x47f084: 0x2624006c  addiu       $a0, $s1, 0x6C
    ctx->pc = 0x47f084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_47f088:
    // 0x47f088: 0xc11fc50  jal         func_47F140
label_47f08c:
    if (ctx->pc == 0x47F08Cu) {
        ctx->pc = 0x47F08Cu;
            // 0x47f08c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x47F090u;
        goto label_47f090;
    }
    ctx->pc = 0x47F088u;
    SET_GPR_U32(ctx, 31, 0x47F090u);
    ctx->pc = 0x47F08Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47F088u;
            // 0x47f08c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x47F140u;
    if (runtime->hasFunction(0x47F140u)) {
        auto targetFn = runtime->lookupFunction(0x47F140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47F090u; }
        if (ctx->pc != 0x47F090u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0047F140_0x47f140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47F090u; }
        if (ctx->pc != 0x47F090u) { return; }
    }
    ctx->pc = 0x47F090u;
label_47f090:
    // 0x47f090: 0x26240064  addiu       $a0, $s1, 0x64
    ctx->pc = 0x47f090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_47f094:
    // 0x47f094: 0xc11fc38  jal         func_47F0E0
label_47f098:
    if (ctx->pc == 0x47F098u) {
        ctx->pc = 0x47F098u;
            // 0x47f098: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47F09Cu;
        goto label_47f09c;
    }
    ctx->pc = 0x47F094u;
    SET_GPR_U32(ctx, 31, 0x47F09Cu);
    ctx->pc = 0x47F098u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47F094u;
            // 0x47f098: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x47F0E0u;
    if (runtime->hasFunction(0x47F0E0u)) {
        auto targetFn = runtime->lookupFunction(0x47F0E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47F09Cu; }
        if (ctx->pc != 0x47F09Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0047F0E0_0x47f0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47F09Cu; }
        if (ctx->pc != 0x47F09Cu) { return; }
    }
    ctx->pc = 0x47F09Cu;
label_47f09c:
    // 0x47f09c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x47f09cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_47f0a0:
    // 0x47f0a0: 0xc0ae1c0  jal         func_2B8700
label_47f0a4:
    if (ctx->pc == 0x47F0A4u) {
        ctx->pc = 0x47F0A4u;
            // 0x47f0a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47F0A8u;
        goto label_47f0a8;
    }
    ctx->pc = 0x47F0A0u;
    SET_GPR_U32(ctx, 31, 0x47F0A8u);
    ctx->pc = 0x47F0A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47F0A0u;
            // 0x47f0a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47F0A8u; }
        if (ctx->pc != 0x47F0A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47F0A8u; }
        if (ctx->pc != 0x47F0A8u) { return; }
    }
    ctx->pc = 0x47F0A8u;
label_47f0a8:
    // 0x47f0a8: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x47f0a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_47f0ac:
    // 0x47f0ac: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x47f0acu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_47f0b0:
    // 0x47f0b0: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_47f0b4:
    if (ctx->pc == 0x47F0B4u) {
        ctx->pc = 0x47F0B4u;
            // 0x47f0b4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47F0B8u;
        goto label_47f0b8;
    }
    ctx->pc = 0x47F0B0u;
    {
        const bool branch_taken_0x47f0b0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x47f0b0) {
            ctx->pc = 0x47F0B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x47F0B0u;
            // 0x47f0b4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x47F0C4u;
            goto label_47f0c4;
        }
    }
    ctx->pc = 0x47F0B8u;
label_47f0b8:
    // 0x47f0b8: 0xc0400a8  jal         func_1002A0
label_47f0bc:
    if (ctx->pc == 0x47F0BCu) {
        ctx->pc = 0x47F0BCu;
            // 0x47f0bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47F0C0u;
        goto label_47f0c0;
    }
    ctx->pc = 0x47F0B8u;
    SET_GPR_U32(ctx, 31, 0x47F0C0u);
    ctx->pc = 0x47F0BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47F0B8u;
            // 0x47f0bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47F0C0u; }
        if (ctx->pc != 0x47F0C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47F0C0u; }
        if (ctx->pc != 0x47F0C0u) { return; }
    }
    ctx->pc = 0x47F0C0u;
label_47f0c0:
    // 0x47f0c0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x47f0c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_47f0c4:
    // 0x47f0c4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x47f0c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_47f0c8:
    // 0x47f0c8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x47f0c8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_47f0cc:
    // 0x47f0cc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x47f0ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_47f0d0:
    // 0x47f0d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x47f0d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_47f0d4:
    // 0x47f0d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x47f0d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_47f0d8:
    // 0x47f0d8: 0x3e00008  jr          $ra
label_47f0dc:
    if (ctx->pc == 0x47F0DCu) {
        ctx->pc = 0x47F0DCu;
            // 0x47f0dc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x47F0E0u;
        goto label_fallthrough_0x47f0d8;
    }
    ctx->pc = 0x47F0D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47F0DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47F0D8u;
            // 0x47f0dc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x47f0d8:
    ctx->pc = 0x47F0E0u;
}
