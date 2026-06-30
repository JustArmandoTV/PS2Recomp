#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0055E490
// Address: 0x55e490 - 0x55f1c0
void sub_0055E490_0x55e490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0055E490_0x55e490");
#endif

    switch (ctx->pc) {
        case 0x55e490u: goto label_55e490;
        case 0x55e494u: goto label_55e494;
        case 0x55e498u: goto label_55e498;
        case 0x55e49cu: goto label_55e49c;
        case 0x55e4a0u: goto label_55e4a0;
        case 0x55e4a4u: goto label_55e4a4;
        case 0x55e4a8u: goto label_55e4a8;
        case 0x55e4acu: goto label_55e4ac;
        case 0x55e4b0u: goto label_55e4b0;
        case 0x55e4b4u: goto label_55e4b4;
        case 0x55e4b8u: goto label_55e4b8;
        case 0x55e4bcu: goto label_55e4bc;
        case 0x55e4c0u: goto label_55e4c0;
        case 0x55e4c4u: goto label_55e4c4;
        case 0x55e4c8u: goto label_55e4c8;
        case 0x55e4ccu: goto label_55e4cc;
        case 0x55e4d0u: goto label_55e4d0;
        case 0x55e4d4u: goto label_55e4d4;
        case 0x55e4d8u: goto label_55e4d8;
        case 0x55e4dcu: goto label_55e4dc;
        case 0x55e4e0u: goto label_55e4e0;
        case 0x55e4e4u: goto label_55e4e4;
        case 0x55e4e8u: goto label_55e4e8;
        case 0x55e4ecu: goto label_55e4ec;
        case 0x55e4f0u: goto label_55e4f0;
        case 0x55e4f4u: goto label_55e4f4;
        case 0x55e4f8u: goto label_55e4f8;
        case 0x55e4fcu: goto label_55e4fc;
        case 0x55e500u: goto label_55e500;
        case 0x55e504u: goto label_55e504;
        case 0x55e508u: goto label_55e508;
        case 0x55e50cu: goto label_55e50c;
        case 0x55e510u: goto label_55e510;
        case 0x55e514u: goto label_55e514;
        case 0x55e518u: goto label_55e518;
        case 0x55e51cu: goto label_55e51c;
        case 0x55e520u: goto label_55e520;
        case 0x55e524u: goto label_55e524;
        case 0x55e528u: goto label_55e528;
        case 0x55e52cu: goto label_55e52c;
        case 0x55e530u: goto label_55e530;
        case 0x55e534u: goto label_55e534;
        case 0x55e538u: goto label_55e538;
        case 0x55e53cu: goto label_55e53c;
        case 0x55e540u: goto label_55e540;
        case 0x55e544u: goto label_55e544;
        case 0x55e548u: goto label_55e548;
        case 0x55e54cu: goto label_55e54c;
        case 0x55e550u: goto label_55e550;
        case 0x55e554u: goto label_55e554;
        case 0x55e558u: goto label_55e558;
        case 0x55e55cu: goto label_55e55c;
        case 0x55e560u: goto label_55e560;
        case 0x55e564u: goto label_55e564;
        case 0x55e568u: goto label_55e568;
        case 0x55e56cu: goto label_55e56c;
        case 0x55e570u: goto label_55e570;
        case 0x55e574u: goto label_55e574;
        case 0x55e578u: goto label_55e578;
        case 0x55e57cu: goto label_55e57c;
        case 0x55e580u: goto label_55e580;
        case 0x55e584u: goto label_55e584;
        case 0x55e588u: goto label_55e588;
        case 0x55e58cu: goto label_55e58c;
        case 0x55e590u: goto label_55e590;
        case 0x55e594u: goto label_55e594;
        case 0x55e598u: goto label_55e598;
        case 0x55e59cu: goto label_55e59c;
        case 0x55e5a0u: goto label_55e5a0;
        case 0x55e5a4u: goto label_55e5a4;
        case 0x55e5a8u: goto label_55e5a8;
        case 0x55e5acu: goto label_55e5ac;
        case 0x55e5b0u: goto label_55e5b0;
        case 0x55e5b4u: goto label_55e5b4;
        case 0x55e5b8u: goto label_55e5b8;
        case 0x55e5bcu: goto label_55e5bc;
        case 0x55e5c0u: goto label_55e5c0;
        case 0x55e5c4u: goto label_55e5c4;
        case 0x55e5c8u: goto label_55e5c8;
        case 0x55e5ccu: goto label_55e5cc;
        case 0x55e5d0u: goto label_55e5d0;
        case 0x55e5d4u: goto label_55e5d4;
        case 0x55e5d8u: goto label_55e5d8;
        case 0x55e5dcu: goto label_55e5dc;
        case 0x55e5e0u: goto label_55e5e0;
        case 0x55e5e4u: goto label_55e5e4;
        case 0x55e5e8u: goto label_55e5e8;
        case 0x55e5ecu: goto label_55e5ec;
        case 0x55e5f0u: goto label_55e5f0;
        case 0x55e5f4u: goto label_55e5f4;
        case 0x55e5f8u: goto label_55e5f8;
        case 0x55e5fcu: goto label_55e5fc;
        case 0x55e600u: goto label_55e600;
        case 0x55e604u: goto label_55e604;
        case 0x55e608u: goto label_55e608;
        case 0x55e60cu: goto label_55e60c;
        case 0x55e610u: goto label_55e610;
        case 0x55e614u: goto label_55e614;
        case 0x55e618u: goto label_55e618;
        case 0x55e61cu: goto label_55e61c;
        case 0x55e620u: goto label_55e620;
        case 0x55e624u: goto label_55e624;
        case 0x55e628u: goto label_55e628;
        case 0x55e62cu: goto label_55e62c;
        case 0x55e630u: goto label_55e630;
        case 0x55e634u: goto label_55e634;
        case 0x55e638u: goto label_55e638;
        case 0x55e63cu: goto label_55e63c;
        case 0x55e640u: goto label_55e640;
        case 0x55e644u: goto label_55e644;
        case 0x55e648u: goto label_55e648;
        case 0x55e64cu: goto label_55e64c;
        case 0x55e650u: goto label_55e650;
        case 0x55e654u: goto label_55e654;
        case 0x55e658u: goto label_55e658;
        case 0x55e65cu: goto label_55e65c;
        case 0x55e660u: goto label_55e660;
        case 0x55e664u: goto label_55e664;
        case 0x55e668u: goto label_55e668;
        case 0x55e66cu: goto label_55e66c;
        case 0x55e670u: goto label_55e670;
        case 0x55e674u: goto label_55e674;
        case 0x55e678u: goto label_55e678;
        case 0x55e67cu: goto label_55e67c;
        case 0x55e680u: goto label_55e680;
        case 0x55e684u: goto label_55e684;
        case 0x55e688u: goto label_55e688;
        case 0x55e68cu: goto label_55e68c;
        case 0x55e690u: goto label_55e690;
        case 0x55e694u: goto label_55e694;
        case 0x55e698u: goto label_55e698;
        case 0x55e69cu: goto label_55e69c;
        case 0x55e6a0u: goto label_55e6a0;
        case 0x55e6a4u: goto label_55e6a4;
        case 0x55e6a8u: goto label_55e6a8;
        case 0x55e6acu: goto label_55e6ac;
        case 0x55e6b0u: goto label_55e6b0;
        case 0x55e6b4u: goto label_55e6b4;
        case 0x55e6b8u: goto label_55e6b8;
        case 0x55e6bcu: goto label_55e6bc;
        case 0x55e6c0u: goto label_55e6c0;
        case 0x55e6c4u: goto label_55e6c4;
        case 0x55e6c8u: goto label_55e6c8;
        case 0x55e6ccu: goto label_55e6cc;
        case 0x55e6d0u: goto label_55e6d0;
        case 0x55e6d4u: goto label_55e6d4;
        case 0x55e6d8u: goto label_55e6d8;
        case 0x55e6dcu: goto label_55e6dc;
        case 0x55e6e0u: goto label_55e6e0;
        case 0x55e6e4u: goto label_55e6e4;
        case 0x55e6e8u: goto label_55e6e8;
        case 0x55e6ecu: goto label_55e6ec;
        case 0x55e6f0u: goto label_55e6f0;
        case 0x55e6f4u: goto label_55e6f4;
        case 0x55e6f8u: goto label_55e6f8;
        case 0x55e6fcu: goto label_55e6fc;
        case 0x55e700u: goto label_55e700;
        case 0x55e704u: goto label_55e704;
        case 0x55e708u: goto label_55e708;
        case 0x55e70cu: goto label_55e70c;
        case 0x55e710u: goto label_55e710;
        case 0x55e714u: goto label_55e714;
        case 0x55e718u: goto label_55e718;
        case 0x55e71cu: goto label_55e71c;
        case 0x55e720u: goto label_55e720;
        case 0x55e724u: goto label_55e724;
        case 0x55e728u: goto label_55e728;
        case 0x55e72cu: goto label_55e72c;
        case 0x55e730u: goto label_55e730;
        case 0x55e734u: goto label_55e734;
        case 0x55e738u: goto label_55e738;
        case 0x55e73cu: goto label_55e73c;
        case 0x55e740u: goto label_55e740;
        case 0x55e744u: goto label_55e744;
        case 0x55e748u: goto label_55e748;
        case 0x55e74cu: goto label_55e74c;
        case 0x55e750u: goto label_55e750;
        case 0x55e754u: goto label_55e754;
        case 0x55e758u: goto label_55e758;
        case 0x55e75cu: goto label_55e75c;
        case 0x55e760u: goto label_55e760;
        case 0x55e764u: goto label_55e764;
        case 0x55e768u: goto label_55e768;
        case 0x55e76cu: goto label_55e76c;
        case 0x55e770u: goto label_55e770;
        case 0x55e774u: goto label_55e774;
        case 0x55e778u: goto label_55e778;
        case 0x55e77cu: goto label_55e77c;
        case 0x55e780u: goto label_55e780;
        case 0x55e784u: goto label_55e784;
        case 0x55e788u: goto label_55e788;
        case 0x55e78cu: goto label_55e78c;
        case 0x55e790u: goto label_55e790;
        case 0x55e794u: goto label_55e794;
        case 0x55e798u: goto label_55e798;
        case 0x55e79cu: goto label_55e79c;
        case 0x55e7a0u: goto label_55e7a0;
        case 0x55e7a4u: goto label_55e7a4;
        case 0x55e7a8u: goto label_55e7a8;
        case 0x55e7acu: goto label_55e7ac;
        case 0x55e7b0u: goto label_55e7b0;
        case 0x55e7b4u: goto label_55e7b4;
        case 0x55e7b8u: goto label_55e7b8;
        case 0x55e7bcu: goto label_55e7bc;
        case 0x55e7c0u: goto label_55e7c0;
        case 0x55e7c4u: goto label_55e7c4;
        case 0x55e7c8u: goto label_55e7c8;
        case 0x55e7ccu: goto label_55e7cc;
        case 0x55e7d0u: goto label_55e7d0;
        case 0x55e7d4u: goto label_55e7d4;
        case 0x55e7d8u: goto label_55e7d8;
        case 0x55e7dcu: goto label_55e7dc;
        case 0x55e7e0u: goto label_55e7e0;
        case 0x55e7e4u: goto label_55e7e4;
        case 0x55e7e8u: goto label_55e7e8;
        case 0x55e7ecu: goto label_55e7ec;
        case 0x55e7f0u: goto label_55e7f0;
        case 0x55e7f4u: goto label_55e7f4;
        case 0x55e7f8u: goto label_55e7f8;
        case 0x55e7fcu: goto label_55e7fc;
        case 0x55e800u: goto label_55e800;
        case 0x55e804u: goto label_55e804;
        case 0x55e808u: goto label_55e808;
        case 0x55e80cu: goto label_55e80c;
        case 0x55e810u: goto label_55e810;
        case 0x55e814u: goto label_55e814;
        case 0x55e818u: goto label_55e818;
        case 0x55e81cu: goto label_55e81c;
        case 0x55e820u: goto label_55e820;
        case 0x55e824u: goto label_55e824;
        case 0x55e828u: goto label_55e828;
        case 0x55e82cu: goto label_55e82c;
        case 0x55e830u: goto label_55e830;
        case 0x55e834u: goto label_55e834;
        case 0x55e838u: goto label_55e838;
        case 0x55e83cu: goto label_55e83c;
        case 0x55e840u: goto label_55e840;
        case 0x55e844u: goto label_55e844;
        case 0x55e848u: goto label_55e848;
        case 0x55e84cu: goto label_55e84c;
        case 0x55e850u: goto label_55e850;
        case 0x55e854u: goto label_55e854;
        case 0x55e858u: goto label_55e858;
        case 0x55e85cu: goto label_55e85c;
        case 0x55e860u: goto label_55e860;
        case 0x55e864u: goto label_55e864;
        case 0x55e868u: goto label_55e868;
        case 0x55e86cu: goto label_55e86c;
        case 0x55e870u: goto label_55e870;
        case 0x55e874u: goto label_55e874;
        case 0x55e878u: goto label_55e878;
        case 0x55e87cu: goto label_55e87c;
        case 0x55e880u: goto label_55e880;
        case 0x55e884u: goto label_55e884;
        case 0x55e888u: goto label_55e888;
        case 0x55e88cu: goto label_55e88c;
        case 0x55e890u: goto label_55e890;
        case 0x55e894u: goto label_55e894;
        case 0x55e898u: goto label_55e898;
        case 0x55e89cu: goto label_55e89c;
        case 0x55e8a0u: goto label_55e8a0;
        case 0x55e8a4u: goto label_55e8a4;
        case 0x55e8a8u: goto label_55e8a8;
        case 0x55e8acu: goto label_55e8ac;
        case 0x55e8b0u: goto label_55e8b0;
        case 0x55e8b4u: goto label_55e8b4;
        case 0x55e8b8u: goto label_55e8b8;
        case 0x55e8bcu: goto label_55e8bc;
        case 0x55e8c0u: goto label_55e8c0;
        case 0x55e8c4u: goto label_55e8c4;
        case 0x55e8c8u: goto label_55e8c8;
        case 0x55e8ccu: goto label_55e8cc;
        case 0x55e8d0u: goto label_55e8d0;
        case 0x55e8d4u: goto label_55e8d4;
        case 0x55e8d8u: goto label_55e8d8;
        case 0x55e8dcu: goto label_55e8dc;
        case 0x55e8e0u: goto label_55e8e0;
        case 0x55e8e4u: goto label_55e8e4;
        case 0x55e8e8u: goto label_55e8e8;
        case 0x55e8ecu: goto label_55e8ec;
        case 0x55e8f0u: goto label_55e8f0;
        case 0x55e8f4u: goto label_55e8f4;
        case 0x55e8f8u: goto label_55e8f8;
        case 0x55e8fcu: goto label_55e8fc;
        case 0x55e900u: goto label_55e900;
        case 0x55e904u: goto label_55e904;
        case 0x55e908u: goto label_55e908;
        case 0x55e90cu: goto label_55e90c;
        case 0x55e910u: goto label_55e910;
        case 0x55e914u: goto label_55e914;
        case 0x55e918u: goto label_55e918;
        case 0x55e91cu: goto label_55e91c;
        case 0x55e920u: goto label_55e920;
        case 0x55e924u: goto label_55e924;
        case 0x55e928u: goto label_55e928;
        case 0x55e92cu: goto label_55e92c;
        case 0x55e930u: goto label_55e930;
        case 0x55e934u: goto label_55e934;
        case 0x55e938u: goto label_55e938;
        case 0x55e93cu: goto label_55e93c;
        case 0x55e940u: goto label_55e940;
        case 0x55e944u: goto label_55e944;
        case 0x55e948u: goto label_55e948;
        case 0x55e94cu: goto label_55e94c;
        case 0x55e950u: goto label_55e950;
        case 0x55e954u: goto label_55e954;
        case 0x55e958u: goto label_55e958;
        case 0x55e95cu: goto label_55e95c;
        case 0x55e960u: goto label_55e960;
        case 0x55e964u: goto label_55e964;
        case 0x55e968u: goto label_55e968;
        case 0x55e96cu: goto label_55e96c;
        case 0x55e970u: goto label_55e970;
        case 0x55e974u: goto label_55e974;
        case 0x55e978u: goto label_55e978;
        case 0x55e97cu: goto label_55e97c;
        case 0x55e980u: goto label_55e980;
        case 0x55e984u: goto label_55e984;
        case 0x55e988u: goto label_55e988;
        case 0x55e98cu: goto label_55e98c;
        case 0x55e990u: goto label_55e990;
        case 0x55e994u: goto label_55e994;
        case 0x55e998u: goto label_55e998;
        case 0x55e99cu: goto label_55e99c;
        case 0x55e9a0u: goto label_55e9a0;
        case 0x55e9a4u: goto label_55e9a4;
        case 0x55e9a8u: goto label_55e9a8;
        case 0x55e9acu: goto label_55e9ac;
        case 0x55e9b0u: goto label_55e9b0;
        case 0x55e9b4u: goto label_55e9b4;
        case 0x55e9b8u: goto label_55e9b8;
        case 0x55e9bcu: goto label_55e9bc;
        case 0x55e9c0u: goto label_55e9c0;
        case 0x55e9c4u: goto label_55e9c4;
        case 0x55e9c8u: goto label_55e9c8;
        case 0x55e9ccu: goto label_55e9cc;
        case 0x55e9d0u: goto label_55e9d0;
        case 0x55e9d4u: goto label_55e9d4;
        case 0x55e9d8u: goto label_55e9d8;
        case 0x55e9dcu: goto label_55e9dc;
        case 0x55e9e0u: goto label_55e9e0;
        case 0x55e9e4u: goto label_55e9e4;
        case 0x55e9e8u: goto label_55e9e8;
        case 0x55e9ecu: goto label_55e9ec;
        case 0x55e9f0u: goto label_55e9f0;
        case 0x55e9f4u: goto label_55e9f4;
        case 0x55e9f8u: goto label_55e9f8;
        case 0x55e9fcu: goto label_55e9fc;
        case 0x55ea00u: goto label_55ea00;
        case 0x55ea04u: goto label_55ea04;
        case 0x55ea08u: goto label_55ea08;
        case 0x55ea0cu: goto label_55ea0c;
        case 0x55ea10u: goto label_55ea10;
        case 0x55ea14u: goto label_55ea14;
        case 0x55ea18u: goto label_55ea18;
        case 0x55ea1cu: goto label_55ea1c;
        case 0x55ea20u: goto label_55ea20;
        case 0x55ea24u: goto label_55ea24;
        case 0x55ea28u: goto label_55ea28;
        case 0x55ea2cu: goto label_55ea2c;
        case 0x55ea30u: goto label_55ea30;
        case 0x55ea34u: goto label_55ea34;
        case 0x55ea38u: goto label_55ea38;
        case 0x55ea3cu: goto label_55ea3c;
        case 0x55ea40u: goto label_55ea40;
        case 0x55ea44u: goto label_55ea44;
        case 0x55ea48u: goto label_55ea48;
        case 0x55ea4cu: goto label_55ea4c;
        case 0x55ea50u: goto label_55ea50;
        case 0x55ea54u: goto label_55ea54;
        case 0x55ea58u: goto label_55ea58;
        case 0x55ea5cu: goto label_55ea5c;
        case 0x55ea60u: goto label_55ea60;
        case 0x55ea64u: goto label_55ea64;
        case 0x55ea68u: goto label_55ea68;
        case 0x55ea6cu: goto label_55ea6c;
        case 0x55ea70u: goto label_55ea70;
        case 0x55ea74u: goto label_55ea74;
        case 0x55ea78u: goto label_55ea78;
        case 0x55ea7cu: goto label_55ea7c;
        case 0x55ea80u: goto label_55ea80;
        case 0x55ea84u: goto label_55ea84;
        case 0x55ea88u: goto label_55ea88;
        case 0x55ea8cu: goto label_55ea8c;
        case 0x55ea90u: goto label_55ea90;
        case 0x55ea94u: goto label_55ea94;
        case 0x55ea98u: goto label_55ea98;
        case 0x55ea9cu: goto label_55ea9c;
        case 0x55eaa0u: goto label_55eaa0;
        case 0x55eaa4u: goto label_55eaa4;
        case 0x55eaa8u: goto label_55eaa8;
        case 0x55eaacu: goto label_55eaac;
        case 0x55eab0u: goto label_55eab0;
        case 0x55eab4u: goto label_55eab4;
        case 0x55eab8u: goto label_55eab8;
        case 0x55eabcu: goto label_55eabc;
        case 0x55eac0u: goto label_55eac0;
        case 0x55eac4u: goto label_55eac4;
        case 0x55eac8u: goto label_55eac8;
        case 0x55eaccu: goto label_55eacc;
        case 0x55ead0u: goto label_55ead0;
        case 0x55ead4u: goto label_55ead4;
        case 0x55ead8u: goto label_55ead8;
        case 0x55eadcu: goto label_55eadc;
        case 0x55eae0u: goto label_55eae0;
        case 0x55eae4u: goto label_55eae4;
        case 0x55eae8u: goto label_55eae8;
        case 0x55eaecu: goto label_55eaec;
        case 0x55eaf0u: goto label_55eaf0;
        case 0x55eaf4u: goto label_55eaf4;
        case 0x55eaf8u: goto label_55eaf8;
        case 0x55eafcu: goto label_55eafc;
        case 0x55eb00u: goto label_55eb00;
        case 0x55eb04u: goto label_55eb04;
        case 0x55eb08u: goto label_55eb08;
        case 0x55eb0cu: goto label_55eb0c;
        case 0x55eb10u: goto label_55eb10;
        case 0x55eb14u: goto label_55eb14;
        case 0x55eb18u: goto label_55eb18;
        case 0x55eb1cu: goto label_55eb1c;
        case 0x55eb20u: goto label_55eb20;
        case 0x55eb24u: goto label_55eb24;
        case 0x55eb28u: goto label_55eb28;
        case 0x55eb2cu: goto label_55eb2c;
        case 0x55eb30u: goto label_55eb30;
        case 0x55eb34u: goto label_55eb34;
        case 0x55eb38u: goto label_55eb38;
        case 0x55eb3cu: goto label_55eb3c;
        case 0x55eb40u: goto label_55eb40;
        case 0x55eb44u: goto label_55eb44;
        case 0x55eb48u: goto label_55eb48;
        case 0x55eb4cu: goto label_55eb4c;
        case 0x55eb50u: goto label_55eb50;
        case 0x55eb54u: goto label_55eb54;
        case 0x55eb58u: goto label_55eb58;
        case 0x55eb5cu: goto label_55eb5c;
        case 0x55eb60u: goto label_55eb60;
        case 0x55eb64u: goto label_55eb64;
        case 0x55eb68u: goto label_55eb68;
        case 0x55eb6cu: goto label_55eb6c;
        case 0x55eb70u: goto label_55eb70;
        case 0x55eb74u: goto label_55eb74;
        case 0x55eb78u: goto label_55eb78;
        case 0x55eb7cu: goto label_55eb7c;
        case 0x55eb80u: goto label_55eb80;
        case 0x55eb84u: goto label_55eb84;
        case 0x55eb88u: goto label_55eb88;
        case 0x55eb8cu: goto label_55eb8c;
        case 0x55eb90u: goto label_55eb90;
        case 0x55eb94u: goto label_55eb94;
        case 0x55eb98u: goto label_55eb98;
        case 0x55eb9cu: goto label_55eb9c;
        case 0x55eba0u: goto label_55eba0;
        case 0x55eba4u: goto label_55eba4;
        case 0x55eba8u: goto label_55eba8;
        case 0x55ebacu: goto label_55ebac;
        case 0x55ebb0u: goto label_55ebb0;
        case 0x55ebb4u: goto label_55ebb4;
        case 0x55ebb8u: goto label_55ebb8;
        case 0x55ebbcu: goto label_55ebbc;
        case 0x55ebc0u: goto label_55ebc0;
        case 0x55ebc4u: goto label_55ebc4;
        case 0x55ebc8u: goto label_55ebc8;
        case 0x55ebccu: goto label_55ebcc;
        case 0x55ebd0u: goto label_55ebd0;
        case 0x55ebd4u: goto label_55ebd4;
        case 0x55ebd8u: goto label_55ebd8;
        case 0x55ebdcu: goto label_55ebdc;
        case 0x55ebe0u: goto label_55ebe0;
        case 0x55ebe4u: goto label_55ebe4;
        case 0x55ebe8u: goto label_55ebe8;
        case 0x55ebecu: goto label_55ebec;
        case 0x55ebf0u: goto label_55ebf0;
        case 0x55ebf4u: goto label_55ebf4;
        case 0x55ebf8u: goto label_55ebf8;
        case 0x55ebfcu: goto label_55ebfc;
        case 0x55ec00u: goto label_55ec00;
        case 0x55ec04u: goto label_55ec04;
        case 0x55ec08u: goto label_55ec08;
        case 0x55ec0cu: goto label_55ec0c;
        case 0x55ec10u: goto label_55ec10;
        case 0x55ec14u: goto label_55ec14;
        case 0x55ec18u: goto label_55ec18;
        case 0x55ec1cu: goto label_55ec1c;
        case 0x55ec20u: goto label_55ec20;
        case 0x55ec24u: goto label_55ec24;
        case 0x55ec28u: goto label_55ec28;
        case 0x55ec2cu: goto label_55ec2c;
        case 0x55ec30u: goto label_55ec30;
        case 0x55ec34u: goto label_55ec34;
        case 0x55ec38u: goto label_55ec38;
        case 0x55ec3cu: goto label_55ec3c;
        case 0x55ec40u: goto label_55ec40;
        case 0x55ec44u: goto label_55ec44;
        case 0x55ec48u: goto label_55ec48;
        case 0x55ec4cu: goto label_55ec4c;
        case 0x55ec50u: goto label_55ec50;
        case 0x55ec54u: goto label_55ec54;
        case 0x55ec58u: goto label_55ec58;
        case 0x55ec5cu: goto label_55ec5c;
        case 0x55ec60u: goto label_55ec60;
        case 0x55ec64u: goto label_55ec64;
        case 0x55ec68u: goto label_55ec68;
        case 0x55ec6cu: goto label_55ec6c;
        case 0x55ec70u: goto label_55ec70;
        case 0x55ec74u: goto label_55ec74;
        case 0x55ec78u: goto label_55ec78;
        case 0x55ec7cu: goto label_55ec7c;
        case 0x55ec80u: goto label_55ec80;
        case 0x55ec84u: goto label_55ec84;
        case 0x55ec88u: goto label_55ec88;
        case 0x55ec8cu: goto label_55ec8c;
        case 0x55ec90u: goto label_55ec90;
        case 0x55ec94u: goto label_55ec94;
        case 0x55ec98u: goto label_55ec98;
        case 0x55ec9cu: goto label_55ec9c;
        case 0x55eca0u: goto label_55eca0;
        case 0x55eca4u: goto label_55eca4;
        case 0x55eca8u: goto label_55eca8;
        case 0x55ecacu: goto label_55ecac;
        case 0x55ecb0u: goto label_55ecb0;
        case 0x55ecb4u: goto label_55ecb4;
        case 0x55ecb8u: goto label_55ecb8;
        case 0x55ecbcu: goto label_55ecbc;
        case 0x55ecc0u: goto label_55ecc0;
        case 0x55ecc4u: goto label_55ecc4;
        case 0x55ecc8u: goto label_55ecc8;
        case 0x55ecccu: goto label_55eccc;
        case 0x55ecd0u: goto label_55ecd0;
        case 0x55ecd4u: goto label_55ecd4;
        case 0x55ecd8u: goto label_55ecd8;
        case 0x55ecdcu: goto label_55ecdc;
        case 0x55ece0u: goto label_55ece0;
        case 0x55ece4u: goto label_55ece4;
        case 0x55ece8u: goto label_55ece8;
        case 0x55ececu: goto label_55ecec;
        case 0x55ecf0u: goto label_55ecf0;
        case 0x55ecf4u: goto label_55ecf4;
        case 0x55ecf8u: goto label_55ecf8;
        case 0x55ecfcu: goto label_55ecfc;
        case 0x55ed00u: goto label_55ed00;
        case 0x55ed04u: goto label_55ed04;
        case 0x55ed08u: goto label_55ed08;
        case 0x55ed0cu: goto label_55ed0c;
        case 0x55ed10u: goto label_55ed10;
        case 0x55ed14u: goto label_55ed14;
        case 0x55ed18u: goto label_55ed18;
        case 0x55ed1cu: goto label_55ed1c;
        case 0x55ed20u: goto label_55ed20;
        case 0x55ed24u: goto label_55ed24;
        case 0x55ed28u: goto label_55ed28;
        case 0x55ed2cu: goto label_55ed2c;
        case 0x55ed30u: goto label_55ed30;
        case 0x55ed34u: goto label_55ed34;
        case 0x55ed38u: goto label_55ed38;
        case 0x55ed3cu: goto label_55ed3c;
        case 0x55ed40u: goto label_55ed40;
        case 0x55ed44u: goto label_55ed44;
        case 0x55ed48u: goto label_55ed48;
        case 0x55ed4cu: goto label_55ed4c;
        case 0x55ed50u: goto label_55ed50;
        case 0x55ed54u: goto label_55ed54;
        case 0x55ed58u: goto label_55ed58;
        case 0x55ed5cu: goto label_55ed5c;
        case 0x55ed60u: goto label_55ed60;
        case 0x55ed64u: goto label_55ed64;
        case 0x55ed68u: goto label_55ed68;
        case 0x55ed6cu: goto label_55ed6c;
        case 0x55ed70u: goto label_55ed70;
        case 0x55ed74u: goto label_55ed74;
        case 0x55ed78u: goto label_55ed78;
        case 0x55ed7cu: goto label_55ed7c;
        case 0x55ed80u: goto label_55ed80;
        case 0x55ed84u: goto label_55ed84;
        case 0x55ed88u: goto label_55ed88;
        case 0x55ed8cu: goto label_55ed8c;
        case 0x55ed90u: goto label_55ed90;
        case 0x55ed94u: goto label_55ed94;
        case 0x55ed98u: goto label_55ed98;
        case 0x55ed9cu: goto label_55ed9c;
        case 0x55eda0u: goto label_55eda0;
        case 0x55eda4u: goto label_55eda4;
        case 0x55eda8u: goto label_55eda8;
        case 0x55edacu: goto label_55edac;
        case 0x55edb0u: goto label_55edb0;
        case 0x55edb4u: goto label_55edb4;
        case 0x55edb8u: goto label_55edb8;
        case 0x55edbcu: goto label_55edbc;
        case 0x55edc0u: goto label_55edc0;
        case 0x55edc4u: goto label_55edc4;
        case 0x55edc8u: goto label_55edc8;
        case 0x55edccu: goto label_55edcc;
        case 0x55edd0u: goto label_55edd0;
        case 0x55edd4u: goto label_55edd4;
        case 0x55edd8u: goto label_55edd8;
        case 0x55eddcu: goto label_55eddc;
        case 0x55ede0u: goto label_55ede0;
        case 0x55ede4u: goto label_55ede4;
        case 0x55ede8u: goto label_55ede8;
        case 0x55edecu: goto label_55edec;
        case 0x55edf0u: goto label_55edf0;
        case 0x55edf4u: goto label_55edf4;
        case 0x55edf8u: goto label_55edf8;
        case 0x55edfcu: goto label_55edfc;
        case 0x55ee00u: goto label_55ee00;
        case 0x55ee04u: goto label_55ee04;
        case 0x55ee08u: goto label_55ee08;
        case 0x55ee0cu: goto label_55ee0c;
        case 0x55ee10u: goto label_55ee10;
        case 0x55ee14u: goto label_55ee14;
        case 0x55ee18u: goto label_55ee18;
        case 0x55ee1cu: goto label_55ee1c;
        case 0x55ee20u: goto label_55ee20;
        case 0x55ee24u: goto label_55ee24;
        case 0x55ee28u: goto label_55ee28;
        case 0x55ee2cu: goto label_55ee2c;
        case 0x55ee30u: goto label_55ee30;
        case 0x55ee34u: goto label_55ee34;
        case 0x55ee38u: goto label_55ee38;
        case 0x55ee3cu: goto label_55ee3c;
        case 0x55ee40u: goto label_55ee40;
        case 0x55ee44u: goto label_55ee44;
        case 0x55ee48u: goto label_55ee48;
        case 0x55ee4cu: goto label_55ee4c;
        case 0x55ee50u: goto label_55ee50;
        case 0x55ee54u: goto label_55ee54;
        case 0x55ee58u: goto label_55ee58;
        case 0x55ee5cu: goto label_55ee5c;
        case 0x55ee60u: goto label_55ee60;
        case 0x55ee64u: goto label_55ee64;
        case 0x55ee68u: goto label_55ee68;
        case 0x55ee6cu: goto label_55ee6c;
        case 0x55ee70u: goto label_55ee70;
        case 0x55ee74u: goto label_55ee74;
        case 0x55ee78u: goto label_55ee78;
        case 0x55ee7cu: goto label_55ee7c;
        case 0x55ee80u: goto label_55ee80;
        case 0x55ee84u: goto label_55ee84;
        case 0x55ee88u: goto label_55ee88;
        case 0x55ee8cu: goto label_55ee8c;
        case 0x55ee90u: goto label_55ee90;
        case 0x55ee94u: goto label_55ee94;
        case 0x55ee98u: goto label_55ee98;
        case 0x55ee9cu: goto label_55ee9c;
        case 0x55eea0u: goto label_55eea0;
        case 0x55eea4u: goto label_55eea4;
        case 0x55eea8u: goto label_55eea8;
        case 0x55eeacu: goto label_55eeac;
        case 0x55eeb0u: goto label_55eeb0;
        case 0x55eeb4u: goto label_55eeb4;
        case 0x55eeb8u: goto label_55eeb8;
        case 0x55eebcu: goto label_55eebc;
        case 0x55eec0u: goto label_55eec0;
        case 0x55eec4u: goto label_55eec4;
        case 0x55eec8u: goto label_55eec8;
        case 0x55eeccu: goto label_55eecc;
        case 0x55eed0u: goto label_55eed0;
        case 0x55eed4u: goto label_55eed4;
        case 0x55eed8u: goto label_55eed8;
        case 0x55eedcu: goto label_55eedc;
        case 0x55eee0u: goto label_55eee0;
        case 0x55eee4u: goto label_55eee4;
        case 0x55eee8u: goto label_55eee8;
        case 0x55eeecu: goto label_55eeec;
        case 0x55eef0u: goto label_55eef0;
        case 0x55eef4u: goto label_55eef4;
        case 0x55eef8u: goto label_55eef8;
        case 0x55eefcu: goto label_55eefc;
        case 0x55ef00u: goto label_55ef00;
        case 0x55ef04u: goto label_55ef04;
        case 0x55ef08u: goto label_55ef08;
        case 0x55ef0cu: goto label_55ef0c;
        case 0x55ef10u: goto label_55ef10;
        case 0x55ef14u: goto label_55ef14;
        case 0x55ef18u: goto label_55ef18;
        case 0x55ef1cu: goto label_55ef1c;
        case 0x55ef20u: goto label_55ef20;
        case 0x55ef24u: goto label_55ef24;
        case 0x55ef28u: goto label_55ef28;
        case 0x55ef2cu: goto label_55ef2c;
        case 0x55ef30u: goto label_55ef30;
        case 0x55ef34u: goto label_55ef34;
        case 0x55ef38u: goto label_55ef38;
        case 0x55ef3cu: goto label_55ef3c;
        case 0x55ef40u: goto label_55ef40;
        case 0x55ef44u: goto label_55ef44;
        case 0x55ef48u: goto label_55ef48;
        case 0x55ef4cu: goto label_55ef4c;
        case 0x55ef50u: goto label_55ef50;
        case 0x55ef54u: goto label_55ef54;
        case 0x55ef58u: goto label_55ef58;
        case 0x55ef5cu: goto label_55ef5c;
        case 0x55ef60u: goto label_55ef60;
        case 0x55ef64u: goto label_55ef64;
        case 0x55ef68u: goto label_55ef68;
        case 0x55ef6cu: goto label_55ef6c;
        case 0x55ef70u: goto label_55ef70;
        case 0x55ef74u: goto label_55ef74;
        case 0x55ef78u: goto label_55ef78;
        case 0x55ef7cu: goto label_55ef7c;
        case 0x55ef80u: goto label_55ef80;
        case 0x55ef84u: goto label_55ef84;
        case 0x55ef88u: goto label_55ef88;
        case 0x55ef8cu: goto label_55ef8c;
        case 0x55ef90u: goto label_55ef90;
        case 0x55ef94u: goto label_55ef94;
        case 0x55ef98u: goto label_55ef98;
        case 0x55ef9cu: goto label_55ef9c;
        case 0x55efa0u: goto label_55efa0;
        case 0x55efa4u: goto label_55efa4;
        case 0x55efa8u: goto label_55efa8;
        case 0x55efacu: goto label_55efac;
        case 0x55efb0u: goto label_55efb0;
        case 0x55efb4u: goto label_55efb4;
        case 0x55efb8u: goto label_55efb8;
        case 0x55efbcu: goto label_55efbc;
        case 0x55efc0u: goto label_55efc0;
        case 0x55efc4u: goto label_55efc4;
        case 0x55efc8u: goto label_55efc8;
        case 0x55efccu: goto label_55efcc;
        case 0x55efd0u: goto label_55efd0;
        case 0x55efd4u: goto label_55efd4;
        case 0x55efd8u: goto label_55efd8;
        case 0x55efdcu: goto label_55efdc;
        case 0x55efe0u: goto label_55efe0;
        case 0x55efe4u: goto label_55efe4;
        case 0x55efe8u: goto label_55efe8;
        case 0x55efecu: goto label_55efec;
        case 0x55eff0u: goto label_55eff0;
        case 0x55eff4u: goto label_55eff4;
        case 0x55eff8u: goto label_55eff8;
        case 0x55effcu: goto label_55effc;
        case 0x55f000u: goto label_55f000;
        case 0x55f004u: goto label_55f004;
        case 0x55f008u: goto label_55f008;
        case 0x55f00cu: goto label_55f00c;
        case 0x55f010u: goto label_55f010;
        case 0x55f014u: goto label_55f014;
        case 0x55f018u: goto label_55f018;
        case 0x55f01cu: goto label_55f01c;
        case 0x55f020u: goto label_55f020;
        case 0x55f024u: goto label_55f024;
        case 0x55f028u: goto label_55f028;
        case 0x55f02cu: goto label_55f02c;
        case 0x55f030u: goto label_55f030;
        case 0x55f034u: goto label_55f034;
        case 0x55f038u: goto label_55f038;
        case 0x55f03cu: goto label_55f03c;
        case 0x55f040u: goto label_55f040;
        case 0x55f044u: goto label_55f044;
        case 0x55f048u: goto label_55f048;
        case 0x55f04cu: goto label_55f04c;
        case 0x55f050u: goto label_55f050;
        case 0x55f054u: goto label_55f054;
        case 0x55f058u: goto label_55f058;
        case 0x55f05cu: goto label_55f05c;
        case 0x55f060u: goto label_55f060;
        case 0x55f064u: goto label_55f064;
        case 0x55f068u: goto label_55f068;
        case 0x55f06cu: goto label_55f06c;
        case 0x55f070u: goto label_55f070;
        case 0x55f074u: goto label_55f074;
        case 0x55f078u: goto label_55f078;
        case 0x55f07cu: goto label_55f07c;
        case 0x55f080u: goto label_55f080;
        case 0x55f084u: goto label_55f084;
        case 0x55f088u: goto label_55f088;
        case 0x55f08cu: goto label_55f08c;
        case 0x55f090u: goto label_55f090;
        case 0x55f094u: goto label_55f094;
        case 0x55f098u: goto label_55f098;
        case 0x55f09cu: goto label_55f09c;
        case 0x55f0a0u: goto label_55f0a0;
        case 0x55f0a4u: goto label_55f0a4;
        case 0x55f0a8u: goto label_55f0a8;
        case 0x55f0acu: goto label_55f0ac;
        case 0x55f0b0u: goto label_55f0b0;
        case 0x55f0b4u: goto label_55f0b4;
        case 0x55f0b8u: goto label_55f0b8;
        case 0x55f0bcu: goto label_55f0bc;
        case 0x55f0c0u: goto label_55f0c0;
        case 0x55f0c4u: goto label_55f0c4;
        case 0x55f0c8u: goto label_55f0c8;
        case 0x55f0ccu: goto label_55f0cc;
        case 0x55f0d0u: goto label_55f0d0;
        case 0x55f0d4u: goto label_55f0d4;
        case 0x55f0d8u: goto label_55f0d8;
        case 0x55f0dcu: goto label_55f0dc;
        case 0x55f0e0u: goto label_55f0e0;
        case 0x55f0e4u: goto label_55f0e4;
        case 0x55f0e8u: goto label_55f0e8;
        case 0x55f0ecu: goto label_55f0ec;
        case 0x55f0f0u: goto label_55f0f0;
        case 0x55f0f4u: goto label_55f0f4;
        case 0x55f0f8u: goto label_55f0f8;
        case 0x55f0fcu: goto label_55f0fc;
        case 0x55f100u: goto label_55f100;
        case 0x55f104u: goto label_55f104;
        case 0x55f108u: goto label_55f108;
        case 0x55f10cu: goto label_55f10c;
        case 0x55f110u: goto label_55f110;
        case 0x55f114u: goto label_55f114;
        case 0x55f118u: goto label_55f118;
        case 0x55f11cu: goto label_55f11c;
        case 0x55f120u: goto label_55f120;
        case 0x55f124u: goto label_55f124;
        case 0x55f128u: goto label_55f128;
        case 0x55f12cu: goto label_55f12c;
        case 0x55f130u: goto label_55f130;
        case 0x55f134u: goto label_55f134;
        case 0x55f138u: goto label_55f138;
        case 0x55f13cu: goto label_55f13c;
        case 0x55f140u: goto label_55f140;
        case 0x55f144u: goto label_55f144;
        case 0x55f148u: goto label_55f148;
        case 0x55f14cu: goto label_55f14c;
        case 0x55f150u: goto label_55f150;
        case 0x55f154u: goto label_55f154;
        case 0x55f158u: goto label_55f158;
        case 0x55f15cu: goto label_55f15c;
        case 0x55f160u: goto label_55f160;
        case 0x55f164u: goto label_55f164;
        case 0x55f168u: goto label_55f168;
        case 0x55f16cu: goto label_55f16c;
        case 0x55f170u: goto label_55f170;
        case 0x55f174u: goto label_55f174;
        case 0x55f178u: goto label_55f178;
        case 0x55f17cu: goto label_55f17c;
        case 0x55f180u: goto label_55f180;
        case 0x55f184u: goto label_55f184;
        case 0x55f188u: goto label_55f188;
        case 0x55f18cu: goto label_55f18c;
        case 0x55f190u: goto label_55f190;
        case 0x55f194u: goto label_55f194;
        case 0x55f198u: goto label_55f198;
        case 0x55f19cu: goto label_55f19c;
        case 0x55f1a0u: goto label_55f1a0;
        case 0x55f1a4u: goto label_55f1a4;
        case 0x55f1a8u: goto label_55f1a8;
        case 0x55f1acu: goto label_55f1ac;
        case 0x55f1b0u: goto label_55f1b0;
        case 0x55f1b4u: goto label_55f1b4;
        case 0x55f1b8u: goto label_55f1b8;
        case 0x55f1bcu: goto label_55f1bc;
        default: break;
    }

    ctx->pc = 0x55e490u;

label_55e490:
    // 0x55e490: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x55e490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
label_55e494:
    // 0x55e494: 0x3c02bd4c  lui         $v0, 0xBD4C
    ctx->pc = 0x55e494u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48460 << 16));
label_55e498:
    // 0x55e498: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x55e498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_55e49c:
    // 0x55e49c: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x55e49cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_55e4a0:
    // 0x55e4a0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x55e4a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_55e4a4:
    // 0x55e4a4: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x55e4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
label_55e4a8:
    // 0x55e4a8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x55e4a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_55e4ac:
    // 0x55e4ac: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x55e4acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_55e4b0:
    // 0x55e4b0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x55e4b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_55e4b4:
    // 0x55e4b4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x55e4b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_55e4b8:
    // 0x55e4b8: 0x8c910054  lw          $s1, 0x54($a0)
    ctx->pc = 0x55e4b8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
label_55e4bc:
    // 0x55e4bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x55e4bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_55e4c0:
    // 0x55e4c0: 0xafa30168  sw          $v1, 0x168($sp)
    ctx->pc = 0x55e4c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 360), GPR_U32(ctx, 3));
label_55e4c4:
    // 0x55e4c4: 0xafa20158  sw          $v0, 0x158($sp)
    ctx->pc = 0x55e4c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 2));
label_55e4c8:
    // 0x55e4c8: 0xafa00160  sw          $zero, 0x160($sp)
    ctx->pc = 0x55e4c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 0));
label_55e4cc:
    // 0x55e4cc: 0xafa00164  sw          $zero, 0x164($sp)
    ctx->pc = 0x55e4ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 356), GPR_U32(ctx, 0));
label_55e4d0:
    // 0x55e4d0: 0xafa0016c  sw          $zero, 0x16C($sp)
    ctx->pc = 0x55e4d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 364), GPR_U32(ctx, 0));
label_55e4d4:
    // 0x55e4d4: 0xafa00150  sw          $zero, 0x150($sp)
    ctx->pc = 0x55e4d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 0));
label_55e4d8:
    // 0x55e4d8: 0xafa00154  sw          $zero, 0x154($sp)
    ctx->pc = 0x55e4d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 0));
label_55e4dc:
    // 0x55e4dc: 0xafa0015c  sw          $zero, 0x15C($sp)
    ctx->pc = 0x55e4dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 0));
label_55e4e0:
    // 0x55e4e0: 0x8c820288  lw          $v0, 0x288($a0)
    ctx->pc = 0x55e4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 648)));
label_55e4e4:
    // 0x55e4e4: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x55e4e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
label_55e4e8:
    // 0x55e4e8: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x55e4e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_55e4ec:
    // 0x55e4ec: 0x2841000b  slti        $at, $v0, 0xB
    ctx->pc = 0x55e4ecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)11) ? 1 : 0);
label_55e4f0:
    // 0x55e4f0: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
label_55e4f4:
    if (ctx->pc == 0x55E4F4u) {
        ctx->pc = 0x55E4F4u;
            // 0x55e4f4: 0x263208e0  addiu       $s2, $s1, 0x8E0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 2272));
        ctx->pc = 0x55E4F8u;
        goto label_55e4f8;
    }
    ctx->pc = 0x55E4F0u;
    {
        const bool branch_taken_0x55e4f0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x55E4F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55E4F0u;
            // 0x55e4f4: 0x263208e0  addiu       $s2, $s1, 0x8E0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 2272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x55e4f0) {
            ctx->pc = 0x55E514u;
            goto label_55e514;
        }
    }
    ctx->pc = 0x55E4F8u;
label_55e4f8:
    // 0x55e4f8: 0x22840  sll         $a1, $v0, 1
    ctx->pc = 0x55e4f8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_55e4fc:
    // 0x55e4fc: 0x28a1000c  slti        $at, $a1, 0xC
    ctx->pc = 0x55e4fcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)12) ? 1 : 0);
label_55e500:
    // 0x55e500: 0x54200001  bnel        $at, $zero, . + 4 + (0x1 << 2)
label_55e504:
    if (ctx->pc == 0x55E504u) {
        ctx->pc = 0x55E504u;
            // 0x55e504: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->pc = 0x55E508u;
        goto label_55e508;
    }
    ctx->pc = 0x55E500u;
    {
        const bool branch_taken_0x55e500 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x55e500) {
            ctx->pc = 0x55E504u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x55E500u;
            // 0x55e504: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
            ctx->pc = 0x55E508u;
            goto label_55e508;
        }
    }
    ctx->pc = 0x55E508u;
label_55e508:
    // 0x55e508: 0x26040280  addiu       $a0, $s0, 0x280
    ctx->pc = 0x55e508u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 640));
label_55e50c:
    // 0x55e50c: 0xc0a725c  jal         func_29C970
label_55e510:
    if (ctx->pc == 0x55E510u) {
        ctx->pc = 0x55E510u;
            // 0x55e510: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x55E514u;
        goto label_55e514;
    }
    ctx->pc = 0x55E50Cu;
    SET_GPR_U32(ctx, 31, 0x55E514u);
    ctx->pc = 0x55E510u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55E50Cu;
            // 0x55e510: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29C970u;
    if (runtime->hasFunction(0x29C970u)) {
        auto targetFn = runtime->lookupFunction(0x29C970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55E514u; }
        if (ctx->pc != 0x55E514u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029C970_0x29c970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55E514u; }
        if (ctx->pc != 0x55E514u) { return; }
    }
    ctx->pc = 0x55E514u;
label_55e514:
    // 0x55e514: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x55e514u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_55e518:
    // 0x55e518: 0x24050034  addiu       $a1, $zero, 0x34
    ctx->pc = 0x55e518u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_55e51c:
    // 0x55e51c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x55e51cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_55e520:
    // 0x55e520: 0xc0a7a88  jal         func_29EA20
label_55e524:
    if (ctx->pc == 0x55E524u) {
        ctx->pc = 0x55E524u;
            // 0x55e524: 0x2406002a  addiu       $a2, $zero, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
        ctx->pc = 0x55E528u;
        goto label_55e528;
    }
    ctx->pc = 0x55E520u;
    SET_GPR_U32(ctx, 31, 0x55E528u);
    ctx->pc = 0x55E524u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55E520u;
            // 0x55e524: 0x2406002a  addiu       $a2, $zero, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55E528u; }
        if (ctx->pc != 0x55E528u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55E528u; }
        if (ctx->pc != 0x55E528u) { return; }
    }
    ctx->pc = 0x55E528u;
label_55e528:
    // 0x55e528: 0x24030034  addiu       $v1, $zero, 0x34
    ctx->pc = 0x55e528u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_55e52c:
    // 0x55e52c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x55e52cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_55e530:
    // 0x55e530: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_55e534:
    if (ctx->pc == 0x55E534u) {
        ctx->pc = 0x55E534u;
            // 0x55e534: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x55E538u;
        goto label_55e538;
    }
    ctx->pc = 0x55E530u;
    {
        const bool branch_taken_0x55e530 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x55E534u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55E530u;
            // 0x55e534: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x55e530) {
            ctx->pc = 0x55E544u;
            goto label_55e544;
        }
    }
    ctx->pc = 0x55E538u;
label_55e538:
    // 0x55e538: 0xc0874ec  jal         func_21D3B0
label_55e53c:
    if (ctx->pc == 0x55E53Cu) {
        ctx->pc = 0x55E540u;
        goto label_55e540;
    }
    ctx->pc = 0x55E538u;
    SET_GPR_U32(ctx, 31, 0x55E540u);
    ctx->pc = 0x21D3B0u;
    if (runtime->hasFunction(0x21D3B0u)) {
        auto targetFn = runtime->lookupFunction(0x21D3B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55E540u; }
        if (ctx->pc != 0x55E540u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021D3B0_0x21d3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55E540u; }
        if (ctx->pc != 0x55E540u) { return; }
    }
    ctx->pc = 0x55E540u;
label_55e540:
    // 0x55e540: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x55e540u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_55e544:
    // 0x55e544: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x55e544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
label_55e548:
    // 0x55e548: 0xae040290  sw          $a0, 0x290($s0)
    ctx->pc = 0x55e548u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 656), GPR_U32(ctx, 4));
label_55e54c:
    // 0x55e54c: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x55e54cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_55e550:
    // 0x55e550: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x55e550u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_55e554:
    // 0x55e554: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x55e554u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_55e558:
    // 0x55e558: 0xac830030  sw          $v1, 0x30($a0)
    ctx->pc = 0x55e558u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 3));
label_55e55c:
    // 0x55e55c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x55e55cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_55e560:
    // 0x55e560: 0xc0a7a88  jal         func_29EA20
label_55e564:
    if (ctx->pc == 0x55E564u) {
        ctx->pc = 0x55E564u;
            // 0x55e564: 0x2406002a  addiu       $a2, $zero, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
        ctx->pc = 0x55E568u;
        goto label_55e568;
    }
    ctx->pc = 0x55E560u;
    SET_GPR_U32(ctx, 31, 0x55E568u);
    ctx->pc = 0x55E564u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55E560u;
            // 0x55e564: 0x2406002a  addiu       $a2, $zero, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55E568u; }
        if (ctx->pc != 0x55E568u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55E568u; }
        if (ctx->pc != 0x55E568u) { return; }
    }
    ctx->pc = 0x55E568u;
label_55e568:
    // 0x55e568: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x55e568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_55e56c:
    // 0x55e56c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x55e56cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_55e570:
    // 0x55e570: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_55e574:
    if (ctx->pc == 0x55E574u) {
        ctx->pc = 0x55E574u;
            // 0x55e574: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x55E578u;
        goto label_55e578;
    }
    ctx->pc = 0x55E570u;
    {
        const bool branch_taken_0x55e570 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x55E574u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55E570u;
            // 0x55e574: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x55e570) {
            ctx->pc = 0x55E584u;
            goto label_55e584;
        }
    }
    ctx->pc = 0x55E578u;
label_55e578:
    // 0x55e578: 0xc087848  jal         func_21E120
label_55e57c:
    if (ctx->pc == 0x55E57Cu) {
        ctx->pc = 0x55E57Cu;
            // 0x55e57c: 0x8e050290  lw          $a1, 0x290($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 656)));
        ctx->pc = 0x55E580u;
        goto label_55e580;
    }
    ctx->pc = 0x55E578u;
    SET_GPR_U32(ctx, 31, 0x55E580u);
    ctx->pc = 0x55E57Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55E578u;
            // 0x55e57c: 0x8e050290  lw          $a1, 0x290($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 656)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21E120u;
    if (runtime->hasFunction(0x21E120u)) {
        auto targetFn = runtime->lookupFunction(0x21E120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55E580u; }
        if (ctx->pc != 0x55E580u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021E120_0x21e120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55E580u; }
        if (ctx->pc != 0x55E580u) { return; }
    }
    ctx->pc = 0x55E580u;
label_55e580:
    // 0x55e580: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x55e580u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_55e584:
    // 0x55e584: 0xae04028c  sw          $a0, 0x28C($s0)
    ctx->pc = 0x55e584u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 652), GPR_U32(ctx, 4));
label_55e588:
    // 0x55e588: 0x262502c0  addiu       $a1, $s1, 0x2C0
    ctx->pc = 0x55e588u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 704));
label_55e58c:
    // 0x55e58c: 0xc04cc04  jal         func_133010
label_55e590:
    if (ctx->pc == 0x55E590u) {
        ctx->pc = 0x55E590u;
            // 0x55e590: 0x27a40180  addiu       $a0, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->pc = 0x55E594u;
        goto label_55e594;
    }
    ctx->pc = 0x55E58Cu;
    SET_GPR_U32(ctx, 31, 0x55E594u);
    ctx->pc = 0x55E590u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55E58Cu;
            // 0x55e590: 0x27a40180  addiu       $a0, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55E594u; }
        if (ctx->pc != 0x55E594u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55E594u; }
        if (ctx->pc != 0x55E594u) { return; }
    }
    ctx->pc = 0x55E594u;
label_55e594:
    // 0x55e594: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x55e594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_55e598:
    // 0x55e598: 0xc04f278  jal         func_13C9E0
label_55e59c:
    if (ctx->pc == 0x55E59Cu) {
        ctx->pc = 0x55E59Cu;
            // 0x55e59c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x55E5A0u;
        goto label_55e5a0;
    }
    ctx->pc = 0x55E598u;
    SET_GPR_U32(ctx, 31, 0x55E5A0u);
    ctx->pc = 0x55E59Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55E598u;
            // 0x55e59c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55E5A0u; }
        if (ctx->pc != 0x55E5A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55E5A0u; }
        if (ctx->pc != 0x55E5A0u) { return; }
    }
    ctx->pc = 0x55E5A0u;
label_55e5a0:
    // 0x55e5a0: 0x3c060067  lui         $a2, 0x67
    ctx->pc = 0x55e5a0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)103 << 16));
label_55e5a4:
    // 0x55e5a4: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x55e5a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_55e5a8:
    // 0x55e5a8: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x55e5a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_55e5ac:
    // 0x55e5ac: 0xc04cca0  jal         func_133280
label_55e5b0:
    if (ctx->pc == 0x55E5B0u) {
        ctx->pc = 0x55E5B0u;
            // 0x55e5b0: 0x24c6f660  addiu       $a2, $a2, -0x9A0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964832));
        ctx->pc = 0x55E5B4u;
        goto label_55e5b4;
    }
    ctx->pc = 0x55E5ACu;
    SET_GPR_U32(ctx, 31, 0x55E5B4u);
    ctx->pc = 0x55E5B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55E5ACu;
            // 0x55e5b0: 0x24c6f660  addiu       $a2, $a2, -0x9A0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964832));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55E5B4u; }
        if (ctx->pc != 0x55E5B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55E5B4u; }
        if (ctx->pc != 0x55E5B4u) { return; }
    }
    ctx->pc = 0x55E5B4u;
label_55e5b4:
    // 0x55e5b4: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x55e5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_55e5b8:
    // 0x55e5b8: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x55e5b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_55e5bc:
    // 0x55e5bc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x55e5bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_55e5c0:
    // 0x55e5c0: 0xc04cc70  jal         func_1331C0
label_55e5c4:
    if (ctx->pc == 0x55E5C4u) {
        ctx->pc = 0x55E5C4u;
            // 0x55e5c4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x55E5C8u;
        goto label_55e5c8;
    }
    ctx->pc = 0x55E5C0u;
    SET_GPR_U32(ctx, 31, 0x55E5C8u);
    ctx->pc = 0x55E5C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55E5C0u;
            // 0x55e5c4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331C0u;
    if (runtime->hasFunction(0x1331C0u)) {
        auto targetFn = runtime->lookupFunction(0x1331C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55E5C8u; }
        if (ctx->pc != 0x55E5C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331C0_0x1331c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55E5C8u; }
        if (ctx->pc != 0x55E5C8u) { return; }
    }
    ctx->pc = 0x55E5C8u;
label_55e5c8:
    // 0x55e5c8: 0xc0892d0  jal         func_224B40
label_55e5cc:
    if (ctx->pc == 0x55E5CCu) {
        ctx->pc = 0x55E5CCu;
            // 0x55e5cc: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x55E5D0u;
        goto label_55e5d0;
    }
    ctx->pc = 0x55E5C8u;
    SET_GPR_U32(ctx, 31, 0x55E5D0u);
    ctx->pc = 0x55E5CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55E5C8u;
            // 0x55e5cc: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224B40u;
    if (runtime->hasFunction(0x224B40u)) {
        auto targetFn = runtime->lookupFunction(0x224B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55E5D0u; }
        if (ctx->pc != 0x55E5D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224B40_0x224b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55E5D0u; }
        if (ctx->pc != 0x55E5D0u) { return; }
    }
    ctx->pc = 0x55E5D0u;
label_55e5d0:
    // 0x55e5d0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x55e5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_55e5d4:
    // 0x55e5d4: 0x3c033e99  lui         $v1, 0x3E99
    ctx->pc = 0x55e5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16025 << 16));
label_55e5d8:
    // 0x55e5d8: 0x8c44e3f8  lw          $a0, -0x1C08($v0)
    ctx->pc = 0x55e5d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960120)));
label_55e5dc:
    // 0x55e5dc: 0x3466999a  ori         $a2, $v1, 0x999A
    ctx->pc = 0x55e5dcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
label_55e5e0:
    // 0x55e5e0: 0xc7a20180  lwc1        $f2, 0x180($sp)
    ctx->pc = 0x55e5e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_55e5e4:
    // 0x55e5e4: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x55e5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_55e5e8:
    // 0x55e5e8: 0xc7a10184  lwc1        $f1, 0x184($sp)
    ctx->pc = 0x55e5e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_55e5ec:
    // 0x55e5ec: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x55e5ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_55e5f0:
    // 0x55e5f0: 0x8c840060  lw          $a0, 0x60($a0)
    ctx->pc = 0x55e5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
label_55e5f4:
    // 0x55e5f4: 0xc7a00188  lwc1        $f0, 0x188($sp)
    ctx->pc = 0x55e5f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_55e5f8:
    // 0x55e5f8: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x55e5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
label_55e5fc:
    // 0x55e5fc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x55e5fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_55e600:
    // 0x55e600: 0xafa60128  sw          $a2, 0x128($sp)
    ctx->pc = 0x55e600u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 6));
label_55e604:
    // 0x55e604: 0xe7a200a0  swc1        $f2, 0xA0($sp)
    ctx->pc = 0x55e604u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_55e608:
    // 0x55e608: 0xa3a30140  sb          $v1, 0x140($sp)
    ctx->pc = 0x55e608u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 320), (uint8_t)GPR_U32(ctx, 3));
label_55e60c:
    // 0x55e60c: 0xe7a100a4  swc1        $f1, 0xA4($sp)
    ctx->pc = 0x55e60cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_55e610:
    // 0x55e610: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x55e610u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_55e614:
    // 0x55e614: 0xafa40094  sw          $a0, 0x94($sp)
    ctx->pc = 0x55e614u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 4));
label_55e618:
    // 0x55e618: 0xafa00124  sw          $zero, 0x124($sp)
    ctx->pc = 0x55e618u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 0));
label_55e61c:
    // 0x55e61c: 0xafa0012c  sw          $zero, 0x12C($sp)
    ctx->pc = 0x55e61cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 0));
label_55e620:
    // 0x55e620: 0xafa00090  sw          $zero, 0x90($sp)
    ctx->pc = 0x55e620u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 0));
label_55e624:
    // 0x55e624: 0xafa000ac  sw          $zero, 0xAC($sp)
    ctx->pc = 0x55e624u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 0));
label_55e628:
    // 0x55e628: 0xc643000c  lwc1        $f3, 0xC($s2)
    ctx->pc = 0x55e628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_55e62c:
    // 0x55e62c: 0xc6420008  lwc1        $f2, 0x8($s2)
    ctx->pc = 0x55e62cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_55e630:
    // 0x55e630: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x55e630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_55e634:
    // 0x55e634: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x55e634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_55e638:
    // 0x55e638: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x55e638u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_55e63c:
    // 0x55e63c: 0xafa20120  sw          $v0, 0x120($sp)
    ctx->pc = 0x55e63cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 2));
label_55e640:
    // 0x55e640: 0xe7a100b4  swc1        $f1, 0xB4($sp)
    ctx->pc = 0x55e640u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
label_55e644:
    // 0x55e644: 0xe7a200b8  swc1        $f2, 0xB8($sp)
    ctx->pc = 0x55e644u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_55e648:
    // 0x55e648: 0xc0a6278  jal         func_2989E0
label_55e64c:
    if (ctx->pc == 0x55E64Cu) {
        ctx->pc = 0x55E64Cu;
            // 0x55e64c: 0xe7a300bc  swc1        $f3, 0xBC($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
        ctx->pc = 0x55E650u;
        goto label_55e650;
    }
    ctx->pc = 0x55E648u;
    SET_GPR_U32(ctx, 31, 0x55E650u);
    ctx->pc = 0x55E64Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55E648u;
            // 0x55e64c: 0xe7a300bc  swc1        $f3, 0xBC($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2989E0u;
    if (runtime->hasFunction(0x2989E0u)) {
        auto targetFn = runtime->lookupFunction(0x2989E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55E650u; }
        if (ctx->pc != 0x55E650u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002989E0_0x2989e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55E650u; }
        if (ctx->pc != 0x55E650u) { return; }
    }
    ctx->pc = 0x55E650u;
label_55e650:
    // 0x55e650: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x55e650u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_55e654:
    // 0x55e654: 0x24050220  addiu       $a1, $zero, 0x220
    ctx->pc = 0x55e654u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_55e658:
    // 0x55e658: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x55e658u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_55e65c:
    // 0x55e65c: 0xc0a7a88  jal         func_29EA20
label_55e660:
    if (ctx->pc == 0x55E660u) {
        ctx->pc = 0x55E660u;
            // 0x55e660: 0x2406002b  addiu       $a2, $zero, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
        ctx->pc = 0x55E664u;
        goto label_55e664;
    }
    ctx->pc = 0x55E65Cu;
    SET_GPR_U32(ctx, 31, 0x55E664u);
    ctx->pc = 0x55E660u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55E65Cu;
            // 0x55e660: 0x2406002b  addiu       $a2, $zero, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55E664u; }
        if (ctx->pc != 0x55E664u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55E664u; }
        if (ctx->pc != 0x55E664u) { return; }
    }
    ctx->pc = 0x55E664u;
label_55e664:
    // 0x55e664: 0x24030220  addiu       $v1, $zero, 0x220
    ctx->pc = 0x55e664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_55e668:
    // 0x55e668: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x55e668u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_55e66c:
    // 0x55e66c: 0x12600013  beqz        $s3, . + 4 + (0x13 << 2)
label_55e670:
    if (ctx->pc == 0x55E670u) {
        ctx->pc = 0x55E670u;
            // 0x55e670: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x55E674u;
        goto label_55e674;
    }
    ctx->pc = 0x55E66Cu;
    {
        const bool branch_taken_0x55e66c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x55E670u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55E66Cu;
            // 0x55e670: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x55e66c) {
            ctx->pc = 0x55E6BCu;
            goto label_55e6bc;
        }
    }
    ctx->pc = 0x55E674u;
label_55e674:
    // 0x55e674: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x55e674u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_55e678:
    // 0x55e678: 0xc088ef4  jal         func_223BD0
label_55e67c:
    if (ctx->pc == 0x55E67Cu) {
        ctx->pc = 0x55E67Cu;
            // 0x55e67c: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x55E680u;
        goto label_55e680;
    }
    ctx->pc = 0x55E678u;
    SET_GPR_U32(ctx, 31, 0x55E680u);
    ctx->pc = 0x55E67Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55E678u;
            // 0x55e67c: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x223BD0u;
    if (runtime->hasFunction(0x223BD0u)) {
        auto targetFn = runtime->lookupFunction(0x223BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55E680u; }
        if (ctx->pc != 0x55E680u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00223BD0_0x223bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55E680u; }
        if (ctx->pc != 0x55E680u) { return; }
    }
    ctx->pc = 0x55E680u;
label_55e680:
    // 0x55e680: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x55e680u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_55e684:
    // 0x55e684: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x55e684u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_55e688:
    // 0x55e688: 0x24422240  addiu       $v0, $v0, 0x2240
    ctx->pc = 0x55e688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8768));
label_55e68c:
    // 0x55e68c: 0x24632260  addiu       $v1, $v1, 0x2260
    ctx->pc = 0x55e68cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8800));
label_55e690:
    // 0x55e690: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x55e690u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_55e694:
    // 0x55e694: 0xae600200  sw          $zero, 0x200($s3)
    ctx->pc = 0x55e694u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 512), GPR_U32(ctx, 0));
label_55e698:
    // 0x55e698: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x55e698u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_55e69c:
    // 0x55e69c: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x55e69cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_55e6a0:
    // 0x55e6a0: 0xae600210  sw          $zero, 0x210($s3)
    ctx->pc = 0x55e6a0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 528), GPR_U32(ctx, 0));
label_55e6a4:
    // 0x55e6a4: 0xae600214  sw          $zero, 0x214($s3)
    ctx->pc = 0x55e6a4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 532), GPR_U32(ctx, 0));
label_55e6a8:
    // 0x55e6a8: 0xae60000c  sw          $zero, 0xC($s3)
    ctx->pc = 0x55e6a8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 0));
label_55e6ac:
    // 0x55e6ac: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x55e6acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_55e6b0:
    // 0x55e6b0: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x55e6b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_55e6b4:
    // 0x55e6b4: 0xc088b38  jal         func_222CE0
label_55e6b8:
    if (ctx->pc == 0x55E6B8u) {
        ctx->pc = 0x55E6B8u;
            // 0x55e6b8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x55E6BCu;
        goto label_55e6bc;
    }
    ctx->pc = 0x55E6B4u;
    SET_GPR_U32(ctx, 31, 0x55E6BCu);
    ctx->pc = 0x55E6B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55E6B4u;
            // 0x55e6b8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222CE0u;
    if (runtime->hasFunction(0x222CE0u)) {
        auto targetFn = runtime->lookupFunction(0x222CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55E6BCu; }
        if (ctx->pc != 0x55E6BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222CE0_0x222ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55E6BCu; }
        if (ctx->pc != 0x55E6BCu) { return; }
    }
    ctx->pc = 0x55E6BCu;
label_55e6bc:
    // 0x55e6bc: 0xae600200  sw          $zero, 0x200($s3)
    ctx->pc = 0x55e6bcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 512), GPR_U32(ctx, 0));
label_55e6c0:
    // 0x55e6c0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x55e6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_55e6c4:
    // 0x55e6c4: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x55e6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_55e6c8:
    // 0x55e6c8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x55e6c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_55e6cc:
    // 0x55e6cc: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x55e6ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_55e6d0:
    // 0x55e6d0: 0xc08c164  jal         func_230590
label_55e6d4:
    if (ctx->pc == 0x55E6D4u) {
        ctx->pc = 0x55E6D4u;
            // 0x55e6d4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x55E6D8u;
        goto label_55e6d8;
    }
    ctx->pc = 0x55E6D0u;
    SET_GPR_U32(ctx, 31, 0x55E6D8u);
    ctx->pc = 0x55E6D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55E6D0u;
            // 0x55e6d4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x230590u;
    if (runtime->hasFunction(0x230590u)) {
        auto targetFn = runtime->lookupFunction(0x230590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55E6D8u; }
        if (ctx->pc != 0x55E6D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00230590_0x230590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55E6D8u; }
        if (ctx->pc != 0x55E6D8u) { return; }
    }
    ctx->pc = 0x55E6D8u;
label_55e6d8:
    // 0x55e6d8: 0x8e020288  lw          $v0, 0x288($s0)
    ctx->pc = 0x55e6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 648)));
label_55e6dc:
    // 0x55e6dc: 0x8e030284  lw          $v1, 0x284($s0)
    ctx->pc = 0x55e6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 644)));
label_55e6e0:
    // 0x55e6e0: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x55e6e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
label_55e6e4:
    // 0x55e6e4: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x55e6e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_55e6e8:
    // 0x55e6e8: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
label_55e6ec:
    if (ctx->pc == 0x55E6ECu) {
        ctx->pc = 0x55E6ECu;
            // 0x55e6ec: 0x8e030284  lw          $v1, 0x284($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 644)));
        ctx->pc = 0x55E6F0u;
        goto label_55e6f0;
    }
    ctx->pc = 0x55E6E8u;
    {
        const bool branch_taken_0x55e6e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x55e6e8) {
            ctx->pc = 0x55E6ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x55E6E8u;
            // 0x55e6ec: 0x8e030284  lw          $v1, 0x284($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 644)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x55E700u;
            goto label_55e700;
        }
    }
    ctx->pc = 0x55E6F0u;
label_55e6f0:
    // 0x55e6f0: 0x26040280  addiu       $a0, $s0, 0x280
    ctx->pc = 0x55e6f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 640));
label_55e6f4:
    // 0x55e6f4: 0xc0a728c  jal         func_29CA30
label_55e6f8:
    if (ctx->pc == 0x55E6F8u) {
        ctx->pc = 0x55E6F8u;
            // 0x55e6f8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x55E6FCu;
        goto label_55e6fc;
    }
    ctx->pc = 0x55E6F4u;
    SET_GPR_U32(ctx, 31, 0x55E6FCu);
    ctx->pc = 0x55E6F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55E6F4u;
            // 0x55e6f8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55E6FCu; }
        if (ctx->pc != 0x55E6FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55E6FCu; }
        if (ctx->pc != 0x55E6FCu) { return; }
    }
    ctx->pc = 0x55E6FCu;
label_55e6fc:
    // 0x55e6fc: 0x8e030284  lw          $v1, 0x284($s0)
    ctx->pc = 0x55e6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 644)));
label_55e700:
    // 0x55e700: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x55e700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_55e704:
    // 0x55e704: 0xae020284  sw          $v0, 0x284($s0)
    ctx->pc = 0x55e704u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 644), GPR_U32(ctx, 2));
label_55e708:
    // 0x55e708: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x55e708u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_55e70c:
    // 0x55e70c: 0x8e020280  lw          $v0, 0x280($s0)
    ctx->pc = 0x55e70cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 640)));
label_55e710:
    // 0x55e710: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x55e710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_55e714:
    // 0x55e714: 0xac530000  sw          $s3, 0x0($v0)
    ctx->pc = 0x55e714u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 19));
label_55e718:
    // 0x55e718: 0x8e04028c  lw          $a0, 0x28C($s0)
    ctx->pc = 0x55e718u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 652)));
label_55e71c:
    // 0x55e71c: 0xc087884  jal         func_21E210
label_55e720:
    if (ctx->pc == 0x55E720u) {
        ctx->pc = 0x55E720u;
            // 0x55e720: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x55E724u;
        goto label_55e724;
    }
    ctx->pc = 0x55E71Cu;
    SET_GPR_U32(ctx, 31, 0x55E724u);
    ctx->pc = 0x55E720u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55E71Cu;
            // 0x55e720: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21E210u;
    if (runtime->hasFunction(0x21E210u)) {
        auto targetFn = runtime->lookupFunction(0x21E210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55E724u; }
        if (ctx->pc != 0x55E724u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021E210_0x21e210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55E724u; }
        if (ctx->pc != 0x55E724u) { return; }
    }
    ctx->pc = 0x55E724u;
label_55e724:
    // 0x55e724: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x55e724u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_55e728:
    // 0x55e728: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x55e728u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_55e72c:
    // 0x55e72c: 0x8c44e3f8  lw          $a0, -0x1C08($v0)
    ctx->pc = 0x55e72cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960120)));
label_55e730:
    // 0x55e730: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x55e730u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_55e734:
    // 0x55e734: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x55e734u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_55e738:
    // 0x55e738: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x55e738u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_55e73c:
    // 0x55e73c: 0x8c840060  lw          $a0, 0x60($a0)
    ctx->pc = 0x55e73cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
label_55e740:
    // 0x55e740: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x55e740u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
label_55e744:
    // 0x55e744: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x55e744u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_55e748:
    // 0x55e748: 0xa3a70140  sb          $a3, 0x140($sp)
    ctx->pc = 0x55e748u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 320), (uint8_t)GPR_U32(ctx, 7));
label_55e74c:
    // 0x55e74c: 0xa3a60143  sb          $a2, 0x143($sp)
    ctx->pc = 0x55e74cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 323), (uint8_t)GPR_U32(ctx, 6));
label_55e750:
    // 0x55e750: 0xafa20120  sw          $v0, 0x120($sp)
    ctx->pc = 0x55e750u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 2));
label_55e754:
    // 0x55e754: 0xafa40094  sw          $a0, 0x94($sp)
    ctx->pc = 0x55e754u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 4));
label_55e758:
    // 0x55e758: 0xafa30124  sw          $v1, 0x124($sp)
    ctx->pc = 0x55e758u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 3));
label_55e75c:
    // 0x55e75c: 0xafa30128  sw          $v1, 0x128($sp)
    ctx->pc = 0x55e75cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 3));
label_55e760:
    // 0x55e760: 0xafa3012c  sw          $v1, 0x12C($sp)
    ctx->pc = 0x55e760u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 3));
label_55e764:
    // 0x55e764: 0xafa00130  sw          $zero, 0x130($sp)
    ctx->pc = 0x55e764u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 0));
label_55e768:
    // 0x55e768: 0xafa00110  sw          $zero, 0x110($sp)
    ctx->pc = 0x55e768u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 0));
label_55e76c:
    // 0x55e76c: 0xafa00114  sw          $zero, 0x114($sp)
    ctx->pc = 0x55e76cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 276), GPR_U32(ctx, 0));
label_55e770:
    // 0x55e770: 0xafa00118  sw          $zero, 0x118($sp)
    ctx->pc = 0x55e770u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 0));
label_55e774:
    // 0x55e774: 0xc0a6278  jal         func_2989E0
label_55e778:
    if (ctx->pc == 0x55E778u) {
        ctx->pc = 0x55E778u;
            // 0x55e778: 0xafa0011c  sw          $zero, 0x11C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 0));
        ctx->pc = 0x55E77Cu;
        goto label_55e77c;
    }
    ctx->pc = 0x55E774u;
    SET_GPR_U32(ctx, 31, 0x55E77Cu);
    ctx->pc = 0x55E778u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55E774u;
            // 0x55e778: 0xafa0011c  sw          $zero, 0x11C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2989E0u;
    if (runtime->hasFunction(0x2989E0u)) {
        auto targetFn = runtime->lookupFunction(0x2989E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55E77Cu; }
        if (ctx->pc != 0x55E77Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002989E0_0x2989e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55E77Cu; }
        if (ctx->pc != 0x55E77Cu) { return; }
    }
    ctx->pc = 0x55E77Cu;
label_55e77c:
    // 0x55e77c: 0x3c02bd4c  lui         $v0, 0xBD4C
    ctx->pc = 0x55e77cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48460 << 16));
label_55e780:
    // 0x55e780: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x55e780u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_55e784:
    // 0x55e784: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x55e784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_55e788:
    // 0x55e788: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x55e788u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_55e78c:
    // 0x55e78c: 0xafa20168  sw          $v0, 0x168($sp)
    ctx->pc = 0x55e78cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 360), GPR_U32(ctx, 2));
label_55e790:
    // 0x55e790: 0x27a60170  addiu       $a2, $sp, 0x170
    ctx->pc = 0x55e790u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_55e794:
    // 0x55e794: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x55e794u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
label_55e798:
    // 0x55e798: 0xafa00160  sw          $zero, 0x160($sp)
    ctx->pc = 0x55e798u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 0));
label_55e79c:
    // 0x55e79c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x55e79cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_55e7a0:
    // 0x55e7a0: 0xafa00164  sw          $zero, 0x164($sp)
    ctx->pc = 0x55e7a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 356), GPR_U32(ctx, 0));
label_55e7a4:
    // 0x55e7a4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x55e7a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_55e7a8:
    // 0x55e7a8: 0xc04cc7c  jal         func_1331F0
label_55e7ac:
    if (ctx->pc == 0x55E7ACu) {
        ctx->pc = 0x55E7ACu;
            // 0x55e7ac: 0xafa0016c  sw          $zero, 0x16C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 364), GPR_U32(ctx, 0));
        ctx->pc = 0x55E7B0u;
        goto label_55e7b0;
    }
    ctx->pc = 0x55E7A8u;
    SET_GPR_U32(ctx, 31, 0x55E7B0u);
    ctx->pc = 0x55E7ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55E7A8u;
            // 0x55e7ac: 0xafa0016c  sw          $zero, 0x16C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 364), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331F0u;
    if (runtime->hasFunction(0x1331F0u)) {
        auto targetFn = runtime->lookupFunction(0x1331F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55E7B0u; }
        if (ctx->pc != 0x55E7B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331F0_0x1331f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55E7B0u; }
        if (ctx->pc != 0x55E7B0u) { return; }
    }
    ctx->pc = 0x55E7B0u;
label_55e7b0:
    // 0x55e7b0: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x55e7b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_55e7b4:
    // 0x55e7b4: 0xc7a00180  lwc1        $f0, 0x180($sp)
    ctx->pc = 0x55e7b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_55e7b8:
    // 0x55e7b8: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x55e7b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_55e7bc:
    // 0x55e7bc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x55e7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_55e7c0:
    // 0x55e7c0: 0x24050220  addiu       $a1, $zero, 0x220
    ctx->pc = 0x55e7c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_55e7c4:
    // 0x55e7c4: 0xafa20090  sw          $v0, 0x90($sp)
    ctx->pc = 0x55e7c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 2));
label_55e7c8:
    // 0x55e7c8: 0xc7a10184  lwc1        $f1, 0x184($sp)
    ctx->pc = 0x55e7c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_55e7cc:
    // 0x55e7cc: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x55e7ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_55e7d0:
    // 0x55e7d0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x55e7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_55e7d4:
    // 0x55e7d4: 0xc7a00188  lwc1        $f0, 0x188($sp)
    ctx->pc = 0x55e7d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_55e7d8:
    // 0x55e7d8: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x55e7d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_55e7dc:
    // 0x55e7dc: 0x2406002b  addiu       $a2, $zero, 0x2B
    ctx->pc = 0x55e7dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_55e7e0:
    // 0x55e7e0: 0xafa000ac  sw          $zero, 0xAC($sp)
    ctx->pc = 0x55e7e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 0));
label_55e7e4:
    // 0x55e7e4: 0xe7a100a4  swc1        $f1, 0xA4($sp)
    ctx->pc = 0x55e7e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_55e7e8:
    // 0x55e7e8: 0xc0a7a88  jal         func_29EA20
label_55e7ec:
    if (ctx->pc == 0x55E7ECu) {
        ctx->pc = 0x55E7ECu;
            // 0x55e7ec: 0xe7a000a8  swc1        $f0, 0xA8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
        ctx->pc = 0x55E7F0u;
        goto label_55e7f0;
    }
    ctx->pc = 0x55E7E8u;
    SET_GPR_U32(ctx, 31, 0x55E7F0u);
    ctx->pc = 0x55E7ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55E7E8u;
            // 0x55e7ec: 0xe7a000a8  swc1        $f0, 0xA8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55E7F0u; }
        if (ctx->pc != 0x55E7F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55E7F0u; }
        if (ctx->pc != 0x55E7F0u) { return; }
    }
    ctx->pc = 0x55E7F0u;
label_55e7f0:
    // 0x55e7f0: 0x24030220  addiu       $v1, $zero, 0x220
    ctx->pc = 0x55e7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_55e7f4:
    // 0x55e7f4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x55e7f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_55e7f8:
    // 0x55e7f8: 0x12400013  beqz        $s2, . + 4 + (0x13 << 2)
label_55e7fc:
    if (ctx->pc == 0x55E7FCu) {
        ctx->pc = 0x55E7FCu;
            // 0x55e7fc: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x55E800u;
        goto label_55e800;
    }
    ctx->pc = 0x55E7F8u;
    {
        const bool branch_taken_0x55e7f8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x55E7FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55E7F8u;
            // 0x55e7fc: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x55e7f8) {
            ctx->pc = 0x55E848u;
            goto label_55e848;
        }
    }
    ctx->pc = 0x55E800u;
label_55e800:
    // 0x55e800: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x55e800u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_55e804:
    // 0x55e804: 0xc088ef4  jal         func_223BD0
label_55e808:
    if (ctx->pc == 0x55E808u) {
        ctx->pc = 0x55E808u;
            // 0x55e808: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x55E80Cu;
        goto label_55e80c;
    }
    ctx->pc = 0x55E804u;
    SET_GPR_U32(ctx, 31, 0x55E80Cu);
    ctx->pc = 0x55E808u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55E804u;
            // 0x55e808: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x223BD0u;
    if (runtime->hasFunction(0x223BD0u)) {
        auto targetFn = runtime->lookupFunction(0x223BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55E80Cu; }
        if (ctx->pc != 0x55E80Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00223BD0_0x223bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55E80Cu; }
        if (ctx->pc != 0x55E80Cu) { return; }
    }
    ctx->pc = 0x55E80Cu;
label_55e80c:
    // 0x55e80c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x55e80cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_55e810:
    // 0x55e810: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x55e810u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_55e814:
    // 0x55e814: 0x24422240  addiu       $v0, $v0, 0x2240
    ctx->pc = 0x55e814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8768));
label_55e818:
    // 0x55e818: 0x24632260  addiu       $v1, $v1, 0x2260
    ctx->pc = 0x55e818u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8800));
label_55e81c:
    // 0x55e81c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x55e81cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_55e820:
    // 0x55e820: 0xae400200  sw          $zero, 0x200($s2)
    ctx->pc = 0x55e820u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 512), GPR_U32(ctx, 0));
label_55e824:
    // 0x55e824: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x55e824u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_55e828:
    // 0x55e828: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x55e828u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_55e82c:
    // 0x55e82c: 0xae400210  sw          $zero, 0x210($s2)
    ctx->pc = 0x55e82cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 528), GPR_U32(ctx, 0));
label_55e830:
    // 0x55e830: 0xae400214  sw          $zero, 0x214($s2)
    ctx->pc = 0x55e830u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 532), GPR_U32(ctx, 0));
label_55e834:
    // 0x55e834: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x55e834u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
label_55e838:
    // 0x55e838: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x55e838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_55e83c:
    // 0x55e83c: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x55e83cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_55e840:
    // 0x55e840: 0xc088b38  jal         func_222CE0
label_55e844:
    if (ctx->pc == 0x55E844u) {
        ctx->pc = 0x55E844u;
            // 0x55e844: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x55E848u;
        goto label_55e848;
    }
    ctx->pc = 0x55E840u;
    SET_GPR_U32(ctx, 31, 0x55E848u);
    ctx->pc = 0x55E844u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55E840u;
            // 0x55e844: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222CE0u;
    if (runtime->hasFunction(0x222CE0u)) {
        auto targetFn = runtime->lookupFunction(0x222CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55E848u; }
        if (ctx->pc != 0x55E848u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222CE0_0x222ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55E848u; }
        if (ctx->pc != 0x55E848u) { return; }
    }
    ctx->pc = 0x55E848u;
label_55e848:
    // 0x55e848: 0xae400200  sw          $zero, 0x200($s2)
    ctx->pc = 0x55e848u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 512), GPR_U32(ctx, 0));
label_55e84c:
    // 0x55e84c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x55e84cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_55e850:
    // 0x55e850: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x55e850u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_55e854:
    // 0x55e854: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x55e854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_55e858:
    // 0x55e858: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x55e858u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_55e85c:
    // 0x55e85c: 0xc08c164  jal         func_230590
label_55e860:
    if (ctx->pc == 0x55E860u) {
        ctx->pc = 0x55E860u;
            // 0x55e860: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x55E864u;
        goto label_55e864;
    }
    ctx->pc = 0x55E85Cu;
    SET_GPR_U32(ctx, 31, 0x55E864u);
    ctx->pc = 0x55E860u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55E85Cu;
            // 0x55e860: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x230590u;
    if (runtime->hasFunction(0x230590u)) {
        auto targetFn = runtime->lookupFunction(0x230590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55E864u; }
        if (ctx->pc != 0x55E864u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00230590_0x230590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55E864u; }
        if (ctx->pc != 0x55E864u) { return; }
    }
    ctx->pc = 0x55E864u;
label_55e864:
    // 0x55e864: 0x8e020288  lw          $v0, 0x288($s0)
    ctx->pc = 0x55e864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 648)));
label_55e868:
    // 0x55e868: 0x8e030284  lw          $v1, 0x284($s0)
    ctx->pc = 0x55e868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 644)));
label_55e86c:
    // 0x55e86c: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x55e86cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
label_55e870:
    // 0x55e870: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x55e870u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_55e874:
    // 0x55e874: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_55e878:
    if (ctx->pc == 0x55E878u) {
        ctx->pc = 0x55E87Cu;
        goto label_55e87c;
    }
    ctx->pc = 0x55E874u;
    {
        const bool branch_taken_0x55e874 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x55e874) {
            ctx->pc = 0x55E888u;
            goto label_55e888;
        }
    }
    ctx->pc = 0x55E87Cu;
label_55e87c:
    // 0x55e87c: 0x26040280  addiu       $a0, $s0, 0x280
    ctx->pc = 0x55e87cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 640));
label_55e880:
    // 0x55e880: 0xc0a728c  jal         func_29CA30
label_55e884:
    if (ctx->pc == 0x55E884u) {
        ctx->pc = 0x55E884u;
            // 0x55e884: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x55E888u;
        goto label_55e888;
    }
    ctx->pc = 0x55E880u;
    SET_GPR_U32(ctx, 31, 0x55E888u);
    ctx->pc = 0x55E884u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55E880u;
            // 0x55e884: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55E888u; }
        if (ctx->pc != 0x55E888u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55E888u; }
        if (ctx->pc != 0x55E888u) { return; }
    }
    ctx->pc = 0x55E888u;
label_55e888:
    // 0x55e888: 0x8e030284  lw          $v1, 0x284($s0)
    ctx->pc = 0x55e888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 644)));
label_55e88c:
    // 0x55e88c: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x55e88cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_55e890:
    // 0x55e890: 0xae020284  sw          $v0, 0x284($s0)
    ctx->pc = 0x55e890u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 644), GPR_U32(ctx, 2));
label_55e894:
    // 0x55e894: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x55e894u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_55e898:
    // 0x55e898: 0x8e020280  lw          $v0, 0x280($s0)
    ctx->pc = 0x55e898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 640)));
label_55e89c:
    // 0x55e89c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x55e89cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_55e8a0:
    // 0x55e8a0: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x55e8a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
label_55e8a4:
    // 0x55e8a4: 0x8e04028c  lw          $a0, 0x28C($s0)
    ctx->pc = 0x55e8a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 652)));
label_55e8a8:
    // 0x55e8a8: 0xc087884  jal         func_21E210
label_55e8ac:
    if (ctx->pc == 0x55E8ACu) {
        ctx->pc = 0x55E8ACu;
            // 0x55e8ac: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x55E8B0u;
        goto label_55e8b0;
    }
    ctx->pc = 0x55E8A8u;
    SET_GPR_U32(ctx, 31, 0x55E8B0u);
    ctx->pc = 0x55E8ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55E8A8u;
            // 0x55e8ac: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21E210u;
    if (runtime->hasFunction(0x21E210u)) {
        auto targetFn = runtime->lookupFunction(0x21E210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55E8B0u; }
        if (ctx->pc != 0x55E8B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021E210_0x21e210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55E8B0u; }
        if (ctx->pc != 0x55E8B0u) { return; }
    }
    ctx->pc = 0x55E8B0u;
label_55e8b0:
    // 0x55e8b0: 0x8e040290  lw          $a0, 0x290($s0)
    ctx->pc = 0x55e8b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 656)));
label_55e8b4:
    // 0x55e8b4: 0x27a50160  addiu       $a1, $sp, 0x160
    ctx->pc = 0x55e8b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_55e8b8:
    // 0x55e8b8: 0xc087580  jal         func_21D600
label_55e8bc:
    if (ctx->pc == 0x55E8BCu) {
        ctx->pc = 0x55E8BCu;
            // 0x55e8bc: 0x27a60150  addiu       $a2, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->pc = 0x55E8C0u;
        goto label_55e8c0;
    }
    ctx->pc = 0x55E8B8u;
    SET_GPR_U32(ctx, 31, 0x55E8C0u);
    ctx->pc = 0x55E8BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55E8B8u;
            // 0x55e8bc: 0x27a60150  addiu       $a2, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D600u;
    if (runtime->hasFunction(0x21D600u)) {
        auto targetFn = runtime->lookupFunction(0x21D600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55E8C0u; }
        if (ctx->pc != 0x55E8C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021D600_0x21d600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55E8C0u; }
        if (ctx->pc != 0x55E8C0u) { return; }
    }
    ctx->pc = 0x55E8C0u;
label_55e8c0:
    // 0x55e8c0: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x55e8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
label_55e8c4:
    // 0x55e8c4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x55e8c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_55e8c8:
    // 0x55e8c8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x55e8c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_55e8cc:
    // 0x55e8cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x55e8ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_55e8d0:
    // 0x55e8d0: 0xc1578b4  jal         func_55E2D0
label_55e8d4:
    if (ctx->pc == 0x55E8D4u) {
        ctx->pc = 0x55E8D4u;
            // 0x55e8d4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x55E8D8u;
        goto label_55e8d8;
    }
    ctx->pc = 0x55E8D0u;
    SET_GPR_U32(ctx, 31, 0x55E8D8u);
    ctx->pc = 0x55E8D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55E8D0u;
            // 0x55e8d4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x55E2D0u;
    if (runtime->hasFunction(0x55E2D0u)) {
        auto targetFn = runtime->lookupFunction(0x55E2D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55E8D8u; }
        if (ctx->pc != 0x55E8D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0055E2D0_0x55e2d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55E8D8u; }
        if (ctx->pc != 0x55E8D8u) { return; }
    }
    ctx->pc = 0x55E8D8u;
label_55e8d8:
    // 0x55e8d8: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x55e8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
label_55e8dc:
    // 0x55e8dc: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x55e8dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_55e8e0:
    // 0x55e8e0: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x55e8e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_55e8e4:
    // 0x55e8e4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x55e8e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_55e8e8:
    // 0x55e8e8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x55e8e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_55e8ec:
    // 0x55e8ec: 0x27a60170  addiu       $a2, $sp, 0x170
    ctx->pc = 0x55e8ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_55e8f0:
    // 0x55e8f0: 0xc04cc7c  jal         func_1331F0
label_55e8f4:
    if (ctx->pc == 0x55E8F4u) {
        ctx->pc = 0x55E8F4u;
            // 0x55e8f4: 0x240982d  daddu       $s3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x55E8F8u;
        goto label_55e8f8;
    }
    ctx->pc = 0x55E8F0u;
    SET_GPR_U32(ctx, 31, 0x55E8F8u);
    ctx->pc = 0x55E8F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55E8F0u;
            // 0x55e8f4: 0x240982d  daddu       $s3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331F0u;
    if (runtime->hasFunction(0x1331F0u)) {
        auto targetFn = runtime->lookupFunction(0x1331F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55E8F8u; }
        if (ctx->pc != 0x55E8F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331F0_0x1331f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55E8F8u; }
        if (ctx->pc != 0x55E8F8u) { return; }
    }
    ctx->pc = 0x55E8F8u;
label_55e8f8:
    // 0x55e8f8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x55e8f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_55e8fc:
    // 0x55e8fc: 0x2e22000a  sltiu       $v0, $s1, 0xA
    ctx->pc = 0x55e8fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_55e900:
    // 0x55e900: 0x5440ffad  bnel        $v0, $zero, . + 4 + (-0x53 << 2)
label_55e904:
    if (ctx->pc == 0x55E904u) {
        ctx->pc = 0x55E904u;
            // 0x55e904: 0xc7a00180  lwc1        $f0, 0x180($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x55E908u;
        goto label_55e908;
    }
    ctx->pc = 0x55E900u;
    {
        const bool branch_taken_0x55e900 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x55e900) {
            ctx->pc = 0x55E904u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x55E900u;
            // 0x55e904: 0xc7a00180  lwc1        $f0, 0x180($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x55E7B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_55e7b8;
        }
    }
    ctx->pc = 0x55E908u;
label_55e908:
    // 0x55e908: 0x3c023ee1  lui         $v0, 0x3EE1
    ctx->pc = 0x55e908u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16097 << 16));
label_55e90c:
    // 0x55e90c: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x55e90cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_55e910:
    // 0x55e910: 0x344247ae  ori         $v0, $v0, 0x47AE
    ctx->pc = 0x55e910u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)18350);
label_55e914:
    // 0x55e914: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x55e914u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_55e918:
    // 0x55e918: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x55e918u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_55e91c:
    // 0x55e91c: 0xc04cc7c  jal         func_1331F0
label_55e920:
    if (ctx->pc == 0x55E920u) {
        ctx->pc = 0x55E920u;
            // 0x55e920: 0x27a60170  addiu       $a2, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->pc = 0x55E924u;
        goto label_55e924;
    }
    ctx->pc = 0x55E91Cu;
    SET_GPR_U32(ctx, 31, 0x55E924u);
    ctx->pc = 0x55E920u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55E91Cu;
            // 0x55e920: 0x27a60170  addiu       $a2, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331F0u;
    if (runtime->hasFunction(0x1331F0u)) {
        auto targetFn = runtime->lookupFunction(0x1331F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55E924u; }
        if (ctx->pc != 0x55E924u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331F0_0x1331f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55E924u; }
        if (ctx->pc != 0x55E924u) { return; }
    }
    ctx->pc = 0x55E924u;
label_55e924:
    // 0x55e924: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x55e924u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_55e928:
    // 0x55e928: 0x3c064248  lui         $a2, 0x4248
    ctx->pc = 0x55e928u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16968 << 16));
label_55e92c:
    // 0x55e92c: 0x8c44e3f8  lw          $a0, -0x1C08($v0)
    ctx->pc = 0x55e92cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960120)));
label_55e930:
    // 0x55e930: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x55e930u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_55e934:
    // 0x55e934: 0x44866000  mtc1        $a2, $f12
    ctx->pc = 0x55e934u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_55e938:
    // 0x55e938: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x55e938u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_55e93c:
    // 0x55e93c: 0x8c84005c  lw          $a0, 0x5C($a0)
    ctx->pc = 0x55e93cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
label_55e940:
    // 0x55e940: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x55e940u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_55e944:
    // 0x55e944: 0xafa60120  sw          $a2, 0x120($sp)
    ctx->pc = 0x55e944u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 6));
label_55e948:
    // 0x55e948: 0xafa20090  sw          $v0, 0x90($sp)
    ctx->pc = 0x55e948u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 2));
label_55e94c:
    // 0x55e94c: 0xafa40094  sw          $a0, 0x94($sp)
    ctx->pc = 0x55e94cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 4));
label_55e950:
    // 0x55e950: 0xafa30124  sw          $v1, 0x124($sp)
    ctx->pc = 0x55e950u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 3));
label_55e954:
    // 0x55e954: 0xafa30128  sw          $v1, 0x128($sp)
    ctx->pc = 0x55e954u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 3));
label_55e958:
    // 0x55e958: 0xafa3012c  sw          $v1, 0x12C($sp)
    ctx->pc = 0x55e958u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 3));
label_55e95c:
    // 0x55e95c: 0xafa00130  sw          $zero, 0x130($sp)
    ctx->pc = 0x55e95cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 0));
label_55e960:
    // 0x55e960: 0xafa00110  sw          $zero, 0x110($sp)
    ctx->pc = 0x55e960u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 0));
label_55e964:
    // 0x55e964: 0xafa00114  sw          $zero, 0x114($sp)
    ctx->pc = 0x55e964u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 276), GPR_U32(ctx, 0));
label_55e968:
    // 0x55e968: 0xafa00118  sw          $zero, 0x118($sp)
    ctx->pc = 0x55e968u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 0));
label_55e96c:
    // 0x55e96c: 0xc0a6278  jal         func_2989E0
label_55e970:
    if (ctx->pc == 0x55E970u) {
        ctx->pc = 0x55E970u;
            // 0x55e970: 0xafa0011c  sw          $zero, 0x11C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 0));
        ctx->pc = 0x55E974u;
        goto label_55e974;
    }
    ctx->pc = 0x55E96Cu;
    SET_GPR_U32(ctx, 31, 0x55E974u);
    ctx->pc = 0x55E970u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55E96Cu;
            // 0x55e970: 0xafa0011c  sw          $zero, 0x11C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2989E0u;
    if (runtime->hasFunction(0x2989E0u)) {
        auto targetFn = runtime->lookupFunction(0x2989E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55E974u; }
        if (ctx->pc != 0x55E974u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002989E0_0x2989e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55E974u; }
        if (ctx->pc != 0x55E974u) { return; }
    }
    ctx->pc = 0x55E974u;
label_55e974:
    // 0x55e974: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x55e974u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_55e978:
    // 0x55e978: 0x24050220  addiu       $a1, $zero, 0x220
    ctx->pc = 0x55e978u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_55e97c:
    // 0x55e97c: 0xc7a20180  lwc1        $f2, 0x180($sp)
    ctx->pc = 0x55e97cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_55e980:
    // 0x55e980: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x55e980u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_55e984:
    // 0x55e984: 0xc7a10184  lwc1        $f1, 0x184($sp)
    ctx->pc = 0x55e984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_55e988:
    // 0x55e988: 0x2406002b  addiu       $a2, $zero, 0x2B
    ctx->pc = 0x55e988u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_55e98c:
    // 0x55e98c: 0xc7a00188  lwc1        $f0, 0x188($sp)
    ctx->pc = 0x55e98cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_55e990:
    // 0x55e990: 0xafa000ac  sw          $zero, 0xAC($sp)
    ctx->pc = 0x55e990u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 0));
label_55e994:
    // 0x55e994: 0xe7a200a0  swc1        $f2, 0xA0($sp)
    ctx->pc = 0x55e994u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_55e998:
    // 0x55e998: 0xe7a100a4  swc1        $f1, 0xA4($sp)
    ctx->pc = 0x55e998u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_55e99c:
    // 0x55e99c: 0xc0a7a88  jal         func_29EA20
label_55e9a0:
    if (ctx->pc == 0x55E9A0u) {
        ctx->pc = 0x55E9A0u;
            // 0x55e9a0: 0xe7a000a8  swc1        $f0, 0xA8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
        ctx->pc = 0x55E9A4u;
        goto label_55e9a4;
    }
    ctx->pc = 0x55E99Cu;
    SET_GPR_U32(ctx, 31, 0x55E9A4u);
    ctx->pc = 0x55E9A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55E99Cu;
            // 0x55e9a0: 0xe7a000a8  swc1        $f0, 0xA8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55E9A4u; }
        if (ctx->pc != 0x55E9A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55E9A4u; }
        if (ctx->pc != 0x55E9A4u) { return; }
    }
    ctx->pc = 0x55E9A4u;
label_55e9a4:
    // 0x55e9a4: 0x24030220  addiu       $v1, $zero, 0x220
    ctx->pc = 0x55e9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_55e9a8:
    // 0x55e9a8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x55e9a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_55e9ac:
    // 0x55e9ac: 0x12200013  beqz        $s1, . + 4 + (0x13 << 2)
label_55e9b0:
    if (ctx->pc == 0x55E9B0u) {
        ctx->pc = 0x55E9B0u;
            // 0x55e9b0: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x55E9B4u;
        goto label_55e9b4;
    }
    ctx->pc = 0x55E9ACu;
    {
        const bool branch_taken_0x55e9ac = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x55E9B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55E9ACu;
            // 0x55e9b0: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x55e9ac) {
            ctx->pc = 0x55E9FCu;
            goto label_55e9fc;
        }
    }
    ctx->pc = 0x55E9B4u;
label_55e9b4:
    // 0x55e9b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x55e9b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_55e9b8:
    // 0x55e9b8: 0xc088ef4  jal         func_223BD0
label_55e9bc:
    if (ctx->pc == 0x55E9BCu) {
        ctx->pc = 0x55E9BCu;
            // 0x55e9bc: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x55E9C0u;
        goto label_55e9c0;
    }
    ctx->pc = 0x55E9B8u;
    SET_GPR_U32(ctx, 31, 0x55E9C0u);
    ctx->pc = 0x55E9BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55E9B8u;
            // 0x55e9bc: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x223BD0u;
    if (runtime->hasFunction(0x223BD0u)) {
        auto targetFn = runtime->lookupFunction(0x223BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55E9C0u; }
        if (ctx->pc != 0x55E9C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00223BD0_0x223bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55E9C0u; }
        if (ctx->pc != 0x55E9C0u) { return; }
    }
    ctx->pc = 0x55E9C0u;
label_55e9c0:
    // 0x55e9c0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x55e9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_55e9c4:
    // 0x55e9c4: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x55e9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_55e9c8:
    // 0x55e9c8: 0x24422240  addiu       $v0, $v0, 0x2240
    ctx->pc = 0x55e9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8768));
label_55e9cc:
    // 0x55e9cc: 0x24632260  addiu       $v1, $v1, 0x2260
    ctx->pc = 0x55e9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8800));
label_55e9d0:
    // 0x55e9d0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x55e9d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_55e9d4:
    // 0x55e9d4: 0xae200200  sw          $zero, 0x200($s1)
    ctx->pc = 0x55e9d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 512), GPR_U32(ctx, 0));
label_55e9d8:
    // 0x55e9d8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x55e9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_55e9dc:
    // 0x55e9dc: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x55e9dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_55e9e0:
    // 0x55e9e0: 0xae200210  sw          $zero, 0x210($s1)
    ctx->pc = 0x55e9e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 528), GPR_U32(ctx, 0));
label_55e9e4:
    // 0x55e9e4: 0xae200214  sw          $zero, 0x214($s1)
    ctx->pc = 0x55e9e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 532), GPR_U32(ctx, 0));
label_55e9e8:
    // 0x55e9e8: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x55e9e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
label_55e9ec:
    // 0x55e9ec: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x55e9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_55e9f0:
    // 0x55e9f0: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x55e9f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_55e9f4:
    // 0x55e9f4: 0xc088b38  jal         func_222CE0
label_55e9f8:
    if (ctx->pc == 0x55E9F8u) {
        ctx->pc = 0x55E9F8u;
            // 0x55e9f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x55E9FCu;
        goto label_55e9fc;
    }
    ctx->pc = 0x55E9F4u;
    SET_GPR_U32(ctx, 31, 0x55E9FCu);
    ctx->pc = 0x55E9F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55E9F4u;
            // 0x55e9f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222CE0u;
    if (runtime->hasFunction(0x222CE0u)) {
        auto targetFn = runtime->lookupFunction(0x222CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55E9FCu; }
        if (ctx->pc != 0x55E9FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222CE0_0x222ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55E9FCu; }
        if (ctx->pc != 0x55E9FCu) { return; }
    }
    ctx->pc = 0x55E9FCu;
label_55e9fc:
    // 0x55e9fc: 0xae200200  sw          $zero, 0x200($s1)
    ctx->pc = 0x55e9fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 512), GPR_U32(ctx, 0));
label_55ea00:
    // 0x55ea00: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x55ea00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_55ea04:
    // 0x55ea04: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x55ea04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_55ea08:
    // 0x55ea08: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x55ea08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_55ea0c:
    // 0x55ea0c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x55ea0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_55ea10:
    // 0x55ea10: 0xc08c164  jal         func_230590
label_55ea14:
    if (ctx->pc == 0x55EA14u) {
        ctx->pc = 0x55EA14u;
            // 0x55ea14: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x55EA18u;
        goto label_55ea18;
    }
    ctx->pc = 0x55EA10u;
    SET_GPR_U32(ctx, 31, 0x55EA18u);
    ctx->pc = 0x55EA14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55EA10u;
            // 0x55ea14: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x230590u;
    if (runtime->hasFunction(0x230590u)) {
        auto targetFn = runtime->lookupFunction(0x230590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55EA18u; }
        if (ctx->pc != 0x55EA18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00230590_0x230590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55EA18u; }
        if (ctx->pc != 0x55EA18u) { return; }
    }
    ctx->pc = 0x55EA18u;
label_55ea18:
    // 0x55ea18: 0x8e020288  lw          $v0, 0x288($s0)
    ctx->pc = 0x55ea18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 648)));
label_55ea1c:
    // 0x55ea1c: 0x8e030284  lw          $v1, 0x284($s0)
    ctx->pc = 0x55ea1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 644)));
label_55ea20:
    // 0x55ea20: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x55ea20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
label_55ea24:
    // 0x55ea24: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x55ea24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_55ea28:
    // 0x55ea28: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
label_55ea2c:
    if (ctx->pc == 0x55EA2Cu) {
        ctx->pc = 0x55EA2Cu;
            // 0x55ea2c: 0x8e040284  lw          $a0, 0x284($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 644)));
        ctx->pc = 0x55EA30u;
        goto label_55ea30;
    }
    ctx->pc = 0x55EA28u;
    {
        const bool branch_taken_0x55ea28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x55ea28) {
            ctx->pc = 0x55EA2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x55EA28u;
            // 0x55ea2c: 0x8e040284  lw          $a0, 0x284($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 644)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x55EA40u;
            goto label_55ea40;
        }
    }
    ctx->pc = 0x55EA30u;
label_55ea30:
    // 0x55ea30: 0x26040280  addiu       $a0, $s0, 0x280
    ctx->pc = 0x55ea30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 640));
label_55ea34:
    // 0x55ea34: 0xc0a728c  jal         func_29CA30
label_55ea38:
    if (ctx->pc == 0x55EA38u) {
        ctx->pc = 0x55EA38u;
            // 0x55ea38: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x55EA3Cu;
        goto label_55ea3c;
    }
    ctx->pc = 0x55EA34u;
    SET_GPR_U32(ctx, 31, 0x55EA3Cu);
    ctx->pc = 0x55EA38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55EA34u;
            // 0x55ea38: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55EA3Cu; }
        if (ctx->pc != 0x55EA3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55EA3Cu; }
        if (ctx->pc != 0x55EA3Cu) { return; }
    }
    ctx->pc = 0x55EA3Cu;
label_55ea3c:
    // 0x55ea3c: 0x8e040284  lw          $a0, 0x284($s0)
    ctx->pc = 0x55ea3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 644)));
label_55ea40:
    // 0x55ea40: 0x3c023efa  lui         $v0, 0x3EFA
    ctx->pc = 0x55ea40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16122 << 16));
label_55ea44:
    // 0x55ea44: 0x3442e148  ori         $v0, $v0, 0xE148
    ctx->pc = 0x55ea44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57672);
label_55ea48:
    // 0x55ea48: 0x27a50160  addiu       $a1, $sp, 0x160
    ctx->pc = 0x55ea48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_55ea4c:
    // 0x55ea4c: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x55ea4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_55ea50:
    // 0x55ea50: 0xae030284  sw          $v1, 0x284($s0)
    ctx->pc = 0x55ea50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 644), GPR_U32(ctx, 3));
label_55ea54:
    // 0x55ea54: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x55ea54u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_55ea58:
    // 0x55ea58: 0x8e030280  lw          $v1, 0x280($s0)
    ctx->pc = 0x55ea58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 640)));
label_55ea5c:
    // 0x55ea5c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x55ea5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_55ea60:
    // 0x55ea60: 0xac710000  sw          $s1, 0x0($v1)
    ctx->pc = 0x55ea60u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
label_55ea64:
    // 0x55ea64: 0xafa20158  sw          $v0, 0x158($sp)
    ctx->pc = 0x55ea64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 2));
label_55ea68:
    // 0x55ea68: 0xafa00150  sw          $zero, 0x150($sp)
    ctx->pc = 0x55ea68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 0));
label_55ea6c:
    // 0x55ea6c: 0xafa00154  sw          $zero, 0x154($sp)
    ctx->pc = 0x55ea6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 0));
label_55ea70:
    // 0x55ea70: 0xafa0015c  sw          $zero, 0x15C($sp)
    ctx->pc = 0x55ea70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 0));
label_55ea74:
    // 0x55ea74: 0x8e040290  lw          $a0, 0x290($s0)
    ctx->pc = 0x55ea74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 656)));
label_55ea78:
    // 0x55ea78: 0xc087580  jal         func_21D600
label_55ea7c:
    if (ctx->pc == 0x55EA7Cu) {
        ctx->pc = 0x55EA7Cu;
            // 0x55ea7c: 0x27a60150  addiu       $a2, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->pc = 0x55EA80u;
        goto label_55ea80;
    }
    ctx->pc = 0x55EA78u;
    SET_GPR_U32(ctx, 31, 0x55EA80u);
    ctx->pc = 0x55EA7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55EA78u;
            // 0x55ea7c: 0x27a60150  addiu       $a2, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D600u;
    if (runtime->hasFunction(0x21D600u)) {
        auto targetFn = runtime->lookupFunction(0x21D600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55EA80u; }
        if (ctx->pc != 0x55EA80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021D600_0x21d600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55EA80u; }
        if (ctx->pc != 0x55EA80u) { return; }
    }
    ctx->pc = 0x55EA80u;
label_55ea80:
    // 0x55ea80: 0x8e04028c  lw          $a0, 0x28C($s0)
    ctx->pc = 0x55ea80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 652)));
label_55ea84:
    // 0x55ea84: 0xc087884  jal         func_21E210
label_55ea88:
    if (ctx->pc == 0x55EA88u) {
        ctx->pc = 0x55EA88u;
            // 0x55ea88: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x55EA8Cu;
        goto label_55ea8c;
    }
    ctx->pc = 0x55EA84u;
    SET_GPR_U32(ctx, 31, 0x55EA8Cu);
    ctx->pc = 0x55EA88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55EA84u;
            // 0x55ea88: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21E210u;
    if (runtime->hasFunction(0x21E210u)) {
        auto targetFn = runtime->lookupFunction(0x21E210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55EA8Cu; }
        if (ctx->pc != 0x55EA8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021E210_0x21e210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55EA8Cu; }
        if (ctx->pc != 0x55EA8Cu) { return; }
    }
    ctx->pc = 0x55EA8Cu;
label_55ea8c:
    // 0x55ea8c: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x55ea8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
label_55ea90:
    // 0x55ea90: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x55ea90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_55ea94:
    // 0x55ea94: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x55ea94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_55ea98:
    // 0x55ea98: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x55ea98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_55ea9c:
    // 0x55ea9c: 0xc1578b4  jal         func_55E2D0
label_55eaa0:
    if (ctx->pc == 0x55EAA0u) {
        ctx->pc = 0x55EAA0u;
            // 0x55eaa0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x55EAA4u;
        goto label_55eaa4;
    }
    ctx->pc = 0x55EA9Cu;
    SET_GPR_U32(ctx, 31, 0x55EAA4u);
    ctx->pc = 0x55EAA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55EA9Cu;
            // 0x55eaa0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x55E2D0u;
    if (runtime->hasFunction(0x55E2D0u)) {
        auto targetFn = runtime->lookupFunction(0x55E2D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55EAA4u; }
        if (ctx->pc != 0x55EAA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0055E2D0_0x55e2d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55EAA4u; }
        if (ctx->pc != 0x55EAA4u) { return; }
    }
    ctx->pc = 0x55EAA4u;
label_55eaa4:
    // 0x55eaa4: 0x8e040290  lw          $a0, 0x290($s0)
    ctx->pc = 0x55eaa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 656)));
label_55eaa8:
    // 0x55eaa8: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x55eaa8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_55eaac:
    // 0x55eaac: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_55eab0:
    if (ctx->pc == 0x55EAB0u) {
        ctx->pc = 0x55EAB4u;
        goto label_55eab4;
    }
    ctx->pc = 0x55EAACu;
    {
        const bool branch_taken_0x55eaac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x55eaac) {
            ctx->pc = 0x55EAE8u;
            goto label_55eae8;
        }
    }
    ctx->pc = 0x55EAB4u;
label_55eab4:
    // 0x55eab4: 0x84820006  lh          $v0, 0x6($a0)
    ctx->pc = 0x55eab4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_55eab8:
    // 0x55eab8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x55eab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_55eabc:
    // 0x55eabc: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x55eabcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
label_55eac0:
    // 0x55eac0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x55eac0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_55eac4:
    // 0x55eac4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x55eac4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_55eac8:
    // 0x55eac8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_55eacc:
    if (ctx->pc == 0x55EACCu) {
        ctx->pc = 0x55EAD0u;
        goto label_55ead0;
    }
    ctx->pc = 0x55EAC8u;
    {
        const bool branch_taken_0x55eac8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x55eac8) {
            ctx->pc = 0x55EAE8u;
            goto label_55eae8;
        }
    }
    ctx->pc = 0x55EAD0u;
label_55ead0:
    // 0x55ead0: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_55ead4:
    if (ctx->pc == 0x55EAD4u) {
        ctx->pc = 0x55EAD8u;
        goto label_55ead8;
    }
    ctx->pc = 0x55EAD0u;
    {
        const bool branch_taken_0x55ead0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x55ead0) {
            ctx->pc = 0x55EAE8u;
            goto label_55eae8;
        }
    }
    ctx->pc = 0x55EAD8u;
label_55ead8:
    // 0x55ead8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x55ead8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_55eadc:
    // 0x55eadc: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x55eadcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_55eae0:
    // 0x55eae0: 0x320f809  jalr        $t9
label_55eae4:
    if (ctx->pc == 0x55EAE4u) {
        ctx->pc = 0x55EAE4u;
            // 0x55eae4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x55EAE8u;
        goto label_55eae8;
    }
    ctx->pc = 0x55EAE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x55EAE8u);
        ctx->pc = 0x55EAE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55EAE0u;
            // 0x55eae4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x55EAE8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x55EAE8u; }
            if (ctx->pc != 0x55EAE8u) { return; }
        }
        }
    }
    ctx->pc = 0x55EAE8u;
label_55eae8:
    // 0x55eae8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x55eae8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_55eaec:
    // 0x55eaec: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x55eaecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_55eaf0:
    // 0x55eaf0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x55eaf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_55eaf4:
    // 0x55eaf4: 0xc08c5bc  jal         func_2316F0
label_55eaf8:
    if (ctx->pc == 0x55EAF8u) {
        ctx->pc = 0x55EAF8u;
            // 0x55eaf8: 0x8e05028c  lw          $a1, 0x28C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 652)));
        ctx->pc = 0x55EAFCu;
        goto label_55eafc;
    }
    ctx->pc = 0x55EAF4u;
    SET_GPR_U32(ctx, 31, 0x55EAFCu);
    ctx->pc = 0x55EAF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55EAF4u;
            // 0x55eaf8: 0x8e05028c  lw          $a1, 0x28C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 652)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2316F0u;
    if (runtime->hasFunction(0x2316F0u)) {
        auto targetFn = runtime->lookupFunction(0x2316F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55EAFCu; }
        if (ctx->pc != 0x55EAFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002316F0_0x2316f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55EAFCu; }
        if (ctx->pc != 0x55EAFCu) { return; }
    }
    ctx->pc = 0x55EAFCu;
label_55eafc:
    // 0x55eafc: 0x8e04028c  lw          $a0, 0x28C($s0)
    ctx->pc = 0x55eafcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 652)));
label_55eb00:
    // 0x55eb00: 0x94830004  lhu         $v1, 0x4($a0)
    ctx->pc = 0x55eb00u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_55eb04:
    // 0x55eb04: 0x5060000f  beql        $v1, $zero, . + 4 + (0xF << 2)
label_55eb08:
    if (ctx->pc == 0x55EB08u) {
        ctx->pc = 0x55EB08u;
            // 0x55eb08: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x55EB0Cu;
        goto label_55eb0c;
    }
    ctx->pc = 0x55EB04u;
    {
        const bool branch_taken_0x55eb04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x55eb04) {
            ctx->pc = 0x55EB08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x55EB04u;
            // 0x55eb08: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x55EB44u;
            goto label_55eb44;
        }
    }
    ctx->pc = 0x55EB0Cu;
label_55eb0c:
    // 0x55eb0c: 0x84830006  lh          $v1, 0x6($a0)
    ctx->pc = 0x55eb0cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_55eb10:
    // 0x55eb10: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x55eb10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_55eb14:
    // 0x55eb14: 0xa4830006  sh          $v1, 0x6($a0)
    ctx->pc = 0x55eb14u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 3));
label_55eb18:
    // 0x55eb18: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x55eb18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_55eb1c:
    // 0x55eb1c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x55eb1cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_55eb20:
    // 0x55eb20: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_55eb24:
    if (ctx->pc == 0x55EB24u) {
        ctx->pc = 0x55EB28u;
        goto label_55eb28;
    }
    ctx->pc = 0x55EB20u;
    {
        const bool branch_taken_0x55eb20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x55eb20) {
            ctx->pc = 0x55EB40u;
            goto label_55eb40;
        }
    }
    ctx->pc = 0x55EB28u;
label_55eb28:
    // 0x55eb28: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_55eb2c:
    if (ctx->pc == 0x55EB2Cu) {
        ctx->pc = 0x55EB30u;
        goto label_55eb30;
    }
    ctx->pc = 0x55EB28u;
    {
        const bool branch_taken_0x55eb28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x55eb28) {
            ctx->pc = 0x55EB40u;
            goto label_55eb40;
        }
    }
    ctx->pc = 0x55EB30u;
label_55eb30:
    // 0x55eb30: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x55eb30u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_55eb34:
    // 0x55eb34: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x55eb34u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_55eb38:
    // 0x55eb38: 0x320f809  jalr        $t9
label_55eb3c:
    if (ctx->pc == 0x55EB3Cu) {
        ctx->pc = 0x55EB3Cu;
            // 0x55eb3c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x55EB40u;
        goto label_55eb40;
    }
    ctx->pc = 0x55EB38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x55EB40u);
        ctx->pc = 0x55EB3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55EB38u;
            // 0x55eb3c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x55EB40u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x55EB40u; }
            if (ctx->pc != 0x55EB40u) { return; }
        }
        }
    }
    ctx->pc = 0x55EB40u;
label_55eb40:
    // 0x55eb40: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x55eb40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_55eb44:
    // 0x55eb44: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x55eb44u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_55eb48:
    // 0x55eb48: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x55eb48u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_55eb4c:
    // 0x55eb4c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x55eb4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_55eb50:
    // 0x55eb50: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x55eb50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_55eb54:
    // 0x55eb54: 0x3e00008  jr          $ra
label_55eb58:
    if (ctx->pc == 0x55EB58u) {
        ctx->pc = 0x55EB58u;
            // 0x55eb58: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->pc = 0x55EB5Cu;
        goto label_55eb5c;
    }
    ctx->pc = 0x55EB54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x55EB58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55EB54u;
            // 0x55eb58: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x55EB5Cu;
label_55eb5c:
    // 0x55eb5c: 0x0  nop
    ctx->pc = 0x55eb5cu;
    // NOP
label_55eb60:
    // 0x55eb60: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x55eb60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_55eb64:
    // 0x55eb64: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x55eb64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_55eb68:
    // 0x55eb68: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x55eb68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_55eb6c:
    // 0x55eb6c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x55eb6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_55eb70:
    // 0x55eb70: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x55eb70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_55eb74:
    // 0x55eb74: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x55eb74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_55eb78:
    // 0x55eb78: 0x8c86028c  lw          $a2, 0x28C($a0)
    ctx->pc = 0x55eb78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 652)));
label_55eb7c:
    // 0x55eb7c: 0x8c63e3e0  lw          $v1, -0x1C20($v1)
    ctx->pc = 0x55eb7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960096)));
label_55eb80:
    // 0x55eb80: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
label_55eb84:
    if (ctx->pc == 0x55EB84u) {
        ctx->pc = 0x55EB84u;
            // 0x55eb84: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x55EB88u;
        goto label_55eb88;
    }
    ctx->pc = 0x55EB80u;
    {
        const bool branch_taken_0x55eb80 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x55EB84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55EB80u;
            // 0x55eb84: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x55eb80) {
            ctx->pc = 0x55EB94u;
            goto label_55eb94;
        }
    }
    ctx->pc = 0x55EB88u;
label_55eb88:
    // 0x55eb88: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x55eb88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_55eb8c:
    // 0x55eb8c: 0xc08c614  jal         func_231850
label_55eb90:
    if (ctx->pc == 0x55EB90u) {
        ctx->pc = 0x55EB90u;
            // 0x55eb90: 0x27a4004c  addiu       $a0, $sp, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
        ctx->pc = 0x55EB94u;
        goto label_55eb94;
    }
    ctx->pc = 0x55EB8Cu;
    SET_GPR_U32(ctx, 31, 0x55EB94u);
    ctx->pc = 0x55EB90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55EB8Cu;
            // 0x55eb90: 0x27a4004c  addiu       $a0, $sp, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231850u;
    if (runtime->hasFunction(0x231850u)) {
        auto targetFn = runtime->lookupFunction(0x231850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55EB94u; }
        if (ctx->pc != 0x55EB94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231850_0x231850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55EB94u; }
        if (ctx->pc != 0x55EB94u) { return; }
    }
    ctx->pc = 0x55EB94u;
label_55eb94:
    // 0x55eb94: 0xae00028c  sw          $zero, 0x28C($s0)
    ctx->pc = 0x55eb94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 652), GPR_U32(ctx, 0));
label_55eb98:
    // 0x55eb98: 0x8e030284  lw          $v1, 0x284($s0)
    ctx->pc = 0x55eb98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 644)));
label_55eb9c:
    // 0x55eb9c: 0x50600011  beql        $v1, $zero, . + 4 + (0x11 << 2)
label_55eba0:
    if (ctx->pc == 0x55EBA0u) {
        ctx->pc = 0x55EBA0u;
            // 0x55eba0: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x55EBA4u;
        goto label_55eba4;
    }
    ctx->pc = 0x55EB9Cu;
    {
        const bool branch_taken_0x55eb9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x55eb9c) {
            ctx->pc = 0x55EBA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x55EB9Cu;
            // 0x55eba0: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x55EBE4u;
            goto label_55ebe4;
        }
    }
    ctx->pc = 0x55EBA4u;
label_55eba4:
    // 0x55eba4: 0x8e030284  lw          $v1, 0x284($s0)
    ctx->pc = 0x55eba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 644)));
label_55eba8:
    // 0x55eba8: 0x8e120280  lw          $s2, 0x280($s0)
    ctx->pc = 0x55eba8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 640)));
label_55ebac:
    // 0x55ebac: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x55ebacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_55ebb0:
    // 0x55ebb0: 0x2438821  addu        $s1, $s2, $v1
    ctx->pc = 0x55ebb0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
label_55ebb4:
    // 0x55ebb4: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x55ebb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_55ebb8:
    // 0x55ebb8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_55ebbc:
    if (ctx->pc == 0x55EBBCu) {
        ctx->pc = 0x55EBC0u;
        goto label_55ebc0;
    }
    ctx->pc = 0x55EBB8u;
    {
        const bool branch_taken_0x55ebb8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x55ebb8) {
            ctx->pc = 0x55EBD0u;
            goto label_55ebd0;
        }
    }
    ctx->pc = 0x55EBC0u;
label_55ebc0:
    // 0x55ebc0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x55ebc0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_55ebc4:
    // 0x55ebc4: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x55ebc4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_55ebc8:
    // 0x55ebc8: 0x320f809  jalr        $t9
label_55ebcc:
    if (ctx->pc == 0x55EBCCu) {
        ctx->pc = 0x55EBCCu;
            // 0x55ebcc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x55EBD0u;
        goto label_55ebd0;
    }
    ctx->pc = 0x55EBC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x55EBD0u);
        ctx->pc = 0x55EBCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55EBC8u;
            // 0x55ebcc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x55EBD0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x55EBD0u; }
            if (ctx->pc != 0x55EBD0u) { return; }
        }
        }
    }
    ctx->pc = 0x55EBD0u;
label_55ebd0:
    // 0x55ebd0: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x55ebd0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_55ebd4:
    // 0x55ebd4: 0x5651fff8  bnel        $s2, $s1, . + 4 + (-0x8 << 2)
label_55ebd8:
    if (ctx->pc == 0x55EBD8u) {
        ctx->pc = 0x55EBD8u;
            // 0x55ebd8: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->pc = 0x55EBDCu;
        goto label_55ebdc;
    }
    ctx->pc = 0x55EBD4u;
    {
        const bool branch_taken_0x55ebd4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 17));
        if (branch_taken_0x55ebd4) {
            ctx->pc = 0x55EBD8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x55EBD4u;
            // 0x55ebd8: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x55EBB8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_55ebb8;
        }
    }
    ctx->pc = 0x55EBDCu;
label_55ebdc:
    // 0x55ebdc: 0xae000284  sw          $zero, 0x284($s0)
    ctx->pc = 0x55ebdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 644), GPR_U32(ctx, 0));
label_55ebe0:
    // 0x55ebe0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x55ebe0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_55ebe4:
    // 0x55ebe4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x55ebe4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_55ebe8:
    // 0x55ebe8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x55ebe8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_55ebec:
    // 0x55ebec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x55ebecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_55ebf0:
    // 0x55ebf0: 0x3e00008  jr          $ra
label_55ebf4:
    if (ctx->pc == 0x55EBF4u) {
        ctx->pc = 0x55EBF4u;
            // 0x55ebf4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x55EBF8u;
        goto label_55ebf8;
    }
    ctx->pc = 0x55EBF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x55EBF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55EBF0u;
            // 0x55ebf4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x55EBF8u;
label_55ebf8:
    // 0x55ebf8: 0x0  nop
    ctx->pc = 0x55ebf8u;
    // NOP
label_55ebfc:
    // 0x55ebfc: 0x0  nop
    ctx->pc = 0x55ebfcu;
    // NOP
label_55ec00:
    // 0x55ec00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x55ec00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_55ec04:
    // 0x55ec04: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x55ec04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_55ec08:
    // 0x55ec08: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x55ec08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_55ec0c:
    // 0x55ec0c: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x55ec0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_55ec10:
    // 0x55ec10: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x55ec10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_55ec14:
    // 0x55ec14: 0x8c83007c  lw          $v1, 0x7C($a0)
    ctx->pc = 0x55ec14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_55ec18:
    // 0x55ec18: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x55ec18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_55ec1c:
    // 0x55ec1c: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x55ec1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_55ec20:
    // 0x55ec20: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x55ec20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_55ec24:
    // 0x55ec24: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x55ec24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_55ec28:
    // 0x55ec28: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x55ec28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_55ec2c:
    // 0x55ec2c: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x55ec2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_55ec30:
    // 0x55ec30: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x55ec30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_55ec34:
    // 0x55ec34: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x55ec34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_55ec38:
    // 0x55ec38: 0x8c42fffc  lw          $v0, -0x4($v0)
    ctx->pc = 0x55ec38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_55ec3c:
    // 0x55ec3c: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x55ec3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_55ec40:
    // 0x55ec40: 0x8c82007c  lw          $v0, 0x7C($a0)
    ctx->pc = 0x55ec40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_55ec44:
    // 0x55ec44: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x55ec44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_55ec48:
    // 0x55ec48: 0xac82007c  sw          $v0, 0x7C($a0)
    ctx->pc = 0x55ec48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
label_55ec4c:
    // 0x55ec4c: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x55ec4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_55ec50:
    // 0x55ec50: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x55ec50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_55ec54:
    // 0x55ec54: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x55ec54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_55ec58:
    // 0x55ec58: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x55ec58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_55ec5c:
    // 0x55ec5c: 0xc0a997c  jal         func_2A65F0
label_55ec60:
    if (ctx->pc == 0x55EC60u) {
        ctx->pc = 0x55EC60u;
            // 0x55ec60: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->pc = 0x55EC64u;
        goto label_55ec64;
    }
    ctx->pc = 0x55EC5Cu;
    SET_GPR_U32(ctx, 31, 0x55EC64u);
    ctx->pc = 0x55EC60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55EC5Cu;
            // 0x55ec60: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55EC64u; }
        if (ctx->pc != 0x55EC64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55EC64u; }
        if (ctx->pc != 0x55EC64u) { return; }
    }
    ctx->pc = 0x55EC64u;
label_55ec64:
    // 0x55ec64: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x55ec64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_55ec68:
    // 0x55ec68: 0xc0d879c  jal         func_361E70
label_55ec6c:
    if (ctx->pc == 0x55EC6Cu) {
        ctx->pc = 0x55EC6Cu;
            // 0x55ec6c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x55EC70u;
        goto label_55ec70;
    }
    ctx->pc = 0x55EC68u;
    SET_GPR_U32(ctx, 31, 0x55EC70u);
    ctx->pc = 0x55EC6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55EC68u;
            // 0x55ec6c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361E70u;
    if (runtime->hasFunction(0x361E70u)) {
        auto targetFn = runtime->lookupFunction(0x361E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55EC70u; }
        if (ctx->pc != 0x55EC70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361E70_0x361e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55EC70u; }
        if (ctx->pc != 0x55EC70u) { return; }
    }
    ctx->pc = 0x55EC70u;
label_55ec70:
    // 0x55ec70: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x55ec70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_55ec74:
    // 0x55ec74: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x55ec74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_55ec78:
    // 0x55ec78: 0x3e00008  jr          $ra
label_55ec7c:
    if (ctx->pc == 0x55EC7Cu) {
        ctx->pc = 0x55EC7Cu;
            // 0x55ec7c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x55EC80u;
        goto label_55ec80;
    }
    ctx->pc = 0x55EC78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x55EC7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55EC78u;
            // 0x55ec7c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x55EC80u;
label_55ec80:
    // 0x55ec80: 0x3e00008  jr          $ra
label_55ec84:
    if (ctx->pc == 0x55EC84u) {
        ctx->pc = 0x55EC88u;
        goto label_55ec88;
    }
    ctx->pc = 0x55EC80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x55EC88u;
label_55ec88:
    // 0x55ec88: 0x0  nop
    ctx->pc = 0x55ec88u;
    // NOP
label_55ec8c:
    // 0x55ec8c: 0x0  nop
    ctx->pc = 0x55ec8cu;
    // NOP
label_55ec90:
    // 0x55ec90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x55ec90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_55ec94:
    // 0x55ec94: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x55ec94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_55ec98:
    // 0x55ec98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x55ec98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_55ec9c:
    // 0x55ec9c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x55ec9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_55eca0:
    // 0x55eca0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x55eca0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_55eca4:
    // 0x55eca4: 0x12000030  beqz        $s0, . + 4 + (0x30 << 2)
label_55eca8:
    if (ctx->pc == 0x55ECA8u) {
        ctx->pc = 0x55ECA8u;
            // 0x55eca8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x55ECACu;
        goto label_55ecac;
    }
    ctx->pc = 0x55ECA4u;
    {
        const bool branch_taken_0x55eca4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x55ECA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55ECA4u;
            // 0x55eca8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x55eca4) {
            ctx->pc = 0x55ED68u;
            goto label_55ed68;
        }
    }
    ctx->pc = 0x55ECACu;
label_55ecac:
    // 0x55ecac: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x55ecacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_55ecb0:
    // 0x55ecb0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x55ecb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_55ecb4:
    // 0x55ecb4: 0x24637c80  addiu       $v1, $v1, 0x7C80
    ctx->pc = 0x55ecb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31872));
label_55ecb8:
    // 0x55ecb8: 0x24427cb8  addiu       $v0, $v0, 0x7CB8
    ctx->pc = 0x55ecb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31928));
label_55ecbc:
    // 0x55ecbc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x55ecbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_55ecc0:
    // 0x55ecc0: 0x260400b4  addiu       $a0, $s0, 0xB4
    ctx->pc = 0x55ecc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 180));
label_55ecc4:
    // 0x55ecc4: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
label_55ecc8:
    if (ctx->pc == 0x55ECC8u) {
        ctx->pc = 0x55ECC8u;
            // 0x55ecc8: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x55ECCCu;
        goto label_55eccc;
    }
    ctx->pc = 0x55ECC4u;
    {
        const bool branch_taken_0x55ecc4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x55ECC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55ECC4u;
            // 0x55ecc8: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x55ecc4) {
            ctx->pc = 0x55ECECu;
            goto label_55ecec;
        }
    }
    ctx->pc = 0x55ECCCu;
label_55eccc:
    // 0x55eccc: 0x50800008  beql        $a0, $zero, . + 4 + (0x8 << 2)
label_55ecd0:
    if (ctx->pc == 0x55ECD0u) {
        ctx->pc = 0x55ECD0u;
            // 0x55ecd0: 0x26040094  addiu       $a0, $s0, 0x94 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 148));
        ctx->pc = 0x55ECD4u;
        goto label_55ecd4;
    }
    ctx->pc = 0x55ECCCu;
    {
        const bool branch_taken_0x55eccc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x55eccc) {
            ctx->pc = 0x55ECD0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x55ECCCu;
            // 0x55ecd0: 0x26040094  addiu       $a0, $s0, 0x94 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 148));
        ctx->in_delay_slot = false;
            ctx->pc = 0x55ECF0u;
            goto label_55ecf0;
        }
    }
    ctx->pc = 0x55ECD4u;
label_55ecd4:
    // 0x55ecd4: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_55ecd8:
    if (ctx->pc == 0x55ECD8u) {
        ctx->pc = 0x55ECDCu;
        goto label_55ecdc;
    }
    ctx->pc = 0x55ECD4u;
    {
        const bool branch_taken_0x55ecd4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x55ecd4) {
            ctx->pc = 0x55ECECu;
            goto label_55ecec;
        }
    }
    ctx->pc = 0x55ECDCu;
label_55ecdc:
    // 0x55ecdc: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_55ece0:
    if (ctx->pc == 0x55ECE0u) {
        ctx->pc = 0x55ECE4u;
        goto label_55ece4;
    }
    ctx->pc = 0x55ECDCu;
    {
        const bool branch_taken_0x55ecdc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x55ecdc) {
            ctx->pc = 0x55ECECu;
            goto label_55ecec;
        }
    }
    ctx->pc = 0x55ECE4u;
label_55ece4:
    // 0x55ece4: 0xc0b4c14  jal         func_2D3050
label_55ece8:
    if (ctx->pc == 0x55ECE8u) {
        ctx->pc = 0x55ECE8u;
            // 0x55ece8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x55ECECu;
        goto label_55ecec;
    }
    ctx->pc = 0x55ECE4u;
    SET_GPR_U32(ctx, 31, 0x55ECECu);
    ctx->pc = 0x55ECE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55ECE4u;
            // 0x55ece8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D3050u;
    if (runtime->hasFunction(0x2D3050u)) {
        auto targetFn = runtime->lookupFunction(0x2D3050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55ECECu; }
        if (ctx->pc != 0x55ECECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D3050_0x2d3050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55ECECu; }
        if (ctx->pc != 0x55ECECu) { return; }
    }
    ctx->pc = 0x55ECECu;
label_55ecec:
    // 0x55ecec: 0x26040094  addiu       $a0, $s0, 0x94
    ctx->pc = 0x55ececu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 148));
label_55ecf0:
    // 0x55ecf0: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
label_55ecf4:
    if (ctx->pc == 0x55ECF4u) {
        ctx->pc = 0x55ECF8u;
        goto label_55ecf8;
    }
    ctx->pc = 0x55ECF0u;
    {
        const bool branch_taken_0x55ecf0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x55ecf0) {
            ctx->pc = 0x55ED18u;
            goto label_55ed18;
        }
    }
    ctx->pc = 0x55ECF8u;
label_55ecf8:
    // 0x55ecf8: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_55ecfc:
    if (ctx->pc == 0x55ECFCu) {
        ctx->pc = 0x55ED00u;
        goto label_55ed00;
    }
    ctx->pc = 0x55ECF8u;
    {
        const bool branch_taken_0x55ecf8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x55ecf8) {
            ctx->pc = 0x55ED18u;
            goto label_55ed18;
        }
    }
    ctx->pc = 0x55ED00u;
label_55ed00:
    // 0x55ed00: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_55ed04:
    if (ctx->pc == 0x55ED04u) {
        ctx->pc = 0x55ED08u;
        goto label_55ed08;
    }
    ctx->pc = 0x55ED00u;
    {
        const bool branch_taken_0x55ed00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x55ed00) {
            ctx->pc = 0x55ED18u;
            goto label_55ed18;
        }
    }
    ctx->pc = 0x55ED08u;
label_55ed08:
    // 0x55ed08: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_55ed0c:
    if (ctx->pc == 0x55ED0Cu) {
        ctx->pc = 0x55ED10u;
        goto label_55ed10;
    }
    ctx->pc = 0x55ED08u;
    {
        const bool branch_taken_0x55ed08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x55ed08) {
            ctx->pc = 0x55ED18u;
            goto label_55ed18;
        }
    }
    ctx->pc = 0x55ED10u;
label_55ed10:
    // 0x55ed10: 0xc0b4c14  jal         func_2D3050
label_55ed14:
    if (ctx->pc == 0x55ED14u) {
        ctx->pc = 0x55ED14u;
            // 0x55ed14: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x55ED18u;
        goto label_55ed18;
    }
    ctx->pc = 0x55ED10u;
    SET_GPR_U32(ctx, 31, 0x55ED18u);
    ctx->pc = 0x55ED14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55ED10u;
            // 0x55ed14: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D3050u;
    if (runtime->hasFunction(0x2D3050u)) {
        auto targetFn = runtime->lookupFunction(0x2D3050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55ED18u; }
        if (ctx->pc != 0x55ED18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D3050_0x2d3050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55ED18u; }
        if (ctx->pc != 0x55ED18u) { return; }
    }
    ctx->pc = 0x55ED18u;
label_55ed18:
    // 0x55ed18: 0x5200000e  beql        $s0, $zero, . + 4 + (0xE << 2)
label_55ed1c:
    if (ctx->pc == 0x55ED1Cu) {
        ctx->pc = 0x55ED1Cu;
            // 0x55ed1c: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->pc = 0x55ED20u;
        goto label_55ed20;
    }
    ctx->pc = 0x55ED18u;
    {
        const bool branch_taken_0x55ed18 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x55ed18) {
            ctx->pc = 0x55ED1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x55ED18u;
            // 0x55ed1c: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x55ED54u;
            goto label_55ed54;
        }
    }
    ctx->pc = 0x55ED20u;
label_55ed20:
    // 0x55ed20: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x55ed20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_55ed24:
    // 0x55ed24: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x55ed24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_55ed28:
    // 0x55ed28: 0x24637cd0  addiu       $v1, $v1, 0x7CD0
    ctx->pc = 0x55ed28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31952));
label_55ed2c:
    // 0x55ed2c: 0x24427d08  addiu       $v0, $v0, 0x7D08
    ctx->pc = 0x55ed2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32008));
label_55ed30:
    // 0x55ed30: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x55ed30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_55ed34:
    // 0x55ed34: 0x26040090  addiu       $a0, $s0, 0x90
    ctx->pc = 0x55ed34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
label_55ed38:
    // 0x55ed38: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x55ed38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
label_55ed3c:
    // 0x55ed3c: 0xc0aed1c  jal         func_2BB470
label_55ed40:
    if (ctx->pc == 0x55ED40u) {
        ctx->pc = 0x55ED40u;
            // 0x55ed40: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x55ED44u;
        goto label_55ed44;
    }
    ctx->pc = 0x55ED3Cu;
    SET_GPR_U32(ctx, 31, 0x55ED44u);
    ctx->pc = 0x55ED40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55ED3Cu;
            // 0x55ed40: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB470u;
    if (runtime->hasFunction(0x2BB470u)) {
        auto targetFn = runtime->lookupFunction(0x2BB470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55ED44u; }
        if (ctx->pc != 0x55ED44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB470_0x2bb470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55ED44u; }
        if (ctx->pc != 0x55ED44u) { return; }
    }
    ctx->pc = 0x55ED44u;
label_55ed44:
    // 0x55ed44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x55ed44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_55ed48:
    // 0x55ed48: 0xc1573f8  jal         func_55CFE0
label_55ed4c:
    if (ctx->pc == 0x55ED4Cu) {
        ctx->pc = 0x55ED4Cu;
            // 0x55ed4c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x55ED50u;
        goto label_55ed50;
    }
    ctx->pc = 0x55ED48u;
    SET_GPR_U32(ctx, 31, 0x55ED50u);
    ctx->pc = 0x55ED4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55ED48u;
            // 0x55ed4c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x55CFE0u;
    if (runtime->hasFunction(0x55CFE0u)) {
        auto targetFn = runtime->lookupFunction(0x55CFE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55ED50u; }
        if (ctx->pc != 0x55ED50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0055CFE0_0x55cfe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55ED50u; }
        if (ctx->pc != 0x55ED50u) { return; }
    }
    ctx->pc = 0x55ED50u;
label_55ed50:
    // 0x55ed50: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x55ed50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_55ed54:
    // 0x55ed54: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x55ed54u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_55ed58:
    // 0x55ed58: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_55ed5c:
    if (ctx->pc == 0x55ED5Cu) {
        ctx->pc = 0x55ED5Cu;
            // 0x55ed5c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x55ED60u;
        goto label_55ed60;
    }
    ctx->pc = 0x55ED58u;
    {
        const bool branch_taken_0x55ed58 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x55ed58) {
            ctx->pc = 0x55ED5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x55ED58u;
            // 0x55ed5c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x55ED6Cu;
            goto label_55ed6c;
        }
    }
    ctx->pc = 0x55ED60u;
label_55ed60:
    // 0x55ed60: 0xc0400a8  jal         func_1002A0
label_55ed64:
    if (ctx->pc == 0x55ED64u) {
        ctx->pc = 0x55ED64u;
            // 0x55ed64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x55ED68u;
        goto label_55ed68;
    }
    ctx->pc = 0x55ED60u;
    SET_GPR_U32(ctx, 31, 0x55ED68u);
    ctx->pc = 0x55ED64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55ED60u;
            // 0x55ed64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55ED68u; }
        if (ctx->pc != 0x55ED68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55ED68u; }
        if (ctx->pc != 0x55ED68u) { return; }
    }
    ctx->pc = 0x55ED68u;
label_55ed68:
    // 0x55ed68: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x55ed68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_55ed6c:
    // 0x55ed6c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x55ed6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_55ed70:
    // 0x55ed70: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x55ed70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_55ed74:
    // 0x55ed74: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x55ed74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_55ed78:
    // 0x55ed78: 0x3e00008  jr          $ra
label_55ed7c:
    if (ctx->pc == 0x55ED7Cu) {
        ctx->pc = 0x55ED7Cu;
            // 0x55ed7c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x55ED80u;
        goto label_55ed80;
    }
    ctx->pc = 0x55ED78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x55ED7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55ED78u;
            // 0x55ed7c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x55ED80u;
label_55ed80:
    // 0x55ed80: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x55ed80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_55ed84:
    // 0x55ed84: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x55ed84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_55ed88:
    // 0x55ed88: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x55ed88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_55ed8c:
    // 0x55ed8c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x55ed8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_55ed90:
    // 0x55ed90: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x55ed90u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_55ed94:
    // 0x55ed94: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x55ed94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_55ed98:
    // 0x55ed98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x55ed98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_55ed9c:
    // 0x55ed9c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x55ed9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_55eda0:
    // 0x55eda0: 0x8c900070  lw          $s0, 0x70($a0)
    ctx->pc = 0x55eda0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_55eda4:
    // 0x55eda4: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_55eda8:
    if (ctx->pc == 0x55EDA8u) {
        ctx->pc = 0x55EDA8u;
            // 0x55eda8: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x55EDACu;
        goto label_55edac;
    }
    ctx->pc = 0x55EDA4u;
    {
        const bool branch_taken_0x55eda4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x55EDA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55EDA4u;
            // 0x55eda8: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x55eda4) {
            ctx->pc = 0x55EDE8u;
            goto label_55ede8;
        }
    }
    ctx->pc = 0x55EDACu;
label_55edac:
    // 0x55edac: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x55edacu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_55edb0:
    // 0x55edb0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x55edb0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_55edb4:
    // 0x55edb4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x55edb4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_55edb8:
    // 0x55edb8: 0x8e820074  lw          $v0, 0x74($s4)
    ctx->pc = 0x55edb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_55edbc:
    // 0x55edbc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x55edbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_55edc0:
    // 0x55edc0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x55edc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_55edc4:
    // 0x55edc4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x55edc4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_55edc8:
    // 0x55edc8: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x55edc8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_55edcc:
    // 0x55edcc: 0x320f809  jalr        $t9
label_55edd0:
    if (ctx->pc == 0x55EDD0u) {
        ctx->pc = 0x55EDD4u;
        goto label_55edd4;
    }
    ctx->pc = 0x55EDCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x55EDD4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x55EDD4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x55EDD4u; }
            if (ctx->pc != 0x55EDD4u) { return; }
        }
        }
    }
    ctx->pc = 0x55EDD4u;
label_55edd4:
    // 0x55edd4: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x55edd4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_55edd8:
    // 0x55edd8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x55edd8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_55eddc:
    // 0x55eddc: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x55eddcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_55ede0:
    // 0x55ede0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_55ede4:
    if (ctx->pc == 0x55EDE4u) {
        ctx->pc = 0x55EDE4u;
            // 0x55ede4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x55EDE8u;
        goto label_55ede8;
    }
    ctx->pc = 0x55EDE0u;
    {
        const bool branch_taken_0x55ede0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x55EDE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55EDE0u;
            // 0x55ede4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x55ede0) {
            ctx->pc = 0x55EDB8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_55edb8;
        }
    }
    ctx->pc = 0x55EDE8u;
label_55ede8:
    // 0x55ede8: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x55ede8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_55edec:
    // 0x55edec: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x55edecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_55edf0:
    // 0x55edf0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x55edf0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_55edf4:
    // 0x55edf4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x55edf4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_55edf8:
    // 0x55edf8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x55edf8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_55edfc:
    // 0x55edfc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x55edfcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_55ee00:
    // 0x55ee00: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x55ee00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_55ee04:
    // 0x55ee04: 0x3e00008  jr          $ra
label_55ee08:
    if (ctx->pc == 0x55EE08u) {
        ctx->pc = 0x55EE08u;
            // 0x55ee08: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x55EE0Cu;
        goto label_55ee0c;
    }
    ctx->pc = 0x55EE04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x55EE08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55EE04u;
            // 0x55ee08: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x55EE0Cu;
label_55ee0c:
    // 0x55ee0c: 0x0  nop
    ctx->pc = 0x55ee0cu;
    // NOP
label_55ee10:
    // 0x55ee10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x55ee10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_55ee14:
    // 0x55ee14: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x55ee14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_55ee18:
    // 0x55ee18: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x55ee18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_55ee1c:
    // 0x55ee1c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x55ee1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_55ee20:
    // 0x55ee20: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x55ee20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_55ee24:
    // 0x55ee24: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x55ee24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_55ee28:
    // 0x55ee28: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_55ee2c:
    if (ctx->pc == 0x55EE2Cu) {
        ctx->pc = 0x55EE2Cu;
            // 0x55ee2c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x55EE30u;
        goto label_55ee30;
    }
    ctx->pc = 0x55EE28u;
    {
        const bool branch_taken_0x55ee28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x55EE2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55EE28u;
            // 0x55ee2c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x55ee28) {
            ctx->pc = 0x55EE58u;
            goto label_55ee58;
        }
    }
    ctx->pc = 0x55EE30u;
label_55ee30:
    // 0x55ee30: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x55ee30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_55ee34:
    // 0x55ee34: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x55ee34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_55ee38:
    // 0x55ee38: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x55ee38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_55ee3c:
    // 0x55ee3c: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x55ee3cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_55ee40:
    // 0x55ee40: 0x320f809  jalr        $t9
label_55ee44:
    if (ctx->pc == 0x55EE44u) {
        ctx->pc = 0x55EE48u;
        goto label_55ee48;
    }
    ctx->pc = 0x55EE40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x55EE48u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x55EE48u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x55EE48u; }
            if (ctx->pc != 0x55EE48u) { return; }
        }
        }
    }
    ctx->pc = 0x55EE48u;
label_55ee48:
    // 0x55ee48: 0x26240084  addiu       $a0, $s1, 0x84
    ctx->pc = 0x55ee48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_55ee4c:
    // 0x55ee4c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x55ee4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_55ee50:
    // 0x55ee50: 0xc0d86a0  jal         func_361A80
label_55ee54:
    if (ctx->pc == 0x55EE54u) {
        ctx->pc = 0x55EE54u;
            // 0x55ee54: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x55EE58u;
        goto label_55ee58;
    }
    ctx->pc = 0x55EE50u;
    SET_GPR_U32(ctx, 31, 0x55EE58u);
    ctx->pc = 0x55EE54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55EE50u;
            // 0x55ee54: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361A80u;
    if (runtime->hasFunction(0x361A80u)) {
        auto targetFn = runtime->lookupFunction(0x361A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55EE58u; }
        if (ctx->pc != 0x55EE58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361A80_0x361a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55EE58u; }
        if (ctx->pc != 0x55EE58u) { return; }
    }
    ctx->pc = 0x55EE58u;
label_55ee58:
    // 0x55ee58: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x55ee58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_55ee5c:
    // 0x55ee5c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x55ee5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_55ee60:
    // 0x55ee60: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x55ee60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_55ee64:
    // 0x55ee64: 0x3e00008  jr          $ra
label_55ee68:
    if (ctx->pc == 0x55EE68u) {
        ctx->pc = 0x55EE68u;
            // 0x55ee68: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x55EE6Cu;
        goto label_55ee6c;
    }
    ctx->pc = 0x55EE64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x55EE68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55EE64u;
            // 0x55ee68: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x55EE6Cu;
label_55ee6c:
    // 0x55ee6c: 0x0  nop
    ctx->pc = 0x55ee6cu;
    // NOP
label_55ee70:
    // 0x55ee70: 0x8157390  j           func_55CE40
label_55ee74:
    if (ctx->pc == 0x55EE74u) {
        ctx->pc = 0x55EE74u;
            // 0x55ee74: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x55EE78u;
        goto label_55ee78;
    }
    ctx->pc = 0x55EE70u;
    ctx->pc = 0x55EE74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55EE70u;
            // 0x55ee74: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x55CE40u;
    {
        auto targetFn = runtime->lookupFunction(0x55CE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x55EE78u;
label_55ee78:
    // 0x55ee78: 0x0  nop
    ctx->pc = 0x55ee78u;
    // NOP
label_55ee7c:
    // 0x55ee7c: 0x0  nop
    ctx->pc = 0x55ee7cu;
    // NOP
label_55ee80:
    // 0x55ee80: 0x8157b24  j           func_55EC90
label_55ee84:
    if (ctx->pc == 0x55EE84u) {
        ctx->pc = 0x55EE84u;
            // 0x55ee84: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x55EE88u;
        goto label_55ee88;
    }
    ctx->pc = 0x55EE80u;
    ctx->pc = 0x55EE84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55EE80u;
            // 0x55ee84: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x55EC90u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_55ec90;
    ctx->pc = 0x55EE88u;
label_55ee88:
    // 0x55ee88: 0x0  nop
    ctx->pc = 0x55ee88u;
    // NOP
label_55ee8c:
    // 0x55ee8c: 0x0  nop
    ctx->pc = 0x55ee8cu;
    // NOP
label_55ee90:
    // 0x55ee90: 0x81573f8  j           func_55CFE0
label_55ee94:
    if (ctx->pc == 0x55EE94u) {
        ctx->pc = 0x55EE94u;
            // 0x55ee94: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x55EE98u;
        goto label_55ee98;
    }
    ctx->pc = 0x55EE90u;
    ctx->pc = 0x55EE94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55EE90u;
            // 0x55ee94: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x55CFE0u;
    if (runtime->hasFunction(0x55CFE0u)) {
        auto targetFn = runtime->lookupFunction(0x55CFE0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0055CFE0_0x55cfe0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x55EE98u;
label_55ee98:
    // 0x55ee98: 0x0  nop
    ctx->pc = 0x55ee98u;
    // NOP
label_55ee9c:
    // 0x55ee9c: 0x0  nop
    ctx->pc = 0x55ee9cu;
    // NOP
label_55eea0:
    // 0x55eea0: 0x3e00008  jr          $ra
label_55eea4:
    if (ctx->pc == 0x55EEA4u) {
        ctx->pc = 0x55EEA8u;
        goto label_55eea8;
    }
    ctx->pc = 0x55EEA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x55EEA8u;
label_55eea8:
    // 0x55eea8: 0x0  nop
    ctx->pc = 0x55eea8u;
    // NOP
label_55eeac:
    // 0x55eeac: 0x0  nop
    ctx->pc = 0x55eeacu;
    // NOP
label_55eeb0:
    // 0x55eeb0: 0x3e00008  jr          $ra
label_55eeb4:
    if (ctx->pc == 0x55EEB4u) {
        ctx->pc = 0x55EEB4u;
            // 0x55eeb4: 0x34029471  ori         $v0, $zero, 0x9471 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)38001);
        ctx->pc = 0x55EEB8u;
        goto label_55eeb8;
    }
    ctx->pc = 0x55EEB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x55EEB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55EEB0u;
            // 0x55eeb4: 0x34029471  ori         $v0, $zero, 0x9471 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)38001);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x55EEB8u;
label_55eeb8:
    // 0x55eeb8: 0x0  nop
    ctx->pc = 0x55eeb8u;
    // NOP
label_55eebc:
    // 0x55eebc: 0x0  nop
    ctx->pc = 0x55eebcu;
    // NOP
label_55eec0:
    // 0x55eec0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x55eec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_55eec4:
    // 0x55eec4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x55eec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_55eec8:
    // 0x55eec8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x55eec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_55eecc:
    // 0x55eecc: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x55eeccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_55eed0:
    // 0x55eed0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x55eed0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_55eed4:
    // 0x55eed4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x55eed4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_55eed8:
    // 0x55eed8: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x55eed8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_55eedc:
    // 0x55eedc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x55eedcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_55eee0:
    // 0x55eee0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x55eee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_55eee4:
    // 0x55eee4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x55eee4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_55eee8:
    // 0x55eee8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x55eee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_55eeec:
    // 0x55eeec: 0x90840010  lbu         $a0, 0x10($a0)
    ctx->pc = 0x55eeecu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_55eef0:
    // 0x55eef0: 0x50830062  beql        $a0, $v1, . + 4 + (0x62 << 2)
label_55eef4:
    if (ctx->pc == 0x55EEF4u) {
        ctx->pc = 0x55EEF4u;
            // 0x55eef4: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->pc = 0x55EEF8u;
        goto label_55eef8;
    }
    ctx->pc = 0x55EEF0u;
    {
        const bool branch_taken_0x55eef0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x55eef0) {
            ctx->pc = 0x55EEF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x55EEF0u;
            // 0x55eef4: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x55F07Cu;
            goto label_55f07c;
        }
    }
    ctx->pc = 0x55EEF8u;
label_55eef8:
    // 0x55eef8: 0x1080005f  beqz        $a0, . + 4 + (0x5F << 2)
label_55eefc:
    if (ctx->pc == 0x55EEFCu) {
        ctx->pc = 0x55EF00u;
        goto label_55ef00;
    }
    ctx->pc = 0x55EEF8u;
    {
        const bool branch_taken_0x55eef8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x55eef8) {
            ctx->pc = 0x55F078u;
            goto label_55f078;
        }
    }
    ctx->pc = 0x55EF00u;
label_55ef00:
    // 0x55ef00: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x55ef00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_55ef04:
    // 0x55ef04: 0x1083005c  beq         $a0, $v1, . + 4 + (0x5C << 2)
label_55ef08:
    if (ctx->pc == 0x55EF08u) {
        ctx->pc = 0x55EF0Cu;
        goto label_55ef0c;
    }
    ctx->pc = 0x55EF04u;
    {
        const bool branch_taken_0x55ef04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x55ef04) {
            ctx->pc = 0x55F078u;
            goto label_55f078;
        }
    }
    ctx->pc = 0x55EF0Cu;
label_55ef0c:
    // 0x55ef0c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x55ef0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_55ef10:
    // 0x55ef10: 0x50830006  beql        $a0, $v1, . + 4 + (0x6 << 2)
label_55ef14:
    if (ctx->pc == 0x55EF14u) {
        ctx->pc = 0x55EF14u;
            // 0x55ef14: 0x8ea30058  lw          $v1, 0x58($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 88)));
        ctx->pc = 0x55EF18u;
        goto label_55ef18;
    }
    ctx->pc = 0x55EF10u;
    {
        const bool branch_taken_0x55ef10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x55ef10) {
            ctx->pc = 0x55EF14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x55EF10u;
            // 0x55ef14: 0x8ea30058  lw          $v1, 0x58($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 88)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x55EF2Cu;
            goto label_55ef2c;
        }
    }
    ctx->pc = 0x55EF18u;
label_55ef18:
    // 0x55ef18: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x55ef18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_55ef1c:
    // 0x55ef1c: 0x10830056  beq         $a0, $v1, . + 4 + (0x56 << 2)
label_55ef20:
    if (ctx->pc == 0x55EF20u) {
        ctx->pc = 0x55EF24u;
        goto label_55ef24;
    }
    ctx->pc = 0x55EF1Cu;
    {
        const bool branch_taken_0x55ef1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x55ef1c) {
            ctx->pc = 0x55F078u;
            goto label_55f078;
        }
    }
    ctx->pc = 0x55EF24u;
label_55ef24:
    // 0x55ef24: 0x10000054  b           . + 4 + (0x54 << 2)
label_55ef28:
    if (ctx->pc == 0x55EF28u) {
        ctx->pc = 0x55EF2Cu;
        goto label_55ef2c;
    }
    ctx->pc = 0x55EF24u;
    {
        const bool branch_taken_0x55ef24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x55ef24) {
            ctx->pc = 0x55F078u;
            goto label_55f078;
        }
    }
    ctx->pc = 0x55EF2Cu;
label_55ef2c:
    // 0x55ef2c: 0x10600052  beqz        $v1, . + 4 + (0x52 << 2)
label_55ef30:
    if (ctx->pc == 0x55EF30u) {
        ctx->pc = 0x55EF34u;
        goto label_55ef34;
    }
    ctx->pc = 0x55EF2Cu;
    {
        const bool branch_taken_0x55ef2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x55ef2c) {
            ctx->pc = 0x55F078u;
            goto label_55f078;
        }
    }
    ctx->pc = 0x55EF34u;
label_55ef34:
    // 0x55ef34: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x55ef34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_55ef38:
    // 0x55ef38: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x55ef38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_55ef3c:
    // 0x55ef3c: 0x8c65d130  lw          $a1, -0x2ED0($v1)
    ctx->pc = 0x55ef3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955312)));
label_55ef40:
    // 0x55ef40: 0x3c1200be  lui         $s2, 0xBE
    ctx->pc = 0x55ef40u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)190 << 16));
label_55ef44:
    // 0x55ef44: 0x8c54e378  lw          $s4, -0x1C88($v0)
    ctx->pc = 0x55ef44u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959992)));
label_55ef48:
    // 0x55ef48: 0x3c1100be  lui         $s1, 0xBE
    ctx->pc = 0x55ef48u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)190 << 16));
label_55ef4c:
    // 0x55ef4c: 0x2652b7e0  addiu       $s2, $s2, -0x4820
    ctx->pc = 0x55ef4cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294948832));
label_55ef50:
    // 0x55ef50: 0x2631b810  addiu       $s1, $s1, -0x47F0
    ctx->pc = 0x55ef50u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294948880));
label_55ef54:
    // 0x55ef54: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x55ef54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_55ef58:
    // 0x55ef58: 0x8cb00130  lw          $s0, 0x130($a1)
    ctx->pc = 0x55ef58u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
label_55ef5c:
    // 0x55ef5c: 0x8c64d120  lw          $a0, -0x2EE0($v1)
    ctx->pc = 0x55ef5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955296)));
label_55ef60:
    // 0x55ef60: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x55ef60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_55ef64:
    // 0x55ef64: 0x8c53e370  lw          $s3, -0x1C90($v0)
    ctx->pc = 0x55ef64u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959984)));
label_55ef68:
    // 0x55ef68: 0x102880  sll         $a1, $s0, 2
    ctx->pc = 0x55ef68u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_55ef6c:
    // 0x55ef6c: 0x8c840010  lw          $a0, 0x10($a0)
    ctx->pc = 0x55ef6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_55ef70:
    // 0x55ef70: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x55ef70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_55ef74:
    // 0x55ef74: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x55ef74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_55ef78:
    // 0x55ef78: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x55ef78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_55ef7c:
    // 0x55ef7c: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x55ef7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_55ef80:
    // 0x55ef80: 0xac60e3d8  sw          $zero, -0x1C28($v1)
    ctx->pc = 0x55ef80u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960088), GPR_U32(ctx, 0));
label_55ef84:
    // 0x55ef84: 0xac40e3c0  sw          $zero, -0x1C40($v0)
    ctx->pc = 0x55ef84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960064), GPR_U32(ctx, 0));
label_55ef88:
    // 0x55ef88: 0x8ea20058  lw          $v0, 0x58($s5)
    ctx->pc = 0x55ef88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 88)));
label_55ef8c:
    // 0x55ef8c: 0x904200d8  lbu         $v0, 0xD8($v0)
    ctx->pc = 0x55ef8cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 216)));
label_55ef90:
    // 0x55ef90: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
label_55ef94:
    if (ctx->pc == 0x55EF94u) {
        ctx->pc = 0x55EF94u;
            // 0x55ef94: 0x24960010  addiu       $s6, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->pc = 0x55EF98u;
        goto label_55ef98;
    }
    ctx->pc = 0x55EF90u;
    {
        const bool branch_taken_0x55ef90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x55EF94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55EF90u;
            // 0x55ef94: 0x24960010  addiu       $s6, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x55ef90) {
            ctx->pc = 0x55F00Cu;
            goto label_55f00c;
        }
    }
    ctx->pc = 0x55EF98u;
label_55ef98:
    // 0x55ef98: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x55ef98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_55ef9c:
    // 0x55ef9c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x55ef9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_55efa0:
    // 0x55efa0: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x55efa0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_55efa4:
    // 0x55efa4: 0xc04e4a4  jal         func_139290
label_55efa8:
    if (ctx->pc == 0x55EFA8u) {
        ctx->pc = 0x55EFA8u;
            // 0x55efa8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x55EFACu;
        goto label_55efac;
    }
    ctx->pc = 0x55EFA4u;
    SET_GPR_U32(ctx, 31, 0x55EFACu);
    ctx->pc = 0x55EFA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55EFA4u;
            // 0x55efa8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55EFACu; }
        if (ctx->pc != 0x55EFACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55EFACu; }
        if (ctx->pc != 0x55EFACu) { return; }
    }
    ctx->pc = 0x55EFACu;
label_55efac:
    // 0x55efac: 0xc04e738  jal         func_139CE0
label_55efb0:
    if (ctx->pc == 0x55EFB0u) {
        ctx->pc = 0x55EFB0u;
            // 0x55efb0: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->pc = 0x55EFB4u;
        goto label_55efb4;
    }
    ctx->pc = 0x55EFACu;
    SET_GPR_U32(ctx, 31, 0x55EFB4u);
    ctx->pc = 0x55EFB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55EFACu;
            // 0x55efb0: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55EFB4u; }
        if (ctx->pc != 0x55EFB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55EFB4u; }
        if (ctx->pc != 0x55EFB4u) { return; }
    }
    ctx->pc = 0x55EFB4u;
label_55efb4:
    // 0x55efb4: 0x8ea40058  lw          $a0, 0x58($s5)
    ctx->pc = 0x55efb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 88)));
label_55efb8:
    // 0x55efb8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x55efb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_55efbc:
    // 0x55efbc: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x55efbcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_55efc0:
    // 0x55efc0: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x55efc0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_55efc4:
    // 0x55efc4: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x55efc4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_55efc8:
    // 0x55efc8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x55efc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_55efcc:
    // 0x55efcc: 0xc157d18  jal         func_55F460
label_55efd0:
    if (ctx->pc == 0x55EFD0u) {
        ctx->pc = 0x55EFD0u;
            // 0x55efd0: 0x27a90080  addiu       $t1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x55EFD4u;
        goto label_55efd4;
    }
    ctx->pc = 0x55EFCCu;
    SET_GPR_U32(ctx, 31, 0x55EFD4u);
    ctx->pc = 0x55EFD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55EFCCu;
            // 0x55efd0: 0x27a90080  addiu       $t1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x55F460u;
    if (runtime->hasFunction(0x55F460u)) {
        auto targetFn = runtime->lookupFunction(0x55F460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55EFD4u; }
        if (ctx->pc != 0x55EFD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0055F460_0x55f460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55EFD4u; }
        if (ctx->pc != 0x55EFD4u) { return; }
    }
    ctx->pc = 0x55EFD4u;
label_55efd4:
    // 0x55efd4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x55efd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_55efd8:
    // 0x55efd8: 0x8c69e3c0  lw          $t1, -0x1C40($v1)
    ctx->pc = 0x55efd8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_55efdc:
    // 0x55efdc: 0x19200026  blez        $t1, . + 4 + (0x26 << 2)
label_55efe0:
    if (ctx->pc == 0x55EFE0u) {
        ctx->pc = 0x55EFE0u;
            // 0x55efe0: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->pc = 0x55EFE4u;
        goto label_55efe4;
    }
    ctx->pc = 0x55EFDCu;
    {
        const bool branch_taken_0x55efdc = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x55EFE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55EFDCu;
            // 0x55efe0: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x55efdc) {
            ctx->pc = 0x55F078u;
            goto label_55f078;
        }
    }
    ctx->pc = 0x55EFE4u;
label_55efe4:
    // 0x55efe4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x55efe4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_55efe8:
    // 0x55efe8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x55efe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_55efec:
    // 0x55efec: 0x8c65e3b0  lw          $a1, -0x1C50($v1)
    ctx->pc = 0x55efecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960048)));
label_55eff0:
    // 0x55eff0: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x55eff0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_55eff4:
    // 0x55eff4: 0x8c46e3b8  lw          $a2, -0x1C48($v0)
    ctx->pc = 0x55eff4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960056)));
label_55eff8:
    // 0x55eff8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x55eff8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_55effc:
    // 0x55effc: 0xc055d28  jal         func_1574A0
label_55f000:
    if (ctx->pc == 0x55F000u) {
        ctx->pc = 0x55F000u;
            // 0x55f000: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x55F004u;
        goto label_55f004;
    }
    ctx->pc = 0x55EFFCu;
    SET_GPR_U32(ctx, 31, 0x55F004u);
    ctx->pc = 0x55F000u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55EFFCu;
            // 0x55f000: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1574A0u;
    if (runtime->hasFunction(0x1574A0u)) {
        auto targetFn = runtime->lookupFunction(0x1574A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55F004u; }
        if (ctx->pc != 0x55F004u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001574A0_0x1574a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55F004u; }
        if (ctx->pc != 0x55F004u) { return; }
    }
    ctx->pc = 0x55F004u;
label_55f004:
    // 0x55f004: 0x1000001c  b           . + 4 + (0x1C << 2)
label_55f008:
    if (ctx->pc == 0x55F008u) {
        ctx->pc = 0x55F00Cu;
        goto label_55f00c;
    }
    ctx->pc = 0x55F004u;
    {
        const bool branch_taken_0x55f004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x55f004) {
            ctx->pc = 0x55F078u;
            goto label_55f078;
        }
    }
    ctx->pc = 0x55F00Cu;
label_55f00c:
    // 0x55f00c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x55f00cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_55f010:
    // 0x55f010: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x55f010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_55f014:
    // 0x55f014: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x55f014u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_55f018:
    // 0x55f018: 0xc04e4a4  jal         func_139290
label_55f01c:
    if (ctx->pc == 0x55F01Cu) {
        ctx->pc = 0x55F01Cu;
            // 0x55f01c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x55F020u;
        goto label_55f020;
    }
    ctx->pc = 0x55F018u;
    SET_GPR_U32(ctx, 31, 0x55F020u);
    ctx->pc = 0x55F01Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55F018u;
            // 0x55f01c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55F020u; }
        if (ctx->pc != 0x55F020u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55F020u; }
        if (ctx->pc != 0x55F020u) { return; }
    }
    ctx->pc = 0x55F020u;
label_55f020:
    // 0x55f020: 0xc04e738  jal         func_139CE0
label_55f024:
    if (ctx->pc == 0x55F024u) {
        ctx->pc = 0x55F024u;
            // 0x55f024: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->pc = 0x55F028u;
        goto label_55f028;
    }
    ctx->pc = 0x55F020u;
    SET_GPR_U32(ctx, 31, 0x55F028u);
    ctx->pc = 0x55F024u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55F020u;
            // 0x55f024: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55F028u; }
        if (ctx->pc != 0x55F028u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55F028u; }
        if (ctx->pc != 0x55F028u) { return; }
    }
    ctx->pc = 0x55F028u;
label_55f028:
    // 0x55f028: 0x8ea40058  lw          $a0, 0x58($s5)
    ctx->pc = 0x55f028u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 88)));
label_55f02c:
    // 0x55f02c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x55f02cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_55f030:
    // 0x55f030: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x55f030u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_55f034:
    // 0x55f034: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x55f034u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_55f038:
    // 0x55f038: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x55f038u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_55f03c:
    // 0x55f03c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x55f03cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_55f040:
    // 0x55f040: 0xc157d18  jal         func_55F460
label_55f044:
    if (ctx->pc == 0x55F044u) {
        ctx->pc = 0x55F044u;
            // 0x55f044: 0x27a90080  addiu       $t1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x55F048u;
        goto label_55f048;
    }
    ctx->pc = 0x55F040u;
    SET_GPR_U32(ctx, 31, 0x55F048u);
    ctx->pc = 0x55F044u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55F040u;
            // 0x55f044: 0x27a90080  addiu       $t1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x55F460u;
    if (runtime->hasFunction(0x55F460u)) {
        auto targetFn = runtime->lookupFunction(0x55F460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55F048u; }
        if (ctx->pc != 0x55F048u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0055F460_0x55f460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55F048u; }
        if (ctx->pc != 0x55F048u) { return; }
    }
    ctx->pc = 0x55F048u;
label_55f048:
    // 0x55f048: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x55f048u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_55f04c:
    // 0x55f04c: 0x8c69e3c0  lw          $t1, -0x1C40($v1)
    ctx->pc = 0x55f04cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_55f050:
    // 0x55f050: 0x19200009  blez        $t1, . + 4 + (0x9 << 2)
label_55f054:
    if (ctx->pc == 0x55F054u) {
        ctx->pc = 0x55F054u;
            // 0x55f054: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x55F058u;
        goto label_55f058;
    }
    ctx->pc = 0x55F050u;
    {
        const bool branch_taken_0x55f050 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x55F054u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55F050u;
            // 0x55f054: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x55f050) {
            ctx->pc = 0x55F078u;
            goto label_55f078;
        }
    }
    ctx->pc = 0x55F058u;
label_55f058:
    // 0x55f058: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x55f058u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_55f05c:
    // 0x55f05c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x55f05cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_55f060:
    // 0x55f060: 0x8c65e3b0  lw          $a1, -0x1C50($v1)
    ctx->pc = 0x55f060u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960048)));
label_55f064:
    // 0x55f064: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x55f064u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_55f068:
    // 0x55f068: 0x8c46e3b8  lw          $a2, -0x1C48($v0)
    ctx->pc = 0x55f068u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960056)));
label_55f06c:
    // 0x55f06c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x55f06cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_55f070:
    // 0x55f070: 0xc055d28  jal         func_1574A0
label_55f074:
    if (ctx->pc == 0x55F074u) {
        ctx->pc = 0x55F074u;
            // 0x55f074: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x55F078u;
        goto label_55f078;
    }
    ctx->pc = 0x55F070u;
    SET_GPR_U32(ctx, 31, 0x55F078u);
    ctx->pc = 0x55F074u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55F070u;
            // 0x55f074: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1574A0u;
    if (runtime->hasFunction(0x1574A0u)) {
        auto targetFn = runtime->lookupFunction(0x1574A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55F078u; }
        if (ctx->pc != 0x55F078u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001574A0_0x1574a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55F078u; }
        if (ctx->pc != 0x55F078u) { return; }
    }
    ctx->pc = 0x55F078u;
label_55f078:
    // 0x55f078: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x55f078u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_55f07c:
    // 0x55f07c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x55f07cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_55f080:
    // 0x55f080: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x55f080u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_55f084:
    // 0x55f084: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x55f084u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_55f088:
    // 0x55f088: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x55f088u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_55f08c:
    // 0x55f08c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x55f08cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_55f090:
    // 0x55f090: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x55f090u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_55f094:
    // 0x55f094: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x55f094u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_55f098:
    // 0x55f098: 0x3e00008  jr          $ra
label_55f09c:
    if (ctx->pc == 0x55F09Cu) {
        ctx->pc = 0x55F09Cu;
            // 0x55f09c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x55F0A0u;
        goto label_55f0a0;
    }
    ctx->pc = 0x55F098u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x55F09Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55F098u;
            // 0x55f09c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x55F0A0u;
label_55f0a0:
    // 0x55f0a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x55f0a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_55f0a4:
    // 0x55f0a4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x55f0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_55f0a8:
    // 0x55f0a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x55f0a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_55f0ac:
    // 0x55f0ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x55f0acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_55f0b0:
    // 0x55f0b0: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x55f0b0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_55f0b4:
    // 0x55f0b4: 0x10a3002c  beq         $a1, $v1, . + 4 + (0x2C << 2)
label_55f0b8:
    if (ctx->pc == 0x55F0B8u) {
        ctx->pc = 0x55F0B8u;
            // 0x55f0b8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x55F0BCu;
        goto label_55f0bc;
    }
    ctx->pc = 0x55F0B4u;
    {
        const bool branch_taken_0x55f0b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x55F0B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55F0B4u;
            // 0x55f0b8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x55f0b4) {
            ctx->pc = 0x55F168u;
            goto label_55f168;
        }
    }
    ctx->pc = 0x55F0BCu;
label_55f0bc:
    // 0x55f0bc: 0x50a00025  beql        $a1, $zero, . + 4 + (0x25 << 2)
label_55f0c0:
    if (ctx->pc == 0x55F0C0u) {
        ctx->pc = 0x55F0C0u;
            // 0x55f0c0: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x55F0C4u;
        goto label_55f0c4;
    }
    ctx->pc = 0x55F0BCu;
    {
        const bool branch_taken_0x55f0bc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x55f0bc) {
            ctx->pc = 0x55F0C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x55F0BCu;
            // 0x55f0c0: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x55F154u;
            goto label_55f154;
        }
    }
    ctx->pc = 0x55F0C4u;
label_55f0c4:
    // 0x55f0c4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x55f0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_55f0c8:
    // 0x55f0c8: 0x10a30013  beq         $a1, $v1, . + 4 + (0x13 << 2)
label_55f0cc:
    if (ctx->pc == 0x55F0CCu) {
        ctx->pc = 0x55F0D0u;
        goto label_55f0d0;
    }
    ctx->pc = 0x55F0C8u;
    {
        const bool branch_taken_0x55f0c8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x55f0c8) {
            ctx->pc = 0x55F118u;
            goto label_55f118;
        }
    }
    ctx->pc = 0x55F0D0u;
label_55f0d0:
    // 0x55f0d0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x55f0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_55f0d4:
    // 0x55f0d4: 0x50a3000a  beql        $a1, $v1, . + 4 + (0xA << 2)
label_55f0d8:
    if (ctx->pc == 0x55F0D8u) {
        ctx->pc = 0x55F0D8u;
            // 0x55f0d8: 0x8e040058  lw          $a0, 0x58($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
        ctx->pc = 0x55F0DCu;
        goto label_55f0dc;
    }
    ctx->pc = 0x55F0D4u;
    {
        const bool branch_taken_0x55f0d4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x55f0d4) {
            ctx->pc = 0x55F0D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x55F0D4u;
            // 0x55f0d8: 0x8e040058  lw          $a0, 0x58($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x55F100u;
            goto label_55f100;
        }
    }
    ctx->pc = 0x55F0DCu;
label_55f0dc:
    // 0x55f0dc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x55f0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_55f0e0:
    // 0x55f0e0: 0x50a30003  beql        $a1, $v1, . + 4 + (0x3 << 2)
label_55f0e4:
    if (ctx->pc == 0x55F0E4u) {
        ctx->pc = 0x55F0E4u;
            // 0x55f0e4: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x55F0E8u;
        goto label_55f0e8;
    }
    ctx->pc = 0x55F0E0u;
    {
        const bool branch_taken_0x55f0e0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x55f0e0) {
            ctx->pc = 0x55F0E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x55F0E0u;
            // 0x55f0e4: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x55F0F0u;
            goto label_55f0f0;
        }
    }
    ctx->pc = 0x55F0E8u;
label_55f0e8:
    // 0x55f0e8: 0x10000030  b           . + 4 + (0x30 << 2)
label_55f0ec:
    if (ctx->pc == 0x55F0ECu) {
        ctx->pc = 0x55F0ECu;
            // 0x55f0ec: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x55F0F0u;
        goto label_55f0f0;
    }
    ctx->pc = 0x55F0E8u;
    {
        const bool branch_taken_0x55f0e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x55F0ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55F0E8u;
            // 0x55f0ec: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x55f0e8) {
            ctx->pc = 0x55F1ACu;
            goto label_55f1ac;
        }
    }
    ctx->pc = 0x55F0F0u;
label_55f0f0:
    // 0x55f0f0: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x55f0f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_55f0f4:
    // 0x55f0f4: 0x320f809  jalr        $t9
label_55f0f8:
    if (ctx->pc == 0x55F0F8u) {
        ctx->pc = 0x55F0FCu;
        goto label_55f0fc;
    }
    ctx->pc = 0x55F0F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x55F0FCu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x55F0FCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x55F0FCu; }
            if (ctx->pc != 0x55F0FCu) { return; }
        }
        }
    }
    ctx->pc = 0x55F0FCu;
label_55f0fc:
    // 0x55f0fc: 0x8e040058  lw          $a0, 0x58($s0)
    ctx->pc = 0x55f0fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_55f100:
    // 0x55f100: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x55f100u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_55f104:
    // 0x55f104: 0x8f390054  lw          $t9, 0x54($t9)
    ctx->pc = 0x55f104u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 84)));
label_55f108:
    // 0x55f108: 0x320f809  jalr        $t9
label_55f10c:
    if (ctx->pc == 0x55F10Cu) {
        ctx->pc = 0x55F110u;
        goto label_55f110;
    }
    ctx->pc = 0x55F108u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x55F110u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x55F110u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x55F110u; }
            if (ctx->pc != 0x55F110u) { return; }
        }
        }
    }
    ctx->pc = 0x55F110u;
label_55f110:
    // 0x55f110: 0x10000025  b           . + 4 + (0x25 << 2)
label_55f114:
    if (ctx->pc == 0x55F114u) {
        ctx->pc = 0x55F118u;
        goto label_55f118;
    }
    ctx->pc = 0x55F110u;
    {
        const bool branch_taken_0x55f110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x55f110) {
            ctx->pc = 0x55F1A8u;
            goto label_55f1a8;
        }
    }
    ctx->pc = 0x55F118u;
label_55f118:
    // 0x55f118: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x55f118u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_55f11c:
    // 0x55f11c: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x55f11cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_55f120:
    // 0x55f120: 0xc6010054  lwc1        $f1, 0x54($s0)
    ctx->pc = 0x55f120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_55f124:
    // 0x55f124: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x55f124u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_55f128:
    // 0x55f128: 0xc4620018  lwc1        $f2, 0x18($v1)
    ctx->pc = 0x55f128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_55f12c:
    // 0x55f12c: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x55f12cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_55f130:
    // 0x55f130: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x55f130u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_55f134:
    // 0x55f134: 0x4500001c  bc1f        . + 4 + (0x1C << 2)
label_55f138:
    if (ctx->pc == 0x55F138u) {
        ctx->pc = 0x55F138u;
            // 0x55f138: 0xe6010054  swc1        $f1, 0x54($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
        ctx->pc = 0x55F13Cu;
        goto label_55f13c;
    }
    ctx->pc = 0x55F134u;
    {
        const bool branch_taken_0x55f134 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x55F138u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55F134u;
            // 0x55f138: 0xe6010054  swc1        $f1, 0x54($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x55f134) {
            ctx->pc = 0x55F1A8u;
            goto label_55f1a8;
        }
    }
    ctx->pc = 0x55F13Cu;
label_55f13c:
    // 0x55f13c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x55f13cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_55f140:
    // 0x55f140: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x55f140u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_55f144:
    // 0x55f144: 0x320f809  jalr        $t9
label_55f148:
    if (ctx->pc == 0x55F148u) {
        ctx->pc = 0x55F148u;
            // 0x55f148: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x55F14Cu;
        goto label_55f14c;
    }
    ctx->pc = 0x55F144u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x55F14Cu);
        ctx->pc = 0x55F148u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55F144u;
            // 0x55f148: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x55F14Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x55F14Cu; }
            if (ctx->pc != 0x55F14Cu) { return; }
        }
        }
    }
    ctx->pc = 0x55F14Cu;
label_55f14c:
    // 0x55f14c: 0x10000016  b           . + 4 + (0x16 << 2)
label_55f150:
    if (ctx->pc == 0x55F150u) {
        ctx->pc = 0x55F154u;
        goto label_55f154;
    }
    ctx->pc = 0x55F14Cu;
    {
        const bool branch_taken_0x55f14c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x55f14c) {
            ctx->pc = 0x55F1A8u;
            goto label_55f1a8;
        }
    }
    ctx->pc = 0x55F154u;
label_55f154:
    // 0x55f154: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x55f154u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_55f158:
    // 0x55f158: 0x320f809  jalr        $t9
label_55f15c:
    if (ctx->pc == 0x55F15Cu) {
        ctx->pc = 0x55F160u;
        goto label_55f160;
    }
    ctx->pc = 0x55F158u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x55F160u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x55F160u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x55F160u; }
            if (ctx->pc != 0x55F160u) { return; }
        }
        }
    }
    ctx->pc = 0x55F160u;
label_55f160:
    // 0x55f160: 0x10000011  b           . + 4 + (0x11 << 2)
label_55f164:
    if (ctx->pc == 0x55F164u) {
        ctx->pc = 0x55F168u;
        goto label_55f168;
    }
    ctx->pc = 0x55F160u;
    {
        const bool branch_taken_0x55f160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x55f160) {
            ctx->pc = 0x55F1A8u;
            goto label_55f1a8;
        }
    }
    ctx->pc = 0x55F168u;
label_55f168:
    // 0x55f168: 0x27a20028  addiu       $v0, $sp, 0x28
    ctx->pc = 0x55f168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
label_55f16c:
    // 0x55f16c: 0x27a3002c  addiu       $v1, $sp, 0x2C
    ctx->pc = 0x55f16cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_55f170:
    // 0x55f170: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x55f170u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_55f174:
    // 0x55f174: 0xafb0002c  sw          $s0, 0x2C($sp)
    ctx->pc = 0x55f174u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 16));
label_55f178:
    // 0x55f178: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x55f178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_55f17c:
    // 0x55f17c: 0xa3a40020  sb          $a0, 0x20($sp)
    ctx->pc = 0x55f17cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 4));
label_55f180:
    // 0x55f180: 0x8c420e60  lw          $v0, 0xE60($v0)
    ctx->pc = 0x55f180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3680)));
label_55f184:
    // 0x55f184: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x55f184u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
label_55f188:
    // 0x55f188: 0xdfa50020  ld          $a1, 0x20($sp)
    ctx->pc = 0x55f188u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_55f18c:
    // 0x55f18c: 0xc0d7274  jal         func_35C9D0
label_55f190:
    if (ctx->pc == 0x55F190u) {
        ctx->pc = 0x55F190u;
            // 0x55f190: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x55F194u;
        goto label_55f194;
    }
    ctx->pc = 0x55F18Cu;
    SET_GPR_U32(ctx, 31, 0x55F194u);
    ctx->pc = 0x55F190u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55F18Cu;
            // 0x55f190: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x35C9D0u;
    if (runtime->hasFunction(0x35C9D0u)) {
        auto targetFn = runtime->lookupFunction(0x35C9D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55F194u; }
        if (ctx->pc != 0x55F194u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0035C9D0_0x35c9d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55F194u; }
        if (ctx->pc != 0x55F194u) { return; }
    }
    ctx->pc = 0x55F194u;
label_55f194:
    // 0x55f194: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x55f194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_55f198:
    // 0x55f198: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x55f198u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_55f19c:
    // 0x55f19c: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x55f19cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_55f1a0:
    // 0x55f1a0: 0xc057b7c  jal         func_15EDF0
label_55f1a4:
    if (ctx->pc == 0x55F1A4u) {
        ctx->pc = 0x55F1A4u;
            // 0x55f1a4: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x55F1A8u;
        goto label_55f1a8;
    }
    ctx->pc = 0x55F1A0u;
    SET_GPR_U32(ctx, 31, 0x55F1A8u);
    ctx->pc = 0x55F1A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55F1A0u;
            // 0x55f1a4: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55F1A8u; }
        if (ctx->pc != 0x55F1A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55F1A8u; }
        if (ctx->pc != 0x55F1A8u) { return; }
    }
    ctx->pc = 0x55F1A8u;
label_55f1a8:
    // 0x55f1a8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x55f1a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_55f1ac:
    // 0x55f1ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x55f1acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_55f1b0:
    // 0x55f1b0: 0x3e00008  jr          $ra
label_55f1b4:
    if (ctx->pc == 0x55F1B4u) {
        ctx->pc = 0x55F1B4u;
            // 0x55f1b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x55F1B8u;
        goto label_55f1b8;
    }
    ctx->pc = 0x55F1B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x55F1B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55F1B0u;
            // 0x55f1b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x55F1B8u;
label_55f1b8:
    // 0x55f1b8: 0x0  nop
    ctx->pc = 0x55f1b8u;
    // NOP
label_55f1bc:
    // 0x55f1bc: 0x0  nop
    ctx->pc = 0x55f1bcu;
    // NOP
}
