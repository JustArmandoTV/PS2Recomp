#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0044E290
// Address: 0x44e290 - 0x44ecf0
void sub_0044E290_0x44e290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0044E290_0x44e290");
#endif

    switch (ctx->pc) {
        case 0x44e290u: goto label_44e290;
        case 0x44e294u: goto label_44e294;
        case 0x44e298u: goto label_44e298;
        case 0x44e29cu: goto label_44e29c;
        case 0x44e2a0u: goto label_44e2a0;
        case 0x44e2a4u: goto label_44e2a4;
        case 0x44e2a8u: goto label_44e2a8;
        case 0x44e2acu: goto label_44e2ac;
        case 0x44e2b0u: goto label_44e2b0;
        case 0x44e2b4u: goto label_44e2b4;
        case 0x44e2b8u: goto label_44e2b8;
        case 0x44e2bcu: goto label_44e2bc;
        case 0x44e2c0u: goto label_44e2c0;
        case 0x44e2c4u: goto label_44e2c4;
        case 0x44e2c8u: goto label_44e2c8;
        case 0x44e2ccu: goto label_44e2cc;
        case 0x44e2d0u: goto label_44e2d0;
        case 0x44e2d4u: goto label_44e2d4;
        case 0x44e2d8u: goto label_44e2d8;
        case 0x44e2dcu: goto label_44e2dc;
        case 0x44e2e0u: goto label_44e2e0;
        case 0x44e2e4u: goto label_44e2e4;
        case 0x44e2e8u: goto label_44e2e8;
        case 0x44e2ecu: goto label_44e2ec;
        case 0x44e2f0u: goto label_44e2f0;
        case 0x44e2f4u: goto label_44e2f4;
        case 0x44e2f8u: goto label_44e2f8;
        case 0x44e2fcu: goto label_44e2fc;
        case 0x44e300u: goto label_44e300;
        case 0x44e304u: goto label_44e304;
        case 0x44e308u: goto label_44e308;
        case 0x44e30cu: goto label_44e30c;
        case 0x44e310u: goto label_44e310;
        case 0x44e314u: goto label_44e314;
        case 0x44e318u: goto label_44e318;
        case 0x44e31cu: goto label_44e31c;
        case 0x44e320u: goto label_44e320;
        case 0x44e324u: goto label_44e324;
        case 0x44e328u: goto label_44e328;
        case 0x44e32cu: goto label_44e32c;
        case 0x44e330u: goto label_44e330;
        case 0x44e334u: goto label_44e334;
        case 0x44e338u: goto label_44e338;
        case 0x44e33cu: goto label_44e33c;
        case 0x44e340u: goto label_44e340;
        case 0x44e344u: goto label_44e344;
        case 0x44e348u: goto label_44e348;
        case 0x44e34cu: goto label_44e34c;
        case 0x44e350u: goto label_44e350;
        case 0x44e354u: goto label_44e354;
        case 0x44e358u: goto label_44e358;
        case 0x44e35cu: goto label_44e35c;
        case 0x44e360u: goto label_44e360;
        case 0x44e364u: goto label_44e364;
        case 0x44e368u: goto label_44e368;
        case 0x44e36cu: goto label_44e36c;
        case 0x44e370u: goto label_44e370;
        case 0x44e374u: goto label_44e374;
        case 0x44e378u: goto label_44e378;
        case 0x44e37cu: goto label_44e37c;
        case 0x44e380u: goto label_44e380;
        case 0x44e384u: goto label_44e384;
        case 0x44e388u: goto label_44e388;
        case 0x44e38cu: goto label_44e38c;
        case 0x44e390u: goto label_44e390;
        case 0x44e394u: goto label_44e394;
        case 0x44e398u: goto label_44e398;
        case 0x44e39cu: goto label_44e39c;
        case 0x44e3a0u: goto label_44e3a0;
        case 0x44e3a4u: goto label_44e3a4;
        case 0x44e3a8u: goto label_44e3a8;
        case 0x44e3acu: goto label_44e3ac;
        case 0x44e3b0u: goto label_44e3b0;
        case 0x44e3b4u: goto label_44e3b4;
        case 0x44e3b8u: goto label_44e3b8;
        case 0x44e3bcu: goto label_44e3bc;
        case 0x44e3c0u: goto label_44e3c0;
        case 0x44e3c4u: goto label_44e3c4;
        case 0x44e3c8u: goto label_44e3c8;
        case 0x44e3ccu: goto label_44e3cc;
        case 0x44e3d0u: goto label_44e3d0;
        case 0x44e3d4u: goto label_44e3d4;
        case 0x44e3d8u: goto label_44e3d8;
        case 0x44e3dcu: goto label_44e3dc;
        case 0x44e3e0u: goto label_44e3e0;
        case 0x44e3e4u: goto label_44e3e4;
        case 0x44e3e8u: goto label_44e3e8;
        case 0x44e3ecu: goto label_44e3ec;
        case 0x44e3f0u: goto label_44e3f0;
        case 0x44e3f4u: goto label_44e3f4;
        case 0x44e3f8u: goto label_44e3f8;
        case 0x44e3fcu: goto label_44e3fc;
        case 0x44e400u: goto label_44e400;
        case 0x44e404u: goto label_44e404;
        case 0x44e408u: goto label_44e408;
        case 0x44e40cu: goto label_44e40c;
        case 0x44e410u: goto label_44e410;
        case 0x44e414u: goto label_44e414;
        case 0x44e418u: goto label_44e418;
        case 0x44e41cu: goto label_44e41c;
        case 0x44e420u: goto label_44e420;
        case 0x44e424u: goto label_44e424;
        case 0x44e428u: goto label_44e428;
        case 0x44e42cu: goto label_44e42c;
        case 0x44e430u: goto label_44e430;
        case 0x44e434u: goto label_44e434;
        case 0x44e438u: goto label_44e438;
        case 0x44e43cu: goto label_44e43c;
        case 0x44e440u: goto label_44e440;
        case 0x44e444u: goto label_44e444;
        case 0x44e448u: goto label_44e448;
        case 0x44e44cu: goto label_44e44c;
        case 0x44e450u: goto label_44e450;
        case 0x44e454u: goto label_44e454;
        case 0x44e458u: goto label_44e458;
        case 0x44e45cu: goto label_44e45c;
        case 0x44e460u: goto label_44e460;
        case 0x44e464u: goto label_44e464;
        case 0x44e468u: goto label_44e468;
        case 0x44e46cu: goto label_44e46c;
        case 0x44e470u: goto label_44e470;
        case 0x44e474u: goto label_44e474;
        case 0x44e478u: goto label_44e478;
        case 0x44e47cu: goto label_44e47c;
        case 0x44e480u: goto label_44e480;
        case 0x44e484u: goto label_44e484;
        case 0x44e488u: goto label_44e488;
        case 0x44e48cu: goto label_44e48c;
        case 0x44e490u: goto label_44e490;
        case 0x44e494u: goto label_44e494;
        case 0x44e498u: goto label_44e498;
        case 0x44e49cu: goto label_44e49c;
        case 0x44e4a0u: goto label_44e4a0;
        case 0x44e4a4u: goto label_44e4a4;
        case 0x44e4a8u: goto label_44e4a8;
        case 0x44e4acu: goto label_44e4ac;
        case 0x44e4b0u: goto label_44e4b0;
        case 0x44e4b4u: goto label_44e4b4;
        case 0x44e4b8u: goto label_44e4b8;
        case 0x44e4bcu: goto label_44e4bc;
        case 0x44e4c0u: goto label_44e4c0;
        case 0x44e4c4u: goto label_44e4c4;
        case 0x44e4c8u: goto label_44e4c8;
        case 0x44e4ccu: goto label_44e4cc;
        case 0x44e4d0u: goto label_44e4d0;
        case 0x44e4d4u: goto label_44e4d4;
        case 0x44e4d8u: goto label_44e4d8;
        case 0x44e4dcu: goto label_44e4dc;
        case 0x44e4e0u: goto label_44e4e0;
        case 0x44e4e4u: goto label_44e4e4;
        case 0x44e4e8u: goto label_44e4e8;
        case 0x44e4ecu: goto label_44e4ec;
        case 0x44e4f0u: goto label_44e4f0;
        case 0x44e4f4u: goto label_44e4f4;
        case 0x44e4f8u: goto label_44e4f8;
        case 0x44e4fcu: goto label_44e4fc;
        case 0x44e500u: goto label_44e500;
        case 0x44e504u: goto label_44e504;
        case 0x44e508u: goto label_44e508;
        case 0x44e50cu: goto label_44e50c;
        case 0x44e510u: goto label_44e510;
        case 0x44e514u: goto label_44e514;
        case 0x44e518u: goto label_44e518;
        case 0x44e51cu: goto label_44e51c;
        case 0x44e520u: goto label_44e520;
        case 0x44e524u: goto label_44e524;
        case 0x44e528u: goto label_44e528;
        case 0x44e52cu: goto label_44e52c;
        case 0x44e530u: goto label_44e530;
        case 0x44e534u: goto label_44e534;
        case 0x44e538u: goto label_44e538;
        case 0x44e53cu: goto label_44e53c;
        case 0x44e540u: goto label_44e540;
        case 0x44e544u: goto label_44e544;
        case 0x44e548u: goto label_44e548;
        case 0x44e54cu: goto label_44e54c;
        case 0x44e550u: goto label_44e550;
        case 0x44e554u: goto label_44e554;
        case 0x44e558u: goto label_44e558;
        case 0x44e55cu: goto label_44e55c;
        case 0x44e560u: goto label_44e560;
        case 0x44e564u: goto label_44e564;
        case 0x44e568u: goto label_44e568;
        case 0x44e56cu: goto label_44e56c;
        case 0x44e570u: goto label_44e570;
        case 0x44e574u: goto label_44e574;
        case 0x44e578u: goto label_44e578;
        case 0x44e57cu: goto label_44e57c;
        case 0x44e580u: goto label_44e580;
        case 0x44e584u: goto label_44e584;
        case 0x44e588u: goto label_44e588;
        case 0x44e58cu: goto label_44e58c;
        case 0x44e590u: goto label_44e590;
        case 0x44e594u: goto label_44e594;
        case 0x44e598u: goto label_44e598;
        case 0x44e59cu: goto label_44e59c;
        case 0x44e5a0u: goto label_44e5a0;
        case 0x44e5a4u: goto label_44e5a4;
        case 0x44e5a8u: goto label_44e5a8;
        case 0x44e5acu: goto label_44e5ac;
        case 0x44e5b0u: goto label_44e5b0;
        case 0x44e5b4u: goto label_44e5b4;
        case 0x44e5b8u: goto label_44e5b8;
        case 0x44e5bcu: goto label_44e5bc;
        case 0x44e5c0u: goto label_44e5c0;
        case 0x44e5c4u: goto label_44e5c4;
        case 0x44e5c8u: goto label_44e5c8;
        case 0x44e5ccu: goto label_44e5cc;
        case 0x44e5d0u: goto label_44e5d0;
        case 0x44e5d4u: goto label_44e5d4;
        case 0x44e5d8u: goto label_44e5d8;
        case 0x44e5dcu: goto label_44e5dc;
        case 0x44e5e0u: goto label_44e5e0;
        case 0x44e5e4u: goto label_44e5e4;
        case 0x44e5e8u: goto label_44e5e8;
        case 0x44e5ecu: goto label_44e5ec;
        case 0x44e5f0u: goto label_44e5f0;
        case 0x44e5f4u: goto label_44e5f4;
        case 0x44e5f8u: goto label_44e5f8;
        case 0x44e5fcu: goto label_44e5fc;
        case 0x44e600u: goto label_44e600;
        case 0x44e604u: goto label_44e604;
        case 0x44e608u: goto label_44e608;
        case 0x44e60cu: goto label_44e60c;
        case 0x44e610u: goto label_44e610;
        case 0x44e614u: goto label_44e614;
        case 0x44e618u: goto label_44e618;
        case 0x44e61cu: goto label_44e61c;
        case 0x44e620u: goto label_44e620;
        case 0x44e624u: goto label_44e624;
        case 0x44e628u: goto label_44e628;
        case 0x44e62cu: goto label_44e62c;
        case 0x44e630u: goto label_44e630;
        case 0x44e634u: goto label_44e634;
        case 0x44e638u: goto label_44e638;
        case 0x44e63cu: goto label_44e63c;
        case 0x44e640u: goto label_44e640;
        case 0x44e644u: goto label_44e644;
        case 0x44e648u: goto label_44e648;
        case 0x44e64cu: goto label_44e64c;
        case 0x44e650u: goto label_44e650;
        case 0x44e654u: goto label_44e654;
        case 0x44e658u: goto label_44e658;
        case 0x44e65cu: goto label_44e65c;
        case 0x44e660u: goto label_44e660;
        case 0x44e664u: goto label_44e664;
        case 0x44e668u: goto label_44e668;
        case 0x44e66cu: goto label_44e66c;
        case 0x44e670u: goto label_44e670;
        case 0x44e674u: goto label_44e674;
        case 0x44e678u: goto label_44e678;
        case 0x44e67cu: goto label_44e67c;
        case 0x44e680u: goto label_44e680;
        case 0x44e684u: goto label_44e684;
        case 0x44e688u: goto label_44e688;
        case 0x44e68cu: goto label_44e68c;
        case 0x44e690u: goto label_44e690;
        case 0x44e694u: goto label_44e694;
        case 0x44e698u: goto label_44e698;
        case 0x44e69cu: goto label_44e69c;
        case 0x44e6a0u: goto label_44e6a0;
        case 0x44e6a4u: goto label_44e6a4;
        case 0x44e6a8u: goto label_44e6a8;
        case 0x44e6acu: goto label_44e6ac;
        case 0x44e6b0u: goto label_44e6b0;
        case 0x44e6b4u: goto label_44e6b4;
        case 0x44e6b8u: goto label_44e6b8;
        case 0x44e6bcu: goto label_44e6bc;
        case 0x44e6c0u: goto label_44e6c0;
        case 0x44e6c4u: goto label_44e6c4;
        case 0x44e6c8u: goto label_44e6c8;
        case 0x44e6ccu: goto label_44e6cc;
        case 0x44e6d0u: goto label_44e6d0;
        case 0x44e6d4u: goto label_44e6d4;
        case 0x44e6d8u: goto label_44e6d8;
        case 0x44e6dcu: goto label_44e6dc;
        case 0x44e6e0u: goto label_44e6e0;
        case 0x44e6e4u: goto label_44e6e4;
        case 0x44e6e8u: goto label_44e6e8;
        case 0x44e6ecu: goto label_44e6ec;
        case 0x44e6f0u: goto label_44e6f0;
        case 0x44e6f4u: goto label_44e6f4;
        case 0x44e6f8u: goto label_44e6f8;
        case 0x44e6fcu: goto label_44e6fc;
        case 0x44e700u: goto label_44e700;
        case 0x44e704u: goto label_44e704;
        case 0x44e708u: goto label_44e708;
        case 0x44e70cu: goto label_44e70c;
        case 0x44e710u: goto label_44e710;
        case 0x44e714u: goto label_44e714;
        case 0x44e718u: goto label_44e718;
        case 0x44e71cu: goto label_44e71c;
        case 0x44e720u: goto label_44e720;
        case 0x44e724u: goto label_44e724;
        case 0x44e728u: goto label_44e728;
        case 0x44e72cu: goto label_44e72c;
        case 0x44e730u: goto label_44e730;
        case 0x44e734u: goto label_44e734;
        case 0x44e738u: goto label_44e738;
        case 0x44e73cu: goto label_44e73c;
        case 0x44e740u: goto label_44e740;
        case 0x44e744u: goto label_44e744;
        case 0x44e748u: goto label_44e748;
        case 0x44e74cu: goto label_44e74c;
        case 0x44e750u: goto label_44e750;
        case 0x44e754u: goto label_44e754;
        case 0x44e758u: goto label_44e758;
        case 0x44e75cu: goto label_44e75c;
        case 0x44e760u: goto label_44e760;
        case 0x44e764u: goto label_44e764;
        case 0x44e768u: goto label_44e768;
        case 0x44e76cu: goto label_44e76c;
        case 0x44e770u: goto label_44e770;
        case 0x44e774u: goto label_44e774;
        case 0x44e778u: goto label_44e778;
        case 0x44e77cu: goto label_44e77c;
        case 0x44e780u: goto label_44e780;
        case 0x44e784u: goto label_44e784;
        case 0x44e788u: goto label_44e788;
        case 0x44e78cu: goto label_44e78c;
        case 0x44e790u: goto label_44e790;
        case 0x44e794u: goto label_44e794;
        case 0x44e798u: goto label_44e798;
        case 0x44e79cu: goto label_44e79c;
        case 0x44e7a0u: goto label_44e7a0;
        case 0x44e7a4u: goto label_44e7a4;
        case 0x44e7a8u: goto label_44e7a8;
        case 0x44e7acu: goto label_44e7ac;
        case 0x44e7b0u: goto label_44e7b0;
        case 0x44e7b4u: goto label_44e7b4;
        case 0x44e7b8u: goto label_44e7b8;
        case 0x44e7bcu: goto label_44e7bc;
        case 0x44e7c0u: goto label_44e7c0;
        case 0x44e7c4u: goto label_44e7c4;
        case 0x44e7c8u: goto label_44e7c8;
        case 0x44e7ccu: goto label_44e7cc;
        case 0x44e7d0u: goto label_44e7d0;
        case 0x44e7d4u: goto label_44e7d4;
        case 0x44e7d8u: goto label_44e7d8;
        case 0x44e7dcu: goto label_44e7dc;
        case 0x44e7e0u: goto label_44e7e0;
        case 0x44e7e4u: goto label_44e7e4;
        case 0x44e7e8u: goto label_44e7e8;
        case 0x44e7ecu: goto label_44e7ec;
        case 0x44e7f0u: goto label_44e7f0;
        case 0x44e7f4u: goto label_44e7f4;
        case 0x44e7f8u: goto label_44e7f8;
        case 0x44e7fcu: goto label_44e7fc;
        case 0x44e800u: goto label_44e800;
        case 0x44e804u: goto label_44e804;
        case 0x44e808u: goto label_44e808;
        case 0x44e80cu: goto label_44e80c;
        case 0x44e810u: goto label_44e810;
        case 0x44e814u: goto label_44e814;
        case 0x44e818u: goto label_44e818;
        case 0x44e81cu: goto label_44e81c;
        case 0x44e820u: goto label_44e820;
        case 0x44e824u: goto label_44e824;
        case 0x44e828u: goto label_44e828;
        case 0x44e82cu: goto label_44e82c;
        case 0x44e830u: goto label_44e830;
        case 0x44e834u: goto label_44e834;
        case 0x44e838u: goto label_44e838;
        case 0x44e83cu: goto label_44e83c;
        case 0x44e840u: goto label_44e840;
        case 0x44e844u: goto label_44e844;
        case 0x44e848u: goto label_44e848;
        case 0x44e84cu: goto label_44e84c;
        case 0x44e850u: goto label_44e850;
        case 0x44e854u: goto label_44e854;
        case 0x44e858u: goto label_44e858;
        case 0x44e85cu: goto label_44e85c;
        case 0x44e860u: goto label_44e860;
        case 0x44e864u: goto label_44e864;
        case 0x44e868u: goto label_44e868;
        case 0x44e86cu: goto label_44e86c;
        case 0x44e870u: goto label_44e870;
        case 0x44e874u: goto label_44e874;
        case 0x44e878u: goto label_44e878;
        case 0x44e87cu: goto label_44e87c;
        case 0x44e880u: goto label_44e880;
        case 0x44e884u: goto label_44e884;
        case 0x44e888u: goto label_44e888;
        case 0x44e88cu: goto label_44e88c;
        case 0x44e890u: goto label_44e890;
        case 0x44e894u: goto label_44e894;
        case 0x44e898u: goto label_44e898;
        case 0x44e89cu: goto label_44e89c;
        case 0x44e8a0u: goto label_44e8a0;
        case 0x44e8a4u: goto label_44e8a4;
        case 0x44e8a8u: goto label_44e8a8;
        case 0x44e8acu: goto label_44e8ac;
        case 0x44e8b0u: goto label_44e8b0;
        case 0x44e8b4u: goto label_44e8b4;
        case 0x44e8b8u: goto label_44e8b8;
        case 0x44e8bcu: goto label_44e8bc;
        case 0x44e8c0u: goto label_44e8c0;
        case 0x44e8c4u: goto label_44e8c4;
        case 0x44e8c8u: goto label_44e8c8;
        case 0x44e8ccu: goto label_44e8cc;
        case 0x44e8d0u: goto label_44e8d0;
        case 0x44e8d4u: goto label_44e8d4;
        case 0x44e8d8u: goto label_44e8d8;
        case 0x44e8dcu: goto label_44e8dc;
        case 0x44e8e0u: goto label_44e8e0;
        case 0x44e8e4u: goto label_44e8e4;
        case 0x44e8e8u: goto label_44e8e8;
        case 0x44e8ecu: goto label_44e8ec;
        case 0x44e8f0u: goto label_44e8f0;
        case 0x44e8f4u: goto label_44e8f4;
        case 0x44e8f8u: goto label_44e8f8;
        case 0x44e8fcu: goto label_44e8fc;
        case 0x44e900u: goto label_44e900;
        case 0x44e904u: goto label_44e904;
        case 0x44e908u: goto label_44e908;
        case 0x44e90cu: goto label_44e90c;
        case 0x44e910u: goto label_44e910;
        case 0x44e914u: goto label_44e914;
        case 0x44e918u: goto label_44e918;
        case 0x44e91cu: goto label_44e91c;
        case 0x44e920u: goto label_44e920;
        case 0x44e924u: goto label_44e924;
        case 0x44e928u: goto label_44e928;
        case 0x44e92cu: goto label_44e92c;
        case 0x44e930u: goto label_44e930;
        case 0x44e934u: goto label_44e934;
        case 0x44e938u: goto label_44e938;
        case 0x44e93cu: goto label_44e93c;
        case 0x44e940u: goto label_44e940;
        case 0x44e944u: goto label_44e944;
        case 0x44e948u: goto label_44e948;
        case 0x44e94cu: goto label_44e94c;
        case 0x44e950u: goto label_44e950;
        case 0x44e954u: goto label_44e954;
        case 0x44e958u: goto label_44e958;
        case 0x44e95cu: goto label_44e95c;
        case 0x44e960u: goto label_44e960;
        case 0x44e964u: goto label_44e964;
        case 0x44e968u: goto label_44e968;
        case 0x44e96cu: goto label_44e96c;
        case 0x44e970u: goto label_44e970;
        case 0x44e974u: goto label_44e974;
        case 0x44e978u: goto label_44e978;
        case 0x44e97cu: goto label_44e97c;
        case 0x44e980u: goto label_44e980;
        case 0x44e984u: goto label_44e984;
        case 0x44e988u: goto label_44e988;
        case 0x44e98cu: goto label_44e98c;
        case 0x44e990u: goto label_44e990;
        case 0x44e994u: goto label_44e994;
        case 0x44e998u: goto label_44e998;
        case 0x44e99cu: goto label_44e99c;
        case 0x44e9a0u: goto label_44e9a0;
        case 0x44e9a4u: goto label_44e9a4;
        case 0x44e9a8u: goto label_44e9a8;
        case 0x44e9acu: goto label_44e9ac;
        case 0x44e9b0u: goto label_44e9b0;
        case 0x44e9b4u: goto label_44e9b4;
        case 0x44e9b8u: goto label_44e9b8;
        case 0x44e9bcu: goto label_44e9bc;
        case 0x44e9c0u: goto label_44e9c0;
        case 0x44e9c4u: goto label_44e9c4;
        case 0x44e9c8u: goto label_44e9c8;
        case 0x44e9ccu: goto label_44e9cc;
        case 0x44e9d0u: goto label_44e9d0;
        case 0x44e9d4u: goto label_44e9d4;
        case 0x44e9d8u: goto label_44e9d8;
        case 0x44e9dcu: goto label_44e9dc;
        case 0x44e9e0u: goto label_44e9e0;
        case 0x44e9e4u: goto label_44e9e4;
        case 0x44e9e8u: goto label_44e9e8;
        case 0x44e9ecu: goto label_44e9ec;
        case 0x44e9f0u: goto label_44e9f0;
        case 0x44e9f4u: goto label_44e9f4;
        case 0x44e9f8u: goto label_44e9f8;
        case 0x44e9fcu: goto label_44e9fc;
        case 0x44ea00u: goto label_44ea00;
        case 0x44ea04u: goto label_44ea04;
        case 0x44ea08u: goto label_44ea08;
        case 0x44ea0cu: goto label_44ea0c;
        case 0x44ea10u: goto label_44ea10;
        case 0x44ea14u: goto label_44ea14;
        case 0x44ea18u: goto label_44ea18;
        case 0x44ea1cu: goto label_44ea1c;
        case 0x44ea20u: goto label_44ea20;
        case 0x44ea24u: goto label_44ea24;
        case 0x44ea28u: goto label_44ea28;
        case 0x44ea2cu: goto label_44ea2c;
        case 0x44ea30u: goto label_44ea30;
        case 0x44ea34u: goto label_44ea34;
        case 0x44ea38u: goto label_44ea38;
        case 0x44ea3cu: goto label_44ea3c;
        case 0x44ea40u: goto label_44ea40;
        case 0x44ea44u: goto label_44ea44;
        case 0x44ea48u: goto label_44ea48;
        case 0x44ea4cu: goto label_44ea4c;
        case 0x44ea50u: goto label_44ea50;
        case 0x44ea54u: goto label_44ea54;
        case 0x44ea58u: goto label_44ea58;
        case 0x44ea5cu: goto label_44ea5c;
        case 0x44ea60u: goto label_44ea60;
        case 0x44ea64u: goto label_44ea64;
        case 0x44ea68u: goto label_44ea68;
        case 0x44ea6cu: goto label_44ea6c;
        case 0x44ea70u: goto label_44ea70;
        case 0x44ea74u: goto label_44ea74;
        case 0x44ea78u: goto label_44ea78;
        case 0x44ea7cu: goto label_44ea7c;
        case 0x44ea80u: goto label_44ea80;
        case 0x44ea84u: goto label_44ea84;
        case 0x44ea88u: goto label_44ea88;
        case 0x44ea8cu: goto label_44ea8c;
        case 0x44ea90u: goto label_44ea90;
        case 0x44ea94u: goto label_44ea94;
        case 0x44ea98u: goto label_44ea98;
        case 0x44ea9cu: goto label_44ea9c;
        case 0x44eaa0u: goto label_44eaa0;
        case 0x44eaa4u: goto label_44eaa4;
        case 0x44eaa8u: goto label_44eaa8;
        case 0x44eaacu: goto label_44eaac;
        case 0x44eab0u: goto label_44eab0;
        case 0x44eab4u: goto label_44eab4;
        case 0x44eab8u: goto label_44eab8;
        case 0x44eabcu: goto label_44eabc;
        case 0x44eac0u: goto label_44eac0;
        case 0x44eac4u: goto label_44eac4;
        case 0x44eac8u: goto label_44eac8;
        case 0x44eaccu: goto label_44eacc;
        case 0x44ead0u: goto label_44ead0;
        case 0x44ead4u: goto label_44ead4;
        case 0x44ead8u: goto label_44ead8;
        case 0x44eadcu: goto label_44eadc;
        case 0x44eae0u: goto label_44eae0;
        case 0x44eae4u: goto label_44eae4;
        case 0x44eae8u: goto label_44eae8;
        case 0x44eaecu: goto label_44eaec;
        case 0x44eaf0u: goto label_44eaf0;
        case 0x44eaf4u: goto label_44eaf4;
        case 0x44eaf8u: goto label_44eaf8;
        case 0x44eafcu: goto label_44eafc;
        case 0x44eb00u: goto label_44eb00;
        case 0x44eb04u: goto label_44eb04;
        case 0x44eb08u: goto label_44eb08;
        case 0x44eb0cu: goto label_44eb0c;
        case 0x44eb10u: goto label_44eb10;
        case 0x44eb14u: goto label_44eb14;
        case 0x44eb18u: goto label_44eb18;
        case 0x44eb1cu: goto label_44eb1c;
        case 0x44eb20u: goto label_44eb20;
        case 0x44eb24u: goto label_44eb24;
        case 0x44eb28u: goto label_44eb28;
        case 0x44eb2cu: goto label_44eb2c;
        case 0x44eb30u: goto label_44eb30;
        case 0x44eb34u: goto label_44eb34;
        case 0x44eb38u: goto label_44eb38;
        case 0x44eb3cu: goto label_44eb3c;
        case 0x44eb40u: goto label_44eb40;
        case 0x44eb44u: goto label_44eb44;
        case 0x44eb48u: goto label_44eb48;
        case 0x44eb4cu: goto label_44eb4c;
        case 0x44eb50u: goto label_44eb50;
        case 0x44eb54u: goto label_44eb54;
        case 0x44eb58u: goto label_44eb58;
        case 0x44eb5cu: goto label_44eb5c;
        case 0x44eb60u: goto label_44eb60;
        case 0x44eb64u: goto label_44eb64;
        case 0x44eb68u: goto label_44eb68;
        case 0x44eb6cu: goto label_44eb6c;
        case 0x44eb70u: goto label_44eb70;
        case 0x44eb74u: goto label_44eb74;
        case 0x44eb78u: goto label_44eb78;
        case 0x44eb7cu: goto label_44eb7c;
        case 0x44eb80u: goto label_44eb80;
        case 0x44eb84u: goto label_44eb84;
        case 0x44eb88u: goto label_44eb88;
        case 0x44eb8cu: goto label_44eb8c;
        case 0x44eb90u: goto label_44eb90;
        case 0x44eb94u: goto label_44eb94;
        case 0x44eb98u: goto label_44eb98;
        case 0x44eb9cu: goto label_44eb9c;
        case 0x44eba0u: goto label_44eba0;
        case 0x44eba4u: goto label_44eba4;
        case 0x44eba8u: goto label_44eba8;
        case 0x44ebacu: goto label_44ebac;
        case 0x44ebb0u: goto label_44ebb0;
        case 0x44ebb4u: goto label_44ebb4;
        case 0x44ebb8u: goto label_44ebb8;
        case 0x44ebbcu: goto label_44ebbc;
        case 0x44ebc0u: goto label_44ebc0;
        case 0x44ebc4u: goto label_44ebc4;
        case 0x44ebc8u: goto label_44ebc8;
        case 0x44ebccu: goto label_44ebcc;
        case 0x44ebd0u: goto label_44ebd0;
        case 0x44ebd4u: goto label_44ebd4;
        case 0x44ebd8u: goto label_44ebd8;
        case 0x44ebdcu: goto label_44ebdc;
        case 0x44ebe0u: goto label_44ebe0;
        case 0x44ebe4u: goto label_44ebe4;
        case 0x44ebe8u: goto label_44ebe8;
        case 0x44ebecu: goto label_44ebec;
        case 0x44ebf0u: goto label_44ebf0;
        case 0x44ebf4u: goto label_44ebf4;
        case 0x44ebf8u: goto label_44ebf8;
        case 0x44ebfcu: goto label_44ebfc;
        case 0x44ec00u: goto label_44ec00;
        case 0x44ec04u: goto label_44ec04;
        case 0x44ec08u: goto label_44ec08;
        case 0x44ec0cu: goto label_44ec0c;
        case 0x44ec10u: goto label_44ec10;
        case 0x44ec14u: goto label_44ec14;
        case 0x44ec18u: goto label_44ec18;
        case 0x44ec1cu: goto label_44ec1c;
        case 0x44ec20u: goto label_44ec20;
        case 0x44ec24u: goto label_44ec24;
        case 0x44ec28u: goto label_44ec28;
        case 0x44ec2cu: goto label_44ec2c;
        case 0x44ec30u: goto label_44ec30;
        case 0x44ec34u: goto label_44ec34;
        case 0x44ec38u: goto label_44ec38;
        case 0x44ec3cu: goto label_44ec3c;
        case 0x44ec40u: goto label_44ec40;
        case 0x44ec44u: goto label_44ec44;
        case 0x44ec48u: goto label_44ec48;
        case 0x44ec4cu: goto label_44ec4c;
        case 0x44ec50u: goto label_44ec50;
        case 0x44ec54u: goto label_44ec54;
        case 0x44ec58u: goto label_44ec58;
        case 0x44ec5cu: goto label_44ec5c;
        case 0x44ec60u: goto label_44ec60;
        case 0x44ec64u: goto label_44ec64;
        case 0x44ec68u: goto label_44ec68;
        case 0x44ec6cu: goto label_44ec6c;
        case 0x44ec70u: goto label_44ec70;
        case 0x44ec74u: goto label_44ec74;
        case 0x44ec78u: goto label_44ec78;
        case 0x44ec7cu: goto label_44ec7c;
        case 0x44ec80u: goto label_44ec80;
        case 0x44ec84u: goto label_44ec84;
        case 0x44ec88u: goto label_44ec88;
        case 0x44ec8cu: goto label_44ec8c;
        case 0x44ec90u: goto label_44ec90;
        case 0x44ec94u: goto label_44ec94;
        case 0x44ec98u: goto label_44ec98;
        case 0x44ec9cu: goto label_44ec9c;
        case 0x44eca0u: goto label_44eca0;
        case 0x44eca4u: goto label_44eca4;
        case 0x44eca8u: goto label_44eca8;
        case 0x44ecacu: goto label_44ecac;
        case 0x44ecb0u: goto label_44ecb0;
        case 0x44ecb4u: goto label_44ecb4;
        case 0x44ecb8u: goto label_44ecb8;
        case 0x44ecbcu: goto label_44ecbc;
        case 0x44ecc0u: goto label_44ecc0;
        case 0x44ecc4u: goto label_44ecc4;
        case 0x44ecc8u: goto label_44ecc8;
        case 0x44ecccu: goto label_44eccc;
        case 0x44ecd0u: goto label_44ecd0;
        case 0x44ecd4u: goto label_44ecd4;
        case 0x44ecd8u: goto label_44ecd8;
        case 0x44ecdcu: goto label_44ecdc;
        case 0x44ece0u: goto label_44ece0;
        case 0x44ece4u: goto label_44ece4;
        case 0x44ece8u: goto label_44ece8;
        case 0x44ececu: goto label_44ecec;
        default: break;
    }

    ctx->pc = 0x44e290u;

label_44e290:
    // 0x44e290: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x44e290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
label_44e294:
    // 0x44e294: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x44e294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_44e298:
    // 0x44e298: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x44e298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_44e29c:
    // 0x44e29c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x44e29cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_44e2a0:
    // 0x44e2a0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x44e2a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_44e2a4:
    // 0x44e2a4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x44e2a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_44e2a8:
    // 0x44e2a8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x44e2a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_44e2ac:
    // 0x44e2ac: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x44e2acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_44e2b0:
    // 0x44e2b0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x44e2b0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_44e2b4:
    // 0x44e2b4: 0x8c840064  lw          $a0, 0x64($a0)
    ctx->pc = 0x44e2b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
label_44e2b8:
    // 0x44e2b8: 0x50830009  beql        $a0, $v1, . + 4 + (0x9 << 2)
label_44e2bc:
    if (ctx->pc == 0x44E2BCu) {
        ctx->pc = 0x44E2BCu;
            // 0x44e2bc: 0x8e430068  lw          $v1, 0x68($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
        ctx->pc = 0x44E2C0u;
        goto label_44e2c0;
    }
    ctx->pc = 0x44E2B8u;
    {
        const bool branch_taken_0x44e2b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x44e2b8) {
            ctx->pc = 0x44E2BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x44E2B8u;
            // 0x44e2bc: 0x8e430068  lw          $v1, 0x68($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x44E2E0u;
            goto label_44e2e0;
        }
    }
    ctx->pc = 0x44E2C0u;
label_44e2c0:
    // 0x44e2c0: 0x50800003  beql        $a0, $zero, . + 4 + (0x3 << 2)
label_44e2c4:
    if (ctx->pc == 0x44E2C4u) {
        ctx->pc = 0x44E2C4u;
            // 0x44e2c4: 0xae400068  sw          $zero, 0x68($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 104), GPR_U32(ctx, 0));
        ctx->pc = 0x44E2C8u;
        goto label_44e2c8;
    }
    ctx->pc = 0x44E2C0u;
    {
        const bool branch_taken_0x44e2c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x44e2c0) {
            ctx->pc = 0x44E2C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x44E2C0u;
            // 0x44e2c4: 0xae400068  sw          $zero, 0x68($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 104), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x44E2D0u;
            goto label_44e2d0;
        }
    }
    ctx->pc = 0x44E2C8u;
label_44e2c8:
    // 0x44e2c8: 0x1000009c  b           . + 4 + (0x9C << 2)
label_44e2cc:
    if (ctx->pc == 0x44E2CCu) {
        ctx->pc = 0x44E2CCu;
            // 0x44e2cc: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x44E2D0u;
        goto label_44e2d0;
    }
    ctx->pc = 0x44E2C8u;
    {
        const bool branch_taken_0x44e2c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44E2CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44E2C8u;
            // 0x44e2cc: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44e2c8) {
            ctx->pc = 0x44E53Cu;
            goto label_44e53c;
        }
    }
    ctx->pc = 0x44E2D0u;
label_44e2d0:
    // 0x44e2d0: 0xa6400074  sh          $zero, 0x74($s2)
    ctx->pc = 0x44e2d0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 116), (uint16_t)GPR_U32(ctx, 0));
label_44e2d4:
    // 0x44e2d4: 0xae400078  sw          $zero, 0x78($s2)
    ctx->pc = 0x44e2d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 120), GPR_U32(ctx, 0));
label_44e2d8:
    // 0x44e2d8: 0xae430064  sw          $v1, 0x64($s2)
    ctx->pc = 0x44e2d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 3));
label_44e2dc:
    // 0x44e2dc: 0x8e430068  lw          $v1, 0x68($s2)
    ctx->pc = 0x44e2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
label_44e2e0:
    // 0x44e2e0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x44e2e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_44e2e4:
    // 0x44e2e4: 0x14640094  bne         $v1, $a0, . + 4 + (0x94 << 2)
label_44e2e8:
    if (ctx->pc == 0x44E2E8u) {
        ctx->pc = 0x44E2ECu;
        goto label_44e2ec;
    }
    ctx->pc = 0x44E2E4u;
    {
        const bool branch_taken_0x44e2e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x44e2e4) {
            ctx->pc = 0x44E538u;
            goto label_44e538;
        }
    }
    ctx->pc = 0x44E2ECu;
label_44e2ec:
    // 0x44e2ec: 0x96430074  lhu         $v1, 0x74($s2)
    ctx->pc = 0x44e2ecu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 116)));
label_44e2f0:
    // 0x44e2f0: 0x54600090  bnel        $v1, $zero, . + 4 + (0x90 << 2)
label_44e2f4:
    if (ctx->pc == 0x44E2F4u) {
        ctx->pc = 0x44E2F4u;
            // 0x44e2f4: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->pc = 0x44E2F8u;
        goto label_44e2f8;
    }
    ctx->pc = 0x44E2F0u;
    {
        const bool branch_taken_0x44e2f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x44e2f0) {
            ctx->pc = 0x44E2F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x44E2F0u;
            // 0x44e2f4: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x44E534u;
            goto label_44e534;
        }
    }
    ctx->pc = 0x44E2F8u;
label_44e2f8:
    // 0x44e2f8: 0x8e430078  lw          $v1, 0x78($s2)
    ctx->pc = 0x44e2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
label_44e2fc:
    // 0x44e2fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x44e2fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_44e300:
    // 0x44e300: 0xa41004  sllv        $v0, $a0, $a1
    ctx->pc = 0x44e300u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 5) & 0x1F));
label_44e304:
    // 0x44e304: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x44e304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_44e308:
    // 0x44e308: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x44e308u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_44e30c:
    // 0x44e30c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x44e30cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_44e310:
    // 0x44e310: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_44e314:
    if (ctx->pc == 0x44E314u) {
        ctx->pc = 0x44E318u;
        goto label_44e318;
    }
    ctx->pc = 0x44E310u;
    {
        const bool branch_taken_0x44e310 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x44e310) {
            ctx->pc = 0x44E330u;
            goto label_44e330;
        }
    }
    ctx->pc = 0x44E318u;
label_44e318:
    // 0x44e318: 0x9242007c  lbu         $v0, 0x7C($s2)
    ctx->pc = 0x44e318u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 124)));
label_44e31c:
    // 0x44e31c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x44e31cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_44e320:
    // 0x44e320: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x44e320u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_44e324:
    // 0x44e324: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
label_44e328:
    if (ctx->pc == 0x44E328u) {
        ctx->pc = 0x44E328u;
            // 0x44e328: 0xa41004  sllv        $v0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 5) & 0x1F));
        ctx->pc = 0x44E32Cu;
        goto label_44e32c;
    }
    ctx->pc = 0x44E324u;
    {
        const bool branch_taken_0x44e324 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x44e324) {
            ctx->pc = 0x44E328u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x44E324u;
            // 0x44e328: 0xa41004  sllv        $v0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 5) & 0x1F));
        ctx->in_delay_slot = false;
            ctx->pc = 0x44E304u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_44e304;
        }
    }
    ctx->pc = 0x44E32Cu;
label_44e32c:
    // 0x44e32c: 0x0  nop
    ctx->pc = 0x44e32cu;
    // NOP
label_44e330:
    // 0x44e330: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x44e330u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_44e334:
    // 0x44e334: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x44e334u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_44e338:
    // 0x44e338: 0x8e450070  lw          $a1, 0x70($s2)
    ctx->pc = 0x44e338u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
label_44e33c:
    // 0x44e33c: 0x24420e84  addiu       $v0, $v0, 0xE84
    ctx->pc = 0x44e33cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3716));
label_44e340:
    // 0x44e340: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x44e340u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
label_44e344:
    // 0x44e344: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x44e344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_44e348:
    // 0x44e348: 0x2484d950  addiu       $a0, $a0, -0x26B0
    ctx->pc = 0x44e348u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957392));
label_44e34c:
    // 0x44e34c: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x44e34cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_44e350:
    // 0x44e350: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x44e350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_44e354:
    // 0x44e354: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x44e354u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_44e358:
    // 0x44e358: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x44e358u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_44e35c:
    // 0x44e35c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x44e35cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_44e360:
    // 0x44e360: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x44e360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_44e364:
    // 0x44e364: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x44e364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_44e368:
    // 0x44e368: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x44e368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_44e36c:
    // 0x44e36c: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x44e36cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_44e370:
    // 0x44e370: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x44e370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_44e374:
    // 0x44e374: 0xe7a20104  swc1        $f2, 0x104($sp)
    ctx->pc = 0x44e374u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
label_44e378:
    // 0x44e378: 0xe7a10108  swc1        $f1, 0x108($sp)
    ctx->pc = 0x44e378u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
label_44e37c:
    // 0x44e37c: 0xe7a0010c  swc1        $f0, 0x10C($sp)
    ctx->pc = 0x44e37cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
label_44e380:
    // 0x44e380: 0xc4620010  lwc1        $f2, 0x10($v1)
    ctx->pc = 0x44e380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_44e384:
    // 0x44e384: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x44e384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_44e388:
    // 0x44e388: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x44e388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_44e38c:
    // 0x44e38c: 0xe7a20110  swc1        $f2, 0x110($sp)
    ctx->pc = 0x44e38cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_44e390:
    // 0x44e390: 0xe7a10114  swc1        $f1, 0x114($sp)
    ctx->pc = 0x44e390u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
label_44e394:
    // 0x44e394: 0xe7a00118  swc1        $f0, 0x118($sp)
    ctx->pc = 0x44e394u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_44e398:
    // 0x44e398: 0xc44302c0  lwc1        $f3, 0x2C0($v0)
    ctx->pc = 0x44e398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_44e39c:
    // 0x44e39c: 0xc44202c4  lwc1        $f2, 0x2C4($v0)
    ctx->pc = 0x44e39cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_44e3a0:
    // 0x44e3a0: 0xc44102c8  lwc1        $f1, 0x2C8($v0)
    ctx->pc = 0x44e3a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_44e3a4:
    // 0x44e3a4: 0xc44002cc  lwc1        $f0, 0x2CC($v0)
    ctx->pc = 0x44e3a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 716)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_44e3a8:
    // 0x44e3a8: 0xe7a300a0  swc1        $f3, 0xA0($sp)
    ctx->pc = 0x44e3a8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_44e3ac:
    // 0x44e3ac: 0xe7a200a4  swc1        $f2, 0xA4($sp)
    ctx->pc = 0x44e3acu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_44e3b0:
    // 0x44e3b0: 0xe7a100a8  swc1        $f1, 0xA8($sp)
    ctx->pc = 0x44e3b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_44e3b4:
    // 0x44e3b4: 0xc04ab66  jal         func_12AD98
label_44e3b8:
    if (ctx->pc == 0x44E3B8u) {
        ctx->pc = 0x44E3B8u;
            // 0x44e3b8: 0xe7a000ac  swc1        $f0, 0xAC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
        ctx->pc = 0x44E3BCu;
        goto label_44e3bc;
    }
    ctx->pc = 0x44E3B4u;
    SET_GPR_U32(ctx, 31, 0x44E3BCu);
    ctx->pc = 0x44E3B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44E3B4u;
            // 0x44e3b8: 0xe7a000ac  swc1        $f0, 0xAC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44E3BCu; }
        if (ctx->pc != 0x44E3BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44E3BCu; }
        if (ctx->pc != 0x44E3BCu) { return; }
    }
    ctx->pc = 0x44E3BCu;
label_44e3bc:
    // 0x44e3bc: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x44e3bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_44e3c0:
    // 0x44e3c0: 0xc04ab66  jal         func_12AD98
label_44e3c4:
    if (ctx->pc == 0x44E3C4u) {
        ctx->pc = 0x44E3C4u;
            // 0x44e3c4: 0x28740  sll         $s0, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->pc = 0x44E3C8u;
        goto label_44e3c8;
    }
    ctx->pc = 0x44E3C0u;
    SET_GPR_U32(ctx, 31, 0x44E3C8u);
    ctx->pc = 0x44E3C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44E3C0u;
            // 0x44e3c4: 0x28740  sll         $s0, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44E3C8u; }
        if (ctx->pc != 0x44E3C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44E3C8u; }
        if (ctx->pc != 0x44E3C8u) { return; }
    }
    ctx->pc = 0x44E3C8u;
label_44e3c8:
    // 0x44e3c8: 0xc04ab66  jal         func_12AD98
label_44e3cc:
    if (ctx->pc == 0x44E3CCu) {
        ctx->pc = 0x44E3CCu;
            // 0x44e3cc: 0x508825  or          $s1, $v0, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
        ctx->pc = 0x44E3D0u;
        goto label_44e3d0;
    }
    ctx->pc = 0x44E3C8u;
    SET_GPR_U32(ctx, 31, 0x44E3D0u);
    ctx->pc = 0x44E3CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44E3C8u;
            // 0x44e3cc: 0x508825  or          $s1, $v0, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44E3D0u; }
        if (ctx->pc != 0x44E3D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44E3D0u; }
        if (ctx->pc != 0x44E3D0u) { return; }
    }
    ctx->pc = 0x44E3D0u;
label_44e3d0:
    // 0x44e3d0: 0xc04ab66  jal         func_12AD98
label_44e3d4:
    if (ctx->pc == 0x44E3D4u) {
        ctx->pc = 0x44E3D8u;
        goto label_44e3d8;
    }
    ctx->pc = 0x44E3D0u;
    SET_GPR_U32(ctx, 31, 0x44E3D8u);
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44E3D8u; }
        if (ctx->pc != 0x44E3D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44E3D8u; }
        if (ctx->pc != 0x44E3D8u) { return; }
    }
    ctx->pc = 0x44E3D8u;
label_44e3d8:
    // 0x44e3d8: 0xc04ab66  jal         func_12AD98
label_44e3dc:
    if (ctx->pc == 0x44E3DCu) {
        ctx->pc = 0x44E3DCu;
            // 0x44e3dc: 0x8fb00118  lw          $s0, 0x118($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
        ctx->pc = 0x44E3E0u;
        goto label_44e3e0;
    }
    ctx->pc = 0x44E3D8u;
    SET_GPR_U32(ctx, 31, 0x44E3E0u);
    ctx->pc = 0x44E3DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44E3D8u;
            // 0x44e3dc: 0x8fb00118  lw          $s0, 0x118($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44E3E0u; }
        if (ctx->pc != 0x44E3E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44E3E0u; }
        if (ctx->pc != 0x44E3E0u) { return; }
    }
    ctx->pc = 0x44E3E0u;
label_44e3e0:
    // 0x44e3e0: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x44e3e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_44e3e4:
    // 0x44e3e4: 0xc04ab66  jal         func_12AD98
label_44e3e8:
    if (ctx->pc == 0x44E3E8u) {
        ctx->pc = 0x44E3E8u;
            // 0x44e3e8: 0x29f40  sll         $s3, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->pc = 0x44E3ECu;
        goto label_44e3ec;
    }
    ctx->pc = 0x44E3E4u;
    SET_GPR_U32(ctx, 31, 0x44E3ECu);
    ctx->pc = 0x44E3E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44E3E4u;
            // 0x44e3e8: 0x29f40  sll         $s3, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44E3ECu; }
        if (ctx->pc != 0x44E3ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44E3ECu; }
        if (ctx->pc != 0x44E3ECu) { return; }
    }
    ctx->pc = 0x44E3ECu;
label_44e3ec:
    // 0x44e3ec: 0x531825  or          $v1, $v0, $s3
    ctx->pc = 0x44e3ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
label_44e3f0:
    // 0x44e3f0: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x44e3f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_44e3f4:
    // 0x44e3f4: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x44e3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_44e3f8:
    // 0x44e3f8: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x44e3f8u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
label_44e3fc:
    // 0x44e3fc: 0x3c024336  lui         $v0, 0x4336
    ctx->pc = 0x44e3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17206 << 16));
label_44e400:
    // 0x44e400: 0x34420b60  ori         $v0, $v0, 0xB60
    ctx->pc = 0x44e400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2912);
label_44e404:
    // 0x44e404: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x44e404u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_44e408:
    // 0x44e408: 0x1010  mfhi        $v0
    ctx->pc = 0x44e408u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_44e40c:
    // 0x44e40c: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x44e40cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_44e410:
    // 0x44e410: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x44e410u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_44e414:
    // 0x44e414: 0x0  nop
    ctx->pc = 0x44e414u;
    // NOP
label_44e418:
    // 0x44e418: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x44e418u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_44e41c:
    // 0x44e41c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x44e41cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_44e420:
    // 0x44e420: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x44e420u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_44e424:
    // 0x44e424: 0x44100000  mfc1        $s0, $f0
    ctx->pc = 0x44e424u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
label_44e428:
    // 0x44e428: 0xc04f29c  jal         func_13CA70
label_44e42c:
    if (ctx->pc == 0x44E42Cu) {
        ctx->pc = 0x44E42Cu;
            // 0x44e42c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44E430u;
        goto label_44e430;
    }
    ctx->pc = 0x44E428u;
    SET_GPR_U32(ctx, 31, 0x44E430u);
    ctx->pc = 0x44E42Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44E428u;
            // 0x44e42c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CA70u;
    if (runtime->hasFunction(0x13CA70u)) {
        auto targetFn = runtime->lookupFunction(0x13CA70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44E430u; }
        if (ctx->pc != 0x44E430u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CA70_0x13ca70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44E430u; }
        if (ctx->pc != 0x44E430u) { return; }
    }
    ctx->pc = 0x44E430u;
label_44e430:
    // 0x44e430: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x44e430u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_44e434:
    // 0x44e434: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x44e434u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_44e438:
    // 0x44e438: 0xc04cdf0  jal         func_1337C0
label_44e43c:
    if (ctx->pc == 0x44E43Cu) {
        ctx->pc = 0x44E43Cu;
            // 0x44e43c: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x44E440u;
        goto label_44e440;
    }
    ctx->pc = 0x44E438u;
    SET_GPR_U32(ctx, 31, 0x44E440u);
    ctx->pc = 0x44E43Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44E438u;
            // 0x44e43c: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1337C0u;
    if (runtime->hasFunction(0x1337C0u)) {
        auto targetFn = runtime->lookupFunction(0x1337C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44E440u; }
        if (ctx->pc != 0x44E440u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001337C0_0x1337c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44E440u; }
        if (ctx->pc != 0x44E440u) { return; }
    }
    ctx->pc = 0x44E440u;
label_44e440:
    // 0x44e440: 0x24030168  addiu       $v1, $zero, 0x168
    ctx->pc = 0x44e440u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
label_44e444:
    // 0x44e444: 0x3c024336  lui         $v0, 0x4336
    ctx->pc = 0x44e444u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17206 << 16));
label_44e448:
    // 0x44e448: 0x223001b  divu        $zero, $s1, $v1
    ctx->pc = 0x44e448u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 17) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 17) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,17); } }
label_44e44c:
    // 0x44e44c: 0x34420b60  ori         $v0, $v0, 0xB60
    ctx->pc = 0x44e44cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2912);
label_44e450:
    // 0x44e450: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x44e450u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_44e454:
    // 0x44e454: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x44e454u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_44e458:
    // 0x44e458: 0x1010  mfhi        $v0
    ctx->pc = 0x44e458u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_44e45c:
    // 0x44e45c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x44e45cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_44e460:
    // 0x44e460: 0x0  nop
    ctx->pc = 0x44e460u;
    // NOP
label_44e464:
    // 0x44e464: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x44e464u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_44e468:
    // 0x44e468: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x44e468u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_44e46c:
    // 0x44e46c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x44e46cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_44e470:
    // 0x44e470: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x44e470u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_44e474:
    // 0x44e474: 0xc04cdd0  jal         func_133740
label_44e478:
    if (ctx->pc == 0x44E478u) {
        ctx->pc = 0x44E478u;
            // 0x44e478: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x44E47Cu;
        goto label_44e47c;
    }
    ctx->pc = 0x44E474u;
    SET_GPR_U32(ctx, 31, 0x44E47Cu);
    ctx->pc = 0x44E478u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44E474u;
            // 0x44e478: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133740u;
    if (runtime->hasFunction(0x133740u)) {
        auto targetFn = runtime->lookupFunction(0x133740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44E47Cu; }
        if (ctx->pc != 0x44E47Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133740_0x133740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44E47Cu; }
        if (ctx->pc != 0x44E47Cu) { return; }
    }
    ctx->pc = 0x44E47Cu;
label_44e47c:
    // 0x44e47c: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x44e47cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_44e480:
    // 0x44e480: 0xc04ce80  jal         func_133A00
label_44e484:
    if (ctx->pc == 0x44E484u) {
        ctx->pc = 0x44E484u;
            // 0x44e484: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x44E488u;
        goto label_44e488;
    }
    ctx->pc = 0x44E480u;
    SET_GPR_U32(ctx, 31, 0x44E488u);
    ctx->pc = 0x44E484u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44E480u;
            // 0x44e484: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44E488u; }
        if (ctx->pc != 0x44E488u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44E488u; }
        if (ctx->pc != 0x44E488u) { return; }
    }
    ctx->pc = 0x44E488u;
label_44e488:
    // 0x44e488: 0xc7b40108  lwc1        $f20, 0x108($sp)
    ctx->pc = 0x44e488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_44e48c:
    // 0x44e48c: 0xc7a0010c  lwc1        $f0, 0x10C($sp)
    ctx->pc = 0x44e48cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_44e490:
    // 0x44e490: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x44e490u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
label_44e494:
    // 0x44e494: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x44e494u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_44e498:
    // 0x44e498: 0x44110000  mfc1        $s1, $f0
    ctx->pc = 0x44e498u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
label_44e49c:
    // 0x44e49c: 0xc04ab66  jal         func_12AD98
label_44e4a0:
    if (ctx->pc == 0x44E4A0u) {
        ctx->pc = 0x44E4A4u;
        goto label_44e4a4;
    }
    ctx->pc = 0x44E49Cu;
    SET_GPR_U32(ctx, 31, 0x44E4A4u);
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44E4A4u; }
        if (ctx->pc != 0x44E4A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44E4A4u; }
        if (ctx->pc != 0x44E4A4u) { return; }
    }
    ctx->pc = 0x44E4A4u;
label_44e4a4:
    // 0x44e4a4: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x44e4a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_44e4a8:
    // 0x44e4a8: 0xc04ab66  jal         func_12AD98
label_44e4ac:
    if (ctx->pc == 0x44E4ACu) {
        ctx->pc = 0x44E4ACu;
            // 0x44e4ac: 0x28740  sll         $s0, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->pc = 0x44E4B0u;
        goto label_44e4b0;
    }
    ctx->pc = 0x44E4A8u;
    SET_GPR_U32(ctx, 31, 0x44E4B0u);
    ctx->pc = 0x44E4ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44E4A8u;
            // 0x44e4ac: 0x28740  sll         $s0, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44E4B0u; }
        if (ctx->pc != 0x44E4B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44E4B0u; }
        if (ctx->pc != 0x44E4B0u) { return; }
    }
    ctx->pc = 0x44E4B0u;
label_44e4b0:
    // 0x44e4b0: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x44e4b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
label_44e4b4:
    // 0x44e4b4: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x44e4b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_44e4b8:
    // 0x44e4b8: 0x51001b  divu        $zero, $v0, $s1
    ctx->pc = 0x44e4b8u;
    { uint32_t divisor = GPR_U32(ctx, 17); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_44e4bc:
    // 0x44e4bc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x44e4bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_44e4c0:
    // 0x44e4c0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x44e4c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_44e4c4:
    // 0x44e4c4: 0x0  nop
    ctx->pc = 0x44e4c4u;
    // NOP
label_44e4c8:
    // 0x44e4c8: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x44e4c8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_44e4cc:
    // 0x44e4cc: 0x1010  mfhi        $v0
    ctx->pc = 0x44e4ccu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_44e4d0:
    // 0x44e4d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x44e4d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_44e4d4:
    // 0x44e4d4: 0x0  nop
    ctx->pc = 0x44e4d4u;
    // NOP
label_44e4d8:
    // 0x44e4d8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x44e4d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_44e4dc:
    // 0x44e4dc: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x44e4dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_44e4e0:
    // 0x44e4e0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x44e4e0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_44e4e4:
    // 0x44e4e4: 0xc04ce64  jal         func_133990
label_44e4e8:
    if (ctx->pc == 0x44E4E8u) {
        ctx->pc = 0x44E4E8u;
            // 0x44e4e8: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x44E4ECu;
        goto label_44e4ec;
    }
    ctx->pc = 0x44E4E4u;
    SET_GPR_U32(ctx, 31, 0x44E4ECu);
    ctx->pc = 0x44E4E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44E4E4u;
            // 0x44e4e8: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133990u;
    if (runtime->hasFunction(0x133990u)) {
        auto targetFn = runtime->lookupFunction(0x133990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44E4ECu; }
        if (ctx->pc != 0x44E4ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133990_0x133990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44E4ECu; }
        if (ctx->pc != 0x44E4ECu) { return; }
    }
    ctx->pc = 0x44E4ECu;
label_44e4ec:
    // 0x44e4ec: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x44e4ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_44e4f0:
    // 0x44e4f0: 0xc04cce4  jal         func_133390
label_44e4f4:
    if (ctx->pc == 0x44E4F4u) {
        ctx->pc = 0x44E4F4u;
            // 0x44e4f4: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x44E4F8u;
        goto label_44e4f8;
    }
    ctx->pc = 0x44E4F0u;
    SET_GPR_U32(ctx, 31, 0x44E4F8u);
    ctx->pc = 0x44E4F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44E4F0u;
            // 0x44e4f4: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133390u;
    if (runtime->hasFunction(0x133390u)) {
        auto targetFn = runtime->lookupFunction(0x133390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44E4F8u; }
        if (ctx->pc != 0x44E4F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133390_0x133390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44E4F8u; }
        if (ctx->pc != 0x44E4F8u) { return; }
    }
    ctx->pc = 0x44E4F8u;
label_44e4f8:
    // 0x44e4f8: 0x8e44006c  lw          $a0, 0x6C($s2)
    ctx->pc = 0x44e4f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
label_44e4fc:
    // 0x44e4fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x44e4fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_44e500:
    // 0x44e500: 0xc122d2c  jal         func_48B4B0
label_44e504:
    if (ctx->pc == 0x44E504u) {
        ctx->pc = 0x44E504u;
            // 0x44e504: 0x27a600b0  addiu       $a2, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x44E508u;
        goto label_44e508;
    }
    ctx->pc = 0x44E500u;
    SET_GPR_U32(ctx, 31, 0x44E508u);
    ctx->pc = 0x44E504u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44E500u;
            // 0x44e504: 0x27a600b0  addiu       $a2, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B4B0u;
    if (runtime->hasFunction(0x48B4B0u)) {
        auto targetFn = runtime->lookupFunction(0x48B4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44E508u; }
        if (ctx->pc != 0x44E508u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B4B0_0x48b4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44E508u; }
        if (ctx->pc != 0x44E508u) { return; }
    }
    ctx->pc = 0x44E508u;
label_44e508:
    // 0x44e508: 0xc04ab66  jal         func_12AD98
label_44e50c:
    if (ctx->pc == 0x44E50Cu) {
        ctx->pc = 0x44E510u;
        goto label_44e510;
    }
    ctx->pc = 0x44E508u;
    SET_GPR_U32(ctx, 31, 0x44E510u);
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44E510u; }
        if (ctx->pc != 0x44E510u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44E510u; }
        if (ctx->pc != 0x44E510u) { return; }
    }
    ctx->pc = 0x44E510u;
label_44e510:
    // 0x44e510: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x44e510u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_44e514:
    // 0x44e514: 0xc04ab66  jal         func_12AD98
label_44e518:
    if (ctx->pc == 0x44E518u) {
        ctx->pc = 0x44E518u;
            // 0x44e518: 0x28740  sll         $s0, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->pc = 0x44E51Cu;
        goto label_44e51c;
    }
    ctx->pc = 0x44E514u;
    SET_GPR_U32(ctx, 31, 0x44E51Cu);
    ctx->pc = 0x44E518u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44E514u;
            // 0x44e518: 0x28740  sll         $s0, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44E51Cu; }
        if (ctx->pc != 0x44E51Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44E51Cu; }
        if (ctx->pc != 0x44E51Cu) { return; }
    }
    ctx->pc = 0x44E51Cu;
label_44e51c:
    // 0x44e51c: 0x97a30104  lhu         $v1, 0x104($sp)
    ctx->pc = 0x44e51cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 260)));
label_44e520:
    // 0x44e520: 0x502025  or          $a0, $v0, $s0
    ctx->pc = 0x44e520u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
label_44e524:
    // 0x44e524: 0x83001b  divu        $zero, $a0, $v1
    ctx->pc = 0x44e524u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
label_44e528:
    // 0x44e528: 0x1810  mfhi        $v1
    ctx->pc = 0x44e528u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_44e52c:
    // 0x44e52c: 0x10000002  b           . + 4 + (0x2 << 2)
label_44e530:
    if (ctx->pc == 0x44E530u) {
        ctx->pc = 0x44E530u;
            // 0x44e530: 0xa6430074  sh          $v1, 0x74($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 116), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x44E534u;
        goto label_44e534;
    }
    ctx->pc = 0x44E52Cu;
    {
        const bool branch_taken_0x44e52c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44E530u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44E52Cu;
            // 0x44e530: 0xa6430074  sh          $v1, 0x74($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 116), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44e52c) {
            ctx->pc = 0x44E538u;
            goto label_44e538;
        }
    }
    ctx->pc = 0x44E534u;
label_44e534:
    // 0x44e534: 0xa6430074  sh          $v1, 0x74($s2)
    ctx->pc = 0x44e534u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 116), (uint16_t)GPR_U32(ctx, 3));
label_44e538:
    // 0x44e538: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x44e538u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_44e53c:
    // 0x44e53c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x44e53cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_44e540:
    // 0x44e540: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x44e540u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_44e544:
    // 0x44e544: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x44e544u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_44e548:
    // 0x44e548: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x44e548u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_44e54c:
    // 0x44e54c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x44e54cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_44e550:
    // 0x44e550: 0x3e00008  jr          $ra
label_44e554:
    if (ctx->pc == 0x44E554u) {
        ctx->pc = 0x44E554u;
            // 0x44e554: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->pc = 0x44E558u;
        goto label_44e558;
    }
    ctx->pc = 0x44E550u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44E554u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44E550u;
            // 0x44e554: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x44E558u;
label_44e558:
    // 0x44e558: 0x0  nop
    ctx->pc = 0x44e558u;
    // NOP
label_44e55c:
    // 0x44e55c: 0x0  nop
    ctx->pc = 0x44e55cu;
    // NOP
label_44e560:
    // 0x44e560: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x44e560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_44e564:
    // 0x44e564: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x44e564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_44e568:
    // 0x44e568: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x44e568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_44e56c:
    // 0x44e56c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x44e56cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_44e570:
    // 0x44e570: 0x64120001  daddiu      $s2, $zero, 0x1
    ctx->pc = 0x44e570u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_44e574:
    // 0x44e574: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x44e574u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_44e578:
    // 0x44e578: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x44e578u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_44e57c:
    // 0x44e57c: 0x8cc30e34  lw          $v1, 0xE34($a2)
    ctx->pc = 0x44e57cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3636)));
label_44e580:
    // 0x44e580: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x44e580u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_44e584:
    // 0x44e584: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
label_44e588:
    if (ctx->pc == 0x44E588u) {
        ctx->pc = 0x44E588u;
            // 0x44e588: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44E58Cu;
        goto label_44e58c;
    }
    ctx->pc = 0x44E584u;
    {
        const bool branch_taken_0x44e584 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x44E588u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44E584u;
            // 0x44e588: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44e584) {
            ctx->pc = 0x44E59Cu;
            goto label_44e59c;
        }
    }
    ctx->pc = 0x44E58Cu;
label_44e58c:
    // 0x44e58c: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x44e58cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_44e590:
    // 0x44e590: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_44e594:
    if (ctx->pc == 0x44E594u) {
        ctx->pc = 0x44E598u;
        goto label_44e598;
    }
    ctx->pc = 0x44E590u;
    {
        const bool branch_taken_0x44e590 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x44e590) {
            ctx->pc = 0x44E59Cu;
            goto label_44e59c;
        }
    }
    ctx->pc = 0x44E598u;
label_44e598:
    // 0x44e598: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x44e598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_44e59c:
    // 0x44e59c: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_44e5a0:
    if (ctx->pc == 0x44E5A0u) {
        ctx->pc = 0x44E5A4u;
        goto label_44e5a4;
    }
    ctx->pc = 0x44E59Cu;
    {
        const bool branch_taken_0x44e59c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x44e59c) {
            ctx->pc = 0x44E5B8u;
            goto label_44e5b8;
        }
    }
    ctx->pc = 0x44E5A4u;
label_44e5a4:
    // 0x44e5a4: 0xc075eb4  jal         func_1D7AD0
label_44e5a8:
    if (ctx->pc == 0x44E5A8u) {
        ctx->pc = 0x44E5A8u;
            // 0x44e5a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44E5ACu;
        goto label_44e5ac;
    }
    ctx->pc = 0x44E5A4u;
    SET_GPR_U32(ctx, 31, 0x44E5ACu);
    ctx->pc = 0x44E5A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44E5A4u;
            // 0x44e5a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44E5ACu; }
        if (ctx->pc != 0x44E5ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44E5ACu; }
        if (ctx->pc != 0x44E5ACu) { return; }
    }
    ctx->pc = 0x44E5ACu;
label_44e5ac:
    // 0x44e5ac: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_44e5b0:
    if (ctx->pc == 0x44E5B0u) {
        ctx->pc = 0x44E5B4u;
        goto label_44e5b4;
    }
    ctx->pc = 0x44E5ACu;
    {
        const bool branch_taken_0x44e5ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x44e5ac) {
            ctx->pc = 0x44E5B8u;
            goto label_44e5b8;
        }
    }
    ctx->pc = 0x44E5B4u;
label_44e5b4:
    // 0x44e5b4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x44e5b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_44e5b8:
    // 0x44e5b8: 0x56400006  bnel        $s2, $zero, . + 4 + (0x6 << 2)
label_44e5bc:
    if (ctx->pc == 0x44E5BCu) {
        ctx->pc = 0x44E5BCu;
            // 0x44e5bc: 0x8e050d98  lw          $a1, 0xD98($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3480)));
        ctx->pc = 0x44E5C0u;
        goto label_44e5c0;
    }
    ctx->pc = 0x44E5B8u;
    {
        const bool branch_taken_0x44e5b8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x44e5b8) {
            ctx->pc = 0x44E5BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x44E5B8u;
            // 0x44e5bc: 0x8e050d98  lw          $a1, 0xD98($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3480)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x44E5D4u;
            goto label_44e5d4;
        }
    }
    ctx->pc = 0x44E5C0u;
label_44e5c0:
    // 0x44e5c0: 0x8e040e34  lw          $a0, 0xE34($s0)
    ctx->pc = 0x44e5c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3636)));
label_44e5c4:
    // 0x44e5c4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x44e5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_44e5c8:
    // 0x44e5c8: 0x54830013  bnel        $a0, $v1, . + 4 + (0x13 << 2)
label_44e5cc:
    if (ctx->pc == 0x44E5CCu) {
        ctx->pc = 0x44E5CCu;
            // 0x44e5cc: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x44E5D0u;
        goto label_44e5d0;
    }
    ctx->pc = 0x44E5C8u;
    {
        const bool branch_taken_0x44e5c8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x44e5c8) {
            ctx->pc = 0x44E5CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x44E5C8u;
            // 0x44e5cc: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x44E618u;
            goto label_44e618;
        }
    }
    ctx->pc = 0x44E5D0u;
label_44e5d0:
    // 0x44e5d0: 0x8e050d98  lw          $a1, 0xD98($s0)
    ctx->pc = 0x44e5d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3480)));
label_44e5d4:
    // 0x44e5d4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x44e5d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_44e5d8:
    // 0x44e5d8: 0x8e230078  lw          $v1, 0x78($s1)
    ctx->pc = 0x44e5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
label_44e5dc:
    // 0x44e5dc: 0xa42004  sllv        $a0, $a0, $a1
    ctx->pc = 0x44e5dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 5) & 0x1F));
label_44e5e0:
    // 0x44e5e0: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x44e5e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_44e5e4:
    // 0x44e5e4: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_44e5e8:
    if (ctx->pc == 0x44E5E8u) {
        ctx->pc = 0x44E5ECu;
        goto label_44e5ec;
    }
    ctx->pc = 0x44E5E4u;
    {
        const bool branch_taken_0x44e5e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x44e5e4) {
            ctx->pc = 0x44E614u;
            goto label_44e614;
        }
    }
    ctx->pc = 0x44E5ECu;
label_44e5ec:
    // 0x44e5ec: 0x8e230078  lw          $v1, 0x78($s1)
    ctx->pc = 0x44e5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
label_44e5f0:
    // 0x44e5f0: 0x802027  not         $a0, $a0
    ctx->pc = 0x44e5f0u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 4) | GPR_U64(ctx, 0)));
label_44e5f4:
    // 0x44e5f4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x44e5f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_44e5f8:
    // 0x44e5f8: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_44e5fc:
    if (ctx->pc == 0x44E5FCu) {
        ctx->pc = 0x44E5FCu;
            // 0x44e5fc: 0xae230078  sw          $v1, 0x78($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 3));
        ctx->pc = 0x44E600u;
        goto label_44e600;
    }
    ctx->pc = 0x44E5F8u;
    {
        const bool branch_taken_0x44e5f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x44E5FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44E5F8u;
            // 0x44e5fc: 0xae230078  sw          $v1, 0x78($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44e5f8) {
            ctx->pc = 0x44E614u;
            goto label_44e614;
        }
    }
    ctx->pc = 0x44E600u;
label_44e600:
    // 0x44e600: 0x8e230068  lw          $v1, 0x68($s1)
    ctx->pc = 0x44e600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_44e604:
    // 0x44e604: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_44e608:
    if (ctx->pc == 0x44E608u) {
        ctx->pc = 0x44E60Cu;
        goto label_44e60c;
    }
    ctx->pc = 0x44E604u;
    {
        const bool branch_taken_0x44e604 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x44e604) {
            ctx->pc = 0x44E614u;
            goto label_44e614;
        }
    }
    ctx->pc = 0x44E60Cu;
label_44e60c:
    // 0x44e60c: 0xae200068  sw          $zero, 0x68($s1)
    ctx->pc = 0x44e60cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 0));
label_44e610:
    // 0x44e610: 0xa6200074  sh          $zero, 0x74($s1)
    ctx->pc = 0x44e610u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 116), (uint16_t)GPR_U32(ctx, 0));
label_44e614:
    // 0x44e614: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x44e614u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_44e618:
    // 0x44e618: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x44e618u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_44e61c:
    // 0x44e61c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x44e61cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_44e620:
    // 0x44e620: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x44e620u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_44e624:
    // 0x44e624: 0x3e00008  jr          $ra
label_44e628:
    if (ctx->pc == 0x44E628u) {
        ctx->pc = 0x44E628u;
            // 0x44e628: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x44E62Cu;
        goto label_44e62c;
    }
    ctx->pc = 0x44E624u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44E628u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44E624u;
            // 0x44e628: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x44E62Cu;
label_44e62c:
    // 0x44e62c: 0x0  nop
    ctx->pc = 0x44e62cu;
    // NOP
label_44e630:
    // 0x44e630: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x44e630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_44e634:
    // 0x44e634: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x44e634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_44e638:
    // 0x44e638: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x44e638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_44e63c:
    // 0x44e63c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x44e63cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_44e640:
    // 0x44e640: 0x64120001  daddiu      $s2, $zero, 0x1
    ctx->pc = 0x44e640u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_44e644:
    // 0x44e644: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x44e644u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_44e648:
    // 0x44e648: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x44e648u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_44e64c:
    // 0x44e64c: 0x8cc30e34  lw          $v1, 0xE34($a2)
    ctx->pc = 0x44e64cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3636)));
label_44e650:
    // 0x44e650: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x44e650u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_44e654:
    // 0x44e654: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
label_44e658:
    if (ctx->pc == 0x44E658u) {
        ctx->pc = 0x44E658u;
            // 0x44e658: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44E65Cu;
        goto label_44e65c;
    }
    ctx->pc = 0x44E654u;
    {
        const bool branch_taken_0x44e654 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x44E658u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44E654u;
            // 0x44e658: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44e654) {
            ctx->pc = 0x44E66Cu;
            goto label_44e66c;
        }
    }
    ctx->pc = 0x44E65Cu;
label_44e65c:
    // 0x44e65c: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x44e65cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_44e660:
    // 0x44e660: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_44e664:
    if (ctx->pc == 0x44E664u) {
        ctx->pc = 0x44E668u;
        goto label_44e668;
    }
    ctx->pc = 0x44E660u;
    {
        const bool branch_taken_0x44e660 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x44e660) {
            ctx->pc = 0x44E66Cu;
            goto label_44e66c;
        }
    }
    ctx->pc = 0x44E668u;
label_44e668:
    // 0x44e668: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x44e668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_44e66c:
    // 0x44e66c: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_44e670:
    if (ctx->pc == 0x44E670u) {
        ctx->pc = 0x44E674u;
        goto label_44e674;
    }
    ctx->pc = 0x44E66Cu;
    {
        const bool branch_taken_0x44e66c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x44e66c) {
            ctx->pc = 0x44E688u;
            goto label_44e688;
        }
    }
    ctx->pc = 0x44E674u;
label_44e674:
    // 0x44e674: 0xc075eb4  jal         func_1D7AD0
label_44e678:
    if (ctx->pc == 0x44E678u) {
        ctx->pc = 0x44E678u;
            // 0x44e678: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44E67Cu;
        goto label_44e67c;
    }
    ctx->pc = 0x44E674u;
    SET_GPR_U32(ctx, 31, 0x44E67Cu);
    ctx->pc = 0x44E678u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44E674u;
            // 0x44e678: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44E67Cu; }
        if (ctx->pc != 0x44E67Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44E67Cu; }
        if (ctx->pc != 0x44E67Cu) { return; }
    }
    ctx->pc = 0x44E67Cu;
label_44e67c:
    // 0x44e67c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_44e680:
    if (ctx->pc == 0x44E680u) {
        ctx->pc = 0x44E684u;
        goto label_44e684;
    }
    ctx->pc = 0x44E67Cu;
    {
        const bool branch_taken_0x44e67c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x44e67c) {
            ctx->pc = 0x44E688u;
            goto label_44e688;
        }
    }
    ctx->pc = 0x44E684u;
label_44e684:
    // 0x44e684: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x44e684u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_44e688:
    // 0x44e688: 0x56400006  bnel        $s2, $zero, . + 4 + (0x6 << 2)
label_44e68c:
    if (ctx->pc == 0x44E68Cu) {
        ctx->pc = 0x44E68Cu;
            // 0x44e68c: 0x8e040d98  lw          $a0, 0xD98($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3480)));
        ctx->pc = 0x44E690u;
        goto label_44e690;
    }
    ctx->pc = 0x44E688u;
    {
        const bool branch_taken_0x44e688 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x44e688) {
            ctx->pc = 0x44E68Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x44E688u;
            // 0x44e68c: 0x8e040d98  lw          $a0, 0xD98($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3480)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x44E6A4u;
            goto label_44e6a4;
        }
    }
    ctx->pc = 0x44E690u;
label_44e690:
    // 0x44e690: 0x8e040e34  lw          $a0, 0xE34($s0)
    ctx->pc = 0x44e690u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3636)));
label_44e694:
    // 0x44e694: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x44e694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_44e698:
    // 0x44e698: 0x54830010  bnel        $a0, $v1, . + 4 + (0x10 << 2)
label_44e69c:
    if (ctx->pc == 0x44E69Cu) {
        ctx->pc = 0x44E69Cu;
            // 0x44e69c: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x44E6A0u;
        goto label_44e6a0;
    }
    ctx->pc = 0x44E698u;
    {
        const bool branch_taken_0x44e698 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x44e698) {
            ctx->pc = 0x44E69Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x44E698u;
            // 0x44e69c: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x44E6DCu;
            goto label_44e6dc;
        }
    }
    ctx->pc = 0x44E6A0u;
label_44e6a0:
    // 0x44e6a0: 0x8e040d98  lw          $a0, 0xD98($s0)
    ctx->pc = 0x44e6a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3480)));
label_44e6a4:
    // 0x44e6a4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x44e6a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_44e6a8:
    // 0x44e6a8: 0x8e230078  lw          $v1, 0x78($s1)
    ctx->pc = 0x44e6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
label_44e6ac:
    // 0x44e6ac: 0x852004  sllv        $a0, $a1, $a0
    ctx->pc = 0x44e6acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 4) & 0x1F));
label_44e6b0:
    // 0x44e6b0: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x44e6b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_44e6b4:
    // 0x44e6b4: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
label_44e6b8:
    if (ctx->pc == 0x44E6B8u) {
        ctx->pc = 0x44E6BCu;
        goto label_44e6bc;
    }
    ctx->pc = 0x44E6B4u;
    {
        const bool branch_taken_0x44e6b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x44e6b4) {
            ctx->pc = 0x44E6D8u;
            goto label_44e6d8;
        }
    }
    ctx->pc = 0x44E6BCu;
label_44e6bc:
    // 0x44e6bc: 0x8e230078  lw          $v1, 0x78($s1)
    ctx->pc = 0x44e6bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
label_44e6c0:
    // 0x44e6c0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x44e6c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_44e6c4:
    // 0x44e6c4: 0xae230078  sw          $v1, 0x78($s1)
    ctx->pc = 0x44e6c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 3));
label_44e6c8:
    // 0x44e6c8: 0x8e230068  lw          $v1, 0x68($s1)
    ctx->pc = 0x44e6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_44e6cc:
    // 0x44e6cc: 0x10650002  beq         $v1, $a1, . + 4 + (0x2 << 2)
label_44e6d0:
    if (ctx->pc == 0x44E6D0u) {
        ctx->pc = 0x44E6D4u;
        goto label_44e6d4;
    }
    ctx->pc = 0x44E6CCu;
    {
        const bool branch_taken_0x44e6cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x44e6cc) {
            ctx->pc = 0x44E6D8u;
            goto label_44e6d8;
        }
    }
    ctx->pc = 0x44E6D4u;
label_44e6d4:
    // 0x44e6d4: 0xae250068  sw          $a1, 0x68($s1)
    ctx->pc = 0x44e6d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 5));
label_44e6d8:
    // 0x44e6d8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x44e6d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_44e6dc:
    // 0x44e6dc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x44e6dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_44e6e0:
    // 0x44e6e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x44e6e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_44e6e4:
    // 0x44e6e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x44e6e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_44e6e8:
    // 0x44e6e8: 0x3e00008  jr          $ra
label_44e6ec:
    if (ctx->pc == 0x44E6ECu) {
        ctx->pc = 0x44E6ECu;
            // 0x44e6ec: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x44E6F0u;
        goto label_44e6f0;
    }
    ctx->pc = 0x44E6E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44E6ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44E6E8u;
            // 0x44e6ec: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x44E6F0u;
label_44e6f0:
    // 0x44e6f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x44e6f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_44e6f4:
    // 0x44e6f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x44e6f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_44e6f8:
    // 0x44e6f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x44e6f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_44e6fc:
    // 0x44e6fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x44e6fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_44e700:
    // 0x44e700: 0x8c840050  lw          $a0, 0x50($a0)
    ctx->pc = 0x44e700u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_44e704:
    // 0x44e704: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
label_44e708:
    if (ctx->pc == 0x44E708u) {
        ctx->pc = 0x44E708u;
            // 0x44e708: 0x8e040060  lw          $a0, 0x60($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
        ctx->pc = 0x44E70Cu;
        goto label_44e70c;
    }
    ctx->pc = 0x44E704u;
    {
        const bool branch_taken_0x44e704 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x44e704) {
            ctx->pc = 0x44E708u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x44E704u;
            // 0x44e708: 0x8e040060  lw          $a0, 0x60($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x44E72Cu;
            goto label_44e72c;
        }
    }
    ctx->pc = 0x44E70Cu;
label_44e70c:
    // 0x44e70c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_44e710:
    if (ctx->pc == 0x44E710u) {
        ctx->pc = 0x44E710u;
            // 0x44e710: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x44E714u;
        goto label_44e714;
    }
    ctx->pc = 0x44E70Cu;
    {
        const bool branch_taken_0x44e70c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x44e70c) {
            ctx->pc = 0x44E710u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x44E70Cu;
            // 0x44e710: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x44E728u;
            goto label_44e728;
        }
    }
    ctx->pc = 0x44E714u;
label_44e714:
    // 0x44e714: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x44e714u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_44e718:
    // 0x44e718: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x44e718u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_44e71c:
    // 0x44e71c: 0x320f809  jalr        $t9
label_44e720:
    if (ctx->pc == 0x44E720u) {
        ctx->pc = 0x44E720u;
            // 0x44e720: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x44E724u;
        goto label_44e724;
    }
    ctx->pc = 0x44E71Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x44E724u);
        ctx->pc = 0x44E720u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44E71Cu;
            // 0x44e720: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x44E724u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x44E724u; }
            if (ctx->pc != 0x44E724u) { return; }
        }
        }
    }
    ctx->pc = 0x44E724u;
label_44e724:
    // 0x44e724: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x44e724u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
label_44e728:
    // 0x44e728: 0x8e040060  lw          $a0, 0x60($s0)
    ctx->pc = 0x44e728u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_44e72c:
    // 0x44e72c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_44e730:
    if (ctx->pc == 0x44E730u) {
        ctx->pc = 0x44E730u;
            // 0x44e730: 0x8e04006c  lw          $a0, 0x6C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
        ctx->pc = 0x44E734u;
        goto label_44e734;
    }
    ctx->pc = 0x44E72Cu;
    {
        const bool branch_taken_0x44e72c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x44e72c) {
            ctx->pc = 0x44E730u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x44E72Cu;
            // 0x44e730: 0x8e04006c  lw          $a0, 0x6C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x44E748u;
            goto label_44e748;
        }
    }
    ctx->pc = 0x44E734u;
label_44e734:
    // 0x44e734: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x44e734u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_44e738:
    // 0x44e738: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x44e738u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_44e73c:
    // 0x44e73c: 0x320f809  jalr        $t9
label_44e740:
    if (ctx->pc == 0x44E740u) {
        ctx->pc = 0x44E740u;
            // 0x44e740: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x44E744u;
        goto label_44e744;
    }
    ctx->pc = 0x44E73Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x44E744u);
        ctx->pc = 0x44E740u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44E73Cu;
            // 0x44e740: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x44E744u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x44E744u; }
            if (ctx->pc != 0x44E744u) { return; }
        }
        }
    }
    ctx->pc = 0x44E744u;
label_44e744:
    // 0x44e744: 0x8e04006c  lw          $a0, 0x6C($s0)
    ctx->pc = 0x44e744u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
label_44e748:
    // 0x44e748: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_44e74c:
    if (ctx->pc == 0x44E74Cu) {
        ctx->pc = 0x44E74Cu;
            // 0x44e74c: 0xae00006c  sw          $zero, 0x6C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 0));
        ctx->pc = 0x44E750u;
        goto label_44e750;
    }
    ctx->pc = 0x44E748u;
    {
        const bool branch_taken_0x44e748 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x44e748) {
            ctx->pc = 0x44E74Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x44E748u;
            // 0x44e74c: 0xae00006c  sw          $zero, 0x6C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x44E764u;
            goto label_44e764;
        }
    }
    ctx->pc = 0x44E750u;
label_44e750:
    // 0x44e750: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x44e750u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_44e754:
    // 0x44e754: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x44e754u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_44e758:
    // 0x44e758: 0x320f809  jalr        $t9
label_44e75c:
    if (ctx->pc == 0x44E75Cu) {
        ctx->pc = 0x44E75Cu;
            // 0x44e75c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x44E760u;
        goto label_44e760;
    }
    ctx->pc = 0x44E758u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x44E760u);
        ctx->pc = 0x44E75Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44E758u;
            // 0x44e75c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x44E760u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x44E760u; }
            if (ctx->pc != 0x44E760u) { return; }
        }
        }
    }
    ctx->pc = 0x44E760u;
label_44e760:
    // 0x44e760: 0xae00006c  sw          $zero, 0x6C($s0)
    ctx->pc = 0x44e760u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 0));
label_44e764:
    // 0x44e764: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x44e764u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_44e768:
    // 0x44e768: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x44e768u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_44e76c:
    // 0x44e76c: 0x3e00008  jr          $ra
label_44e770:
    if (ctx->pc == 0x44E770u) {
        ctx->pc = 0x44E770u;
            // 0x44e770: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x44E774u;
        goto label_44e774;
    }
    ctx->pc = 0x44E76Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44E770u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44E76Cu;
            // 0x44e770: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x44E774u;
label_44e774:
    // 0x44e774: 0x0  nop
    ctx->pc = 0x44e774u;
    // NOP
label_44e778:
    // 0x44e778: 0x0  nop
    ctx->pc = 0x44e778u;
    // NOP
label_44e77c:
    // 0x44e77c: 0x0  nop
    ctx->pc = 0x44e77cu;
    // NOP
label_44e780:
    // 0x44e780: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x44e780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_44e784:
    // 0x44e784: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x44e784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_44e788:
    // 0x44e788: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x44e788u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_44e78c:
    // 0x44e78c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x44e78cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_44e790:
    // 0x44e790: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x44e790u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_44e794:
    // 0x44e794: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x44e794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_44e798:
    // 0x44e798: 0xac820070  sw          $v0, 0x70($a0)
    ctx->pc = 0x44e798u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 112), GPR_U32(ctx, 2));
label_44e79c:
    // 0x44e79c: 0xc4830030  lwc1        $f3, 0x30($a0)
    ctx->pc = 0x44e79cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_44e7a0:
    // 0x44e7a0: 0xc4820034  lwc1        $f2, 0x34($a0)
    ctx->pc = 0x44e7a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_44e7a4:
    // 0x44e7a4: 0xc4810038  lwc1        $f1, 0x38($a0)
    ctx->pc = 0x44e7a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_44e7a8:
    // 0x44e7a8: 0x46030032  c.eq.s      $f0, $f3
    ctx->pc = 0x44e7a8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_44e7ac:
    // 0x44e7ac: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_44e7b0:
    if (ctx->pc == 0x44E7B0u) {
        ctx->pc = 0x44E7B0u;
            // 0x44e7b0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44E7B4u;
        goto label_44e7b4;
    }
    ctx->pc = 0x44E7ACu;
    {
        const bool branch_taken_0x44e7ac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x44E7B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44E7ACu;
            // 0x44e7b0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44e7ac) {
            ctx->pc = 0x44E7C0u;
            goto label_44e7c0;
        }
    }
    ctx->pc = 0x44E7B4u;
label_44e7b4:
    // 0x44e7b4: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x44e7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
label_44e7b8:
    // 0x44e7b8: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x44e7b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_44e7bc:
    // 0x44e7bc: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x44e7bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_44e7c0:
    // 0x44e7c0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x44e7c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_44e7c4:
    // 0x44e7c4: 0x0  nop
    ctx->pc = 0x44e7c4u;
    // NOP
label_44e7c8:
    // 0x44e7c8: 0x46020032  c.eq.s      $f0, $f2
    ctx->pc = 0x44e7c8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_44e7cc:
    // 0x44e7cc: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_44e7d0:
    if (ctx->pc == 0x44E7D0u) {
        ctx->pc = 0x44E7D4u;
        goto label_44e7d4;
    }
    ctx->pc = 0x44E7CCu;
    {
        const bool branch_taken_0x44e7cc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x44e7cc) {
            ctx->pc = 0x44E7E0u;
            goto label_44e7e0;
        }
    }
    ctx->pc = 0x44E7D4u;
label_44e7d4:
    // 0x44e7d4: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x44e7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
label_44e7d8:
    // 0x44e7d8: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x44e7d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_44e7dc:
    // 0x44e7dc: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x44e7dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_44e7e0:
    // 0x44e7e0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x44e7e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_44e7e4:
    // 0x44e7e4: 0x0  nop
    ctx->pc = 0x44e7e4u;
    // NOP
label_44e7e8:
    // 0x44e7e8: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x44e7e8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_44e7ec:
    // 0x44e7ec: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_44e7f0:
    if (ctx->pc == 0x44E7F0u) {
        ctx->pc = 0x44E7F4u;
        goto label_44e7f4;
    }
    ctx->pc = 0x44E7ECu;
    {
        const bool branch_taken_0x44e7ec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x44e7ec) {
            ctx->pc = 0x44E800u;
            goto label_44e800;
        }
    }
    ctx->pc = 0x44E7F4u;
label_44e7f4:
    // 0x44e7f4: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x44e7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
label_44e7f8:
    // 0x44e7f8: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x44e7f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_44e7fc:
    // 0x44e7fc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x44e7fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_44e800:
    // 0x44e800: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x44e800u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_44e804:
    // 0x44e804: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x44e804u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_44e808:
    // 0x44e808: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x44e808u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_44e80c:
    // 0x44e80c: 0xe7a30080  swc1        $f3, 0x80($sp)
    ctx->pc = 0x44e80cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_44e810:
    // 0x44e810: 0xe7a20084  swc1        $f2, 0x84($sp)
    ctx->pc = 0x44e810u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_44e814:
    // 0x44e814: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x44e814u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_44e818:
    // 0x44e818: 0xe7a10088  swc1        $f1, 0x88($sp)
    ctx->pc = 0x44e818u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_44e81c:
    // 0x44e81c: 0xc0a7a88  jal         func_29EA20
label_44e820:
    if (ctx->pc == 0x44E820u) {
        ctx->pc = 0x44E820u;
            // 0x44e820: 0xafa0008c  sw          $zero, 0x8C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 0));
        ctx->pc = 0x44E824u;
        goto label_44e824;
    }
    ctx->pc = 0x44E81Cu;
    SET_GPR_U32(ctx, 31, 0x44E824u);
    ctx->pc = 0x44E820u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44E81Cu;
            // 0x44e820: 0xafa0008c  sw          $zero, 0x8C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44E824u; }
        if (ctx->pc != 0x44E824u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44E824u; }
        if (ctx->pc != 0x44E824u) { return; }
    }
    ctx->pc = 0x44E824u;
label_44e824:
    // 0x44e824: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x44e824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_44e828:
    // 0x44e828: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x44e828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_44e82c:
    // 0x44e82c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_44e830:
    if (ctx->pc == 0x44E830u) {
        ctx->pc = 0x44E830u;
            // 0x44e830: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x44E834u;
        goto label_44e834;
    }
    ctx->pc = 0x44E82Cu;
    {
        const bool branch_taken_0x44e82c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x44E830u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44E82Cu;
            // 0x44e830: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44e82c) {
            ctx->pc = 0x44E844u;
            goto label_44e844;
        }
    }
    ctx->pc = 0x44E834u;
label_44e834:
    // 0x44e834: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x44e834u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_44e838:
    // 0x44e838: 0xc0804bc  jal         func_2012F0
label_44e83c:
    if (ctx->pc == 0x44E83Cu) {
        ctx->pc = 0x44E83Cu;
            // 0x44e83c: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x44E840u;
        goto label_44e840;
    }
    ctx->pc = 0x44E838u;
    SET_GPR_U32(ctx, 31, 0x44E840u);
    ctx->pc = 0x44E83Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44E838u;
            // 0x44e83c: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44E840u; }
        if (ctx->pc != 0x44E840u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44E840u; }
        if (ctx->pc != 0x44E840u) { return; }
    }
    ctx->pc = 0x44E840u;
label_44e840:
    // 0x44e840: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x44e840u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_44e844:
    // 0x44e844: 0xae040060  sw          $a0, 0x60($s0)
    ctx->pc = 0x44e844u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 4));
label_44e848:
    // 0x44e848: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x44e848u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_44e84c:
    // 0x44e84c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x44e84cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_44e850:
    // 0x44e850: 0x24050150  addiu       $a1, $zero, 0x150
    ctx->pc = 0x44e850u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
label_44e854:
    // 0x44e854: 0xc0a7a88  jal         func_29EA20
label_44e858:
    if (ctx->pc == 0x44E858u) {
        ctx->pc = 0x44E858u;
            // 0x44e858: 0x2406002f  addiu       $a2, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->pc = 0x44E85Cu;
        goto label_44e85c;
    }
    ctx->pc = 0x44E854u;
    SET_GPR_U32(ctx, 31, 0x44E85Cu);
    ctx->pc = 0x44E858u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44E854u;
            // 0x44e858: 0x2406002f  addiu       $a2, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44E85Cu; }
        if (ctx->pc != 0x44E85Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44E85Cu; }
        if (ctx->pc != 0x44E85Cu) { return; }
    }
    ctx->pc = 0x44E85Cu;
label_44e85c:
    // 0x44e85c: 0x24030150  addiu       $v1, $zero, 0x150
    ctx->pc = 0x44e85cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
label_44e860:
    // 0x44e860: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x44e860u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_44e864:
    // 0x44e864: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
label_44e868:
    if (ctx->pc == 0x44E868u) {
        ctx->pc = 0x44E868u;
            // 0x44e868: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x44E86Cu;
        goto label_44e86c;
    }
    ctx->pc = 0x44E864u;
    {
        const bool branch_taken_0x44e864 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x44E868u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44E864u;
            // 0x44e868: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44e864) {
            ctx->pc = 0x44E898u;
            goto label_44e898;
        }
    }
    ctx->pc = 0x44E86Cu;
label_44e86c:
    // 0x44e86c: 0x8e050060  lw          $a1, 0x60($s0)
    ctx->pc = 0x44e86cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_44e870:
    // 0x44e870: 0x3c060060  lui         $a2, 0x60
    ctx->pc = 0x44e870u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)96 << 16));
label_44e874:
    // 0x44e874: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x44e874u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_44e878:
    // 0x44e878: 0x24c6d6e0  addiu       $a2, $a2, -0x2920
    ctx->pc = 0x44e878u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956768));
label_44e87c:
    // 0x44e87c: 0xc08afe0  jal         func_22BF80
label_44e880:
    if (ctx->pc == 0x44E880u) {
        ctx->pc = 0x44E880u;
            // 0x44e880: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x44E884u;
        goto label_44e884;
    }
    ctx->pc = 0x44E87Cu;
    SET_GPR_U32(ctx, 31, 0x44E884u);
    ctx->pc = 0x44E880u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44E87Cu;
            // 0x44e880: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22BF80u;
    if (runtime->hasFunction(0x22BF80u)) {
        auto targetFn = runtime->lookupFunction(0x22BF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44E884u; }
        if (ctx->pc != 0x44E884u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022BF80_0x22bf80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44E884u; }
        if (ctx->pc != 0x44E884u) { return; }
    }
    ctx->pc = 0x44E884u;
label_44e884:
    // 0x44e884: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x44e884u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_44e888:
    // 0x44e888: 0x244225d0  addiu       $v0, $v0, 0x25D0
    ctx->pc = 0x44e888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9680));
label_44e88c:
    // 0x44e88c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x44e88cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_44e890:
    // 0x44e890: 0xae200140  sw          $zero, 0x140($s1)
    ctx->pc = 0x44e890u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 320), GPR_U32(ctx, 0));
label_44e894:
    // 0x44e894: 0xae30000c  sw          $s0, 0xC($s1)
    ctx->pc = 0x44e894u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 16));
label_44e898:
    // 0x44e898: 0xae110050  sw          $s1, 0x50($s0)
    ctx->pc = 0x44e898u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 17));
label_44e89c:
    // 0x44e89c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x44e89cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_44e8a0:
    // 0x44e8a0: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x44e8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_44e8a4:
    // 0x44e8a4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x44e8a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_44e8a8:
    // 0x44e8a8: 0xc08c798  jal         func_231E60
label_44e8ac:
    if (ctx->pc == 0x44E8ACu) {
        ctx->pc = 0x44E8ACu;
            // 0x44e8ac: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44E8B0u;
        goto label_44e8b0;
    }
    ctx->pc = 0x44E8A8u;
    SET_GPR_U32(ctx, 31, 0x44E8B0u);
    ctx->pc = 0x44E8ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44E8A8u;
            // 0x44e8ac: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231E60u;
    if (runtime->hasFunction(0x231E60u)) {
        auto targetFn = runtime->lookupFunction(0x231E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44E8B0u; }
        if (ctx->pc != 0x44E8B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231E60_0x231e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44E8B0u; }
        if (ctx->pc != 0x44E8B0u) { return; }
    }
    ctx->pc = 0x44E8B0u;
label_44e8b0:
    // 0x44e8b0: 0xc603002c  lwc1        $f3, 0x2C($s0)
    ctx->pc = 0x44e8b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_44e8b4:
    // 0x44e8b4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x44e8b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_44e8b8:
    // 0x44e8b8: 0xc6020028  lwc1        $f2, 0x28($s0)
    ctx->pc = 0x44e8b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_44e8bc:
    // 0x44e8bc: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x44e8bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_44e8c0:
    // 0x44e8c0: 0xc6010024  lwc1        $f1, 0x24($s0)
    ctx->pc = 0x44e8c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_44e8c4:
    // 0x44e8c4: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x44e8c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_44e8c8:
    // 0x44e8c8: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x44e8c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_44e8cc:
    // 0x44e8cc: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x44e8ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_44e8d0:
    // 0x44e8d0: 0xe7a20078  swc1        $f2, 0x78($sp)
    ctx->pc = 0x44e8d0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_44e8d4:
    // 0x44e8d4: 0xe7a3007c  swc1        $f3, 0x7C($sp)
    ctx->pc = 0x44e8d4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
label_44e8d8:
    // 0x44e8d8: 0xc6020018  lwc1        $f2, 0x18($s0)
    ctx->pc = 0x44e8d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_44e8dc:
    // 0x44e8dc: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x44e8dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_44e8e0:
    // 0x44e8e0: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x44e8e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_44e8e4:
    // 0x44e8e4: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x44e8e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_44e8e8:
    // 0x44e8e8: 0xafa0006c  sw          $zero, 0x6C($sp)
    ctx->pc = 0x44e8e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
label_44e8ec:
    // 0x44e8ec: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x44e8ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_44e8f0:
    // 0x44e8f0: 0xc0a3830  jal         func_28E0C0
label_44e8f4:
    if (ctx->pc == 0x44E8F4u) {
        ctx->pc = 0x44E8F4u;
            // 0x44e8f4: 0xe7a20068  swc1        $f2, 0x68($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
        ctx->pc = 0x44E8F8u;
        goto label_44e8f8;
    }
    ctx->pc = 0x44E8F0u;
    SET_GPR_U32(ctx, 31, 0x44E8F8u);
    ctx->pc = 0x44E8F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44E8F0u;
            // 0x44e8f4: 0xe7a20068  swc1        $f2, 0x68($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x28E0C0u;
    if (runtime->hasFunction(0x28E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x28E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44E8F8u; }
        if (ctx->pc != 0x44E8F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028E0C0_0x28e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44E8F8u; }
        if (ctx->pc != 0x44E8F8u) { return; }
    }
    ctx->pc = 0x44E8F8u;
label_44e8f8:
    // 0x44e8f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x44e8f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_44e8fc:
    // 0x44e8fc: 0xc08af10  jal         func_22BC40
label_44e900:
    if (ctx->pc == 0x44E900u) {
        ctx->pc = 0x44E900u;
            // 0x44e900: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x44E904u;
        goto label_44e904;
    }
    ctx->pc = 0x44E8FCu;
    SET_GPR_U32(ctx, 31, 0x44E904u);
    ctx->pc = 0x44E900u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44E8FCu;
            // 0x44e900: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22BC40u;
    if (runtime->hasFunction(0x22BC40u)) {
        auto targetFn = runtime->lookupFunction(0x22BC40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44E904u; }
        if (ctx->pc != 0x44E904u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022BC40_0x22bc40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44E904u; }
        if (ctx->pc != 0x44E904u) { return; }
    }
    ctx->pc = 0x44E904u;
label_44e904:
    // 0x44e904: 0xc040180  jal         func_100600
label_44e908:
    if (ctx->pc == 0x44E908u) {
        ctx->pc = 0x44E908u;
            // 0x44e908: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->pc = 0x44E90Cu;
        goto label_44e90c;
    }
    ctx->pc = 0x44E904u;
    SET_GPR_U32(ctx, 31, 0x44E90Cu);
    ctx->pc = 0x44E908u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44E904u;
            // 0x44e908: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44E90Cu; }
        if (ctx->pc != 0x44E90Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44E90Cu; }
        if (ctx->pc != 0x44E90Cu) { return; }
    }
    ctx->pc = 0x44E90Cu;
label_44e90c:
    // 0x44e90c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x44e90cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_44e910:
    // 0x44e910: 0x5220000f  beql        $s1, $zero, . + 4 + (0xF << 2)
label_44e914:
    if (ctx->pc == 0x44E914u) {
        ctx->pc = 0x44E914u;
            // 0x44e914: 0xae11006c  sw          $s1, 0x6C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 17));
        ctx->pc = 0x44E918u;
        goto label_44e918;
    }
    ctx->pc = 0x44E910u;
    {
        const bool branch_taken_0x44e910 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x44e910) {
            ctx->pc = 0x44E914u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x44E910u;
            // 0x44e914: 0xae11006c  sw          $s1, 0x6C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
            ctx->pc = 0x44E950u;
            goto label_44e950;
        }
    }
    ctx->pc = 0x44E918u;
label_44e918:
    // 0x44e918: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x44e918u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_44e91c:
    // 0x44e91c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x44e91cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_44e920:
    // 0x44e920: 0x24632db8  addiu       $v1, $v1, 0x2DB8
    ctx->pc = 0x44e920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11704));
label_44e924:
    // 0x44e924: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x44e924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_44e928:
    // 0x44e928: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x44e928u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_44e92c:
    // 0x44e92c: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x44e92cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_44e930:
    // 0x44e930: 0xc040138  jal         func_1004E0
label_44e934:
    if (ctx->pc == 0x44E934u) {
        ctx->pc = 0x44E934u;
            // 0x44e934: 0xa2220008  sb          $v0, 0x8($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x44E938u;
        goto label_44e938;
    }
    ctx->pc = 0x44E930u;
    SET_GPR_U32(ctx, 31, 0x44E938u);
    ctx->pc = 0x44E934u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44E930u;
            // 0x44e934: 0xa2220008  sb          $v0, 0x8($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44E938u; }
        if (ctx->pc != 0x44E938u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44E938u; }
        if (ctx->pc != 0x44E938u) { return; }
    }
    ctx->pc = 0x44E938u;
label_44e938:
    // 0x44e938: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x44e938u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_44e93c:
    // 0x44e93c: 0x2624000c  addiu       $a0, $s1, 0xC
    ctx->pc = 0x44e93cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
label_44e940:
    // 0x44e940: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x44e940u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_44e944:
    // 0x44e944: 0xc04a576  jal         func_1295D8
label_44e948:
    if (ctx->pc == 0x44E948u) {
        ctx->pc = 0x44E948u;
            // 0x44e948: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x44E94Cu;
        goto label_44e94c;
    }
    ctx->pc = 0x44E944u;
    SET_GPR_U32(ctx, 31, 0x44E94Cu);
    ctx->pc = 0x44E948u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44E944u;
            // 0x44e948: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44E94Cu; }
        if (ctx->pc != 0x44E94Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44E94Cu; }
        if (ctx->pc != 0x44E94Cu) { return; }
    }
    ctx->pc = 0x44E94Cu;
label_44e94c:
    // 0x44e94c: 0xae11006c  sw          $s1, 0x6C($s0)
    ctx->pc = 0x44e94cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 17));
label_44e950:
    // 0x44e950: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x44e950u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
label_44e954:
    // 0x44e954: 0x8e090070  lw          $t1, 0x70($s0)
    ctx->pc = 0x44e954u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_44e958:
    // 0x44e958: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x44e958u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_44e95c:
    // 0x44e95c: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x44e95cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_44e960:
    // 0x44e960: 0x24c6d950  addiu       $a2, $a2, -0x26B0
    ctx->pc = 0x44e960u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957392));
label_44e964:
    // 0x44e964: 0x2463d960  addiu       $v1, $v1, -0x26A0
    ctx->pc = 0x44e964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957408));
label_44e968:
    // 0x44e968: 0x2442d964  addiu       $v0, $v0, -0x269C
    ctx->pc = 0x44e968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957412));
label_44e96c:
    // 0x44e96c: 0x940c0  sll         $t0, $t1, 3
    ctx->pc = 0x44e96cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
label_44e970:
    // 0x44e970: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x44e970u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_44e974:
    // 0x44e974: 0x1094023  subu        $t0, $t0, $t1
    ctx->pc = 0x44e974u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_44e978:
    // 0x44e978: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x44e978u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_44e97c:
    // 0x44e97c: 0x84080  sll         $t0, $t0, 2
    ctx->pc = 0x44e97cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_44e980:
    // 0x44e980: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x44e980u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
label_44e984:
    // 0x44e984: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x44e984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_44e988:
    // 0x44e988: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x44e988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_44e98c:
    // 0x44e98c: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x44e98cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_44e990:
    // 0x44e990: 0xc46c0000  lwc1        $f12, 0x0($v1)
    ctx->pc = 0x44e990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_44e994:
    // 0x44e994: 0xc44d0000  lwc1        $f13, 0x0($v0)
    ctx->pc = 0x44e994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_44e998:
    // 0x44e998: 0xc122cd8  jal         func_48B360
label_44e99c:
    if (ctx->pc == 0x44E99Cu) {
        ctx->pc = 0x44E99Cu;
            // 0x44e99c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44E9A0u;
        goto label_44e9a0;
    }
    ctx->pc = 0x44E998u;
    SET_GPR_U32(ctx, 31, 0x44E9A0u);
    ctx->pc = 0x44E99Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44E998u;
            // 0x44e99c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B360u;
    if (runtime->hasFunction(0x48B360u)) {
        auto targetFn = runtime->lookupFunction(0x48B360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44E9A0u; }
        if (ctx->pc != 0x44E9A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B360_0x48b360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44E9A0u; }
        if (ctx->pc != 0x44E9A0u) { return; }
    }
    ctx->pc = 0x44E9A0u;
label_44e9a0:
    // 0x44e9a0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x44e9a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_44e9a4:
    // 0x44e9a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x44e9a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_44e9a8:
    // 0x44e9a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x44e9a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_44e9ac:
    // 0x44e9ac: 0x3e00008  jr          $ra
label_44e9b0:
    if (ctx->pc == 0x44E9B0u) {
        ctx->pc = 0x44E9B0u;
            // 0x44e9b0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x44E9B4u;
        goto label_44e9b4;
    }
    ctx->pc = 0x44E9ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44E9B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44E9ACu;
            // 0x44e9b0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x44E9B4u;
label_44e9b4:
    // 0x44e9b4: 0x0  nop
    ctx->pc = 0x44e9b4u;
    // NOP
label_44e9b8:
    // 0x44e9b8: 0x0  nop
    ctx->pc = 0x44e9b8u;
    // NOP
label_44e9bc:
    // 0x44e9bc: 0x0  nop
    ctx->pc = 0x44e9bcu;
    // NOP
label_44e9c0:
    // 0x44e9c0: 0x3e00008  jr          $ra
label_44e9c4:
    if (ctx->pc == 0x44E9C4u) {
        ctx->pc = 0x44E9C4u;
            // 0x44e9c4: 0x24020884  addiu       $v0, $zero, 0x884 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2180));
        ctx->pc = 0x44E9C8u;
        goto label_44e9c8;
    }
    ctx->pc = 0x44E9C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44E9C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44E9C0u;
            // 0x44e9c4: 0x24020884  addiu       $v0, $zero, 0x884 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2180));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x44E9C8u;
label_44e9c8:
    // 0x44e9c8: 0x0  nop
    ctx->pc = 0x44e9c8u;
    // NOP
label_44e9cc:
    // 0x44e9cc: 0x0  nop
    ctx->pc = 0x44e9ccu;
    // NOP
label_44e9d0:
    // 0x44e9d0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x44e9d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_44e9d4:
    // 0x44e9d4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x44e9d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_44e9d8:
    // 0x44e9d8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x44e9d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_44e9dc:
    // 0x44e9dc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x44e9dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_44e9e0:
    // 0x44e9e0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x44e9e0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_44e9e4:
    // 0x44e9e4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x44e9e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_44e9e8:
    // 0x44e9e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x44e9e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_44e9ec:
    // 0x44e9ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x44e9ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_44e9f0:
    // 0x44e9f0: 0x8c900070  lw          $s0, 0x70($a0)
    ctx->pc = 0x44e9f0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_44e9f4:
    // 0x44e9f4: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_44e9f8:
    if (ctx->pc == 0x44E9F8u) {
        ctx->pc = 0x44E9F8u;
            // 0x44e9f8: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44E9FCu;
        goto label_44e9fc;
    }
    ctx->pc = 0x44E9F4u;
    {
        const bool branch_taken_0x44e9f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x44E9F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44E9F4u;
            // 0x44e9f8: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44e9f4) {
            ctx->pc = 0x44EA38u;
            goto label_44ea38;
        }
    }
    ctx->pc = 0x44E9FCu;
label_44e9fc:
    // 0x44e9fc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x44e9fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_44ea00:
    // 0x44ea00: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x44ea00u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_44ea04:
    // 0x44ea04: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x44ea04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_44ea08:
    // 0x44ea08: 0x8e820074  lw          $v0, 0x74($s4)
    ctx->pc = 0x44ea08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_44ea0c:
    // 0x44ea0c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x44ea0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_44ea10:
    // 0x44ea10: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x44ea10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_44ea14:
    // 0x44ea14: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x44ea14u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_44ea18:
    // 0x44ea18: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x44ea18u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_44ea1c:
    // 0x44ea1c: 0x320f809  jalr        $t9
label_44ea20:
    if (ctx->pc == 0x44EA20u) {
        ctx->pc = 0x44EA24u;
        goto label_44ea24;
    }
    ctx->pc = 0x44EA1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x44EA24u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x44EA24u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x44EA24u; }
            if (ctx->pc != 0x44EA24u) { return; }
        }
        }
    }
    ctx->pc = 0x44EA24u;
label_44ea24:
    // 0x44ea24: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x44ea24u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_44ea28:
    // 0x44ea28: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x44ea28u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_44ea2c:
    // 0x44ea2c: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x44ea2cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_44ea30:
    // 0x44ea30: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_44ea34:
    if (ctx->pc == 0x44EA34u) {
        ctx->pc = 0x44EA34u;
            // 0x44ea34: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x44EA38u;
        goto label_44ea38;
    }
    ctx->pc = 0x44EA30u;
    {
        const bool branch_taken_0x44ea30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x44EA34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44EA30u;
            // 0x44ea34: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44ea30) {
            ctx->pc = 0x44EA08u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_44ea08;
        }
    }
    ctx->pc = 0x44EA38u;
label_44ea38:
    // 0x44ea38: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x44ea38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_44ea3c:
    // 0x44ea3c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x44ea3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_44ea40:
    // 0x44ea40: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x44ea40u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_44ea44:
    // 0x44ea44: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x44ea44u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_44ea48:
    // 0x44ea48: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x44ea48u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_44ea4c:
    // 0x44ea4c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x44ea4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_44ea50:
    // 0x44ea50: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x44ea50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_44ea54:
    // 0x44ea54: 0x3e00008  jr          $ra
label_44ea58:
    if (ctx->pc == 0x44EA58u) {
        ctx->pc = 0x44EA58u;
            // 0x44ea58: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x44EA5Cu;
        goto label_44ea5c;
    }
    ctx->pc = 0x44EA54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44EA58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44EA54u;
            // 0x44ea58: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x44EA5Cu;
label_44ea5c:
    // 0x44ea5c: 0x0  nop
    ctx->pc = 0x44ea5cu;
    // NOP
label_44ea60:
    // 0x44ea60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x44ea60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_44ea64:
    // 0x44ea64: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x44ea64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_44ea68:
    // 0x44ea68: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x44ea68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_44ea6c:
    // 0x44ea6c: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x44ea6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_44ea70:
    // 0x44ea70: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x44ea70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_44ea74:
    // 0x44ea74: 0x8c83007c  lw          $v1, 0x7C($a0)
    ctx->pc = 0x44ea74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_44ea78:
    // 0x44ea78: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x44ea78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_44ea7c:
    // 0x44ea7c: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x44ea7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_44ea80:
    // 0x44ea80: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x44ea80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_44ea84:
    // 0x44ea84: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x44ea84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_44ea88:
    // 0x44ea88: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x44ea88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_44ea8c:
    // 0x44ea8c: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x44ea8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_44ea90:
    // 0x44ea90: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x44ea90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_44ea94:
    // 0x44ea94: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x44ea94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_44ea98:
    // 0x44ea98: 0x8c42fffc  lw          $v0, -0x4($v0)
    ctx->pc = 0x44ea98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_44ea9c:
    // 0x44ea9c: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x44ea9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_44eaa0:
    // 0x44eaa0: 0x8c82007c  lw          $v0, 0x7C($a0)
    ctx->pc = 0x44eaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_44eaa4:
    // 0x44eaa4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x44eaa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_44eaa8:
    // 0x44eaa8: 0xac82007c  sw          $v0, 0x7C($a0)
    ctx->pc = 0x44eaa8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
label_44eaac:
    // 0x44eaac: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x44eaacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_44eab0:
    // 0x44eab0: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x44eab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_44eab4:
    // 0x44eab4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x44eab4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_44eab8:
    // 0x44eab8: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x44eab8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_44eabc:
    // 0x44eabc: 0xc0a997c  jal         func_2A65F0
label_44eac0:
    if (ctx->pc == 0x44EAC0u) {
        ctx->pc = 0x44EAC0u;
            // 0x44eac0: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->pc = 0x44EAC4u;
        goto label_44eac4;
    }
    ctx->pc = 0x44EABCu;
    SET_GPR_U32(ctx, 31, 0x44EAC4u);
    ctx->pc = 0x44EAC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44EABCu;
            // 0x44eac0: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44EAC4u; }
        if (ctx->pc != 0x44EAC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44EAC4u; }
        if (ctx->pc != 0x44EAC4u) { return; }
    }
    ctx->pc = 0x44EAC4u;
label_44eac4:
    // 0x44eac4: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x44eac4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_44eac8:
    // 0x44eac8: 0xc0d879c  jal         func_361E70
label_44eacc:
    if (ctx->pc == 0x44EACCu) {
        ctx->pc = 0x44EACCu;
            // 0x44eacc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44EAD0u;
        goto label_44ead0;
    }
    ctx->pc = 0x44EAC8u;
    SET_GPR_U32(ctx, 31, 0x44EAD0u);
    ctx->pc = 0x44EACCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44EAC8u;
            // 0x44eacc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361E70u;
    if (runtime->hasFunction(0x361E70u)) {
        auto targetFn = runtime->lookupFunction(0x361E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44EAD0u; }
        if (ctx->pc != 0x44EAD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361E70_0x361e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44EAD0u; }
        if (ctx->pc != 0x44EAD0u) { return; }
    }
    ctx->pc = 0x44EAD0u;
label_44ead0:
    // 0x44ead0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x44ead0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_44ead4:
    // 0x44ead4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x44ead4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_44ead8:
    // 0x44ead8: 0x3e00008  jr          $ra
label_44eadc:
    if (ctx->pc == 0x44EADCu) {
        ctx->pc = 0x44EADCu;
            // 0x44eadc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x44EAE0u;
        goto label_44eae0;
    }
    ctx->pc = 0x44EAD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44EADCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44EAD8u;
            // 0x44eadc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x44EAE0u;
label_44eae0:
    // 0x44eae0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x44eae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_44eae4:
    // 0x44eae4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x44eae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_44eae8:
    // 0x44eae8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x44eae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_44eaec:
    // 0x44eaec: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x44eaecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_44eaf0:
    // 0x44eaf0: 0x10600047  beqz        $v1, . + 4 + (0x47 << 2)
label_44eaf4:
    if (ctx->pc == 0x44EAF4u) {
        ctx->pc = 0x44EAF4u;
            // 0x44eaf4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44EAF8u;
        goto label_44eaf8;
    }
    ctx->pc = 0x44EAF0u;
    {
        const bool branch_taken_0x44eaf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x44EAF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44EAF0u;
            // 0x44eaf4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44eaf0) {
            ctx->pc = 0x44EC10u;
            goto label_44ec10;
        }
    }
    ctx->pc = 0x44EAF8u;
label_44eaf8:
    // 0x44eaf8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x44eaf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_44eafc:
    // 0x44eafc: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x44eafcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
label_44eb00:
    // 0x44eb00: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x44eb00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_44eb04:
    // 0x44eb04: 0xc075128  jal         func_1D44A0
label_44eb08:
    if (ctx->pc == 0x44EB08u) {
        ctx->pc = 0x44EB08u;
            // 0x44eb08: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x44EB0Cu;
        goto label_44eb0c;
    }
    ctx->pc = 0x44EB04u;
    SET_GPR_U32(ctx, 31, 0x44EB0Cu);
    ctx->pc = 0x44EB08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44EB04u;
            // 0x44eb08: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D44A0u;
    if (runtime->hasFunction(0x1D44A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44EB0Cu; }
        if (ctx->pc != 0x44EB0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D44A0_0x1d44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44EB0Cu; }
        if (ctx->pc != 0x44EB0Cu) { return; }
    }
    ctx->pc = 0x44EB0Cu;
label_44eb0c:
    // 0x44eb0c: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x44eb0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_44eb10:
    // 0x44eb10: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x44eb10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_44eb14:
    // 0x44eb14: 0x8c42e390  lw          $v0, -0x1C70($v0)
    ctx->pc = 0x44eb14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960016)));
label_44eb18:
    // 0x44eb18: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x44eb18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_44eb1c:
    // 0x44eb1c: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x44eb1cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_44eb20:
    // 0x44eb20: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_44eb24:
    if (ctx->pc == 0x44EB24u) {
        ctx->pc = 0x44EB24u;
            // 0x44eb24: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->pc = 0x44EB28u;
        goto label_44eb28;
    }
    ctx->pc = 0x44EB20u;
    {
        const bool branch_taken_0x44eb20 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x44EB24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44EB20u;
            // 0x44eb24: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44eb20) {
            ctx->pc = 0x44EB30u;
            goto label_44eb30;
        }
    }
    ctx->pc = 0x44EB28u;
label_44eb28:
    // 0x44eb28: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x44eb28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_44eb2c:
    // 0x44eb2c: 0xac43e390  sw          $v1, -0x1C70($v0)
    ctx->pc = 0x44eb2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960016), GPR_U32(ctx, 3));
label_44eb30:
    // 0x44eb30: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x44eb30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_44eb34:
    // 0x44eb34: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x44eb34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_44eb38:
    // 0x44eb38: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x44eb38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_44eb3c:
    // 0x44eb3c: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x44eb3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_44eb40:
    // 0x44eb40: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x44eb40u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_44eb44:
    // 0x44eb44: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_44eb48:
    if (ctx->pc == 0x44EB48u) {
        ctx->pc = 0x44EB48u;
            // 0x44eb48: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x44EB4Cu;
        goto label_44eb4c;
    }
    ctx->pc = 0x44EB44u;
    {
        const bool branch_taken_0x44eb44 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x44eb44) {
            ctx->pc = 0x44EB48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x44EB44u;
            // 0x44eb48: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x44EB58u;
            goto label_44eb58;
        }
    }
    ctx->pc = 0x44EB4Cu;
label_44eb4c:
    // 0x44eb4c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x44eb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_44eb50:
    // 0x44eb50: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x44eb50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_44eb54:
    // 0x44eb54: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x44eb54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_44eb58:
    // 0x44eb58: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x44eb58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_44eb5c:
    // 0x44eb5c: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x44eb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_44eb60:
    // 0x44eb60: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x44eb60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_44eb64:
    // 0x44eb64: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x44eb64u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_44eb68:
    // 0x44eb68: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_44eb6c:
    if (ctx->pc == 0x44EB6Cu) {
        ctx->pc = 0x44EB6Cu;
            // 0x44eb6c: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x44EB70u;
        goto label_44eb70;
    }
    ctx->pc = 0x44EB68u;
    {
        const bool branch_taken_0x44eb68 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x44eb68) {
            ctx->pc = 0x44EB6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x44EB68u;
            // 0x44eb6c: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x44EB7Cu;
            goto label_44eb7c;
        }
    }
    ctx->pc = 0x44EB70u;
label_44eb70:
    // 0x44eb70: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x44eb70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_44eb74:
    // 0x44eb74: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x44eb74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_44eb78:
    // 0x44eb78: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x44eb78u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_44eb7c:
    // 0x44eb7c: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x44eb7cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_44eb80:
    // 0x44eb80: 0x320f809  jalr        $t9
label_44eb84:
    if (ctx->pc == 0x44EB84u) {
        ctx->pc = 0x44EB84u;
            // 0x44eb84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44EB88u;
        goto label_44eb88;
    }
    ctx->pc = 0x44EB80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x44EB88u);
        ctx->pc = 0x44EB84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44EB80u;
            // 0x44eb84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x44EB88u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x44EB88u; }
            if (ctx->pc != 0x44EB88u) { return; }
        }
        }
    }
    ctx->pc = 0x44EB88u;
label_44eb88:
    // 0x44eb88: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x44eb88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_44eb8c:
    // 0x44eb8c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x44eb8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_44eb90:
    // 0x44eb90: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x44eb90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
label_44eb94:
    // 0x44eb94: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x44eb94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_44eb98:
    // 0x44eb98: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x44eb98u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_44eb9c:
    // 0x44eb9c: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x44eb9cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_44eba0:
    // 0x44eba0: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_44eba4:
    if (ctx->pc == 0x44EBA4u) {
        ctx->pc = 0x44EBA4u;
            // 0x44eba4: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->pc = 0x44EBA8u;
        goto label_44eba8;
    }
    ctx->pc = 0x44EBA0u;
    {
        const bool branch_taken_0x44eba0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x44eba0) {
            ctx->pc = 0x44EBA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x44EBA0u;
            // 0x44eba4: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x44EBB4u;
            goto label_44ebb4;
        }
    }
    ctx->pc = 0x44EBA8u;
label_44eba8:
    // 0x44eba8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x44eba8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_44ebac:
    // 0x44ebac: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x44ebacu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
label_44ebb0:
    // 0x44ebb0: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x44ebb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_44ebb4:
    // 0x44ebb4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x44ebb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_44ebb8:
    // 0x44ebb8: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x44ebb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
label_44ebbc:
    // 0x44ebbc: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x44ebbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_44ebc0:
    // 0x44ebc0: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x44ebc0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_44ebc4:
    // 0x44ebc4: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x44ebc4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_44ebc8:
    // 0x44ebc8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_44ebcc:
    if (ctx->pc == 0x44EBCCu) {
        ctx->pc = 0x44EBD0u;
        goto label_44ebd0;
    }
    ctx->pc = 0x44EBC8u;
    {
        const bool branch_taken_0x44ebc8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x44ebc8) {
            ctx->pc = 0x44EBD8u;
            goto label_44ebd8;
        }
    }
    ctx->pc = 0x44EBD0u;
label_44ebd0:
    // 0x44ebd0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x44ebd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_44ebd4:
    // 0x44ebd4: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x44ebd4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_44ebd8:
    // 0x44ebd8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x44ebd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_44ebdc:
    // 0x44ebdc: 0x8c63e3c8  lw          $v1, -0x1C38($v1)
    ctx->pc = 0x44ebdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960072)));
label_44ebe0:
    // 0x44ebe0: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x44ebe0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_44ebe4:
    // 0x44ebe4: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_44ebe8:
    if (ctx->pc == 0x44EBE8u) {
        ctx->pc = 0x44EBECu;
        goto label_44ebec;
    }
    ctx->pc = 0x44EBE4u;
    {
        const bool branch_taken_0x44ebe4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x44ebe4) {
            ctx->pc = 0x44EBF4u;
            goto label_44ebf4;
        }
    }
    ctx->pc = 0x44EBECu;
label_44ebec:
    // 0x44ebec: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x44ebecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_44ebf0:
    // 0x44ebf0: 0xac62e3c8  sw          $v0, -0x1C38($v1)
    ctx->pc = 0x44ebf0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960072), GPR_U32(ctx, 2));
label_44ebf4:
    // 0x44ebf4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x44ebf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_44ebf8:
    // 0x44ebf8: 0x8c63e3d0  lw          $v1, -0x1C30($v1)
    ctx->pc = 0x44ebf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960080)));
label_44ebfc:
    // 0x44ebfc: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x44ebfcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_44ec00:
    // 0x44ec00: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_44ec04:
    if (ctx->pc == 0x44EC04u) {
        ctx->pc = 0x44EC04u;
            // 0x44ec04: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x44EC08u;
        goto label_44ec08;
    }
    ctx->pc = 0x44EC00u;
    {
        const bool branch_taken_0x44ec00 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x44ec00) {
            ctx->pc = 0x44EC04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x44EC00u;
            // 0x44ec04: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x44EC14u;
            goto label_44ec14;
        }
    }
    ctx->pc = 0x44EC08u;
label_44ec08:
    // 0x44ec08: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x44ec08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_44ec0c:
    // 0x44ec0c: 0xac62e3d0  sw          $v0, -0x1C30($v1)
    ctx->pc = 0x44ec0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960080), GPR_U32(ctx, 2));
label_44ec10:
    // 0x44ec10: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x44ec10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_44ec14:
    // 0x44ec14: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x44ec14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_44ec18:
    // 0x44ec18: 0x3e00008  jr          $ra
label_44ec1c:
    if (ctx->pc == 0x44EC1Cu) {
        ctx->pc = 0x44EC1Cu;
            // 0x44ec1c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x44EC20u;
        goto label_44ec20;
    }
    ctx->pc = 0x44EC18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44EC1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44EC18u;
            // 0x44ec1c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x44EC20u;
label_44ec20:
    // 0x44ec20: 0x81136c8  j           func_44DB20
label_44ec24:
    if (ctx->pc == 0x44EC24u) {
        ctx->pc = 0x44EC24u;
            // 0x44ec24: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->pc = 0x44EC28u;
        goto label_44ec28;
    }
    ctx->pc = 0x44EC20u;
    ctx->pc = 0x44EC24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44EC20u;
            // 0x44ec24: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x44DB20u;
    {
        auto targetFn = runtime->lookupFunction(0x44DB20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x44EC28u;
label_44ec28:
    // 0x44ec28: 0x0  nop
    ctx->pc = 0x44ec28u;
    // NOP
label_44ec2c:
    // 0x44ec2c: 0x0  nop
    ctx->pc = 0x44ec2cu;
    // NOP
label_44ec30:
    // 0x44ec30: 0x8113798  j           func_44DE60
label_44ec34:
    if (ctx->pc == 0x44EC34u) {
        ctx->pc = 0x44EC34u;
            // 0x44ec34: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x44EC38u;
        goto label_44ec38;
    }
    ctx->pc = 0x44EC30u;
    ctx->pc = 0x44EC34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44EC30u;
            // 0x44ec34: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x44DE60u;
    {
        auto targetFn = runtime->lookupFunction(0x44DE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x44EC38u;
label_44ec38:
    // 0x44ec38: 0x0  nop
    ctx->pc = 0x44ec38u;
    // NOP
label_44ec3c:
    // 0x44ec3c: 0x0  nop
    ctx->pc = 0x44ec3cu;
    // NOP
label_44ec40:
    // 0x44ec40: 0x8113670  j           func_44D9C0
label_44ec44:
    if (ctx->pc == 0x44EC44u) {
        ctx->pc = 0x44EC44u;
            // 0x44ec44: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x44EC48u;
        goto label_44ec48;
    }
    ctx->pc = 0x44EC40u;
    ctx->pc = 0x44EC44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44EC40u;
            // 0x44ec44: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x44D9C0u;
    if (runtime->hasFunction(0x44D9C0u)) {
        auto targetFn = runtime->lookupFunction(0x44D9C0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0044D9C0_0x44d9c0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x44EC48u;
label_44ec48:
    // 0x44ec48: 0x0  nop
    ctx->pc = 0x44ec48u;
    // NOP
label_44ec4c:
    // 0x44ec4c: 0x0  nop
    ctx->pc = 0x44ec4cu;
    // NOP
label_44ec50:
    // 0x44ec50: 0x811364c  j           func_44D930
label_44ec54:
    if (ctx->pc == 0x44EC54u) {
        ctx->pc = 0x44EC54u;
            // 0x44ec54: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x44EC58u;
        goto label_44ec58;
    }
    ctx->pc = 0x44EC50u;
    ctx->pc = 0x44EC54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44EC50u;
            // 0x44ec54: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x44D930u;
    {
        auto targetFn = runtime->lookupFunction(0x44D930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x44EC58u;
label_44ec58:
    // 0x44ec58: 0x0  nop
    ctx->pc = 0x44ec58u;
    // NOP
label_44ec5c:
    // 0x44ec5c: 0x0  nop
    ctx->pc = 0x44ec5cu;
    // NOP
label_44ec60:
    // 0x44ec60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x44ec60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_44ec64:
    // 0x44ec64: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x44ec64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_44ec68:
    // 0x44ec68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x44ec68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_44ec6c:
    // 0x44ec6c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x44ec6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_44ec70:
    // 0x44ec70: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x44ec70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_44ec74:
    // 0x44ec74: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
label_44ec78:
    if (ctx->pc == 0x44EC78u) {
        ctx->pc = 0x44EC78u;
            // 0x44ec78: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44EC7Cu;
        goto label_44ec7c;
    }
    ctx->pc = 0x44EC74u;
    {
        const bool branch_taken_0x44ec74 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x44EC78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44EC74u;
            // 0x44ec78: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44ec74) {
            ctx->pc = 0x44ECD0u;
            goto label_44ecd0;
        }
    }
    ctx->pc = 0x44EC7Cu;
label_44ec7c:
    // 0x44ec7c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x44ec7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_44ec80:
    // 0x44ec80: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x44ec80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_44ec84:
    // 0x44ec84: 0x2463dc00  addiu       $v1, $v1, -0x2400
    ctx->pc = 0x44ec84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958080));
label_44ec88:
    // 0x44ec88: 0x2442dc38  addiu       $v0, $v0, -0x23C8
    ctx->pc = 0x44ec88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958136));
label_44ec8c:
    // 0x44ec8c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x44ec8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_44ec90:
    // 0x44ec90: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_44ec94:
    if (ctx->pc == 0x44EC94u) {
        ctx->pc = 0x44EC94u;
            // 0x44ec94: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x44EC98u;
        goto label_44ec98;
    }
    ctx->pc = 0x44EC90u;
    {
        const bool branch_taken_0x44ec90 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x44EC94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44EC90u;
            // 0x44ec94: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44ec90) {
            ctx->pc = 0x44ECB8u;
            goto label_44ecb8;
        }
    }
    ctx->pc = 0x44EC98u;
label_44ec98:
    // 0x44ec98: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x44ec98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_44ec9c:
    // 0x44ec9c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x44ec9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_44eca0:
    // 0x44eca0: 0x2463dcb0  addiu       $v1, $v1, -0x2350
    ctx->pc = 0x44eca0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958256));
label_44eca4:
    // 0x44eca4: 0x2442dce8  addiu       $v0, $v0, -0x2318
    ctx->pc = 0x44eca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958312));
label_44eca8:
    // 0x44eca8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x44eca8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_44ecac:
    // 0x44ecac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x44ecacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_44ecb0:
    // 0x44ecb0: 0xc113b3c  jal         func_44ECF0
label_44ecb4:
    if (ctx->pc == 0x44ECB4u) {
        ctx->pc = 0x44ECB4u;
            // 0x44ecb4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x44ECB8u;
        goto label_44ecb8;
    }
    ctx->pc = 0x44ECB0u;
    SET_GPR_U32(ctx, 31, 0x44ECB8u);
    ctx->pc = 0x44ECB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44ECB0u;
            // 0x44ecb4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x44ECF0u;
    if (runtime->hasFunction(0x44ECF0u)) {
        auto targetFn = runtime->lookupFunction(0x44ECF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44ECB8u; }
        if (ctx->pc != 0x44ECB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0044ECF0_0x44ecf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44ECB8u; }
        if (ctx->pc != 0x44ECB8u) { return; }
    }
    ctx->pc = 0x44ECB8u;
label_44ecb8:
    // 0x44ecb8: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x44ecb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_44ecbc:
    // 0x44ecbc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x44ecbcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_44ecc0:
    // 0x44ecc0: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_44ecc4:
    if (ctx->pc == 0x44ECC4u) {
        ctx->pc = 0x44ECC4u;
            // 0x44ecc4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44ECC8u;
        goto label_44ecc8;
    }
    ctx->pc = 0x44ECC0u;
    {
        const bool branch_taken_0x44ecc0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x44ecc0) {
            ctx->pc = 0x44ECC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x44ECC0u;
            // 0x44ecc4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x44ECD4u;
            goto label_44ecd4;
        }
    }
    ctx->pc = 0x44ECC8u;
label_44ecc8:
    // 0x44ecc8: 0xc0400a8  jal         func_1002A0
label_44eccc:
    if (ctx->pc == 0x44ECCCu) {
        ctx->pc = 0x44ECCCu;
            // 0x44eccc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44ECD0u;
        goto label_44ecd0;
    }
    ctx->pc = 0x44ECC8u;
    SET_GPR_U32(ctx, 31, 0x44ECD0u);
    ctx->pc = 0x44ECCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44ECC8u;
            // 0x44eccc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44ECD0u; }
        if (ctx->pc != 0x44ECD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44ECD0u; }
        if (ctx->pc != 0x44ECD0u) { return; }
    }
    ctx->pc = 0x44ECD0u;
label_44ecd0:
    // 0x44ecd0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x44ecd0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_44ecd4:
    // 0x44ecd4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x44ecd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_44ecd8:
    // 0x44ecd8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x44ecd8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_44ecdc:
    // 0x44ecdc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x44ecdcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_44ece0:
    // 0x44ece0: 0x3e00008  jr          $ra
label_44ece4:
    if (ctx->pc == 0x44ECE4u) {
        ctx->pc = 0x44ECE4u;
            // 0x44ece4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x44ECE8u;
        goto label_44ece8;
    }
    ctx->pc = 0x44ECE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44ECE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44ECE0u;
            // 0x44ece4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x44ECE8u;
label_44ece8:
    // 0x44ece8: 0x0  nop
    ctx->pc = 0x44ece8u;
    // NOP
label_44ecec:
    // 0x44ecec: 0x0  nop
    ctx->pc = 0x44ececu;
    // NOP
}
