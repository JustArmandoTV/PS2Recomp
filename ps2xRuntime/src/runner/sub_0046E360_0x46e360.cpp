#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0046E360
// Address: 0x46e360 - 0x46eda0
void sub_0046E360_0x46e360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046E360_0x46e360");
#endif

    switch (ctx->pc) {
        case 0x46e360u: goto label_46e360;
        case 0x46e364u: goto label_46e364;
        case 0x46e368u: goto label_46e368;
        case 0x46e36cu: goto label_46e36c;
        case 0x46e370u: goto label_46e370;
        case 0x46e374u: goto label_46e374;
        case 0x46e378u: goto label_46e378;
        case 0x46e37cu: goto label_46e37c;
        case 0x46e380u: goto label_46e380;
        case 0x46e384u: goto label_46e384;
        case 0x46e388u: goto label_46e388;
        case 0x46e38cu: goto label_46e38c;
        case 0x46e390u: goto label_46e390;
        case 0x46e394u: goto label_46e394;
        case 0x46e398u: goto label_46e398;
        case 0x46e39cu: goto label_46e39c;
        case 0x46e3a0u: goto label_46e3a0;
        case 0x46e3a4u: goto label_46e3a4;
        case 0x46e3a8u: goto label_46e3a8;
        case 0x46e3acu: goto label_46e3ac;
        case 0x46e3b0u: goto label_46e3b0;
        case 0x46e3b4u: goto label_46e3b4;
        case 0x46e3b8u: goto label_46e3b8;
        case 0x46e3bcu: goto label_46e3bc;
        case 0x46e3c0u: goto label_46e3c0;
        case 0x46e3c4u: goto label_46e3c4;
        case 0x46e3c8u: goto label_46e3c8;
        case 0x46e3ccu: goto label_46e3cc;
        case 0x46e3d0u: goto label_46e3d0;
        case 0x46e3d4u: goto label_46e3d4;
        case 0x46e3d8u: goto label_46e3d8;
        case 0x46e3dcu: goto label_46e3dc;
        case 0x46e3e0u: goto label_46e3e0;
        case 0x46e3e4u: goto label_46e3e4;
        case 0x46e3e8u: goto label_46e3e8;
        case 0x46e3ecu: goto label_46e3ec;
        case 0x46e3f0u: goto label_46e3f0;
        case 0x46e3f4u: goto label_46e3f4;
        case 0x46e3f8u: goto label_46e3f8;
        case 0x46e3fcu: goto label_46e3fc;
        case 0x46e400u: goto label_46e400;
        case 0x46e404u: goto label_46e404;
        case 0x46e408u: goto label_46e408;
        case 0x46e40cu: goto label_46e40c;
        case 0x46e410u: goto label_46e410;
        case 0x46e414u: goto label_46e414;
        case 0x46e418u: goto label_46e418;
        case 0x46e41cu: goto label_46e41c;
        case 0x46e420u: goto label_46e420;
        case 0x46e424u: goto label_46e424;
        case 0x46e428u: goto label_46e428;
        case 0x46e42cu: goto label_46e42c;
        case 0x46e430u: goto label_46e430;
        case 0x46e434u: goto label_46e434;
        case 0x46e438u: goto label_46e438;
        case 0x46e43cu: goto label_46e43c;
        case 0x46e440u: goto label_46e440;
        case 0x46e444u: goto label_46e444;
        case 0x46e448u: goto label_46e448;
        case 0x46e44cu: goto label_46e44c;
        case 0x46e450u: goto label_46e450;
        case 0x46e454u: goto label_46e454;
        case 0x46e458u: goto label_46e458;
        case 0x46e45cu: goto label_46e45c;
        case 0x46e460u: goto label_46e460;
        case 0x46e464u: goto label_46e464;
        case 0x46e468u: goto label_46e468;
        case 0x46e46cu: goto label_46e46c;
        case 0x46e470u: goto label_46e470;
        case 0x46e474u: goto label_46e474;
        case 0x46e478u: goto label_46e478;
        case 0x46e47cu: goto label_46e47c;
        case 0x46e480u: goto label_46e480;
        case 0x46e484u: goto label_46e484;
        case 0x46e488u: goto label_46e488;
        case 0x46e48cu: goto label_46e48c;
        case 0x46e490u: goto label_46e490;
        case 0x46e494u: goto label_46e494;
        case 0x46e498u: goto label_46e498;
        case 0x46e49cu: goto label_46e49c;
        case 0x46e4a0u: goto label_46e4a0;
        case 0x46e4a4u: goto label_46e4a4;
        case 0x46e4a8u: goto label_46e4a8;
        case 0x46e4acu: goto label_46e4ac;
        case 0x46e4b0u: goto label_46e4b0;
        case 0x46e4b4u: goto label_46e4b4;
        case 0x46e4b8u: goto label_46e4b8;
        case 0x46e4bcu: goto label_46e4bc;
        case 0x46e4c0u: goto label_46e4c0;
        case 0x46e4c4u: goto label_46e4c4;
        case 0x46e4c8u: goto label_46e4c8;
        case 0x46e4ccu: goto label_46e4cc;
        case 0x46e4d0u: goto label_46e4d0;
        case 0x46e4d4u: goto label_46e4d4;
        case 0x46e4d8u: goto label_46e4d8;
        case 0x46e4dcu: goto label_46e4dc;
        case 0x46e4e0u: goto label_46e4e0;
        case 0x46e4e4u: goto label_46e4e4;
        case 0x46e4e8u: goto label_46e4e8;
        case 0x46e4ecu: goto label_46e4ec;
        case 0x46e4f0u: goto label_46e4f0;
        case 0x46e4f4u: goto label_46e4f4;
        case 0x46e4f8u: goto label_46e4f8;
        case 0x46e4fcu: goto label_46e4fc;
        case 0x46e500u: goto label_46e500;
        case 0x46e504u: goto label_46e504;
        case 0x46e508u: goto label_46e508;
        case 0x46e50cu: goto label_46e50c;
        case 0x46e510u: goto label_46e510;
        case 0x46e514u: goto label_46e514;
        case 0x46e518u: goto label_46e518;
        case 0x46e51cu: goto label_46e51c;
        case 0x46e520u: goto label_46e520;
        case 0x46e524u: goto label_46e524;
        case 0x46e528u: goto label_46e528;
        case 0x46e52cu: goto label_46e52c;
        case 0x46e530u: goto label_46e530;
        case 0x46e534u: goto label_46e534;
        case 0x46e538u: goto label_46e538;
        case 0x46e53cu: goto label_46e53c;
        case 0x46e540u: goto label_46e540;
        case 0x46e544u: goto label_46e544;
        case 0x46e548u: goto label_46e548;
        case 0x46e54cu: goto label_46e54c;
        case 0x46e550u: goto label_46e550;
        case 0x46e554u: goto label_46e554;
        case 0x46e558u: goto label_46e558;
        case 0x46e55cu: goto label_46e55c;
        case 0x46e560u: goto label_46e560;
        case 0x46e564u: goto label_46e564;
        case 0x46e568u: goto label_46e568;
        case 0x46e56cu: goto label_46e56c;
        case 0x46e570u: goto label_46e570;
        case 0x46e574u: goto label_46e574;
        case 0x46e578u: goto label_46e578;
        case 0x46e57cu: goto label_46e57c;
        case 0x46e580u: goto label_46e580;
        case 0x46e584u: goto label_46e584;
        case 0x46e588u: goto label_46e588;
        case 0x46e58cu: goto label_46e58c;
        case 0x46e590u: goto label_46e590;
        case 0x46e594u: goto label_46e594;
        case 0x46e598u: goto label_46e598;
        case 0x46e59cu: goto label_46e59c;
        case 0x46e5a0u: goto label_46e5a0;
        case 0x46e5a4u: goto label_46e5a4;
        case 0x46e5a8u: goto label_46e5a8;
        case 0x46e5acu: goto label_46e5ac;
        case 0x46e5b0u: goto label_46e5b0;
        case 0x46e5b4u: goto label_46e5b4;
        case 0x46e5b8u: goto label_46e5b8;
        case 0x46e5bcu: goto label_46e5bc;
        case 0x46e5c0u: goto label_46e5c0;
        case 0x46e5c4u: goto label_46e5c4;
        case 0x46e5c8u: goto label_46e5c8;
        case 0x46e5ccu: goto label_46e5cc;
        case 0x46e5d0u: goto label_46e5d0;
        case 0x46e5d4u: goto label_46e5d4;
        case 0x46e5d8u: goto label_46e5d8;
        case 0x46e5dcu: goto label_46e5dc;
        case 0x46e5e0u: goto label_46e5e0;
        case 0x46e5e4u: goto label_46e5e4;
        case 0x46e5e8u: goto label_46e5e8;
        case 0x46e5ecu: goto label_46e5ec;
        case 0x46e5f0u: goto label_46e5f0;
        case 0x46e5f4u: goto label_46e5f4;
        case 0x46e5f8u: goto label_46e5f8;
        case 0x46e5fcu: goto label_46e5fc;
        case 0x46e600u: goto label_46e600;
        case 0x46e604u: goto label_46e604;
        case 0x46e608u: goto label_46e608;
        case 0x46e60cu: goto label_46e60c;
        case 0x46e610u: goto label_46e610;
        case 0x46e614u: goto label_46e614;
        case 0x46e618u: goto label_46e618;
        case 0x46e61cu: goto label_46e61c;
        case 0x46e620u: goto label_46e620;
        case 0x46e624u: goto label_46e624;
        case 0x46e628u: goto label_46e628;
        case 0x46e62cu: goto label_46e62c;
        case 0x46e630u: goto label_46e630;
        case 0x46e634u: goto label_46e634;
        case 0x46e638u: goto label_46e638;
        case 0x46e63cu: goto label_46e63c;
        case 0x46e640u: goto label_46e640;
        case 0x46e644u: goto label_46e644;
        case 0x46e648u: goto label_46e648;
        case 0x46e64cu: goto label_46e64c;
        case 0x46e650u: goto label_46e650;
        case 0x46e654u: goto label_46e654;
        case 0x46e658u: goto label_46e658;
        case 0x46e65cu: goto label_46e65c;
        case 0x46e660u: goto label_46e660;
        case 0x46e664u: goto label_46e664;
        case 0x46e668u: goto label_46e668;
        case 0x46e66cu: goto label_46e66c;
        case 0x46e670u: goto label_46e670;
        case 0x46e674u: goto label_46e674;
        case 0x46e678u: goto label_46e678;
        case 0x46e67cu: goto label_46e67c;
        case 0x46e680u: goto label_46e680;
        case 0x46e684u: goto label_46e684;
        case 0x46e688u: goto label_46e688;
        case 0x46e68cu: goto label_46e68c;
        case 0x46e690u: goto label_46e690;
        case 0x46e694u: goto label_46e694;
        case 0x46e698u: goto label_46e698;
        case 0x46e69cu: goto label_46e69c;
        case 0x46e6a0u: goto label_46e6a0;
        case 0x46e6a4u: goto label_46e6a4;
        case 0x46e6a8u: goto label_46e6a8;
        case 0x46e6acu: goto label_46e6ac;
        case 0x46e6b0u: goto label_46e6b0;
        case 0x46e6b4u: goto label_46e6b4;
        case 0x46e6b8u: goto label_46e6b8;
        case 0x46e6bcu: goto label_46e6bc;
        case 0x46e6c0u: goto label_46e6c0;
        case 0x46e6c4u: goto label_46e6c4;
        case 0x46e6c8u: goto label_46e6c8;
        case 0x46e6ccu: goto label_46e6cc;
        case 0x46e6d0u: goto label_46e6d0;
        case 0x46e6d4u: goto label_46e6d4;
        case 0x46e6d8u: goto label_46e6d8;
        case 0x46e6dcu: goto label_46e6dc;
        case 0x46e6e0u: goto label_46e6e0;
        case 0x46e6e4u: goto label_46e6e4;
        case 0x46e6e8u: goto label_46e6e8;
        case 0x46e6ecu: goto label_46e6ec;
        case 0x46e6f0u: goto label_46e6f0;
        case 0x46e6f4u: goto label_46e6f4;
        case 0x46e6f8u: goto label_46e6f8;
        case 0x46e6fcu: goto label_46e6fc;
        case 0x46e700u: goto label_46e700;
        case 0x46e704u: goto label_46e704;
        case 0x46e708u: goto label_46e708;
        case 0x46e70cu: goto label_46e70c;
        case 0x46e710u: goto label_46e710;
        case 0x46e714u: goto label_46e714;
        case 0x46e718u: goto label_46e718;
        case 0x46e71cu: goto label_46e71c;
        case 0x46e720u: goto label_46e720;
        case 0x46e724u: goto label_46e724;
        case 0x46e728u: goto label_46e728;
        case 0x46e72cu: goto label_46e72c;
        case 0x46e730u: goto label_46e730;
        case 0x46e734u: goto label_46e734;
        case 0x46e738u: goto label_46e738;
        case 0x46e73cu: goto label_46e73c;
        case 0x46e740u: goto label_46e740;
        case 0x46e744u: goto label_46e744;
        case 0x46e748u: goto label_46e748;
        case 0x46e74cu: goto label_46e74c;
        case 0x46e750u: goto label_46e750;
        case 0x46e754u: goto label_46e754;
        case 0x46e758u: goto label_46e758;
        case 0x46e75cu: goto label_46e75c;
        case 0x46e760u: goto label_46e760;
        case 0x46e764u: goto label_46e764;
        case 0x46e768u: goto label_46e768;
        case 0x46e76cu: goto label_46e76c;
        case 0x46e770u: goto label_46e770;
        case 0x46e774u: goto label_46e774;
        case 0x46e778u: goto label_46e778;
        case 0x46e77cu: goto label_46e77c;
        case 0x46e780u: goto label_46e780;
        case 0x46e784u: goto label_46e784;
        case 0x46e788u: goto label_46e788;
        case 0x46e78cu: goto label_46e78c;
        case 0x46e790u: goto label_46e790;
        case 0x46e794u: goto label_46e794;
        case 0x46e798u: goto label_46e798;
        case 0x46e79cu: goto label_46e79c;
        case 0x46e7a0u: goto label_46e7a0;
        case 0x46e7a4u: goto label_46e7a4;
        case 0x46e7a8u: goto label_46e7a8;
        case 0x46e7acu: goto label_46e7ac;
        case 0x46e7b0u: goto label_46e7b0;
        case 0x46e7b4u: goto label_46e7b4;
        case 0x46e7b8u: goto label_46e7b8;
        case 0x46e7bcu: goto label_46e7bc;
        case 0x46e7c0u: goto label_46e7c0;
        case 0x46e7c4u: goto label_46e7c4;
        case 0x46e7c8u: goto label_46e7c8;
        case 0x46e7ccu: goto label_46e7cc;
        case 0x46e7d0u: goto label_46e7d0;
        case 0x46e7d4u: goto label_46e7d4;
        case 0x46e7d8u: goto label_46e7d8;
        case 0x46e7dcu: goto label_46e7dc;
        case 0x46e7e0u: goto label_46e7e0;
        case 0x46e7e4u: goto label_46e7e4;
        case 0x46e7e8u: goto label_46e7e8;
        case 0x46e7ecu: goto label_46e7ec;
        case 0x46e7f0u: goto label_46e7f0;
        case 0x46e7f4u: goto label_46e7f4;
        case 0x46e7f8u: goto label_46e7f8;
        case 0x46e7fcu: goto label_46e7fc;
        case 0x46e800u: goto label_46e800;
        case 0x46e804u: goto label_46e804;
        case 0x46e808u: goto label_46e808;
        case 0x46e80cu: goto label_46e80c;
        case 0x46e810u: goto label_46e810;
        case 0x46e814u: goto label_46e814;
        case 0x46e818u: goto label_46e818;
        case 0x46e81cu: goto label_46e81c;
        case 0x46e820u: goto label_46e820;
        case 0x46e824u: goto label_46e824;
        case 0x46e828u: goto label_46e828;
        case 0x46e82cu: goto label_46e82c;
        case 0x46e830u: goto label_46e830;
        case 0x46e834u: goto label_46e834;
        case 0x46e838u: goto label_46e838;
        case 0x46e83cu: goto label_46e83c;
        case 0x46e840u: goto label_46e840;
        case 0x46e844u: goto label_46e844;
        case 0x46e848u: goto label_46e848;
        case 0x46e84cu: goto label_46e84c;
        case 0x46e850u: goto label_46e850;
        case 0x46e854u: goto label_46e854;
        case 0x46e858u: goto label_46e858;
        case 0x46e85cu: goto label_46e85c;
        case 0x46e860u: goto label_46e860;
        case 0x46e864u: goto label_46e864;
        case 0x46e868u: goto label_46e868;
        case 0x46e86cu: goto label_46e86c;
        case 0x46e870u: goto label_46e870;
        case 0x46e874u: goto label_46e874;
        case 0x46e878u: goto label_46e878;
        case 0x46e87cu: goto label_46e87c;
        case 0x46e880u: goto label_46e880;
        case 0x46e884u: goto label_46e884;
        case 0x46e888u: goto label_46e888;
        case 0x46e88cu: goto label_46e88c;
        case 0x46e890u: goto label_46e890;
        case 0x46e894u: goto label_46e894;
        case 0x46e898u: goto label_46e898;
        case 0x46e89cu: goto label_46e89c;
        case 0x46e8a0u: goto label_46e8a0;
        case 0x46e8a4u: goto label_46e8a4;
        case 0x46e8a8u: goto label_46e8a8;
        case 0x46e8acu: goto label_46e8ac;
        case 0x46e8b0u: goto label_46e8b0;
        case 0x46e8b4u: goto label_46e8b4;
        case 0x46e8b8u: goto label_46e8b8;
        case 0x46e8bcu: goto label_46e8bc;
        case 0x46e8c0u: goto label_46e8c0;
        case 0x46e8c4u: goto label_46e8c4;
        case 0x46e8c8u: goto label_46e8c8;
        case 0x46e8ccu: goto label_46e8cc;
        case 0x46e8d0u: goto label_46e8d0;
        case 0x46e8d4u: goto label_46e8d4;
        case 0x46e8d8u: goto label_46e8d8;
        case 0x46e8dcu: goto label_46e8dc;
        case 0x46e8e0u: goto label_46e8e0;
        case 0x46e8e4u: goto label_46e8e4;
        case 0x46e8e8u: goto label_46e8e8;
        case 0x46e8ecu: goto label_46e8ec;
        case 0x46e8f0u: goto label_46e8f0;
        case 0x46e8f4u: goto label_46e8f4;
        case 0x46e8f8u: goto label_46e8f8;
        case 0x46e8fcu: goto label_46e8fc;
        case 0x46e900u: goto label_46e900;
        case 0x46e904u: goto label_46e904;
        case 0x46e908u: goto label_46e908;
        case 0x46e90cu: goto label_46e90c;
        case 0x46e910u: goto label_46e910;
        case 0x46e914u: goto label_46e914;
        case 0x46e918u: goto label_46e918;
        case 0x46e91cu: goto label_46e91c;
        case 0x46e920u: goto label_46e920;
        case 0x46e924u: goto label_46e924;
        case 0x46e928u: goto label_46e928;
        case 0x46e92cu: goto label_46e92c;
        case 0x46e930u: goto label_46e930;
        case 0x46e934u: goto label_46e934;
        case 0x46e938u: goto label_46e938;
        case 0x46e93cu: goto label_46e93c;
        case 0x46e940u: goto label_46e940;
        case 0x46e944u: goto label_46e944;
        case 0x46e948u: goto label_46e948;
        case 0x46e94cu: goto label_46e94c;
        case 0x46e950u: goto label_46e950;
        case 0x46e954u: goto label_46e954;
        case 0x46e958u: goto label_46e958;
        case 0x46e95cu: goto label_46e95c;
        case 0x46e960u: goto label_46e960;
        case 0x46e964u: goto label_46e964;
        case 0x46e968u: goto label_46e968;
        case 0x46e96cu: goto label_46e96c;
        case 0x46e970u: goto label_46e970;
        case 0x46e974u: goto label_46e974;
        case 0x46e978u: goto label_46e978;
        case 0x46e97cu: goto label_46e97c;
        case 0x46e980u: goto label_46e980;
        case 0x46e984u: goto label_46e984;
        case 0x46e988u: goto label_46e988;
        case 0x46e98cu: goto label_46e98c;
        case 0x46e990u: goto label_46e990;
        case 0x46e994u: goto label_46e994;
        case 0x46e998u: goto label_46e998;
        case 0x46e99cu: goto label_46e99c;
        case 0x46e9a0u: goto label_46e9a0;
        case 0x46e9a4u: goto label_46e9a4;
        case 0x46e9a8u: goto label_46e9a8;
        case 0x46e9acu: goto label_46e9ac;
        case 0x46e9b0u: goto label_46e9b0;
        case 0x46e9b4u: goto label_46e9b4;
        case 0x46e9b8u: goto label_46e9b8;
        case 0x46e9bcu: goto label_46e9bc;
        case 0x46e9c0u: goto label_46e9c0;
        case 0x46e9c4u: goto label_46e9c4;
        case 0x46e9c8u: goto label_46e9c8;
        case 0x46e9ccu: goto label_46e9cc;
        case 0x46e9d0u: goto label_46e9d0;
        case 0x46e9d4u: goto label_46e9d4;
        case 0x46e9d8u: goto label_46e9d8;
        case 0x46e9dcu: goto label_46e9dc;
        case 0x46e9e0u: goto label_46e9e0;
        case 0x46e9e4u: goto label_46e9e4;
        case 0x46e9e8u: goto label_46e9e8;
        case 0x46e9ecu: goto label_46e9ec;
        case 0x46e9f0u: goto label_46e9f0;
        case 0x46e9f4u: goto label_46e9f4;
        case 0x46e9f8u: goto label_46e9f8;
        case 0x46e9fcu: goto label_46e9fc;
        case 0x46ea00u: goto label_46ea00;
        case 0x46ea04u: goto label_46ea04;
        case 0x46ea08u: goto label_46ea08;
        case 0x46ea0cu: goto label_46ea0c;
        case 0x46ea10u: goto label_46ea10;
        case 0x46ea14u: goto label_46ea14;
        case 0x46ea18u: goto label_46ea18;
        case 0x46ea1cu: goto label_46ea1c;
        case 0x46ea20u: goto label_46ea20;
        case 0x46ea24u: goto label_46ea24;
        case 0x46ea28u: goto label_46ea28;
        case 0x46ea2cu: goto label_46ea2c;
        case 0x46ea30u: goto label_46ea30;
        case 0x46ea34u: goto label_46ea34;
        case 0x46ea38u: goto label_46ea38;
        case 0x46ea3cu: goto label_46ea3c;
        case 0x46ea40u: goto label_46ea40;
        case 0x46ea44u: goto label_46ea44;
        case 0x46ea48u: goto label_46ea48;
        case 0x46ea4cu: goto label_46ea4c;
        case 0x46ea50u: goto label_46ea50;
        case 0x46ea54u: goto label_46ea54;
        case 0x46ea58u: goto label_46ea58;
        case 0x46ea5cu: goto label_46ea5c;
        case 0x46ea60u: goto label_46ea60;
        case 0x46ea64u: goto label_46ea64;
        case 0x46ea68u: goto label_46ea68;
        case 0x46ea6cu: goto label_46ea6c;
        case 0x46ea70u: goto label_46ea70;
        case 0x46ea74u: goto label_46ea74;
        case 0x46ea78u: goto label_46ea78;
        case 0x46ea7cu: goto label_46ea7c;
        case 0x46ea80u: goto label_46ea80;
        case 0x46ea84u: goto label_46ea84;
        case 0x46ea88u: goto label_46ea88;
        case 0x46ea8cu: goto label_46ea8c;
        case 0x46ea90u: goto label_46ea90;
        case 0x46ea94u: goto label_46ea94;
        case 0x46ea98u: goto label_46ea98;
        case 0x46ea9cu: goto label_46ea9c;
        case 0x46eaa0u: goto label_46eaa0;
        case 0x46eaa4u: goto label_46eaa4;
        case 0x46eaa8u: goto label_46eaa8;
        case 0x46eaacu: goto label_46eaac;
        case 0x46eab0u: goto label_46eab0;
        case 0x46eab4u: goto label_46eab4;
        case 0x46eab8u: goto label_46eab8;
        case 0x46eabcu: goto label_46eabc;
        case 0x46eac0u: goto label_46eac0;
        case 0x46eac4u: goto label_46eac4;
        case 0x46eac8u: goto label_46eac8;
        case 0x46eaccu: goto label_46eacc;
        case 0x46ead0u: goto label_46ead0;
        case 0x46ead4u: goto label_46ead4;
        case 0x46ead8u: goto label_46ead8;
        case 0x46eadcu: goto label_46eadc;
        case 0x46eae0u: goto label_46eae0;
        case 0x46eae4u: goto label_46eae4;
        case 0x46eae8u: goto label_46eae8;
        case 0x46eaecu: goto label_46eaec;
        case 0x46eaf0u: goto label_46eaf0;
        case 0x46eaf4u: goto label_46eaf4;
        case 0x46eaf8u: goto label_46eaf8;
        case 0x46eafcu: goto label_46eafc;
        case 0x46eb00u: goto label_46eb00;
        case 0x46eb04u: goto label_46eb04;
        case 0x46eb08u: goto label_46eb08;
        case 0x46eb0cu: goto label_46eb0c;
        case 0x46eb10u: goto label_46eb10;
        case 0x46eb14u: goto label_46eb14;
        case 0x46eb18u: goto label_46eb18;
        case 0x46eb1cu: goto label_46eb1c;
        case 0x46eb20u: goto label_46eb20;
        case 0x46eb24u: goto label_46eb24;
        case 0x46eb28u: goto label_46eb28;
        case 0x46eb2cu: goto label_46eb2c;
        case 0x46eb30u: goto label_46eb30;
        case 0x46eb34u: goto label_46eb34;
        case 0x46eb38u: goto label_46eb38;
        case 0x46eb3cu: goto label_46eb3c;
        case 0x46eb40u: goto label_46eb40;
        case 0x46eb44u: goto label_46eb44;
        case 0x46eb48u: goto label_46eb48;
        case 0x46eb4cu: goto label_46eb4c;
        case 0x46eb50u: goto label_46eb50;
        case 0x46eb54u: goto label_46eb54;
        case 0x46eb58u: goto label_46eb58;
        case 0x46eb5cu: goto label_46eb5c;
        case 0x46eb60u: goto label_46eb60;
        case 0x46eb64u: goto label_46eb64;
        case 0x46eb68u: goto label_46eb68;
        case 0x46eb6cu: goto label_46eb6c;
        case 0x46eb70u: goto label_46eb70;
        case 0x46eb74u: goto label_46eb74;
        case 0x46eb78u: goto label_46eb78;
        case 0x46eb7cu: goto label_46eb7c;
        case 0x46eb80u: goto label_46eb80;
        case 0x46eb84u: goto label_46eb84;
        case 0x46eb88u: goto label_46eb88;
        case 0x46eb8cu: goto label_46eb8c;
        case 0x46eb90u: goto label_46eb90;
        case 0x46eb94u: goto label_46eb94;
        case 0x46eb98u: goto label_46eb98;
        case 0x46eb9cu: goto label_46eb9c;
        case 0x46eba0u: goto label_46eba0;
        case 0x46eba4u: goto label_46eba4;
        case 0x46eba8u: goto label_46eba8;
        case 0x46ebacu: goto label_46ebac;
        case 0x46ebb0u: goto label_46ebb0;
        case 0x46ebb4u: goto label_46ebb4;
        case 0x46ebb8u: goto label_46ebb8;
        case 0x46ebbcu: goto label_46ebbc;
        case 0x46ebc0u: goto label_46ebc0;
        case 0x46ebc4u: goto label_46ebc4;
        case 0x46ebc8u: goto label_46ebc8;
        case 0x46ebccu: goto label_46ebcc;
        case 0x46ebd0u: goto label_46ebd0;
        case 0x46ebd4u: goto label_46ebd4;
        case 0x46ebd8u: goto label_46ebd8;
        case 0x46ebdcu: goto label_46ebdc;
        case 0x46ebe0u: goto label_46ebe0;
        case 0x46ebe4u: goto label_46ebe4;
        case 0x46ebe8u: goto label_46ebe8;
        case 0x46ebecu: goto label_46ebec;
        case 0x46ebf0u: goto label_46ebf0;
        case 0x46ebf4u: goto label_46ebf4;
        case 0x46ebf8u: goto label_46ebf8;
        case 0x46ebfcu: goto label_46ebfc;
        case 0x46ec00u: goto label_46ec00;
        case 0x46ec04u: goto label_46ec04;
        case 0x46ec08u: goto label_46ec08;
        case 0x46ec0cu: goto label_46ec0c;
        case 0x46ec10u: goto label_46ec10;
        case 0x46ec14u: goto label_46ec14;
        case 0x46ec18u: goto label_46ec18;
        case 0x46ec1cu: goto label_46ec1c;
        case 0x46ec20u: goto label_46ec20;
        case 0x46ec24u: goto label_46ec24;
        case 0x46ec28u: goto label_46ec28;
        case 0x46ec2cu: goto label_46ec2c;
        case 0x46ec30u: goto label_46ec30;
        case 0x46ec34u: goto label_46ec34;
        case 0x46ec38u: goto label_46ec38;
        case 0x46ec3cu: goto label_46ec3c;
        case 0x46ec40u: goto label_46ec40;
        case 0x46ec44u: goto label_46ec44;
        case 0x46ec48u: goto label_46ec48;
        case 0x46ec4cu: goto label_46ec4c;
        case 0x46ec50u: goto label_46ec50;
        case 0x46ec54u: goto label_46ec54;
        case 0x46ec58u: goto label_46ec58;
        case 0x46ec5cu: goto label_46ec5c;
        case 0x46ec60u: goto label_46ec60;
        case 0x46ec64u: goto label_46ec64;
        case 0x46ec68u: goto label_46ec68;
        case 0x46ec6cu: goto label_46ec6c;
        case 0x46ec70u: goto label_46ec70;
        case 0x46ec74u: goto label_46ec74;
        case 0x46ec78u: goto label_46ec78;
        case 0x46ec7cu: goto label_46ec7c;
        case 0x46ec80u: goto label_46ec80;
        case 0x46ec84u: goto label_46ec84;
        case 0x46ec88u: goto label_46ec88;
        case 0x46ec8cu: goto label_46ec8c;
        case 0x46ec90u: goto label_46ec90;
        case 0x46ec94u: goto label_46ec94;
        case 0x46ec98u: goto label_46ec98;
        case 0x46ec9cu: goto label_46ec9c;
        case 0x46eca0u: goto label_46eca0;
        case 0x46eca4u: goto label_46eca4;
        case 0x46eca8u: goto label_46eca8;
        case 0x46ecacu: goto label_46ecac;
        case 0x46ecb0u: goto label_46ecb0;
        case 0x46ecb4u: goto label_46ecb4;
        case 0x46ecb8u: goto label_46ecb8;
        case 0x46ecbcu: goto label_46ecbc;
        case 0x46ecc0u: goto label_46ecc0;
        case 0x46ecc4u: goto label_46ecc4;
        case 0x46ecc8u: goto label_46ecc8;
        case 0x46ecccu: goto label_46eccc;
        case 0x46ecd0u: goto label_46ecd0;
        case 0x46ecd4u: goto label_46ecd4;
        case 0x46ecd8u: goto label_46ecd8;
        case 0x46ecdcu: goto label_46ecdc;
        case 0x46ece0u: goto label_46ece0;
        case 0x46ece4u: goto label_46ece4;
        case 0x46ece8u: goto label_46ece8;
        case 0x46ececu: goto label_46ecec;
        case 0x46ecf0u: goto label_46ecf0;
        case 0x46ecf4u: goto label_46ecf4;
        case 0x46ecf8u: goto label_46ecf8;
        case 0x46ecfcu: goto label_46ecfc;
        case 0x46ed00u: goto label_46ed00;
        case 0x46ed04u: goto label_46ed04;
        case 0x46ed08u: goto label_46ed08;
        case 0x46ed0cu: goto label_46ed0c;
        case 0x46ed10u: goto label_46ed10;
        case 0x46ed14u: goto label_46ed14;
        case 0x46ed18u: goto label_46ed18;
        case 0x46ed1cu: goto label_46ed1c;
        case 0x46ed20u: goto label_46ed20;
        case 0x46ed24u: goto label_46ed24;
        case 0x46ed28u: goto label_46ed28;
        case 0x46ed2cu: goto label_46ed2c;
        case 0x46ed30u: goto label_46ed30;
        case 0x46ed34u: goto label_46ed34;
        case 0x46ed38u: goto label_46ed38;
        case 0x46ed3cu: goto label_46ed3c;
        case 0x46ed40u: goto label_46ed40;
        case 0x46ed44u: goto label_46ed44;
        case 0x46ed48u: goto label_46ed48;
        case 0x46ed4cu: goto label_46ed4c;
        case 0x46ed50u: goto label_46ed50;
        case 0x46ed54u: goto label_46ed54;
        case 0x46ed58u: goto label_46ed58;
        case 0x46ed5cu: goto label_46ed5c;
        case 0x46ed60u: goto label_46ed60;
        case 0x46ed64u: goto label_46ed64;
        case 0x46ed68u: goto label_46ed68;
        case 0x46ed6cu: goto label_46ed6c;
        case 0x46ed70u: goto label_46ed70;
        case 0x46ed74u: goto label_46ed74;
        case 0x46ed78u: goto label_46ed78;
        case 0x46ed7cu: goto label_46ed7c;
        case 0x46ed80u: goto label_46ed80;
        case 0x46ed84u: goto label_46ed84;
        case 0x46ed88u: goto label_46ed88;
        case 0x46ed8cu: goto label_46ed8c;
        case 0x46ed90u: goto label_46ed90;
        case 0x46ed94u: goto label_46ed94;
        case 0x46ed98u: goto label_46ed98;
        case 0x46ed9cu: goto label_46ed9c;
        default: break;
    }

    ctx->pc = 0x46e360u;

label_46e360:
    // 0x46e360: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x46e360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_46e364:
    // 0x46e364: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x46e364u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_46e368:
    // 0x46e368: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x46e368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_46e36c:
    // 0x46e36c: 0x24420820  addiu       $v0, $v0, 0x820
    ctx->pc = 0x46e36cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2080));
label_46e370:
    // 0x46e370: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x46e370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_46e374:
    // 0x46e374: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x46e374u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46e378:
    // 0x46e378: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x46e378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_46e37c:
    // 0x46e37c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x46e37cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_46e380:
    // 0x46e380: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x46e380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_46e384:
    // 0x46e384: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x46e384u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_46e388:
    // 0x46e388: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x46e388u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_46e38c:
    // 0x46e38c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x46e38cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_46e390:
    // 0x46e390: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x46e390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_46e394:
    // 0x46e394: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x46e394u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_46e398:
    // 0x46e398: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x46e398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_46e39c:
    // 0x46e39c: 0x132040  sll         $a0, $s3, 1
    ctx->pc = 0x46e39cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
label_46e3a0:
    // 0x46e3a0: 0x439021  addu        $s2, $v0, $v1
    ctx->pc = 0x46e3a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_46e3a4:
    // 0x46e3a4: 0x931821  addu        $v1, $a0, $s3
    ctx->pc = 0x46e3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
label_46e3a8:
    // 0x46e3a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x46e3a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_46e3ac:
    // 0x46e3ac: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x46e3acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_46e3b0:
    // 0x46e3b0: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x46e3b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_46e3b4:
    // 0x46e3b4: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x46e3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_46e3b8:
    // 0x46e3b8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x46e3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_46e3bc:
    // 0x46e3bc: 0x2832821  addu        $a1, $s4, $v1
    ctx->pc = 0x46e3bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
label_46e3c0:
    // 0x46e3c0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x46e3c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46e3c4:
    // 0x46e3c4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x46e3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_46e3c8:
    // 0x46e3c8: 0x2463976c  addiu       $v1, $v1, -0x6894
    ctx->pc = 0x46e3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940524));
label_46e3cc:
    // 0x46e3cc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x46e3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_46e3d0:
    // 0x46e3d0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x46e3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_46e3d4:
    // 0x46e3d4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x46e3d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_46e3d8:
    // 0x46e3d8: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x46e3d8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_46e3dc:
    // 0x46e3dc: 0x10600027  beqz        $v1, . + 4 + (0x27 << 2)
label_46e3e0:
    if (ctx->pc == 0x46E3E0u) {
        ctx->pc = 0x46E3E0u;
            // 0x46e3e0: 0x24b60070  addiu       $s6, $a1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 5), 112));
        ctx->pc = 0x46E3E4u;
        goto label_46e3e4;
    }
    ctx->pc = 0x46E3DCu;
    {
        const bool branch_taken_0x46e3dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x46E3E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46E3DCu;
            // 0x46e3e0: 0x24b60070  addiu       $s6, $a1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 5), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46e3dc) {
            ctx->pc = 0x46E47Cu;
            goto label_46e47c;
        }
    }
    ctx->pc = 0x46E3E4u;
label_46e3e4:
    // 0x46e3e4: 0x26620024  addiu       $v0, $s3, 0x24
    ctx->pc = 0x46e3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 36));
label_46e3e8:
    // 0x46e3e8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x46e3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_46e3ec:
    // 0x46e3ec: 0xa2c30000  sb          $v1, 0x0($s6)
    ctx->pc = 0x46e3ecu;
    WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 3));
label_46e3f0:
    // 0x46e3f0: 0x28080  sll         $s0, $v0, 2
    ctx->pc = 0x46e3f0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_46e3f4:
    // 0x46e3f4: 0x8e82006c  lw          $v0, 0x6C($s4)
    ctx->pc = 0x46e3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 108)));
label_46e3f8:
    // 0x46e3f8: 0x8c510004  lw          $s1, 0x4($v0)
    ctx->pc = 0x46e3f8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_46e3fc:
    // 0x46e3fc: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x46e3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_46e400:
    // 0x46e400: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x46e400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_46e404:
    // 0x46e404: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x46e404u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_46e408:
    // 0x46e408: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x46e408u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_46e40c:
    // 0x46e40c: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x46e40cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_46e410:
    // 0x46e410: 0x320f809  jalr        $t9
label_46e414:
    if (ctx->pc == 0x46E414u) {
        ctx->pc = 0x46E414u;
            // 0x46e414: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46E418u;
        goto label_46e418;
    }
    ctx->pc = 0x46E410u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x46E418u);
        ctx->pc = 0x46E414u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46E410u;
            // 0x46e414: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x46E418u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x46E418u; }
            if (ctx->pc != 0x46E418u) { return; }
        }
        }
    }
    ctx->pc = 0x46E418u;
label_46e418:
    // 0x46e418: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x46e418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_46e41c:
    // 0x46e41c: 0xa222007c  sb          $v0, 0x7C($s1)
    ctx->pc = 0x46e41cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 124), (uint8_t)GPR_U32(ctx, 2));
label_46e420:
    // 0x46e420: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x46e420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_46e424:
    // 0x46e424: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x46e424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_46e428:
    // 0x46e428: 0xc123848  jal         func_48E120
label_46e42c:
    if (ctx->pc == 0x46E42Cu) {
        ctx->pc = 0x46E42Cu;
            // 0x46e42c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x46E430u;
        goto label_46e430;
    }
    ctx->pc = 0x46E428u;
    SET_GPR_U32(ctx, 31, 0x46E430u);
    ctx->pc = 0x46E42Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46E428u;
            // 0x46e42c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E120u;
    if (runtime->hasFunction(0x48E120u)) {
        auto targetFn = runtime->lookupFunction(0x48E120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46E430u; }
        if (ctx->pc != 0x46E430u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E120_0x48e120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46E430u; }
        if (ctx->pc != 0x46E430u) { return; }
    }
    ctx->pc = 0x46E430u;
label_46e430:
    // 0x46e430: 0x8e250014  lw          $a1, 0x14($s1)
    ctx->pc = 0x46e430u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_46e434:
    // 0x46e434: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x46e434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
label_46e438:
    // 0x46e438: 0x344400a9  ori         $a0, $v0, 0xA9
    ctx->pc = 0x46e438u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)169);
label_46e43c:
    // 0x46e43c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x46e43cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_46e440:
    // 0x46e440: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x46e440u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_46e444:
    // 0x46e444: 0xb01021  addu        $v0, $a1, $s0
    ctx->pc = 0x46e444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
label_46e448:
    // 0x46e448: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x46e448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_46e44c:
    // 0x46e44c: 0xa4460046  sh          $a2, 0x46($v0)
    ctx->pc = 0x46e44cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 70), (uint16_t)GPR_U32(ctx, 6));
label_46e450:
    // 0x46e450: 0x8e82006c  lw          $v0, 0x6C($s4)
    ctx->pc = 0x46e450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 108)));
label_46e454:
    // 0x46e454: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x46e454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_46e458:
    // 0x46e458: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x46e458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_46e45c:
    // 0x46e45c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x46e45cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_46e460:
    // 0x46e460: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x46e460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_46e464:
    // 0x46e464: 0xa4400046  sh          $zero, 0x46($v0)
    ctx->pc = 0x46e464u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 70), (uint16_t)GPR_U32(ctx, 0));
label_46e468:
    // 0x46e468: 0xa6c00004  sh          $zero, 0x4($s6)
    ctx->pc = 0x46e468u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 4), (uint16_t)GPR_U32(ctx, 0));
label_46e46c:
    // 0x46e46c: 0xc073234  jal         func_1CC8D0
label_46e470:
    if (ctx->pc == 0x46E470u) {
        ctx->pc = 0x46E470u;
            // 0x46e470: 0xa6c30006  sh          $v1, 0x6($s6) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 22), 6), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x46E474u;
        goto label_46e474;
    }
    ctx->pc = 0x46E46Cu;
    SET_GPR_U32(ctx, 31, 0x46E474u);
    ctx->pc = 0x46E470u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46E46Cu;
            // 0x46e470: 0xa6c30006  sh          $v1, 0x6($s6) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 22), 6), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46E474u; }
        if (ctx->pc != 0x46E474u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46E474u; }
        if (ctx->pc != 0x46E474u) { return; }
    }
    ctx->pc = 0x46E474u;
label_46e474:
    // 0x46e474: 0x1000023c  b           . + 4 + (0x23C << 2)
label_46e478:
    if (ctx->pc == 0x46E478u) {
        ctx->pc = 0x46E478u;
            // 0x46e478: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46E47Cu;
        goto label_46e47c;
    }
    ctx->pc = 0x46E474u;
    {
        const bool branch_taken_0x46e474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46E478u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46E474u;
            // 0x46e478: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46e474) {
            ctx->pc = 0x46ED68u;
            goto label_46ed68;
        }
    }
    ctx->pc = 0x46E47Cu;
label_46e47c:
    // 0x46e47c: 0x8e870058  lw          $a3, 0x58($s4)
    ctx->pc = 0x46e47cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 88)));
label_46e480:
    // 0x46e480: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x46e480u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_46e484:
    // 0x46e484: 0x50e30120  beql        $a3, $v1, . + 4 + (0x120 << 2)
label_46e488:
    if (ctx->pc == 0x46E488u) {
        ctx->pc = 0x46E488u;
            // 0x46e488: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x46E48Cu;
        goto label_46e48c;
    }
    ctx->pc = 0x46E484u;
    {
        const bool branch_taken_0x46e484 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        if (branch_taken_0x46e484) {
            ctx->pc = 0x46E488u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x46E484u;
            // 0x46e488: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x46E908u;
            goto label_46e908;
        }
    }
    ctx->pc = 0x46E48Cu;
label_46e48c:
    // 0x46e48c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x46e48cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_46e490:
    // 0x46e490: 0x50e30007  beql        $a3, $v1, . + 4 + (0x7 << 2)
label_46e494:
    if (ctx->pc == 0x46E494u) {
        ctx->pc = 0x46E494u;
            // 0x46e494: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46E498u;
        goto label_46e498;
    }
    ctx->pc = 0x46E490u;
    {
        const bool branch_taken_0x46e490 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        if (branch_taken_0x46e490) {
            ctx->pc = 0x46E494u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x46E490u;
            // 0x46e494: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x46E4B0u;
            goto label_46e4b0;
        }
    }
    ctx->pc = 0x46E498u;
label_46e498:
    // 0x46e498: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x46e498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_46e49c:
    // 0x46e49c: 0x10e30003  beq         $a3, $v1, . + 4 + (0x3 << 2)
label_46e4a0:
    if (ctx->pc == 0x46E4A0u) {
        ctx->pc = 0x46E4A4u;
        goto label_46e4a4;
    }
    ctx->pc = 0x46E49Cu;
    {
        const bool branch_taken_0x46e49c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        if (branch_taken_0x46e49c) {
            ctx->pc = 0x46E4ACu;
            goto label_46e4ac;
        }
    }
    ctx->pc = 0x46E4A4u;
label_46e4a4:
    // 0x46e4a4: 0x10000230  b           . + 4 + (0x230 << 2)
label_46e4a8:
    if (ctx->pc == 0x46E4A8u) {
        ctx->pc = 0x46E4A8u;
            // 0x46e4a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46E4ACu;
        goto label_46e4ac;
    }
    ctx->pc = 0x46E4A4u;
    {
        const bool branch_taken_0x46e4a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46E4A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46E4A4u;
            // 0x46e4a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46e4a4) {
            ctx->pc = 0x46ED68u;
            goto label_46ed68;
        }
    }
    ctx->pc = 0x46E4ACu;
label_46e4ac:
    // 0x46e4ac: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x46e4acu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46e4b0:
    // 0x46e4b0: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x46e4b0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_46e4b4:
    // 0x46e4b4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x46e4b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_46e4b8:
    // 0x46e4b8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x46e4b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_46e4bc:
    // 0x46e4bc: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x46e4bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_46e4c0:
    // 0x46e4c0: 0x15330003  bne         $t1, $s3, . + 4 + (0x3 << 2)
label_46e4c4:
    if (ctx->pc == 0x46E4C4u) {
        ctx->pc = 0x46E4C4u;
            // 0x46e4c4: 0x25030070  addiu       $v1, $t0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 112));
        ctx->pc = 0x46E4C8u;
        goto label_46e4c8;
    }
    ctx->pc = 0x46E4C0u;
    {
        const bool branch_taken_0x46e4c0 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 19));
        ctx->pc = 0x46E4C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46E4C0u;
            // 0x46e4c4: 0x25030070  addiu       $v1, $t0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46e4c0) {
            ctx->pc = 0x46E4D0u;
            goto label_46e4d0;
        }
    }
    ctx->pc = 0x46E4C8u;
label_46e4c8:
    // 0x46e4c8: 0x1000000d  b           . + 4 + (0xD << 2)
label_46e4cc:
    if (ctx->pc == 0x46E4CCu) {
        ctx->pc = 0x46E4CCu;
            // 0x46e4cc: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x46E4D0u;
        goto label_46e4d0;
    }
    ctx->pc = 0x46E4C8u;
    {
        const bool branch_taken_0x46e4c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46E4CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46E4C8u;
            // 0x46e4cc: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46e4c8) {
            ctx->pc = 0x46E500u;
            goto label_46e500;
        }
    }
    ctx->pc = 0x46E4D0u;
label_46e4d0:
    // 0x46e4d0: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x46e4d0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_46e4d4:
    // 0x46e4d4: 0x10660008  beq         $v1, $a2, . + 4 + (0x8 << 2)
label_46e4d8:
    if (ctx->pc == 0x46E4D8u) {
        ctx->pc = 0x46E4DCu;
        goto label_46e4dc;
    }
    ctx->pc = 0x46E4D4u;
    {
        const bool branch_taken_0x46e4d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x46e4d4) {
            ctx->pc = 0x46E4F8u;
            goto label_46e4f8;
        }
    }
    ctx->pc = 0x46E4DCu;
label_46e4dc:
    // 0x46e4dc: 0x10650006  beq         $v1, $a1, . + 4 + (0x6 << 2)
label_46e4e0:
    if (ctx->pc == 0x46E4E0u) {
        ctx->pc = 0x46E4E4u;
        goto label_46e4e4;
    }
    ctx->pc = 0x46E4DCu;
    {
        const bool branch_taken_0x46e4dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x46e4dc) {
            ctx->pc = 0x46E4F8u;
            goto label_46e4f8;
        }
    }
    ctx->pc = 0x46E4E4u;
label_46e4e4:
    // 0x46e4e4: 0x10640004  beq         $v1, $a0, . + 4 + (0x4 << 2)
label_46e4e8:
    if (ctx->pc == 0x46E4E8u) {
        ctx->pc = 0x46E4ECu;
        goto label_46e4ec;
    }
    ctx->pc = 0x46E4E4u;
    {
        const bool branch_taken_0x46e4e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x46e4e4) {
            ctx->pc = 0x46E4F8u;
            goto label_46e4f8;
        }
    }
    ctx->pc = 0x46E4ECu;
label_46e4ec:
    // 0x46e4ec: 0x10000004  b           . + 4 + (0x4 << 2)
label_46e4f0:
    if (ctx->pc == 0x46E4F0u) {
        ctx->pc = 0x46E4F4u;
        goto label_46e4f4;
    }
    ctx->pc = 0x46E4ECu;
    {
        const bool branch_taken_0x46e4ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x46e4ec) {
            ctx->pc = 0x46E500u;
            goto label_46e500;
        }
    }
    ctx->pc = 0x46E4F4u;
label_46e4f4:
    // 0x46e4f4: 0x0  nop
    ctx->pc = 0x46e4f4u;
    // NOP
label_46e4f8:
    // 0x46e4f8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x46e4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_46e4fc:
    // 0x46e4fc: 0x0  nop
    ctx->pc = 0x46e4fcu;
    // NOP
label_46e500:
    // 0x46e500: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x46e500u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_46e504:
    // 0x46e504: 0x127182b  sltu        $v1, $t1, $a3
    ctx->pc = 0x46e504u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
label_46e508:
    // 0x46e508: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
label_46e50c:
    if (ctx->pc == 0x46E50Cu) {
        ctx->pc = 0x46E50Cu;
            // 0x46e50c: 0x2508005c  addiu       $t0, $t0, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 92));
        ctx->pc = 0x46E510u;
        goto label_46e510;
    }
    ctx->pc = 0x46E508u;
    {
        const bool branch_taken_0x46e508 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x46E50Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46E508u;
            // 0x46e50c: 0x2508005c  addiu       $t0, $t0, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46e508) {
            ctx->pc = 0x46E4C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_46e4c0;
        }
    }
    ctx->pc = 0x46E510u;
label_46e510:
    // 0x46e510: 0x14470214  bne         $v0, $a3, . + 4 + (0x214 << 2)
label_46e514:
    if (ctx->pc == 0x46E514u) {
        ctx->pc = 0x46E518u;
        goto label_46e518;
    }
    ctx->pc = 0x46E510u;
    {
        const bool branch_taken_0x46e510 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        if (branch_taken_0x46e510) {
            ctx->pc = 0x46ED64u;
            goto label_46ed64;
        }
    }
    ctx->pc = 0x46E518u;
label_46e518:
    // 0x46e518: 0x566000f9  bnel        $s3, $zero, . + 4 + (0xF9 << 2)
label_46e51c:
    if (ctx->pc == 0x46E51Cu) {
        ctx->pc = 0x46E51Cu;
            // 0x46e51c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x46E520u;
        goto label_46e520;
    }
    ctx->pc = 0x46E518u;
    {
        const bool branch_taken_0x46e518 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x46e518) {
            ctx->pc = 0x46E51Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x46E518u;
            // 0x46e51c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x46E900u;
            goto label_46e900;
        }
    }
    ctx->pc = 0x46E520u;
label_46e520:
    // 0x46e520: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x46e520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_46e524:
    // 0x46e524: 0xa2c20000  sb          $v0, 0x0($s6)
    ctx->pc = 0x46e524u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 2));
label_46e528:
    // 0x46e528: 0xc11bb74  jal         func_46EDD0
label_46e52c:
    if (ctx->pc == 0x46E52Cu) {
        ctx->pc = 0x46E52Cu;
            // 0x46e52c: 0x8ed10018  lw          $s1, 0x18($s6) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 24)));
        ctx->pc = 0x46E530u;
        goto label_46e530;
    }
    ctx->pc = 0x46E528u;
    SET_GPR_U32(ctx, 31, 0x46E530u);
    ctx->pc = 0x46E52Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46E528u;
            // 0x46e52c: 0x8ed10018  lw          $s1, 0x18($s6) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 24)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x46EDD0u;
    if (runtime->hasFunction(0x46EDD0u)) {
        auto targetFn = runtime->lookupFunction(0x46EDD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46E530u; }
        if (ctx->pc != 0x46E530u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0046EDD0_0x46edd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46E530u; }
        if (ctx->pc != 0x46E530u) { return; }
    }
    ctx->pc = 0x46E530u;
label_46e530:
    // 0x46e530: 0xc11bb70  jal         func_46EDC0
label_46e534:
    if (ctx->pc == 0x46E534u) {
        ctx->pc = 0x46E534u;
            // 0x46e534: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46E538u;
        goto label_46e538;
    }
    ctx->pc = 0x46E530u;
    SET_GPR_U32(ctx, 31, 0x46E538u);
    ctx->pc = 0x46E534u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46E530u;
            // 0x46e534: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x46EDC0u;
    if (runtime->hasFunction(0x46EDC0u)) {
        auto targetFn = runtime->lookupFunction(0x46EDC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46E538u; }
        if (ctx->pc != 0x46E538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0046EDC0_0x46edc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46E538u; }
        if (ctx->pc != 0x46E538u) { return; }
    }
    ctx->pc = 0x46E538u;
label_46e538:
    // 0x46e538: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x46e538u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_46e53c:
    // 0x46e53c: 0x92420001  lbu         $v0, 0x1($s2)
    ctx->pc = 0x46e53cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_46e540:
    // 0x46e540: 0x2842003f  slti        $v0, $v0, 0x3F
    ctx->pc = 0x46e540u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)63) ? 1 : 0);
label_46e544:
    // 0x46e544: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_46e548:
    if (ctx->pc == 0x46E548u) {
        ctx->pc = 0x46E548u;
            // 0x46e548: 0x92450001  lbu         $a1, 0x1($s2) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
        ctx->pc = 0x46E54Cu;
        goto label_46e54c;
    }
    ctx->pc = 0x46E544u;
    {
        const bool branch_taken_0x46e544 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x46e544) {
            ctx->pc = 0x46E548u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x46E544u;
            // 0x46e548: 0x92450001  lbu         $a1, 0x1($s2) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x46E554u;
            goto label_46e554;
        }
    }
    ctx->pc = 0x46E54Cu;
label_46e54c:
    // 0x46e54c: 0xa2400001  sb          $zero, 0x1($s2)
    ctx->pc = 0x46e54cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 0));
label_46e550:
    // 0x46e550: 0x92450001  lbu         $a1, 0x1($s2)
    ctx->pc = 0x46e550u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_46e554:
    // 0x46e554: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x46e554u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_46e558:
    // 0x46e558: 0x24421490  addiu       $v0, $v0, 0x1490
    ctx->pc = 0x46e558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5264));
label_46e55c:
    // 0x46e55c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x46e55cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_46e560:
    // 0x46e560: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x46e560u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_46e564:
    // 0x46e564: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x46e564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_46e568:
    // 0x46e568: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x46e568u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_46e56c:
    // 0x46e56c: 0xc11bb6c  jal         func_46EDB0
label_46e570:
    if (ctx->pc == 0x46E570u) {
        ctx->pc = 0x46E570u;
            // 0x46e570: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x46E574u;
        goto label_46e574;
    }
    ctx->pc = 0x46E56Cu;
    SET_GPR_U32(ctx, 31, 0x46E574u);
    ctx->pc = 0x46E570u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46E56Cu;
            // 0x46e570: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x46EDB0u;
    if (runtime->hasFunction(0x46EDB0u)) {
        auto targetFn = runtime->lookupFunction(0x46EDB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46E574u; }
        if (ctx->pc != 0x46E574u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0046EDB0_0x46edb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46E574u; }
        if (ctx->pc != 0x46E574u) { return; }
    }
    ctx->pc = 0x46E574u;
label_46e574:
    // 0x46e574: 0x92430001  lbu         $v1, 0x1($s2)
    ctx->pc = 0x46e574u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_46e578:
    // 0x46e578: 0x305500ff  andi        $s5, $v0, 0xFF
    ctx->pc = 0x46e578u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_46e57c:
    // 0x46e57c: 0x2402002f  addiu       $v0, $zero, 0x2F
    ctx->pc = 0x46e57cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
label_46e580:
    // 0x46e580: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
label_46e584:
    if (ctx->pc == 0x46E584u) {
        ctx->pc = 0x46E588u;
        goto label_46e588;
    }
    ctx->pc = 0x46E580u;
    {
        const bool branch_taken_0x46e580 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x46e580) {
            ctx->pc = 0x46E5A8u;
            goto label_46e5a8;
        }
    }
    ctx->pc = 0x46E588u;
label_46e588:
    // 0x46e588: 0xc0775b0  jal         func_1DD6C0
label_46e58c:
    if (ctx->pc == 0x46E58Cu) {
        ctx->pc = 0x46E590u;
        goto label_46e590;
    }
    ctx->pc = 0x46E588u;
    SET_GPR_U32(ctx, 31, 0x46E590u);
    ctx->pc = 0x1DD6C0u;
    if (runtime->hasFunction(0x1DD6C0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46E590u; }
        if (ctx->pc != 0x46E590u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6C0_0x1dd6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46E590u; }
        if (ctx->pc != 0x46E590u) { return; }
    }
    ctx->pc = 0x46E590u;
label_46e590:
    // 0x46e590: 0xc11bb68  jal         func_46EDA0
label_46e594:
    if (ctx->pc == 0x46E594u) {
        ctx->pc = 0x46E594u;
            // 0x46e594: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46E598u;
        goto label_46e598;
    }
    ctx->pc = 0x46E590u;
    SET_GPR_U32(ctx, 31, 0x46E598u);
    ctx->pc = 0x46E594u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46E590u;
            // 0x46e594: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x46EDA0u;
    if (runtime->hasFunction(0x46EDA0u)) {
        auto targetFn = runtime->lookupFunction(0x46EDA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46E598u; }
        if (ctx->pc != 0x46E598u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0046EDA0_0x46eda0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46E598u; }
        if (ctx->pc != 0x46E598u) { return; }
    }
    ctx->pc = 0x46E598u;
label_46e598:
    // 0x46e598: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x46e598u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_46e59c:
    // 0x46e59c: 0x18400002  blez        $v0, . + 4 + (0x2 << 2)
label_46e5a0:
    if (ctx->pc == 0x46E5A0u) {
        ctx->pc = 0x46E5A4u;
        goto label_46e5a4;
    }
    ctx->pc = 0x46E59Cu;
    {
        const bool branch_taken_0x46e59c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x46e59c) {
            ctx->pc = 0x46E5A8u;
            goto label_46e5a8;
        }
    }
    ctx->pc = 0x46E5A4u;
label_46e5a4:
    // 0x46e5a4: 0x64150001  daddiu      $s5, $zero, 0x1
    ctx->pc = 0x46e5a4u;
    SET_GPR_S64(ctx, 21, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_46e5a8:
    // 0x46e5a8: 0x12a0005d  beqz        $s5, . + 4 + (0x5D << 2)
label_46e5ac:
    if (ctx->pc == 0x46E5ACu) {
        ctx->pc = 0x46E5B0u;
        goto label_46e5b0;
    }
    ctx->pc = 0x46E5A8u;
    {
        const bool branch_taken_0x46e5a8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x46e5a8) {
            ctx->pc = 0x46E720u;
            goto label_46e720;
        }
    }
    ctx->pc = 0x46E5B0u;
label_46e5b0:
    // 0x46e5b0: 0x92440001  lbu         $a0, 0x1($s2)
    ctx->pc = 0x46e5b0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_46e5b4:
    // 0x46e5b4: 0x24030039  addiu       $v1, $zero, 0x39
    ctx->pc = 0x46e5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
label_46e5b8:
    // 0x46e5b8: 0x14830015  bne         $a0, $v1, . + 4 + (0x15 << 2)
label_46e5bc:
    if (ctx->pc == 0x46E5BCu) {
        ctx->pc = 0x46E5C0u;
        goto label_46e5c0;
    }
    ctx->pc = 0x46E5B8u;
    {
        const bool branch_taken_0x46e5b8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x46e5b8) {
            ctx->pc = 0x46E610u;
            goto label_46e610;
        }
    }
    ctx->pc = 0x46E5C0u;
label_46e5c0:
    // 0x46e5c0: 0x3c060061  lui         $a2, 0x61
    ctx->pc = 0x46e5c0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)97 << 16));
label_46e5c4:
    // 0x46e5c4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x46e5c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46e5c8:
    // 0x46e5c8: 0x24c60820  addiu       $a2, $a2, 0x820
    ctx->pc = 0x46e5c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2080));
label_46e5cc:
    // 0x46e5cc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x46e5ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_46e5d0:
    // 0x46e5d0: 0x90a20070  lbu         $v0, 0x70($a1)
    ctx->pc = 0x46e5d0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 112)));
label_46e5d4:
    // 0x46e5d4: 0x28420004  slti        $v0, $v0, 0x4
    ctx->pc = 0x46e5d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_46e5d8:
    // 0x46e5d8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_46e5dc:
    if (ctx->pc == 0x46E5DCu) {
        ctx->pc = 0x46E5E0u;
        goto label_46e5e0;
    }
    ctx->pc = 0x46E5D8u;
    {
        const bool branch_taken_0x46e5d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x46e5d8) {
            ctx->pc = 0x46E5F8u;
            goto label_46e5f8;
        }
    }
    ctx->pc = 0x46E5E0u;
label_46e5e0:
    // 0x46e5e0: 0x12460005  beq         $s2, $a2, . + 4 + (0x5 << 2)
label_46e5e4:
    if (ctx->pc == 0x46E5E4u) {
        ctx->pc = 0x46E5E8u;
        goto label_46e5e8;
    }
    ctx->pc = 0x46E5E0u;
    {
        const bool branch_taken_0x46e5e0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 6));
        if (branch_taken_0x46e5e0) {
            ctx->pc = 0x46E5F8u;
            goto label_46e5f8;
        }
    }
    ctx->pc = 0x46E5E8u;
label_46e5e8:
    // 0x46e5e8: 0x90c20001  lbu         $v0, 0x1($a2)
    ctx->pc = 0x46e5e8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
label_46e5ec:
    // 0x46e5ec: 0x1043004c  beq         $v0, $v1, . + 4 + (0x4C << 2)
label_46e5f0:
    if (ctx->pc == 0x46E5F0u) {
        ctx->pc = 0x46E5F4u;
        goto label_46e5f4;
    }
    ctx->pc = 0x46E5ECu;
    {
        const bool branch_taken_0x46e5ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x46e5ec) {
            ctx->pc = 0x46E720u;
            goto label_46e720;
        }
    }
    ctx->pc = 0x46E5F4u;
label_46e5f4:
    // 0x46e5f4: 0x0  nop
    ctx->pc = 0x46e5f4u;
    // NOP
label_46e5f8:
    // 0x46e5f8: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x46e5f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_46e5fc:
    // 0x46e5fc: 0x28e20004  slti        $v0, $a3, 0x4
    ctx->pc = 0x46e5fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)4) ? 1 : 0);
label_46e600:
    // 0x46e600: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x46e600u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_46e604:
    // 0x46e604: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_46e608:
    if (ctx->pc == 0x46E608u) {
        ctx->pc = 0x46E608u;
            // 0x46e608: 0x24a5005c  addiu       $a1, $a1, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 92));
        ctx->pc = 0x46E60Cu;
        goto label_46e60c;
    }
    ctx->pc = 0x46E604u;
    {
        const bool branch_taken_0x46e604 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x46E608u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46E604u;
            // 0x46e608: 0x24a5005c  addiu       $a1, $a1, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46e604) {
            ctx->pc = 0x46E5D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_46e5d0;
        }
    }
    ctx->pc = 0x46E60Cu;
label_46e60c:
    // 0x46e60c: 0x0  nop
    ctx->pc = 0x46e60cu;
    // NOP
label_46e610:
    // 0x46e610: 0x2402002f  addiu       $v0, $zero, 0x2F
    ctx->pc = 0x46e610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
label_46e614:
    // 0x46e614: 0x1082000a  beq         $a0, $v0, . + 4 + (0xA << 2)
label_46e618:
    if (ctx->pc == 0x46E618u) {
        ctx->pc = 0x46E61Cu;
        goto label_46e61c;
    }
    ctx->pc = 0x46E614u;
    {
        const bool branch_taken_0x46e614 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x46e614) {
            ctx->pc = 0x46E640u;
            goto label_46e640;
        }
    }
    ctx->pc = 0x46E61Cu;
label_46e61c:
    // 0x46e61c: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x46e61cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_46e620:
    // 0x46e620: 0x10820007  beq         $a0, $v0, . + 4 + (0x7 << 2)
label_46e624:
    if (ctx->pc == 0x46E624u) {
        ctx->pc = 0x46E628u;
        goto label_46e628;
    }
    ctx->pc = 0x46E620u;
    {
        const bool branch_taken_0x46e620 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x46e620) {
            ctx->pc = 0x46E640u;
            goto label_46e640;
        }
    }
    ctx->pc = 0x46E628u;
label_46e628:
    // 0x46e628: 0x2402003b  addiu       $v0, $zero, 0x3B
    ctx->pc = 0x46e628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
label_46e62c:
    // 0x46e62c: 0x10820004  beq         $a0, $v0, . + 4 + (0x4 << 2)
label_46e630:
    if (ctx->pc == 0x46E630u) {
        ctx->pc = 0x46E634u;
        goto label_46e634;
    }
    ctx->pc = 0x46E62Cu;
    {
        const bool branch_taken_0x46e62c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x46e62c) {
            ctx->pc = 0x46E640u;
            goto label_46e640;
        }
    }
    ctx->pc = 0x46E634u;
label_46e634:
    // 0x46e634: 0x10000008  b           . + 4 + (0x8 << 2)
label_46e638:
    if (ctx->pc == 0x46E638u) {
        ctx->pc = 0x46E63Cu;
        goto label_46e63c;
    }
    ctx->pc = 0x46E634u;
    {
        const bool branch_taken_0x46e634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x46e634) {
            ctx->pc = 0x46E658u;
            goto label_46e658;
        }
    }
    ctx->pc = 0x46E63Cu;
label_46e63c:
    // 0x46e63c: 0x0  nop
    ctx->pc = 0x46e63cu;
    // NOP
label_46e640:
    // 0x46e640: 0xc0c8f80  jal         func_323E00
label_46e644:
    if (ctx->pc == 0x46E644u) {
        ctx->pc = 0x46E644u;
            // 0x46e644: 0x8e840068  lw          $a0, 0x68($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 104)));
        ctx->pc = 0x46E648u;
        goto label_46e648;
    }
    ctx->pc = 0x46E640u;
    SET_GPR_U32(ctx, 31, 0x46E648u);
    ctx->pc = 0x46E644u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46E640u;
            // 0x46e644: 0x8e840068  lw          $a0, 0x68($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 104)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323E00u;
    if (runtime->hasFunction(0x323E00u)) {
        auto targetFn = runtime->lookupFunction(0x323E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46E648u; }
        if (ctx->pc != 0x46E648u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323E00_0x323e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46E648u; }
        if (ctx->pc != 0x46E648u) { return; }
    }
    ctx->pc = 0x46E648u;
label_46e648:
    // 0x46e648: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x46e648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_46e64c:
    // 0x46e64c: 0x10430034  beq         $v0, $v1, . + 4 + (0x34 << 2)
label_46e650:
    if (ctx->pc == 0x46E650u) {
        ctx->pc = 0x46E654u;
        goto label_46e654;
    }
    ctx->pc = 0x46E64Cu;
    {
        const bool branch_taken_0x46e64c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x46e64c) {
            ctx->pc = 0x46E720u;
            goto label_46e720;
        }
    }
    ctx->pc = 0x46E654u;
label_46e654:
    // 0x46e654: 0x0  nop
    ctx->pc = 0x46e654u;
    // NOP
label_46e658:
    // 0x46e658: 0x1620000b  bnez        $s1, . + 4 + (0xB << 2)
label_46e65c:
    if (ctx->pc == 0x46E65Cu) {
        ctx->pc = 0x46E660u;
        goto label_46e660;
    }
    ctx->pc = 0x46E658u;
    {
        const bool branch_taken_0x46e658 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x46e658) {
            ctx->pc = 0x46E688u;
            goto label_46e688;
        }
    }
    ctx->pc = 0x46E660u;
label_46e660:
    // 0x46e660: 0x92440000  lbu         $a0, 0x0($s2)
    ctx->pc = 0x46e660u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_46e664:
    // 0x46e664: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x46e664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_46e668:
    // 0x46e668: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x46e668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_46e66c:
    // 0x46e66c: 0x3084001f  andi        $a0, $a0, 0x1F
    ctx->pc = 0x46e66cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
label_46e670:
    // 0x46e670: 0x831804  sllv        $v1, $v1, $a0
    ctx->pc = 0x46e670u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
label_46e674:
    // 0x46e674: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x46e674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_46e678:
    // 0x46e678: 0x14400033  bnez        $v0, . + 4 + (0x33 << 2)
label_46e67c:
    if (ctx->pc == 0x46E67Cu) {
        ctx->pc = 0x46E680u;
        goto label_46e680;
    }
    ctx->pc = 0x46E678u;
    {
        const bool branch_taken_0x46e678 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x46e678) {
            ctx->pc = 0x46E748u;
            goto label_46e748;
        }
    }
    ctx->pc = 0x46E680u;
label_46e680:
    // 0x46e680: 0x10000027  b           . + 4 + (0x27 << 2)
label_46e684:
    if (ctx->pc == 0x46E684u) {
        ctx->pc = 0x46E688u;
        goto label_46e688;
    }
    ctx->pc = 0x46E680u;
    {
        const bool branch_taken_0x46e680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x46e680) {
            ctx->pc = 0x46E720u;
            goto label_46e720;
        }
    }
    ctx->pc = 0x46E688u;
label_46e688:
    // 0x46e688: 0x92430001  lbu         $v1, 0x1($s2)
    ctx->pc = 0x46e688u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_46e68c:
    // 0x46e68c: 0x2402002f  addiu       $v0, $zero, 0x2F
    ctx->pc = 0x46e68cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
label_46e690:
    // 0x46e690: 0x10620023  beq         $v1, $v0, . + 4 + (0x23 << 2)
label_46e694:
    if (ctx->pc == 0x46E694u) {
        ctx->pc = 0x46E698u;
        goto label_46e698;
    }
    ctx->pc = 0x46E690u;
    {
        const bool branch_taken_0x46e690 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x46e690) {
            ctx->pc = 0x46E720u;
            goto label_46e720;
        }
    }
    ctx->pc = 0x46E698u;
label_46e698:
    // 0x46e698: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x46e698u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46e69c:
    // 0x46e69c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x46e69cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46e6a0:
    // 0x46e6a0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x46e6a0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46e6a4:
    // 0x46e6a4: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x46e6a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_46e6a8:
    // 0x46e6a8: 0x64050001  daddiu      $a1, $zero, 0x1
    ctx->pc = 0x46e6a8u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_46e6ac:
    // 0x46e6ac: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x46e6acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_46e6b0:
    // 0x46e6b0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x46e6b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_46e6b4:
    // 0x46e6b4: 0x0  nop
    ctx->pc = 0x46e6b4u;
    // NOP
label_46e6b8:
    // 0x46e6b8: 0x15400017  bnez        $t2, . + 4 + (0x17 << 2)
label_46e6bc:
    if (ctx->pc == 0x46E6BCu) {
        ctx->pc = 0x46E6C0u;
        goto label_46e6c0;
    }
    ctx->pc = 0x46E6B8u;
    {
        const bool branch_taken_0x46e6b8 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        if (branch_taken_0x46e6b8) {
            ctx->pc = 0x46E718u;
            goto label_46e718;
        }
    }
    ctx->pc = 0x46E6C0u;
label_46e6c0:
    // 0x46e6c0: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x46e6c0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_46e6c4:
    // 0x46e6c4: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x46e6c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
label_46e6c8:
    // 0x46e6c8: 0x14460003  bne         $v0, $a2, . + 4 + (0x3 << 2)
label_46e6cc:
    if (ctx->pc == 0x46E6CCu) {
        ctx->pc = 0x46E6D0u;
        goto label_46e6d0;
    }
    ctx->pc = 0x46E6C8u;
    {
        const bool branch_taken_0x46e6c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x46e6c8) {
            ctx->pc = 0x46E6D8u;
            goto label_46e6d8;
        }
    }
    ctx->pc = 0x46E6D0u;
label_46e6d0:
    // 0x46e6d0: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x46e6d0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_46e6d4:
    // 0x46e6d4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x46e6d4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46e6d8:
    // 0x46e6d8: 0x441804  sllv        $v1, $a0, $v0
    ctx->pc = 0x46e6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 2) & 0x1F));
label_46e6dc:
    // 0x46e6dc: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x46e6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_46e6e0:
    // 0x46e6e0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x46e6e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_46e6e4:
    // 0x46e6e4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_46e6e8:
    if (ctx->pc == 0x46E6E8u) {
        ctx->pc = 0x46E6ECu;
        goto label_46e6ec;
    }
    ctx->pc = 0x46E6E4u;
    {
        const bool branch_taken_0x46e6e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x46e6e4) {
            ctx->pc = 0x46E708u;
            goto label_46e708;
        }
    }
    ctx->pc = 0x46E6ECu;
label_46e6ec:
    // 0x46e6ec: 0x11400004  beqz        $t2, . + 4 + (0x4 << 2)
label_46e6f0:
    if (ctx->pc == 0x46E6F0u) {
        ctx->pc = 0x46E6F4u;
        goto label_46e6f4;
    }
    ctx->pc = 0x46E6ECu;
    {
        const bool branch_taken_0x46e6ec = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x46e6ec) {
            ctx->pc = 0x46E700u;
            goto label_46e700;
        }
    }
    ctx->pc = 0x46E6F4u;
label_46e6f4:
    // 0x46e6f4: 0x10000008  b           . + 4 + (0x8 << 2)
label_46e6f8:
    if (ctx->pc == 0x46E6F8u) {
        ctx->pc = 0x46E6F8u;
            // 0x46e6f8: 0x80482d  daddu       $t1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46E6FCu;
        goto label_46e6fc;
    }
    ctx->pc = 0x46E6F4u;
    {
        const bool branch_taken_0x46e6f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46E6F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46E6F4u;
            // 0x46e6f8: 0x80482d  daddu       $t1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46e6f4) {
            ctx->pc = 0x46E718u;
            goto label_46e718;
        }
    }
    ctx->pc = 0x46E6FCu;
label_46e6fc:
    // 0x46e6fc: 0x0  nop
    ctx->pc = 0x46e6fcu;
    // NOP
label_46e700:
    // 0x46e700: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x46e700u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_46e704:
    // 0x46e704: 0x0  nop
    ctx->pc = 0x46e704u;
    // NOP
label_46e708:
    // 0x46e708: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x46e708u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_46e70c:
    // 0x46e70c: 0x111102b  sltu        $v0, $t0, $s1
    ctx->pc = 0x46e70cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_46e710:
    // 0x46e710: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
label_46e714:
    if (ctx->pc == 0x46E714u) {
        ctx->pc = 0x46E714u;
            // 0x46e714: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->pc = 0x46E718u;
        goto label_46e718;
    }
    ctx->pc = 0x46E710u;
    {
        const bool branch_taken_0x46e710 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x46E714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46E710u;
            // 0x46e714: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46e710) {
            ctx->pc = 0x46E6B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_46e6b8;
        }
    }
    ctx->pc = 0x46E718u;
label_46e718:
    // 0x46e718: 0x1520000b  bnez        $t1, . + 4 + (0xB << 2)
label_46e71c:
    if (ctx->pc == 0x46E71Cu) {
        ctx->pc = 0x46E720u;
        goto label_46e720;
    }
    ctx->pc = 0x46E718u;
    {
        const bool branch_taken_0x46e718 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x46e718) {
            ctx->pc = 0x46E748u;
            goto label_46e748;
        }
    }
    ctx->pc = 0x46E720u;
label_46e720:
    // 0x46e720: 0x92420001  lbu         $v0, 0x1($s2)
    ctx->pc = 0x46e720u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_46e724:
    // 0x46e724: 0x2841003e  slti        $at, $v0, 0x3E
    ctx->pc = 0x46e724u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)62) ? 1 : 0);
label_46e728:
    // 0x46e728: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
label_46e72c:
    if (ctx->pc == 0x46E72Cu) {
        ctx->pc = 0x46E730u;
        goto label_46e730;
    }
    ctx->pc = 0x46E728u;
    {
        const bool branch_taken_0x46e728 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x46e728) {
            ctx->pc = 0x46E740u;
            goto label_46e740;
        }
    }
    ctx->pc = 0x46E730u;
label_46e730:
    // 0x46e730: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x46e730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_46e734:
    // 0x46e734: 0x1000ff86  b           . + 4 + (-0x7A << 2)
label_46e738:
    if (ctx->pc == 0x46E738u) {
        ctx->pc = 0x46E738u;
            // 0x46e738: 0xa2420001  sb          $v0, 0x1($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x46E73Cu;
        goto label_46e73c;
    }
    ctx->pc = 0x46E734u;
    {
        const bool branch_taken_0x46e734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46E738u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46E734u;
            // 0x46e738: 0xa2420001  sb          $v0, 0x1($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46e734) {
            ctx->pc = 0x46E550u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_46e550;
        }
    }
    ctx->pc = 0x46E73Cu;
label_46e73c:
    // 0x46e73c: 0x0  nop
    ctx->pc = 0x46e73cu;
    // NOP
label_46e740:
    // 0x46e740: 0x1000ff83  b           . + 4 + (-0x7D << 2)
label_46e744:
    if (ctx->pc == 0x46E744u) {
        ctx->pc = 0x46E744u;
            // 0x46e744: 0xa2400001  sb          $zero, 0x1($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x46E748u;
        goto label_46e748;
    }
    ctx->pc = 0x46E740u;
    {
        const bool branch_taken_0x46e740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46E744u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46E740u;
            // 0x46e744: 0xa2400001  sb          $zero, 0x1($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46e740) {
            ctx->pc = 0x46E550u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_46e550;
        }
    }
    ctx->pc = 0x46E748u;
label_46e748:
    // 0x46e748: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x46e748u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_46e74c:
    // 0x46e74c: 0x8c843e30  lw          $a0, 0x3E30($a0)
    ctx->pc = 0x46e74cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 15920)));
label_46e750:
    // 0x46e750: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x46e750u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46e754:
    // 0x46e754: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x46e754u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_46e758:
    // 0x46e758: 0x2484fffd  addiu       $a0, $a0, -0x3
    ctx->pc = 0x46e758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967293));
label_46e75c:
    // 0x46e75c: 0x2c810009  sltiu       $at, $a0, 0x9
    ctx->pc = 0x46e75cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_46e760:
    // 0x46e760: 0x10200015  beqz        $at, . + 4 + (0x15 << 2)
label_46e764:
    if (ctx->pc == 0x46E764u) {
        ctx->pc = 0x46E764u;
            // 0x46e764: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x46E768u;
        goto label_46e768;
    }
    ctx->pc = 0x46E760u;
    {
        const bool branch_taken_0x46e760 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x46E764u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46E760u;
            // 0x46e764: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x46e760) {
            ctx->pc = 0x46E7B8u;
            goto label_46e7b8;
        }
    }
    ctx->pc = 0x46E768u;
label_46e768:
    // 0x46e768: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x46e768u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_46e76c:
    // 0x46e76c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x46e76cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_46e770:
    // 0x46e770: 0x24a5ef90  addiu       $a1, $a1, -0x1070
    ctx->pc = 0x46e770u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963088));
label_46e774:
    // 0x46e774: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x46e774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_46e778:
    // 0x46e778: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x46e778u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_46e77c:
    // 0x46e77c: 0x800008  jr          $a0
label_46e780:
    if (ctx->pc == 0x46E780u) {
        ctx->pc = 0x46E784u;
        goto label_46e784;
    }
    ctx->pc = 0x46E77Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x46E784u: goto label_46e784;
            case 0x46E78Cu: goto label_46e78c;
            case 0x46E794u: goto label_46e794;
            case 0x46E79Cu: goto label_46e79c;
            case 0x46E7A4u: goto label_46e7a4;
            case 0x46E7B0u: goto label_46e7b0;
            case 0x46E7B8u: goto label_46e7b8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x46E784u;
label_46e784:
    // 0x46e784: 0x1000000d  b           . + 4 + (0xD << 2)
label_46e788:
    if (ctx->pc == 0x46E788u) {
        ctx->pc = 0x46E788u;
            // 0x46e788: 0x92450000  lbu         $a1, 0x0($s2) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->pc = 0x46E78Cu;
        goto label_46e78c;
    }
    ctx->pc = 0x46E784u;
    {
        const bool branch_taken_0x46e784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46E788u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46E784u;
            // 0x46e788: 0x92450000  lbu         $a1, 0x0($s2) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46e784) {
            ctx->pc = 0x46E7BCu;
            goto label_46e7bc;
        }
    }
    ctx->pc = 0x46E78Cu;
label_46e78c:
    // 0x46e78c: 0x1000000a  b           . + 4 + (0xA << 2)
label_46e790:
    if (ctx->pc == 0x46E790u) {
        ctx->pc = 0x46E790u;
            // 0x46e790: 0xc0182d  daddu       $v1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46E794u;
        goto label_46e794;
    }
    ctx->pc = 0x46E78Cu;
    {
        const bool branch_taken_0x46e78c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46E790u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46E78Cu;
            // 0x46e790: 0xc0182d  daddu       $v1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46e78c) {
            ctx->pc = 0x46E7B8u;
            goto label_46e7b8;
        }
    }
    ctx->pc = 0x46E794u;
label_46e794:
    // 0x46e794: 0x10000008  b           . + 4 + (0x8 << 2)
label_46e798:
    if (ctx->pc == 0x46E798u) {
        ctx->pc = 0x46E798u;
            // 0x46e798: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x46E79Cu;
        goto label_46e79c;
    }
    ctx->pc = 0x46E794u;
    {
        const bool branch_taken_0x46e794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46E798u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46E794u;
            // 0x46e798: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46e794) {
            ctx->pc = 0x46E7B8u;
            goto label_46e7b8;
        }
    }
    ctx->pc = 0x46E79Cu;
label_46e79c:
    // 0x46e79c: 0x10000006  b           . + 4 + (0x6 << 2)
label_46e7a0:
    if (ctx->pc == 0x46E7A0u) {
        ctx->pc = 0x46E7A0u;
            // 0x46e7a0: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x46E7A4u;
        goto label_46e7a4;
    }
    ctx->pc = 0x46E79Cu;
    {
        const bool branch_taken_0x46e79c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46E7A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46E79Cu;
            // 0x46e7a0: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46e79c) {
            ctx->pc = 0x46E7B8u;
            goto label_46e7b8;
        }
    }
    ctx->pc = 0x46E7A4u;
label_46e7a4:
    // 0x46e7a4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x46e7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_46e7a8:
    // 0x46e7a8: 0x10000003  b           . + 4 + (0x3 << 2)
label_46e7ac:
    if (ctx->pc == 0x46E7ACu) {
        ctx->pc = 0x46E7ACu;
            // 0x46e7ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46E7B0u;
        goto label_46e7b0;
    }
    ctx->pc = 0x46E7A8u;
    {
        const bool branch_taken_0x46e7a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46E7ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46E7A8u;
            // 0x46e7ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46e7a8) {
            ctx->pc = 0x46E7B8u;
            goto label_46e7b8;
        }
    }
    ctx->pc = 0x46E7B0u;
label_46e7b0:
    // 0x46e7b0: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x46e7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_46e7b4:
    // 0x46e7b4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x46e7b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46e7b8:
    // 0x46e7b8: 0x92450000  lbu         $a1, 0x0($s2)
    ctx->pc = 0x46e7b8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_46e7bc:
    // 0x46e7bc: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x46e7bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_46e7c0:
    // 0x46e7c0: 0x30a6001f  andi        $a2, $a1, 0x1F
    ctx->pc = 0x46e7c0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
label_46e7c4:
    // 0x46e7c4: 0x54c40003  bnel        $a2, $a0, . + 4 + (0x3 << 2)
label_46e7c8:
    if (ctx->pc == 0x46E7C8u) {
        ctx->pc = 0x46E7C8u;
            // 0x46e7c8: 0x132840  sll         $a1, $s3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
        ctx->pc = 0x46E7CCu;
        goto label_46e7cc;
    }
    ctx->pc = 0x46E7C4u;
    {
        const bool branch_taken_0x46e7c4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 4));
        if (branch_taken_0x46e7c4) {
            ctx->pc = 0x46E7C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x46E7C4u;
            // 0x46e7c8: 0x132840  sll         $a1, $s3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x46E7D4u;
            goto label_46e7d4;
        }
    }
    ctx->pc = 0x46E7CCu;
label_46e7cc:
    // 0x46e7cc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x46e7ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46e7d0:
    // 0x46e7d0: 0x132840  sll         $a1, $s3, 1
    ctx->pc = 0x46e7d0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
label_46e7d4:
    // 0x46e7d4: 0x3c040061  lui         $a0, 0x61
    ctx->pc = 0x46e7d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
label_46e7d8:
    // 0x46e7d8: 0xb32821  addu        $a1, $a1, $s3
    ctx->pc = 0x46e7d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
label_46e7dc:
    // 0x46e7dc: 0x248406d0  addiu       $a0, $a0, 0x6D0
    ctx->pc = 0x46e7dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1744));
label_46e7e0:
    // 0x46e7e0: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x46e7e0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_46e7e4:
    // 0x46e7e4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x46e7e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_46e7e8:
    // 0x46e7e8: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x46e7e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_46e7ec:
    // 0x46e7ec: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_46e7f0:
    if (ctx->pc == 0x46E7F0u) {
        ctx->pc = 0x46E7F0u;
            // 0x46e7f0: 0xa0860000  sb          $a2, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 6));
        ctx->pc = 0x46E7F4u;
        goto label_46e7f4;
    }
    ctx->pc = 0x46E7ECu;
    {
        const bool branch_taken_0x46e7ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x46E7F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46E7ECu;
            // 0x46e7f0: 0xa0860000  sb          $a2, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46e7ec) {
            ctx->pc = 0x46E838u;
            goto label_46e838;
        }
    }
    ctx->pc = 0x46E7F4u;
label_46e7f4:
    // 0x46e7f4: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x46e7f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_46e7f8:
    // 0x46e7f8: 0x1320c0  sll         $a0, $s3, 3
    ctx->pc = 0x46e7f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
label_46e7fc:
    // 0x46e7fc: 0x933021  addu        $a2, $a0, $s3
    ctx->pc = 0x46e7fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
label_46e800:
    // 0x46e800: 0x3c050061  lui         $a1, 0x61
    ctx->pc = 0x46e800u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)97 << 16));
label_46e804:
    // 0x46e804: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x46e804u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_46e808:
    // 0x46e808: 0x63040  sll         $a2, $a2, 1
    ctx->pc = 0x46e808u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_46e80c:
    // 0x46e80c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x46e80cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_46e810:
    // 0x46e810: 0xd33021  addu        $a2, $a2, $s3
    ctx->pc = 0x46e810u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
label_46e814:
    // 0x46e814: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x46e814u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_46e818:
    // 0x46e818: 0x24a506f0  addiu       $a1, $a1, 0x6F0
    ctx->pc = 0x46e818u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1776));
label_46e81c:
    // 0x46e81c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x46e81cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_46e820:
    // 0x46e820: 0x92470001  lbu         $a3, 0x1($s2)
    ctx->pc = 0x46e820u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_46e824:
    // 0x46e824: 0x62080  sll         $a0, $a2, 2
    ctx->pc = 0x46e824u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_46e828:
    // 0x46e828: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x46e828u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_46e82c:
    // 0x46e82c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x46e82cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_46e830:
    // 0x46e830: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x46e830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_46e834:
    // 0x46e834: 0xa0470000  sb          $a3, 0x0($v0)
    ctx->pc = 0x46e834u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 7));
label_46e838:
    // 0x46e838: 0x8e82006c  lw          $v0, 0x6C($s4)
    ctx->pc = 0x46e838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 108)));
label_46e83c:
    // 0x46e83c: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x46e83cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_46e840:
    // 0x46e840: 0x92c30001  lbu         $v1, 0x1($s6)
    ctx->pc = 0x46e840u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 1)));
label_46e844:
    // 0x46e844: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x46e844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_46e848:
    // 0x46e848: 0x24630028  addiu       $v1, $v1, 0x28
    ctx->pc = 0x46e848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
label_46e84c:
    // 0x46e84c: 0x38880  sll         $s1, $v1, 2
    ctx->pc = 0x46e84cu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_46e850:
    // 0x46e850: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x46e850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_46e854:
    // 0x46e854: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x46e854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_46e858:
    // 0x46e858: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x46e858u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_46e85c:
    // 0x46e85c: 0xc12512c  jal         func_4944B0
label_46e860:
    if (ctx->pc == 0x46E860u) {
        ctx->pc = 0x46E860u;
            // 0x46e860: 0x24a5f1d8  addiu       $a1, $a1, -0xE28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963672));
        ctx->pc = 0x46E864u;
        goto label_46e864;
    }
    ctx->pc = 0x46E85Cu;
    SET_GPR_U32(ctx, 31, 0x46E864u);
    ctx->pc = 0x46E860u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46E85Cu;
            // 0x46e860: 0x24a5f1d8  addiu       $a1, $a1, -0xE28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963672));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4944B0u;
    if (runtime->hasFunction(0x4944B0u)) {
        auto targetFn = runtime->lookupFunction(0x4944B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46E864u; }
        if (ctx->pc != 0x46E864u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004944B0_0x4944b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46E864u; }
        if (ctx->pc != 0x46E864u) { return; }
    }
    ctx->pc = 0x46E864u;
label_46e864:
    // 0x46e864: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x46e864u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_46e868:
    // 0x46e868: 0x8e82006c  lw          $v0, 0x6C($s4)
    ctx->pc = 0x46e868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 108)));
label_46e86c:
    // 0x46e86c: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x46e86cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_46e870:
    // 0x46e870: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x46e870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_46e874:
    // 0x46e874: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x46e874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_46e878:
    // 0x46e878: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x46e878u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_46e87c:
    // 0x46e87c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x46e87cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_46e880:
    // 0x46e880: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x46e880u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_46e884:
    // 0x46e884: 0x320f809  jalr        $t9
label_46e888:
    if (ctx->pc == 0x46E888u) {
        ctx->pc = 0x46E88Cu;
        goto label_46e88c;
    }
    ctx->pc = 0x46E884u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x46E88Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x46E88Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x46E88Cu; }
            if (ctx->pc != 0x46E88Cu) { return; }
        }
        }
    }
    ctx->pc = 0x46E88Cu;
label_46e88c:
    // 0x46e88c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x46e88cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_46e890:
    // 0x46e890: 0xa202007c  sb          $v0, 0x7C($s0)
    ctx->pc = 0x46e890u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 124), (uint8_t)GPR_U32(ctx, 2));
label_46e894:
    // 0x46e894: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x46e894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_46e898:
    // 0x46e898: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x46e898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_46e89c:
    // 0x46e89c: 0xc123848  jal         func_48E120
label_46e8a0:
    if (ctx->pc == 0x46E8A0u) {
        ctx->pc = 0x46E8A0u;
            // 0x46e8a0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x46E8A4u;
        goto label_46e8a4;
    }
    ctx->pc = 0x46E89Cu;
    SET_GPR_U32(ctx, 31, 0x46E8A4u);
    ctx->pc = 0x46E8A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46E89Cu;
            // 0x46e8a0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E120u;
    if (runtime->hasFunction(0x48E120u)) {
        auto targetFn = runtime->lookupFunction(0x48E120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46E8A4u; }
        if (ctx->pc != 0x46E8A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E120_0x48e120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46E8A4u; }
        if (ctx->pc != 0x46E8A4u) { return; }
    }
    ctx->pc = 0x46E8A4u;
label_46e8a4:
    // 0x46e8a4: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x46e8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_46e8a8:
    // 0x46e8a8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x46e8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_46e8ac:
    // 0x46e8ac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x46e8acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_46e8b0:
    // 0x46e8b0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x46e8b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46e8b4:
    // 0x46e8b4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x46e8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_46e8b8:
    // 0x46e8b8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x46e8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_46e8bc:
    // 0x46e8bc: 0xa4430046  sh          $v1, 0x46($v0)
    ctx->pc = 0x46e8bcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 70), (uint16_t)GPR_U32(ctx, 3));
label_46e8c0:
    // 0x46e8c0: 0x8e83006c  lw          $v1, 0x6C($s4)
    ctx->pc = 0x46e8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 108)));
label_46e8c4:
    // 0x46e8c4: 0x92c20001  lbu         $v0, 0x1($s6)
    ctx->pc = 0x46e8c4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 1)));
label_46e8c8:
    // 0x46e8c8: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x46e8c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_46e8cc:
    // 0x46e8cc: 0x24420028  addiu       $v0, $v0, 0x28
    ctx->pc = 0x46e8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_46e8d0:
    // 0x46e8d0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x46e8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_46e8d4:
    // 0x46e8d4: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x46e8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_46e8d8:
    // 0x46e8d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x46e8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_46e8dc:
    // 0x46e8dc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x46e8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_46e8e0:
    // 0x46e8e0: 0xa4450046  sh          $a1, 0x46($v0)
    ctx->pc = 0x46e8e0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 70), (uint16_t)GPR_U32(ctx, 5));
label_46e8e4:
    // 0x46e8e4: 0x8e83006c  lw          $v1, 0x6C($s4)
    ctx->pc = 0x46e8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 108)));
label_46e8e8:
    // 0x46e8e8: 0x92c20001  lbu         $v0, 0x1($s6)
    ctx->pc = 0x46e8e8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 1)));
label_46e8ec:
    // 0x46e8ec: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x46e8ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_46e8f0:
    // 0x46e8f0: 0xc12326c  jal         func_48C9B0
label_46e8f4:
    if (ctx->pc == 0x46E8F4u) {
        ctx->pc = 0x46E8F4u;
            // 0x46e8f4: 0x24450028  addiu       $a1, $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
        ctx->pc = 0x46E8F8u;
        goto label_46e8f8;
    }
    ctx->pc = 0x46E8F0u;
    SET_GPR_U32(ctx, 31, 0x46E8F8u);
    ctx->pc = 0x46E8F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46E8F0u;
            // 0x46e8f4: 0x24450028  addiu       $a1, $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48C9B0u;
    if (runtime->hasFunction(0x48C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x48C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46E8F8u; }
        if (ctx->pc != 0x46E8F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048C9B0_0x48c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46E8F8u; }
        if (ctx->pc != 0x46E8F8u) { return; }
    }
    ctx->pc = 0x46E8F8u;
label_46e8f8:
    // 0x46e8f8: 0x1000011a  b           . + 4 + (0x11A << 2)
label_46e8fc:
    if (ctx->pc == 0x46E8FCu) {
        ctx->pc = 0x46E8FCu;
            // 0x46e8fc: 0xaec00008  sw          $zero, 0x8($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 0));
        ctx->pc = 0x46E900u;
        goto label_46e900;
    }
    ctx->pc = 0x46E8F8u;
    {
        const bool branch_taken_0x46e8f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46E8FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46E8F8u;
            // 0x46e8fc: 0xaec00008  sw          $zero, 0x8($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46e8f8) {
            ctx->pc = 0x46ED64u;
            goto label_46ed64;
        }
    }
    ctx->pc = 0x46E900u;
label_46e900:
    // 0x46e900: 0x10000118  b           . + 4 + (0x118 << 2)
label_46e904:
    if (ctx->pc == 0x46E904u) {
        ctx->pc = 0x46E904u;
            // 0x46e904: 0xa2c20000  sb          $v0, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x46E908u;
        goto label_46e908;
    }
    ctx->pc = 0x46E900u;
    {
        const bool branch_taken_0x46e900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46E904u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46E900u;
            // 0x46e904: 0xa2c20000  sb          $v0, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46e900) {
            ctx->pc = 0x46ED64u;
            goto label_46ed64;
        }
    }
    ctx->pc = 0x46E908u;
label_46e908:
    // 0x46e908: 0x52620009  beql        $s3, $v0, . + 4 + (0x9 << 2)
label_46e90c:
    if (ctx->pc == 0x46E90Cu) {
        ctx->pc = 0x46E90Cu;
            // 0x46e90c: 0x26860128  addiu       $a2, $s4, 0x128 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 296));
        ctx->pc = 0x46E910u;
        goto label_46e910;
    }
    ctx->pc = 0x46E908u;
    {
        const bool branch_taken_0x46e908 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x46e908) {
            ctx->pc = 0x46E90Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x46E908u;
            // 0x46e90c: 0x26860128  addiu       $a2, $s4, 0x128 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 296));
        ctx->in_delay_slot = false;
            ctx->pc = 0x46E930u;
            goto label_46e930;
        }
    }
    ctx->pc = 0x46E910u;
label_46e910:
    // 0x46e910: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x46e910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_46e914:
    // 0x46e914: 0x52620006  beql        $s3, $v0, . + 4 + (0x6 << 2)
label_46e918:
    if (ctx->pc == 0x46E918u) {
        ctx->pc = 0x46E918u;
            // 0x46e918: 0x26860184  addiu       $a2, $s4, 0x184 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 388));
        ctx->pc = 0x46E91Cu;
        goto label_46e91c;
    }
    ctx->pc = 0x46E914u;
    {
        const bool branch_taken_0x46e914 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x46e914) {
            ctx->pc = 0x46E918u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x46E914u;
            // 0x46e918: 0x26860184  addiu       $a2, $s4, 0x184 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 388));
        ctx->in_delay_slot = false;
            ctx->pc = 0x46E930u;
            goto label_46e930;
        }
    }
    ctx->pc = 0x46E91Cu;
label_46e91c:
    // 0x46e91c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x46e91cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_46e920:
    // 0x46e920: 0x52620003  beql        $s3, $v0, . + 4 + (0x3 << 2)
label_46e924:
    if (ctx->pc == 0x46E924u) {
        ctx->pc = 0x46E924u;
            // 0x46e924: 0x26860070  addiu       $a2, $s4, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 112));
        ctx->pc = 0x46E928u;
        goto label_46e928;
    }
    ctx->pc = 0x46E920u;
    {
        const bool branch_taken_0x46e920 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x46e920) {
            ctx->pc = 0x46E924u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x46E920u;
            // 0x46e924: 0x26860070  addiu       $a2, $s4, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 112));
        ctx->in_delay_slot = false;
            ctx->pc = 0x46E930u;
            goto label_46e930;
        }
    }
    ctx->pc = 0x46E928u;
label_46e928:
    // 0x46e928: 0x52600001  beql        $s3, $zero, . + 4 + (0x1 << 2)
label_46e92c:
    if (ctx->pc == 0x46E92Cu) {
        ctx->pc = 0x46E92Cu;
            // 0x46e92c: 0x268600cc  addiu       $a2, $s4, 0xCC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 204));
        ctx->pc = 0x46E930u;
        goto label_46e930;
    }
    ctx->pc = 0x46E928u;
    {
        const bool branch_taken_0x46e928 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x46e928) {
            ctx->pc = 0x46E92Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x46E928u;
            // 0x46e92c: 0x268600cc  addiu       $a2, $s4, 0xCC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 204));
        ctx->in_delay_slot = false;
            ctx->pc = 0x46E930u;
            goto label_46e930;
        }
    }
    ctx->pc = 0x46E930u;
label_46e930:
    // 0x46e930: 0x10c0010c  beqz        $a2, . + 4 + (0x10C << 2)
label_46e934:
    if (ctx->pc == 0x46E934u) {
        ctx->pc = 0x46E938u;
        goto label_46e938;
    }
    ctx->pc = 0x46E930u;
    {
        const bool branch_taken_0x46e930 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x46e930) {
            ctx->pc = 0x46ED64u;
            goto label_46ed64;
        }
    }
    ctx->pc = 0x46E938u;
label_46e938:
    // 0x46e938: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x46e938u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_46e93c:
    // 0x46e93c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x46e93cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_46e940:
    // 0x46e940: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
label_46e944:
    if (ctx->pc == 0x46E944u) {
        ctx->pc = 0x46E948u;
        goto label_46e948;
    }
    ctx->pc = 0x46E940u;
    {
        const bool branch_taken_0x46e940 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x46e940) {
            ctx->pc = 0x46E968u;
            goto label_46e968;
        }
    }
    ctx->pc = 0x46E948u;
label_46e948:
    // 0x46e948: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x46e948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_46e94c:
    // 0x46e94c: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
label_46e950:
    if (ctx->pc == 0x46E950u) {
        ctx->pc = 0x46E954u;
        goto label_46e954;
    }
    ctx->pc = 0x46E94Cu;
    {
        const bool branch_taken_0x46e94c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x46e94c) {
            ctx->pc = 0x46E968u;
            goto label_46e968;
        }
    }
    ctx->pc = 0x46E954u;
label_46e954:
    // 0x46e954: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x46e954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_46e958:
    // 0x46e958: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_46e95c:
    if (ctx->pc == 0x46E95Cu) {
        ctx->pc = 0x46E960u;
        goto label_46e960;
    }
    ctx->pc = 0x46E958u;
    {
        const bool branch_taken_0x46e958 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x46e958) {
            ctx->pc = 0x46E968u;
            goto label_46e968;
        }
    }
    ctx->pc = 0x46E960u;
label_46e960:
    // 0x46e960: 0x10000100  b           . + 4 + (0x100 << 2)
label_46e964:
    if (ctx->pc == 0x46E964u) {
        ctx->pc = 0x46E968u;
        goto label_46e968;
    }
    ctx->pc = 0x46E960u;
    {
        const bool branch_taken_0x46e960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x46e960) {
            ctx->pc = 0x46ED64u;
            goto label_46ed64;
        }
    }
    ctx->pc = 0x46E968u;
label_46e968:
    // 0x46e968: 0x52600005  beql        $s3, $zero, . + 4 + (0x5 << 2)
label_46e96c:
    if (ctx->pc == 0x46E96Cu) {
        ctx->pc = 0x46E96Cu;
            // 0x46e96c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x46E970u;
        goto label_46e970;
    }
    ctx->pc = 0x46E968u;
    {
        const bool branch_taken_0x46e968 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x46e968) {
            ctx->pc = 0x46E96Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x46E968u;
            // 0x46e96c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x46E980u;
            goto label_46e980;
        }
    }
    ctx->pc = 0x46E970u;
label_46e970:
    // 0x46e970: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x46e970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_46e974:
    // 0x46e974: 0x566200fa  bnel        $s3, $v0, . + 4 + (0xFA << 2)
label_46e978:
    if (ctx->pc == 0x46E978u) {
        ctx->pc = 0x46E978u;
            // 0x46e978: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x46E97Cu;
        goto label_46e97c;
    }
    ctx->pc = 0x46E974u;
    {
        const bool branch_taken_0x46e974 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x46e974) {
            ctx->pc = 0x46E978u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x46E974u;
            // 0x46e978: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x46ED60u;
            goto label_46ed60;
        }
    }
    ctx->pc = 0x46E97Cu;
label_46e97c:
    // 0x46e97c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x46e97cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_46e980:
    // 0x46e980: 0xa2c20000  sb          $v0, 0x0($s6)
    ctx->pc = 0x46e980u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 2));
label_46e984:
    // 0x46e984: 0xc11bb74  jal         func_46EDD0
label_46e988:
    if (ctx->pc == 0x46E988u) {
        ctx->pc = 0x46E988u;
            // 0x46e988: 0x8ed10018  lw          $s1, 0x18($s6) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 24)));
        ctx->pc = 0x46E98Cu;
        goto label_46e98c;
    }
    ctx->pc = 0x46E984u;
    SET_GPR_U32(ctx, 31, 0x46E98Cu);
    ctx->pc = 0x46E988u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46E984u;
            // 0x46e988: 0x8ed10018  lw          $s1, 0x18($s6) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 24)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x46EDD0u;
    if (runtime->hasFunction(0x46EDD0u)) {
        auto targetFn = runtime->lookupFunction(0x46EDD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46E98Cu; }
        if (ctx->pc != 0x46E98Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0046EDD0_0x46edd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46E98Cu; }
        if (ctx->pc != 0x46E98Cu) { return; }
    }
    ctx->pc = 0x46E98Cu;
label_46e98c:
    // 0x46e98c: 0xc11bb70  jal         func_46EDC0
label_46e990:
    if (ctx->pc == 0x46E990u) {
        ctx->pc = 0x46E990u;
            // 0x46e990: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46E994u;
        goto label_46e994;
    }
    ctx->pc = 0x46E98Cu;
    SET_GPR_U32(ctx, 31, 0x46E994u);
    ctx->pc = 0x46E990u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46E98Cu;
            // 0x46e990: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x46EDC0u;
    if (runtime->hasFunction(0x46EDC0u)) {
        auto targetFn = runtime->lookupFunction(0x46EDC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46E994u; }
        if (ctx->pc != 0x46E994u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0046EDC0_0x46edc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46E994u; }
        if (ctx->pc != 0x46E994u) { return; }
    }
    ctx->pc = 0x46E994u;
label_46e994:
    // 0x46e994: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x46e994u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_46e998:
    // 0x46e998: 0x92420001  lbu         $v0, 0x1($s2)
    ctx->pc = 0x46e998u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_46e99c:
    // 0x46e99c: 0x2842003f  slti        $v0, $v0, 0x3F
    ctx->pc = 0x46e99cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)63) ? 1 : 0);
label_46e9a0:
    // 0x46e9a0: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_46e9a4:
    if (ctx->pc == 0x46E9A4u) {
        ctx->pc = 0x46E9A4u;
            // 0x46e9a4: 0x92450001  lbu         $a1, 0x1($s2) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
        ctx->pc = 0x46E9A8u;
        goto label_46e9a8;
    }
    ctx->pc = 0x46E9A0u;
    {
        const bool branch_taken_0x46e9a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x46e9a0) {
            ctx->pc = 0x46E9A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x46E9A0u;
            // 0x46e9a4: 0x92450001  lbu         $a1, 0x1($s2) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x46E9B0u;
            goto label_46e9b0;
        }
    }
    ctx->pc = 0x46E9A8u;
label_46e9a8:
    // 0x46e9a8: 0xa2400001  sb          $zero, 0x1($s2)
    ctx->pc = 0x46e9a8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 0));
label_46e9ac:
    // 0x46e9ac: 0x92450001  lbu         $a1, 0x1($s2)
    ctx->pc = 0x46e9acu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_46e9b0:
    // 0x46e9b0: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x46e9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_46e9b4:
    // 0x46e9b4: 0x24421490  addiu       $v0, $v0, 0x1490
    ctx->pc = 0x46e9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5264));
label_46e9b8:
    // 0x46e9b8: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x46e9b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_46e9bc:
    // 0x46e9bc: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x46e9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_46e9c0:
    // 0x46e9c0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x46e9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_46e9c4:
    // 0x46e9c4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x46e9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_46e9c8:
    // 0x46e9c8: 0xc11bb6c  jal         func_46EDB0
label_46e9cc:
    if (ctx->pc == 0x46E9CCu) {
        ctx->pc = 0x46E9CCu;
            // 0x46e9cc: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x46E9D0u;
        goto label_46e9d0;
    }
    ctx->pc = 0x46E9C8u;
    SET_GPR_U32(ctx, 31, 0x46E9D0u);
    ctx->pc = 0x46E9CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46E9C8u;
            // 0x46e9cc: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x46EDB0u;
    if (runtime->hasFunction(0x46EDB0u)) {
        auto targetFn = runtime->lookupFunction(0x46EDB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46E9D0u; }
        if (ctx->pc != 0x46E9D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0046EDB0_0x46edb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46E9D0u; }
        if (ctx->pc != 0x46E9D0u) { return; }
    }
    ctx->pc = 0x46E9D0u;
label_46e9d0:
    // 0x46e9d0: 0x92430001  lbu         $v1, 0x1($s2)
    ctx->pc = 0x46e9d0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_46e9d4:
    // 0x46e9d4: 0x305500ff  andi        $s5, $v0, 0xFF
    ctx->pc = 0x46e9d4u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_46e9d8:
    // 0x46e9d8: 0x2402002f  addiu       $v0, $zero, 0x2F
    ctx->pc = 0x46e9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
label_46e9dc:
    // 0x46e9dc: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
label_46e9e0:
    if (ctx->pc == 0x46E9E0u) {
        ctx->pc = 0x46E9E4u;
        goto label_46e9e4;
    }
    ctx->pc = 0x46E9DCu;
    {
        const bool branch_taken_0x46e9dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x46e9dc) {
            ctx->pc = 0x46EA08u;
            goto label_46ea08;
        }
    }
    ctx->pc = 0x46E9E4u;
label_46e9e4:
    // 0x46e9e4: 0xc0775b0  jal         func_1DD6C0
label_46e9e8:
    if (ctx->pc == 0x46E9E8u) {
        ctx->pc = 0x46E9ECu;
        goto label_46e9ec;
    }
    ctx->pc = 0x46E9E4u;
    SET_GPR_U32(ctx, 31, 0x46E9ECu);
    ctx->pc = 0x1DD6C0u;
    if (runtime->hasFunction(0x1DD6C0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46E9ECu; }
        if (ctx->pc != 0x46E9ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6C0_0x1dd6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46E9ECu; }
        if (ctx->pc != 0x46E9ECu) { return; }
    }
    ctx->pc = 0x46E9ECu;
label_46e9ec:
    // 0x46e9ec: 0xc11bb68  jal         func_46EDA0
label_46e9f0:
    if (ctx->pc == 0x46E9F0u) {
        ctx->pc = 0x46E9F0u;
            // 0x46e9f0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46E9F4u;
        goto label_46e9f4;
    }
    ctx->pc = 0x46E9ECu;
    SET_GPR_U32(ctx, 31, 0x46E9F4u);
    ctx->pc = 0x46E9F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46E9ECu;
            // 0x46e9f0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x46EDA0u;
    if (runtime->hasFunction(0x46EDA0u)) {
        auto targetFn = runtime->lookupFunction(0x46EDA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46E9F4u; }
        if (ctx->pc != 0x46E9F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0046EDA0_0x46eda0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46E9F4u; }
        if (ctx->pc != 0x46E9F4u) { return; }
    }
    ctx->pc = 0x46E9F4u;
label_46e9f4:
    // 0x46e9f4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x46e9f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_46e9f8:
    // 0x46e9f8: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
label_46e9fc:
    if (ctx->pc == 0x46E9FCu) {
        ctx->pc = 0x46EA00u;
        goto label_46ea00;
    }
    ctx->pc = 0x46E9F8u;
    {
        const bool branch_taken_0x46e9f8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x46e9f8) {
            ctx->pc = 0x46EA08u;
            goto label_46ea08;
        }
    }
    ctx->pc = 0x46EA00u;
label_46ea00:
    // 0x46ea00: 0x64150001  daddiu      $s5, $zero, 0x1
    ctx->pc = 0x46ea00u;
    SET_GPR_S64(ctx, 21, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_46ea04:
    // 0x46ea04: 0x0  nop
    ctx->pc = 0x46ea04u;
    // NOP
label_46ea08:
    // 0x46ea08: 0x12a0005d  beqz        $s5, . + 4 + (0x5D << 2)
label_46ea0c:
    if (ctx->pc == 0x46EA0Cu) {
        ctx->pc = 0x46EA10u;
        goto label_46ea10;
    }
    ctx->pc = 0x46EA08u;
    {
        const bool branch_taken_0x46ea08 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x46ea08) {
            ctx->pc = 0x46EB80u;
            goto label_46eb80;
        }
    }
    ctx->pc = 0x46EA10u;
label_46ea10:
    // 0x46ea10: 0x92440001  lbu         $a0, 0x1($s2)
    ctx->pc = 0x46ea10u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_46ea14:
    // 0x46ea14: 0x24030039  addiu       $v1, $zero, 0x39
    ctx->pc = 0x46ea14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
label_46ea18:
    // 0x46ea18: 0x14830015  bne         $a0, $v1, . + 4 + (0x15 << 2)
label_46ea1c:
    if (ctx->pc == 0x46EA1Cu) {
        ctx->pc = 0x46EA20u;
        goto label_46ea20;
    }
    ctx->pc = 0x46EA18u;
    {
        const bool branch_taken_0x46ea18 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x46ea18) {
            ctx->pc = 0x46EA70u;
            goto label_46ea70;
        }
    }
    ctx->pc = 0x46EA20u;
label_46ea20:
    // 0x46ea20: 0x3c060061  lui         $a2, 0x61
    ctx->pc = 0x46ea20u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)97 << 16));
label_46ea24:
    // 0x46ea24: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x46ea24u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46ea28:
    // 0x46ea28: 0x24c60820  addiu       $a2, $a2, 0x820
    ctx->pc = 0x46ea28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2080));
label_46ea2c:
    // 0x46ea2c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x46ea2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_46ea30:
    // 0x46ea30: 0x90a20070  lbu         $v0, 0x70($a1)
    ctx->pc = 0x46ea30u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 112)));
label_46ea34:
    // 0x46ea34: 0x28420004  slti        $v0, $v0, 0x4
    ctx->pc = 0x46ea34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_46ea38:
    // 0x46ea38: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_46ea3c:
    if (ctx->pc == 0x46EA3Cu) {
        ctx->pc = 0x46EA40u;
        goto label_46ea40;
    }
    ctx->pc = 0x46EA38u;
    {
        const bool branch_taken_0x46ea38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x46ea38) {
            ctx->pc = 0x46EA58u;
            goto label_46ea58;
        }
    }
    ctx->pc = 0x46EA40u;
label_46ea40:
    // 0x46ea40: 0x12460005  beq         $s2, $a2, . + 4 + (0x5 << 2)
label_46ea44:
    if (ctx->pc == 0x46EA44u) {
        ctx->pc = 0x46EA48u;
        goto label_46ea48;
    }
    ctx->pc = 0x46EA40u;
    {
        const bool branch_taken_0x46ea40 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 6));
        if (branch_taken_0x46ea40) {
            ctx->pc = 0x46EA58u;
            goto label_46ea58;
        }
    }
    ctx->pc = 0x46EA48u;
label_46ea48:
    // 0x46ea48: 0x90c20001  lbu         $v0, 0x1($a2)
    ctx->pc = 0x46ea48u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
label_46ea4c:
    // 0x46ea4c: 0x1043004c  beq         $v0, $v1, . + 4 + (0x4C << 2)
label_46ea50:
    if (ctx->pc == 0x46EA50u) {
        ctx->pc = 0x46EA54u;
        goto label_46ea54;
    }
    ctx->pc = 0x46EA4Cu;
    {
        const bool branch_taken_0x46ea4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x46ea4c) {
            ctx->pc = 0x46EB80u;
            goto label_46eb80;
        }
    }
    ctx->pc = 0x46EA54u;
label_46ea54:
    // 0x46ea54: 0x0  nop
    ctx->pc = 0x46ea54u;
    // NOP
label_46ea58:
    // 0x46ea58: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x46ea58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_46ea5c:
    // 0x46ea5c: 0x28e20004  slti        $v0, $a3, 0x4
    ctx->pc = 0x46ea5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)4) ? 1 : 0);
label_46ea60:
    // 0x46ea60: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x46ea60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_46ea64:
    // 0x46ea64: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_46ea68:
    if (ctx->pc == 0x46EA68u) {
        ctx->pc = 0x46EA68u;
            // 0x46ea68: 0x24a5005c  addiu       $a1, $a1, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 92));
        ctx->pc = 0x46EA6Cu;
        goto label_46ea6c;
    }
    ctx->pc = 0x46EA64u;
    {
        const bool branch_taken_0x46ea64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x46EA68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46EA64u;
            // 0x46ea68: 0x24a5005c  addiu       $a1, $a1, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46ea64) {
            ctx->pc = 0x46EA30u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_46ea30;
        }
    }
    ctx->pc = 0x46EA6Cu;
label_46ea6c:
    // 0x46ea6c: 0x0  nop
    ctx->pc = 0x46ea6cu;
    // NOP
label_46ea70:
    // 0x46ea70: 0x2402002f  addiu       $v0, $zero, 0x2F
    ctx->pc = 0x46ea70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
label_46ea74:
    // 0x46ea74: 0x1082000a  beq         $a0, $v0, . + 4 + (0xA << 2)
label_46ea78:
    if (ctx->pc == 0x46EA78u) {
        ctx->pc = 0x46EA7Cu;
        goto label_46ea7c;
    }
    ctx->pc = 0x46EA74u;
    {
        const bool branch_taken_0x46ea74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x46ea74) {
            ctx->pc = 0x46EAA0u;
            goto label_46eaa0;
        }
    }
    ctx->pc = 0x46EA7Cu;
label_46ea7c:
    // 0x46ea7c: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x46ea7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_46ea80:
    // 0x46ea80: 0x10820007  beq         $a0, $v0, . + 4 + (0x7 << 2)
label_46ea84:
    if (ctx->pc == 0x46EA84u) {
        ctx->pc = 0x46EA88u;
        goto label_46ea88;
    }
    ctx->pc = 0x46EA80u;
    {
        const bool branch_taken_0x46ea80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x46ea80) {
            ctx->pc = 0x46EAA0u;
            goto label_46eaa0;
        }
    }
    ctx->pc = 0x46EA88u;
label_46ea88:
    // 0x46ea88: 0x2402003b  addiu       $v0, $zero, 0x3B
    ctx->pc = 0x46ea88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
label_46ea8c:
    // 0x46ea8c: 0x10820004  beq         $a0, $v0, . + 4 + (0x4 << 2)
label_46ea90:
    if (ctx->pc == 0x46EA90u) {
        ctx->pc = 0x46EA94u;
        goto label_46ea94;
    }
    ctx->pc = 0x46EA8Cu;
    {
        const bool branch_taken_0x46ea8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x46ea8c) {
            ctx->pc = 0x46EAA0u;
            goto label_46eaa0;
        }
    }
    ctx->pc = 0x46EA94u;
label_46ea94:
    // 0x46ea94: 0x10000008  b           . + 4 + (0x8 << 2)
label_46ea98:
    if (ctx->pc == 0x46EA98u) {
        ctx->pc = 0x46EA9Cu;
        goto label_46ea9c;
    }
    ctx->pc = 0x46EA94u;
    {
        const bool branch_taken_0x46ea94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x46ea94) {
            ctx->pc = 0x46EAB8u;
            goto label_46eab8;
        }
    }
    ctx->pc = 0x46EA9Cu;
label_46ea9c:
    // 0x46ea9c: 0x0  nop
    ctx->pc = 0x46ea9cu;
    // NOP
label_46eaa0:
    // 0x46eaa0: 0xc0c8f80  jal         func_323E00
label_46eaa4:
    if (ctx->pc == 0x46EAA4u) {
        ctx->pc = 0x46EAA4u;
            // 0x46eaa4: 0x8e840068  lw          $a0, 0x68($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 104)));
        ctx->pc = 0x46EAA8u;
        goto label_46eaa8;
    }
    ctx->pc = 0x46EAA0u;
    SET_GPR_U32(ctx, 31, 0x46EAA8u);
    ctx->pc = 0x46EAA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46EAA0u;
            // 0x46eaa4: 0x8e840068  lw          $a0, 0x68($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 104)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323E00u;
    if (runtime->hasFunction(0x323E00u)) {
        auto targetFn = runtime->lookupFunction(0x323E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46EAA8u; }
        if (ctx->pc != 0x46EAA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323E00_0x323e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46EAA8u; }
        if (ctx->pc != 0x46EAA8u) { return; }
    }
    ctx->pc = 0x46EAA8u;
label_46eaa8:
    // 0x46eaa8: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x46eaa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_46eaac:
    // 0x46eaac: 0x10430034  beq         $v0, $v1, . + 4 + (0x34 << 2)
label_46eab0:
    if (ctx->pc == 0x46EAB0u) {
        ctx->pc = 0x46EAB4u;
        goto label_46eab4;
    }
    ctx->pc = 0x46EAACu;
    {
        const bool branch_taken_0x46eaac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x46eaac) {
            ctx->pc = 0x46EB80u;
            goto label_46eb80;
        }
    }
    ctx->pc = 0x46EAB4u;
label_46eab4:
    // 0x46eab4: 0x0  nop
    ctx->pc = 0x46eab4u;
    // NOP
label_46eab8:
    // 0x46eab8: 0x1620000b  bnez        $s1, . + 4 + (0xB << 2)
label_46eabc:
    if (ctx->pc == 0x46EABCu) {
        ctx->pc = 0x46EAC0u;
        goto label_46eac0;
    }
    ctx->pc = 0x46EAB8u;
    {
        const bool branch_taken_0x46eab8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x46eab8) {
            ctx->pc = 0x46EAE8u;
            goto label_46eae8;
        }
    }
    ctx->pc = 0x46EAC0u;
label_46eac0:
    // 0x46eac0: 0x92440000  lbu         $a0, 0x0($s2)
    ctx->pc = 0x46eac0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_46eac4:
    // 0x46eac4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x46eac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_46eac8:
    // 0x46eac8: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x46eac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_46eacc:
    // 0x46eacc: 0x3084001f  andi        $a0, $a0, 0x1F
    ctx->pc = 0x46eaccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
label_46ead0:
    // 0x46ead0: 0x831804  sllv        $v1, $v1, $a0
    ctx->pc = 0x46ead0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
label_46ead4:
    // 0x46ead4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x46ead4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_46ead8:
    // 0x46ead8: 0x14400033  bnez        $v0, . + 4 + (0x33 << 2)
label_46eadc:
    if (ctx->pc == 0x46EADCu) {
        ctx->pc = 0x46EAE0u;
        goto label_46eae0;
    }
    ctx->pc = 0x46EAD8u;
    {
        const bool branch_taken_0x46ead8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x46ead8) {
            ctx->pc = 0x46EBA8u;
            goto label_46eba8;
        }
    }
    ctx->pc = 0x46EAE0u;
label_46eae0:
    // 0x46eae0: 0x10000027  b           . + 4 + (0x27 << 2)
label_46eae4:
    if (ctx->pc == 0x46EAE4u) {
        ctx->pc = 0x46EAE8u;
        goto label_46eae8;
    }
    ctx->pc = 0x46EAE0u;
    {
        const bool branch_taken_0x46eae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x46eae0) {
            ctx->pc = 0x46EB80u;
            goto label_46eb80;
        }
    }
    ctx->pc = 0x46EAE8u;
label_46eae8:
    // 0x46eae8: 0x92430001  lbu         $v1, 0x1($s2)
    ctx->pc = 0x46eae8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_46eaec:
    // 0x46eaec: 0x2402002f  addiu       $v0, $zero, 0x2F
    ctx->pc = 0x46eaecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
label_46eaf0:
    // 0x46eaf0: 0x10620023  beq         $v1, $v0, . + 4 + (0x23 << 2)
label_46eaf4:
    if (ctx->pc == 0x46EAF4u) {
        ctx->pc = 0x46EAF8u;
        goto label_46eaf8;
    }
    ctx->pc = 0x46EAF0u;
    {
        const bool branch_taken_0x46eaf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x46eaf0) {
            ctx->pc = 0x46EB80u;
            goto label_46eb80;
        }
    }
    ctx->pc = 0x46EAF8u;
label_46eaf8:
    // 0x46eaf8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x46eaf8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46eafc:
    // 0x46eafc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x46eafcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46eb00:
    // 0x46eb00: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x46eb00u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46eb04:
    // 0x46eb04: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x46eb04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_46eb08:
    // 0x46eb08: 0x64050001  daddiu      $a1, $zero, 0x1
    ctx->pc = 0x46eb08u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_46eb0c:
    // 0x46eb0c: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x46eb0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_46eb10:
    // 0x46eb10: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x46eb10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_46eb14:
    // 0x46eb14: 0x0  nop
    ctx->pc = 0x46eb14u;
    // NOP
label_46eb18:
    // 0x46eb18: 0x15400017  bnez        $t2, . + 4 + (0x17 << 2)
label_46eb1c:
    if (ctx->pc == 0x46EB1Cu) {
        ctx->pc = 0x46EB20u;
        goto label_46eb20;
    }
    ctx->pc = 0x46EB18u;
    {
        const bool branch_taken_0x46eb18 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        if (branch_taken_0x46eb18) {
            ctx->pc = 0x46EB78u;
            goto label_46eb78;
        }
    }
    ctx->pc = 0x46EB20u;
label_46eb20:
    // 0x46eb20: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x46eb20u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_46eb24:
    // 0x46eb24: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x46eb24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
label_46eb28:
    // 0x46eb28: 0x14460003  bne         $v0, $a2, . + 4 + (0x3 << 2)
label_46eb2c:
    if (ctx->pc == 0x46EB2Cu) {
        ctx->pc = 0x46EB30u;
        goto label_46eb30;
    }
    ctx->pc = 0x46EB28u;
    {
        const bool branch_taken_0x46eb28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x46eb28) {
            ctx->pc = 0x46EB38u;
            goto label_46eb38;
        }
    }
    ctx->pc = 0x46EB30u;
label_46eb30:
    // 0x46eb30: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x46eb30u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_46eb34:
    // 0x46eb34: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x46eb34u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46eb38:
    // 0x46eb38: 0x441804  sllv        $v1, $a0, $v0
    ctx->pc = 0x46eb38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 2) & 0x1F));
label_46eb3c:
    // 0x46eb3c: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x46eb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_46eb40:
    // 0x46eb40: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x46eb40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_46eb44:
    // 0x46eb44: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_46eb48:
    if (ctx->pc == 0x46EB48u) {
        ctx->pc = 0x46EB4Cu;
        goto label_46eb4c;
    }
    ctx->pc = 0x46EB44u;
    {
        const bool branch_taken_0x46eb44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x46eb44) {
            ctx->pc = 0x46EB68u;
            goto label_46eb68;
        }
    }
    ctx->pc = 0x46EB4Cu;
label_46eb4c:
    // 0x46eb4c: 0x11400004  beqz        $t2, . + 4 + (0x4 << 2)
label_46eb50:
    if (ctx->pc == 0x46EB50u) {
        ctx->pc = 0x46EB54u;
        goto label_46eb54;
    }
    ctx->pc = 0x46EB4Cu;
    {
        const bool branch_taken_0x46eb4c = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x46eb4c) {
            ctx->pc = 0x46EB60u;
            goto label_46eb60;
        }
    }
    ctx->pc = 0x46EB54u;
label_46eb54:
    // 0x46eb54: 0x10000008  b           . + 4 + (0x8 << 2)
label_46eb58:
    if (ctx->pc == 0x46EB58u) {
        ctx->pc = 0x46EB58u;
            // 0x46eb58: 0x80482d  daddu       $t1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46EB5Cu;
        goto label_46eb5c;
    }
    ctx->pc = 0x46EB54u;
    {
        const bool branch_taken_0x46eb54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46EB58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46EB54u;
            // 0x46eb58: 0x80482d  daddu       $t1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46eb54) {
            ctx->pc = 0x46EB78u;
            goto label_46eb78;
        }
    }
    ctx->pc = 0x46EB5Cu;
label_46eb5c:
    // 0x46eb5c: 0x0  nop
    ctx->pc = 0x46eb5cu;
    // NOP
label_46eb60:
    // 0x46eb60: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x46eb60u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_46eb64:
    // 0x46eb64: 0x0  nop
    ctx->pc = 0x46eb64u;
    // NOP
label_46eb68:
    // 0x46eb68: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x46eb68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_46eb6c:
    // 0x46eb6c: 0x111102b  sltu        $v0, $t0, $s1
    ctx->pc = 0x46eb6cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_46eb70:
    // 0x46eb70: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
label_46eb74:
    if (ctx->pc == 0x46EB74u) {
        ctx->pc = 0x46EB74u;
            // 0x46eb74: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->pc = 0x46EB78u;
        goto label_46eb78;
    }
    ctx->pc = 0x46EB70u;
    {
        const bool branch_taken_0x46eb70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x46EB74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46EB70u;
            // 0x46eb74: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46eb70) {
            ctx->pc = 0x46EB18u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_46eb18;
        }
    }
    ctx->pc = 0x46EB78u;
label_46eb78:
    // 0x46eb78: 0x1520000b  bnez        $t1, . + 4 + (0xB << 2)
label_46eb7c:
    if (ctx->pc == 0x46EB7Cu) {
        ctx->pc = 0x46EB80u;
        goto label_46eb80;
    }
    ctx->pc = 0x46EB78u;
    {
        const bool branch_taken_0x46eb78 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x46eb78) {
            ctx->pc = 0x46EBA8u;
            goto label_46eba8;
        }
    }
    ctx->pc = 0x46EB80u;
label_46eb80:
    // 0x46eb80: 0x92420001  lbu         $v0, 0x1($s2)
    ctx->pc = 0x46eb80u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_46eb84:
    // 0x46eb84: 0x2841003e  slti        $at, $v0, 0x3E
    ctx->pc = 0x46eb84u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)62) ? 1 : 0);
label_46eb88:
    // 0x46eb88: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
label_46eb8c:
    if (ctx->pc == 0x46EB8Cu) {
        ctx->pc = 0x46EB90u;
        goto label_46eb90;
    }
    ctx->pc = 0x46EB88u;
    {
        const bool branch_taken_0x46eb88 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x46eb88) {
            ctx->pc = 0x46EBA0u;
            goto label_46eba0;
        }
    }
    ctx->pc = 0x46EB90u;
label_46eb90:
    // 0x46eb90: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x46eb90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_46eb94:
    // 0x46eb94: 0x1000ff85  b           . + 4 + (-0x7B << 2)
label_46eb98:
    if (ctx->pc == 0x46EB98u) {
        ctx->pc = 0x46EB98u;
            // 0x46eb98: 0xa2420001  sb          $v0, 0x1($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x46EB9Cu;
        goto label_46eb9c;
    }
    ctx->pc = 0x46EB94u;
    {
        const bool branch_taken_0x46eb94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46EB98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46EB94u;
            // 0x46eb98: 0xa2420001  sb          $v0, 0x1($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46eb94) {
            ctx->pc = 0x46E9ACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_46e9ac;
        }
    }
    ctx->pc = 0x46EB9Cu;
label_46eb9c:
    // 0x46eb9c: 0x0  nop
    ctx->pc = 0x46eb9cu;
    // NOP
label_46eba0:
    // 0x46eba0: 0x1000ff82  b           . + 4 + (-0x7E << 2)
label_46eba4:
    if (ctx->pc == 0x46EBA4u) {
        ctx->pc = 0x46EBA4u;
            // 0x46eba4: 0xa2400001  sb          $zero, 0x1($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x46EBA8u;
        goto label_46eba8;
    }
    ctx->pc = 0x46EBA0u;
    {
        const bool branch_taken_0x46eba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46EBA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46EBA0u;
            // 0x46eba4: 0xa2400001  sb          $zero, 0x1($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46eba0) {
            ctx->pc = 0x46E9ACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_46e9ac;
        }
    }
    ctx->pc = 0x46EBA8u;
label_46eba8:
    // 0x46eba8: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x46eba8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_46ebac:
    // 0x46ebac: 0x8c843e30  lw          $a0, 0x3E30($a0)
    ctx->pc = 0x46ebacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 15920)));
label_46ebb0:
    // 0x46ebb0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x46ebb0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46ebb4:
    // 0x46ebb4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x46ebb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_46ebb8:
    // 0x46ebb8: 0x2484fffd  addiu       $a0, $a0, -0x3
    ctx->pc = 0x46ebb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967293));
label_46ebbc:
    // 0x46ebbc: 0x2c810009  sltiu       $at, $a0, 0x9
    ctx->pc = 0x46ebbcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_46ebc0:
    // 0x46ebc0: 0x10200015  beqz        $at, . + 4 + (0x15 << 2)
label_46ebc4:
    if (ctx->pc == 0x46EBC4u) {
        ctx->pc = 0x46EBC4u;
            // 0x46ebc4: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x46EBC8u;
        goto label_46ebc8;
    }
    ctx->pc = 0x46EBC0u;
    {
        const bool branch_taken_0x46ebc0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x46EBC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46EBC0u;
            // 0x46ebc4: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x46ebc0) {
            ctx->pc = 0x46EC18u;
            goto label_46ec18;
        }
    }
    ctx->pc = 0x46EBC8u;
label_46ebc8:
    // 0x46ebc8: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x46ebc8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_46ebcc:
    // 0x46ebcc: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x46ebccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_46ebd0:
    // 0x46ebd0: 0x24a5ef60  addiu       $a1, $a1, -0x10A0
    ctx->pc = 0x46ebd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963040));
label_46ebd4:
    // 0x46ebd4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x46ebd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_46ebd8:
    // 0x46ebd8: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x46ebd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_46ebdc:
    // 0x46ebdc: 0x800008  jr          $a0
label_46ebe0:
    if (ctx->pc == 0x46EBE0u) {
        ctx->pc = 0x46EBE4u;
        goto label_46ebe4;
    }
    ctx->pc = 0x46EBDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x46EBE4u: goto label_46ebe4;
            case 0x46EBECu: goto label_46ebec;
            case 0x46EBF4u: goto label_46ebf4;
            case 0x46EBFCu: goto label_46ebfc;
            case 0x46EC04u: goto label_46ec04;
            case 0x46EC10u: goto label_46ec10;
            case 0x46EC18u: goto label_46ec18;
            default: break;
        }
        return;
    }
    ctx->pc = 0x46EBE4u;
label_46ebe4:
    // 0x46ebe4: 0x1000000d  b           . + 4 + (0xD << 2)
label_46ebe8:
    if (ctx->pc == 0x46EBE8u) {
        ctx->pc = 0x46EBE8u;
            // 0x46ebe8: 0x92450000  lbu         $a1, 0x0($s2) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->pc = 0x46EBECu;
        goto label_46ebec;
    }
    ctx->pc = 0x46EBE4u;
    {
        const bool branch_taken_0x46ebe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46EBE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46EBE4u;
            // 0x46ebe8: 0x92450000  lbu         $a1, 0x0($s2) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46ebe4) {
            ctx->pc = 0x46EC1Cu;
            goto label_46ec1c;
        }
    }
    ctx->pc = 0x46EBECu;
label_46ebec:
    // 0x46ebec: 0x1000000a  b           . + 4 + (0xA << 2)
label_46ebf0:
    if (ctx->pc == 0x46EBF0u) {
        ctx->pc = 0x46EBF0u;
            // 0x46ebf0: 0xc0182d  daddu       $v1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46EBF4u;
        goto label_46ebf4;
    }
    ctx->pc = 0x46EBECu;
    {
        const bool branch_taken_0x46ebec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46EBF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46EBECu;
            // 0x46ebf0: 0xc0182d  daddu       $v1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46ebec) {
            ctx->pc = 0x46EC18u;
            goto label_46ec18;
        }
    }
    ctx->pc = 0x46EBF4u;
label_46ebf4:
    // 0x46ebf4: 0x10000008  b           . + 4 + (0x8 << 2)
label_46ebf8:
    if (ctx->pc == 0x46EBF8u) {
        ctx->pc = 0x46EBF8u;
            // 0x46ebf8: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x46EBFCu;
        goto label_46ebfc;
    }
    ctx->pc = 0x46EBF4u;
    {
        const bool branch_taken_0x46ebf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46EBF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46EBF4u;
            // 0x46ebf8: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46ebf4) {
            ctx->pc = 0x46EC18u;
            goto label_46ec18;
        }
    }
    ctx->pc = 0x46EBFCu;
label_46ebfc:
    // 0x46ebfc: 0x10000006  b           . + 4 + (0x6 << 2)
label_46ec00:
    if (ctx->pc == 0x46EC00u) {
        ctx->pc = 0x46EC00u;
            // 0x46ec00: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x46EC04u;
        goto label_46ec04;
    }
    ctx->pc = 0x46EBFCu;
    {
        const bool branch_taken_0x46ebfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46EC00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46EBFCu;
            // 0x46ec00: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46ebfc) {
            ctx->pc = 0x46EC18u;
            goto label_46ec18;
        }
    }
    ctx->pc = 0x46EC04u;
label_46ec04:
    // 0x46ec04: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x46ec04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_46ec08:
    // 0x46ec08: 0x10000003  b           . + 4 + (0x3 << 2)
label_46ec0c:
    if (ctx->pc == 0x46EC0Cu) {
        ctx->pc = 0x46EC0Cu;
            // 0x46ec0c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46EC10u;
        goto label_46ec10;
    }
    ctx->pc = 0x46EC08u;
    {
        const bool branch_taken_0x46ec08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46EC0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46EC08u;
            // 0x46ec0c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46ec08) {
            ctx->pc = 0x46EC18u;
            goto label_46ec18;
        }
    }
    ctx->pc = 0x46EC10u;
label_46ec10:
    // 0x46ec10: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x46ec10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_46ec14:
    // 0x46ec14: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x46ec14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46ec18:
    // 0x46ec18: 0x92450000  lbu         $a1, 0x0($s2)
    ctx->pc = 0x46ec18u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_46ec1c:
    // 0x46ec1c: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x46ec1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_46ec20:
    // 0x46ec20: 0x30a6001f  andi        $a2, $a1, 0x1F
    ctx->pc = 0x46ec20u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
label_46ec24:
    // 0x46ec24: 0x54c40003  bnel        $a2, $a0, . + 4 + (0x3 << 2)
label_46ec28:
    if (ctx->pc == 0x46EC28u) {
        ctx->pc = 0x46EC28u;
            // 0x46ec28: 0x132840  sll         $a1, $s3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
        ctx->pc = 0x46EC2Cu;
        goto label_46ec2c;
    }
    ctx->pc = 0x46EC24u;
    {
        const bool branch_taken_0x46ec24 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 4));
        if (branch_taken_0x46ec24) {
            ctx->pc = 0x46EC28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x46EC24u;
            // 0x46ec28: 0x132840  sll         $a1, $s3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x46EC34u;
            goto label_46ec34;
        }
    }
    ctx->pc = 0x46EC2Cu;
label_46ec2c:
    // 0x46ec2c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x46ec2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46ec30:
    // 0x46ec30: 0x132840  sll         $a1, $s3, 1
    ctx->pc = 0x46ec30u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
label_46ec34:
    // 0x46ec34: 0x3c040061  lui         $a0, 0x61
    ctx->pc = 0x46ec34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
label_46ec38:
    // 0x46ec38: 0xb32821  addu        $a1, $a1, $s3
    ctx->pc = 0x46ec38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
label_46ec3c:
    // 0x46ec3c: 0x248406d0  addiu       $a0, $a0, 0x6D0
    ctx->pc = 0x46ec3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1744));
label_46ec40:
    // 0x46ec40: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x46ec40u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_46ec44:
    // 0x46ec44: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x46ec44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_46ec48:
    // 0x46ec48: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x46ec48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_46ec4c:
    // 0x46ec4c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_46ec50:
    if (ctx->pc == 0x46EC50u) {
        ctx->pc = 0x46EC50u;
            // 0x46ec50: 0xa0860000  sb          $a2, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 6));
        ctx->pc = 0x46EC54u;
        goto label_46ec54;
    }
    ctx->pc = 0x46EC4Cu;
    {
        const bool branch_taken_0x46ec4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x46EC50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46EC4Cu;
            // 0x46ec50: 0xa0860000  sb          $a2, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46ec4c) {
            ctx->pc = 0x46EC98u;
            goto label_46ec98;
        }
    }
    ctx->pc = 0x46EC54u;
label_46ec54:
    // 0x46ec54: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x46ec54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_46ec58:
    // 0x46ec58: 0x1320c0  sll         $a0, $s3, 3
    ctx->pc = 0x46ec58u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
label_46ec5c:
    // 0x46ec5c: 0x933021  addu        $a2, $a0, $s3
    ctx->pc = 0x46ec5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
label_46ec60:
    // 0x46ec60: 0x3c050061  lui         $a1, 0x61
    ctx->pc = 0x46ec60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)97 << 16));
label_46ec64:
    // 0x46ec64: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x46ec64u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_46ec68:
    // 0x46ec68: 0x63040  sll         $a2, $a2, 1
    ctx->pc = 0x46ec68u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_46ec6c:
    // 0x46ec6c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x46ec6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_46ec70:
    // 0x46ec70: 0xd33021  addu        $a2, $a2, $s3
    ctx->pc = 0x46ec70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
label_46ec74:
    // 0x46ec74: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x46ec74u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_46ec78:
    // 0x46ec78: 0x24a506f0  addiu       $a1, $a1, 0x6F0
    ctx->pc = 0x46ec78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1776));
label_46ec7c:
    // 0x46ec7c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x46ec7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_46ec80:
    // 0x46ec80: 0x92470001  lbu         $a3, 0x1($s2)
    ctx->pc = 0x46ec80u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_46ec84:
    // 0x46ec84: 0x62080  sll         $a0, $a2, 2
    ctx->pc = 0x46ec84u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_46ec88:
    // 0x46ec88: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x46ec88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_46ec8c:
    // 0x46ec8c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x46ec8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_46ec90:
    // 0x46ec90: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x46ec90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_46ec94:
    // 0x46ec94: 0xa0470000  sb          $a3, 0x0($v0)
    ctx->pc = 0x46ec94u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 7));
label_46ec98:
    // 0x46ec98: 0x8e82006c  lw          $v0, 0x6C($s4)
    ctx->pc = 0x46ec98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 108)));
label_46ec9c:
    // 0x46ec9c: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x46ec9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_46eca0:
    // 0x46eca0: 0x92c30001  lbu         $v1, 0x1($s6)
    ctx->pc = 0x46eca0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 1)));
label_46eca4:
    // 0x46eca4: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x46eca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_46eca8:
    // 0x46eca8: 0x24630028  addiu       $v1, $v1, 0x28
    ctx->pc = 0x46eca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
label_46ecac:
    // 0x46ecac: 0x38880  sll         $s1, $v1, 2
    ctx->pc = 0x46ecacu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_46ecb0:
    // 0x46ecb0: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x46ecb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_46ecb4:
    // 0x46ecb4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x46ecb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_46ecb8:
    // 0x46ecb8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x46ecb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_46ecbc:
    // 0x46ecbc: 0xc12512c  jal         func_4944B0
label_46ecc0:
    if (ctx->pc == 0x46ECC0u) {
        ctx->pc = 0x46ECC0u;
            // 0x46ecc0: 0x24a5f1d0  addiu       $a1, $a1, -0xE30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963664));
        ctx->pc = 0x46ECC4u;
        goto label_46ecc4;
    }
    ctx->pc = 0x46ECBCu;
    SET_GPR_U32(ctx, 31, 0x46ECC4u);
    ctx->pc = 0x46ECC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46ECBCu;
            // 0x46ecc0: 0x24a5f1d0  addiu       $a1, $a1, -0xE30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963664));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4944B0u;
    if (runtime->hasFunction(0x4944B0u)) {
        auto targetFn = runtime->lookupFunction(0x4944B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46ECC4u; }
        if (ctx->pc != 0x46ECC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004944B0_0x4944b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46ECC4u; }
        if (ctx->pc != 0x46ECC4u) { return; }
    }
    ctx->pc = 0x46ECC4u;
label_46ecc4:
    // 0x46ecc4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x46ecc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_46ecc8:
    // 0x46ecc8: 0x8e82006c  lw          $v0, 0x6C($s4)
    ctx->pc = 0x46ecc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 108)));
label_46eccc:
    // 0x46eccc: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x46ecccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_46ecd0:
    // 0x46ecd0: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x46ecd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_46ecd4:
    // 0x46ecd4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x46ecd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_46ecd8:
    // 0x46ecd8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x46ecd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_46ecdc:
    // 0x46ecdc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x46ecdcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_46ece0:
    // 0x46ece0: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x46ece0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_46ece4:
    // 0x46ece4: 0x320f809  jalr        $t9
label_46ece8:
    if (ctx->pc == 0x46ECE8u) {
        ctx->pc = 0x46ECECu;
        goto label_46ecec;
    }
    ctx->pc = 0x46ECE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x46ECECu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x46ECECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x46ECECu; }
            if (ctx->pc != 0x46ECECu) { return; }
        }
        }
    }
    ctx->pc = 0x46ECECu;
label_46ecec:
    // 0x46ecec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x46ececu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_46ecf0:
    // 0x46ecf0: 0xa202007c  sb          $v0, 0x7C($s0)
    ctx->pc = 0x46ecf0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 124), (uint8_t)GPR_U32(ctx, 2));
label_46ecf4:
    // 0x46ecf4: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x46ecf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_46ecf8:
    // 0x46ecf8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x46ecf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_46ecfc:
    // 0x46ecfc: 0xc123848  jal         func_48E120
label_46ed00:
    if (ctx->pc == 0x46ED00u) {
        ctx->pc = 0x46ED00u;
            // 0x46ed00: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x46ED04u;
        goto label_46ed04;
    }
    ctx->pc = 0x46ECFCu;
    SET_GPR_U32(ctx, 31, 0x46ED04u);
    ctx->pc = 0x46ED00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46ECFCu;
            // 0x46ed00: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E120u;
    if (runtime->hasFunction(0x48E120u)) {
        auto targetFn = runtime->lookupFunction(0x48E120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46ED04u; }
        if (ctx->pc != 0x46ED04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E120_0x48e120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46ED04u; }
        if (ctx->pc != 0x46ED04u) { return; }
    }
    ctx->pc = 0x46ED04u;
label_46ed04:
    // 0x46ed04: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x46ed04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_46ed08:
    // 0x46ed08: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x46ed08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_46ed0c:
    // 0x46ed0c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x46ed0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_46ed10:
    // 0x46ed10: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x46ed10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46ed14:
    // 0x46ed14: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x46ed14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_46ed18:
    // 0x46ed18: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x46ed18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_46ed1c:
    // 0x46ed1c: 0xa4430046  sh          $v1, 0x46($v0)
    ctx->pc = 0x46ed1cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 70), (uint16_t)GPR_U32(ctx, 3));
label_46ed20:
    // 0x46ed20: 0x8e83006c  lw          $v1, 0x6C($s4)
    ctx->pc = 0x46ed20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 108)));
label_46ed24:
    // 0x46ed24: 0x92c20001  lbu         $v0, 0x1($s6)
    ctx->pc = 0x46ed24u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 1)));
label_46ed28:
    // 0x46ed28: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x46ed28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_46ed2c:
    // 0x46ed2c: 0x24420028  addiu       $v0, $v0, 0x28
    ctx->pc = 0x46ed2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_46ed30:
    // 0x46ed30: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x46ed30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_46ed34:
    // 0x46ed34: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x46ed34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_46ed38:
    // 0x46ed38: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x46ed38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_46ed3c:
    // 0x46ed3c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x46ed3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_46ed40:
    // 0x46ed40: 0xa4450046  sh          $a1, 0x46($v0)
    ctx->pc = 0x46ed40u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 70), (uint16_t)GPR_U32(ctx, 5));
label_46ed44:
    // 0x46ed44: 0x8e83006c  lw          $v1, 0x6C($s4)
    ctx->pc = 0x46ed44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 108)));
label_46ed48:
    // 0x46ed48: 0x92c20001  lbu         $v0, 0x1($s6)
    ctx->pc = 0x46ed48u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 1)));
label_46ed4c:
    // 0x46ed4c: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x46ed4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_46ed50:
    // 0x46ed50: 0xc12326c  jal         func_48C9B0
label_46ed54:
    if (ctx->pc == 0x46ED54u) {
        ctx->pc = 0x46ED54u;
            // 0x46ed54: 0x24450028  addiu       $a1, $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
        ctx->pc = 0x46ED58u;
        goto label_46ed58;
    }
    ctx->pc = 0x46ED50u;
    SET_GPR_U32(ctx, 31, 0x46ED58u);
    ctx->pc = 0x46ED54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46ED50u;
            // 0x46ed54: 0x24450028  addiu       $a1, $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48C9B0u;
    if (runtime->hasFunction(0x48C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x48C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46ED58u; }
        if (ctx->pc != 0x46ED58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048C9B0_0x48c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46ED58u; }
        if (ctx->pc != 0x46ED58u) { return; }
    }
    ctx->pc = 0x46ED58u;
label_46ed58:
    // 0x46ed58: 0x10000002  b           . + 4 + (0x2 << 2)
label_46ed5c:
    if (ctx->pc == 0x46ED5Cu) {
        ctx->pc = 0x46ED5Cu;
            // 0x46ed5c: 0xaec00008  sw          $zero, 0x8($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 0));
        ctx->pc = 0x46ED60u;
        goto label_46ed60;
    }
    ctx->pc = 0x46ED58u;
    {
        const bool branch_taken_0x46ed58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46ED5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46ED58u;
            // 0x46ed5c: 0xaec00008  sw          $zero, 0x8($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46ed58) {
            ctx->pc = 0x46ED64u;
            goto label_46ed64;
        }
    }
    ctx->pc = 0x46ED60u;
label_46ed60:
    // 0x46ed60: 0xa2c20000  sb          $v0, 0x0($s6)
    ctx->pc = 0x46ed60u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 2));
label_46ed64:
    // 0x46ed64: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x46ed64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46ed68:
    // 0x46ed68: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x46ed68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_46ed6c:
    // 0x46ed6c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x46ed6cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_46ed70:
    // 0x46ed70: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x46ed70u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_46ed74:
    // 0x46ed74: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x46ed74u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_46ed78:
    // 0x46ed78: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x46ed78u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_46ed7c:
    // 0x46ed7c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x46ed7cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_46ed80:
    // 0x46ed80: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x46ed80u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_46ed84:
    // 0x46ed84: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x46ed84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_46ed88:
    // 0x46ed88: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x46ed88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_46ed8c:
    // 0x46ed8c: 0x3e00008  jr          $ra
label_46ed90:
    if (ctx->pc == 0x46ED90u) {
        ctx->pc = 0x46ED90u;
            // 0x46ed90: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x46ED94u;
        goto label_46ed94;
    }
    ctx->pc = 0x46ED8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x46ED90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46ED8Cu;
            // 0x46ed90: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x46ED94u;
label_46ed94:
    // 0x46ed94: 0x0  nop
    ctx->pc = 0x46ed94u;
    // NOP
label_46ed98:
    // 0x46ed98: 0x0  nop
    ctx->pc = 0x46ed98u;
    // NOP
label_46ed9c:
    // 0x46ed9c: 0x0  nop
    ctx->pc = 0x46ed9cu;
    // NOP
}
