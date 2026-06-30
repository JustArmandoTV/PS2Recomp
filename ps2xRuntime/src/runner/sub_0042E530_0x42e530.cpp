#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0042E530
// Address: 0x42e530 - 0x42ebe0
void sub_0042E530_0x42e530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0042E530_0x42e530");
#endif

    switch (ctx->pc) {
        case 0x42e530u: goto label_42e530;
        case 0x42e534u: goto label_42e534;
        case 0x42e538u: goto label_42e538;
        case 0x42e53cu: goto label_42e53c;
        case 0x42e540u: goto label_42e540;
        case 0x42e544u: goto label_42e544;
        case 0x42e548u: goto label_42e548;
        case 0x42e54cu: goto label_42e54c;
        case 0x42e550u: goto label_42e550;
        case 0x42e554u: goto label_42e554;
        case 0x42e558u: goto label_42e558;
        case 0x42e55cu: goto label_42e55c;
        case 0x42e560u: goto label_42e560;
        case 0x42e564u: goto label_42e564;
        case 0x42e568u: goto label_42e568;
        case 0x42e56cu: goto label_42e56c;
        case 0x42e570u: goto label_42e570;
        case 0x42e574u: goto label_42e574;
        case 0x42e578u: goto label_42e578;
        case 0x42e57cu: goto label_42e57c;
        case 0x42e580u: goto label_42e580;
        case 0x42e584u: goto label_42e584;
        case 0x42e588u: goto label_42e588;
        case 0x42e58cu: goto label_42e58c;
        case 0x42e590u: goto label_42e590;
        case 0x42e594u: goto label_42e594;
        case 0x42e598u: goto label_42e598;
        case 0x42e59cu: goto label_42e59c;
        case 0x42e5a0u: goto label_42e5a0;
        case 0x42e5a4u: goto label_42e5a4;
        case 0x42e5a8u: goto label_42e5a8;
        case 0x42e5acu: goto label_42e5ac;
        case 0x42e5b0u: goto label_42e5b0;
        case 0x42e5b4u: goto label_42e5b4;
        case 0x42e5b8u: goto label_42e5b8;
        case 0x42e5bcu: goto label_42e5bc;
        case 0x42e5c0u: goto label_42e5c0;
        case 0x42e5c4u: goto label_42e5c4;
        case 0x42e5c8u: goto label_42e5c8;
        case 0x42e5ccu: goto label_42e5cc;
        case 0x42e5d0u: goto label_42e5d0;
        case 0x42e5d4u: goto label_42e5d4;
        case 0x42e5d8u: goto label_42e5d8;
        case 0x42e5dcu: goto label_42e5dc;
        case 0x42e5e0u: goto label_42e5e0;
        case 0x42e5e4u: goto label_42e5e4;
        case 0x42e5e8u: goto label_42e5e8;
        case 0x42e5ecu: goto label_42e5ec;
        case 0x42e5f0u: goto label_42e5f0;
        case 0x42e5f4u: goto label_42e5f4;
        case 0x42e5f8u: goto label_42e5f8;
        case 0x42e5fcu: goto label_42e5fc;
        case 0x42e600u: goto label_42e600;
        case 0x42e604u: goto label_42e604;
        case 0x42e608u: goto label_42e608;
        case 0x42e60cu: goto label_42e60c;
        case 0x42e610u: goto label_42e610;
        case 0x42e614u: goto label_42e614;
        case 0x42e618u: goto label_42e618;
        case 0x42e61cu: goto label_42e61c;
        case 0x42e620u: goto label_42e620;
        case 0x42e624u: goto label_42e624;
        case 0x42e628u: goto label_42e628;
        case 0x42e62cu: goto label_42e62c;
        case 0x42e630u: goto label_42e630;
        case 0x42e634u: goto label_42e634;
        case 0x42e638u: goto label_42e638;
        case 0x42e63cu: goto label_42e63c;
        case 0x42e640u: goto label_42e640;
        case 0x42e644u: goto label_42e644;
        case 0x42e648u: goto label_42e648;
        case 0x42e64cu: goto label_42e64c;
        case 0x42e650u: goto label_42e650;
        case 0x42e654u: goto label_42e654;
        case 0x42e658u: goto label_42e658;
        case 0x42e65cu: goto label_42e65c;
        case 0x42e660u: goto label_42e660;
        case 0x42e664u: goto label_42e664;
        case 0x42e668u: goto label_42e668;
        case 0x42e66cu: goto label_42e66c;
        case 0x42e670u: goto label_42e670;
        case 0x42e674u: goto label_42e674;
        case 0x42e678u: goto label_42e678;
        case 0x42e67cu: goto label_42e67c;
        case 0x42e680u: goto label_42e680;
        case 0x42e684u: goto label_42e684;
        case 0x42e688u: goto label_42e688;
        case 0x42e68cu: goto label_42e68c;
        case 0x42e690u: goto label_42e690;
        case 0x42e694u: goto label_42e694;
        case 0x42e698u: goto label_42e698;
        case 0x42e69cu: goto label_42e69c;
        case 0x42e6a0u: goto label_42e6a0;
        case 0x42e6a4u: goto label_42e6a4;
        case 0x42e6a8u: goto label_42e6a8;
        case 0x42e6acu: goto label_42e6ac;
        case 0x42e6b0u: goto label_42e6b0;
        case 0x42e6b4u: goto label_42e6b4;
        case 0x42e6b8u: goto label_42e6b8;
        case 0x42e6bcu: goto label_42e6bc;
        case 0x42e6c0u: goto label_42e6c0;
        case 0x42e6c4u: goto label_42e6c4;
        case 0x42e6c8u: goto label_42e6c8;
        case 0x42e6ccu: goto label_42e6cc;
        case 0x42e6d0u: goto label_42e6d0;
        case 0x42e6d4u: goto label_42e6d4;
        case 0x42e6d8u: goto label_42e6d8;
        case 0x42e6dcu: goto label_42e6dc;
        case 0x42e6e0u: goto label_42e6e0;
        case 0x42e6e4u: goto label_42e6e4;
        case 0x42e6e8u: goto label_42e6e8;
        case 0x42e6ecu: goto label_42e6ec;
        case 0x42e6f0u: goto label_42e6f0;
        case 0x42e6f4u: goto label_42e6f4;
        case 0x42e6f8u: goto label_42e6f8;
        case 0x42e6fcu: goto label_42e6fc;
        case 0x42e700u: goto label_42e700;
        case 0x42e704u: goto label_42e704;
        case 0x42e708u: goto label_42e708;
        case 0x42e70cu: goto label_42e70c;
        case 0x42e710u: goto label_42e710;
        case 0x42e714u: goto label_42e714;
        case 0x42e718u: goto label_42e718;
        case 0x42e71cu: goto label_42e71c;
        case 0x42e720u: goto label_42e720;
        case 0x42e724u: goto label_42e724;
        case 0x42e728u: goto label_42e728;
        case 0x42e72cu: goto label_42e72c;
        case 0x42e730u: goto label_42e730;
        case 0x42e734u: goto label_42e734;
        case 0x42e738u: goto label_42e738;
        case 0x42e73cu: goto label_42e73c;
        case 0x42e740u: goto label_42e740;
        case 0x42e744u: goto label_42e744;
        case 0x42e748u: goto label_42e748;
        case 0x42e74cu: goto label_42e74c;
        case 0x42e750u: goto label_42e750;
        case 0x42e754u: goto label_42e754;
        case 0x42e758u: goto label_42e758;
        case 0x42e75cu: goto label_42e75c;
        case 0x42e760u: goto label_42e760;
        case 0x42e764u: goto label_42e764;
        case 0x42e768u: goto label_42e768;
        case 0x42e76cu: goto label_42e76c;
        case 0x42e770u: goto label_42e770;
        case 0x42e774u: goto label_42e774;
        case 0x42e778u: goto label_42e778;
        case 0x42e77cu: goto label_42e77c;
        case 0x42e780u: goto label_42e780;
        case 0x42e784u: goto label_42e784;
        case 0x42e788u: goto label_42e788;
        case 0x42e78cu: goto label_42e78c;
        case 0x42e790u: goto label_42e790;
        case 0x42e794u: goto label_42e794;
        case 0x42e798u: goto label_42e798;
        case 0x42e79cu: goto label_42e79c;
        case 0x42e7a0u: goto label_42e7a0;
        case 0x42e7a4u: goto label_42e7a4;
        case 0x42e7a8u: goto label_42e7a8;
        case 0x42e7acu: goto label_42e7ac;
        case 0x42e7b0u: goto label_42e7b0;
        case 0x42e7b4u: goto label_42e7b4;
        case 0x42e7b8u: goto label_42e7b8;
        case 0x42e7bcu: goto label_42e7bc;
        case 0x42e7c0u: goto label_42e7c0;
        case 0x42e7c4u: goto label_42e7c4;
        case 0x42e7c8u: goto label_42e7c8;
        case 0x42e7ccu: goto label_42e7cc;
        case 0x42e7d0u: goto label_42e7d0;
        case 0x42e7d4u: goto label_42e7d4;
        case 0x42e7d8u: goto label_42e7d8;
        case 0x42e7dcu: goto label_42e7dc;
        case 0x42e7e0u: goto label_42e7e0;
        case 0x42e7e4u: goto label_42e7e4;
        case 0x42e7e8u: goto label_42e7e8;
        case 0x42e7ecu: goto label_42e7ec;
        case 0x42e7f0u: goto label_42e7f0;
        case 0x42e7f4u: goto label_42e7f4;
        case 0x42e7f8u: goto label_42e7f8;
        case 0x42e7fcu: goto label_42e7fc;
        case 0x42e800u: goto label_42e800;
        case 0x42e804u: goto label_42e804;
        case 0x42e808u: goto label_42e808;
        case 0x42e80cu: goto label_42e80c;
        case 0x42e810u: goto label_42e810;
        case 0x42e814u: goto label_42e814;
        case 0x42e818u: goto label_42e818;
        case 0x42e81cu: goto label_42e81c;
        case 0x42e820u: goto label_42e820;
        case 0x42e824u: goto label_42e824;
        case 0x42e828u: goto label_42e828;
        case 0x42e82cu: goto label_42e82c;
        case 0x42e830u: goto label_42e830;
        case 0x42e834u: goto label_42e834;
        case 0x42e838u: goto label_42e838;
        case 0x42e83cu: goto label_42e83c;
        case 0x42e840u: goto label_42e840;
        case 0x42e844u: goto label_42e844;
        case 0x42e848u: goto label_42e848;
        case 0x42e84cu: goto label_42e84c;
        case 0x42e850u: goto label_42e850;
        case 0x42e854u: goto label_42e854;
        case 0x42e858u: goto label_42e858;
        case 0x42e85cu: goto label_42e85c;
        case 0x42e860u: goto label_42e860;
        case 0x42e864u: goto label_42e864;
        case 0x42e868u: goto label_42e868;
        case 0x42e86cu: goto label_42e86c;
        case 0x42e870u: goto label_42e870;
        case 0x42e874u: goto label_42e874;
        case 0x42e878u: goto label_42e878;
        case 0x42e87cu: goto label_42e87c;
        case 0x42e880u: goto label_42e880;
        case 0x42e884u: goto label_42e884;
        case 0x42e888u: goto label_42e888;
        case 0x42e88cu: goto label_42e88c;
        case 0x42e890u: goto label_42e890;
        case 0x42e894u: goto label_42e894;
        case 0x42e898u: goto label_42e898;
        case 0x42e89cu: goto label_42e89c;
        case 0x42e8a0u: goto label_42e8a0;
        case 0x42e8a4u: goto label_42e8a4;
        case 0x42e8a8u: goto label_42e8a8;
        case 0x42e8acu: goto label_42e8ac;
        case 0x42e8b0u: goto label_42e8b0;
        case 0x42e8b4u: goto label_42e8b4;
        case 0x42e8b8u: goto label_42e8b8;
        case 0x42e8bcu: goto label_42e8bc;
        case 0x42e8c0u: goto label_42e8c0;
        case 0x42e8c4u: goto label_42e8c4;
        case 0x42e8c8u: goto label_42e8c8;
        case 0x42e8ccu: goto label_42e8cc;
        case 0x42e8d0u: goto label_42e8d0;
        case 0x42e8d4u: goto label_42e8d4;
        case 0x42e8d8u: goto label_42e8d8;
        case 0x42e8dcu: goto label_42e8dc;
        case 0x42e8e0u: goto label_42e8e0;
        case 0x42e8e4u: goto label_42e8e4;
        case 0x42e8e8u: goto label_42e8e8;
        case 0x42e8ecu: goto label_42e8ec;
        case 0x42e8f0u: goto label_42e8f0;
        case 0x42e8f4u: goto label_42e8f4;
        case 0x42e8f8u: goto label_42e8f8;
        case 0x42e8fcu: goto label_42e8fc;
        case 0x42e900u: goto label_42e900;
        case 0x42e904u: goto label_42e904;
        case 0x42e908u: goto label_42e908;
        case 0x42e90cu: goto label_42e90c;
        case 0x42e910u: goto label_42e910;
        case 0x42e914u: goto label_42e914;
        case 0x42e918u: goto label_42e918;
        case 0x42e91cu: goto label_42e91c;
        case 0x42e920u: goto label_42e920;
        case 0x42e924u: goto label_42e924;
        case 0x42e928u: goto label_42e928;
        case 0x42e92cu: goto label_42e92c;
        case 0x42e930u: goto label_42e930;
        case 0x42e934u: goto label_42e934;
        case 0x42e938u: goto label_42e938;
        case 0x42e93cu: goto label_42e93c;
        case 0x42e940u: goto label_42e940;
        case 0x42e944u: goto label_42e944;
        case 0x42e948u: goto label_42e948;
        case 0x42e94cu: goto label_42e94c;
        case 0x42e950u: goto label_42e950;
        case 0x42e954u: goto label_42e954;
        case 0x42e958u: goto label_42e958;
        case 0x42e95cu: goto label_42e95c;
        case 0x42e960u: goto label_42e960;
        case 0x42e964u: goto label_42e964;
        case 0x42e968u: goto label_42e968;
        case 0x42e96cu: goto label_42e96c;
        case 0x42e970u: goto label_42e970;
        case 0x42e974u: goto label_42e974;
        case 0x42e978u: goto label_42e978;
        case 0x42e97cu: goto label_42e97c;
        case 0x42e980u: goto label_42e980;
        case 0x42e984u: goto label_42e984;
        case 0x42e988u: goto label_42e988;
        case 0x42e98cu: goto label_42e98c;
        case 0x42e990u: goto label_42e990;
        case 0x42e994u: goto label_42e994;
        case 0x42e998u: goto label_42e998;
        case 0x42e99cu: goto label_42e99c;
        case 0x42e9a0u: goto label_42e9a0;
        case 0x42e9a4u: goto label_42e9a4;
        case 0x42e9a8u: goto label_42e9a8;
        case 0x42e9acu: goto label_42e9ac;
        case 0x42e9b0u: goto label_42e9b0;
        case 0x42e9b4u: goto label_42e9b4;
        case 0x42e9b8u: goto label_42e9b8;
        case 0x42e9bcu: goto label_42e9bc;
        case 0x42e9c0u: goto label_42e9c0;
        case 0x42e9c4u: goto label_42e9c4;
        case 0x42e9c8u: goto label_42e9c8;
        case 0x42e9ccu: goto label_42e9cc;
        case 0x42e9d0u: goto label_42e9d0;
        case 0x42e9d4u: goto label_42e9d4;
        case 0x42e9d8u: goto label_42e9d8;
        case 0x42e9dcu: goto label_42e9dc;
        case 0x42e9e0u: goto label_42e9e0;
        case 0x42e9e4u: goto label_42e9e4;
        case 0x42e9e8u: goto label_42e9e8;
        case 0x42e9ecu: goto label_42e9ec;
        case 0x42e9f0u: goto label_42e9f0;
        case 0x42e9f4u: goto label_42e9f4;
        case 0x42e9f8u: goto label_42e9f8;
        case 0x42e9fcu: goto label_42e9fc;
        case 0x42ea00u: goto label_42ea00;
        case 0x42ea04u: goto label_42ea04;
        case 0x42ea08u: goto label_42ea08;
        case 0x42ea0cu: goto label_42ea0c;
        case 0x42ea10u: goto label_42ea10;
        case 0x42ea14u: goto label_42ea14;
        case 0x42ea18u: goto label_42ea18;
        case 0x42ea1cu: goto label_42ea1c;
        case 0x42ea20u: goto label_42ea20;
        case 0x42ea24u: goto label_42ea24;
        case 0x42ea28u: goto label_42ea28;
        case 0x42ea2cu: goto label_42ea2c;
        case 0x42ea30u: goto label_42ea30;
        case 0x42ea34u: goto label_42ea34;
        case 0x42ea38u: goto label_42ea38;
        case 0x42ea3cu: goto label_42ea3c;
        case 0x42ea40u: goto label_42ea40;
        case 0x42ea44u: goto label_42ea44;
        case 0x42ea48u: goto label_42ea48;
        case 0x42ea4cu: goto label_42ea4c;
        case 0x42ea50u: goto label_42ea50;
        case 0x42ea54u: goto label_42ea54;
        case 0x42ea58u: goto label_42ea58;
        case 0x42ea5cu: goto label_42ea5c;
        case 0x42ea60u: goto label_42ea60;
        case 0x42ea64u: goto label_42ea64;
        case 0x42ea68u: goto label_42ea68;
        case 0x42ea6cu: goto label_42ea6c;
        case 0x42ea70u: goto label_42ea70;
        case 0x42ea74u: goto label_42ea74;
        case 0x42ea78u: goto label_42ea78;
        case 0x42ea7cu: goto label_42ea7c;
        case 0x42ea80u: goto label_42ea80;
        case 0x42ea84u: goto label_42ea84;
        case 0x42ea88u: goto label_42ea88;
        case 0x42ea8cu: goto label_42ea8c;
        case 0x42ea90u: goto label_42ea90;
        case 0x42ea94u: goto label_42ea94;
        case 0x42ea98u: goto label_42ea98;
        case 0x42ea9cu: goto label_42ea9c;
        case 0x42eaa0u: goto label_42eaa0;
        case 0x42eaa4u: goto label_42eaa4;
        case 0x42eaa8u: goto label_42eaa8;
        case 0x42eaacu: goto label_42eaac;
        case 0x42eab0u: goto label_42eab0;
        case 0x42eab4u: goto label_42eab4;
        case 0x42eab8u: goto label_42eab8;
        case 0x42eabcu: goto label_42eabc;
        case 0x42eac0u: goto label_42eac0;
        case 0x42eac4u: goto label_42eac4;
        case 0x42eac8u: goto label_42eac8;
        case 0x42eaccu: goto label_42eacc;
        case 0x42ead0u: goto label_42ead0;
        case 0x42ead4u: goto label_42ead4;
        case 0x42ead8u: goto label_42ead8;
        case 0x42eadcu: goto label_42eadc;
        case 0x42eae0u: goto label_42eae0;
        case 0x42eae4u: goto label_42eae4;
        case 0x42eae8u: goto label_42eae8;
        case 0x42eaecu: goto label_42eaec;
        case 0x42eaf0u: goto label_42eaf0;
        case 0x42eaf4u: goto label_42eaf4;
        case 0x42eaf8u: goto label_42eaf8;
        case 0x42eafcu: goto label_42eafc;
        case 0x42eb00u: goto label_42eb00;
        case 0x42eb04u: goto label_42eb04;
        case 0x42eb08u: goto label_42eb08;
        case 0x42eb0cu: goto label_42eb0c;
        case 0x42eb10u: goto label_42eb10;
        case 0x42eb14u: goto label_42eb14;
        case 0x42eb18u: goto label_42eb18;
        case 0x42eb1cu: goto label_42eb1c;
        case 0x42eb20u: goto label_42eb20;
        case 0x42eb24u: goto label_42eb24;
        case 0x42eb28u: goto label_42eb28;
        case 0x42eb2cu: goto label_42eb2c;
        case 0x42eb30u: goto label_42eb30;
        case 0x42eb34u: goto label_42eb34;
        case 0x42eb38u: goto label_42eb38;
        case 0x42eb3cu: goto label_42eb3c;
        case 0x42eb40u: goto label_42eb40;
        case 0x42eb44u: goto label_42eb44;
        case 0x42eb48u: goto label_42eb48;
        case 0x42eb4cu: goto label_42eb4c;
        case 0x42eb50u: goto label_42eb50;
        case 0x42eb54u: goto label_42eb54;
        case 0x42eb58u: goto label_42eb58;
        case 0x42eb5cu: goto label_42eb5c;
        case 0x42eb60u: goto label_42eb60;
        case 0x42eb64u: goto label_42eb64;
        case 0x42eb68u: goto label_42eb68;
        case 0x42eb6cu: goto label_42eb6c;
        case 0x42eb70u: goto label_42eb70;
        case 0x42eb74u: goto label_42eb74;
        case 0x42eb78u: goto label_42eb78;
        case 0x42eb7cu: goto label_42eb7c;
        case 0x42eb80u: goto label_42eb80;
        case 0x42eb84u: goto label_42eb84;
        case 0x42eb88u: goto label_42eb88;
        case 0x42eb8cu: goto label_42eb8c;
        case 0x42eb90u: goto label_42eb90;
        case 0x42eb94u: goto label_42eb94;
        case 0x42eb98u: goto label_42eb98;
        case 0x42eb9cu: goto label_42eb9c;
        case 0x42eba0u: goto label_42eba0;
        case 0x42eba4u: goto label_42eba4;
        case 0x42eba8u: goto label_42eba8;
        case 0x42ebacu: goto label_42ebac;
        case 0x42ebb0u: goto label_42ebb0;
        case 0x42ebb4u: goto label_42ebb4;
        case 0x42ebb8u: goto label_42ebb8;
        case 0x42ebbcu: goto label_42ebbc;
        case 0x42ebc0u: goto label_42ebc0;
        case 0x42ebc4u: goto label_42ebc4;
        case 0x42ebc8u: goto label_42ebc8;
        case 0x42ebccu: goto label_42ebcc;
        case 0x42ebd0u: goto label_42ebd0;
        case 0x42ebd4u: goto label_42ebd4;
        case 0x42ebd8u: goto label_42ebd8;
        case 0x42ebdcu: goto label_42ebdc;
        default: break;
    }

    ctx->pc = 0x42e530u;

label_42e530:
    // 0x42e530: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x42e530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
label_42e534:
    // 0x42e534: 0xa0302a  slt         $a2, $a1, $zero
    ctx->pc = 0x42e534u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_42e538:
    // 0x42e538: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x42e538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_42e53c:
    // 0x42e53c: 0x51823  negu        $v1, $a1
    ctx->pc = 0x42e53cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
label_42e540:
    // 0x42e540: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x42e540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_42e544:
    // 0x42e544: 0xc31818  mult        $v1, $a2, $v1
    ctx->pc = 0x42e544u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_42e548:
    // 0x42e548: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x42e548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_42e54c:
    // 0x42e54c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x42e54cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_42e550:
    // 0x42e550: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x42e550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_42e554:
    // 0x42e554: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x42e554u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_42e558:
    // 0x42e558: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x42e558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_42e55c:
    // 0x42e55c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x42e55cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_42e560:
    // 0x42e560: 0x8c870070  lw          $a3, 0x70($a0)
    ctx->pc = 0x42e560u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_42e564:
    // 0x42e564: 0x24660001  addiu       $a2, $v1, 0x1
    ctx->pc = 0x42e564u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_42e568:
    // 0x42e568: 0x8c840074  lw          $a0, 0x74($a0)
    ctx->pc = 0x42e568u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_42e56c:
    // 0x42e56c: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x42e56cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_42e570:
    // 0x42e570: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x42e570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_42e574:
    // 0x42e574: 0x8c6300f0  lw          $v1, 0xF0($v1)
    ctx->pc = 0x42e574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 240)));
label_42e578:
    // 0x42e578: 0x10c30005  beq         $a2, $v1, . + 4 + (0x5 << 2)
label_42e57c:
    if (ctx->pc == 0x42E57Cu) {
        ctx->pc = 0x42E580u;
        goto label_42e580;
    }
    ctx->pc = 0x42E578u;
    {
        const bool branch_taken_0x42e578 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x42e578) {
            ctx->pc = 0x42E590u;
            goto label_42e590;
        }
    }
    ctx->pc = 0x42E580u;
label_42e580:
    // 0x42e580: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x42e580u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_42e584:
    // 0x42e584: 0x227182b  sltu        $v1, $s1, $a3
    ctx->pc = 0x42e584u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
label_42e588:
    // 0x42e588: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_42e58c:
    if (ctx->pc == 0x42E58Cu) {
        ctx->pc = 0x42E58Cu;
            // 0x42e58c: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->pc = 0x42E590u;
        goto label_42e590;
    }
    ctx->pc = 0x42E588u;
    {
        const bool branch_taken_0x42e588 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x42E58Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42E588u;
            // 0x42e58c: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42e588) {
            ctx->pc = 0x42E570u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_42e570;
        }
    }
    ctx->pc = 0x42E590u;
label_42e590:
    // 0x42e590: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x42e590u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_42e594:
    // 0x42e594: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x42e594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_42e598:
    // 0x42e598: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x42e598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_42e59c:
    // 0x42e59c: 0x14a3000c  bne         $a1, $v1, . + 4 + (0xC << 2)
label_42e5a0:
    if (ctx->pc == 0x42E5A0u) {
        ctx->pc = 0x42E5A0u;
            // 0x42e5a0: 0x8c900000  lw          $s0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x42E5A4u;
        goto label_42e5a4;
    }
    ctx->pc = 0x42E59Cu;
    {
        const bool branch_taken_0x42e59c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x42E5A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42E59Cu;
            // 0x42e5a0: 0x8c900000  lw          $s0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42e59c) {
            ctx->pc = 0x42E5D0u;
            goto label_42e5d0;
        }
    }
    ctx->pc = 0x42E5A4u;
label_42e5a4:
    // 0x42e5a4: 0xc10bf24  jal         func_42FC90
label_42e5a8:
    if (ctx->pc == 0x42E5A8u) {
        ctx->pc = 0x42E5A8u;
            // 0x42e5a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42E5ACu;
        goto label_42e5ac;
    }
    ctx->pc = 0x42E5A4u;
    SET_GPR_U32(ctx, 31, 0x42E5ACu);
    ctx->pc = 0x42E5A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42E5A4u;
            // 0x42e5a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x42FC90u;
    if (runtime->hasFunction(0x42FC90u)) {
        auto targetFn = runtime->lookupFunction(0x42FC90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42E5ACu; }
        if (ctx->pc != 0x42E5ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0042FC90_0x42fc90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42E5ACu; }
        if (ctx->pc != 0x42E5ACu) { return; }
    }
    ctx->pc = 0x42E5ACu;
label_42e5ac:
    // 0x42e5ac: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x42e5acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_42e5b0:
    // 0x42e5b0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x42e5b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_42e5b4:
    // 0x42e5b4: 0x8c446ed0  lw          $a0, 0x6ED0($v0)
    ctx->pc = 0x42e5b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28368)));
label_42e5b8:
    // 0x42e5b8: 0xc10cb7c  jal         func_432DF0
label_42e5bc:
    if (ctx->pc == 0x42E5BCu) {
        ctx->pc = 0x42E5BCu;
            // 0x42e5bc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x42E5C0u;
        goto label_42e5c0;
    }
    ctx->pc = 0x42E5B8u;
    SET_GPR_U32(ctx, 31, 0x42E5C0u);
    ctx->pc = 0x42E5BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42E5B8u;
            // 0x42e5bc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x432DF0u;
    if (runtime->hasFunction(0x432DF0u)) {
        auto targetFn = runtime->lookupFunction(0x432DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42E5C0u; }
        if (ctx->pc != 0x42E5C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00432DF0_0x432df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42E5C0u; }
        if (ctx->pc != 0x42E5C0u) { return; }
    }
    ctx->pc = 0x42E5C0u;
label_42e5c0:
    // 0x42e5c0: 0xc072aaa  jal         func_1CAAA8
label_42e5c4:
    if (ctx->pc == 0x42E5C4u) {
        ctx->pc = 0x42E5C4u;
            // 0x42e5c4: 0x92440094  lbu         $a0, 0x94($s2) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 148)));
        ctx->pc = 0x42E5C8u;
        goto label_42e5c8;
    }
    ctx->pc = 0x42E5C0u;
    SET_GPR_U32(ctx, 31, 0x42E5C8u);
    ctx->pc = 0x42E5C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42E5C0u;
            // 0x42e5c4: 0x92440094  lbu         $a0, 0x94($s2) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 148)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CAAA8u;
    if (runtime->hasFunction(0x1CAAA8u)) {
        auto targetFn = runtime->lookupFunction(0x1CAAA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42E5C8u; }
        if (ctx->pc != 0x42E5C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CAAA8_0x1caaa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42E5C8u; }
        if (ctx->pc != 0x42E5C8u) { return; }
    }
    ctx->pc = 0x42E5C8u;
label_42e5c8:
    // 0x42e5c8: 0x1000009e  b           . + 4 + (0x9E << 2)
label_42e5cc:
    if (ctx->pc == 0x42E5CCu) {
        ctx->pc = 0x42E5CCu;
            // 0x42e5cc: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x42E5D0u;
        goto label_42e5d0;
    }
    ctx->pc = 0x42E5C8u;
    {
        const bool branch_taken_0x42e5c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42E5CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42E5C8u;
            // 0x42e5cc: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42e5c8) {
            ctx->pc = 0x42E844u;
            goto label_42e844;
        }
    }
    ctx->pc = 0x42E5D0u;
label_42e5d0:
    // 0x42e5d0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x42e5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_42e5d4:
    // 0x42e5d4: 0x54a30092  bnel        $a1, $v1, . + 4 + (0x92 << 2)
label_42e5d8:
    if (ctx->pc == 0x42E5D8u) {
        ctx->pc = 0x42E5D8u;
            // 0x42e5d8: 0x30a30001  andi        $v1, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
        ctx->pc = 0x42E5DCu;
        goto label_42e5dc;
    }
    ctx->pc = 0x42E5D4u;
    {
        const bool branch_taken_0x42e5d4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x42e5d4) {
            ctx->pc = 0x42E5D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x42E5D4u;
            // 0x42e5d8: 0x30a30001  andi        $v1, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
            ctx->pc = 0x42E820u;
            goto label_42e820;
        }
    }
    ctx->pc = 0x42E5DCu;
label_42e5dc:
    // 0x42e5dc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x42e5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_42e5e0:
    // 0x42e5e0: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x42e5e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_42e5e4:
    // 0x42e5e4: 0x8c423da0  lw          $v0, 0x3DA0($v0)
    ctx->pc = 0x42e5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15776)));
label_42e5e8:
    // 0x42e5e8: 0x8c420074  lw          $v0, 0x74($v0)
    ctx->pc = 0x42e5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_42e5ec:
    // 0x42e5ec: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x42e5ecu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_42e5f0:
    // 0x42e5f0: 0xc04cc04  jal         func_133010
label_42e5f4:
    if (ctx->pc == 0x42E5F4u) {
        ctx->pc = 0x42E5F4u;
            // 0x42e5f4: 0x26650010  addiu       $a1, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->pc = 0x42E5F8u;
        goto label_42e5f8;
    }
    ctx->pc = 0x42E5F0u;
    SET_GPR_U32(ctx, 31, 0x42E5F8u);
    ctx->pc = 0x42E5F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42E5F0u;
            // 0x42e5f4: 0x26650010  addiu       $a1, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42E5F8u; }
        if (ctx->pc != 0x42E5F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42E5F8u; }
        if (ctx->pc != 0x42E5F8u) { return; }
    }
    ctx->pc = 0x42E5F8u;
label_42e5f8:
    // 0x42e5f8: 0x26650020  addiu       $a1, $s3, 0x20
    ctx->pc = 0x42e5f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
label_42e5fc:
    // 0x42e5fc: 0xc04f278  jal         func_13C9E0
label_42e600:
    if (ctx->pc == 0x42E600u) {
        ctx->pc = 0x42E600u;
            // 0x42e600: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x42E604u;
        goto label_42e604;
    }
    ctx->pc = 0x42E5FCu;
    SET_GPR_U32(ctx, 31, 0x42E604u);
    ctx->pc = 0x42E600u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42E5FCu;
            // 0x42e600: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42E604u; }
        if (ctx->pc != 0x42E604u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42E604u; }
        if (ctx->pc != 0x42E604u) { return; }
    }
    ctx->pc = 0x42E604u;
label_42e604:
    // 0x42e604: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x42e604u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
label_42e608:
    // 0x42e608: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x42e608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_42e60c:
    // 0x42e60c: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x42e60cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_42e610:
    // 0x42e610: 0xc04cca0  jal         func_133280
label_42e614:
    if (ctx->pc == 0x42E614u) {
        ctx->pc = 0x42E614u;
            // 0x42e614: 0x24c6cc70  addiu       $a2, $a2, -0x3390 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954096));
        ctx->pc = 0x42E618u;
        goto label_42e618;
    }
    ctx->pc = 0x42E610u;
    SET_GPR_U32(ctx, 31, 0x42E618u);
    ctx->pc = 0x42E614u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42E610u;
            // 0x42e614: 0x24c6cc70  addiu       $a2, $a2, -0x3390 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954096));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42E618u; }
        if (ctx->pc != 0x42E618u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42E618u; }
        if (ctx->pc != 0x42E618u) { return; }
    }
    ctx->pc = 0x42E618u;
label_42e618:
    // 0x42e618: 0x3c02425c  lui         $v0, 0x425C
    ctx->pc = 0x42e618u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16988 << 16));
label_42e61c:
    // 0x42e61c: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x42e61cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_42e620:
    // 0x42e620: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x42e620u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_42e624:
    // 0x42e624: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x42e624u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_42e628:
    // 0x42e628: 0xc04cc7c  jal         func_1331F0
label_42e62c:
    if (ctx->pc == 0x42E62Cu) {
        ctx->pc = 0x42E62Cu;
            // 0x42e62c: 0x27a600f0  addiu       $a2, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x42E630u;
        goto label_42e630;
    }
    ctx->pc = 0x42E628u;
    SET_GPR_U32(ctx, 31, 0x42E630u);
    ctx->pc = 0x42E62Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42E628u;
            // 0x42e62c: 0x27a600f0  addiu       $a2, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331F0u;
    if (runtime->hasFunction(0x1331F0u)) {
        auto targetFn = runtime->lookupFunction(0x1331F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42E630u; }
        if (ctx->pc != 0x42E630u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331F0_0x1331f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42E630u; }
        if (ctx->pc != 0x42E630u) { return; }
    }
    ctx->pc = 0x42E630u;
label_42e630:
    // 0x42e630: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x42e630u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_42e634:
    // 0x42e634: 0xc04cc04  jal         func_133010
label_42e638:
    if (ctx->pc == 0x42E638u) {
        ctx->pc = 0x42E638u;
            // 0x42e638: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x42E63Cu;
        goto label_42e63c;
    }
    ctx->pc = 0x42E634u;
    SET_GPR_U32(ctx, 31, 0x42E63Cu);
    ctx->pc = 0x42E638u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42E634u;
            // 0x42e638: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42E63Cu; }
        if (ctx->pc != 0x42E63Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42E63Cu; }
        if (ctx->pc != 0x42E63Cu) { return; }
    }
    ctx->pc = 0x42E63Cu;
label_42e63c:
    // 0x42e63c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x42e63cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_42e640:
    // 0x42e640: 0xc04f2b8  jal         func_13CAE0
label_42e644:
    if (ctx->pc == 0x42E644u) {
        ctx->pc = 0x42E644u;
            // 0x42e644: 0x24057fff  addiu       $a1, $zero, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
        ctx->pc = 0x42E648u;
        goto label_42e648;
    }
    ctx->pc = 0x42E640u;
    SET_GPR_U32(ctx, 31, 0x42E648u);
    ctx->pc = 0x42E644u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42E640u;
            // 0x42e644: 0x24057fff  addiu       $a1, $zero, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CAE0u;
    if (runtime->hasFunction(0x13CAE0u)) {
        auto targetFn = runtime->lookupFunction(0x13CAE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42E648u; }
        if (ctx->pc != 0x42E648u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CAE0_0x13cae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42E648u; }
        if (ctx->pc != 0x42E648u) { return; }
    }
    ctx->pc = 0x42E648u;
label_42e648:
    // 0x42e648: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x42e648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_42e64c:
    // 0x42e64c: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x42e64cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_42e650:
    // 0x42e650: 0xc04cd60  jal         func_133580
label_42e654:
    if (ctx->pc == 0x42E654u) {
        ctx->pc = 0x42E654u;
            // 0x42e654: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42E658u;
        goto label_42e658;
    }
    ctx->pc = 0x42E650u;
    SET_GPR_U32(ctx, 31, 0x42E658u);
    ctx->pc = 0x42E654u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42E650u;
            // 0x42e654: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42E658u; }
        if (ctx->pc != 0x42E658u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42E658u; }
        if (ctx->pc != 0x42E658u) { return; }
    }
    ctx->pc = 0x42E658u;
label_42e658:
    // 0x42e658: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x42e658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_42e65c:
    // 0x42e65c: 0xc04c994  jal         func_132650
label_42e660:
    if (ctx->pc == 0x42E660u) {
        ctx->pc = 0x42E660u;
            // 0x42e660: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x42E664u;
        goto label_42e664;
    }
    ctx->pc = 0x42E65Cu;
    SET_GPR_U32(ctx, 31, 0x42E664u);
    ctx->pc = 0x42E660u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42E65Cu;
            // 0x42e660: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132650u;
    if (runtime->hasFunction(0x132650u)) {
        auto targetFn = runtime->lookupFunction(0x132650u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42E664u; }
        if (ctx->pc != 0x42E664u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132650_0x132650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42E664u; }
        if (ctx->pc != 0x42E664u) { return; }
    }
    ctx->pc = 0x42E664u;
label_42e664:
    // 0x42e664: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x42e664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_42e668:
    // 0x42e668: 0xc04c720  jal         func_131C80
label_42e66c:
    if (ctx->pc == 0x42E66Cu) {
        ctx->pc = 0x42E66Cu;
            // 0x42e66c: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x42E670u;
        goto label_42e670;
    }
    ctx->pc = 0x42E668u;
    SET_GPR_U32(ctx, 31, 0x42E670u);
    ctx->pc = 0x42E66Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42E668u;
            // 0x42e66c: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131C80u;
    if (runtime->hasFunction(0x131C80u)) {
        auto targetFn = runtime->lookupFunction(0x131C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42E670u; }
        if (ctx->pc != 0x42E670u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131C80_0x131c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42E670u; }
        if (ctx->pc != 0x42E670u) { return; }
    }
    ctx->pc = 0x42E670u;
label_42e670:
    // 0x42e670: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x42e670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_42e674:
    // 0x42e674: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x42e674u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_42e678:
    // 0x42e678: 0xae0200f0  sw          $v0, 0xF0($s0)
    ctx->pc = 0x42e678u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 2));
label_42e67c:
    // 0x42e67c: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x42e67cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
label_42e680:
    // 0x42e680: 0xae0200d4  sw          $v0, 0xD4($s0)
    ctx->pc = 0x42e680u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 2));
label_42e684:
    // 0x42e684: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x42e684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_42e688:
    // 0x42e688: 0x8c446ed0  lw          $a0, 0x6ED0($v0)
    ctx->pc = 0x42e688u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28368)));
label_42e68c:
    // 0x42e68c: 0xc10cb7c  jal         func_432DF0
label_42e690:
    if (ctx->pc == 0x42E690u) {
        ctx->pc = 0x42E690u;
            // 0x42e690: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42E694u;
        goto label_42e694;
    }
    ctx->pc = 0x42E68Cu;
    SET_GPR_U32(ctx, 31, 0x42E694u);
    ctx->pc = 0x42E690u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42E68Cu;
            // 0x42e690: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x432DF0u;
    if (runtime->hasFunction(0x432DF0u)) {
        auto targetFn = runtime->lookupFunction(0x432DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42E694u; }
        if (ctx->pc != 0x42E694u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00432DF0_0x432df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42E694u; }
        if (ctx->pc != 0x42E694u) { return; }
    }
    ctx->pc = 0x42E694u;
label_42e694:
    // 0x42e694: 0xc072a56  jal         func_1CA958
label_42e698:
    if (ctx->pc == 0x42E698u) {
        ctx->pc = 0x42E698u;
            // 0x42e698: 0x92440094  lbu         $a0, 0x94($s2) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 148)));
        ctx->pc = 0x42E69Cu;
        goto label_42e69c;
    }
    ctx->pc = 0x42E694u;
    SET_GPR_U32(ctx, 31, 0x42E69Cu);
    ctx->pc = 0x42E698u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42E694u;
            // 0x42e698: 0x92440094  lbu         $a0, 0x94($s2) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 148)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CA958u;
    if (runtime->hasFunction(0x1CA958u)) {
        auto targetFn = runtime->lookupFunction(0x1CA958u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42E69Cu; }
        if (ctx->pc != 0x42E69Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CA958_0x1ca958(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42E69Cu; }
        if (ctx->pc != 0x42E69Cu) { return; }
    }
    ctx->pc = 0x42E69Cu;
label_42e69c:
    // 0x42e69c: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x42e69cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_42e6a0:
    // 0x42e6a0: 0x3c1100af  lui         $s1, 0xAF
    ctx->pc = 0x42e6a0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)175 << 16));
label_42e6a4:
    // 0x42e6a4: 0x8c640e80  lw          $a0, 0xE80($v1)
    ctx->pc = 0x42e6a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_42e6a8:
    // 0x42e6a8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x42e6a8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_42e6ac:
    // 0x42e6ac: 0x26310e80  addiu       $s1, $s1, 0xE80
    ctx->pc = 0x42e6acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 3712));
label_42e6b0:
    // 0x42e6b0: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x42e6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_42e6b4:
    // 0x42e6b4: 0x8c900780  lw          $s0, 0x780($a0)
    ctx->pc = 0x42e6b4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1920)));
label_42e6b8:
    // 0x42e6b8: 0x8c633da0  lw          $v1, 0x3DA0($v1)
    ctx->pc = 0x42e6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15776)));
label_42e6bc:
    // 0x42e6bc: 0x8c630074  lw          $v1, 0x74($v1)
    ctx->pc = 0x42e6bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_42e6c0:
    // 0x42e6c0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x42e6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_42e6c4:
    // 0x42e6c4: 0x24730010  addiu       $s3, $v1, 0x10
    ctx->pc = 0x42e6c4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_42e6c8:
    // 0x42e6c8: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x42e6c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_42e6cc:
    // 0x42e6cc: 0x64120001  daddiu      $s2, $zero, 0x1
    ctx->pc = 0x42e6ccu;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_42e6d0:
    // 0x42e6d0: 0x8c830e34  lw          $v1, 0xE34($a0)
    ctx->pc = 0x42e6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3636)));
label_42e6d4:
    // 0x42e6d4: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
label_42e6d8:
    if (ctx->pc == 0x42E6D8u) {
        ctx->pc = 0x42E6D8u;
            // 0x42e6d8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42E6DCu;
        goto label_42e6dc;
    }
    ctx->pc = 0x42E6D4u;
    {
        const bool branch_taken_0x42e6d4 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x42E6D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42E6D4u;
            // 0x42e6d8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42e6d4) {
            ctx->pc = 0x42E6F0u;
            goto label_42e6f0;
        }
    }
    ctx->pc = 0x42E6DCu;
label_42e6dc:
    // 0x42e6dc: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x42e6dcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_42e6e0:
    // 0x42e6e0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_42e6e4:
    if (ctx->pc == 0x42E6E4u) {
        ctx->pc = 0x42E6E8u;
        goto label_42e6e8;
    }
    ctx->pc = 0x42E6E0u;
    {
        const bool branch_taken_0x42e6e0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x42e6e0) {
            ctx->pc = 0x42E6F0u;
            goto label_42e6f0;
        }
    }
    ctx->pc = 0x42E6E8u;
label_42e6e8:
    // 0x42e6e8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x42e6e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_42e6ec:
    // 0x42e6ec: 0x0  nop
    ctx->pc = 0x42e6ecu;
    // NOP
label_42e6f0:
    // 0x42e6f0: 0x14a00007  bnez        $a1, . + 4 + (0x7 << 2)
label_42e6f4:
    if (ctx->pc == 0x42E6F4u) {
        ctx->pc = 0x42E6F8u;
        goto label_42e6f8;
    }
    ctx->pc = 0x42E6F0u;
    {
        const bool branch_taken_0x42e6f0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x42e6f0) {
            ctx->pc = 0x42E710u;
            goto label_42e710;
        }
    }
    ctx->pc = 0x42E6F8u;
label_42e6f8:
    // 0x42e6f8: 0xc075eb4  jal         func_1D7AD0
label_42e6fc:
    if (ctx->pc == 0x42E6FCu) {
        ctx->pc = 0x42E700u;
        goto label_42e700;
    }
    ctx->pc = 0x42E6F8u;
    SET_GPR_U32(ctx, 31, 0x42E700u);
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42E700u; }
        if (ctx->pc != 0x42E700u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42E700u; }
        if (ctx->pc != 0x42E700u) { return; }
    }
    ctx->pc = 0x42E700u;
label_42e700:
    // 0x42e700: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_42e704:
    if (ctx->pc == 0x42E704u) {
        ctx->pc = 0x42E708u;
        goto label_42e708;
    }
    ctx->pc = 0x42E700u;
    {
        const bool branch_taken_0x42e700 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x42e700) {
            ctx->pc = 0x42E710u;
            goto label_42e710;
        }
    }
    ctx->pc = 0x42E708u;
label_42e708:
    // 0x42e708: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x42e708u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_42e70c:
    // 0x42e70c: 0x0  nop
    ctx->pc = 0x42e70cu;
    // NOP
label_42e710:
    // 0x42e710: 0x16400007  bnez        $s2, . + 4 + (0x7 << 2)
label_42e714:
    if (ctx->pc == 0x42E714u) {
        ctx->pc = 0x42E718u;
        goto label_42e718;
    }
    ctx->pc = 0x42E710u;
    {
        const bool branch_taken_0x42e710 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x42e710) {
            ctx->pc = 0x42E730u;
            goto label_42e730;
        }
    }
    ctx->pc = 0x42E718u;
label_42e718:
    // 0x42e718: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x42e718u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_42e71c:
    // 0x42e71c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x42e71cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_42e720:
    // 0x42e720: 0x8c840e34  lw          $a0, 0xE34($a0)
    ctx->pc = 0x42e720u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3636)));
label_42e724:
    // 0x42e724: 0x14830038  bne         $a0, $v1, . + 4 + (0x38 << 2)
label_42e728:
    if (ctx->pc == 0x42E728u) {
        ctx->pc = 0x42E72Cu;
        goto label_42e72c;
    }
    ctx->pc = 0x42E724u;
    {
        const bool branch_taken_0x42e724 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x42e724) {
            ctx->pc = 0x42E808u;
            goto label_42e808;
        }
    }
    ctx->pc = 0x42E72Cu;
label_42e72c:
    // 0x42e72c: 0x0  nop
    ctx->pc = 0x42e72cu;
    // NOP
label_42e730:
    // 0x42e730: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x42e730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_42e734:
    // 0x42e734: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x42e734u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_42e738:
    // 0x42e738: 0xc04cc34  jal         func_1330D0
label_42e73c:
    if (ctx->pc == 0x42E73Cu) {
        ctx->pc = 0x42E73Cu;
            // 0x42e73c: 0x244502c0  addiu       $a1, $v0, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 704));
        ctx->pc = 0x42E740u;
        goto label_42e740;
    }
    ctx->pc = 0x42E738u;
    SET_GPR_U32(ctx, 31, 0x42E740u);
    ctx->pc = 0x42E73Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42E738u;
            // 0x42e73c: 0x244502c0  addiu       $a1, $v0, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330D0u;
    if (runtime->hasFunction(0x1330D0u)) {
        auto targetFn = runtime->lookupFunction(0x1330D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42E740u; }
        if (ctx->pc != 0x42E740u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330D0_0x1330d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42E740u; }
        if (ctx->pc != 0x42E740u) { return; }
    }
    ctx->pc = 0x42E740u;
label_42e740:
    // 0x42e740: 0x3c0347af  lui         $v1, 0x47AF
    ctx->pc = 0x42e740u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18351 << 16));
label_42e744:
    // 0x42e744: 0x3463c800  ori         $v1, $v1, 0xC800
    ctx->pc = 0x42e744u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)51200);
label_42e748:
    // 0x42e748: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x42e748u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_42e74c:
    // 0x42e74c: 0x0  nop
    ctx->pc = 0x42e74cu;
    // NOP
label_42e750:
    // 0x42e750: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x42e750u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_42e754:
    // 0x42e754: 0x4500002c  bc1f        . + 4 + (0x2C << 2)
label_42e758:
    if (ctx->pc == 0x42E758u) {
        ctx->pc = 0x42E75Cu;
        goto label_42e75c;
    }
    ctx->pc = 0x42E754u;
    {
        const bool branch_taken_0x42e754 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x42e754) {
            ctx->pc = 0x42E808u;
            goto label_42e808;
        }
    }
    ctx->pc = 0x42E75Cu;
label_42e75c:
    // 0x42e75c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x42e75cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_42e760:
    // 0x42e760: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x42e760u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_42e764:
    // 0x42e764: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x42e764u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_42e768:
    // 0x42e768: 0xc04cc90  jal         func_133240
label_42e76c:
    if (ctx->pc == 0x42E76Cu) {
        ctx->pc = 0x42E76Cu;
            // 0x42e76c: 0x244602c0  addiu       $a2, $v0, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 704));
        ctx->pc = 0x42E770u;
        goto label_42e770;
    }
    ctx->pc = 0x42E768u;
    SET_GPR_U32(ctx, 31, 0x42E770u);
    ctx->pc = 0x42E76Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42E768u;
            // 0x42e76c: 0x244602c0  addiu       $a2, $v0, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42E770u; }
        if (ctx->pc != 0x42E770u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42E770u; }
        if (ctx->pc != 0x42E770u) { return; }
    }
    ctx->pc = 0x42E770u;
label_42e770:
    // 0x42e770: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x42e770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_42e774:
    // 0x42e774: 0x27a50150  addiu       $a1, $sp, 0x150
    ctx->pc = 0x42e774u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_42e778:
    // 0x42e778: 0xc04cc08  jal         func_133020
label_42e77c:
    if (ctx->pc == 0x42E77Cu) {
        ctx->pc = 0x42E77Cu;
            // 0x42e77c: 0x24440300  addiu       $a0, $v0, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 768));
        ctx->pc = 0x42E780u;
        goto label_42e780;
    }
    ctx->pc = 0x42E778u;
    SET_GPR_U32(ctx, 31, 0x42E780u);
    ctx->pc = 0x42E77Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42E778u;
            // 0x42e77c: 0x24440300  addiu       $a0, $v0, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 768));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133020u;
    if (runtime->hasFunction(0x133020u)) {
        auto targetFn = runtime->lookupFunction(0x133020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42E780u; }
        if (ctx->pc != 0x42E780u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133020_0x133020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42E780u; }
        if (ctx->pc != 0x42E780u) { return; }
    }
    ctx->pc = 0x42E780u;
label_42e780:
    // 0x42e780: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x42e780u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_42e784:
    // 0x42e784: 0x0  nop
    ctx->pc = 0x42e784u;
    // NOP
label_42e788:
    // 0x42e788: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x42e788u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_42e78c:
    // 0x42e78c: 0x4501001e  bc1t        . + 4 + (0x1E << 2)
label_42e790:
    if (ctx->pc == 0x42E790u) {
        ctx->pc = 0x42E794u;
        goto label_42e794;
    }
    ctx->pc = 0x42E78Cu;
    {
        const bool branch_taken_0x42e78c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x42e78c) {
            ctx->pc = 0x42E808u;
            goto label_42e808;
        }
    }
    ctx->pc = 0x42E794u;
label_42e794:
    // 0x42e794: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x42e794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_42e798:
    // 0x42e798: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x42e798u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_42e79c:
    // 0x42e79c: 0xc04a576  jal         func_1295D8
label_42e7a0:
    if (ctx->pc == 0x42E7A0u) {
        ctx->pc = 0x42E7A0u;
            // 0x42e7a0: 0x2406003c  addiu       $a2, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->pc = 0x42E7A4u;
        goto label_42e7a4;
    }
    ctx->pc = 0x42E79Cu;
    SET_GPR_U32(ctx, 31, 0x42E7A4u);
    ctx->pc = 0x42E7A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42E79Cu;
            // 0x42e7a0: 0x2406003c  addiu       $a2, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42E7A4u; }
        if (ctx->pc != 0x42E7A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42E7A4u; }
        if (ctx->pc != 0x42E7A4u) { return; }
    }
    ctx->pc = 0x42E7A4u;
label_42e7a4:
    // 0x42e7a4: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x42e7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_42e7a8:
    // 0x42e7a8: 0x3c034170  lui         $v1, 0x4170
    ctx->pc = 0x42e7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16752 << 16));
label_42e7ac:
    // 0x42e7ac: 0xafa20120  sw          $v0, 0x120($sp)
    ctx->pc = 0x42e7acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 2));
label_42e7b0:
    // 0x42e7b0: 0xafa30114  sw          $v1, 0x114($sp)
    ctx->pc = 0x42e7b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 276), GPR_U32(ctx, 3));
label_42e7b4:
    // 0x42e7b4: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x42e7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_42e7b8:
    // 0x42e7b8: 0x3c034220  lui         $v1, 0x4220
    ctx->pc = 0x42e7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16928 << 16));
label_42e7bc:
    // 0x42e7bc: 0xafa2013c  sw          $v0, 0x13C($sp)
    ctx->pc = 0x42e7bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 2));
label_42e7c0:
    // 0x42e7c0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x42e7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_42e7c4:
    // 0x42e7c4: 0xafa30138  sw          $v1, 0x138($sp)
    ctx->pc = 0x42e7c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 3));
label_42e7c8:
    // 0x42e7c8: 0xafa30140  sw          $v1, 0x140($sp)
    ctx->pc = 0x42e7c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 3));
label_42e7cc:
    // 0x42e7cc: 0x8c44e400  lw          $a0, -0x1C00($v0)
    ctx->pc = 0x42e7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960128)));
label_42e7d0:
    // 0x42e7d0: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x42e7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_42e7d4:
    // 0x42e7d4: 0x8c82005c  lw          $v0, 0x5C($a0)
    ctx->pc = 0x42e7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
label_42e7d8:
    // 0x42e7d8: 0x806311aa  lb          $v1, 0x11AA($v1)
    ctx->pc = 0x42e7d8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4522)));
label_42e7dc:
    // 0x42e7dc: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x42e7dcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_42e7e0:
    // 0x42e7e0: 0x54200003  bnel        $at, $zero, . + 4 + (0x3 << 2)
label_42e7e4:
    if (ctx->pc == 0x42E7E4u) {
        ctx->pc = 0x42E7E4u;
            // 0x42e7e4: 0x8c820060  lw          $v0, 0x60($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
        ctx->pc = 0x42E7E8u;
        goto label_42e7e8;
    }
    ctx->pc = 0x42E7E0u;
    {
        const bool branch_taken_0x42e7e0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x42e7e0) {
            ctx->pc = 0x42E7E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x42E7E0u;
            // 0x42e7e4: 0x8c820060  lw          $v0, 0x60($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x42E7F0u;
            goto label_42e7f0;
        }
    }
    ctx->pc = 0x42E7E8u;
label_42e7e8:
    // 0x42e7e8: 0x10000004  b           . + 4 + (0x4 << 2)
label_42e7ec:
    if (ctx->pc == 0x42E7ECu) {
        ctx->pc = 0x42E7ECu;
            // 0x42e7ec: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42E7F0u;
        goto label_42e7f0;
    }
    ctx->pc = 0x42E7E8u;
    {
        const bool branch_taken_0x42e7e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42E7ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42E7E8u;
            // 0x42e7ec: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42e7e8) {
            ctx->pc = 0x42E7FCu;
            goto label_42e7fc;
        }
    }
    ctx->pc = 0x42E7F0u;
label_42e7f0:
    // 0x42e7f0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x42e7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_42e7f4:
    // 0x42e7f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x42e7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_42e7f8:
    // 0x42e7f8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x42e7f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_42e7fc:
    // 0x42e7fc: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x42e7fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_42e800:
    // 0x42e800: 0xc0b79e8  jal         func_2DE7A0
label_42e804:
    if (ctx->pc == 0x42E804u) {
        ctx->pc = 0x42E804u;
            // 0x42e804: 0x2406003c  addiu       $a2, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->pc = 0x42E808u;
        goto label_42e808;
    }
    ctx->pc = 0x42E800u;
    SET_GPR_U32(ctx, 31, 0x42E808u);
    ctx->pc = 0x42E804u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42E800u;
            // 0x42e804: 0x2406003c  addiu       $a2, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DE7A0u;
    if (runtime->hasFunction(0x2DE7A0u)) {
        auto targetFn = runtime->lookupFunction(0x2DE7A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42E808u; }
        if (ctx->pc != 0x42E808u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DE7A0_0x2de7a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42E808u; }
        if (ctx->pc != 0x42E808u) { return; }
    }
    ctx->pc = 0x42E808u;
label_42e808:
    // 0x42e808: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x42e808u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_42e80c:
    // 0x42e80c: 0x290182a  slt         $v1, $s4, $s0
    ctx->pc = 0x42e80cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_42e810:
    // 0x42e810: 0x1460ffad  bnez        $v1, . + 4 + (-0x53 << 2)
label_42e814:
    if (ctx->pc == 0x42E814u) {
        ctx->pc = 0x42E814u;
            // 0x42e814: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x42E818u;
        goto label_42e818;
    }
    ctx->pc = 0x42E810u;
    {
        const bool branch_taken_0x42e810 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x42E814u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42E810u;
            // 0x42e814: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42e810) {
            ctx->pc = 0x42E6C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_42e6c8;
        }
    }
    ctx->pc = 0x42E818u;
label_42e818:
    // 0x42e818: 0x10000009  b           . + 4 + (0x9 << 2)
label_42e81c:
    if (ctx->pc == 0x42E81Cu) {
        ctx->pc = 0x42E820u;
        goto label_42e820;
    }
    ctx->pc = 0x42E818u;
    {
        const bool branch_taken_0x42e818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x42e818) {
            ctx->pc = 0x42E840u;
            goto label_42e840;
        }
    }
    ctx->pc = 0x42E820u;
label_42e820:
    // 0x42e820: 0x4a30005  bgezl       $a1, . + 4 + (0x5 << 2)
label_42e824:
    if (ctx->pc == 0x42E824u) {
        ctx->pc = 0x42E824u;
            // 0x42e824: 0xae0300d8  sw          $v1, 0xD8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 3));
        ctx->pc = 0x42E828u;
        goto label_42e828;
    }
    ctx->pc = 0x42E820u;
    {
        const bool branch_taken_0x42e820 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x42e820) {
            ctx->pc = 0x42E824u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x42E820u;
            // 0x42e824: 0xae0300d8  sw          $v1, 0xD8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x42E838u;
            goto label_42e838;
        }
    }
    ctx->pc = 0x42E828u;
label_42e828:
    // 0x42e828: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_42e82c:
    if (ctx->pc == 0x42E82Cu) {
        ctx->pc = 0x42E830u;
        goto label_42e830;
    }
    ctx->pc = 0x42E828u;
    {
        const bool branch_taken_0x42e828 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x42e828) {
            ctx->pc = 0x42E834u;
            goto label_42e834;
        }
    }
    ctx->pc = 0x42E830u;
label_42e830:
    // 0x42e830: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x42e830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
label_42e834:
    // 0x42e834: 0xae0300d8  sw          $v1, 0xD8($s0)
    ctx->pc = 0x42e834u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 3));
label_42e838:
    // 0x42e838: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x42e838u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_42e83c:
    // 0x42e83c: 0xae0300f0  sw          $v1, 0xF0($s0)
    ctx->pc = 0x42e83cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 3));
label_42e840:
    // 0x42e840: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x42e840u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_42e844:
    // 0x42e844: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x42e844u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_42e848:
    // 0x42e848: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x42e848u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_42e84c:
    // 0x42e84c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x42e84cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_42e850:
    // 0x42e850: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x42e850u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_42e854:
    // 0x42e854: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x42e854u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_42e858:
    // 0x42e858: 0x3e00008  jr          $ra
label_42e85c:
    if (ctx->pc == 0x42E85Cu) {
        ctx->pc = 0x42E85Cu;
            // 0x42e85c: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->pc = 0x42E860u;
        goto label_42e860;
    }
    ctx->pc = 0x42E858u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42E85Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42E858u;
            // 0x42e85c: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x42E860u;
label_42e860:
    // 0x42e860: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x42e860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
label_42e864:
    // 0x42e864: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x42e864u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_42e868:
    // 0x42e868: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x42e868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_42e86c:
    // 0x42e86c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x42e86cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_42e870:
    // 0x42e870: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x42e870u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_42e874:
    // 0x42e874: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x42e874u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_42e878:
    // 0x42e878: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x42e878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_42e87c:
    // 0x42e87c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x42e87cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_42e880:
    // 0x42e880: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x42e880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_42e884:
    // 0x42e884: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x42e884u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_42e888:
    // 0x42e888: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x42e888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_42e88c:
    // 0x42e88c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x42e88cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_42e890:
    // 0x42e890: 0x8c660e80  lw          $a2, 0xE80($v1)
    ctx->pc = 0x42e890u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_42e894:
    // 0x42e894: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x42e894u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_42e898:
    // 0x42e898: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x42e898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_42e89c:
    // 0x42e89c: 0x10a30010  beq         $a1, $v1, . + 4 + (0x10 << 2)
label_42e8a0:
    if (ctx->pc == 0x42E8A0u) {
        ctx->pc = 0x42E8A0u;
            // 0x42e8a0: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42E8A4u;
        goto label_42e8a4;
    }
    ctx->pc = 0x42E89Cu;
    {
        const bool branch_taken_0x42e89c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x42E8A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42E89Cu;
            // 0x42e8a0: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42e89c) {
            ctx->pc = 0x42E8E0u;
            goto label_42e8e0;
        }
    }
    ctx->pc = 0x42E8A4u;
label_42e8a4:
    // 0x42e8a4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x42e8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_42e8a8:
    // 0x42e8a8: 0x50a300bf  beql        $a1, $v1, . + 4 + (0xBF << 2)
label_42e8ac:
    if (ctx->pc == 0x42E8ACu) {
        ctx->pc = 0x42E8ACu;
            // 0x42e8ac: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->pc = 0x42E8B0u;
        goto label_42e8b0;
    }
    ctx->pc = 0x42E8A8u;
    {
        const bool branch_taken_0x42e8a8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x42e8a8) {
            ctx->pc = 0x42E8ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x42E8A8u;
            // 0x42e8ac: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x42EBA8u;
            goto label_42eba8;
        }
    }
    ctx->pc = 0x42E8B0u;
label_42e8b0:
    // 0x42e8b0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x42e8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_42e8b4:
    // 0x42e8b4: 0x50a30003  beql        $a1, $v1, . + 4 + (0x3 << 2)
label_42e8b8:
    if (ctx->pc == 0x42E8B8u) {
        ctx->pc = 0x42E8B8u;
            // 0x42e8b8: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x42E8BCu;
        goto label_42e8bc;
    }
    ctx->pc = 0x42E8B4u;
    {
        const bool branch_taken_0x42e8b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x42e8b4) {
            ctx->pc = 0x42E8B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x42E8B4u;
            // 0x42e8b8: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x42E8C4u;
            goto label_42e8c4;
        }
    }
    ctx->pc = 0x42E8BCu;
label_42e8bc:
    // 0x42e8bc: 0x100000b9  b           . + 4 + (0xB9 << 2)
label_42e8c0:
    if (ctx->pc == 0x42E8C0u) {
        ctx->pc = 0x42E8C4u;
        goto label_42e8c4;
    }
    ctx->pc = 0x42E8BCu;
    {
        const bool branch_taken_0x42e8bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x42e8bc) {
            ctx->pc = 0x42EBA4u;
            goto label_42eba4;
        }
    }
    ctx->pc = 0x42E8C4u;
label_42e8c4:
    // 0x42e8c4: 0x8cc20cb4  lw          $v0, 0xCB4($a2)
    ctx->pc = 0x42e8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3252)));
label_42e8c8:
    // 0x42e8c8: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x42e8c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_42e8cc:
    // 0x42e8cc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x42e8ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_42e8d0:
    // 0x42e8d0: 0x320f809  jalr        $t9
label_42e8d4:
    if (ctx->pc == 0x42E8D4u) {
        ctx->pc = 0x42E8D4u;
            // 0x42e8d4: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x42E8D8u;
        goto label_42e8d8;
    }
    ctx->pc = 0x42E8D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x42E8D8u);
        ctx->pc = 0x42E8D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42E8D0u;
            // 0x42e8d4: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x42E8D8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x42E8D8u; }
            if (ctx->pc != 0x42E8D8u) { return; }
        }
        }
    }
    ctx->pc = 0x42E8D8u;
label_42e8d8:
    // 0x42e8d8: 0x100000b2  b           . + 4 + (0xB2 << 2)
label_42e8dc:
    if (ctx->pc == 0x42E8DCu) {
        ctx->pc = 0x42E8E0u;
        goto label_42e8e0;
    }
    ctx->pc = 0x42E8D8u;
    {
        const bool branch_taken_0x42e8d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x42e8d8) {
            ctx->pc = 0x42EBA4u;
            goto label_42eba4;
        }
    }
    ctx->pc = 0x42E8E0u;
label_42e8e0:
    // 0x42e8e0: 0x8ebe0070  lw          $fp, 0x70($s5)
    ctx->pc = 0x42e8e0u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
label_42e8e4:
    // 0x42e8e4: 0x13c000af  beqz        $fp, . + 4 + (0xAF << 2)
label_42e8e8:
    if (ctx->pc == 0x42E8E8u) {
        ctx->pc = 0x42E8ECu;
        goto label_42e8ec;
    }
    ctx->pc = 0x42E8E4u;
    {
        const bool branch_taken_0x42e8e4 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x42e8e4) {
            ctx->pc = 0x42EBA4u;
            goto label_42eba4;
        }
    }
    ctx->pc = 0x42E8ECu;
label_42e8ec:
    // 0x42e8ec: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x42e8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_42e8f0:
    // 0x42e8f0: 0x26b10084  addiu       $s1, $s5, 0x84
    ctx->pc = 0x42e8f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 132));
label_42e8f4:
    // 0x42e8f4: 0x8c42e378  lw          $v0, -0x1C88($v0)
    ctx->pc = 0x42e8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959992)));
label_42e8f8:
    // 0x42e8f8: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x42e8f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_42e8fc:
    // 0x42e8fc: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x42e8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_42e900:
    // 0x42e900: 0x8c44d130  lw          $a0, -0x2ED0($v0)
    ctx->pc = 0x42e900u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_42e904:
    // 0x42e904: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x42e904u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_42e908:
    // 0x42e908: 0x8c840130  lw          $a0, 0x130($a0)
    ctx->pc = 0x42e908u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
label_42e90c:
    // 0x42e90c: 0x8c43d120  lw          $v1, -0x2EE0($v0)
    ctx->pc = 0x42e90cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_42e910:
    // 0x42e910: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x42e910u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_42e914:
    // 0x42e914: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x42e914u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_42e918:
    // 0x42e918: 0x8c42e370  lw          $v0, -0x1C90($v0)
    ctx->pc = 0x42e918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959984)));
label_42e91c:
    // 0x42e91c: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x42e91cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
label_42e920:
    // 0x42e920: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x42e920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_42e924:
    // 0x42e924: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x42e924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_42e928:
    // 0x42e928: 0x92a30090  lbu         $v1, 0x90($s5)
    ctx->pc = 0x42e928u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 144)));
label_42e92c:
    // 0x42e92c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x42e92cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_42e930:
    // 0x42e930: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x42e930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_42e934:
    // 0x42e934: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_42e938:
    if (ctx->pc == 0x42E938u) {
        ctx->pc = 0x42E938u;
            // 0x42e938: 0xafa200c0  sw          $v0, 0xC0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
        ctx->pc = 0x42E93Cu;
        goto label_42e93c;
    }
    ctx->pc = 0x42E934u;
    {
        const bool branch_taken_0x42e934 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x42E938u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42E934u;
            // 0x42e938: 0xafa200c0  sw          $v0, 0xC0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42e934) {
            ctx->pc = 0x42E954u;
            goto label_42e954;
        }
    }
    ctx->pc = 0x42E93Cu;
label_42e93c:
    // 0x42e93c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x42e93cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_42e940:
    // 0x42e940: 0x8c44e3e8  lw          $a0, -0x1C18($v0)
    ctx->pc = 0x42e940u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960104)));
label_42e944:
    // 0x42e944: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x42e944u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_42e948:
    // 0x42e948: 0x8f390040  lw          $t9, 0x40($t9)
    ctx->pc = 0x42e948u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 64)));
label_42e94c:
    // 0x42e94c: 0x320f809  jalr        $t9
label_42e950:
    if (ctx->pc == 0x42E950u) {
        ctx->pc = 0x42E954u;
        goto label_42e954;
    }
    ctx->pc = 0x42E94Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x42E954u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x42E954u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x42E954u; }
            if (ctx->pc != 0x42E954u) { return; }
        }
        }
    }
    ctx->pc = 0x42E954u;
label_42e954:
    // 0x42e954: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x42e954u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_42e958:
    // 0x42e958: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x42e958u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_42e95c:
    // 0x42e95c: 0xac60e3d8  sw          $zero, -0x1C28($v1)
    ctx->pc = 0x42e95cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960088), GPR_U32(ctx, 0));
label_42e960:
    // 0x42e960: 0xac40e3c0  sw          $zero, -0x1C40($v0)
    ctx->pc = 0x42e960u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960064), GPR_U32(ctx, 0));
label_42e964:
    // 0x42e964: 0xc04e738  jal         func_139CE0
label_42e968:
    if (ctx->pc == 0x42E968u) {
        ctx->pc = 0x42E968u;
            // 0x42e968: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->pc = 0x42E96Cu;
        goto label_42e96c;
    }
    ctx->pc = 0x42E964u;
    SET_GPR_U32(ctx, 31, 0x42E96Cu);
    ctx->pc = 0x42E968u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42E964u;
            // 0x42e968: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42E96Cu; }
        if (ctx->pc != 0x42E96Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42E96Cu; }
        if (ctx->pc != 0x42E96Cu) { return; }
    }
    ctx->pc = 0x42E96Cu;
label_42e96c:
    // 0x42e96c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x42e96cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_42e970:
    // 0x42e970: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x42e970u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_42e974:
    // 0x42e974: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x42e974u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_42e978:
    // 0x42e978: 0xafa2012c  sw          $v0, 0x12C($sp)
    ctx->pc = 0x42e978u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 2));
label_42e97c:
    // 0x42e97c: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x42e97cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_42e980:
    // 0x42e980: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x42e980u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
label_42e984:
    // 0x42e984: 0x8ea20074  lw          $v0, 0x74($s5)
    ctx->pc = 0x42e984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 116)));
label_42e988:
    // 0x42e988: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x42e988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_42e98c:
    // 0x42e98c: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x42e98cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_42e990:
    // 0x42e990: 0xc10bb28  jal         func_42ECA0
label_42e994:
    if (ctx->pc == 0x42E994u) {
        ctx->pc = 0x42E994u;
            // 0x42e994: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42E998u;
        goto label_42e998;
    }
    ctx->pc = 0x42E990u;
    SET_GPR_U32(ctx, 31, 0x42E998u);
    ctx->pc = 0x42E994u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42E990u;
            // 0x42e994: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x42ECA0u;
    if (runtime->hasFunction(0x42ECA0u)) {
        auto targetFn = runtime->lookupFunction(0x42ECA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42E998u; }
        if (ctx->pc != 0x42E998u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0042ECA0_0x42eca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42E998u; }
        if (ctx->pc != 0x42E998u) { return; }
    }
    ctx->pc = 0x42E998u;
label_42e998:
    // 0x42e998: 0x28430003  slti        $v1, $v0, 0x3
    ctx->pc = 0x42e998u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
label_42e99c:
    // 0x42e99c: 0x14600068  bnez        $v1, . + 4 + (0x68 << 2)
label_42e9a0:
    if (ctx->pc == 0x42E9A0u) {
        ctx->pc = 0x42E9A4u;
        goto label_42e9a4;
    }
    ctx->pc = 0x42E99Cu;
    {
        const bool branch_taken_0x42e99c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x42e99c) {
            ctx->pc = 0x42EB40u;
            goto label_42eb40;
        }
    }
    ctx->pc = 0x42E9A4u;
label_42e9a4:
    // 0x42e9a4: 0x926400fc  lbu         $a0, 0xFC($s3)
    ctx->pc = 0x42e9a4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 252)));
label_42e9a8:
    // 0x42e9a8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x42e9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_42e9ac:
    // 0x42e9ac: 0x14830064  bne         $a0, $v1, . + 4 + (0x64 << 2)
label_42e9b0:
    if (ctx->pc == 0x42E9B0u) {
        ctx->pc = 0x42E9B4u;
        goto label_42e9b4;
    }
    ctx->pc = 0x42E9ACu;
    {
        const bool branch_taken_0x42e9ac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x42e9ac) {
            ctx->pc = 0x42EB40u;
            goto label_42eb40;
        }
    }
    ctx->pc = 0x42E9B4u;
label_42e9b4:
    // 0x42e9b4: 0xc0d639c  jal         func_358E70
label_42e9b8:
    if (ctx->pc == 0x42E9B8u) {
        ctx->pc = 0x42E9B8u;
            // 0x42e9b8: 0x2664006c  addiu       $a0, $s3, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
        ctx->pc = 0x42E9BCu;
        goto label_42e9bc;
    }
    ctx->pc = 0x42E9B4u;
    SET_GPR_U32(ctx, 31, 0x42E9BCu);
    ctx->pc = 0x42E9B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42E9B4u;
            // 0x42e9b8: 0x2664006c  addiu       $a0, $s3, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x358E70u;
    if (runtime->hasFunction(0x358E70u)) {
        auto targetFn = runtime->lookupFunction(0x358E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42E9BCu; }
        if (ctx->pc != 0x42E9BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00358E70_0x358e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42E9BCu; }
        if (ctx->pc != 0x42E9BCu) { return; }
    }
    ctx->pc = 0x42E9BCu;
label_42e9bc:
    // 0x42e9bc: 0x10400058  beqz        $v0, . + 4 + (0x58 << 2)
label_42e9c0:
    if (ctx->pc == 0x42E9C0u) {
        ctx->pc = 0x42E9C4u;
        goto label_42e9c4;
    }
    ctx->pc = 0x42E9BCu;
    {
        const bool branch_taken_0x42e9bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x42e9bc) {
            ctx->pc = 0x42EB20u;
            goto label_42eb20;
        }
    }
    ctx->pc = 0x42E9C4u;
label_42e9c4:
    // 0x42e9c4: 0xc0d1c14  jal         func_347050
label_42e9c8:
    if (ctx->pc == 0x42E9C8u) {
        ctx->pc = 0x42E9C8u;
            // 0x42e9c8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42E9CCu;
        goto label_42e9cc;
    }
    ctx->pc = 0x42E9C4u;
    SET_GPR_U32(ctx, 31, 0x42E9CCu);
    ctx->pc = 0x42E9C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42E9C4u;
            // 0x42e9c8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347050u;
    if (runtime->hasFunction(0x347050u)) {
        auto targetFn = runtime->lookupFunction(0x347050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42E9CCu; }
        if (ctx->pc != 0x42E9CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347050_0x347050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42E9CCu; }
        if (ctx->pc != 0x42E9CCu) { return; }
    }
    ctx->pc = 0x42E9CCu;
label_42e9cc:
    // 0x42e9cc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x42e9ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_42e9d0:
    // 0x42e9d0: 0xc04f278  jal         func_13C9E0
label_42e9d4:
    if (ctx->pc == 0x42E9D4u) {
        ctx->pc = 0x42E9D4u;
            // 0x42e9d4: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x42E9D8u;
        goto label_42e9d8;
    }
    ctx->pc = 0x42E9D0u;
    SET_GPR_U32(ctx, 31, 0x42E9D8u);
    ctx->pc = 0x42E9D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42E9D0u;
            // 0x42e9d4: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42E9D8u; }
        if (ctx->pc != 0x42E9D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42E9D8u; }
        if (ctx->pc != 0x42E9D8u) { return; }
    }
    ctx->pc = 0x42E9D8u;
label_42e9d8:
    // 0x42e9d8: 0xc0d1c10  jal         func_347040
label_42e9dc:
    if (ctx->pc == 0x42E9DCu) {
        ctx->pc = 0x42E9DCu;
            // 0x42e9dc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42E9E0u;
        goto label_42e9e0;
    }
    ctx->pc = 0x42E9D8u;
    SET_GPR_U32(ctx, 31, 0x42E9E0u);
    ctx->pc = 0x42E9DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42E9D8u;
            // 0x42e9dc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347040u;
    if (runtime->hasFunction(0x347040u)) {
        auto targetFn = runtime->lookupFunction(0x347040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42E9E0u; }
        if (ctx->pc != 0x42E9E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347040_0x347040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42E9E0u; }
        if (ctx->pc != 0x42E9E0u) { return; }
    }
    ctx->pc = 0x42E9E0u;
label_42e9e0:
    // 0x42e9e0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x42e9e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_42e9e4:
    // 0x42e9e4: 0xc04ce80  jal         func_133A00
label_42e9e8:
    if (ctx->pc == 0x42E9E8u) {
        ctx->pc = 0x42E9E8u;
            // 0x42e9e8: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x42E9ECu;
        goto label_42e9ec;
    }
    ctx->pc = 0x42E9E4u;
    SET_GPR_U32(ctx, 31, 0x42E9ECu);
    ctx->pc = 0x42E9E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42E9E4u;
            // 0x42e9e8: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42E9ECu; }
        if (ctx->pc != 0x42E9ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42E9ECu; }
        if (ctx->pc != 0x42E9ECu) { return; }
    }
    ctx->pc = 0x42E9ECu;
label_42e9ec:
    // 0x42e9ec: 0x8e640180  lw          $a0, 0x180($s3)
    ctx->pc = 0x42e9ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 384)));
label_42e9f0:
    // 0x42e9f0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_42e9f4:
    if (ctx->pc == 0x42E9F4u) {
        ctx->pc = 0x42E9F8u;
        goto label_42e9f8;
    }
    ctx->pc = 0x42E9F0u;
    {
        const bool branch_taken_0x42e9f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x42e9f0) {
            ctx->pc = 0x42EA00u;
            goto label_42ea00;
        }
    }
    ctx->pc = 0x42E9F8u;
label_42e9f8:
    // 0x42e9f8: 0xc10bb24  jal         func_42EC90
label_42e9fc:
    if (ctx->pc == 0x42E9FCu) {
        ctx->pc = 0x42E9FCu;
            // 0x42e9fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42EA00u;
        goto label_42ea00;
    }
    ctx->pc = 0x42E9F8u;
    SET_GPR_U32(ctx, 31, 0x42EA00u);
    ctx->pc = 0x42E9FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42E9F8u;
            // 0x42e9fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x42EC90u;
    if (runtime->hasFunction(0x42EC90u)) {
        auto targetFn = runtime->lookupFunction(0x42EC90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42EA00u; }
        if (ctx->pc != 0x42EA00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0042EC90_0x42ec90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42EA00u; }
        if (ctx->pc != 0x42EA00u) { return; }
    }
    ctx->pc = 0x42EA00u;
label_42ea00:
    // 0x42ea00: 0xc0d4108  jal         func_350420
label_42ea04:
    if (ctx->pc == 0x42EA04u) {
        ctx->pc = 0x42EA08u;
        goto label_42ea08;
    }
    ctx->pc = 0x42EA00u;
    SET_GPR_U32(ctx, 31, 0x42EA08u);
    ctx->pc = 0x350420u;
    if (runtime->hasFunction(0x350420u)) {
        auto targetFn = runtime->lookupFunction(0x350420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42EA08u; }
        if (ctx->pc != 0x42EA08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350420_0x350420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42EA08u; }
        if (ctx->pc != 0x42EA08u) { return; }
    }
    ctx->pc = 0x42EA08u;
label_42ea08:
    // 0x42ea08: 0xc0b36b4  jal         func_2CDAD0
label_42ea0c:
    if (ctx->pc == 0x42EA0Cu) {
        ctx->pc = 0x42EA0Cu;
            // 0x42ea0c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42EA10u;
        goto label_42ea10;
    }
    ctx->pc = 0x42EA08u;
    SET_GPR_U32(ctx, 31, 0x42EA10u);
    ctx->pc = 0x42EA0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42EA08u;
            // 0x42ea0c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDAD0u;
    if (runtime->hasFunction(0x2CDAD0u)) {
        auto targetFn = runtime->lookupFunction(0x2CDAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42EA10u; }
        if (ctx->pc != 0x42EA10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CDAD0_0x2cdad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42EA10u; }
        if (ctx->pc != 0x42EA10u) { return; }
    }
    ctx->pc = 0x42EA10u;
label_42ea10:
    // 0x42ea10: 0xc0b9c64  jal         func_2E7190
label_42ea14:
    if (ctx->pc == 0x42EA14u) {
        ctx->pc = 0x42EA14u;
            // 0x42ea14: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42EA18u;
        goto label_42ea18;
    }
    ctx->pc = 0x42EA10u;
    SET_GPR_U32(ctx, 31, 0x42EA18u);
    ctx->pc = 0x42EA14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42EA10u;
            // 0x42ea14: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E7190u;
    if (runtime->hasFunction(0x2E7190u)) {
        auto targetFn = runtime->lookupFunction(0x2E7190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42EA18u; }
        if (ctx->pc != 0x42EA18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E7190_0x2e7190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42EA18u; }
        if (ctx->pc != 0x42EA18u) { return; }
    }
    ctx->pc = 0x42EA18u;
label_42ea18:
    // 0x42ea18: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x42ea18u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_42ea1c:
    // 0x42ea1c: 0xc0d4104  jal         func_350410
label_42ea20:
    if (ctx->pc == 0x42EA20u) {
        ctx->pc = 0x42EA20u;
            // 0x42ea20: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42EA24u;
        goto label_42ea24;
    }
    ctx->pc = 0x42EA1Cu;
    SET_GPR_U32(ctx, 31, 0x42EA24u);
    ctx->pc = 0x42EA20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42EA1Cu;
            // 0x42ea20: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x350410u;
    if (runtime->hasFunction(0x350410u)) {
        auto targetFn = runtime->lookupFunction(0x350410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42EA24u; }
        if (ctx->pc != 0x42EA24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350410_0x350410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42EA24u; }
        if (ctx->pc != 0x42EA24u) { return; }
    }
    ctx->pc = 0x42EA24u;
label_42ea24:
    // 0x42ea24: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x42ea24u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_42ea28:
    // 0x42ea28: 0xc10bb20  jal         func_42EC80
label_42ea2c:
    if (ctx->pc == 0x42EA2Cu) {
        ctx->pc = 0x42EA2Cu;
            // 0x42ea2c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42EA30u;
        goto label_42ea30;
    }
    ctx->pc = 0x42EA28u;
    SET_GPR_U32(ctx, 31, 0x42EA30u);
    ctx->pc = 0x42EA2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42EA28u;
            // 0x42ea2c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x42EC80u;
    if (runtime->hasFunction(0x42EC80u)) {
        auto targetFn = runtime->lookupFunction(0x42EC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42EA30u; }
        if (ctx->pc != 0x42EA30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0042EC80_0x42ec80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42EA30u; }
        if (ctx->pc != 0x42EA30u) { return; }
    }
    ctx->pc = 0x42EA30u;
label_42ea30:
    // 0x42ea30: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x42ea30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_42ea34:
    // 0x42ea34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x42ea34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_42ea38:
    // 0x42ea38: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x42ea38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_42ea3c:
    // 0x42ea3c: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x42ea3cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_42ea40:
    // 0x42ea40: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x42ea40u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_42ea44:
    // 0x42ea44: 0x27a700e0  addiu       $a3, $sp, 0xE0
    ctx->pc = 0x42ea44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_42ea48:
    // 0x42ea48: 0xc0d40ac  jal         func_3502B0
label_42ea4c:
    if (ctx->pc == 0x42EA4Cu) {
        ctx->pc = 0x42EA4Cu;
            // 0x42ea4c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42EA50u;
        goto label_42ea50;
    }
    ctx->pc = 0x42EA48u;
    SET_GPR_U32(ctx, 31, 0x42EA50u);
    ctx->pc = 0x42EA4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42EA48u;
            // 0x42ea4c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3502B0u;
    if (runtime->hasFunction(0x3502B0u)) {
        auto targetFn = runtime->lookupFunction(0x3502B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42EA50u; }
        if (ctx->pc != 0x42EA50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003502B0_0x3502b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42EA50u; }
        if (ctx->pc != 0x42EA50u) { return; }
    }
    ctx->pc = 0x42EA50u;
label_42ea50:
    // 0x42ea50: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x42ea50u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_42ea54:
    // 0x42ea54: 0x1020003a  beqz        $at, . + 4 + (0x3A << 2)
label_42ea58:
    if (ctx->pc == 0x42EA58u) {
        ctx->pc = 0x42EA58u;
            // 0x42ea58: 0xae620044  sw          $v0, 0x44($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 68), GPR_U32(ctx, 2));
        ctx->pc = 0x42EA5Cu;
        goto label_42ea5c;
    }
    ctx->pc = 0x42EA54u;
    {
        const bool branch_taken_0x42ea54 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x42EA58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42EA54u;
            // 0x42ea58: 0xae620044  sw          $v0, 0x44($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42ea54) {
            ctx->pc = 0x42EB40u;
            goto label_42eb40;
        }
    }
    ctx->pc = 0x42EA5Cu;
label_42ea5c:
    // 0x42ea5c: 0x8e640180  lw          $a0, 0x180($s3)
    ctx->pc = 0x42ea5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 384)));
label_42ea60:
    // 0x42ea60: 0x10800017  beqz        $a0, . + 4 + (0x17 << 2)
label_42ea64:
    if (ctx->pc == 0x42EA64u) {
        ctx->pc = 0x42EA68u;
        goto label_42ea68;
    }
    ctx->pc = 0x42EA60u;
    {
        const bool branch_taken_0x42ea60 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x42ea60) {
            ctx->pc = 0x42EAC0u;
            goto label_42eac0;
        }
    }
    ctx->pc = 0x42EA68u;
label_42ea68:
    // 0x42ea68: 0xc10bb24  jal         func_42EC90
label_42ea6c:
    if (ctx->pc == 0x42EA6Cu) {
        ctx->pc = 0x42EA6Cu;
            // 0x42ea6c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x42EA70u;
        goto label_42ea70;
    }
    ctx->pc = 0x42EA68u;
    SET_GPR_U32(ctx, 31, 0x42EA70u);
    ctx->pc = 0x42EA6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42EA68u;
            // 0x42ea6c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x42EC90u;
    if (runtime->hasFunction(0x42EC90u)) {
        auto targetFn = runtime->lookupFunction(0x42EC90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42EA70u; }
        if (ctx->pc != 0x42EA70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0042EC90_0x42ec90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42EA70u; }
        if (ctx->pc != 0x42EA70u) { return; }
    }
    ctx->pc = 0x42EA70u;
label_42ea70:
    // 0x42ea70: 0x26640110  addiu       $a0, $s3, 0x110
    ctx->pc = 0x42ea70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 272));
label_42ea74:
    // 0x42ea74: 0xc04f278  jal         func_13C9E0
label_42ea78:
    if (ctx->pc == 0x42EA78u) {
        ctx->pc = 0x42EA78u;
            // 0x42ea78: 0x26650170  addiu       $a1, $s3, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 368));
        ctx->pc = 0x42EA7Cu;
        goto label_42ea7c;
    }
    ctx->pc = 0x42EA74u;
    SET_GPR_U32(ctx, 31, 0x42EA7Cu);
    ctx->pc = 0x42EA78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42EA74u;
            // 0x42ea78: 0x26650170  addiu       $a1, $s3, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42EA7Cu; }
        if (ctx->pc != 0x42EA7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42EA7Cu; }
        if (ctx->pc != 0x42EA7Cu) { return; }
    }
    ctx->pc = 0x42EA7Cu;
label_42ea7c:
    // 0x42ea7c: 0x26640110  addiu       $a0, $s3, 0x110
    ctx->pc = 0x42ea7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 272));
label_42ea80:
    // 0x42ea80: 0x2406eaab  addiu       $a2, $zero, -0x1555
    ctx->pc = 0x42ea80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294961835));
label_42ea84:
    // 0x42ea84: 0xc04cdb0  jal         func_1336C0
label_42ea88:
    if (ctx->pc == 0x42EA88u) {
        ctx->pc = 0x42EA88u;
            // 0x42ea88: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42EA8Cu;
        goto label_42ea8c;
    }
    ctx->pc = 0x42EA84u;
    SET_GPR_U32(ctx, 31, 0x42EA8Cu);
    ctx->pc = 0x42EA88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42EA84u;
            // 0x42ea88: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1336C0u;
    if (runtime->hasFunction(0x1336C0u)) {
        auto targetFn = runtime->lookupFunction(0x1336C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42EA8Cu; }
        if (ctx->pc != 0x42EA8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001336C0_0x1336c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42EA8Cu; }
        if (ctx->pc != 0x42EA8Cu) { return; }
    }
    ctx->pc = 0x42EA8Cu;
label_42ea8c:
    // 0x42ea8c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x42ea8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_42ea90:
    // 0x42ea90: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x42ea90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_42ea94:
    // 0x42ea94: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x42ea94u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_42ea98:
    // 0x42ea98: 0x26640110  addiu       $a0, $s3, 0x110
    ctx->pc = 0x42ea98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 272));
label_42ea9c:
    // 0x42ea9c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x42ea9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_42eaa0:
    // 0x42eaa0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x42eaa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_42eaa4:
    // 0x42eaa4: 0xc04ce50  jal         func_133940
label_42eaa8:
    if (ctx->pc == 0x42EAA8u) {
        ctx->pc = 0x42EAA8u;
            // 0x42eaa8: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x42EAACu;
        goto label_42eaac;
    }
    ctx->pc = 0x42EAA4u;
    SET_GPR_U32(ctx, 31, 0x42EAACu);
    ctx->pc = 0x42EAA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42EAA4u;
            // 0x42eaa8: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133940u;
    if (runtime->hasFunction(0x133940u)) {
        auto targetFn = runtime->lookupFunction(0x133940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42EAACu; }
        if (ctx->pc != 0x42EAACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133940_0x133940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42EAACu; }
        if (ctx->pc != 0x42EAACu) { return; }
    }
    ctx->pc = 0x42EAACu;
label_42eaac:
    // 0x42eaac: 0xc0d1c10  jal         func_347040
label_42eab0:
    if (ctx->pc == 0x42EAB0u) {
        ctx->pc = 0x42EAB0u;
            // 0x42eab0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42EAB4u;
        goto label_42eab4;
    }
    ctx->pc = 0x42EAACu;
    SET_GPR_U32(ctx, 31, 0x42EAB4u);
    ctx->pc = 0x42EAB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42EAACu;
            // 0x42eab0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347040u;
    if (runtime->hasFunction(0x347040u)) {
        auto targetFn = runtime->lookupFunction(0x347040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42EAB4u; }
        if (ctx->pc != 0x42EAB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347040_0x347040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42EAB4u; }
        if (ctx->pc != 0x42EAB4u) { return; }
    }
    ctx->pc = 0x42EAB4u;
label_42eab4:
    // 0x42eab4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x42eab4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_42eab8:
    // 0x42eab8: 0xc04ce80  jal         func_133A00
label_42eabc:
    if (ctx->pc == 0x42EABCu) {
        ctx->pc = 0x42EABCu;
            // 0x42eabc: 0x26640110  addiu       $a0, $s3, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 272));
        ctx->pc = 0x42EAC0u;
        goto label_42eac0;
    }
    ctx->pc = 0x42EAB8u;
    SET_GPR_U32(ctx, 31, 0x42EAC0u);
    ctx->pc = 0x42EABCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42EAB8u;
            // 0x42eabc: 0x26640110  addiu       $a0, $s3, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42EAC0u; }
        if (ctx->pc != 0x42EAC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42EAC0u; }
        if (ctx->pc != 0x42EAC0u) { return; }
    }
    ctx->pc = 0x42EAC0u;
label_42eac0:
    // 0x42eac0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x42eac0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_42eac4:
    // 0x42eac4: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x42eac4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_42eac8:
    // 0x42eac8: 0xc10baf8  jal         func_42EBE0
label_42eacc:
    if (ctx->pc == 0x42EACCu) {
        ctx->pc = 0x42EACCu;
            // 0x42eacc: 0x27a6012c  addiu       $a2, $sp, 0x12C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 300));
        ctx->pc = 0x42EAD0u;
        goto label_42ead0;
    }
    ctx->pc = 0x42EAC8u;
    SET_GPR_U32(ctx, 31, 0x42EAD0u);
    ctx->pc = 0x42EACCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42EAC8u;
            // 0x42eacc: 0x27a6012c  addiu       $a2, $sp, 0x12C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 300));
        ctx->in_delay_slot = false;
    ctx->pc = 0x42EBE0u;
    if (runtime->hasFunction(0x42EBE0u)) {
        auto targetFn = runtime->lookupFunction(0x42EBE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42EAD0u; }
        if (ctx->pc != 0x42EAD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0042EBE0_0x42ebe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42EAD0u; }
        if (ctx->pc != 0x42EAD0u) { return; }
    }
    ctx->pc = 0x42EAD0u;
label_42ead0:
    // 0x42ead0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x42ead0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_42ead4:
    // 0x42ead4: 0x8fa4012c  lw          $a0, 0x12C($sp)
    ctx->pc = 0x42ead4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
label_42ead8:
    // 0x42ead8: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x42ead8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_42eadc:
    // 0x42eadc: 0xc04e4a4  jal         func_139290
label_42eae0:
    if (ctx->pc == 0x42EAE0u) {
        ctx->pc = 0x42EAE0u;
            // 0x42eae0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x42EAE4u;
        goto label_42eae4;
    }
    ctx->pc = 0x42EADCu;
    SET_GPR_U32(ctx, 31, 0x42EAE4u);
    ctx->pc = 0x42EAE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42EADCu;
            // 0x42eae0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42EAE4u; }
        if (ctx->pc != 0x42EAE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42EAE4u; }
        if (ctx->pc != 0x42EAE4u) { return; }
    }
    ctx->pc = 0x42EAE4u;
label_42eae4:
    // 0x42eae4: 0x8fa2012c  lw          $v0, 0x12C($sp)
    ctx->pc = 0x42eae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
label_42eae8:
    // 0x42eae8: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x42eae8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_42eaec:
    // 0x42eaec: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x42eaecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_42eaf0:
    // 0x42eaf0: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x42eaf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_42eaf4:
    // 0x42eaf4: 0xc04cd60  jal         func_133580
label_42eaf8:
    if (ctx->pc == 0x42EAF8u) {
        ctx->pc = 0x42EAF8u;
            // 0x42eaf8: 0x27a600e0  addiu       $a2, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x42EAFCu;
        goto label_42eafc;
    }
    ctx->pc = 0x42EAF4u;
    SET_GPR_U32(ctx, 31, 0x42EAFCu);
    ctx->pc = 0x42EAF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42EAF4u;
            // 0x42eaf8: 0x27a600e0  addiu       $a2, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42EAFCu; }
        if (ctx->pc != 0x42EAFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42EAFCu; }
        if (ctx->pc != 0x42EAFCu) { return; }
    }
    ctx->pc = 0x42EAFCu;
label_42eafc:
    // 0x42eafc: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x42eafcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_42eb00:
    // 0x42eb00: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x42eb00u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_42eb04:
    // 0x42eb04: 0x320f809  jalr        $t9
label_42eb08:
    if (ctx->pc == 0x42EB08u) {
        ctx->pc = 0x42EB08u;
            // 0x42eb08: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42EB0Cu;
        goto label_42eb0c;
    }
    ctx->pc = 0x42EB04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x42EB0Cu);
        ctx->pc = 0x42EB08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42EB04u;
            // 0x42eb08: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x42EB0Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x42EB0Cu; }
            if (ctx->pc != 0x42EB0Cu) { return; }
        }
        }
    }
    ctx->pc = 0x42EB0Cu;
label_42eb0c:
    // 0x42eb0c: 0x8fa4012c  lw          $a0, 0x12C($sp)
    ctx->pc = 0x42eb0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
label_42eb10:
    // 0x42eb10: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x42eb10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_42eb14:
    // 0x42eb14: 0x8fa600d0  lw          $a2, 0xD0($sp)
    ctx->pc = 0x42eb14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_42eb18:
    // 0x42eb18: 0xc054fd4  jal         func_153F50
label_42eb1c:
    if (ctx->pc == 0x42EB1Cu) {
        ctx->pc = 0x42EB1Cu;
            // 0x42eb1c: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42EB20u;
        goto label_42eb20;
    }
    ctx->pc = 0x42EB18u;
    SET_GPR_U32(ctx, 31, 0x42EB20u);
    ctx->pc = 0x42EB1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42EB18u;
            // 0x42eb1c: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153F50u;
    if (runtime->hasFunction(0x153F50u)) {
        auto targetFn = runtime->lookupFunction(0x153F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42EB20u; }
        if (ctx->pc != 0x42EB20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00153F50_0x153f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42EB20u; }
        if (ctx->pc != 0x42EB20u) { return; }
    }
    ctx->pc = 0x42EB20u;
label_42eb20:
    // 0x42eb20: 0xc10bb20  jal         func_42EC80
label_42eb24:
    if (ctx->pc == 0x42EB24u) {
        ctx->pc = 0x42EB24u;
            // 0x42eb24: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42EB28u;
        goto label_42eb28;
    }
    ctx->pc = 0x42EB20u;
    SET_GPR_U32(ctx, 31, 0x42EB28u);
    ctx->pc = 0x42EB24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42EB20u;
            // 0x42eb24: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x42EC80u;
    if (runtime->hasFunction(0x42EC80u)) {
        auto targetFn = runtime->lookupFunction(0x42EC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42EB28u; }
        if (ctx->pc != 0x42EB28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0042EC80_0x42ec80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42EB28u; }
        if (ctx->pc != 0x42EB28u) { return; }
    }
    ctx->pc = 0x42EB28u;
label_42eb28:
    // 0x42eb28: 0x8e64009c  lw          $a0, 0x9C($s3)
    ctx->pc = 0x42eb28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 156)));
label_42eb2c:
    // 0x42eb2c: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x42eb2cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_42eb30:
    // 0x42eb30: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x42eb30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_42eb34:
    // 0x42eb34: 0xc0e31f8  jal         func_38C7E0
label_42eb38:
    if (ctx->pc == 0x42EB38u) {
        ctx->pc = 0x42EB38u;
            // 0x42eb38: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42EB3Cu;
        goto label_42eb3c;
    }
    ctx->pc = 0x42EB34u;
    SET_GPR_U32(ctx, 31, 0x42EB3Cu);
    ctx->pc = 0x42EB38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42EB34u;
            // 0x42eb38: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38C7E0u;
    if (runtime->hasFunction(0x38C7E0u)) {
        auto targetFn = runtime->lookupFunction(0x38C7E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42EB3Cu; }
        if (ctx->pc != 0x42EB3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038C7E0_0x38c7e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42EB3Cu; }
        if (ctx->pc != 0x42EB3Cu) { return; }
    }
    ctx->pc = 0x42EB3Cu;
label_42eb3c:
    // 0x42eb3c: 0x0  nop
    ctx->pc = 0x42eb3cu;
    // NOP
label_42eb40:
    // 0x42eb40: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x42eb40u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_42eb44:
    // 0x42eb44: 0x29e182b  sltu        $v1, $s4, $fp
    ctx->pc = 0x42eb44u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
label_42eb48:
    // 0x42eb48: 0x1460ff8a  bnez        $v1, . + 4 + (-0x76 << 2)
label_42eb4c:
    if (ctx->pc == 0x42EB4Cu) {
        ctx->pc = 0x42EB4Cu;
            // 0x42eb4c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x42EB50u;
        goto label_42eb50;
    }
    ctx->pc = 0x42EB48u;
    {
        const bool branch_taken_0x42eb48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x42EB4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42EB48u;
            // 0x42eb4c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42eb48) {
            ctx->pc = 0x42E974u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_42e974;
        }
    }
    ctx->pc = 0x42EB50u;
label_42eb50:
    // 0x42eb50: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x42eb50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_42eb54:
    // 0x42eb54: 0x8c69e3c0  lw          $t1, -0x1C40($v1)
    ctx->pc = 0x42eb54u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_42eb58:
    // 0x42eb58: 0x19200009  blez        $t1, . + 4 + (0x9 << 2)
label_42eb5c:
    if (ctx->pc == 0x42EB5Cu) {
        ctx->pc = 0x42EB5Cu;
            // 0x42eb5c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x42EB60u;
        goto label_42eb60;
    }
    ctx->pc = 0x42EB58u;
    {
        const bool branch_taken_0x42eb58 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x42EB5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42EB58u;
            // 0x42eb5c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42eb58) {
            ctx->pc = 0x42EB80u;
            goto label_42eb80;
        }
    }
    ctx->pc = 0x42EB60u;
label_42eb60:
    // 0x42eb60: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x42eb60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_42eb64:
    // 0x42eb64: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x42eb64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_42eb68:
    // 0x42eb68: 0x8c65e3b0  lw          $a1, -0x1C50($v1)
    ctx->pc = 0x42eb68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960048)));
label_42eb6c:
    // 0x42eb6c: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x42eb6cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_42eb70:
    // 0x42eb70: 0x8c46e3b8  lw          $a2, -0x1C48($v0)
    ctx->pc = 0x42eb70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960056)));
label_42eb74:
    // 0x42eb74: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x42eb74u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_42eb78:
    // 0x42eb78: 0xc055ea8  jal         func_157AA0
label_42eb7c:
    if (ctx->pc == 0x42EB7Cu) {
        ctx->pc = 0x42EB7Cu;
            // 0x42eb7c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42EB80u;
        goto label_42eb80;
    }
    ctx->pc = 0x42EB78u;
    SET_GPR_U32(ctx, 31, 0x42EB80u);
    ctx->pc = 0x42EB7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42EB78u;
            // 0x42eb7c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x157AA0u;
    if (runtime->hasFunction(0x157AA0u)) {
        auto targetFn = runtime->lookupFunction(0x157AA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42EB80u; }
        if (ctx->pc != 0x42EB80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00157AA0_0x157aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42EB80u; }
        if (ctx->pc != 0x42EB80u) { return; }
    }
    ctx->pc = 0x42EB80u;
label_42eb80:
    // 0x42eb80: 0x92a30090  lbu         $v1, 0x90($s5)
    ctx->pc = 0x42eb80u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 144)));
label_42eb84:
    // 0x42eb84: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_42eb88:
    if (ctx->pc == 0x42EB88u) {
        ctx->pc = 0x42EB8Cu;
        goto label_42eb8c;
    }
    ctx->pc = 0x42EB84u;
    {
        const bool branch_taken_0x42eb84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x42eb84) {
            ctx->pc = 0x42EBA4u;
            goto label_42eba4;
        }
    }
    ctx->pc = 0x42EB8Cu;
label_42eb8c:
    // 0x42eb8c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x42eb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_42eb90:
    // 0x42eb90: 0x8c44e3e8  lw          $a0, -0x1C18($v0)
    ctx->pc = 0x42eb90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960104)));
label_42eb94:
    // 0x42eb94: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x42eb94u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_42eb98:
    // 0x42eb98: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x42eb98u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_42eb9c:
    // 0x42eb9c: 0x320f809  jalr        $t9
label_42eba0:
    if (ctx->pc == 0x42EBA0u) {
        ctx->pc = 0x42EBA4u;
        goto label_42eba4;
    }
    ctx->pc = 0x42EB9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x42EBA4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x42EBA4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x42EBA4u; }
            if (ctx->pc != 0x42EBA4u) { return; }
        }
        }
    }
    ctx->pc = 0x42EBA4u;
label_42eba4:
    // 0x42eba4: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x42eba4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_42eba8:
    // 0x42eba8: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x42eba8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_42ebac:
    // 0x42ebac: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x42ebacu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_42ebb0:
    // 0x42ebb0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x42ebb0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_42ebb4:
    // 0x42ebb4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x42ebb4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_42ebb8:
    // 0x42ebb8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x42ebb8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_42ebbc:
    // 0x42ebbc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x42ebbcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_42ebc0:
    // 0x42ebc0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x42ebc0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_42ebc4:
    // 0x42ebc4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x42ebc4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_42ebc8:
    // 0x42ebc8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x42ebc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_42ebcc:
    // 0x42ebcc: 0x3e00008  jr          $ra
label_42ebd0:
    if (ctx->pc == 0x42EBD0u) {
        ctx->pc = 0x42EBD0u;
            // 0x42ebd0: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->pc = 0x42EBD4u;
        goto label_42ebd4;
    }
    ctx->pc = 0x42EBCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42EBD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42EBCCu;
            // 0x42ebd0: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x42EBD4u;
label_42ebd4:
    // 0x42ebd4: 0x0  nop
    ctx->pc = 0x42ebd4u;
    // NOP
label_42ebd8:
    // 0x42ebd8: 0x0  nop
    ctx->pc = 0x42ebd8u;
    // NOP
label_42ebdc:
    // 0x42ebdc: 0x0  nop
    ctx->pc = 0x42ebdcu;
    // NOP
}
