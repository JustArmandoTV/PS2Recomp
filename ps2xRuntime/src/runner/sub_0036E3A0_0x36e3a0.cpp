#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0036E3A0
// Address: 0x36e3a0 - 0x36f2f0
void sub_0036E3A0_0x36e3a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036E3A0_0x36e3a0");
#endif

    switch (ctx->pc) {
        case 0x36e3a0u: goto label_36e3a0;
        case 0x36e3a4u: goto label_36e3a4;
        case 0x36e3a8u: goto label_36e3a8;
        case 0x36e3acu: goto label_36e3ac;
        case 0x36e3b0u: goto label_36e3b0;
        case 0x36e3b4u: goto label_36e3b4;
        case 0x36e3b8u: goto label_36e3b8;
        case 0x36e3bcu: goto label_36e3bc;
        case 0x36e3c0u: goto label_36e3c0;
        case 0x36e3c4u: goto label_36e3c4;
        case 0x36e3c8u: goto label_36e3c8;
        case 0x36e3ccu: goto label_36e3cc;
        case 0x36e3d0u: goto label_36e3d0;
        case 0x36e3d4u: goto label_36e3d4;
        case 0x36e3d8u: goto label_36e3d8;
        case 0x36e3dcu: goto label_36e3dc;
        case 0x36e3e0u: goto label_36e3e0;
        case 0x36e3e4u: goto label_36e3e4;
        case 0x36e3e8u: goto label_36e3e8;
        case 0x36e3ecu: goto label_36e3ec;
        case 0x36e3f0u: goto label_36e3f0;
        case 0x36e3f4u: goto label_36e3f4;
        case 0x36e3f8u: goto label_36e3f8;
        case 0x36e3fcu: goto label_36e3fc;
        case 0x36e400u: goto label_36e400;
        case 0x36e404u: goto label_36e404;
        case 0x36e408u: goto label_36e408;
        case 0x36e40cu: goto label_36e40c;
        case 0x36e410u: goto label_36e410;
        case 0x36e414u: goto label_36e414;
        case 0x36e418u: goto label_36e418;
        case 0x36e41cu: goto label_36e41c;
        case 0x36e420u: goto label_36e420;
        case 0x36e424u: goto label_36e424;
        case 0x36e428u: goto label_36e428;
        case 0x36e42cu: goto label_36e42c;
        case 0x36e430u: goto label_36e430;
        case 0x36e434u: goto label_36e434;
        case 0x36e438u: goto label_36e438;
        case 0x36e43cu: goto label_36e43c;
        case 0x36e440u: goto label_36e440;
        case 0x36e444u: goto label_36e444;
        case 0x36e448u: goto label_36e448;
        case 0x36e44cu: goto label_36e44c;
        case 0x36e450u: goto label_36e450;
        case 0x36e454u: goto label_36e454;
        case 0x36e458u: goto label_36e458;
        case 0x36e45cu: goto label_36e45c;
        case 0x36e460u: goto label_36e460;
        case 0x36e464u: goto label_36e464;
        case 0x36e468u: goto label_36e468;
        case 0x36e46cu: goto label_36e46c;
        case 0x36e470u: goto label_36e470;
        case 0x36e474u: goto label_36e474;
        case 0x36e478u: goto label_36e478;
        case 0x36e47cu: goto label_36e47c;
        case 0x36e480u: goto label_36e480;
        case 0x36e484u: goto label_36e484;
        case 0x36e488u: goto label_36e488;
        case 0x36e48cu: goto label_36e48c;
        case 0x36e490u: goto label_36e490;
        case 0x36e494u: goto label_36e494;
        case 0x36e498u: goto label_36e498;
        case 0x36e49cu: goto label_36e49c;
        case 0x36e4a0u: goto label_36e4a0;
        case 0x36e4a4u: goto label_36e4a4;
        case 0x36e4a8u: goto label_36e4a8;
        case 0x36e4acu: goto label_36e4ac;
        case 0x36e4b0u: goto label_36e4b0;
        case 0x36e4b4u: goto label_36e4b4;
        case 0x36e4b8u: goto label_36e4b8;
        case 0x36e4bcu: goto label_36e4bc;
        case 0x36e4c0u: goto label_36e4c0;
        case 0x36e4c4u: goto label_36e4c4;
        case 0x36e4c8u: goto label_36e4c8;
        case 0x36e4ccu: goto label_36e4cc;
        case 0x36e4d0u: goto label_36e4d0;
        case 0x36e4d4u: goto label_36e4d4;
        case 0x36e4d8u: goto label_36e4d8;
        case 0x36e4dcu: goto label_36e4dc;
        case 0x36e4e0u: goto label_36e4e0;
        case 0x36e4e4u: goto label_36e4e4;
        case 0x36e4e8u: goto label_36e4e8;
        case 0x36e4ecu: goto label_36e4ec;
        case 0x36e4f0u: goto label_36e4f0;
        case 0x36e4f4u: goto label_36e4f4;
        case 0x36e4f8u: goto label_36e4f8;
        case 0x36e4fcu: goto label_36e4fc;
        case 0x36e500u: goto label_36e500;
        case 0x36e504u: goto label_36e504;
        case 0x36e508u: goto label_36e508;
        case 0x36e50cu: goto label_36e50c;
        case 0x36e510u: goto label_36e510;
        case 0x36e514u: goto label_36e514;
        case 0x36e518u: goto label_36e518;
        case 0x36e51cu: goto label_36e51c;
        case 0x36e520u: goto label_36e520;
        case 0x36e524u: goto label_36e524;
        case 0x36e528u: goto label_36e528;
        case 0x36e52cu: goto label_36e52c;
        case 0x36e530u: goto label_36e530;
        case 0x36e534u: goto label_36e534;
        case 0x36e538u: goto label_36e538;
        case 0x36e53cu: goto label_36e53c;
        case 0x36e540u: goto label_36e540;
        case 0x36e544u: goto label_36e544;
        case 0x36e548u: goto label_36e548;
        case 0x36e54cu: goto label_36e54c;
        case 0x36e550u: goto label_36e550;
        case 0x36e554u: goto label_36e554;
        case 0x36e558u: goto label_36e558;
        case 0x36e55cu: goto label_36e55c;
        case 0x36e560u: goto label_36e560;
        case 0x36e564u: goto label_36e564;
        case 0x36e568u: goto label_36e568;
        case 0x36e56cu: goto label_36e56c;
        case 0x36e570u: goto label_36e570;
        case 0x36e574u: goto label_36e574;
        case 0x36e578u: goto label_36e578;
        case 0x36e57cu: goto label_36e57c;
        case 0x36e580u: goto label_36e580;
        case 0x36e584u: goto label_36e584;
        case 0x36e588u: goto label_36e588;
        case 0x36e58cu: goto label_36e58c;
        case 0x36e590u: goto label_36e590;
        case 0x36e594u: goto label_36e594;
        case 0x36e598u: goto label_36e598;
        case 0x36e59cu: goto label_36e59c;
        case 0x36e5a0u: goto label_36e5a0;
        case 0x36e5a4u: goto label_36e5a4;
        case 0x36e5a8u: goto label_36e5a8;
        case 0x36e5acu: goto label_36e5ac;
        case 0x36e5b0u: goto label_36e5b0;
        case 0x36e5b4u: goto label_36e5b4;
        case 0x36e5b8u: goto label_36e5b8;
        case 0x36e5bcu: goto label_36e5bc;
        case 0x36e5c0u: goto label_36e5c0;
        case 0x36e5c4u: goto label_36e5c4;
        case 0x36e5c8u: goto label_36e5c8;
        case 0x36e5ccu: goto label_36e5cc;
        case 0x36e5d0u: goto label_36e5d0;
        case 0x36e5d4u: goto label_36e5d4;
        case 0x36e5d8u: goto label_36e5d8;
        case 0x36e5dcu: goto label_36e5dc;
        case 0x36e5e0u: goto label_36e5e0;
        case 0x36e5e4u: goto label_36e5e4;
        case 0x36e5e8u: goto label_36e5e8;
        case 0x36e5ecu: goto label_36e5ec;
        case 0x36e5f0u: goto label_36e5f0;
        case 0x36e5f4u: goto label_36e5f4;
        case 0x36e5f8u: goto label_36e5f8;
        case 0x36e5fcu: goto label_36e5fc;
        case 0x36e600u: goto label_36e600;
        case 0x36e604u: goto label_36e604;
        case 0x36e608u: goto label_36e608;
        case 0x36e60cu: goto label_36e60c;
        case 0x36e610u: goto label_36e610;
        case 0x36e614u: goto label_36e614;
        case 0x36e618u: goto label_36e618;
        case 0x36e61cu: goto label_36e61c;
        case 0x36e620u: goto label_36e620;
        case 0x36e624u: goto label_36e624;
        case 0x36e628u: goto label_36e628;
        case 0x36e62cu: goto label_36e62c;
        case 0x36e630u: goto label_36e630;
        case 0x36e634u: goto label_36e634;
        case 0x36e638u: goto label_36e638;
        case 0x36e63cu: goto label_36e63c;
        case 0x36e640u: goto label_36e640;
        case 0x36e644u: goto label_36e644;
        case 0x36e648u: goto label_36e648;
        case 0x36e64cu: goto label_36e64c;
        case 0x36e650u: goto label_36e650;
        case 0x36e654u: goto label_36e654;
        case 0x36e658u: goto label_36e658;
        case 0x36e65cu: goto label_36e65c;
        case 0x36e660u: goto label_36e660;
        case 0x36e664u: goto label_36e664;
        case 0x36e668u: goto label_36e668;
        case 0x36e66cu: goto label_36e66c;
        case 0x36e670u: goto label_36e670;
        case 0x36e674u: goto label_36e674;
        case 0x36e678u: goto label_36e678;
        case 0x36e67cu: goto label_36e67c;
        case 0x36e680u: goto label_36e680;
        case 0x36e684u: goto label_36e684;
        case 0x36e688u: goto label_36e688;
        case 0x36e68cu: goto label_36e68c;
        case 0x36e690u: goto label_36e690;
        case 0x36e694u: goto label_36e694;
        case 0x36e698u: goto label_36e698;
        case 0x36e69cu: goto label_36e69c;
        case 0x36e6a0u: goto label_36e6a0;
        case 0x36e6a4u: goto label_36e6a4;
        case 0x36e6a8u: goto label_36e6a8;
        case 0x36e6acu: goto label_36e6ac;
        case 0x36e6b0u: goto label_36e6b0;
        case 0x36e6b4u: goto label_36e6b4;
        case 0x36e6b8u: goto label_36e6b8;
        case 0x36e6bcu: goto label_36e6bc;
        case 0x36e6c0u: goto label_36e6c0;
        case 0x36e6c4u: goto label_36e6c4;
        case 0x36e6c8u: goto label_36e6c8;
        case 0x36e6ccu: goto label_36e6cc;
        case 0x36e6d0u: goto label_36e6d0;
        case 0x36e6d4u: goto label_36e6d4;
        case 0x36e6d8u: goto label_36e6d8;
        case 0x36e6dcu: goto label_36e6dc;
        case 0x36e6e0u: goto label_36e6e0;
        case 0x36e6e4u: goto label_36e6e4;
        case 0x36e6e8u: goto label_36e6e8;
        case 0x36e6ecu: goto label_36e6ec;
        case 0x36e6f0u: goto label_36e6f0;
        case 0x36e6f4u: goto label_36e6f4;
        case 0x36e6f8u: goto label_36e6f8;
        case 0x36e6fcu: goto label_36e6fc;
        case 0x36e700u: goto label_36e700;
        case 0x36e704u: goto label_36e704;
        case 0x36e708u: goto label_36e708;
        case 0x36e70cu: goto label_36e70c;
        case 0x36e710u: goto label_36e710;
        case 0x36e714u: goto label_36e714;
        case 0x36e718u: goto label_36e718;
        case 0x36e71cu: goto label_36e71c;
        case 0x36e720u: goto label_36e720;
        case 0x36e724u: goto label_36e724;
        case 0x36e728u: goto label_36e728;
        case 0x36e72cu: goto label_36e72c;
        case 0x36e730u: goto label_36e730;
        case 0x36e734u: goto label_36e734;
        case 0x36e738u: goto label_36e738;
        case 0x36e73cu: goto label_36e73c;
        case 0x36e740u: goto label_36e740;
        case 0x36e744u: goto label_36e744;
        case 0x36e748u: goto label_36e748;
        case 0x36e74cu: goto label_36e74c;
        case 0x36e750u: goto label_36e750;
        case 0x36e754u: goto label_36e754;
        case 0x36e758u: goto label_36e758;
        case 0x36e75cu: goto label_36e75c;
        case 0x36e760u: goto label_36e760;
        case 0x36e764u: goto label_36e764;
        case 0x36e768u: goto label_36e768;
        case 0x36e76cu: goto label_36e76c;
        case 0x36e770u: goto label_36e770;
        case 0x36e774u: goto label_36e774;
        case 0x36e778u: goto label_36e778;
        case 0x36e77cu: goto label_36e77c;
        case 0x36e780u: goto label_36e780;
        case 0x36e784u: goto label_36e784;
        case 0x36e788u: goto label_36e788;
        case 0x36e78cu: goto label_36e78c;
        case 0x36e790u: goto label_36e790;
        case 0x36e794u: goto label_36e794;
        case 0x36e798u: goto label_36e798;
        case 0x36e79cu: goto label_36e79c;
        case 0x36e7a0u: goto label_36e7a0;
        case 0x36e7a4u: goto label_36e7a4;
        case 0x36e7a8u: goto label_36e7a8;
        case 0x36e7acu: goto label_36e7ac;
        case 0x36e7b0u: goto label_36e7b0;
        case 0x36e7b4u: goto label_36e7b4;
        case 0x36e7b8u: goto label_36e7b8;
        case 0x36e7bcu: goto label_36e7bc;
        case 0x36e7c0u: goto label_36e7c0;
        case 0x36e7c4u: goto label_36e7c4;
        case 0x36e7c8u: goto label_36e7c8;
        case 0x36e7ccu: goto label_36e7cc;
        case 0x36e7d0u: goto label_36e7d0;
        case 0x36e7d4u: goto label_36e7d4;
        case 0x36e7d8u: goto label_36e7d8;
        case 0x36e7dcu: goto label_36e7dc;
        case 0x36e7e0u: goto label_36e7e0;
        case 0x36e7e4u: goto label_36e7e4;
        case 0x36e7e8u: goto label_36e7e8;
        case 0x36e7ecu: goto label_36e7ec;
        case 0x36e7f0u: goto label_36e7f0;
        case 0x36e7f4u: goto label_36e7f4;
        case 0x36e7f8u: goto label_36e7f8;
        case 0x36e7fcu: goto label_36e7fc;
        case 0x36e800u: goto label_36e800;
        case 0x36e804u: goto label_36e804;
        case 0x36e808u: goto label_36e808;
        case 0x36e80cu: goto label_36e80c;
        case 0x36e810u: goto label_36e810;
        case 0x36e814u: goto label_36e814;
        case 0x36e818u: goto label_36e818;
        case 0x36e81cu: goto label_36e81c;
        case 0x36e820u: goto label_36e820;
        case 0x36e824u: goto label_36e824;
        case 0x36e828u: goto label_36e828;
        case 0x36e82cu: goto label_36e82c;
        case 0x36e830u: goto label_36e830;
        case 0x36e834u: goto label_36e834;
        case 0x36e838u: goto label_36e838;
        case 0x36e83cu: goto label_36e83c;
        case 0x36e840u: goto label_36e840;
        case 0x36e844u: goto label_36e844;
        case 0x36e848u: goto label_36e848;
        case 0x36e84cu: goto label_36e84c;
        case 0x36e850u: goto label_36e850;
        case 0x36e854u: goto label_36e854;
        case 0x36e858u: goto label_36e858;
        case 0x36e85cu: goto label_36e85c;
        case 0x36e860u: goto label_36e860;
        case 0x36e864u: goto label_36e864;
        case 0x36e868u: goto label_36e868;
        case 0x36e86cu: goto label_36e86c;
        case 0x36e870u: goto label_36e870;
        case 0x36e874u: goto label_36e874;
        case 0x36e878u: goto label_36e878;
        case 0x36e87cu: goto label_36e87c;
        case 0x36e880u: goto label_36e880;
        case 0x36e884u: goto label_36e884;
        case 0x36e888u: goto label_36e888;
        case 0x36e88cu: goto label_36e88c;
        case 0x36e890u: goto label_36e890;
        case 0x36e894u: goto label_36e894;
        case 0x36e898u: goto label_36e898;
        case 0x36e89cu: goto label_36e89c;
        case 0x36e8a0u: goto label_36e8a0;
        case 0x36e8a4u: goto label_36e8a4;
        case 0x36e8a8u: goto label_36e8a8;
        case 0x36e8acu: goto label_36e8ac;
        case 0x36e8b0u: goto label_36e8b0;
        case 0x36e8b4u: goto label_36e8b4;
        case 0x36e8b8u: goto label_36e8b8;
        case 0x36e8bcu: goto label_36e8bc;
        case 0x36e8c0u: goto label_36e8c0;
        case 0x36e8c4u: goto label_36e8c4;
        case 0x36e8c8u: goto label_36e8c8;
        case 0x36e8ccu: goto label_36e8cc;
        case 0x36e8d0u: goto label_36e8d0;
        case 0x36e8d4u: goto label_36e8d4;
        case 0x36e8d8u: goto label_36e8d8;
        case 0x36e8dcu: goto label_36e8dc;
        case 0x36e8e0u: goto label_36e8e0;
        case 0x36e8e4u: goto label_36e8e4;
        case 0x36e8e8u: goto label_36e8e8;
        case 0x36e8ecu: goto label_36e8ec;
        case 0x36e8f0u: goto label_36e8f0;
        case 0x36e8f4u: goto label_36e8f4;
        case 0x36e8f8u: goto label_36e8f8;
        case 0x36e8fcu: goto label_36e8fc;
        case 0x36e900u: goto label_36e900;
        case 0x36e904u: goto label_36e904;
        case 0x36e908u: goto label_36e908;
        case 0x36e90cu: goto label_36e90c;
        case 0x36e910u: goto label_36e910;
        case 0x36e914u: goto label_36e914;
        case 0x36e918u: goto label_36e918;
        case 0x36e91cu: goto label_36e91c;
        case 0x36e920u: goto label_36e920;
        case 0x36e924u: goto label_36e924;
        case 0x36e928u: goto label_36e928;
        case 0x36e92cu: goto label_36e92c;
        case 0x36e930u: goto label_36e930;
        case 0x36e934u: goto label_36e934;
        case 0x36e938u: goto label_36e938;
        case 0x36e93cu: goto label_36e93c;
        case 0x36e940u: goto label_36e940;
        case 0x36e944u: goto label_36e944;
        case 0x36e948u: goto label_36e948;
        case 0x36e94cu: goto label_36e94c;
        case 0x36e950u: goto label_36e950;
        case 0x36e954u: goto label_36e954;
        case 0x36e958u: goto label_36e958;
        case 0x36e95cu: goto label_36e95c;
        case 0x36e960u: goto label_36e960;
        case 0x36e964u: goto label_36e964;
        case 0x36e968u: goto label_36e968;
        case 0x36e96cu: goto label_36e96c;
        case 0x36e970u: goto label_36e970;
        case 0x36e974u: goto label_36e974;
        case 0x36e978u: goto label_36e978;
        case 0x36e97cu: goto label_36e97c;
        case 0x36e980u: goto label_36e980;
        case 0x36e984u: goto label_36e984;
        case 0x36e988u: goto label_36e988;
        case 0x36e98cu: goto label_36e98c;
        case 0x36e990u: goto label_36e990;
        case 0x36e994u: goto label_36e994;
        case 0x36e998u: goto label_36e998;
        case 0x36e99cu: goto label_36e99c;
        case 0x36e9a0u: goto label_36e9a0;
        case 0x36e9a4u: goto label_36e9a4;
        case 0x36e9a8u: goto label_36e9a8;
        case 0x36e9acu: goto label_36e9ac;
        case 0x36e9b0u: goto label_36e9b0;
        case 0x36e9b4u: goto label_36e9b4;
        case 0x36e9b8u: goto label_36e9b8;
        case 0x36e9bcu: goto label_36e9bc;
        case 0x36e9c0u: goto label_36e9c0;
        case 0x36e9c4u: goto label_36e9c4;
        case 0x36e9c8u: goto label_36e9c8;
        case 0x36e9ccu: goto label_36e9cc;
        case 0x36e9d0u: goto label_36e9d0;
        case 0x36e9d4u: goto label_36e9d4;
        case 0x36e9d8u: goto label_36e9d8;
        case 0x36e9dcu: goto label_36e9dc;
        case 0x36e9e0u: goto label_36e9e0;
        case 0x36e9e4u: goto label_36e9e4;
        case 0x36e9e8u: goto label_36e9e8;
        case 0x36e9ecu: goto label_36e9ec;
        case 0x36e9f0u: goto label_36e9f0;
        case 0x36e9f4u: goto label_36e9f4;
        case 0x36e9f8u: goto label_36e9f8;
        case 0x36e9fcu: goto label_36e9fc;
        case 0x36ea00u: goto label_36ea00;
        case 0x36ea04u: goto label_36ea04;
        case 0x36ea08u: goto label_36ea08;
        case 0x36ea0cu: goto label_36ea0c;
        case 0x36ea10u: goto label_36ea10;
        case 0x36ea14u: goto label_36ea14;
        case 0x36ea18u: goto label_36ea18;
        case 0x36ea1cu: goto label_36ea1c;
        case 0x36ea20u: goto label_36ea20;
        case 0x36ea24u: goto label_36ea24;
        case 0x36ea28u: goto label_36ea28;
        case 0x36ea2cu: goto label_36ea2c;
        case 0x36ea30u: goto label_36ea30;
        case 0x36ea34u: goto label_36ea34;
        case 0x36ea38u: goto label_36ea38;
        case 0x36ea3cu: goto label_36ea3c;
        case 0x36ea40u: goto label_36ea40;
        case 0x36ea44u: goto label_36ea44;
        case 0x36ea48u: goto label_36ea48;
        case 0x36ea4cu: goto label_36ea4c;
        case 0x36ea50u: goto label_36ea50;
        case 0x36ea54u: goto label_36ea54;
        case 0x36ea58u: goto label_36ea58;
        case 0x36ea5cu: goto label_36ea5c;
        case 0x36ea60u: goto label_36ea60;
        case 0x36ea64u: goto label_36ea64;
        case 0x36ea68u: goto label_36ea68;
        case 0x36ea6cu: goto label_36ea6c;
        case 0x36ea70u: goto label_36ea70;
        case 0x36ea74u: goto label_36ea74;
        case 0x36ea78u: goto label_36ea78;
        case 0x36ea7cu: goto label_36ea7c;
        case 0x36ea80u: goto label_36ea80;
        case 0x36ea84u: goto label_36ea84;
        case 0x36ea88u: goto label_36ea88;
        case 0x36ea8cu: goto label_36ea8c;
        case 0x36ea90u: goto label_36ea90;
        case 0x36ea94u: goto label_36ea94;
        case 0x36ea98u: goto label_36ea98;
        case 0x36ea9cu: goto label_36ea9c;
        case 0x36eaa0u: goto label_36eaa0;
        case 0x36eaa4u: goto label_36eaa4;
        case 0x36eaa8u: goto label_36eaa8;
        case 0x36eaacu: goto label_36eaac;
        case 0x36eab0u: goto label_36eab0;
        case 0x36eab4u: goto label_36eab4;
        case 0x36eab8u: goto label_36eab8;
        case 0x36eabcu: goto label_36eabc;
        case 0x36eac0u: goto label_36eac0;
        case 0x36eac4u: goto label_36eac4;
        case 0x36eac8u: goto label_36eac8;
        case 0x36eaccu: goto label_36eacc;
        case 0x36ead0u: goto label_36ead0;
        case 0x36ead4u: goto label_36ead4;
        case 0x36ead8u: goto label_36ead8;
        case 0x36eadcu: goto label_36eadc;
        case 0x36eae0u: goto label_36eae0;
        case 0x36eae4u: goto label_36eae4;
        case 0x36eae8u: goto label_36eae8;
        case 0x36eaecu: goto label_36eaec;
        case 0x36eaf0u: goto label_36eaf0;
        case 0x36eaf4u: goto label_36eaf4;
        case 0x36eaf8u: goto label_36eaf8;
        case 0x36eafcu: goto label_36eafc;
        case 0x36eb00u: goto label_36eb00;
        case 0x36eb04u: goto label_36eb04;
        case 0x36eb08u: goto label_36eb08;
        case 0x36eb0cu: goto label_36eb0c;
        case 0x36eb10u: goto label_36eb10;
        case 0x36eb14u: goto label_36eb14;
        case 0x36eb18u: goto label_36eb18;
        case 0x36eb1cu: goto label_36eb1c;
        case 0x36eb20u: goto label_36eb20;
        case 0x36eb24u: goto label_36eb24;
        case 0x36eb28u: goto label_36eb28;
        case 0x36eb2cu: goto label_36eb2c;
        case 0x36eb30u: goto label_36eb30;
        case 0x36eb34u: goto label_36eb34;
        case 0x36eb38u: goto label_36eb38;
        case 0x36eb3cu: goto label_36eb3c;
        case 0x36eb40u: goto label_36eb40;
        case 0x36eb44u: goto label_36eb44;
        case 0x36eb48u: goto label_36eb48;
        case 0x36eb4cu: goto label_36eb4c;
        case 0x36eb50u: goto label_36eb50;
        case 0x36eb54u: goto label_36eb54;
        case 0x36eb58u: goto label_36eb58;
        case 0x36eb5cu: goto label_36eb5c;
        case 0x36eb60u: goto label_36eb60;
        case 0x36eb64u: goto label_36eb64;
        case 0x36eb68u: goto label_36eb68;
        case 0x36eb6cu: goto label_36eb6c;
        case 0x36eb70u: goto label_36eb70;
        case 0x36eb74u: goto label_36eb74;
        case 0x36eb78u: goto label_36eb78;
        case 0x36eb7cu: goto label_36eb7c;
        case 0x36eb80u: goto label_36eb80;
        case 0x36eb84u: goto label_36eb84;
        case 0x36eb88u: goto label_36eb88;
        case 0x36eb8cu: goto label_36eb8c;
        case 0x36eb90u: goto label_36eb90;
        case 0x36eb94u: goto label_36eb94;
        case 0x36eb98u: goto label_36eb98;
        case 0x36eb9cu: goto label_36eb9c;
        case 0x36eba0u: goto label_36eba0;
        case 0x36eba4u: goto label_36eba4;
        case 0x36eba8u: goto label_36eba8;
        case 0x36ebacu: goto label_36ebac;
        case 0x36ebb0u: goto label_36ebb0;
        case 0x36ebb4u: goto label_36ebb4;
        case 0x36ebb8u: goto label_36ebb8;
        case 0x36ebbcu: goto label_36ebbc;
        case 0x36ebc0u: goto label_36ebc0;
        case 0x36ebc4u: goto label_36ebc4;
        case 0x36ebc8u: goto label_36ebc8;
        case 0x36ebccu: goto label_36ebcc;
        case 0x36ebd0u: goto label_36ebd0;
        case 0x36ebd4u: goto label_36ebd4;
        case 0x36ebd8u: goto label_36ebd8;
        case 0x36ebdcu: goto label_36ebdc;
        case 0x36ebe0u: goto label_36ebe0;
        case 0x36ebe4u: goto label_36ebe4;
        case 0x36ebe8u: goto label_36ebe8;
        case 0x36ebecu: goto label_36ebec;
        case 0x36ebf0u: goto label_36ebf0;
        case 0x36ebf4u: goto label_36ebf4;
        case 0x36ebf8u: goto label_36ebf8;
        case 0x36ebfcu: goto label_36ebfc;
        case 0x36ec00u: goto label_36ec00;
        case 0x36ec04u: goto label_36ec04;
        case 0x36ec08u: goto label_36ec08;
        case 0x36ec0cu: goto label_36ec0c;
        case 0x36ec10u: goto label_36ec10;
        case 0x36ec14u: goto label_36ec14;
        case 0x36ec18u: goto label_36ec18;
        case 0x36ec1cu: goto label_36ec1c;
        case 0x36ec20u: goto label_36ec20;
        case 0x36ec24u: goto label_36ec24;
        case 0x36ec28u: goto label_36ec28;
        case 0x36ec2cu: goto label_36ec2c;
        case 0x36ec30u: goto label_36ec30;
        case 0x36ec34u: goto label_36ec34;
        case 0x36ec38u: goto label_36ec38;
        case 0x36ec3cu: goto label_36ec3c;
        case 0x36ec40u: goto label_36ec40;
        case 0x36ec44u: goto label_36ec44;
        case 0x36ec48u: goto label_36ec48;
        case 0x36ec4cu: goto label_36ec4c;
        case 0x36ec50u: goto label_36ec50;
        case 0x36ec54u: goto label_36ec54;
        case 0x36ec58u: goto label_36ec58;
        case 0x36ec5cu: goto label_36ec5c;
        case 0x36ec60u: goto label_36ec60;
        case 0x36ec64u: goto label_36ec64;
        case 0x36ec68u: goto label_36ec68;
        case 0x36ec6cu: goto label_36ec6c;
        case 0x36ec70u: goto label_36ec70;
        case 0x36ec74u: goto label_36ec74;
        case 0x36ec78u: goto label_36ec78;
        case 0x36ec7cu: goto label_36ec7c;
        case 0x36ec80u: goto label_36ec80;
        case 0x36ec84u: goto label_36ec84;
        case 0x36ec88u: goto label_36ec88;
        case 0x36ec8cu: goto label_36ec8c;
        case 0x36ec90u: goto label_36ec90;
        case 0x36ec94u: goto label_36ec94;
        case 0x36ec98u: goto label_36ec98;
        case 0x36ec9cu: goto label_36ec9c;
        case 0x36eca0u: goto label_36eca0;
        case 0x36eca4u: goto label_36eca4;
        case 0x36eca8u: goto label_36eca8;
        case 0x36ecacu: goto label_36ecac;
        case 0x36ecb0u: goto label_36ecb0;
        case 0x36ecb4u: goto label_36ecb4;
        case 0x36ecb8u: goto label_36ecb8;
        case 0x36ecbcu: goto label_36ecbc;
        case 0x36ecc0u: goto label_36ecc0;
        case 0x36ecc4u: goto label_36ecc4;
        case 0x36ecc8u: goto label_36ecc8;
        case 0x36ecccu: goto label_36eccc;
        case 0x36ecd0u: goto label_36ecd0;
        case 0x36ecd4u: goto label_36ecd4;
        case 0x36ecd8u: goto label_36ecd8;
        case 0x36ecdcu: goto label_36ecdc;
        case 0x36ece0u: goto label_36ece0;
        case 0x36ece4u: goto label_36ece4;
        case 0x36ece8u: goto label_36ece8;
        case 0x36ececu: goto label_36ecec;
        case 0x36ecf0u: goto label_36ecf0;
        case 0x36ecf4u: goto label_36ecf4;
        case 0x36ecf8u: goto label_36ecf8;
        case 0x36ecfcu: goto label_36ecfc;
        case 0x36ed00u: goto label_36ed00;
        case 0x36ed04u: goto label_36ed04;
        case 0x36ed08u: goto label_36ed08;
        case 0x36ed0cu: goto label_36ed0c;
        case 0x36ed10u: goto label_36ed10;
        case 0x36ed14u: goto label_36ed14;
        case 0x36ed18u: goto label_36ed18;
        case 0x36ed1cu: goto label_36ed1c;
        case 0x36ed20u: goto label_36ed20;
        case 0x36ed24u: goto label_36ed24;
        case 0x36ed28u: goto label_36ed28;
        case 0x36ed2cu: goto label_36ed2c;
        case 0x36ed30u: goto label_36ed30;
        case 0x36ed34u: goto label_36ed34;
        case 0x36ed38u: goto label_36ed38;
        case 0x36ed3cu: goto label_36ed3c;
        case 0x36ed40u: goto label_36ed40;
        case 0x36ed44u: goto label_36ed44;
        case 0x36ed48u: goto label_36ed48;
        case 0x36ed4cu: goto label_36ed4c;
        case 0x36ed50u: goto label_36ed50;
        case 0x36ed54u: goto label_36ed54;
        case 0x36ed58u: goto label_36ed58;
        case 0x36ed5cu: goto label_36ed5c;
        case 0x36ed60u: goto label_36ed60;
        case 0x36ed64u: goto label_36ed64;
        case 0x36ed68u: goto label_36ed68;
        case 0x36ed6cu: goto label_36ed6c;
        case 0x36ed70u: goto label_36ed70;
        case 0x36ed74u: goto label_36ed74;
        case 0x36ed78u: goto label_36ed78;
        case 0x36ed7cu: goto label_36ed7c;
        case 0x36ed80u: goto label_36ed80;
        case 0x36ed84u: goto label_36ed84;
        case 0x36ed88u: goto label_36ed88;
        case 0x36ed8cu: goto label_36ed8c;
        case 0x36ed90u: goto label_36ed90;
        case 0x36ed94u: goto label_36ed94;
        case 0x36ed98u: goto label_36ed98;
        case 0x36ed9cu: goto label_36ed9c;
        case 0x36eda0u: goto label_36eda0;
        case 0x36eda4u: goto label_36eda4;
        case 0x36eda8u: goto label_36eda8;
        case 0x36edacu: goto label_36edac;
        case 0x36edb0u: goto label_36edb0;
        case 0x36edb4u: goto label_36edb4;
        case 0x36edb8u: goto label_36edb8;
        case 0x36edbcu: goto label_36edbc;
        case 0x36edc0u: goto label_36edc0;
        case 0x36edc4u: goto label_36edc4;
        case 0x36edc8u: goto label_36edc8;
        case 0x36edccu: goto label_36edcc;
        case 0x36edd0u: goto label_36edd0;
        case 0x36edd4u: goto label_36edd4;
        case 0x36edd8u: goto label_36edd8;
        case 0x36eddcu: goto label_36eddc;
        case 0x36ede0u: goto label_36ede0;
        case 0x36ede4u: goto label_36ede4;
        case 0x36ede8u: goto label_36ede8;
        case 0x36edecu: goto label_36edec;
        case 0x36edf0u: goto label_36edf0;
        case 0x36edf4u: goto label_36edf4;
        case 0x36edf8u: goto label_36edf8;
        case 0x36edfcu: goto label_36edfc;
        case 0x36ee00u: goto label_36ee00;
        case 0x36ee04u: goto label_36ee04;
        case 0x36ee08u: goto label_36ee08;
        case 0x36ee0cu: goto label_36ee0c;
        case 0x36ee10u: goto label_36ee10;
        case 0x36ee14u: goto label_36ee14;
        case 0x36ee18u: goto label_36ee18;
        case 0x36ee1cu: goto label_36ee1c;
        case 0x36ee20u: goto label_36ee20;
        case 0x36ee24u: goto label_36ee24;
        case 0x36ee28u: goto label_36ee28;
        case 0x36ee2cu: goto label_36ee2c;
        case 0x36ee30u: goto label_36ee30;
        case 0x36ee34u: goto label_36ee34;
        case 0x36ee38u: goto label_36ee38;
        case 0x36ee3cu: goto label_36ee3c;
        case 0x36ee40u: goto label_36ee40;
        case 0x36ee44u: goto label_36ee44;
        case 0x36ee48u: goto label_36ee48;
        case 0x36ee4cu: goto label_36ee4c;
        case 0x36ee50u: goto label_36ee50;
        case 0x36ee54u: goto label_36ee54;
        case 0x36ee58u: goto label_36ee58;
        case 0x36ee5cu: goto label_36ee5c;
        case 0x36ee60u: goto label_36ee60;
        case 0x36ee64u: goto label_36ee64;
        case 0x36ee68u: goto label_36ee68;
        case 0x36ee6cu: goto label_36ee6c;
        case 0x36ee70u: goto label_36ee70;
        case 0x36ee74u: goto label_36ee74;
        case 0x36ee78u: goto label_36ee78;
        case 0x36ee7cu: goto label_36ee7c;
        case 0x36ee80u: goto label_36ee80;
        case 0x36ee84u: goto label_36ee84;
        case 0x36ee88u: goto label_36ee88;
        case 0x36ee8cu: goto label_36ee8c;
        case 0x36ee90u: goto label_36ee90;
        case 0x36ee94u: goto label_36ee94;
        case 0x36ee98u: goto label_36ee98;
        case 0x36ee9cu: goto label_36ee9c;
        case 0x36eea0u: goto label_36eea0;
        case 0x36eea4u: goto label_36eea4;
        case 0x36eea8u: goto label_36eea8;
        case 0x36eeacu: goto label_36eeac;
        case 0x36eeb0u: goto label_36eeb0;
        case 0x36eeb4u: goto label_36eeb4;
        case 0x36eeb8u: goto label_36eeb8;
        case 0x36eebcu: goto label_36eebc;
        case 0x36eec0u: goto label_36eec0;
        case 0x36eec4u: goto label_36eec4;
        case 0x36eec8u: goto label_36eec8;
        case 0x36eeccu: goto label_36eecc;
        case 0x36eed0u: goto label_36eed0;
        case 0x36eed4u: goto label_36eed4;
        case 0x36eed8u: goto label_36eed8;
        case 0x36eedcu: goto label_36eedc;
        case 0x36eee0u: goto label_36eee0;
        case 0x36eee4u: goto label_36eee4;
        case 0x36eee8u: goto label_36eee8;
        case 0x36eeecu: goto label_36eeec;
        case 0x36eef0u: goto label_36eef0;
        case 0x36eef4u: goto label_36eef4;
        case 0x36eef8u: goto label_36eef8;
        case 0x36eefcu: goto label_36eefc;
        case 0x36ef00u: goto label_36ef00;
        case 0x36ef04u: goto label_36ef04;
        case 0x36ef08u: goto label_36ef08;
        case 0x36ef0cu: goto label_36ef0c;
        case 0x36ef10u: goto label_36ef10;
        case 0x36ef14u: goto label_36ef14;
        case 0x36ef18u: goto label_36ef18;
        case 0x36ef1cu: goto label_36ef1c;
        case 0x36ef20u: goto label_36ef20;
        case 0x36ef24u: goto label_36ef24;
        case 0x36ef28u: goto label_36ef28;
        case 0x36ef2cu: goto label_36ef2c;
        case 0x36ef30u: goto label_36ef30;
        case 0x36ef34u: goto label_36ef34;
        case 0x36ef38u: goto label_36ef38;
        case 0x36ef3cu: goto label_36ef3c;
        case 0x36ef40u: goto label_36ef40;
        case 0x36ef44u: goto label_36ef44;
        case 0x36ef48u: goto label_36ef48;
        case 0x36ef4cu: goto label_36ef4c;
        case 0x36ef50u: goto label_36ef50;
        case 0x36ef54u: goto label_36ef54;
        case 0x36ef58u: goto label_36ef58;
        case 0x36ef5cu: goto label_36ef5c;
        case 0x36ef60u: goto label_36ef60;
        case 0x36ef64u: goto label_36ef64;
        case 0x36ef68u: goto label_36ef68;
        case 0x36ef6cu: goto label_36ef6c;
        case 0x36ef70u: goto label_36ef70;
        case 0x36ef74u: goto label_36ef74;
        case 0x36ef78u: goto label_36ef78;
        case 0x36ef7cu: goto label_36ef7c;
        case 0x36ef80u: goto label_36ef80;
        case 0x36ef84u: goto label_36ef84;
        case 0x36ef88u: goto label_36ef88;
        case 0x36ef8cu: goto label_36ef8c;
        case 0x36ef90u: goto label_36ef90;
        case 0x36ef94u: goto label_36ef94;
        case 0x36ef98u: goto label_36ef98;
        case 0x36ef9cu: goto label_36ef9c;
        case 0x36efa0u: goto label_36efa0;
        case 0x36efa4u: goto label_36efa4;
        case 0x36efa8u: goto label_36efa8;
        case 0x36efacu: goto label_36efac;
        case 0x36efb0u: goto label_36efb0;
        case 0x36efb4u: goto label_36efb4;
        case 0x36efb8u: goto label_36efb8;
        case 0x36efbcu: goto label_36efbc;
        case 0x36efc0u: goto label_36efc0;
        case 0x36efc4u: goto label_36efc4;
        case 0x36efc8u: goto label_36efc8;
        case 0x36efccu: goto label_36efcc;
        case 0x36efd0u: goto label_36efd0;
        case 0x36efd4u: goto label_36efd4;
        case 0x36efd8u: goto label_36efd8;
        case 0x36efdcu: goto label_36efdc;
        case 0x36efe0u: goto label_36efe0;
        case 0x36efe4u: goto label_36efe4;
        case 0x36efe8u: goto label_36efe8;
        case 0x36efecu: goto label_36efec;
        case 0x36eff0u: goto label_36eff0;
        case 0x36eff4u: goto label_36eff4;
        case 0x36eff8u: goto label_36eff8;
        case 0x36effcu: goto label_36effc;
        case 0x36f000u: goto label_36f000;
        case 0x36f004u: goto label_36f004;
        case 0x36f008u: goto label_36f008;
        case 0x36f00cu: goto label_36f00c;
        case 0x36f010u: goto label_36f010;
        case 0x36f014u: goto label_36f014;
        case 0x36f018u: goto label_36f018;
        case 0x36f01cu: goto label_36f01c;
        case 0x36f020u: goto label_36f020;
        case 0x36f024u: goto label_36f024;
        case 0x36f028u: goto label_36f028;
        case 0x36f02cu: goto label_36f02c;
        case 0x36f030u: goto label_36f030;
        case 0x36f034u: goto label_36f034;
        case 0x36f038u: goto label_36f038;
        case 0x36f03cu: goto label_36f03c;
        case 0x36f040u: goto label_36f040;
        case 0x36f044u: goto label_36f044;
        case 0x36f048u: goto label_36f048;
        case 0x36f04cu: goto label_36f04c;
        case 0x36f050u: goto label_36f050;
        case 0x36f054u: goto label_36f054;
        case 0x36f058u: goto label_36f058;
        case 0x36f05cu: goto label_36f05c;
        case 0x36f060u: goto label_36f060;
        case 0x36f064u: goto label_36f064;
        case 0x36f068u: goto label_36f068;
        case 0x36f06cu: goto label_36f06c;
        case 0x36f070u: goto label_36f070;
        case 0x36f074u: goto label_36f074;
        case 0x36f078u: goto label_36f078;
        case 0x36f07cu: goto label_36f07c;
        case 0x36f080u: goto label_36f080;
        case 0x36f084u: goto label_36f084;
        case 0x36f088u: goto label_36f088;
        case 0x36f08cu: goto label_36f08c;
        case 0x36f090u: goto label_36f090;
        case 0x36f094u: goto label_36f094;
        case 0x36f098u: goto label_36f098;
        case 0x36f09cu: goto label_36f09c;
        case 0x36f0a0u: goto label_36f0a0;
        case 0x36f0a4u: goto label_36f0a4;
        case 0x36f0a8u: goto label_36f0a8;
        case 0x36f0acu: goto label_36f0ac;
        case 0x36f0b0u: goto label_36f0b0;
        case 0x36f0b4u: goto label_36f0b4;
        case 0x36f0b8u: goto label_36f0b8;
        case 0x36f0bcu: goto label_36f0bc;
        case 0x36f0c0u: goto label_36f0c0;
        case 0x36f0c4u: goto label_36f0c4;
        case 0x36f0c8u: goto label_36f0c8;
        case 0x36f0ccu: goto label_36f0cc;
        case 0x36f0d0u: goto label_36f0d0;
        case 0x36f0d4u: goto label_36f0d4;
        case 0x36f0d8u: goto label_36f0d8;
        case 0x36f0dcu: goto label_36f0dc;
        case 0x36f0e0u: goto label_36f0e0;
        case 0x36f0e4u: goto label_36f0e4;
        case 0x36f0e8u: goto label_36f0e8;
        case 0x36f0ecu: goto label_36f0ec;
        case 0x36f0f0u: goto label_36f0f0;
        case 0x36f0f4u: goto label_36f0f4;
        case 0x36f0f8u: goto label_36f0f8;
        case 0x36f0fcu: goto label_36f0fc;
        case 0x36f100u: goto label_36f100;
        case 0x36f104u: goto label_36f104;
        case 0x36f108u: goto label_36f108;
        case 0x36f10cu: goto label_36f10c;
        case 0x36f110u: goto label_36f110;
        case 0x36f114u: goto label_36f114;
        case 0x36f118u: goto label_36f118;
        case 0x36f11cu: goto label_36f11c;
        case 0x36f120u: goto label_36f120;
        case 0x36f124u: goto label_36f124;
        case 0x36f128u: goto label_36f128;
        case 0x36f12cu: goto label_36f12c;
        case 0x36f130u: goto label_36f130;
        case 0x36f134u: goto label_36f134;
        case 0x36f138u: goto label_36f138;
        case 0x36f13cu: goto label_36f13c;
        case 0x36f140u: goto label_36f140;
        case 0x36f144u: goto label_36f144;
        case 0x36f148u: goto label_36f148;
        case 0x36f14cu: goto label_36f14c;
        case 0x36f150u: goto label_36f150;
        case 0x36f154u: goto label_36f154;
        case 0x36f158u: goto label_36f158;
        case 0x36f15cu: goto label_36f15c;
        case 0x36f160u: goto label_36f160;
        case 0x36f164u: goto label_36f164;
        case 0x36f168u: goto label_36f168;
        case 0x36f16cu: goto label_36f16c;
        case 0x36f170u: goto label_36f170;
        case 0x36f174u: goto label_36f174;
        case 0x36f178u: goto label_36f178;
        case 0x36f17cu: goto label_36f17c;
        case 0x36f180u: goto label_36f180;
        case 0x36f184u: goto label_36f184;
        case 0x36f188u: goto label_36f188;
        case 0x36f18cu: goto label_36f18c;
        case 0x36f190u: goto label_36f190;
        case 0x36f194u: goto label_36f194;
        case 0x36f198u: goto label_36f198;
        case 0x36f19cu: goto label_36f19c;
        case 0x36f1a0u: goto label_36f1a0;
        case 0x36f1a4u: goto label_36f1a4;
        case 0x36f1a8u: goto label_36f1a8;
        case 0x36f1acu: goto label_36f1ac;
        case 0x36f1b0u: goto label_36f1b0;
        case 0x36f1b4u: goto label_36f1b4;
        case 0x36f1b8u: goto label_36f1b8;
        case 0x36f1bcu: goto label_36f1bc;
        case 0x36f1c0u: goto label_36f1c0;
        case 0x36f1c4u: goto label_36f1c4;
        case 0x36f1c8u: goto label_36f1c8;
        case 0x36f1ccu: goto label_36f1cc;
        case 0x36f1d0u: goto label_36f1d0;
        case 0x36f1d4u: goto label_36f1d4;
        case 0x36f1d8u: goto label_36f1d8;
        case 0x36f1dcu: goto label_36f1dc;
        case 0x36f1e0u: goto label_36f1e0;
        case 0x36f1e4u: goto label_36f1e4;
        case 0x36f1e8u: goto label_36f1e8;
        case 0x36f1ecu: goto label_36f1ec;
        case 0x36f1f0u: goto label_36f1f0;
        case 0x36f1f4u: goto label_36f1f4;
        case 0x36f1f8u: goto label_36f1f8;
        case 0x36f1fcu: goto label_36f1fc;
        case 0x36f200u: goto label_36f200;
        case 0x36f204u: goto label_36f204;
        case 0x36f208u: goto label_36f208;
        case 0x36f20cu: goto label_36f20c;
        case 0x36f210u: goto label_36f210;
        case 0x36f214u: goto label_36f214;
        case 0x36f218u: goto label_36f218;
        case 0x36f21cu: goto label_36f21c;
        case 0x36f220u: goto label_36f220;
        case 0x36f224u: goto label_36f224;
        case 0x36f228u: goto label_36f228;
        case 0x36f22cu: goto label_36f22c;
        case 0x36f230u: goto label_36f230;
        case 0x36f234u: goto label_36f234;
        case 0x36f238u: goto label_36f238;
        case 0x36f23cu: goto label_36f23c;
        case 0x36f240u: goto label_36f240;
        case 0x36f244u: goto label_36f244;
        case 0x36f248u: goto label_36f248;
        case 0x36f24cu: goto label_36f24c;
        case 0x36f250u: goto label_36f250;
        case 0x36f254u: goto label_36f254;
        case 0x36f258u: goto label_36f258;
        case 0x36f25cu: goto label_36f25c;
        case 0x36f260u: goto label_36f260;
        case 0x36f264u: goto label_36f264;
        case 0x36f268u: goto label_36f268;
        case 0x36f26cu: goto label_36f26c;
        case 0x36f270u: goto label_36f270;
        case 0x36f274u: goto label_36f274;
        case 0x36f278u: goto label_36f278;
        case 0x36f27cu: goto label_36f27c;
        case 0x36f280u: goto label_36f280;
        case 0x36f284u: goto label_36f284;
        case 0x36f288u: goto label_36f288;
        case 0x36f28cu: goto label_36f28c;
        case 0x36f290u: goto label_36f290;
        case 0x36f294u: goto label_36f294;
        case 0x36f298u: goto label_36f298;
        case 0x36f29cu: goto label_36f29c;
        case 0x36f2a0u: goto label_36f2a0;
        case 0x36f2a4u: goto label_36f2a4;
        case 0x36f2a8u: goto label_36f2a8;
        case 0x36f2acu: goto label_36f2ac;
        case 0x36f2b0u: goto label_36f2b0;
        case 0x36f2b4u: goto label_36f2b4;
        case 0x36f2b8u: goto label_36f2b8;
        case 0x36f2bcu: goto label_36f2bc;
        case 0x36f2c0u: goto label_36f2c0;
        case 0x36f2c4u: goto label_36f2c4;
        case 0x36f2c8u: goto label_36f2c8;
        case 0x36f2ccu: goto label_36f2cc;
        case 0x36f2d0u: goto label_36f2d0;
        case 0x36f2d4u: goto label_36f2d4;
        case 0x36f2d8u: goto label_36f2d8;
        case 0x36f2dcu: goto label_36f2dc;
        case 0x36f2e0u: goto label_36f2e0;
        case 0x36f2e4u: goto label_36f2e4;
        case 0x36f2e8u: goto label_36f2e8;
        case 0x36f2ecu: goto label_36f2ec;
        default: break;
    }

    ctx->pc = 0x36e3a0u;

label_36e3a0:
    // 0x36e3a0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x36e3a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_36e3a4:
    // 0x36e3a4: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x36e3a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_36e3a8:
    // 0x36e3a8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x36e3a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_36e3ac:
    // 0x36e3ac: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x36e3acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_36e3b0:
    // 0x36e3b0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x36e3b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_36e3b4:
    // 0x36e3b4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x36e3b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_36e3b8:
    // 0x36e3b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x36e3b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_36e3bc:
    // 0x36e3bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x36e3bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_36e3c0:
    // 0x36e3c0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x36e3c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_36e3c4:
    // 0x36e3c4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x36e3c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_36e3c8:
    // 0x36e3c8: 0xc10ca68  jal         func_4329A0
label_36e3cc:
    if (ctx->pc == 0x36E3CCu) {
        ctx->pc = 0x36E3CCu;
            // 0x36e3cc: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x36E3D0u;
        goto label_36e3d0;
    }
    ctx->pc = 0x36E3C8u;
    SET_GPR_U32(ctx, 31, 0x36E3D0u);
    ctx->pc = 0x36E3CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36E3C8u;
            // 0x36e3cc: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36E3D0u; }
        if (ctx->pc != 0x36E3D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36E3D0u; }
        if (ctx->pc != 0x36E3D0u) { return; }
    }
    ctx->pc = 0x36E3D0u;
label_36e3d0:
    // 0x36e3d0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x36e3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_36e3d4:
    // 0x36e3d4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x36e3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_36e3d8:
    // 0x36e3d8: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x36e3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
label_36e3dc:
    // 0x36e3dc: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x36e3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_36e3e0:
    // 0x36e3e0: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x36e3e0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_36e3e4:
    // 0x36e3e4: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x36e3e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
label_36e3e8:
    // 0x36e3e8: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x36e3e8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_36e3ec:
    // 0x36e3ec: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x36e3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_36e3f0:
    // 0x36e3f0: 0xae630054  sw          $v1, 0x54($s3)
    ctx->pc = 0x36e3f0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
label_36e3f4:
    // 0x36e3f4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x36e3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_36e3f8:
    // 0x36e3f8: 0xae700058  sw          $s0, 0x58($s3)
    ctx->pc = 0x36e3f8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 16));
label_36e3fc:
    // 0x36e3fc: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x36e3fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_36e400:
    // 0x36e400: 0xae60005c  sw          $zero, 0x5C($s3)
    ctx->pc = 0x36e400u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
label_36e404:
    // 0x36e404: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x36e404u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
label_36e408:
    // 0x36e408: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x36e408u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
label_36e40c:
    // 0x36e40c: 0x8c430e60  lw          $v1, 0xE60($v0)
    ctx->pc = 0x36e40cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3680)));
label_36e410:
    // 0x36e410: 0xafb30058  sw          $s3, 0x58($sp)
    ctx->pc = 0x36e410u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 19));
label_36e414:
    // 0x36e414: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x36e414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_36e418:
    // 0x36e418: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x36e418u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_36e41c:
    // 0x36e41c: 0xc0582cc  jal         func_160B30
label_36e420:
    if (ctx->pc == 0x36E420u) {
        ctx->pc = 0x36E420u;
            // 0x36e420: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->pc = 0x36E424u;
        goto label_36e424;
    }
    ctx->pc = 0x36E41Cu;
    SET_GPR_U32(ctx, 31, 0x36E424u);
    ctx->pc = 0x36E420u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36E41Cu;
            // 0x36e420: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160B30u;
    if (runtime->hasFunction(0x160B30u)) {
        auto targetFn = runtime->lookupFunction(0x160B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36E424u; }
        if (ctx->pc != 0x36E424u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B30_0x160b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36E424u; }
        if (ctx->pc != 0x36E424u) { return; }
    }
    ctx->pc = 0x36E424u;
label_36e424:
    // 0x36e424: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x36e424u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_36e428:
    // 0x36e428: 0x26620064  addiu       $v0, $s3, 0x64
    ctx->pc = 0x36e428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 100));
label_36e42c:
    // 0x36e42c: 0x24636ba8  addiu       $v1, $v1, 0x6BA8
    ctx->pc = 0x36e42cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27560));
label_36e430:
    // 0x36e430: 0x2444ff9c  addiu       $a0, $v0, -0x64
    ctx->pc = 0x36e430u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
label_36e434:
    // 0x36e434: 0xae630064  sw          $v1, 0x64($s3)
    ctx->pc = 0x36e434u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 3));
label_36e438:
    // 0x36e438: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x36e438u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_36e43c:
    // 0x36e43c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x36e43cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_36e440:
    // 0x36e440: 0xac446048  sw          $a0, 0x6048($v0)
    ctx->pc = 0x36e440u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24648), GPR_U32(ctx, 4));
label_36e444:
    // 0x36e444: 0x24636bc0  addiu       $v1, $v1, 0x6BC0
    ctx->pc = 0x36e444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27584));
label_36e448:
    // 0x36e448: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x36e448u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_36e44c:
    // 0x36e44c: 0x24426bf8  addiu       $v0, $v0, 0x6BF8
    ctx->pc = 0x36e44cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27640));
label_36e450:
    // 0x36e450: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x36e450u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_36e454:
    // 0x36e454: 0xae620064  sw          $v0, 0x64($s3)
    ctx->pc = 0x36e454u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
label_36e458:
    // 0x36e458: 0xae600068  sw          $zero, 0x68($s3)
    ctx->pc = 0x36e458u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 0));
label_36e45c:
    // 0x36e45c: 0xae60006c  sw          $zero, 0x6C($s3)
    ctx->pc = 0x36e45cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 0));
label_36e460:
    // 0x36e460: 0xae600070  sw          $zero, 0x70($s3)
    ctx->pc = 0x36e460u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 0));
label_36e464:
    // 0x36e464: 0xae600074  sw          $zero, 0x74($s3)
    ctx->pc = 0x36e464u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 0));
label_36e468:
    // 0x36e468: 0xae600078  sw          $zero, 0x78($s3)
    ctx->pc = 0x36e468u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 0));
label_36e46c:
    // 0x36e46c: 0xae60007c  sw          $zero, 0x7C($s3)
    ctx->pc = 0x36e46cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 0));
label_36e470:
    // 0x36e470: 0xae600080  sw          $zero, 0x80($s3)
    ctx->pc = 0x36e470u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 0));
label_36e474:
    // 0x36e474: 0xae600084  sw          $zero, 0x84($s3)
    ctx->pc = 0x36e474u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 0));
label_36e478:
    // 0x36e478: 0xae600088  sw          $zero, 0x88($s3)
    ctx->pc = 0x36e478u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 0));
label_36e47c:
    // 0x36e47c: 0xae60008c  sw          $zero, 0x8C($s3)
    ctx->pc = 0x36e47cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 0));
label_36e480:
    // 0x36e480: 0x8e700058  lw          $s0, 0x58($s3)
    ctx->pc = 0x36e480u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_36e484:
    // 0x36e484: 0x12000024  beqz        $s0, . + 4 + (0x24 << 2)
label_36e488:
    if (ctx->pc == 0x36E488u) {
        ctx->pc = 0x36E48Cu;
        goto label_36e48c;
    }
    ctx->pc = 0x36E484u;
    {
        const bool branch_taken_0x36e484 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x36e484) {
            ctx->pc = 0x36E518u;
            goto label_36e518;
        }
    }
    ctx->pc = 0x36E48Cu;
label_36e48c:
    // 0x36e48c: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x36e48cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_36e490:
    // 0x36e490: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x36e490u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_36e494:
    // 0x36e494: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x36e494u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_36e498:
    // 0x36e498: 0xc040138  jal         func_1004E0
label_36e49c:
    if (ctx->pc == 0x36E49Cu) {
        ctx->pc = 0x36E49Cu;
            // 0x36e49c: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x36E4A0u;
        goto label_36e4a0;
    }
    ctx->pc = 0x36E498u;
    SET_GPR_U32(ctx, 31, 0x36E4A0u);
    ctx->pc = 0x36E49Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36E498u;
            // 0x36e49c: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36E4A0u; }
        if (ctx->pc != 0x36E4A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36E4A0u; }
        if (ctx->pc != 0x36E4A0u) { return; }
    }
    ctx->pc = 0x36E4A0u;
label_36e4a0:
    // 0x36e4a0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x36e4a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_36e4a4:
    // 0x36e4a4: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x36e4a4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
label_36e4a8:
    // 0x36e4a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x36e4a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_36e4ac:
    // 0x36e4ac: 0x24a5e540  addiu       $a1, $a1, -0x1AC0
    ctx->pc = 0x36e4acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960448));
label_36e4b0:
    // 0x36e4b0: 0x24c6db20  addiu       $a2, $a2, -0x24E0
    ctx->pc = 0x36e4b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957856));
label_36e4b4:
    // 0x36e4b4: 0x240700e0  addiu       $a3, $zero, 0xE0
    ctx->pc = 0x36e4b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
label_36e4b8:
    // 0x36e4b8: 0xc040840  jal         func_102100
label_36e4bc:
    if (ctx->pc == 0x36E4BCu) {
        ctx->pc = 0x36E4BCu;
            // 0x36e4bc: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36E4C0u;
        goto label_36e4c0;
    }
    ctx->pc = 0x36E4B8u;
    SET_GPR_U32(ctx, 31, 0x36E4C0u);
    ctx->pc = 0x36E4BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36E4B8u;
            // 0x36e4bc: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36E4C0u; }
        if (ctx->pc != 0x36E4C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36E4C0u; }
        if (ctx->pc != 0x36E4C0u) { return; }
    }
    ctx->pc = 0x36E4C0u;
label_36e4c0:
    // 0x36e4c0: 0xae620068  sw          $v0, 0x68($s3)
    ctx->pc = 0x36e4c0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 2));
label_36e4c4:
    // 0x36e4c4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x36e4c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_36e4c8:
    // 0x36e4c8: 0x2664006c  addiu       $a0, $s3, 0x6C
    ctx->pc = 0x36e4c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
label_36e4cc:
    // 0x36e4cc: 0xc0788fc  jal         func_1E23F0
label_36e4d0:
    if (ctx->pc == 0x36E4D0u) {
        ctx->pc = 0x36E4D0u;
            // 0x36e4d0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36E4D4u;
        goto label_36e4d4;
    }
    ctx->pc = 0x36E4CCu;
    SET_GPR_U32(ctx, 31, 0x36E4D4u);
    ctx->pc = 0x36E4D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36E4CCu;
            // 0x36e4d0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36E4D4u; }
        if (ctx->pc != 0x36E4D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36E4D4u; }
        if (ctx->pc != 0x36E4D4u) { return; }
    }
    ctx->pc = 0x36E4D4u;
label_36e4d4:
    // 0x36e4d4: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x36e4d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
label_36e4d8:
    // 0x36e4d8: 0xc0788fc  jal         func_1E23F0
label_36e4dc:
    if (ctx->pc == 0x36E4DCu) {
        ctx->pc = 0x36E4DCu;
            // 0x36e4dc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36E4E0u;
        goto label_36e4e0;
    }
    ctx->pc = 0x36E4D8u;
    SET_GPR_U32(ctx, 31, 0x36E4E0u);
    ctx->pc = 0x36E4DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36E4D8u;
            // 0x36e4dc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36E4E0u; }
        if (ctx->pc != 0x36E4E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36E4E0u; }
        if (ctx->pc != 0x36E4E0u) { return; }
    }
    ctx->pc = 0x36E4E0u;
label_36e4e0:
    // 0x36e4e0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x36e4e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_36e4e4:
    // 0x36e4e4: 0xafb2005c  sw          $s2, 0x5C($sp)
    ctx->pc = 0x36e4e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 18));
label_36e4e8:
    // 0x36e4e8: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x36e4e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
label_36e4ec:
    // 0x36e4ec: 0x8e63007c  lw          $v1, 0x7C($s3)
    ctx->pc = 0x36e4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
label_36e4f0:
    // 0x36e4f0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x36e4f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_36e4f4:
    // 0x36e4f4: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x36e4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
label_36e4f8:
    // 0x36e4f8: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x36e4f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
label_36e4fc:
    // 0x36e4fc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x36e4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_36e500:
    // 0x36e500: 0xc0a997c  jal         func_2A65F0
label_36e504:
    if (ctx->pc == 0x36E504u) {
        ctx->pc = 0x36E504u;
            // 0x36e504: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x36E508u;
        goto label_36e508;
    }
    ctx->pc = 0x36E500u;
    SET_GPR_U32(ctx, 31, 0x36E508u);
    ctx->pc = 0x36E504u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36E500u;
            // 0x36e504: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36E508u; }
        if (ctx->pc != 0x36E508u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36E508u; }
        if (ctx->pc != 0x36E508u) { return; }
    }
    ctx->pc = 0x36E508u;
label_36e508:
    // 0x36e508: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x36e508u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_36e50c:
    // 0x36e50c: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x36e50cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_36e510:
    // 0x36e510: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_36e514:
    if (ctx->pc == 0x36E514u) {
        ctx->pc = 0x36E514u;
            // 0x36e514: 0x265200e0  addiu       $s2, $s2, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 224));
        ctx->pc = 0x36E518u;
        goto label_36e518;
    }
    ctx->pc = 0x36E510u;
    {
        const bool branch_taken_0x36e510 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36E514u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36E510u;
            // 0x36e514: 0x265200e0  addiu       $s2, $s2, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e510) {
            ctx->pc = 0x36E4E4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_36e4e4;
        }
    }
    ctx->pc = 0x36E518u;
label_36e518:
    // 0x36e518: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x36e518u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_36e51c:
    // 0x36e51c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x36e51cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_36e520:
    // 0x36e520: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x36e520u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_36e524:
    // 0x36e524: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x36e524u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_36e528:
    // 0x36e528: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x36e528u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_36e52c:
    // 0x36e52c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x36e52cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_36e530:
    // 0x36e530: 0x3e00008  jr          $ra
label_36e534:
    if (ctx->pc == 0x36E534u) {
        ctx->pc = 0x36E534u;
            // 0x36e534: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x36E538u;
        goto label_36e538;
    }
    ctx->pc = 0x36E530u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36E534u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36E530u;
            // 0x36e534: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x36E538u;
label_36e538:
    // 0x36e538: 0x0  nop
    ctx->pc = 0x36e538u;
    // NOP
label_36e53c:
    // 0x36e53c: 0x0  nop
    ctx->pc = 0x36e53cu;
    // NOP
label_36e540:
    // 0x36e540: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x36e540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_36e544:
    // 0x36e544: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x36e544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_36e548:
    // 0x36e548: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x36e548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_36e54c:
    // 0x36e54c: 0xc0aeebc  jal         func_2BBAF0
label_36e550:
    if (ctx->pc == 0x36E550u) {
        ctx->pc = 0x36E550u;
            // 0x36e550: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36E554u;
        goto label_36e554;
    }
    ctx->pc = 0x36E54Cu;
    SET_GPR_U32(ctx, 31, 0x36E554u);
    ctx->pc = 0x36E550u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36E54Cu;
            // 0x36e550: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBAF0u;
    if (runtime->hasFunction(0x2BBAF0u)) {
        auto targetFn = runtime->lookupFunction(0x2BBAF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36E554u; }
        if (ctx->pc != 0x36E554u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBAF0_0x2bbaf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36E554u; }
        if (ctx->pc != 0x36E554u) { return; }
    }
    ctx->pc = 0x36E554u;
label_36e554:
    // 0x36e554: 0xc0aeeb4  jal         func_2BBAD0
label_36e558:
    if (ctx->pc == 0x36E558u) {
        ctx->pc = 0x36E558u;
            // 0x36e558: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->pc = 0x36E55Cu;
        goto label_36e55c;
    }
    ctx->pc = 0x36E554u;
    SET_GPR_U32(ctx, 31, 0x36E55Cu);
    ctx->pc = 0x36E558u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36E554u;
            // 0x36e558: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBAD0u;
    if (runtime->hasFunction(0x2BBAD0u)) {
        auto targetFn = runtime->lookupFunction(0x2BBAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36E55Cu; }
        if (ctx->pc != 0x36E55Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBAD0_0x2bbad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36E55Cu; }
        if (ctx->pc != 0x36E55Cu) { return; }
    }
    ctx->pc = 0x36E55Cu;
label_36e55c:
    // 0x36e55c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x36e55cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_36e560:
    // 0x36e560: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x36e560u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_36e564:
    // 0x36e564: 0x24632290  addiu       $v1, $v1, 0x2290
    ctx->pc = 0x36e564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8848));
label_36e568:
    // 0x36e568: 0x244222d0  addiu       $v0, $v0, 0x22D0
    ctx->pc = 0x36e568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8912));
label_36e56c:
    // 0x36e56c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x36e56cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_36e570:
    // 0x36e570: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x36e570u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
label_36e574:
    // 0x36e574: 0xc0aeea4  jal         func_2BBA90
label_36e578:
    if (ctx->pc == 0x36E578u) {
        ctx->pc = 0x36E578u;
            // 0x36e578: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->pc = 0x36E57Cu;
        goto label_36e57c;
    }
    ctx->pc = 0x36E574u;
    SET_GPR_U32(ctx, 31, 0x36E57Cu);
    ctx->pc = 0x36E578u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36E574u;
            // 0x36e578: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBA90u;
    if (runtime->hasFunction(0x2BBA90u)) {
        auto targetFn = runtime->lookupFunction(0x2BBA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36E57Cu; }
        if (ctx->pc != 0x36E57Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBA90_0x2bba90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36E57Cu; }
        if (ctx->pc != 0x36E57Cu) { return; }
    }
    ctx->pc = 0x36E57Cu;
label_36e57c:
    // 0x36e57c: 0xc0aee8c  jal         func_2BBA30
label_36e580:
    if (ctx->pc == 0x36E580u) {
        ctx->pc = 0x36E580u;
            // 0x36e580: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->pc = 0x36E584u;
        goto label_36e584;
    }
    ctx->pc = 0x36E57Cu;
    SET_GPR_U32(ctx, 31, 0x36E584u);
    ctx->pc = 0x36E580u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36E57Cu;
            // 0x36e580: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBA30u;
    if (runtime->hasFunction(0x2BBA30u)) {
        auto targetFn = runtime->lookupFunction(0x2BBA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36E584u; }
        if (ctx->pc != 0x36E584u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBA30_0x2bba30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36E584u; }
        if (ctx->pc != 0x36E584u) { return; }
    }
    ctx->pc = 0x36E584u;
label_36e584:
    // 0x36e584: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x36e584u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
label_36e588:
    // 0x36e588: 0x24050073  addiu       $a1, $zero, 0x73
    ctx->pc = 0x36e588u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
label_36e58c:
    // 0x36e58c: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x36e58cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
label_36e590:
    // 0x36e590: 0x3c0442b4  lui         $a0, 0x42B4
    ctx->pc = 0x36e590u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17076 << 16));
label_36e594:
    // 0x36e594: 0xae0000a4  sw          $zero, 0xA4($s0)
    ctx->pc = 0x36e594u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 0));
label_36e598:
    // 0x36e598: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x36e598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_36e59c:
    // 0x36e59c: 0xae0000a8  sw          $zero, 0xA8($s0)
    ctx->pc = 0x36e59cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
label_36e5a0:
    // 0x36e5a0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x36e5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_36e5a4:
    // 0x36e5a4: 0xae0000ac  sw          $zero, 0xAC($s0)
    ctx->pc = 0x36e5a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 0));
label_36e5a8:
    // 0x36e5a8: 0xae0500b0  sw          $a1, 0xB0($s0)
    ctx->pc = 0x36e5a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 5));
label_36e5ac:
    // 0x36e5ac: 0xae0000b4  sw          $zero, 0xB4($s0)
    ctx->pc = 0x36e5acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
label_36e5b0:
    // 0x36e5b0: 0xae0000b8  sw          $zero, 0xB8($s0)
    ctx->pc = 0x36e5b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 0));
label_36e5b4:
    // 0x36e5b4: 0xae0000c0  sw          $zero, 0xC0($s0)
    ctx->pc = 0x36e5b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 0));
label_36e5b8:
    // 0x36e5b8: 0xae0400c4  sw          $a0, 0xC4($s0)
    ctx->pc = 0x36e5b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 4));
label_36e5bc:
    // 0x36e5bc: 0xae0300c8  sw          $v1, 0xC8($s0)
    ctx->pc = 0x36e5bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 3));
label_36e5c0:
    // 0x36e5c0: 0xc0775b8  jal         func_1DD6E0
label_36e5c4:
    if (ctx->pc == 0x36E5C4u) {
        ctx->pc = 0x36E5C4u;
            // 0x36e5c4: 0xa20200cc  sb          $v0, 0xCC($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 204), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x36E5C8u;
        goto label_36e5c8;
    }
    ctx->pc = 0x36E5C0u;
    SET_GPR_U32(ctx, 31, 0x36E5C8u);
    ctx->pc = 0x36E5C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36E5C0u;
            // 0x36e5c4: 0xa20200cc  sb          $v0, 0xCC($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 204), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36E5C8u; }
        if (ctx->pc != 0x36E5C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36E5C8u; }
        if (ctx->pc != 0x36E5C8u) { return; }
    }
    ctx->pc = 0x36E5C8u;
label_36e5c8:
    // 0x36e5c8: 0xc077314  jal         func_1DCC50
label_36e5cc:
    if (ctx->pc == 0x36E5CCu) {
        ctx->pc = 0x36E5CCu;
            // 0x36e5cc: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x36E5D0u;
        goto label_36e5d0;
    }
    ctx->pc = 0x36E5C8u;
    SET_GPR_U32(ctx, 31, 0x36E5D0u);
    ctx->pc = 0x36E5CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36E5C8u;
            // 0x36e5cc: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC50u;
    if (runtime->hasFunction(0x1DCC50u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36E5D0u; }
        if (ctx->pc != 0x36E5D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC50_0x1dcc50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36E5D0u; }
        if (ctx->pc != 0x36E5D0u) { return; }
    }
    ctx->pc = 0x36E5D0u;
label_36e5d0:
    // 0x36e5d0: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x36e5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
label_36e5d4:
    // 0x36e5d4: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x36e5d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
label_36e5d8:
    // 0x36e5d8: 0x24635f60  addiu       $v1, $v1, 0x5F60
    ctx->pc = 0x36e5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24416));
label_36e5dc:
    // 0x36e5dc: 0x8e0500c8  lw          $a1, 0xC8($s0)
    ctx->pc = 0x36e5dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
label_36e5e0:
    // 0x36e5e0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x36e5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_36e5e4:
    // 0x36e5e4: 0x24846c60  addiu       $a0, $a0, 0x6C60
    ctx->pc = 0x36e5e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27744));
label_36e5e8:
    // 0x36e5e8: 0x90460000  lbu         $a2, 0x0($v0)
    ctx->pc = 0x36e5e8u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_36e5ec:
    // 0x36e5ec: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x36e5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_36e5f0:
    // 0x36e5f0: 0x24636ca0  addiu       $v1, $v1, 0x6CA0
    ctx->pc = 0x36e5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27808));
label_36e5f4:
    // 0x36e5f4: 0xa62818  mult        $a1, $a1, $a2
    ctx->pc = 0x36e5f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_36e5f8:
    // 0x36e5f8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x36e5f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_36e5fc:
    // 0x36e5fc: 0xae0500c8  sw          $a1, 0xC8($s0)
    ctx->pc = 0x36e5fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 5));
label_36e600:
    // 0x36e600: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x36e600u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_36e604:
    // 0x36e604: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x36e604u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
label_36e608:
    // 0x36e608: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x36e608u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
label_36e60c:
    // 0x36e60c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x36e60cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_36e610:
    // 0x36e610: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x36e610u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_36e614:
    // 0x36e614: 0x3e00008  jr          $ra
label_36e618:
    if (ctx->pc == 0x36E618u) {
        ctx->pc = 0x36E618u;
            // 0x36e618: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x36E61Cu;
        goto label_36e61c;
    }
    ctx->pc = 0x36E614u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36E618u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36E614u;
            // 0x36e618: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x36E61Cu;
label_36e61c:
    // 0x36e61c: 0x0  nop
    ctx->pc = 0x36e61cu;
    // NOP
label_36e620:
    // 0x36e620: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x36e620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_36e624:
    // 0x36e624: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x36e624u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_36e628:
    // 0x36e628: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x36e628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_36e62c:
    // 0x36e62c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x36e62cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_36e630:
    // 0x36e630: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x36e630u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_36e634:
    // 0x36e634: 0xc0baaa0  jal         func_2EAA80
label_36e638:
    if (ctx->pc == 0x36E638u) {
        ctx->pc = 0x36E638u;
            // 0x36e638: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x36E63Cu;
        goto label_36e63c;
    }
    ctx->pc = 0x36E634u;
    SET_GPR_U32(ctx, 31, 0x36E63Cu);
    ctx->pc = 0x36E638u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36E634u;
            // 0x36e638: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EAA80u;
    if (runtime->hasFunction(0x2EAA80u)) {
        auto targetFn = runtime->lookupFunction(0x2EAA80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36E63Cu; }
        if (ctx->pc != 0x36E63Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EAA80_0x2eaa80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36E63Cu; }
        if (ctx->pc != 0x36E63Cu) { return; }
    }
    ctx->pc = 0x36E63Cu;
label_36e63c:
    // 0x36e63c: 0x8e0400d0  lw          $a0, 0xD0($s0)
    ctx->pc = 0x36e63cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
label_36e640:
    // 0x36e640: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x36e640u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_36e644:
    // 0x36e644: 0xc122d2c  jal         func_48B4B0
label_36e648:
    if (ctx->pc == 0x36E648u) {
        ctx->pc = 0x36E648u;
            // 0x36e648: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x36E64Cu;
        goto label_36e64c;
    }
    ctx->pc = 0x36E644u;
    SET_GPR_U32(ctx, 31, 0x36E64Cu);
    ctx->pc = 0x36E648u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36E644u;
            // 0x36e648: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B4B0u;
    if (runtime->hasFunction(0x48B4B0u)) {
        auto targetFn = runtime->lookupFunction(0x48B4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36E64Cu; }
        if (ctx->pc != 0x36E64Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B4B0_0x48b4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36E64Cu; }
        if (ctx->pc != 0x36E64Cu) { return; }
    }
    ctx->pc = 0x36E64Cu;
label_36e64c:
    // 0x36e64c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x36e64cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_36e650:
    // 0x36e650: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x36e650u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_36e654:
    // 0x36e654: 0x3e00008  jr          $ra
label_36e658:
    if (ctx->pc == 0x36E658u) {
        ctx->pc = 0x36E658u;
            // 0x36e658: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x36E65Cu;
        goto label_36e65c;
    }
    ctx->pc = 0x36E654u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36E658u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36E654u;
            // 0x36e658: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x36E65Cu;
label_36e65c:
    // 0x36e65c: 0x0  nop
    ctx->pc = 0x36e65cu;
    // NOP
label_36e660:
    // 0x36e660: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x36e660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_36e664:
    // 0x36e664: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x36e664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_36e668:
    // 0x36e668: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x36e668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_36e66c:
    // 0x36e66c: 0x908300d4  lbu         $v1, 0xD4($a0)
    ctx->pc = 0x36e66cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 212)));
label_36e670:
    // 0x36e670: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
label_36e674:
    if (ctx->pc == 0x36E674u) {
        ctx->pc = 0x36E674u;
            // 0x36e674: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36E678u;
        goto label_36e678;
    }
    ctx->pc = 0x36E670u;
    {
        const bool branch_taken_0x36e670 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x36E674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36E670u;
            // 0x36e674: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e670) {
            ctx->pc = 0x36E6A4u;
            goto label_36e6a4;
        }
    }
    ctx->pc = 0x36E678u;
label_36e678:
    // 0x36e678: 0x8e030060  lw          $v1, 0x60($s0)
    ctx->pc = 0x36e678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_36e67c:
    // 0x36e67c: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x36e67cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
label_36e680:
    // 0x36e680: 0x54600009  bnel        $v1, $zero, . + 4 + (0x9 << 2)
label_36e684:
    if (ctx->pc == 0x36E684u) {
        ctx->pc = 0x36E684u;
            // 0x36e684: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x36E688u;
        goto label_36e688;
    }
    ctx->pc = 0x36E680u;
    {
        const bool branch_taken_0x36e680 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x36e680) {
            ctx->pc = 0x36E684u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x36E680u;
            // 0x36e684: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x36E6A8u;
            goto label_36e6a8;
        }
    }
    ctx->pc = 0x36E688u;
label_36e688:
    // 0x36e688: 0x8e0400d0  lw          $a0, 0xD0($s0)
    ctx->pc = 0x36e688u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
label_36e68c:
    // 0x36e68c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x36e68cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_36e690:
    // 0x36e690: 0xc122d2c  jal         func_48B4B0
label_36e694:
    if (ctx->pc == 0x36E694u) {
        ctx->pc = 0x36E694u;
            // 0x36e694: 0x26060010  addiu       $a2, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x36E698u;
        goto label_36e698;
    }
    ctx->pc = 0x36E690u;
    SET_GPR_U32(ctx, 31, 0x36E698u);
    ctx->pc = 0x36E694u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36E690u;
            // 0x36e694: 0x26060010  addiu       $a2, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B4B0u;
    if (runtime->hasFunction(0x48B4B0u)) {
        auto targetFn = runtime->lookupFunction(0x48B4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36E698u; }
        if (ctx->pc != 0x36E698u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B4B0_0x48b4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36E698u; }
        if (ctx->pc != 0x36E698u) { return; }
    }
    ctx->pc = 0x36E698u;
label_36e698:
    // 0x36e698: 0x920300d4  lbu         $v1, 0xD4($s0)
    ctx->pc = 0x36e698u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 212)));
label_36e69c:
    // 0x36e69c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x36e69cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_36e6a0:
    // 0x36e6a0: 0xa20300d4  sb          $v1, 0xD4($s0)
    ctx->pc = 0x36e6a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 212), (uint8_t)GPR_U32(ctx, 3));
label_36e6a4:
    // 0x36e6a4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x36e6a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_36e6a8:
    // 0x36e6a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x36e6a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_36e6ac:
    // 0x36e6ac: 0x3e00008  jr          $ra
label_36e6b0:
    if (ctx->pc == 0x36E6B0u) {
        ctx->pc = 0x36E6B0u;
            // 0x36e6b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x36E6B4u;
        goto label_36e6b4;
    }
    ctx->pc = 0x36E6ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36E6B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36E6ACu;
            // 0x36e6b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x36E6B4u;
label_36e6b4:
    // 0x36e6b4: 0x0  nop
    ctx->pc = 0x36e6b4u;
    // NOP
label_36e6b8:
    // 0x36e6b8: 0x0  nop
    ctx->pc = 0x36e6b8u;
    // NOP
label_36e6bc:
    // 0x36e6bc: 0x0  nop
    ctx->pc = 0x36e6bcu;
    // NOP
label_36e6c0:
    // 0x36e6c0: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x36e6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_36e6c4:
    // 0x36e6c4: 0x8c84009c  lw          $a0, 0x9C($a0)
    ctx->pc = 0x36e6c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 156)));
label_36e6c8:
    // 0x36e6c8: 0x8c636048  lw          $v1, 0x6048($v1)
    ctx->pc = 0x36e6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24648)));
label_36e6cc:
    // 0x36e6cc: 0x8c630084  lw          $v1, 0x84($v1)
    ctx->pc = 0x36e6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_36e6d0:
    // 0x36e6d0: 0x8c680030  lw          $t0, 0x30($v1)
    ctx->pc = 0x36e6d0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_36e6d4:
    // 0x36e6d4: 0xac88000c  sw          $t0, 0xC($a0)
    ctx->pc = 0x36e6d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 8));
label_36e6d8:
    // 0x36e6d8: 0x8c8a0000  lw          $t2, 0x0($a0)
    ctx->pc = 0x36e6d8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_36e6dc:
    // 0x36e6dc: 0x8c890010  lw          $t1, 0x10($a0)
    ctx->pc = 0x36e6dcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_36e6e0:
    // 0x36e6e0: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x36e6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_36e6e4:
    // 0x36e6e4: 0x8d470000  lw          $a3, 0x0($t2)
    ctx->pc = 0x36e6e4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_36e6e8:
    // 0x36e6e8: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x36e6e8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
label_36e6ec:
    // 0x36e6ec: 0x8c6419d0  lw          $a0, 0x19D0($v1)
    ctx->pc = 0x36e6ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 6608)));
label_36e6f0:
    // 0x36e6f0: 0x8ce60018  lw          $a2, 0x18($a3)
    ctx->pc = 0x36e6f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
label_36e6f4:
    // 0x36e6f4: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x36e6f4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
label_36e6f8:
    // 0x36e6f8: 0x628c0  sll         $a1, $a2, 3
    ctx->pc = 0x36e6f8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_36e6fc:
    // 0x36e6fc: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x36e6fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_36e700:
    // 0x36e700: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x36e700u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_36e704:
    // 0x36e704: 0x1052821  addu        $a1, $t0, $a1
    ctx->pc = 0x36e704u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
label_36e708:
    // 0x36e708: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x36e708u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_36e70c:
    // 0x36e70c: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x36e70cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_36e710:
    // 0x36e710: 0x4202b  sltu        $a0, $zero, $a0
    ctx->pc = 0x36e710u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_36e714:
    // 0x36e714: 0x1d20fff3  bgtz        $t1, . + 4 + (-0xD << 2)
label_36e718:
    if (ctx->pc == 0x36E718u) {
        ctx->pc = 0x36E718u;
            // 0x36e718: 0xa0e40020  sb          $a0, 0x20($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 32), (uint8_t)GPR_U32(ctx, 4));
        ctx->pc = 0x36E71Cu;
        goto label_36e71c;
    }
    ctx->pc = 0x36E714u;
    {
        const bool branch_taken_0x36e714 = (GPR_S32(ctx, 9) > 0);
        ctx->pc = 0x36E718u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36E714u;
            // 0x36e718: 0xa0e40020  sb          $a0, 0x20($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 32), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e714) {
            ctx->pc = 0x36E6E4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_36e6e4;
        }
    }
    ctx->pc = 0x36E71Cu;
label_36e71c:
    // 0x36e71c: 0x3e00008  jr          $ra
label_36e720:
    if (ctx->pc == 0x36E720u) {
        ctx->pc = 0x36E724u;
        goto label_36e724;
    }
    ctx->pc = 0x36E71Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x36E724u;
label_36e724:
    // 0x36e724: 0x0  nop
    ctx->pc = 0x36e724u;
    // NOP
label_36e728:
    // 0x36e728: 0x0  nop
    ctx->pc = 0x36e728u;
    // NOP
label_36e72c:
    // 0x36e72c: 0x0  nop
    ctx->pc = 0x36e72cu;
    // NOP
label_36e730:
    // 0x36e730: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x36e730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_36e734:
    // 0x36e734: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x36e734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_36e738:
    // 0x36e738: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x36e738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_36e73c:
    // 0x36e73c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x36e73cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_36e740:
    // 0x36e740: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x36e740u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_36e744:
    // 0x36e744: 0x8c8400a0  lw          $a0, 0xA0($a0)
    ctx->pc = 0x36e744u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 160)));
label_36e748:
    // 0x36e748: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_36e74c:
    if (ctx->pc == 0x36E74Cu) {
        ctx->pc = 0x36E74Cu;
            // 0x36e74c: 0xae2000a0  sw          $zero, 0xA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 0));
        ctx->pc = 0x36E750u;
        goto label_36e750;
    }
    ctx->pc = 0x36E748u;
    {
        const bool branch_taken_0x36e748 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x36e748) {
            ctx->pc = 0x36E74Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x36E748u;
            // 0x36e74c: 0xae2000a0  sw          $zero, 0xA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x36E764u;
            goto label_36e764;
        }
    }
    ctx->pc = 0x36E750u;
label_36e750:
    // 0x36e750: 0x8c990048  lw          $t9, 0x48($a0)
    ctx->pc = 0x36e750u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_36e754:
    // 0x36e754: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x36e754u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_36e758:
    // 0x36e758: 0x320f809  jalr        $t9
label_36e75c:
    if (ctx->pc == 0x36E75Cu) {
        ctx->pc = 0x36E75Cu;
            // 0x36e75c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x36E760u;
        goto label_36e760;
    }
    ctx->pc = 0x36E758u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x36E760u);
        ctx->pc = 0x36E75Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36E758u;
            // 0x36e75c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x36E760u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x36E760u; }
            if (ctx->pc != 0x36E760u) { return; }
        }
        }
    }
    ctx->pc = 0x36E760u;
label_36e760:
    // 0x36e760: 0xae2000a0  sw          $zero, 0xA0($s1)
    ctx->pc = 0x36e760u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 0));
label_36e764:
    // 0x36e764: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x36e764u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_36e768:
    // 0x36e768: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_36e76c:
    if (ctx->pc == 0x36E76Cu) {
        ctx->pc = 0x36E76Cu;
            // 0x36e76c: 0xae200050  sw          $zero, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x36E770u;
        goto label_36e770;
    }
    ctx->pc = 0x36E768u;
    {
        const bool branch_taken_0x36e768 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x36e768) {
            ctx->pc = 0x36E76Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x36E768u;
            // 0x36e76c: 0xae200050  sw          $zero, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x36E784u;
            goto label_36e784;
        }
    }
    ctx->pc = 0x36E770u;
label_36e770:
    // 0x36e770: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x36e770u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_36e774:
    // 0x36e774: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x36e774u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_36e778:
    // 0x36e778: 0x320f809  jalr        $t9
label_36e77c:
    if (ctx->pc == 0x36E77Cu) {
        ctx->pc = 0x36E77Cu;
            // 0x36e77c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x36E780u;
        goto label_36e780;
    }
    ctx->pc = 0x36E778u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x36E780u);
        ctx->pc = 0x36E77Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36E778u;
            // 0x36e77c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x36E780u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x36E780u; }
            if (ctx->pc != 0x36E780u) { return; }
        }
        }
    }
    ctx->pc = 0x36E780u;
label_36e780:
    // 0x36e780: 0xae200050  sw          $zero, 0x50($s1)
    ctx->pc = 0x36e780u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
label_36e784:
    // 0x36e784: 0x8e30009c  lw          $s0, 0x9C($s1)
    ctx->pc = 0x36e784u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_36e788:
    // 0x36e788: 0x5200000e  beql        $s0, $zero, . + 4 + (0xE << 2)
label_36e78c:
    if (ctx->pc == 0x36E78Cu) {
        ctx->pc = 0x36E78Cu;
            // 0x36e78c: 0xae20009c  sw          $zero, 0x9C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 0));
        ctx->pc = 0x36E790u;
        goto label_36e790;
    }
    ctx->pc = 0x36E788u;
    {
        const bool branch_taken_0x36e788 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x36e788) {
            ctx->pc = 0x36E78Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x36E788u;
            // 0x36e78c: 0xae20009c  sw          $zero, 0x9C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x36E7C4u;
            goto label_36e7c4;
        }
    }
    ctx->pc = 0x36E790u;
label_36e790:
    // 0x36e790: 0xc04008c  jal         func_100230
label_36e794:
    if (ctx->pc == 0x36E794u) {
        ctx->pc = 0x36E794u;
            // 0x36e794: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x36E798u;
        goto label_36e798;
    }
    ctx->pc = 0x36E790u;
    SET_GPR_U32(ctx, 31, 0x36E798u);
    ctx->pc = 0x36E794u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36E790u;
            // 0x36e794: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100230u;
    if (runtime->hasFunction(0x100230u)) {
        auto targetFn = runtime->lookupFunction(0x100230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36E798u; }
        if (ctx->pc != 0x36E798u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100230_0x100230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36E798u; }
        if (ctx->pc != 0x36E798u) { return; }
    }
    ctx->pc = 0x36E798u;
label_36e798:
    // 0x36e798: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x36e798u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_36e79c:
    // 0x36e79c: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x36e79cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
label_36e7a0:
    // 0x36e7a0: 0xc0407c0  jal         func_101F00
label_36e7a4:
    if (ctx->pc == 0x36E7A4u) {
        ctx->pc = 0x36E7A4u;
            // 0x36e7a4: 0x24a5b410  addiu       $a1, $a1, -0x4BF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947856));
        ctx->pc = 0x36E7A8u;
        goto label_36e7a8;
    }
    ctx->pc = 0x36E7A0u;
    SET_GPR_U32(ctx, 31, 0x36E7A8u);
    ctx->pc = 0x36E7A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36E7A0u;
            // 0x36e7a4: 0x24a5b410  addiu       $a1, $a1, -0x4BF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947856));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36E7A8u; }
        if (ctx->pc != 0x36E7A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36E7A8u; }
        if (ctx->pc != 0x36E7A8u) { return; }
    }
    ctx->pc = 0x36E7A8u;
label_36e7a8:
    // 0x36e7a8: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x36e7a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_36e7ac:
    // 0x36e7ac: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x36e7acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
label_36e7b0:
    // 0x36e7b0: 0xc0407c0  jal         func_101F00
label_36e7b4:
    if (ctx->pc == 0x36E7B4u) {
        ctx->pc = 0x36E7B4u;
            // 0x36e7b4: 0x24a5b390  addiu       $a1, $a1, -0x4C70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947728));
        ctx->pc = 0x36E7B8u;
        goto label_36e7b8;
    }
    ctx->pc = 0x36E7B0u;
    SET_GPR_U32(ctx, 31, 0x36E7B8u);
    ctx->pc = 0x36E7B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36E7B0u;
            // 0x36e7b4: 0x24a5b390  addiu       $a1, $a1, -0x4C70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947728));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36E7B8u; }
        if (ctx->pc != 0x36E7B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36E7B8u; }
        if (ctx->pc != 0x36E7B8u) { return; }
    }
    ctx->pc = 0x36E7B8u;
label_36e7b8:
    // 0x36e7b8: 0xc0400a8  jal         func_1002A0
label_36e7bc:
    if (ctx->pc == 0x36E7BCu) {
        ctx->pc = 0x36E7BCu;
            // 0x36e7bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36E7C0u;
        goto label_36e7c0;
    }
    ctx->pc = 0x36E7B8u;
    SET_GPR_U32(ctx, 31, 0x36E7C0u);
    ctx->pc = 0x36E7BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36E7B8u;
            // 0x36e7bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36E7C0u; }
        if (ctx->pc != 0x36E7C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36E7C0u; }
        if (ctx->pc != 0x36E7C0u) { return; }
    }
    ctx->pc = 0x36E7C0u;
label_36e7c0:
    // 0x36e7c0: 0xae20009c  sw          $zero, 0x9C($s1)
    ctx->pc = 0x36e7c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 0));
label_36e7c4:
    // 0x36e7c4: 0x8e2400d0  lw          $a0, 0xD0($s1)
    ctx->pc = 0x36e7c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 208)));
label_36e7c8:
    // 0x36e7c8: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_36e7cc:
    if (ctx->pc == 0x36E7CCu) {
        ctx->pc = 0x36E7CCu;
            // 0x36e7cc: 0xae2000d0  sw          $zero, 0xD0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 208), GPR_U32(ctx, 0));
        ctx->pc = 0x36E7D0u;
        goto label_36e7d0;
    }
    ctx->pc = 0x36E7C8u;
    {
        const bool branch_taken_0x36e7c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x36e7c8) {
            ctx->pc = 0x36E7CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x36E7C8u;
            // 0x36e7cc: 0xae2000d0  sw          $zero, 0xD0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 208), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x36E7E4u;
            goto label_36e7e4;
        }
    }
    ctx->pc = 0x36E7D0u;
label_36e7d0:
    // 0x36e7d0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x36e7d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_36e7d4:
    // 0x36e7d4: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x36e7d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_36e7d8:
    // 0x36e7d8: 0x320f809  jalr        $t9
label_36e7dc:
    if (ctx->pc == 0x36E7DCu) {
        ctx->pc = 0x36E7DCu;
            // 0x36e7dc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x36E7E0u;
        goto label_36e7e0;
    }
    ctx->pc = 0x36E7D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x36E7E0u);
        ctx->pc = 0x36E7DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36E7D8u;
            // 0x36e7dc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x36E7E0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x36E7E0u; }
            if (ctx->pc != 0x36E7E0u) { return; }
        }
        }
    }
    ctx->pc = 0x36E7E0u;
label_36e7e0:
    // 0x36e7e0: 0xae2000d0  sw          $zero, 0xD0($s1)
    ctx->pc = 0x36e7e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 208), GPR_U32(ctx, 0));
label_36e7e4:
    // 0x36e7e4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x36e7e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_36e7e8:
    // 0x36e7e8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x36e7e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_36e7ec:
    // 0x36e7ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x36e7ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_36e7f0:
    // 0x36e7f0: 0x3e00008  jr          $ra
label_36e7f4:
    if (ctx->pc == 0x36E7F4u) {
        ctx->pc = 0x36E7F4u;
            // 0x36e7f4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x36E7F8u;
        goto label_36e7f8;
    }
    ctx->pc = 0x36E7F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36E7F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36E7F0u;
            // 0x36e7f4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x36E7F8u;
label_36e7f8:
    // 0x36e7f8: 0x0  nop
    ctx->pc = 0x36e7f8u;
    // NOP
label_36e7fc:
    // 0x36e7fc: 0x0  nop
    ctx->pc = 0x36e7fcu;
    // NOP
label_36e800:
    // 0x36e800: 0x27bdfe50  addiu       $sp, $sp, -0x1B0
    ctx->pc = 0x36e800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966864));
label_36e804:
    // 0x36e804: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x36e804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_36e808:
    // 0x36e808: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x36e808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_36e80c:
    // 0x36e80c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x36e80cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_36e810:
    // 0x36e810: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x36e810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_36e814:
    // 0x36e814: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x36e814u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_36e818:
    // 0x36e818: 0xc0892d0  jal         func_224B40
label_36e81c:
    if (ctx->pc == 0x36E81Cu) {
        ctx->pc = 0x36E81Cu;
            // 0x36e81c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x36E820u;
        goto label_36e820;
    }
    ctx->pc = 0x36E818u;
    SET_GPR_U32(ctx, 31, 0x36E820u);
    ctx->pc = 0x36E81Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36E818u;
            // 0x36e81c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224B40u;
    if (runtime->hasFunction(0x224B40u)) {
        auto targetFn = runtime->lookupFunction(0x224B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36E820u; }
        if (ctx->pc != 0x36E820u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224B40_0x224b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36E820u; }
        if (ctx->pc != 0x36E820u) { return; }
    }
    ctx->pc = 0x36E820u;
label_36e820:
    // 0x36e820: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x36e820u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_36e824:
    // 0x36e824: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x36e824u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_36e828:
    // 0x36e828: 0x8c426048  lw          $v0, 0x6048($v0)
    ctx->pc = 0x36e828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24648)));
label_36e82c:
    // 0x36e82c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x36e82cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_36e830:
    // 0x36e830: 0x8c70e3e0  lw          $s0, -0x1C20($v1)
    ctx->pc = 0x36e830u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960096)));
label_36e834:
    // 0x36e834: 0x8c510060  lw          $s1, 0x60($v0)
    ctx->pc = 0x36e834u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_36e838:
    // 0x36e838: 0xafa000a0  sw          $zero, 0xA0($sp)
    ctx->pc = 0x36e838u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 0));
label_36e83c:
    // 0x36e83c: 0xc0b6e68  jal         func_2DB9A0
label_36e840:
    if (ctx->pc == 0x36E840u) {
        ctx->pc = 0x36E840u;
            // 0x36e840: 0xafa000a4  sw          $zero, 0xA4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 0));
        ctx->pc = 0x36E844u;
        goto label_36e844;
    }
    ctx->pc = 0x36E83Cu;
    SET_GPR_U32(ctx, 31, 0x36E844u);
    ctx->pc = 0x36E840u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36E83Cu;
            // 0x36e840: 0xafa000a4  sw          $zero, 0xA4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB9A0u;
    if (runtime->hasFunction(0x2DB9A0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36E844u; }
        if (ctx->pc != 0x36E844u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB9A0_0x2db9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36E844u; }
        if (ctx->pc != 0x36E844u) { return; }
    }
    ctx->pc = 0x36E844u;
label_36e844:
    // 0x36e844: 0xc0b6dac  jal         func_2DB6B0
label_36e848:
    if (ctx->pc == 0x36E848u) {
        ctx->pc = 0x36E848u;
            // 0x36e848: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x36E84Cu;
        goto label_36e84c;
    }
    ctx->pc = 0x36E844u;
    SET_GPR_U32(ctx, 31, 0x36E84Cu);
    ctx->pc = 0x36E848u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36E844u;
            // 0x36e848: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (runtime->hasFunction(0x2DB6B0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36E84Cu; }
        if (ctx->pc != 0x36E84Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB6B0_0x2db6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36E84Cu; }
        if (ctx->pc != 0x36E84Cu) { return; }
    }
    ctx->pc = 0x36E84Cu;
label_36e84c:
    // 0x36e84c: 0xc0cac94  jal         func_32B250
label_36e850:
    if (ctx->pc == 0x36E850u) {
        ctx->pc = 0x36E850u;
            // 0x36e850: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x36E854u;
        goto label_36e854;
    }
    ctx->pc = 0x36E84Cu;
    SET_GPR_U32(ctx, 31, 0x36E854u);
    ctx->pc = 0x36E850u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36E84Cu;
            // 0x36e850: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B250u;
    if (runtime->hasFunction(0x32B250u)) {
        auto targetFn = runtime->lookupFunction(0x32B250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36E854u; }
        if (ctx->pc != 0x36E854u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B250_0x32b250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36E854u; }
        if (ctx->pc != 0x36E854u) { return; }
    }
    ctx->pc = 0x36E854u;
label_36e854:
    // 0x36e854: 0xc0cac84  jal         func_32B210
label_36e858:
    if (ctx->pc == 0x36E858u) {
        ctx->pc = 0x36E858u;
            // 0x36e858: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x36E85Cu;
        goto label_36e85c;
    }
    ctx->pc = 0x36E854u;
    SET_GPR_U32(ctx, 31, 0x36E85Cu);
    ctx->pc = 0x36E858u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36E854u;
            // 0x36e858: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B210u;
    if (runtime->hasFunction(0x32B210u)) {
        auto targetFn = runtime->lookupFunction(0x32B210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36E85Cu; }
        if (ctx->pc != 0x36E85Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B210_0x32b210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36E85Cu; }
        if (ctx->pc != 0x36E85Cu) { return; }
    }
    ctx->pc = 0x36E85Cu;
label_36e85c:
    // 0x36e85c: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x36e85cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_36e860:
    // 0x36e860: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x36e860u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_36e864:
    // 0x36e864: 0xc44cc910  lwc1        $f12, -0x36F0($v0)
    ctx->pc = 0x36e864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_36e868:
    // 0x36e868: 0xc0a5a68  jal         func_2969A0
label_36e86c:
    if (ctx->pc == 0x36E86Cu) {
        ctx->pc = 0x36E86Cu;
            // 0x36e86c: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x36E870u;
        goto label_36e870;
    }
    ctx->pc = 0x36E868u;
    SET_GPR_U32(ctx, 31, 0x36E870u);
    ctx->pc = 0x36E86Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36E868u;
            // 0x36e86c: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2969A0u;
    if (runtime->hasFunction(0x2969A0u)) {
        auto targetFn = runtime->lookupFunction(0x2969A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36E870u; }
        if (ctx->pc != 0x36E870u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002969A0_0x2969a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36E870u; }
        if (ctx->pc != 0x36E870u) { return; }
    }
    ctx->pc = 0x36E870u;
label_36e870:
    // 0x36e870: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x36e870u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_36e874:
    // 0x36e874: 0x3c0942c8  lui         $t1, 0x42C8
    ctx->pc = 0x36e874u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)17096 << 16));
label_36e878:
    // 0x36e878: 0x8c436048  lw          $v1, 0x6048($v0)
    ctx->pc = 0x36e878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24648)));
label_36e87c:
    // 0x36e87c: 0xc7a200d4  lwc1        $f2, 0xD4($sp)
    ctx->pc = 0x36e87cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_36e880:
    // 0x36e880: 0xc7a100d8  lwc1        $f1, 0xD8($sp)
    ctx->pc = 0x36e880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_36e884:
    // 0x36e884: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x36e884u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_36e888:
    // 0x36e888: 0xc7a000dc  lwc1        $f0, 0xDC($sp)
    ctx->pc = 0x36e888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_36e88c:
    // 0x36e88c: 0x24050220  addiu       $a1, $zero, 0x220
    ctx->pc = 0x36e88cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_36e890:
    // 0x36e890: 0x8c640060  lw          $a0, 0x60($v1)
    ctx->pc = 0x36e890u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
label_36e894:
    // 0x36e894: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x36e894u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
label_36e898:
    // 0x36e898: 0x3447cccd  ori         $a3, $v0, 0xCCCD
    ctx->pc = 0x36e898u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_36e89c:
    // 0x36e89c: 0x2406002b  addiu       $a2, $zero, 0x2B
    ctx->pc = 0x36e89cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_36e8a0:
    // 0x36e8a0: 0x3c0200e1  lui         $v0, 0xE1
    ctx->pc = 0x36e8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)225 << 16));
label_36e8a4:
    // 0x36e8a4: 0xafa400f4  sw          $a0, 0xF4($sp)
    ctx->pc = 0x36e8a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 4));
label_36e8a8:
    // 0x36e8a8: 0x34430140  ori         $v1, $v0, 0x140
    ctx->pc = 0x36e8a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)320);
label_36e8ac:
    // 0x36e8ac: 0xc64a0018  lwc1        $f10, 0x18($s2)
    ctx->pc = 0x36e8acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_36e8b0:
    // 0x36e8b0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x36e8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_36e8b4:
    // 0x36e8b4: 0xc6490014  lwc1        $f9, 0x14($s2)
    ctx->pc = 0x36e8b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_36e8b8:
    // 0x36e8b8: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x36e8b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_36e8bc:
    // 0x36e8bc: 0xc6480010  lwc1        $f8, 0x10($s2)
    ctx->pc = 0x36e8bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_36e8c0:
    // 0x36e8c0: 0xc7a700c0  lwc1        $f7, 0xC0($sp)
    ctx->pc = 0x36e8c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_36e8c4:
    // 0x36e8c4: 0xc7a600c4  lwc1        $f6, 0xC4($sp)
    ctx->pc = 0x36e8c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_36e8c8:
    // 0x36e8c8: 0xe7a20154  swc1        $f2, 0x154($sp)
    ctx->pc = 0x36e8c8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 340), bits); }
label_36e8cc:
    // 0x36e8cc: 0xafa90198  sw          $t1, 0x198($sp)
    ctx->pc = 0x36e8ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 408), GPR_U32(ctx, 9));
label_36e8d0:
    // 0x36e8d0: 0xe7a10158  swc1        $f1, 0x158($sp)
    ctx->pc = 0x36e8d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
label_36e8d4:
    // 0x36e8d4: 0xa3a801a0  sb          $t0, 0x1A0($sp)
    ctx->pc = 0x36e8d4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 416), (uint8_t)GPR_U32(ctx, 8));
label_36e8d8:
    // 0x36e8d8: 0xe7a0015c  swc1        $f0, 0x15C($sp)
    ctx->pc = 0x36e8d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 348), bits); }
label_36e8dc:
    // 0x36e8dc: 0xafa7019c  sw          $a3, 0x19C($sp)
    ctx->pc = 0x36e8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 412), GPR_U32(ctx, 7));
label_36e8e0:
    // 0x36e8e0: 0xc7a200e0  lwc1        $f2, 0xE0($sp)
    ctx->pc = 0x36e8e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_36e8e4:
    // 0x36e8e4: 0xafa300f0  sw          $v1, 0xF0($sp)
    ctx->pc = 0x36e8e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 3));
label_36e8e8:
    // 0x36e8e8: 0xc7a100e4  lwc1        $f1, 0xE4($sp)
    ctx->pc = 0x36e8e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_36e8ec:
    // 0x36e8ec: 0xafa0010c  sw          $zero, 0x10C($sp)
    ctx->pc = 0x36e8ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 0));
label_36e8f0:
    // 0x36e8f0: 0xc7a000e8  lwc1        $f0, 0xE8($sp)
    ctx->pc = 0x36e8f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_36e8f4:
    // 0x36e8f4: 0xe7a20160  swc1        $f2, 0x160($sp)
    ctx->pc = 0x36e8f4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
label_36e8f8:
    // 0x36e8f8: 0xe7a10164  swc1        $f1, 0x164($sp)
    ctx->pc = 0x36e8f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 356), bits); }
label_36e8fc:
    // 0x36e8fc: 0xe7a00168  swc1        $f0, 0x168($sp)
    ctx->pc = 0x36e8fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
label_36e900:
    // 0x36e900: 0xc7a200ec  lwc1        $f2, 0xEC($sp)
    ctx->pc = 0x36e900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_36e904:
    // 0x36e904: 0xc7a100b0  lwc1        $f1, 0xB0($sp)
    ctx->pc = 0x36e904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_36e908:
    // 0x36e908: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x36e908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_36e90c:
    // 0x36e90c: 0xe7a2016c  swc1        $f2, 0x16C($sp)
    ctx->pc = 0x36e90cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 364), bits); }
label_36e910:
    // 0x36e910: 0xe7a10170  swc1        $f1, 0x170($sp)
    ctx->pc = 0x36e910u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
label_36e914:
    // 0x36e914: 0xe7a00174  swc1        $f0, 0x174($sp)
    ctx->pc = 0x36e914u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 372), bits); }
label_36e918:
    // 0x36e918: 0xc7a500c8  lwc1        $f5, 0xC8($sp)
    ctx->pc = 0x36e918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_36e91c:
    // 0x36e91c: 0xc7a400cc  lwc1        $f4, 0xCC($sp)
    ctx->pc = 0x36e91cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_36e920:
    // 0x36e920: 0xc7a300d0  lwc1        $f3, 0xD0($sp)
    ctx->pc = 0x36e920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_36e924:
    // 0x36e924: 0xc7a200b8  lwc1        $f2, 0xB8($sp)
    ctx->pc = 0x36e924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_36e928:
    // 0x36e928: 0xc7a100bc  lwc1        $f1, 0xBC($sp)
    ctx->pc = 0x36e928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_36e92c:
    // 0x36e92c: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x36e92cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_36e930:
    // 0x36e930: 0xe7a80100  swc1        $f8, 0x100($sp)
    ctx->pc = 0x36e930u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_36e934:
    // 0x36e934: 0xe7a90104  swc1        $f9, 0x104($sp)
    ctx->pc = 0x36e934u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
label_36e938:
    // 0x36e938: 0xe7aa0108  swc1        $f10, 0x108($sp)
    ctx->pc = 0x36e938u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
label_36e93c:
    // 0x36e93c: 0xe7a70140  swc1        $f7, 0x140($sp)
    ctx->pc = 0x36e93cu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_36e940:
    // 0x36e940: 0xe7a60144  swc1        $f6, 0x144($sp)
    ctx->pc = 0x36e940u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
label_36e944:
    // 0x36e944: 0xe7a50148  swc1        $f5, 0x148($sp)
    ctx->pc = 0x36e944u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
label_36e948:
    // 0x36e948: 0xe7a4014c  swc1        $f4, 0x14C($sp)
    ctx->pc = 0x36e948u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
label_36e94c:
    // 0x36e94c: 0xe7a30150  swc1        $f3, 0x150($sp)
    ctx->pc = 0x36e94cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
label_36e950:
    // 0x36e950: 0xe7a20178  swc1        $f2, 0x178($sp)
    ctx->pc = 0x36e950u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 376), bits); }
label_36e954:
    // 0x36e954: 0xe7a1017c  swc1        $f1, 0x17C($sp)
    ctx->pc = 0x36e954u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 380), bits); }
label_36e958:
    // 0x36e958: 0xc0a7a88  jal         func_29EA20
label_36e95c:
    if (ctx->pc == 0x36E95Cu) {
        ctx->pc = 0x36E95Cu;
            // 0x36e95c: 0xe7a00180  swc1        $f0, 0x180($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
        ctx->pc = 0x36E960u;
        goto label_36e960;
    }
    ctx->pc = 0x36E958u;
    SET_GPR_U32(ctx, 31, 0x36E960u);
    ctx->pc = 0x36E95Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36E958u;
            // 0x36e95c: 0xe7a00180  swc1        $f0, 0x180($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36E960u; }
        if (ctx->pc != 0x36E960u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36E960u; }
        if (ctx->pc != 0x36E960u) { return; }
    }
    ctx->pc = 0x36E960u;
label_36e960:
    // 0x36e960: 0x24030220  addiu       $v1, $zero, 0x220
    ctx->pc = 0x36e960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_36e964:
    // 0x36e964: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x36e964u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_36e968:
    // 0x36e968: 0x12200013  beqz        $s1, . + 4 + (0x13 << 2)
label_36e96c:
    if (ctx->pc == 0x36E96Cu) {
        ctx->pc = 0x36E96Cu;
            // 0x36e96c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x36E970u;
        goto label_36e970;
    }
    ctx->pc = 0x36E968u;
    {
        const bool branch_taken_0x36e968 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x36E96Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36E968u;
            // 0x36e96c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e968) {
            ctx->pc = 0x36E9B8u;
            goto label_36e9b8;
        }
    }
    ctx->pc = 0x36E970u;
label_36e970:
    // 0x36e970: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x36e970u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_36e974:
    // 0x36e974: 0xc088ef4  jal         func_223BD0
label_36e978:
    if (ctx->pc == 0x36E978u) {
        ctx->pc = 0x36E978u;
            // 0x36e978: 0x27a500f0  addiu       $a1, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x36E97Cu;
        goto label_36e97c;
    }
    ctx->pc = 0x36E974u;
    SET_GPR_U32(ctx, 31, 0x36E97Cu);
    ctx->pc = 0x36E978u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36E974u;
            // 0x36e978: 0x27a500f0  addiu       $a1, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x223BD0u;
    if (runtime->hasFunction(0x223BD0u)) {
        auto targetFn = runtime->lookupFunction(0x223BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36E97Cu; }
        if (ctx->pc != 0x36E97Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00223BD0_0x223bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36E97Cu; }
        if (ctx->pc != 0x36E97Cu) { return; }
    }
    ctx->pc = 0x36E97Cu;
label_36e97c:
    // 0x36e97c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x36e97cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_36e980:
    // 0x36e980: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x36e980u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_36e984:
    // 0x36e984: 0x24422240  addiu       $v0, $v0, 0x2240
    ctx->pc = 0x36e984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8768));
label_36e988:
    // 0x36e988: 0x24632260  addiu       $v1, $v1, 0x2260
    ctx->pc = 0x36e988u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8800));
label_36e98c:
    // 0x36e98c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x36e98cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_36e990:
    // 0x36e990: 0xae200200  sw          $zero, 0x200($s1)
    ctx->pc = 0x36e990u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 512), GPR_U32(ctx, 0));
label_36e994:
    // 0x36e994: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x36e994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_36e998:
    // 0x36e998: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x36e998u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_36e99c:
    // 0x36e99c: 0xae200210  sw          $zero, 0x210($s1)
    ctx->pc = 0x36e99cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 528), GPR_U32(ctx, 0));
label_36e9a0:
    // 0x36e9a0: 0xae200214  sw          $zero, 0x214($s1)
    ctx->pc = 0x36e9a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 532), GPR_U32(ctx, 0));
label_36e9a4:
    // 0x36e9a4: 0xae32000c  sw          $s2, 0xC($s1)
    ctx->pc = 0x36e9a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 18));
label_36e9a8:
    // 0x36e9a8: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x36e9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_36e9ac:
    // 0x36e9ac: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x36e9acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_36e9b0:
    // 0x36e9b0: 0xc088b38  jal         func_222CE0
label_36e9b4:
    if (ctx->pc == 0x36E9B4u) {
        ctx->pc = 0x36E9B4u;
            // 0x36e9b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36E9B8u;
        goto label_36e9b8;
    }
    ctx->pc = 0x36E9B0u;
    SET_GPR_U32(ctx, 31, 0x36E9B8u);
    ctx->pc = 0x36E9B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36E9B0u;
            // 0x36e9b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222CE0u;
    if (runtime->hasFunction(0x222CE0u)) {
        auto targetFn = runtime->lookupFunction(0x222CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36E9B8u; }
        if (ctx->pc != 0x36E9B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222CE0_0x222ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36E9B8u; }
        if (ctx->pc != 0x36E9B8u) { return; }
    }
    ctx->pc = 0x36E9B8u;
label_36e9b8:
    // 0x36e9b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x36e9b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_36e9bc:
    // 0x36e9bc: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x36e9bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_36e9c0:
    // 0x36e9c0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x36e9c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_36e9c4:
    // 0x36e9c4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x36e9c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_36e9c8:
    // 0x36e9c8: 0xc08914c  jal         func_224530
label_36e9cc:
    if (ctx->pc == 0x36E9CCu) {
        ctx->pc = 0x36E9CCu;
            // 0x36e9cc: 0xae200200  sw          $zero, 0x200($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 512), GPR_U32(ctx, 0));
        ctx->pc = 0x36E9D0u;
        goto label_36e9d0;
    }
    ctx->pc = 0x36E9C8u;
    SET_GPR_U32(ctx, 31, 0x36E9D0u);
    ctx->pc = 0x36E9CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36E9C8u;
            // 0x36e9cc: 0xae200200  sw          $zero, 0x200($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 512), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36E9D0u; }
        if (ctx->pc != 0x36E9D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36E9D0u; }
        if (ctx->pc != 0x36E9D0u) { return; }
    }
    ctx->pc = 0x36E9D0u;
label_36e9d0:
    // 0x36e9d0: 0xc6420018  lwc1        $f2, 0x18($s2)
    ctx->pc = 0x36e9d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_36e9d4:
    // 0x36e9d4: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x36e9d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_36e9d8:
    // 0x36e9d8: 0xc6410014  lwc1        $f1, 0x14($s2)
    ctx->pc = 0x36e9d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_36e9dc:
    // 0x36e9dc: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x36e9dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_36e9e0:
    // 0x36e9e0: 0xc6400010  lwc1        $f0, 0x10($s2)
    ctx->pc = 0x36e9e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_36e9e4:
    // 0x36e9e4: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x36e9e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_36e9e8:
    // 0x36e9e8: 0xe7a10094  swc1        $f1, 0x94($sp)
    ctx->pc = 0x36e9e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_36e9ec:
    // 0x36e9ec: 0xe7a20098  swc1        $f2, 0x98($sp)
    ctx->pc = 0x36e9ecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_36e9f0:
    // 0x36e9f0: 0xafa0009c  sw          $zero, 0x9C($sp)
    ctx->pc = 0x36e9f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 0));
label_36e9f4:
    // 0x36e9f4: 0xc643002c  lwc1        $f3, 0x2C($s2)
    ctx->pc = 0x36e9f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_36e9f8:
    // 0x36e9f8: 0xc6420028  lwc1        $f2, 0x28($s2)
    ctx->pc = 0x36e9f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_36e9fc:
    // 0x36e9fc: 0xc6410024  lwc1        $f1, 0x24($s2)
    ctx->pc = 0x36e9fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_36ea00:
    // 0x36ea00: 0xc6400020  lwc1        $f0, 0x20($s2)
    ctx->pc = 0x36ea00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_36ea04:
    // 0x36ea04: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x36ea04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_36ea08:
    // 0x36ea08: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x36ea08u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_36ea0c:
    // 0x36ea0c: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x36ea0cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_36ea10:
    // 0x36ea10: 0xc0a3830  jal         func_28E0C0
label_36ea14:
    if (ctx->pc == 0x36EA14u) {
        ctx->pc = 0x36EA14u;
            // 0x36ea14: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->pc = 0x36EA18u;
        goto label_36ea18;
    }
    ctx->pc = 0x36EA10u;
    SET_GPR_U32(ctx, 31, 0x36EA18u);
    ctx->pc = 0x36EA14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36EA10u;
            // 0x36ea14: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x28E0C0u;
    if (runtime->hasFunction(0x28E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x28E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36EA18u; }
        if (ctx->pc != 0x36EA18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028E0C0_0x28e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36EA18u; }
        if (ctx->pc != 0x36EA18u) { return; }
    }
    ctx->pc = 0x36EA18u;
label_36ea18:
    // 0x36ea18: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x36ea18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_36ea1c:
    // 0x36ea1c: 0xc0892c0  jal         func_224B00
label_36ea20:
    if (ctx->pc == 0x36EA20u) {
        ctx->pc = 0x36EA20u;
            // 0x36ea20: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x36EA24u;
        goto label_36ea24;
    }
    ctx->pc = 0x36EA1Cu;
    SET_GPR_U32(ctx, 31, 0x36EA24u);
    ctx->pc = 0x36EA20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36EA1Cu;
            // 0x36ea20: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224B00u;
    if (runtime->hasFunction(0x224B00u)) {
        auto targetFn = runtime->lookupFunction(0x224B00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36EA24u; }
        if (ctx->pc != 0x36EA24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224B00_0x224b00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36EA24u; }
        if (ctx->pc != 0x36EA24u) { return; }
    }
    ctx->pc = 0x36EA24u;
label_36ea24:
    // 0x36ea24: 0x3c02bf00  lui         $v0, 0xBF00
    ctx->pc = 0x36ea24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48896 << 16));
label_36ea28:
    // 0x36ea28: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x36ea28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_36ea2c:
    // 0x36ea2c: 0xafa20054  sw          $v0, 0x54($sp)
    ctx->pc = 0x36ea2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
label_36ea30:
    // 0x36ea30: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x36ea30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_36ea34:
    // 0x36ea34: 0xafa20058  sw          $v0, 0x58($sp)
    ctx->pc = 0x36ea34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
label_36ea38:
    // 0x36ea38: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x36ea38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
label_36ea3c:
    // 0x36ea3c: 0xc0891d8  jal         func_224760
label_36ea40:
    if (ctx->pc == 0x36EA40u) {
        ctx->pc = 0x36EA40u;
            // 0x36ea40: 0xafa0005c  sw          $zero, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
        ctx->pc = 0x36EA44u;
        goto label_36ea44;
    }
    ctx->pc = 0x36EA3Cu;
    SET_GPR_U32(ctx, 31, 0x36EA44u);
    ctx->pc = 0x36EA40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36EA3Cu;
            // 0x36ea40: 0xafa0005c  sw          $zero, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224760u;
    if (runtime->hasFunction(0x224760u)) {
        auto targetFn = runtime->lookupFunction(0x224760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36EA44u; }
        if (ctx->pc != 0x36EA44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224760_0x224760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36EA44u; }
        if (ctx->pc != 0x36EA44u) { return; }
    }
    ctx->pc = 0x36EA44u;
label_36ea44:
    // 0x36ea44: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x36ea44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_36ea48:
    // 0x36ea48: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x36ea48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_36ea4c:
    // 0x36ea4c: 0xc08c164  jal         func_230590
label_36ea50:
    if (ctx->pc == 0x36EA50u) {
        ctx->pc = 0x36EA50u;
            // 0x36ea50: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x36EA54u;
        goto label_36ea54;
    }
    ctx->pc = 0x36EA4Cu;
    SET_GPR_U32(ctx, 31, 0x36EA54u);
    ctx->pc = 0x36EA50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36EA4Cu;
            // 0x36ea50: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x230590u;
    if (runtime->hasFunction(0x230590u)) {
        auto targetFn = runtime->lookupFunction(0x230590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36EA54u; }
        if (ctx->pc != 0x36EA54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00230590_0x230590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36EA54u; }
        if (ctx->pc != 0x36EA54u) { return; }
    }
    ctx->pc = 0x36EA54u;
label_36ea54:
    // 0x36ea54: 0xae510050  sw          $s1, 0x50($s2)
    ctx->pc = 0x36ea54u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 17));
label_36ea58:
    // 0x36ea58: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x36ea58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_36ea5c:
    // 0x36ea5c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x36ea5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_36ea60:
    // 0x36ea60: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x36ea60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_36ea64:
    // 0x36ea64: 0xc0a7a88  jal         func_29EA20
label_36ea68:
    if (ctx->pc == 0x36EA68u) {
        ctx->pc = 0x36EA68u;
            // 0x36ea68: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->pc = 0x36EA6Cu;
        goto label_36ea6c;
    }
    ctx->pc = 0x36EA64u;
    SET_GPR_U32(ctx, 31, 0x36EA6Cu);
    ctx->pc = 0x36EA68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36EA64u;
            // 0x36ea68: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36EA6Cu; }
        if (ctx->pc != 0x36EA6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36EA6Cu; }
        if (ctx->pc != 0x36EA6Cu) { return; }
    }
    ctx->pc = 0x36EA6Cu;
label_36ea6c:
    // 0x36ea6c: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x36ea6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_36ea70:
    // 0x36ea70: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x36ea70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_36ea74:
    // 0x36ea74: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_36ea78:
    if (ctx->pc == 0x36EA78u) {
        ctx->pc = 0x36EA78u;
            // 0x36ea78: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x36EA7Cu;
        goto label_36ea7c;
    }
    ctx->pc = 0x36EA74u;
    {
        const bool branch_taken_0x36ea74 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x36EA78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36EA74u;
            // 0x36ea78: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36ea74) {
            ctx->pc = 0x36EA98u;
            goto label_36ea98;
        }
    }
    ctx->pc = 0x36EA7Cu;
label_36ea7c:
    // 0x36ea7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36ea7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_36ea80:
    // 0x36ea80: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x36ea80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_36ea84:
    // 0x36ea84: 0xc0869d0  jal         func_21A740
label_36ea88:
    if (ctx->pc == 0x36EA88u) {
        ctx->pc = 0x36EA88u;
            // 0x36ea88: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36EA8Cu;
        goto label_36ea8c;
    }
    ctx->pc = 0x36EA84u;
    SET_GPR_U32(ctx, 31, 0x36EA8Cu);
    ctx->pc = 0x36EA88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36EA84u;
            // 0x36ea88: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21A740u;
    if (runtime->hasFunction(0x21A740u)) {
        auto targetFn = runtime->lookupFunction(0x21A740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36EA8Cu; }
        if (ctx->pc != 0x36EA8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021A740_0x21a740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36EA8Cu; }
        if (ctx->pc != 0x36EA8Cu) { return; }
    }
    ctx->pc = 0x36EA8Cu;
label_36ea8c:
    // 0x36ea8c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x36ea8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_36ea90:
    // 0x36ea90: 0x24422210  addiu       $v0, $v0, 0x2210
    ctx->pc = 0x36ea90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8720));
label_36ea94:
    // 0x36ea94: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x36ea94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_36ea98:
    // 0x36ea98: 0xae300210  sw          $s0, 0x210($s1)
    ctx->pc = 0x36ea98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 528), GPR_U32(ctx, 16));
label_36ea9c:
    // 0x36ea9c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x36ea9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_36eaa0:
    // 0x36eaa0: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x36eaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_36eaa4:
    // 0x36eaa4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x36eaa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_36eaa8:
    // 0x36eaa8: 0xc08c650  jal         func_231940
label_36eaac:
    if (ctx->pc == 0x36EAACu) {
        ctx->pc = 0x36EAACu;
            // 0x36eaac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36EAB0u;
        goto label_36eab0;
    }
    ctx->pc = 0x36EAA8u;
    SET_GPR_U32(ctx, 31, 0x36EAB0u);
    ctx->pc = 0x36EAACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36EAA8u;
            // 0x36eaac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231940u;
    if (runtime->hasFunction(0x231940u)) {
        auto targetFn = runtime->lookupFunction(0x231940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36EAB0u; }
        if (ctx->pc != 0x36EAB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231940_0x231940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36EAB0u; }
        if (ctx->pc != 0x36EAB0u) { return; }
    }
    ctx->pc = 0x36EAB0u;
label_36eab0:
    // 0x36eab0: 0xc040180  jal         func_100600
label_36eab4:
    if (ctx->pc == 0x36EAB4u) {
        ctx->pc = 0x36EAB4u;
            // 0x36eab4: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->pc = 0x36EAB8u;
        goto label_36eab8;
    }
    ctx->pc = 0x36EAB0u;
    SET_GPR_U32(ctx, 31, 0x36EAB8u);
    ctx->pc = 0x36EAB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36EAB0u;
            // 0x36eab4: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36EAB8u; }
        if (ctx->pc != 0x36EAB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36EAB8u; }
        if (ctx->pc != 0x36EAB8u) { return; }
    }
    ctx->pc = 0x36EAB8u;
label_36eab8:
    // 0x36eab8: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
label_36eabc:
    if (ctx->pc == 0x36EABCu) {
        ctx->pc = 0x36EABCu;
            // 0x36eabc: 0xae4200a0  sw          $v0, 0xA0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 160), GPR_U32(ctx, 2));
        ctx->pc = 0x36EAC0u;
        goto label_36eac0;
    }
    ctx->pc = 0x36EAB8u;
    {
        const bool branch_taken_0x36eab8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x36eab8) {
            ctx->pc = 0x36EABCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x36EAB8u;
            // 0x36eabc: 0xae4200a0  sw          $v0, 0xA0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 160), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x36EB08u;
            goto label_36eb08;
        }
    }
    ctx->pc = 0x36EAC0u;
label_36eac0:
    // 0x36eac0: 0x8e460050  lw          $a2, 0x50($s2)
    ctx->pc = 0x36eac0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_36eac4:
    // 0x36eac4: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x36eac4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
label_36eac8:
    // 0x36eac8: 0x24a521e0  addiu       $a1, $a1, 0x21E0
    ctx->pc = 0x36eac8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8672));
label_36eacc:
    // 0x36eacc: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x36eaccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
label_36ead0:
    // 0x36ead0: 0x3c04c000  lui         $a0, 0xC000
    ctx->pc = 0x36ead0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49152 << 16));
label_36ead4:
    // 0x36ead4: 0x24636020  addiu       $v1, $v1, 0x6020
    ctx->pc = 0x36ead4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24608));
label_36ead8:
    // 0x36ead8: 0xac450048  sw          $a1, 0x48($v0)
    ctx->pc = 0x36ead8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 5));
label_36eadc:
    // 0x36eadc: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x36eadcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
label_36eae0:
    // 0x36eae0: 0xac460024  sw          $a2, 0x24($v0)
    ctx->pc = 0x36eae0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 6));
label_36eae4:
    // 0x36eae4: 0xac440028  sw          $a0, 0x28($v0)
    ctx->pc = 0x36eae4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 4));
label_36eae8:
    // 0x36eae8: 0xac40002c  sw          $zero, 0x2C($v0)
    ctx->pc = 0x36eae8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
label_36eaec:
    // 0x36eaec: 0xac400030  sw          $zero, 0x30($v0)
    ctx->pc = 0x36eaecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
label_36eaf0:
    // 0x36eaf0: 0xac400034  sw          $zero, 0x34($v0)
    ctx->pc = 0x36eaf0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 0));
label_36eaf4:
    // 0x36eaf4: 0xac400038  sw          $zero, 0x38($v0)
    ctx->pc = 0x36eaf4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 0));
label_36eaf8:
    // 0x36eaf8: 0xac43003c  sw          $v1, 0x3C($v0)
    ctx->pc = 0x36eaf8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 3));
label_36eafc:
    // 0x36eafc: 0xac400040  sw          $zero, 0x40($v0)
    ctx->pc = 0x36eafcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
label_36eb00:
    // 0x36eb00: 0xac400044  sw          $zero, 0x44($v0)
    ctx->pc = 0x36eb00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 0));
label_36eb04:
    // 0x36eb04: 0xae4200a0  sw          $v0, 0xA0($s2)
    ctx->pc = 0x36eb04u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 160), GPR_U32(ctx, 2));
label_36eb08:
    // 0x36eb08: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x36eb08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_36eb0c:
    // 0x36eb0c: 0x8e4300b0  lw          $v1, 0xB0($s2)
    ctx->pc = 0x36eb0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
label_36eb10:
    // 0x36eb10: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x36eb10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_36eb14:
    // 0x36eb14: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x36eb14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_36eb18:
    // 0x36eb18: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x36eb18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_36eb1c:
    // 0x36eb1c: 0xc040180  jal         func_100600
label_36eb20:
    if (ctx->pc == 0x36EB20u) {
        ctx->pc = 0x36EB20u;
            // 0x36eb20: 0xae4200b0  sw          $v0, 0xB0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 176), GPR_U32(ctx, 2));
        ctx->pc = 0x36EB24u;
        goto label_36eb24;
    }
    ctx->pc = 0x36EB1Cu;
    SET_GPR_U32(ctx, 31, 0x36EB24u);
    ctx->pc = 0x36EB20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36EB1Cu;
            // 0x36eb20: 0xae4200b0  sw          $v0, 0xB0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36EB24u; }
        if (ctx->pc != 0x36EB24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36EB24u; }
        if (ctx->pc != 0x36EB24u) { return; }
    }
    ctx->pc = 0x36EB24u;
label_36eb24:
    // 0x36eb24: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x36eb24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_36eb28:
    // 0x36eb28: 0x1200001f  beqz        $s0, . + 4 + (0x1F << 2)
label_36eb2c:
    if (ctx->pc == 0x36EB2Cu) {
        ctx->pc = 0x36EB30u;
        goto label_36eb30;
    }
    ctx->pc = 0x36EB28u;
    {
        const bool branch_taken_0x36eb28 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x36eb28) {
            ctx->pc = 0x36EBA8u;
            goto label_36eba8;
        }
    }
    ctx->pc = 0x36EB30u;
label_36eb30:
    // 0x36eb30: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x36eb30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_36eb34:
    // 0x36eb34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x36eb34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_36eb38:
    // 0x36eb38: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x36eb38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_36eb3c:
    // 0x36eb3c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x36eb3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_36eb40:
    // 0x36eb40: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x36eb40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_36eb44:
    // 0x36eb44: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x36eb44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_36eb48:
    // 0x36eb48: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x36eb48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_36eb4c:
    // 0x36eb4c: 0xc040138  jal         func_1004E0
label_36eb50:
    if (ctx->pc == 0x36EB50u) {
        ctx->pc = 0x36EB50u;
            // 0x36eb50: 0xa2000020  sb          $zero, 0x20($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 32), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x36EB54u;
        goto label_36eb54;
    }
    ctx->pc = 0x36EB4Cu;
    SET_GPR_U32(ctx, 31, 0x36EB54u);
    ctx->pc = 0x36EB50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36EB4Cu;
            // 0x36eb50: 0xa2000020  sb          $zero, 0x20($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 32), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36EB54u; }
        if (ctx->pc != 0x36EB54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36EB54u; }
        if (ctx->pc != 0x36EB54u) { return; }
    }
    ctx->pc = 0x36EB54u;
label_36eb54:
    // 0x36eb54: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x36eb54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_36eb58:
    // 0x36eb58: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x36eb58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_36eb5c:
    // 0x36eb5c: 0xc040138  jal         func_1004E0
label_36eb60:
    if (ctx->pc == 0x36EB60u) {
        ctx->pc = 0x36EB60u;
            // 0x36eb60: 0x24040070  addiu       $a0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->pc = 0x36EB64u;
        goto label_36eb64;
    }
    ctx->pc = 0x36EB5Cu;
    SET_GPR_U32(ctx, 31, 0x36EB64u);
    ctx->pc = 0x36EB60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36EB5Cu;
            // 0x36eb60: 0x24040070  addiu       $a0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36EB64u; }
        if (ctx->pc != 0x36EB64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36EB64u; }
        if (ctx->pc != 0x36EB64u) { return; }
    }
    ctx->pc = 0x36EB64u;
label_36eb64:
    // 0x36eb64: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x36eb64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_36eb68:
    // 0x36eb68: 0x3c06002c  lui         $a2, 0x2C
    ctx->pc = 0x36eb68u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)44 << 16));
label_36eb6c:
    // 0x36eb6c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x36eb6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_36eb70:
    // 0x36eb70: 0x24a583b0  addiu       $a1, $a1, -0x7C50
    ctx->pc = 0x36eb70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935472));
label_36eb74:
    // 0x36eb74: 0x24c6b410  addiu       $a2, $a2, -0x4BF0
    ctx->pc = 0x36eb74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294947856));
label_36eb78:
    // 0x36eb78: 0x24070060  addiu       $a3, $zero, 0x60
    ctx->pc = 0x36eb78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_36eb7c:
    // 0x36eb7c: 0xc040840  jal         func_102100
label_36eb80:
    if (ctx->pc == 0x36EB80u) {
        ctx->pc = 0x36EB80u;
            // 0x36eb80: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x36EB84u;
        goto label_36eb84;
    }
    ctx->pc = 0x36EB7Cu;
    SET_GPR_U32(ctx, 31, 0x36EB84u);
    ctx->pc = 0x36EB80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36EB7Cu;
            // 0x36eb80: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36EB84u; }
        if (ctx->pc != 0x36EB84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36EB84u; }
        if (ctx->pc != 0x36EB84u) { return; }
    }
    ctx->pc = 0x36EB84u;
label_36eb84:
    // 0x36eb84: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x36eb84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_36eb88:
    // 0x36eb88: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x36eb88u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_36eb8c:
    // 0x36eb8c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x36eb8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_36eb90:
    // 0x36eb90: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x36eb90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_36eb94:
    // 0x36eb94: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x36eb94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
label_36eb98:
    // 0x36eb98: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x36eb98u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_36eb9c:
    // 0x36eb9c: 0x0  nop
    ctx->pc = 0x36eb9cu;
    // NOP
label_36eba0:
    // 0x36eba0: 0x1860fffa  blez        $v1, . + 4 + (-0x6 << 2)
label_36eba4:
    if (ctx->pc == 0x36EBA4u) {
        ctx->pc = 0x36EBA8u;
        goto label_36eba8;
    }
    ctx->pc = 0x36EBA0u;
    {
        const bool branch_taken_0x36eba0 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x36eba0) {
            ctx->pc = 0x36EB8Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_36eb8c;
        }
    }
    ctx->pc = 0x36EBA8u;
label_36eba8:
    // 0x36eba8: 0xae50009c  sw          $s0, 0x9C($s2)
    ctx->pc = 0x36eba8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 156), GPR_U32(ctx, 16));
label_36ebac:
    // 0x36ebac: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x36ebacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_36ebb0:
    // 0x36ebb0: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x36ebb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
label_36ebb4:
    // 0x36ebb4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x36ebb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_36ebb8:
    // 0x36ebb8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x36ebb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_36ebbc:
    // 0x36ebbc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x36ebbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_36ebc0:
    // 0x36ebc0: 0xc0e7d2c  jal         func_39F4B0
label_36ebc4:
    if (ctx->pc == 0x36EBC4u) {
        ctx->pc = 0x36EBC4u;
            // 0x36ebc4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36EBC8u;
        goto label_36ebc8;
    }
    ctx->pc = 0x36EBC0u;
    SET_GPR_U32(ctx, 31, 0x36EBC8u);
    ctx->pc = 0x36EBC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36EBC0u;
            // 0x36ebc4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x39F4B0u;
    if (runtime->hasFunction(0x39F4B0u)) {
        auto targetFn = runtime->lookupFunction(0x39F4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36EBC8u; }
        if (ctx->pc != 0x36EBC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0039F4B0_0x39f4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36EBC8u; }
        if (ctx->pc != 0x36EBC8u) { return; }
    }
    ctx->pc = 0x36EBC8u;
label_36ebc8:
    // 0x36ebc8: 0x8e4500b0  lw          $a1, 0xB0($s2)
    ctx->pc = 0x36ebc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
label_36ebcc:
    // 0x36ebcc: 0x2403fff7  addiu       $v1, $zero, -0x9
    ctx->pc = 0x36ebccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
label_36ebd0:
    // 0x36ebd0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x36ebd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_36ebd4:
    // 0x36ebd4: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x36ebd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_36ebd8:
    // 0x36ebd8: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x36ebd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
label_36ebdc:
    // 0x36ebdc: 0xae4300b0  sw          $v1, 0xB0($s2)
    ctx->pc = 0x36ebdcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 176), GPR_U32(ctx, 3));
label_36ebe0:
    // 0x36ebe0: 0x8c510e80  lw          $s1, 0xE80($v0)
    ctx->pc = 0x36ebe0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_36ebe4:
    // 0x36ebe4: 0xc040180  jal         func_100600
label_36ebe8:
    if (ctx->pc == 0x36EBE8u) {
        ctx->pc = 0x36EBE8u;
            // 0x36ebe8: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->pc = 0x36EBECu;
        goto label_36ebec;
    }
    ctx->pc = 0x36EBE4u;
    SET_GPR_U32(ctx, 31, 0x36EBECu);
    ctx->pc = 0x36EBE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36EBE4u;
            // 0x36ebe8: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36EBECu; }
        if (ctx->pc != 0x36EBECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36EBECu; }
        if (ctx->pc != 0x36EBECu) { return; }
    }
    ctx->pc = 0x36EBECu;
label_36ebec:
    // 0x36ebec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x36ebecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_36ebf0:
    // 0x36ebf0: 0x5200000f  beql        $s0, $zero, . + 4 + (0xF << 2)
label_36ebf4:
    if (ctx->pc == 0x36EBF4u) {
        ctx->pc = 0x36EBF4u;
            // 0x36ebf4: 0xae5000d0  sw          $s0, 0xD0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 208), GPR_U32(ctx, 16));
        ctx->pc = 0x36EBF8u;
        goto label_36ebf8;
    }
    ctx->pc = 0x36EBF0u;
    {
        const bool branch_taken_0x36ebf0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x36ebf0) {
            ctx->pc = 0x36EBF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x36EBF0u;
            // 0x36ebf4: 0xae5000d0  sw          $s0, 0xD0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 208), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x36EC30u;
            goto label_36ec30;
        }
    }
    ctx->pc = 0x36EBF8u;
label_36ebf8:
    // 0x36ebf8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x36ebf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_36ebfc:
    // 0x36ebfc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x36ebfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_36ec00:
    // 0x36ec00: 0x24632db8  addiu       $v1, $v1, 0x2DB8
    ctx->pc = 0x36ec00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11704));
label_36ec04:
    // 0x36ec04: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x36ec04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_36ec08:
    // 0x36ec08: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x36ec08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_36ec0c:
    // 0x36ec0c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x36ec0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_36ec10:
    // 0x36ec10: 0xc040138  jal         func_1004E0
label_36ec14:
    if (ctx->pc == 0x36EC14u) {
        ctx->pc = 0x36EC14u;
            // 0x36ec14: 0xa2020008  sb          $v0, 0x8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x36EC18u;
        goto label_36ec18;
    }
    ctx->pc = 0x36EC10u;
    SET_GPR_U32(ctx, 31, 0x36EC18u);
    ctx->pc = 0x36EC14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36EC10u;
            // 0x36ec14: 0xa2020008  sb          $v0, 0x8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36EC18u; }
        if (ctx->pc != 0x36EC18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36EC18u; }
        if (ctx->pc != 0x36EC18u) { return; }
    }
    ctx->pc = 0x36EC18u;
label_36ec18:
    // 0x36ec18: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x36ec18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_36ec1c:
    // 0x36ec1c: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x36ec1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_36ec20:
    // 0x36ec20: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x36ec20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_36ec24:
    // 0x36ec24: 0xc04a576  jal         func_1295D8
label_36ec28:
    if (ctx->pc == 0x36EC28u) {
        ctx->pc = 0x36EC28u;
            // 0x36ec28: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x36EC2Cu;
        goto label_36ec2c;
    }
    ctx->pc = 0x36EC24u;
    SET_GPR_U32(ctx, 31, 0x36EC2Cu);
    ctx->pc = 0x36EC28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36EC24u;
            // 0x36ec28: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36EC2Cu; }
        if (ctx->pc != 0x36EC2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36EC2Cu; }
        if (ctx->pc != 0x36EC2Cu) { return; }
    }
    ctx->pc = 0x36EC2Cu;
label_36ec2c:
    // 0x36ec2c: 0xae5000d0  sw          $s0, 0xD0($s2)
    ctx->pc = 0x36ec2cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 208), GPR_U32(ctx, 16));
label_36ec30:
    // 0x36ec30: 0x3c060065  lui         $a2, 0x65
    ctx->pc = 0x36ec30u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)101 << 16));
label_36ec34:
    // 0x36ec34: 0x92270c6a  lbu         $a3, 0xC6A($s1)
    ctx->pc = 0x36ec34u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3178)));
label_36ec38:
    // 0x36ec38: 0x3c034774  lui         $v1, 0x4774
    ctx->pc = 0x36ec38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18292 << 16));
label_36ec3c:
    // 0x36ec3c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x36ec3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_36ec40:
    // 0x36ec40: 0x34632400  ori         $v1, $v1, 0x2400
    ctx->pc = 0x36ec40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9216);
label_36ec44:
    // 0x36ec44: 0x24c64da8  addiu       $a2, $a2, 0x4DA8
    ctx->pc = 0x36ec44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19880));
label_36ec48:
    // 0x36ec48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36ec48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_36ec4c:
    // 0x36ec4c: 0x74080  sll         $t0, $a3, 2
    ctx->pc = 0x36ec4cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_36ec50:
    // 0x36ec50: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x36ec50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_36ec54:
    // 0x36ec54: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x36ec54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
label_36ec58:
    // 0x36ec58: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x36ec58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_36ec5c:
    // 0x36ec5c: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x36ec5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_36ec60:
    // 0x36ec60: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x36ec60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_36ec64:
    // 0x36ec64: 0xc122cd8  jal         func_48B360
label_36ec68:
    if (ctx->pc == 0x36EC68u) {
        ctx->pc = 0x36EC68u;
            // 0x36ec68: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36EC6Cu;
        goto label_36ec6c;
    }
    ctx->pc = 0x36EC64u;
    SET_GPR_U32(ctx, 31, 0x36EC6Cu);
    ctx->pc = 0x36EC68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36EC64u;
            // 0x36ec68: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B360u;
    if (runtime->hasFunction(0x48B360u)) {
        auto targetFn = runtime->lookupFunction(0x48B360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36EC6Cu; }
        if (ctx->pc != 0x36EC6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B360_0x48b360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36EC6Cu; }
        if (ctx->pc != 0x36EC6Cu) { return; }
    }
    ctx->pc = 0x36EC6Cu;
label_36ec6c:
    // 0x36ec6c: 0x3c024774  lui         $v0, 0x4774
    ctx->pc = 0x36ec6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18292 << 16));
label_36ec70:
    // 0x36ec70: 0x8e4400d0  lw          $a0, 0xD0($s2)
    ctx->pc = 0x36ec70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 208)));
label_36ec74:
    // 0x36ec74: 0x34432400  ori         $v1, $v0, 0x2400
    ctx->pc = 0x36ec74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9216);
label_36ec78:
    // 0x36ec78: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36ec78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_36ec7c:
    // 0x36ec7c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x36ec7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_36ec80:
    // 0x36ec80: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x36ec80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_36ec84:
    // 0x36ec84: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x36ec84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_36ec88:
    // 0x36ec88: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x36ec88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_36ec8c:
    // 0x36ec8c: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x36ec8cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_36ec90:
    // 0x36ec90: 0xc122cd8  jal         func_48B360
label_36ec94:
    if (ctx->pc == 0x36EC94u) {
        ctx->pc = 0x36EC94u;
            // 0x36ec94: 0x344601ae  ori         $a2, $v0, 0x1AE (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)430);
        ctx->pc = 0x36EC98u;
        goto label_36ec98;
    }
    ctx->pc = 0x36EC90u;
    SET_GPR_U32(ctx, 31, 0x36EC98u);
    ctx->pc = 0x36EC94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36EC90u;
            // 0x36ec94: 0x344601ae  ori         $a2, $v0, 0x1AE (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)430);
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B360u;
    if (runtime->hasFunction(0x48B360u)) {
        auto targetFn = runtime->lookupFunction(0x48B360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36EC98u; }
        if (ctx->pc != 0x36EC98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B360_0x48b360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36EC98u; }
        if (ctx->pc != 0x36EC98u) { return; }
    }
    ctx->pc = 0x36EC98u;
label_36ec98:
    // 0x36ec98: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x36ec98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_36ec9c:
    // 0x36ec9c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x36ec9cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_36eca0:
    // 0x36eca0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x36eca0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_36eca4:
    // 0x36eca4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x36eca4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_36eca8:
    // 0x36eca8: 0x3e00008  jr          $ra
label_36ecac:
    if (ctx->pc == 0x36ECACu) {
        ctx->pc = 0x36ECACu;
            // 0x36ecac: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->pc = 0x36ECB0u;
        goto label_36ecb0;
    }
    ctx->pc = 0x36ECA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36ECACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36ECA8u;
            // 0x36ecac: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x36ECB0u;
label_36ecb0:
    // 0x36ecb0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x36ecb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_36ecb4:
    // 0x36ecb4: 0x3c060065  lui         $a2, 0x65
    ctx->pc = 0x36ecb4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)101 << 16));
label_36ecb8:
    // 0x36ecb8: 0xa08300cc  sb          $v1, 0xCC($a0)
    ctx->pc = 0x36ecb8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 204), (uint8_t)GPR_U32(ctx, 3));
label_36ecbc:
    // 0x36ecbc: 0x24c65f60  addiu       $a2, $a2, 0x5F60
    ctx->pc = 0x36ecbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 24416));
label_36ecc0:
    // 0x36ecc0: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x36ecc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
label_36ecc4:
    // 0x36ecc4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36ecc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_36ecc8:
    // 0x36ecc8: 0xac8300c4  sw          $v1, 0xC4($a0)
    ctx->pc = 0x36ecc8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 196), GPR_U32(ctx, 3));
label_36eccc:
    // 0x36eccc: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x36ecccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_36ecd0:
    // 0x36ecd0: 0x8c678a08  lw          $a3, -0x75F8($v1)
    ctx->pc = 0x36ecd0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_36ecd4:
    // 0x36ecd4: 0x80e7007a  lb          $a3, 0x7A($a3)
    ctx->pc = 0x36ecd4u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 122)));
label_36ecd8:
    // 0x36ecd8: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x36ecd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_36ecdc:
    // 0x36ecdc: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x36ecdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_36ece0:
    // 0x36ece0: 0x90c60000  lbu         $a2, 0x0($a2)
    ctx->pc = 0x36ece0u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_36ece4:
    // 0x36ece4: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x36ece4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_36ece8:
    // 0x36ece8: 0xac8600c8  sw          $a2, 0xC8($a0)
    ctx->pc = 0x36ece8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 200), GPR_U32(ctx, 6));
label_36ecec:
    // 0x36ecec: 0xa0850064  sb          $a1, 0x64($a0)
    ctx->pc = 0x36ececu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 100), (uint8_t)GPR_U32(ctx, 5));
label_36ecf0:
    // 0x36ecf0: 0xa0850065  sb          $a1, 0x65($a0)
    ctx->pc = 0x36ecf0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 101), (uint8_t)GPR_U32(ctx, 5));
label_36ecf4:
    // 0x36ecf4: 0xa0800068  sb          $zero, 0x68($a0)
    ctx->pc = 0x36ecf4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 104), (uint8_t)GPR_U32(ctx, 0));
label_36ecf8:
    // 0x36ecf8: 0x3e00008  jr          $ra
label_36ecfc:
    if (ctx->pc == 0x36ECFCu) {
        ctx->pc = 0x36ECFCu;
            // 0x36ecfc: 0xa0830069  sb          $v1, 0x69($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 105), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x36ED00u;
        goto label_36ed00;
    }
    ctx->pc = 0x36ECF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36ECFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36ECF8u;
            // 0x36ecfc: 0xa0830069  sb          $v1, 0x69($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 105), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x36ED00u;
label_36ed00:
    // 0x36ed00: 0x8c850050  lw          $a1, 0x50($a0)
    ctx->pc = 0x36ed00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_36ed04:
    // 0x36ed04: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x36ed04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
label_36ed08:
    // 0x36ed08: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x36ed08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_36ed0c:
    // 0x36ed0c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x36ed0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_36ed10:
    // 0x36ed10: 0x8ca8002c  lw          $t0, 0x2C($a1)
    ctx->pc = 0x36ed10u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_36ed14:
    // 0x36ed14: 0x3444ffff  ori         $a0, $v0, 0xFFFF
    ctx->pc = 0x36ed14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_36ed18:
    // 0x36ed18: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x36ed18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_36ed1c:
    // 0x36ed1c: 0x1042024  and         $a0, $t0, $a0
    ctx->pc = 0x36ed1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) & GPR_U64(ctx, 4));
label_36ed20:
    // 0x36ed20: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x36ed20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_36ed24:
    // 0x36ed24: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x36ed24u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
label_36ed28:
    // 0x36ed28: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x36ed28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_36ed2c:
    // 0x36ed2c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x36ed2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_36ed30:
    // 0x36ed30: 0x808bff0  j           func_22FFC0
label_36ed34:
    if (ctx->pc == 0x36ED34u) {
        ctx->pc = 0x36ED34u;
            // 0x36ed34: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36ED38u;
        goto label_36ed38;
    }
    ctx->pc = 0x36ED30u;
    ctx->pc = 0x36ED34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36ED30u;
            // 0x36ed34: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x36ED38u;
label_36ed38:
    // 0x36ed38: 0x0  nop
    ctx->pc = 0x36ed38u;
    // NOP
label_36ed3c:
    // 0x36ed3c: 0x0  nop
    ctx->pc = 0x36ed3cu;
    // NOP
label_36ed40:
    // 0x36ed40: 0x3e00008  jr          $ra
label_36ed44:
    if (ctx->pc == 0x36ED44u) {
        ctx->pc = 0x36ED44u;
            // 0x36ed44: 0x24022bba  addiu       $v0, $zero, 0x2BBA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11194));
        ctx->pc = 0x36ED48u;
        goto label_36ed48;
    }
    ctx->pc = 0x36ED40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36ED44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36ED40u;
            // 0x36ed44: 0x24022bba  addiu       $v0, $zero, 0x2BBA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11194));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x36ED48u;
label_36ed48:
    // 0x36ed48: 0x0  nop
    ctx->pc = 0x36ed48u;
    // NOP
label_36ed4c:
    // 0x36ed4c: 0x0  nop
    ctx->pc = 0x36ed4cu;
    // NOP
label_36ed50:
    // 0x36ed50: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x36ed50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_36ed54:
    // 0x36ed54: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x36ed54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_36ed58:
    // 0x36ed58: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x36ed58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_36ed5c:
    // 0x36ed5c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x36ed5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_36ed60:
    // 0x36ed60: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x36ed60u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_36ed64:
    // 0x36ed64: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x36ed64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_36ed68:
    // 0x36ed68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x36ed68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_36ed6c:
    // 0x36ed6c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x36ed6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_36ed70:
    // 0x36ed70: 0x8c900070  lw          $s0, 0x70($a0)
    ctx->pc = 0x36ed70u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_36ed74:
    // 0x36ed74: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_36ed78:
    if (ctx->pc == 0x36ED78u) {
        ctx->pc = 0x36ED78u;
            // 0x36ed78: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36ED7Cu;
        goto label_36ed7c;
    }
    ctx->pc = 0x36ED74u;
    {
        const bool branch_taken_0x36ed74 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x36ED78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36ED74u;
            // 0x36ed78: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36ed74) {
            ctx->pc = 0x36EDB8u;
            goto label_36edb8;
        }
    }
    ctx->pc = 0x36ED7Cu;
label_36ed7c:
    // 0x36ed7c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x36ed7cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_36ed80:
    // 0x36ed80: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x36ed80u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_36ed84:
    // 0x36ed84: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x36ed84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_36ed88:
    // 0x36ed88: 0x8e820074  lw          $v0, 0x74($s4)
    ctx->pc = 0x36ed88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_36ed8c:
    // 0x36ed8c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x36ed8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_36ed90:
    // 0x36ed90: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x36ed90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_36ed94:
    // 0x36ed94: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x36ed94u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_36ed98:
    // 0x36ed98: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x36ed98u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_36ed9c:
    // 0x36ed9c: 0x320f809  jalr        $t9
label_36eda0:
    if (ctx->pc == 0x36EDA0u) {
        ctx->pc = 0x36EDA4u;
        goto label_36eda4;
    }
    ctx->pc = 0x36ED9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x36EDA4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x36EDA4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x36EDA4u; }
            if (ctx->pc != 0x36EDA4u) { return; }
        }
        }
    }
    ctx->pc = 0x36EDA4u;
label_36eda4:
    // 0x36eda4: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x36eda4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_36eda8:
    // 0x36eda8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x36eda8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_36edac:
    // 0x36edac: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x36edacu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_36edb0:
    // 0x36edb0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_36edb4:
    if (ctx->pc == 0x36EDB4u) {
        ctx->pc = 0x36EDB4u;
            // 0x36edb4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x36EDB8u;
        goto label_36edb8;
    }
    ctx->pc = 0x36EDB0u;
    {
        const bool branch_taken_0x36edb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36EDB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36EDB0u;
            // 0x36edb4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36edb0) {
            ctx->pc = 0x36ED88u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_36ed88;
        }
    }
    ctx->pc = 0x36EDB8u;
label_36edb8:
    // 0x36edb8: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x36edb8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_36edbc:
    // 0x36edbc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x36edbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_36edc0:
    // 0x36edc0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x36edc0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_36edc4:
    // 0x36edc4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x36edc4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_36edc8:
    // 0x36edc8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x36edc8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_36edcc:
    // 0x36edcc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x36edccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_36edd0:
    // 0x36edd0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x36edd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_36edd4:
    // 0x36edd4: 0x3e00008  jr          $ra
label_36edd8:
    if (ctx->pc == 0x36EDD8u) {
        ctx->pc = 0x36EDD8u;
            // 0x36edd8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x36EDDCu;
        goto label_36eddc;
    }
    ctx->pc = 0x36EDD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36EDD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36EDD4u;
            // 0x36edd8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x36EDDCu;
label_36eddc:
    // 0x36eddc: 0x0  nop
    ctx->pc = 0x36eddcu;
    // NOP
label_36ede0:
    // 0x36ede0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x36ede0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_36ede4:
    // 0x36ede4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x36ede4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_36ede8:
    // 0x36ede8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x36ede8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_36edec:
    // 0x36edec: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x36edecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_36edf0:
    // 0x36edf0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x36edf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_36edf4:
    // 0x36edf4: 0x8c83007c  lw          $v1, 0x7C($a0)
    ctx->pc = 0x36edf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_36edf8:
    // 0x36edf8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x36edf8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_36edfc:
    // 0x36edfc: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x36edfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_36ee00:
    // 0x36ee00: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x36ee00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_36ee04:
    // 0x36ee04: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36ee04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_36ee08:
    // 0x36ee08: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x36ee08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_36ee0c:
    // 0x36ee0c: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x36ee0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_36ee10:
    // 0x36ee10: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x36ee10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_36ee14:
    // 0x36ee14: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x36ee14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_36ee18:
    // 0x36ee18: 0x8c42fffc  lw          $v0, -0x4($v0)
    ctx->pc = 0x36ee18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_36ee1c:
    // 0x36ee1c: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x36ee1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_36ee20:
    // 0x36ee20: 0x8c82007c  lw          $v0, 0x7C($a0)
    ctx->pc = 0x36ee20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_36ee24:
    // 0x36ee24: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x36ee24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_36ee28:
    // 0x36ee28: 0xac82007c  sw          $v0, 0x7C($a0)
    ctx->pc = 0x36ee28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
label_36ee2c:
    // 0x36ee2c: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x36ee2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_36ee30:
    // 0x36ee30: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x36ee30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_36ee34:
    // 0x36ee34: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x36ee34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_36ee38:
    // 0x36ee38: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x36ee38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_36ee3c:
    // 0x36ee3c: 0xc0a997c  jal         func_2A65F0
label_36ee40:
    if (ctx->pc == 0x36EE40u) {
        ctx->pc = 0x36EE40u;
            // 0x36ee40: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->pc = 0x36EE44u;
        goto label_36ee44;
    }
    ctx->pc = 0x36EE3Cu;
    SET_GPR_U32(ctx, 31, 0x36EE44u);
    ctx->pc = 0x36EE40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36EE3Cu;
            // 0x36ee40: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36EE44u; }
        if (ctx->pc != 0x36EE44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36EE44u; }
        if (ctx->pc != 0x36EE44u) { return; }
    }
    ctx->pc = 0x36EE44u;
label_36ee44:
    // 0x36ee44: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x36ee44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_36ee48:
    // 0x36ee48: 0xc0d879c  jal         func_361E70
label_36ee4c:
    if (ctx->pc == 0x36EE4Cu) {
        ctx->pc = 0x36EE4Cu;
            // 0x36ee4c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36EE50u;
        goto label_36ee50;
    }
    ctx->pc = 0x36EE48u;
    SET_GPR_U32(ctx, 31, 0x36EE50u);
    ctx->pc = 0x36EE4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36EE48u;
            // 0x36ee4c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361E70u;
    if (runtime->hasFunction(0x361E70u)) {
        auto targetFn = runtime->lookupFunction(0x361E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36EE50u; }
        if (ctx->pc != 0x36EE50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361E70_0x361e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36EE50u; }
        if (ctx->pc != 0x36EE50u) { return; }
    }
    ctx->pc = 0x36EE50u;
label_36ee50:
    // 0x36ee50: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x36ee50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_36ee54:
    // 0x36ee54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x36ee54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_36ee58:
    // 0x36ee58: 0x3e00008  jr          $ra
label_36ee5c:
    if (ctx->pc == 0x36EE5Cu) {
        ctx->pc = 0x36EE5Cu;
            // 0x36ee5c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x36EE60u;
        goto label_36ee60;
    }
    ctx->pc = 0x36EE58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36EE5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36EE58u;
            // 0x36ee5c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x36EE60u;
label_36ee60:
    // 0x36ee60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x36ee60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_36ee64:
    // 0x36ee64: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x36ee64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_36ee68:
    // 0x36ee68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x36ee68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_36ee6c:
    // 0x36ee6c: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x36ee6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_36ee70:
    // 0x36ee70: 0x10600047  beqz        $v1, . + 4 + (0x47 << 2)
label_36ee74:
    if (ctx->pc == 0x36EE74u) {
        ctx->pc = 0x36EE74u;
            // 0x36ee74: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36EE78u;
        goto label_36ee78;
    }
    ctx->pc = 0x36EE70u;
    {
        const bool branch_taken_0x36ee70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x36EE74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36EE70u;
            // 0x36ee74: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36ee70) {
            ctx->pc = 0x36EF90u;
            goto label_36ef90;
        }
    }
    ctx->pc = 0x36EE78u;
label_36ee78:
    // 0x36ee78: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x36ee78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_36ee7c:
    // 0x36ee7c: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x36ee7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
label_36ee80:
    // 0x36ee80: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x36ee80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_36ee84:
    // 0x36ee84: 0xc075128  jal         func_1D44A0
label_36ee88:
    if (ctx->pc == 0x36EE88u) {
        ctx->pc = 0x36EE88u;
            // 0x36ee88: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x36EE8Cu;
        goto label_36ee8c;
    }
    ctx->pc = 0x36EE84u;
    SET_GPR_U32(ctx, 31, 0x36EE8Cu);
    ctx->pc = 0x36EE88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36EE84u;
            // 0x36ee88: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D44A0u;
    if (runtime->hasFunction(0x1D44A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36EE8Cu; }
        if (ctx->pc != 0x36EE8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D44A0_0x1d44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36EE8Cu; }
        if (ctx->pc != 0x36EE8Cu) { return; }
    }
    ctx->pc = 0x36EE8Cu;
label_36ee8c:
    // 0x36ee8c: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x36ee8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_36ee90:
    // 0x36ee90: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x36ee90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_36ee94:
    // 0x36ee94: 0x8c42e390  lw          $v0, -0x1C70($v0)
    ctx->pc = 0x36ee94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960016)));
label_36ee98:
    // 0x36ee98: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x36ee98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_36ee9c:
    // 0x36ee9c: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x36ee9cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_36eea0:
    // 0x36eea0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_36eea4:
    if (ctx->pc == 0x36EEA4u) {
        ctx->pc = 0x36EEA4u;
            // 0x36eea4: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->pc = 0x36EEA8u;
        goto label_36eea8;
    }
    ctx->pc = 0x36EEA0u;
    {
        const bool branch_taken_0x36eea0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x36EEA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36EEA0u;
            // 0x36eea4: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36eea0) {
            ctx->pc = 0x36EEB0u;
            goto label_36eeb0;
        }
    }
    ctx->pc = 0x36EEA8u;
label_36eea8:
    // 0x36eea8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x36eea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_36eeac:
    // 0x36eeac: 0xac43e390  sw          $v1, -0x1C70($v0)
    ctx->pc = 0x36eeacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960016), GPR_U32(ctx, 3));
label_36eeb0:
    // 0x36eeb0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x36eeb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_36eeb4:
    // 0x36eeb4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x36eeb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_36eeb8:
    // 0x36eeb8: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x36eeb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_36eebc:
    // 0x36eebc: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x36eebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_36eec0:
    // 0x36eec0: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x36eec0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_36eec4:
    // 0x36eec4: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_36eec8:
    if (ctx->pc == 0x36EEC8u) {
        ctx->pc = 0x36EEC8u;
            // 0x36eec8: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x36EECCu;
        goto label_36eecc;
    }
    ctx->pc = 0x36EEC4u;
    {
        const bool branch_taken_0x36eec4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x36eec4) {
            ctx->pc = 0x36EEC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x36EEC4u;
            // 0x36eec8: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x36EED8u;
            goto label_36eed8;
        }
    }
    ctx->pc = 0x36EECCu;
label_36eecc:
    // 0x36eecc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x36eeccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_36eed0:
    // 0x36eed0: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x36eed0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_36eed4:
    // 0x36eed4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x36eed4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_36eed8:
    // 0x36eed8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x36eed8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_36eedc:
    // 0x36eedc: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x36eedcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_36eee0:
    // 0x36eee0: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x36eee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_36eee4:
    // 0x36eee4: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x36eee4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_36eee8:
    // 0x36eee8: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_36eeec:
    if (ctx->pc == 0x36EEECu) {
        ctx->pc = 0x36EEECu;
            // 0x36eeec: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x36EEF0u;
        goto label_36eef0;
    }
    ctx->pc = 0x36EEE8u;
    {
        const bool branch_taken_0x36eee8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x36eee8) {
            ctx->pc = 0x36EEECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x36EEE8u;
            // 0x36eeec: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x36EEFCu;
            goto label_36eefc;
        }
    }
    ctx->pc = 0x36EEF0u;
label_36eef0:
    // 0x36eef0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x36eef0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_36eef4:
    // 0x36eef4: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x36eef4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_36eef8:
    // 0x36eef8: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x36eef8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_36eefc:
    // 0x36eefc: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x36eefcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_36ef00:
    // 0x36ef00: 0x320f809  jalr        $t9
label_36ef04:
    if (ctx->pc == 0x36EF04u) {
        ctx->pc = 0x36EF04u;
            // 0x36ef04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36EF08u;
        goto label_36ef08;
    }
    ctx->pc = 0x36EF00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x36EF08u);
        ctx->pc = 0x36EF04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36EF00u;
            // 0x36ef04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x36EF08u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x36EF08u; }
            if (ctx->pc != 0x36EF08u) { return; }
        }
        }
    }
    ctx->pc = 0x36EF08u;
label_36ef08:
    // 0x36ef08: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x36ef08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_36ef0c:
    // 0x36ef0c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x36ef0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_36ef10:
    // 0x36ef10: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x36ef10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
label_36ef14:
    // 0x36ef14: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x36ef14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_36ef18:
    // 0x36ef18: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x36ef18u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_36ef1c:
    // 0x36ef1c: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x36ef1cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_36ef20:
    // 0x36ef20: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_36ef24:
    if (ctx->pc == 0x36EF24u) {
        ctx->pc = 0x36EF24u;
            // 0x36ef24: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->pc = 0x36EF28u;
        goto label_36ef28;
    }
    ctx->pc = 0x36EF20u;
    {
        const bool branch_taken_0x36ef20 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x36ef20) {
            ctx->pc = 0x36EF24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x36EF20u;
            // 0x36ef24: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x36EF34u;
            goto label_36ef34;
        }
    }
    ctx->pc = 0x36EF28u;
label_36ef28:
    // 0x36ef28: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x36ef28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_36ef2c:
    // 0x36ef2c: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x36ef2cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
label_36ef30:
    // 0x36ef30: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x36ef30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_36ef34:
    // 0x36ef34: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x36ef34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_36ef38:
    // 0x36ef38: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x36ef38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
label_36ef3c:
    // 0x36ef3c: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x36ef3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_36ef40:
    // 0x36ef40: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x36ef40u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_36ef44:
    // 0x36ef44: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x36ef44u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_36ef48:
    // 0x36ef48: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_36ef4c:
    if (ctx->pc == 0x36EF4Cu) {
        ctx->pc = 0x36EF50u;
        goto label_36ef50;
    }
    ctx->pc = 0x36EF48u;
    {
        const bool branch_taken_0x36ef48 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x36ef48) {
            ctx->pc = 0x36EF58u;
            goto label_36ef58;
        }
    }
    ctx->pc = 0x36EF50u;
label_36ef50:
    // 0x36ef50: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x36ef50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_36ef54:
    // 0x36ef54: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x36ef54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_36ef58:
    // 0x36ef58: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x36ef58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_36ef5c:
    // 0x36ef5c: 0x8c63e3c8  lw          $v1, -0x1C38($v1)
    ctx->pc = 0x36ef5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960072)));
label_36ef60:
    // 0x36ef60: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x36ef60u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_36ef64:
    // 0x36ef64: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_36ef68:
    if (ctx->pc == 0x36EF68u) {
        ctx->pc = 0x36EF6Cu;
        goto label_36ef6c;
    }
    ctx->pc = 0x36EF64u;
    {
        const bool branch_taken_0x36ef64 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x36ef64) {
            ctx->pc = 0x36EF74u;
            goto label_36ef74;
        }
    }
    ctx->pc = 0x36EF6Cu;
label_36ef6c:
    // 0x36ef6c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x36ef6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_36ef70:
    // 0x36ef70: 0xac62e3c8  sw          $v0, -0x1C38($v1)
    ctx->pc = 0x36ef70u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960072), GPR_U32(ctx, 2));
label_36ef74:
    // 0x36ef74: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x36ef74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_36ef78:
    // 0x36ef78: 0x8c63e3d0  lw          $v1, -0x1C30($v1)
    ctx->pc = 0x36ef78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960080)));
label_36ef7c:
    // 0x36ef7c: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x36ef7cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_36ef80:
    // 0x36ef80: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_36ef84:
    if (ctx->pc == 0x36EF84u) {
        ctx->pc = 0x36EF84u;
            // 0x36ef84: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x36EF88u;
        goto label_36ef88;
    }
    ctx->pc = 0x36EF80u;
    {
        const bool branch_taken_0x36ef80 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x36ef80) {
            ctx->pc = 0x36EF84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x36EF80u;
            // 0x36ef84: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x36EF94u;
            goto label_36ef94;
        }
    }
    ctx->pc = 0x36EF88u;
label_36ef88:
    // 0x36ef88: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x36ef88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_36ef8c:
    // 0x36ef8c: 0xac62e3d0  sw          $v0, -0x1C30($v1)
    ctx->pc = 0x36ef8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960080), GPR_U32(ctx, 2));
label_36ef90:
    // 0x36ef90: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x36ef90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_36ef94:
    // 0x36ef94: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x36ef94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_36ef98:
    // 0x36ef98: 0x3e00008  jr          $ra
label_36ef9c:
    if (ctx->pc == 0x36EF9Cu) {
        ctx->pc = 0x36EF9Cu;
            // 0x36ef9c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x36EFA0u;
        goto label_36efa0;
    }
    ctx->pc = 0x36EF98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36EF9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36EF98u;
            // 0x36ef9c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x36EFA0u;
label_36efa0:
    // 0x36efa0: 0x80db6c8  j           func_36DB20
label_36efa4:
    if (ctx->pc == 0x36EFA4u) {
        ctx->pc = 0x36EFA4u;
            // 0x36efa4: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->pc = 0x36EFA8u;
        goto label_36efa8;
    }
    ctx->pc = 0x36EFA0u;
    ctx->pc = 0x36EFA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36EFA0u;
            // 0x36efa4: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x36DB20u;
    {
        auto targetFn = runtime->lookupFunction(0x36DB20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x36EFA8u;
label_36efa8:
    // 0x36efa8: 0x0  nop
    ctx->pc = 0x36efa8u;
    // NOP
label_36efac:
    // 0x36efac: 0x0  nop
    ctx->pc = 0x36efacu;
    // NOP
label_36efb0:
    // 0x36efb0: 0x80db87c  j           func_36E1F0
label_36efb4:
    if (ctx->pc == 0x36EFB4u) {
        ctx->pc = 0x36EFB4u;
            // 0x36efb4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x36EFB8u;
        goto label_36efb8;
    }
    ctx->pc = 0x36EFB0u;
    ctx->pc = 0x36EFB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36EFB0u;
            // 0x36efb4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x36E1F0u;
    {
        auto targetFn = runtime->lookupFunction(0x36E1F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x36EFB8u;
label_36efb8:
    // 0x36efb8: 0x0  nop
    ctx->pc = 0x36efb8u;
    // NOP
label_36efbc:
    // 0x36efbc: 0x0  nop
    ctx->pc = 0x36efbcu;
    // NOP
label_36efc0:
    // 0x36efc0: 0x80db670  j           func_36D9C0
label_36efc4:
    if (ctx->pc == 0x36EFC4u) {
        ctx->pc = 0x36EFC4u;
            // 0x36efc4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x36EFC8u;
        goto label_36efc8;
    }
    ctx->pc = 0x36EFC0u;
    ctx->pc = 0x36EFC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36EFC0u;
            // 0x36efc4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x36D9C0u;
    if (runtime->hasFunction(0x36D9C0u)) {
        auto targetFn = runtime->lookupFunction(0x36D9C0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0036D9C0_0x36d9c0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x36EFC8u;
label_36efc8:
    // 0x36efc8: 0x0  nop
    ctx->pc = 0x36efc8u;
    // NOP
label_36efcc:
    // 0x36efcc: 0x0  nop
    ctx->pc = 0x36efccu;
    // NOP
label_36efd0:
    // 0x36efd0: 0x80db64c  j           func_36D930
label_36efd4:
    if (ctx->pc == 0x36EFD4u) {
        ctx->pc = 0x36EFD4u;
            // 0x36efd4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x36EFD8u;
        goto label_36efd8;
    }
    ctx->pc = 0x36EFD0u;
    ctx->pc = 0x36EFD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36EFD0u;
            // 0x36efd4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x36D930u;
    {
        auto targetFn = runtime->lookupFunction(0x36D930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x36EFD8u;
label_36efd8:
    // 0x36efd8: 0x0  nop
    ctx->pc = 0x36efd8u;
    // NOP
label_36efdc:
    // 0x36efdc: 0x0  nop
    ctx->pc = 0x36efdcu;
    // NOP
label_36efe0:
    // 0x36efe0: 0x3e00008  jr          $ra
label_36efe4:
    if (ctx->pc == 0x36EFE4u) {
        ctx->pc = 0x36EFE4u;
            // 0x36efe4: 0x24020834  addiu       $v0, $zero, 0x834 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2100));
        ctx->pc = 0x36EFE8u;
        goto label_36efe8;
    }
    ctx->pc = 0x36EFE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36EFE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36EFE0u;
            // 0x36efe4: 0x24020834  addiu       $v0, $zero, 0x834 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2100));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x36EFE8u;
label_36efe8:
    // 0x36efe8: 0x0  nop
    ctx->pc = 0x36efe8u;
    // NOP
label_36efec:
    // 0x36efec: 0x0  nop
    ctx->pc = 0x36efecu;
    // NOP
label_36eff0:
    // 0x36eff0: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x36eff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_36eff4:
    // 0x36eff4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x36eff4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_36eff8:
    // 0x36eff8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x36eff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_36effc:
    // 0x36effc: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x36effcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_36f000:
    // 0x36f000: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x36f000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_36f004:
    // 0x36f004: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x36f004u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_36f008:
    // 0x36f008: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x36f008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_36f00c:
    // 0x36f00c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x36f00cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_36f010:
    // 0x36f010: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x36f010u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_36f014:
    // 0x36f014: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x36f014u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_36f018:
    // 0x36f018: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x36f018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_36f01c:
    // 0x36f01c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x36f01cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_36f020:
    // 0x36f020: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x36f020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_36f024:
    // 0x36f024: 0x9084001c  lbu         $a0, 0x1C($a0)
    ctx->pc = 0x36f024u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 28)));
label_36f028:
    // 0x36f028: 0x50830014  beql        $a0, $v1, . + 4 + (0x14 << 2)
label_36f02c:
    if (ctx->pc == 0x36F02Cu) {
        ctx->pc = 0x36F02Cu;
            // 0x36f02c: 0x8eb0007c  lw          $s0, 0x7C($s5) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 124)));
        ctx->pc = 0x36F030u;
        goto label_36f030;
    }
    ctx->pc = 0x36F028u;
    {
        const bool branch_taken_0x36f028 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x36f028) {
            ctx->pc = 0x36F02Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x36F028u;
            // 0x36f02c: 0x8eb0007c  lw          $s0, 0x7C($s5) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 124)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x36F07Cu;
            goto label_36f07c;
        }
    }
    ctx->pc = 0x36F030u;
label_36f030:
    // 0x36f030: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x36f030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_36f034:
    // 0x36f034: 0x5083004f  beql        $a0, $v1, . + 4 + (0x4F << 2)
label_36f038:
    if (ctx->pc == 0x36F038u) {
        ctx->pc = 0x36F038u;
            // 0x36f038: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->pc = 0x36F03Cu;
        goto label_36f03c;
    }
    ctx->pc = 0x36F034u;
    {
        const bool branch_taken_0x36f034 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x36f034) {
            ctx->pc = 0x36F038u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x36F034u;
            // 0x36f038: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x36F174u;
            goto label_36f174;
        }
    }
    ctx->pc = 0x36F03Cu;
label_36f03c:
    // 0x36f03c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x36f03cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_36f040:
    // 0x36f040: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_36f044:
    if (ctx->pc == 0x36F044u) {
        ctx->pc = 0x36F048u;
        goto label_36f048;
    }
    ctx->pc = 0x36F040u;
    {
        const bool branch_taken_0x36f040 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x36f040) {
            ctx->pc = 0x36F050u;
            goto label_36f050;
        }
    }
    ctx->pc = 0x36F048u;
label_36f048:
    // 0x36f048: 0x10000049  b           . + 4 + (0x49 << 2)
label_36f04c:
    if (ctx->pc == 0x36F04Cu) {
        ctx->pc = 0x36F050u;
        goto label_36f050;
    }
    ctx->pc = 0x36F048u;
    {
        const bool branch_taken_0x36f048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36f048) {
            ctx->pc = 0x36F170u;
            goto label_36f170;
        }
    }
    ctx->pc = 0x36F050u;
label_36f050:
    // 0x36f050: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x36f050u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_36f054:
    // 0x36f054: 0x8eb9000c  lw          $t9, 0xC($s5)
    ctx->pc = 0x36f054u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
label_36f058:
    // 0x36f058: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x36f058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_36f05c:
    // 0x36f05c: 0x26a4000c  addiu       $a0, $s5, 0xC
    ctx->pc = 0x36f05cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 12));
label_36f060:
    // 0x36f060: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x36f060u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_36f064:
    // 0x36f064: 0x8c420cb4  lw          $v0, 0xCB4($v0)
    ctx->pc = 0x36f064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3252)));
label_36f068:
    // 0x36f068: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x36f068u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_36f06c:
    // 0x36f06c: 0x320f809  jalr        $t9
label_36f070:
    if (ctx->pc == 0x36F070u) {
        ctx->pc = 0x36F070u;
            // 0x36f070: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x36F074u;
        goto label_36f074;
    }
    ctx->pc = 0x36F06Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x36F074u);
        ctx->pc = 0x36F070u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36F06Cu;
            // 0x36f070: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x36F074u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x36F074u; }
            if (ctx->pc != 0x36F074u) { return; }
        }
        }
    }
    ctx->pc = 0x36F074u;
label_36f074:
    // 0x36f074: 0x1000003e  b           . + 4 + (0x3E << 2)
label_36f078:
    if (ctx->pc == 0x36F078u) {
        ctx->pc = 0x36F07Cu;
        goto label_36f07c;
    }
    ctx->pc = 0x36F074u;
    {
        const bool branch_taken_0x36f074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36f074) {
            ctx->pc = 0x36F170u;
            goto label_36f170;
        }
    }
    ctx->pc = 0x36F07Cu;
label_36f07c:
    // 0x36f07c: 0x1200003c  beqz        $s0, . + 4 + (0x3C << 2)
label_36f080:
    if (ctx->pc == 0x36F080u) {
        ctx->pc = 0x36F084u;
        goto label_36f084;
    }
    ctx->pc = 0x36F07Cu;
    {
        const bool branch_taken_0x36f07c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x36f07c) {
            ctx->pc = 0x36F170u;
            goto label_36f170;
        }
    }
    ctx->pc = 0x36F084u;
label_36f084:
    // 0x36f084: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x36f084u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_36f088:
    // 0x36f088: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x36f088u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_36f08c:
    // 0x36f08c: 0x8c56e378  lw          $s6, -0x1C88($v0)
    ctx->pc = 0x36f08cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959992)));
label_36f090:
    // 0x36f090: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x36f090u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_36f094:
    // 0x36f094: 0x8c65d130  lw          $a1, -0x2ED0($v1)
    ctx->pc = 0x36f094u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955312)));
label_36f098:
    // 0x36f098: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x36f098u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_36f09c:
    // 0x36f09c: 0x8eb30094  lw          $s3, 0x94($s5)
    ctx->pc = 0x36f09cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 148)));
label_36f0a0:
    // 0x36f0a0: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x36f0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_36f0a4:
    // 0x36f0a4: 0x8c44d120  lw          $a0, -0x2EE0($v0)
    ctx->pc = 0x36f0a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_36f0a8:
    // 0x36f0a8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x36f0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_36f0ac:
    // 0x36f0ac: 0x8cb40130  lw          $s4, 0x130($a1)
    ctx->pc = 0x36f0acu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
label_36f0b0:
    // 0x36f0b0: 0x8c7ee370  lw          $fp, -0x1C90($v1)
    ctx->pc = 0x36f0b0u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959984)));
label_36f0b4:
    // 0x36f0b4: 0x26a2009c  addiu       $v0, $s5, 0x9C
    ctx->pc = 0x36f0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 156));
label_36f0b8:
    // 0x36f0b8: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x36f0b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_36f0bc:
    // 0x36f0bc: 0x143080  sll         $a2, $s4, 2
    ctx->pc = 0x36f0bcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_36f0c0:
    // 0x36f0c0: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x36f0c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
label_36f0c4:
    // 0x36f0c4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x36f0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_36f0c8:
    // 0x36f0c8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x36f0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_36f0cc:
    // 0x36f0cc: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x36f0ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_36f0d0:
    // 0x36f0d0: 0x8ea40090  lw          $a0, 0x90($s5)
    ctx->pc = 0x36f0d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 144)));
label_36f0d4:
    // 0x36f0d4: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x36f0d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_36f0d8:
    // 0x36f0d8: 0xaea4009c  sw          $a0, 0x9C($s5)
    ctx->pc = 0x36f0d8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 156), GPR_U32(ctx, 4));
label_36f0dc:
    // 0x36f0dc: 0x24b70010  addiu       $s7, $a1, 0x10
    ctx->pc = 0x36f0dcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_36f0e0:
    // 0x36f0e0: 0xac60e3d8  sw          $zero, -0x1C28($v1)
    ctx->pc = 0x36f0e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960088), GPR_U32(ctx, 0));
label_36f0e4:
    // 0x36f0e4: 0xac40e3c0  sw          $zero, -0x1C40($v0)
    ctx->pc = 0x36f0e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960064), GPR_U32(ctx, 0));
label_36f0e8:
    // 0x36f0e8: 0x8ea20080  lw          $v0, 0x80($s5)
    ctx->pc = 0x36f0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 128)));
label_36f0ec:
    // 0x36f0ec: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x36f0ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_36f0f0:
    // 0x36f0f0: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x36f0f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_36f0f4:
    // 0x36f0f4: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x36f0f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_36f0f8:
    // 0x36f0f8: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x36f0f8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_36f0fc:
    // 0x36f0fc: 0x27a900b0  addiu       $t1, $sp, 0xB0
    ctx->pc = 0x36f0fcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_36f100:
    // 0x36f100: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x36f100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_36f104:
    // 0x36f104: 0x280502d  daddu       $t2, $s4, $zero
    ctx->pc = 0x36f104u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_36f108:
    // 0x36f108: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x36f108u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_36f10c:
    // 0x36f10c: 0xc0dbcbc  jal         func_36F2F0
label_36f110:
    if (ctx->pc == 0x36F110u) {
        ctx->pc = 0x36F110u;
            // 0x36f110: 0x2a0582d  daddu       $t3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36F114u;
        goto label_36f114;
    }
    ctx->pc = 0x36F10Cu;
    SET_GPR_U32(ctx, 31, 0x36F114u);
    ctx->pc = 0x36F110u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36F10Cu;
            // 0x36f110: 0x2a0582d  daddu       $t3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x36F2F0u;
    if (runtime->hasFunction(0x36F2F0u)) {
        auto targetFn = runtime->lookupFunction(0x36F2F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36F114u; }
        if (ctx->pc != 0x36F114u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0036F2F0_0x36f2f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36F114u; }
        if (ctx->pc != 0x36F114u) { return; }
    }
    ctx->pc = 0x36F114u;
label_36f114:
    // 0x36f114: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x36f114u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_36f118:
    // 0x36f118: 0x250182b  sltu        $v1, $s2, $s0
    ctx->pc = 0x36f118u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_36f11c:
    // 0x36f11c: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
label_36f120:
    if (ctx->pc == 0x36F120u) {
        ctx->pc = 0x36F120u;
            // 0x36f120: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x36F124u;
        goto label_36f124;
    }
    ctx->pc = 0x36F11Cu;
    {
        const bool branch_taken_0x36f11c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x36F120u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36F11Cu;
            // 0x36f120: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f11c) {
            ctx->pc = 0x36F0E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_36f0e8;
        }
    }
    ctx->pc = 0x36F124u;
label_36f124:
    // 0x36f124: 0x7ba300a0  lq          $v1, 0xA0($sp)
    ctx->pc = 0x36f124u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_36f128:
    // 0x36f128: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x36f128u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_36f12c:
    // 0x36f12c: 0x8ea30090  lw          $v1, 0x90($s5)
    ctx->pc = 0x36f12cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 144)));
label_36f130:
    // 0x36f130: 0x1083000f  beq         $a0, $v1, . + 4 + (0xF << 2)
label_36f134:
    if (ctx->pc == 0x36F134u) {
        ctx->pc = 0x36F138u;
        goto label_36f138;
    }
    ctx->pc = 0x36F130u;
    {
        const bool branch_taken_0x36f130 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x36f130) {
            ctx->pc = 0x36F170u;
            goto label_36f170;
        }
    }
    ctx->pc = 0x36F138u;
label_36f138:
    // 0x36f138: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x36f138u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_36f13c:
    // 0x36f13c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x36f13cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_36f140:
    // 0x36f140: 0x2642021  addu        $a0, $s3, $a0
    ctx->pc = 0x36f140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
label_36f144:
    // 0x36f144: 0x8c69e3c0  lw          $t1, -0x1C40($v1)
    ctx->pc = 0x36f144u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_36f148:
    // 0x36f148: 0x19200009  blez        $t1, . + 4 + (0x9 << 2)
label_36f14c:
    if (ctx->pc == 0x36F14Cu) {
        ctx->pc = 0x36F14Cu;
            // 0x36f14c: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x36F150u;
        goto label_36f150;
    }
    ctx->pc = 0x36F148u;
    {
        const bool branch_taken_0x36f148 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x36F14Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36F148u;
            // 0x36f14c: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f148) {
            ctx->pc = 0x36F170u;
            goto label_36f170;
        }
    }
    ctx->pc = 0x36F150u;
label_36f150:
    // 0x36f150: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x36f150u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_36f154:
    // 0x36f154: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x36f154u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_36f158:
    // 0x36f158: 0x8c65e3b0  lw          $a1, -0x1C50($v1)
    ctx->pc = 0x36f158u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960048)));
label_36f15c:
    // 0x36f15c: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x36f15cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_36f160:
    // 0x36f160: 0x8c46e3b8  lw          $a2, -0x1C48($v0)
    ctx->pc = 0x36f160u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960056)));
label_36f164:
    // 0x36f164: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x36f164u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_36f168:
    // 0x36f168: 0xc055ea8  jal         func_157AA0
label_36f16c:
    if (ctx->pc == 0x36F16Cu) {
        ctx->pc = 0x36F16Cu;
            // 0x36f16c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36F170u;
        goto label_36f170;
    }
    ctx->pc = 0x36F168u;
    SET_GPR_U32(ctx, 31, 0x36F170u);
    ctx->pc = 0x36F16Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36F168u;
            // 0x36f16c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x157AA0u;
    if (runtime->hasFunction(0x157AA0u)) {
        auto targetFn = runtime->lookupFunction(0x157AA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36F170u; }
        if (ctx->pc != 0x36F170u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00157AA0_0x157aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36F170u; }
        if (ctx->pc != 0x36F170u) { return; }
    }
    ctx->pc = 0x36F170u;
label_36f170:
    // 0x36f170: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x36f170u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_36f174:
    // 0x36f174: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x36f174u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_36f178:
    // 0x36f178: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x36f178u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_36f17c:
    // 0x36f17c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x36f17cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_36f180:
    // 0x36f180: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x36f180u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_36f184:
    // 0x36f184: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x36f184u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_36f188:
    // 0x36f188: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x36f188u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_36f18c:
    // 0x36f18c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x36f18cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_36f190:
    // 0x36f190: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x36f190u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_36f194:
    // 0x36f194: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x36f194u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_36f198:
    // 0x36f198: 0x3e00008  jr          $ra
label_36f19c:
    if (ctx->pc == 0x36F19Cu) {
        ctx->pc = 0x36F19Cu;
            // 0x36f19c: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x36F1A0u;
        goto label_36f1a0;
    }
    ctx->pc = 0x36F198u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36F19Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36F198u;
            // 0x36f19c: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x36F1A0u;
label_36f1a0:
    // 0x36f1a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x36f1a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_36f1a4:
    // 0x36f1a4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x36f1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_36f1a8:
    // 0x36f1a8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x36f1a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_36f1ac:
    // 0x36f1ac: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x36f1acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_36f1b0:
    // 0x36f1b0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x36f1b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_36f1b4:
    // 0x36f1b4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x36f1b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_36f1b8:
    // 0x36f1b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x36f1b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_36f1bc:
    // 0x36f1bc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x36f1bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_36f1c0:
    // 0x36f1c0: 0x9084001c  lbu         $a0, 0x1C($a0)
    ctx->pc = 0x36f1c0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 28)));
label_36f1c4:
    // 0x36f1c4: 0x5083000e  beql        $a0, $v1, . + 4 + (0xE << 2)
label_36f1c8:
    if (ctx->pc == 0x36F1C8u) {
        ctx->pc = 0x36F1C8u;
            // 0x36f1c8: 0x8e30007c  lw          $s0, 0x7C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 124)));
        ctx->pc = 0x36F1CCu;
        goto label_36f1cc;
    }
    ctx->pc = 0x36F1C4u;
    {
        const bool branch_taken_0x36f1c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x36f1c4) {
            ctx->pc = 0x36F1C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x36F1C4u;
            // 0x36f1c8: 0x8e30007c  lw          $s0, 0x7C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 124)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x36F200u;
            goto label_36f200;
        }
    }
    ctx->pc = 0x36F1CCu;
label_36f1cc:
    // 0x36f1cc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x36f1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_36f1d0:
    // 0x36f1d0: 0x50830007  beql        $a0, $v1, . + 4 + (0x7 << 2)
label_36f1d4:
    if (ctx->pc == 0x36F1D4u) {
        ctx->pc = 0x36F1D4u;
            // 0x36f1d4: 0x8e39000c  lw          $t9, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->pc = 0x36F1D8u;
        goto label_36f1d8;
    }
    ctx->pc = 0x36F1D0u;
    {
        const bool branch_taken_0x36f1d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x36f1d0) {
            ctx->pc = 0x36F1D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x36F1D0u;
            // 0x36f1d4: 0x8e39000c  lw          $t9, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x36F1F0u;
            goto label_36f1f0;
        }
    }
    ctx->pc = 0x36F1D8u;
label_36f1d8:
    // 0x36f1d8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x36f1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_36f1dc:
    // 0x36f1dc: 0x1083001a  beq         $a0, $v1, . + 4 + (0x1A << 2)
label_36f1e0:
    if (ctx->pc == 0x36F1E0u) {
        ctx->pc = 0x36F1E4u;
        goto label_36f1e4;
    }
    ctx->pc = 0x36F1DCu;
    {
        const bool branch_taken_0x36f1dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x36f1dc) {
            ctx->pc = 0x36F248u;
            goto label_36f248;
        }
    }
    ctx->pc = 0x36F1E4u;
label_36f1e4:
    // 0x36f1e4: 0x10000018  b           . + 4 + (0x18 << 2)
label_36f1e8:
    if (ctx->pc == 0x36F1E8u) {
        ctx->pc = 0x36F1ECu;
        goto label_36f1ec;
    }
    ctx->pc = 0x36F1E4u;
    {
        const bool branch_taken_0x36f1e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36f1e4) {
            ctx->pc = 0x36F248u;
            goto label_36f248;
        }
    }
    ctx->pc = 0x36F1ECu;
label_36f1ec:
    // 0x36f1ec: 0x8e39000c  lw          $t9, 0xC($s1)
    ctx->pc = 0x36f1ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_36f1f0:
    // 0x36f1f0: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x36f1f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_36f1f4:
    // 0x36f1f4: 0x320f809  jalr        $t9
label_36f1f8:
    if (ctx->pc == 0x36F1F8u) {
        ctx->pc = 0x36F1F8u;
            // 0x36f1f8: 0x2624000c  addiu       $a0, $s1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
        ctx->pc = 0x36F1FCu;
        goto label_36f1fc;
    }
    ctx->pc = 0x36F1F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x36F1FCu);
        ctx->pc = 0x36F1F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36F1F4u;
            // 0x36f1f8: 0x2624000c  addiu       $a0, $s1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x36F1FCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x36F1FCu; }
            if (ctx->pc != 0x36F1FCu) { return; }
        }
        }
    }
    ctx->pc = 0x36F1FCu;
label_36f1fc:
    // 0x36f1fc: 0x8e30007c  lw          $s0, 0x7C($s1)
    ctx->pc = 0x36f1fcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 124)));
label_36f200:
    // 0x36f200: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
label_36f204:
    if (ctx->pc == 0x36F204u) {
        ctx->pc = 0x36F208u;
        goto label_36f208;
    }
    ctx->pc = 0x36F200u;
    {
        const bool branch_taken_0x36f200 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x36f200) {
            ctx->pc = 0x36F248u;
            goto label_36f248;
        }
    }
    ctx->pc = 0x36F208u;
label_36f208:
    // 0x36f208: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x36f208u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_36f20c:
    // 0x36f20c: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x36f20cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_36f210:
    // 0x36f210: 0x8c630cb4  lw          $v1, 0xCB4($v1)
    ctx->pc = 0x36f210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3252)));
label_36f214:
    // 0x36f214: 0x28630006  slti        $v1, $v1, 0x6
    ctx->pc = 0x36f214u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
label_36f218:
    // 0x36f218: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
label_36f21c:
    if (ctx->pc == 0x36F21Cu) {
        ctx->pc = 0x36F220u;
        goto label_36f220;
    }
    ctx->pc = 0x36F218u;
    {
        const bool branch_taken_0x36f218 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x36f218) {
            ctx->pc = 0x36F248u;
            goto label_36f248;
        }
    }
    ctx->pc = 0x36F220u;
label_36f220:
    // 0x36f220: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x36f220u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_36f224:
    // 0x36f224: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x36f224u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_36f228:
    // 0x36f228: 0x8e220080  lw          $v0, 0x80($s1)
    ctx->pc = 0x36f228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_36f22c:
    // 0x36f22c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x36f22cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_36f230:
    // 0x36f230: 0xc0e3658  jal         func_38D960
label_36f234:
    if (ctx->pc == 0x36F234u) {
        ctx->pc = 0x36F234u;
            // 0x36f234: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x36F238u;
        goto label_36f238;
    }
    ctx->pc = 0x36F230u;
    SET_GPR_U32(ctx, 31, 0x36F238u);
    ctx->pc = 0x36F234u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36F230u;
            // 0x36f234: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38D960u;
    if (runtime->hasFunction(0x38D960u)) {
        auto targetFn = runtime->lookupFunction(0x38D960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36F238u; }
        if (ctx->pc != 0x36F238u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038D960_0x38d960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36F238u; }
        if (ctx->pc != 0x36F238u) { return; }
    }
    ctx->pc = 0x36F238u;
label_36f238:
    // 0x36f238: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x36f238u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_36f23c:
    // 0x36f23c: 0x270182b  sltu        $v1, $s3, $s0
    ctx->pc = 0x36f23cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_36f240:
    // 0x36f240: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_36f244:
    if (ctx->pc == 0x36F244u) {
        ctx->pc = 0x36F244u;
            // 0x36f244: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x36F248u;
        goto label_36f248;
    }
    ctx->pc = 0x36F240u;
    {
        const bool branch_taken_0x36f240 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x36F244u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36F240u;
            // 0x36f244: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f240) {
            ctx->pc = 0x36F228u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_36f228;
        }
    }
    ctx->pc = 0x36F248u;
label_36f248:
    // 0x36f248: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x36f248u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_36f24c:
    // 0x36f24c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x36f24cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_36f250:
    // 0x36f250: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x36f250u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_36f254:
    // 0x36f254: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x36f254u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_36f258:
    // 0x36f258: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x36f258u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_36f25c:
    // 0x36f25c: 0x3e00008  jr          $ra
label_36f260:
    if (ctx->pc == 0x36F260u) {
        ctx->pc = 0x36F260u;
            // 0x36f260: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x36F264u;
        goto label_36f264;
    }
    ctx->pc = 0x36F25Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36F260u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36F25Cu;
            // 0x36f260: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x36F264u;
label_36f264:
    // 0x36f264: 0x0  nop
    ctx->pc = 0x36f264u;
    // NOP
label_36f268:
    // 0x36f268: 0x0  nop
    ctx->pc = 0x36f268u;
    // NOP
label_36f26c:
    // 0x36f26c: 0x0  nop
    ctx->pc = 0x36f26cu;
    // NOP
label_36f270:
    // 0x36f270: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x36f270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_36f274:
    // 0x36f274: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x36f274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_36f278:
    // 0x36f278: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x36f278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_36f27c:
    // 0x36f27c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x36f27cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_36f280:
    // 0x36f280: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x36f280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_36f284:
    // 0x36f284: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x36f284u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_36f288:
    // 0x36f288: 0x8c91007c  lw          $s1, 0x7C($a0)
    ctx->pc = 0x36f288u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_36f28c:
    // 0x36f28c: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
label_36f290:
    if (ctx->pc == 0x36F290u) {
        ctx->pc = 0x36F290u;
            // 0x36f290: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36F294u;
        goto label_36f294;
    }
    ctx->pc = 0x36F28Cu;
    {
        const bool branch_taken_0x36f28c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x36F290u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36F28Cu;
            // 0x36f290: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f28c) {
            ctx->pc = 0x36F2C8u;
            goto label_36f2c8;
        }
    }
    ctx->pc = 0x36F294u;
label_36f294:
    // 0x36f294: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x36f294u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_36f298:
    // 0x36f298: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x36f298u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_36f29c:
    // 0x36f29c: 0x8e020080  lw          $v0, 0x80($s0)
    ctx->pc = 0x36f29cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_36f2a0:
    // 0x36f2a0: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x36f2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_36f2a4:
    // 0x36f2a4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x36f2a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_36f2a8:
    // 0x36f2a8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x36f2a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_36f2ac:
    // 0x36f2ac: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x36f2acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_36f2b0:
    // 0x36f2b0: 0x320f809  jalr        $t9
label_36f2b4:
    if (ctx->pc == 0x36F2B4u) {
        ctx->pc = 0x36F2B8u;
        goto label_36f2b8;
    }
    ctx->pc = 0x36F2B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x36F2B8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x36F2B8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x36F2B8u; }
            if (ctx->pc != 0x36F2B8u) { return; }
        }
        }
    }
    ctx->pc = 0x36F2B8u;
label_36f2b8:
    // 0x36f2b8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x36f2b8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_36f2bc:
    // 0x36f2bc: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x36f2bcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_36f2c0:
    // 0x36f2c0: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
label_36f2c4:
    if (ctx->pc == 0x36F2C4u) {
        ctx->pc = 0x36F2C4u;
            // 0x36f2c4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x36F2C8u;
        goto label_36f2c8;
    }
    ctx->pc = 0x36F2C0u;
    {
        const bool branch_taken_0x36f2c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x36F2C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36F2C0u;
            // 0x36f2c4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f2c0) {
            ctx->pc = 0x36F29Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_36f29c;
        }
    }
    ctx->pc = 0x36F2C8u;
label_36f2c8:
    // 0x36f2c8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x36f2c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_36f2cc:
    // 0x36f2cc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x36f2ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_36f2d0:
    // 0x36f2d0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x36f2d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_36f2d4:
    // 0x36f2d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x36f2d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_36f2d8:
    // 0x36f2d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x36f2d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_36f2dc:
    // 0x36f2dc: 0x3e00008  jr          $ra
label_36f2e0:
    if (ctx->pc == 0x36F2E0u) {
        ctx->pc = 0x36F2E0u;
            // 0x36f2e0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x36F2E4u;
        goto label_36f2e4;
    }
    ctx->pc = 0x36F2DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36F2E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36F2DCu;
            // 0x36f2e0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x36F2E4u;
label_36f2e4:
    // 0x36f2e4: 0x0  nop
    ctx->pc = 0x36f2e4u;
    // NOP
label_36f2e8:
    // 0x36f2e8: 0x0  nop
    ctx->pc = 0x36f2e8u;
    // NOP
label_36f2ec:
    // 0x36f2ec: 0x0  nop
    ctx->pc = 0x36f2ecu;
    // NOP
}
