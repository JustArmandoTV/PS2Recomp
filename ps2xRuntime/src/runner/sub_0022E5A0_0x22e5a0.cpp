#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0022E5A0
// Address: 0x22e5a0 - 0x22f2f0
void sub_0022E5A0_0x22e5a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022E5A0_0x22e5a0");
#endif

    switch (ctx->pc) {
        case 0x22e5a0u: goto label_22e5a0;
        case 0x22e5a4u: goto label_22e5a4;
        case 0x22e5a8u: goto label_22e5a8;
        case 0x22e5acu: goto label_22e5ac;
        case 0x22e5b0u: goto label_22e5b0;
        case 0x22e5b4u: goto label_22e5b4;
        case 0x22e5b8u: goto label_22e5b8;
        case 0x22e5bcu: goto label_22e5bc;
        case 0x22e5c0u: goto label_22e5c0;
        case 0x22e5c4u: goto label_22e5c4;
        case 0x22e5c8u: goto label_22e5c8;
        case 0x22e5ccu: goto label_22e5cc;
        case 0x22e5d0u: goto label_22e5d0;
        case 0x22e5d4u: goto label_22e5d4;
        case 0x22e5d8u: goto label_22e5d8;
        case 0x22e5dcu: goto label_22e5dc;
        case 0x22e5e0u: goto label_22e5e0;
        case 0x22e5e4u: goto label_22e5e4;
        case 0x22e5e8u: goto label_22e5e8;
        case 0x22e5ecu: goto label_22e5ec;
        case 0x22e5f0u: goto label_22e5f0;
        case 0x22e5f4u: goto label_22e5f4;
        case 0x22e5f8u: goto label_22e5f8;
        case 0x22e5fcu: goto label_22e5fc;
        case 0x22e600u: goto label_22e600;
        case 0x22e604u: goto label_22e604;
        case 0x22e608u: goto label_22e608;
        case 0x22e60cu: goto label_22e60c;
        case 0x22e610u: goto label_22e610;
        case 0x22e614u: goto label_22e614;
        case 0x22e618u: goto label_22e618;
        case 0x22e61cu: goto label_22e61c;
        case 0x22e620u: goto label_22e620;
        case 0x22e624u: goto label_22e624;
        case 0x22e628u: goto label_22e628;
        case 0x22e62cu: goto label_22e62c;
        case 0x22e630u: goto label_22e630;
        case 0x22e634u: goto label_22e634;
        case 0x22e638u: goto label_22e638;
        case 0x22e63cu: goto label_22e63c;
        case 0x22e640u: goto label_22e640;
        case 0x22e644u: goto label_22e644;
        case 0x22e648u: goto label_22e648;
        case 0x22e64cu: goto label_22e64c;
        case 0x22e650u: goto label_22e650;
        case 0x22e654u: goto label_22e654;
        case 0x22e658u: goto label_22e658;
        case 0x22e65cu: goto label_22e65c;
        case 0x22e660u: goto label_22e660;
        case 0x22e664u: goto label_22e664;
        case 0x22e668u: goto label_22e668;
        case 0x22e66cu: goto label_22e66c;
        case 0x22e670u: goto label_22e670;
        case 0x22e674u: goto label_22e674;
        case 0x22e678u: goto label_22e678;
        case 0x22e67cu: goto label_22e67c;
        case 0x22e680u: goto label_22e680;
        case 0x22e684u: goto label_22e684;
        case 0x22e688u: goto label_22e688;
        case 0x22e68cu: goto label_22e68c;
        case 0x22e690u: goto label_22e690;
        case 0x22e694u: goto label_22e694;
        case 0x22e698u: goto label_22e698;
        case 0x22e69cu: goto label_22e69c;
        case 0x22e6a0u: goto label_22e6a0;
        case 0x22e6a4u: goto label_22e6a4;
        case 0x22e6a8u: goto label_22e6a8;
        case 0x22e6acu: goto label_22e6ac;
        case 0x22e6b0u: goto label_22e6b0;
        case 0x22e6b4u: goto label_22e6b4;
        case 0x22e6b8u: goto label_22e6b8;
        case 0x22e6bcu: goto label_22e6bc;
        case 0x22e6c0u: goto label_22e6c0;
        case 0x22e6c4u: goto label_22e6c4;
        case 0x22e6c8u: goto label_22e6c8;
        case 0x22e6ccu: goto label_22e6cc;
        case 0x22e6d0u: goto label_22e6d0;
        case 0x22e6d4u: goto label_22e6d4;
        case 0x22e6d8u: goto label_22e6d8;
        case 0x22e6dcu: goto label_22e6dc;
        case 0x22e6e0u: goto label_22e6e0;
        case 0x22e6e4u: goto label_22e6e4;
        case 0x22e6e8u: goto label_22e6e8;
        case 0x22e6ecu: goto label_22e6ec;
        case 0x22e6f0u: goto label_22e6f0;
        case 0x22e6f4u: goto label_22e6f4;
        case 0x22e6f8u: goto label_22e6f8;
        case 0x22e6fcu: goto label_22e6fc;
        case 0x22e700u: goto label_22e700;
        case 0x22e704u: goto label_22e704;
        case 0x22e708u: goto label_22e708;
        case 0x22e70cu: goto label_22e70c;
        case 0x22e710u: goto label_22e710;
        case 0x22e714u: goto label_22e714;
        case 0x22e718u: goto label_22e718;
        case 0x22e71cu: goto label_22e71c;
        case 0x22e720u: goto label_22e720;
        case 0x22e724u: goto label_22e724;
        case 0x22e728u: goto label_22e728;
        case 0x22e72cu: goto label_22e72c;
        case 0x22e730u: goto label_22e730;
        case 0x22e734u: goto label_22e734;
        case 0x22e738u: goto label_22e738;
        case 0x22e73cu: goto label_22e73c;
        case 0x22e740u: goto label_22e740;
        case 0x22e744u: goto label_22e744;
        case 0x22e748u: goto label_22e748;
        case 0x22e74cu: goto label_22e74c;
        case 0x22e750u: goto label_22e750;
        case 0x22e754u: goto label_22e754;
        case 0x22e758u: goto label_22e758;
        case 0x22e75cu: goto label_22e75c;
        case 0x22e760u: goto label_22e760;
        case 0x22e764u: goto label_22e764;
        case 0x22e768u: goto label_22e768;
        case 0x22e76cu: goto label_22e76c;
        case 0x22e770u: goto label_22e770;
        case 0x22e774u: goto label_22e774;
        case 0x22e778u: goto label_22e778;
        case 0x22e77cu: goto label_22e77c;
        case 0x22e780u: goto label_22e780;
        case 0x22e784u: goto label_22e784;
        case 0x22e788u: goto label_22e788;
        case 0x22e78cu: goto label_22e78c;
        case 0x22e790u: goto label_22e790;
        case 0x22e794u: goto label_22e794;
        case 0x22e798u: goto label_22e798;
        case 0x22e79cu: goto label_22e79c;
        case 0x22e7a0u: goto label_22e7a0;
        case 0x22e7a4u: goto label_22e7a4;
        case 0x22e7a8u: goto label_22e7a8;
        case 0x22e7acu: goto label_22e7ac;
        case 0x22e7b0u: goto label_22e7b0;
        case 0x22e7b4u: goto label_22e7b4;
        case 0x22e7b8u: goto label_22e7b8;
        case 0x22e7bcu: goto label_22e7bc;
        case 0x22e7c0u: goto label_22e7c0;
        case 0x22e7c4u: goto label_22e7c4;
        case 0x22e7c8u: goto label_22e7c8;
        case 0x22e7ccu: goto label_22e7cc;
        case 0x22e7d0u: goto label_22e7d0;
        case 0x22e7d4u: goto label_22e7d4;
        case 0x22e7d8u: goto label_22e7d8;
        case 0x22e7dcu: goto label_22e7dc;
        case 0x22e7e0u: goto label_22e7e0;
        case 0x22e7e4u: goto label_22e7e4;
        case 0x22e7e8u: goto label_22e7e8;
        case 0x22e7ecu: goto label_22e7ec;
        case 0x22e7f0u: goto label_22e7f0;
        case 0x22e7f4u: goto label_22e7f4;
        case 0x22e7f8u: goto label_22e7f8;
        case 0x22e7fcu: goto label_22e7fc;
        case 0x22e800u: goto label_22e800;
        case 0x22e804u: goto label_22e804;
        case 0x22e808u: goto label_22e808;
        case 0x22e80cu: goto label_22e80c;
        case 0x22e810u: goto label_22e810;
        case 0x22e814u: goto label_22e814;
        case 0x22e818u: goto label_22e818;
        case 0x22e81cu: goto label_22e81c;
        case 0x22e820u: goto label_22e820;
        case 0x22e824u: goto label_22e824;
        case 0x22e828u: goto label_22e828;
        case 0x22e82cu: goto label_22e82c;
        case 0x22e830u: goto label_22e830;
        case 0x22e834u: goto label_22e834;
        case 0x22e838u: goto label_22e838;
        case 0x22e83cu: goto label_22e83c;
        case 0x22e840u: goto label_22e840;
        case 0x22e844u: goto label_22e844;
        case 0x22e848u: goto label_22e848;
        case 0x22e84cu: goto label_22e84c;
        case 0x22e850u: goto label_22e850;
        case 0x22e854u: goto label_22e854;
        case 0x22e858u: goto label_22e858;
        case 0x22e85cu: goto label_22e85c;
        case 0x22e860u: goto label_22e860;
        case 0x22e864u: goto label_22e864;
        case 0x22e868u: goto label_22e868;
        case 0x22e86cu: goto label_22e86c;
        case 0x22e870u: goto label_22e870;
        case 0x22e874u: goto label_22e874;
        case 0x22e878u: goto label_22e878;
        case 0x22e87cu: goto label_22e87c;
        case 0x22e880u: goto label_22e880;
        case 0x22e884u: goto label_22e884;
        case 0x22e888u: goto label_22e888;
        case 0x22e88cu: goto label_22e88c;
        case 0x22e890u: goto label_22e890;
        case 0x22e894u: goto label_22e894;
        case 0x22e898u: goto label_22e898;
        case 0x22e89cu: goto label_22e89c;
        case 0x22e8a0u: goto label_22e8a0;
        case 0x22e8a4u: goto label_22e8a4;
        case 0x22e8a8u: goto label_22e8a8;
        case 0x22e8acu: goto label_22e8ac;
        case 0x22e8b0u: goto label_22e8b0;
        case 0x22e8b4u: goto label_22e8b4;
        case 0x22e8b8u: goto label_22e8b8;
        case 0x22e8bcu: goto label_22e8bc;
        case 0x22e8c0u: goto label_22e8c0;
        case 0x22e8c4u: goto label_22e8c4;
        case 0x22e8c8u: goto label_22e8c8;
        case 0x22e8ccu: goto label_22e8cc;
        case 0x22e8d0u: goto label_22e8d0;
        case 0x22e8d4u: goto label_22e8d4;
        case 0x22e8d8u: goto label_22e8d8;
        case 0x22e8dcu: goto label_22e8dc;
        case 0x22e8e0u: goto label_22e8e0;
        case 0x22e8e4u: goto label_22e8e4;
        case 0x22e8e8u: goto label_22e8e8;
        case 0x22e8ecu: goto label_22e8ec;
        case 0x22e8f0u: goto label_22e8f0;
        case 0x22e8f4u: goto label_22e8f4;
        case 0x22e8f8u: goto label_22e8f8;
        case 0x22e8fcu: goto label_22e8fc;
        case 0x22e900u: goto label_22e900;
        case 0x22e904u: goto label_22e904;
        case 0x22e908u: goto label_22e908;
        case 0x22e90cu: goto label_22e90c;
        case 0x22e910u: goto label_22e910;
        case 0x22e914u: goto label_22e914;
        case 0x22e918u: goto label_22e918;
        case 0x22e91cu: goto label_22e91c;
        case 0x22e920u: goto label_22e920;
        case 0x22e924u: goto label_22e924;
        case 0x22e928u: goto label_22e928;
        case 0x22e92cu: goto label_22e92c;
        case 0x22e930u: goto label_22e930;
        case 0x22e934u: goto label_22e934;
        case 0x22e938u: goto label_22e938;
        case 0x22e93cu: goto label_22e93c;
        case 0x22e940u: goto label_22e940;
        case 0x22e944u: goto label_22e944;
        case 0x22e948u: goto label_22e948;
        case 0x22e94cu: goto label_22e94c;
        case 0x22e950u: goto label_22e950;
        case 0x22e954u: goto label_22e954;
        case 0x22e958u: goto label_22e958;
        case 0x22e95cu: goto label_22e95c;
        case 0x22e960u: goto label_22e960;
        case 0x22e964u: goto label_22e964;
        case 0x22e968u: goto label_22e968;
        case 0x22e96cu: goto label_22e96c;
        case 0x22e970u: goto label_22e970;
        case 0x22e974u: goto label_22e974;
        case 0x22e978u: goto label_22e978;
        case 0x22e97cu: goto label_22e97c;
        case 0x22e980u: goto label_22e980;
        case 0x22e984u: goto label_22e984;
        case 0x22e988u: goto label_22e988;
        case 0x22e98cu: goto label_22e98c;
        case 0x22e990u: goto label_22e990;
        case 0x22e994u: goto label_22e994;
        case 0x22e998u: goto label_22e998;
        case 0x22e99cu: goto label_22e99c;
        case 0x22e9a0u: goto label_22e9a0;
        case 0x22e9a4u: goto label_22e9a4;
        case 0x22e9a8u: goto label_22e9a8;
        case 0x22e9acu: goto label_22e9ac;
        case 0x22e9b0u: goto label_22e9b0;
        case 0x22e9b4u: goto label_22e9b4;
        case 0x22e9b8u: goto label_22e9b8;
        case 0x22e9bcu: goto label_22e9bc;
        case 0x22e9c0u: goto label_22e9c0;
        case 0x22e9c4u: goto label_22e9c4;
        case 0x22e9c8u: goto label_22e9c8;
        case 0x22e9ccu: goto label_22e9cc;
        case 0x22e9d0u: goto label_22e9d0;
        case 0x22e9d4u: goto label_22e9d4;
        case 0x22e9d8u: goto label_22e9d8;
        case 0x22e9dcu: goto label_22e9dc;
        case 0x22e9e0u: goto label_22e9e0;
        case 0x22e9e4u: goto label_22e9e4;
        case 0x22e9e8u: goto label_22e9e8;
        case 0x22e9ecu: goto label_22e9ec;
        case 0x22e9f0u: goto label_22e9f0;
        case 0x22e9f4u: goto label_22e9f4;
        case 0x22e9f8u: goto label_22e9f8;
        case 0x22e9fcu: goto label_22e9fc;
        case 0x22ea00u: goto label_22ea00;
        case 0x22ea04u: goto label_22ea04;
        case 0x22ea08u: goto label_22ea08;
        case 0x22ea0cu: goto label_22ea0c;
        case 0x22ea10u: goto label_22ea10;
        case 0x22ea14u: goto label_22ea14;
        case 0x22ea18u: goto label_22ea18;
        case 0x22ea1cu: goto label_22ea1c;
        case 0x22ea20u: goto label_22ea20;
        case 0x22ea24u: goto label_22ea24;
        case 0x22ea28u: goto label_22ea28;
        case 0x22ea2cu: goto label_22ea2c;
        case 0x22ea30u: goto label_22ea30;
        case 0x22ea34u: goto label_22ea34;
        case 0x22ea38u: goto label_22ea38;
        case 0x22ea3cu: goto label_22ea3c;
        case 0x22ea40u: goto label_22ea40;
        case 0x22ea44u: goto label_22ea44;
        case 0x22ea48u: goto label_22ea48;
        case 0x22ea4cu: goto label_22ea4c;
        case 0x22ea50u: goto label_22ea50;
        case 0x22ea54u: goto label_22ea54;
        case 0x22ea58u: goto label_22ea58;
        case 0x22ea5cu: goto label_22ea5c;
        case 0x22ea60u: goto label_22ea60;
        case 0x22ea64u: goto label_22ea64;
        case 0x22ea68u: goto label_22ea68;
        case 0x22ea6cu: goto label_22ea6c;
        case 0x22ea70u: goto label_22ea70;
        case 0x22ea74u: goto label_22ea74;
        case 0x22ea78u: goto label_22ea78;
        case 0x22ea7cu: goto label_22ea7c;
        case 0x22ea80u: goto label_22ea80;
        case 0x22ea84u: goto label_22ea84;
        case 0x22ea88u: goto label_22ea88;
        case 0x22ea8cu: goto label_22ea8c;
        case 0x22ea90u: goto label_22ea90;
        case 0x22ea94u: goto label_22ea94;
        case 0x22ea98u: goto label_22ea98;
        case 0x22ea9cu: goto label_22ea9c;
        case 0x22eaa0u: goto label_22eaa0;
        case 0x22eaa4u: goto label_22eaa4;
        case 0x22eaa8u: goto label_22eaa8;
        case 0x22eaacu: goto label_22eaac;
        case 0x22eab0u: goto label_22eab0;
        case 0x22eab4u: goto label_22eab4;
        case 0x22eab8u: goto label_22eab8;
        case 0x22eabcu: goto label_22eabc;
        case 0x22eac0u: goto label_22eac0;
        case 0x22eac4u: goto label_22eac4;
        case 0x22eac8u: goto label_22eac8;
        case 0x22eaccu: goto label_22eacc;
        case 0x22ead0u: goto label_22ead0;
        case 0x22ead4u: goto label_22ead4;
        case 0x22ead8u: goto label_22ead8;
        case 0x22eadcu: goto label_22eadc;
        case 0x22eae0u: goto label_22eae0;
        case 0x22eae4u: goto label_22eae4;
        case 0x22eae8u: goto label_22eae8;
        case 0x22eaecu: goto label_22eaec;
        case 0x22eaf0u: goto label_22eaf0;
        case 0x22eaf4u: goto label_22eaf4;
        case 0x22eaf8u: goto label_22eaf8;
        case 0x22eafcu: goto label_22eafc;
        case 0x22eb00u: goto label_22eb00;
        case 0x22eb04u: goto label_22eb04;
        case 0x22eb08u: goto label_22eb08;
        case 0x22eb0cu: goto label_22eb0c;
        case 0x22eb10u: goto label_22eb10;
        case 0x22eb14u: goto label_22eb14;
        case 0x22eb18u: goto label_22eb18;
        case 0x22eb1cu: goto label_22eb1c;
        case 0x22eb20u: goto label_22eb20;
        case 0x22eb24u: goto label_22eb24;
        case 0x22eb28u: goto label_22eb28;
        case 0x22eb2cu: goto label_22eb2c;
        case 0x22eb30u: goto label_22eb30;
        case 0x22eb34u: goto label_22eb34;
        case 0x22eb38u: goto label_22eb38;
        case 0x22eb3cu: goto label_22eb3c;
        case 0x22eb40u: goto label_22eb40;
        case 0x22eb44u: goto label_22eb44;
        case 0x22eb48u: goto label_22eb48;
        case 0x22eb4cu: goto label_22eb4c;
        case 0x22eb50u: goto label_22eb50;
        case 0x22eb54u: goto label_22eb54;
        case 0x22eb58u: goto label_22eb58;
        case 0x22eb5cu: goto label_22eb5c;
        case 0x22eb60u: goto label_22eb60;
        case 0x22eb64u: goto label_22eb64;
        case 0x22eb68u: goto label_22eb68;
        case 0x22eb6cu: goto label_22eb6c;
        case 0x22eb70u: goto label_22eb70;
        case 0x22eb74u: goto label_22eb74;
        case 0x22eb78u: goto label_22eb78;
        case 0x22eb7cu: goto label_22eb7c;
        case 0x22eb80u: goto label_22eb80;
        case 0x22eb84u: goto label_22eb84;
        case 0x22eb88u: goto label_22eb88;
        case 0x22eb8cu: goto label_22eb8c;
        case 0x22eb90u: goto label_22eb90;
        case 0x22eb94u: goto label_22eb94;
        case 0x22eb98u: goto label_22eb98;
        case 0x22eb9cu: goto label_22eb9c;
        case 0x22eba0u: goto label_22eba0;
        case 0x22eba4u: goto label_22eba4;
        case 0x22eba8u: goto label_22eba8;
        case 0x22ebacu: goto label_22ebac;
        case 0x22ebb0u: goto label_22ebb0;
        case 0x22ebb4u: goto label_22ebb4;
        case 0x22ebb8u: goto label_22ebb8;
        case 0x22ebbcu: goto label_22ebbc;
        case 0x22ebc0u: goto label_22ebc0;
        case 0x22ebc4u: goto label_22ebc4;
        case 0x22ebc8u: goto label_22ebc8;
        case 0x22ebccu: goto label_22ebcc;
        case 0x22ebd0u: goto label_22ebd0;
        case 0x22ebd4u: goto label_22ebd4;
        case 0x22ebd8u: goto label_22ebd8;
        case 0x22ebdcu: goto label_22ebdc;
        case 0x22ebe0u: goto label_22ebe0;
        case 0x22ebe4u: goto label_22ebe4;
        case 0x22ebe8u: goto label_22ebe8;
        case 0x22ebecu: goto label_22ebec;
        case 0x22ebf0u: goto label_22ebf0;
        case 0x22ebf4u: goto label_22ebf4;
        case 0x22ebf8u: goto label_22ebf8;
        case 0x22ebfcu: goto label_22ebfc;
        case 0x22ec00u: goto label_22ec00;
        case 0x22ec04u: goto label_22ec04;
        case 0x22ec08u: goto label_22ec08;
        case 0x22ec0cu: goto label_22ec0c;
        case 0x22ec10u: goto label_22ec10;
        case 0x22ec14u: goto label_22ec14;
        case 0x22ec18u: goto label_22ec18;
        case 0x22ec1cu: goto label_22ec1c;
        case 0x22ec20u: goto label_22ec20;
        case 0x22ec24u: goto label_22ec24;
        case 0x22ec28u: goto label_22ec28;
        case 0x22ec2cu: goto label_22ec2c;
        case 0x22ec30u: goto label_22ec30;
        case 0x22ec34u: goto label_22ec34;
        case 0x22ec38u: goto label_22ec38;
        case 0x22ec3cu: goto label_22ec3c;
        case 0x22ec40u: goto label_22ec40;
        case 0x22ec44u: goto label_22ec44;
        case 0x22ec48u: goto label_22ec48;
        case 0x22ec4cu: goto label_22ec4c;
        case 0x22ec50u: goto label_22ec50;
        case 0x22ec54u: goto label_22ec54;
        case 0x22ec58u: goto label_22ec58;
        case 0x22ec5cu: goto label_22ec5c;
        case 0x22ec60u: goto label_22ec60;
        case 0x22ec64u: goto label_22ec64;
        case 0x22ec68u: goto label_22ec68;
        case 0x22ec6cu: goto label_22ec6c;
        case 0x22ec70u: goto label_22ec70;
        case 0x22ec74u: goto label_22ec74;
        case 0x22ec78u: goto label_22ec78;
        case 0x22ec7cu: goto label_22ec7c;
        case 0x22ec80u: goto label_22ec80;
        case 0x22ec84u: goto label_22ec84;
        case 0x22ec88u: goto label_22ec88;
        case 0x22ec8cu: goto label_22ec8c;
        case 0x22ec90u: goto label_22ec90;
        case 0x22ec94u: goto label_22ec94;
        case 0x22ec98u: goto label_22ec98;
        case 0x22ec9cu: goto label_22ec9c;
        case 0x22eca0u: goto label_22eca0;
        case 0x22eca4u: goto label_22eca4;
        case 0x22eca8u: goto label_22eca8;
        case 0x22ecacu: goto label_22ecac;
        case 0x22ecb0u: goto label_22ecb0;
        case 0x22ecb4u: goto label_22ecb4;
        case 0x22ecb8u: goto label_22ecb8;
        case 0x22ecbcu: goto label_22ecbc;
        case 0x22ecc0u: goto label_22ecc0;
        case 0x22ecc4u: goto label_22ecc4;
        case 0x22ecc8u: goto label_22ecc8;
        case 0x22ecccu: goto label_22eccc;
        case 0x22ecd0u: goto label_22ecd0;
        case 0x22ecd4u: goto label_22ecd4;
        case 0x22ecd8u: goto label_22ecd8;
        case 0x22ecdcu: goto label_22ecdc;
        case 0x22ece0u: goto label_22ece0;
        case 0x22ece4u: goto label_22ece4;
        case 0x22ece8u: goto label_22ece8;
        case 0x22ececu: goto label_22ecec;
        case 0x22ecf0u: goto label_22ecf0;
        case 0x22ecf4u: goto label_22ecf4;
        case 0x22ecf8u: goto label_22ecf8;
        case 0x22ecfcu: goto label_22ecfc;
        case 0x22ed00u: goto label_22ed00;
        case 0x22ed04u: goto label_22ed04;
        case 0x22ed08u: goto label_22ed08;
        case 0x22ed0cu: goto label_22ed0c;
        case 0x22ed10u: goto label_22ed10;
        case 0x22ed14u: goto label_22ed14;
        case 0x22ed18u: goto label_22ed18;
        case 0x22ed1cu: goto label_22ed1c;
        case 0x22ed20u: goto label_22ed20;
        case 0x22ed24u: goto label_22ed24;
        case 0x22ed28u: goto label_22ed28;
        case 0x22ed2cu: goto label_22ed2c;
        case 0x22ed30u: goto label_22ed30;
        case 0x22ed34u: goto label_22ed34;
        case 0x22ed38u: goto label_22ed38;
        case 0x22ed3cu: goto label_22ed3c;
        case 0x22ed40u: goto label_22ed40;
        case 0x22ed44u: goto label_22ed44;
        case 0x22ed48u: goto label_22ed48;
        case 0x22ed4cu: goto label_22ed4c;
        case 0x22ed50u: goto label_22ed50;
        case 0x22ed54u: goto label_22ed54;
        case 0x22ed58u: goto label_22ed58;
        case 0x22ed5cu: goto label_22ed5c;
        case 0x22ed60u: goto label_22ed60;
        case 0x22ed64u: goto label_22ed64;
        case 0x22ed68u: goto label_22ed68;
        case 0x22ed6cu: goto label_22ed6c;
        case 0x22ed70u: goto label_22ed70;
        case 0x22ed74u: goto label_22ed74;
        case 0x22ed78u: goto label_22ed78;
        case 0x22ed7cu: goto label_22ed7c;
        case 0x22ed80u: goto label_22ed80;
        case 0x22ed84u: goto label_22ed84;
        case 0x22ed88u: goto label_22ed88;
        case 0x22ed8cu: goto label_22ed8c;
        case 0x22ed90u: goto label_22ed90;
        case 0x22ed94u: goto label_22ed94;
        case 0x22ed98u: goto label_22ed98;
        case 0x22ed9cu: goto label_22ed9c;
        case 0x22eda0u: goto label_22eda0;
        case 0x22eda4u: goto label_22eda4;
        case 0x22eda8u: goto label_22eda8;
        case 0x22edacu: goto label_22edac;
        case 0x22edb0u: goto label_22edb0;
        case 0x22edb4u: goto label_22edb4;
        case 0x22edb8u: goto label_22edb8;
        case 0x22edbcu: goto label_22edbc;
        case 0x22edc0u: goto label_22edc0;
        case 0x22edc4u: goto label_22edc4;
        case 0x22edc8u: goto label_22edc8;
        case 0x22edccu: goto label_22edcc;
        case 0x22edd0u: goto label_22edd0;
        case 0x22edd4u: goto label_22edd4;
        case 0x22edd8u: goto label_22edd8;
        case 0x22eddcu: goto label_22eddc;
        case 0x22ede0u: goto label_22ede0;
        case 0x22ede4u: goto label_22ede4;
        case 0x22ede8u: goto label_22ede8;
        case 0x22edecu: goto label_22edec;
        case 0x22edf0u: goto label_22edf0;
        case 0x22edf4u: goto label_22edf4;
        case 0x22edf8u: goto label_22edf8;
        case 0x22edfcu: goto label_22edfc;
        case 0x22ee00u: goto label_22ee00;
        case 0x22ee04u: goto label_22ee04;
        case 0x22ee08u: goto label_22ee08;
        case 0x22ee0cu: goto label_22ee0c;
        case 0x22ee10u: goto label_22ee10;
        case 0x22ee14u: goto label_22ee14;
        case 0x22ee18u: goto label_22ee18;
        case 0x22ee1cu: goto label_22ee1c;
        case 0x22ee20u: goto label_22ee20;
        case 0x22ee24u: goto label_22ee24;
        case 0x22ee28u: goto label_22ee28;
        case 0x22ee2cu: goto label_22ee2c;
        case 0x22ee30u: goto label_22ee30;
        case 0x22ee34u: goto label_22ee34;
        case 0x22ee38u: goto label_22ee38;
        case 0x22ee3cu: goto label_22ee3c;
        case 0x22ee40u: goto label_22ee40;
        case 0x22ee44u: goto label_22ee44;
        case 0x22ee48u: goto label_22ee48;
        case 0x22ee4cu: goto label_22ee4c;
        case 0x22ee50u: goto label_22ee50;
        case 0x22ee54u: goto label_22ee54;
        case 0x22ee58u: goto label_22ee58;
        case 0x22ee5cu: goto label_22ee5c;
        case 0x22ee60u: goto label_22ee60;
        case 0x22ee64u: goto label_22ee64;
        case 0x22ee68u: goto label_22ee68;
        case 0x22ee6cu: goto label_22ee6c;
        case 0x22ee70u: goto label_22ee70;
        case 0x22ee74u: goto label_22ee74;
        case 0x22ee78u: goto label_22ee78;
        case 0x22ee7cu: goto label_22ee7c;
        case 0x22ee80u: goto label_22ee80;
        case 0x22ee84u: goto label_22ee84;
        case 0x22ee88u: goto label_22ee88;
        case 0x22ee8cu: goto label_22ee8c;
        case 0x22ee90u: goto label_22ee90;
        case 0x22ee94u: goto label_22ee94;
        case 0x22ee98u: goto label_22ee98;
        case 0x22ee9cu: goto label_22ee9c;
        case 0x22eea0u: goto label_22eea0;
        case 0x22eea4u: goto label_22eea4;
        case 0x22eea8u: goto label_22eea8;
        case 0x22eeacu: goto label_22eeac;
        case 0x22eeb0u: goto label_22eeb0;
        case 0x22eeb4u: goto label_22eeb4;
        case 0x22eeb8u: goto label_22eeb8;
        case 0x22eebcu: goto label_22eebc;
        case 0x22eec0u: goto label_22eec0;
        case 0x22eec4u: goto label_22eec4;
        case 0x22eec8u: goto label_22eec8;
        case 0x22eeccu: goto label_22eecc;
        case 0x22eed0u: goto label_22eed0;
        case 0x22eed4u: goto label_22eed4;
        case 0x22eed8u: goto label_22eed8;
        case 0x22eedcu: goto label_22eedc;
        case 0x22eee0u: goto label_22eee0;
        case 0x22eee4u: goto label_22eee4;
        case 0x22eee8u: goto label_22eee8;
        case 0x22eeecu: goto label_22eeec;
        case 0x22eef0u: goto label_22eef0;
        case 0x22eef4u: goto label_22eef4;
        case 0x22eef8u: goto label_22eef8;
        case 0x22eefcu: goto label_22eefc;
        case 0x22ef00u: goto label_22ef00;
        case 0x22ef04u: goto label_22ef04;
        case 0x22ef08u: goto label_22ef08;
        case 0x22ef0cu: goto label_22ef0c;
        case 0x22ef10u: goto label_22ef10;
        case 0x22ef14u: goto label_22ef14;
        case 0x22ef18u: goto label_22ef18;
        case 0x22ef1cu: goto label_22ef1c;
        case 0x22ef20u: goto label_22ef20;
        case 0x22ef24u: goto label_22ef24;
        case 0x22ef28u: goto label_22ef28;
        case 0x22ef2cu: goto label_22ef2c;
        case 0x22ef30u: goto label_22ef30;
        case 0x22ef34u: goto label_22ef34;
        case 0x22ef38u: goto label_22ef38;
        case 0x22ef3cu: goto label_22ef3c;
        case 0x22ef40u: goto label_22ef40;
        case 0x22ef44u: goto label_22ef44;
        case 0x22ef48u: goto label_22ef48;
        case 0x22ef4cu: goto label_22ef4c;
        case 0x22ef50u: goto label_22ef50;
        case 0x22ef54u: goto label_22ef54;
        case 0x22ef58u: goto label_22ef58;
        case 0x22ef5cu: goto label_22ef5c;
        case 0x22ef60u: goto label_22ef60;
        case 0x22ef64u: goto label_22ef64;
        case 0x22ef68u: goto label_22ef68;
        case 0x22ef6cu: goto label_22ef6c;
        case 0x22ef70u: goto label_22ef70;
        case 0x22ef74u: goto label_22ef74;
        case 0x22ef78u: goto label_22ef78;
        case 0x22ef7cu: goto label_22ef7c;
        case 0x22ef80u: goto label_22ef80;
        case 0x22ef84u: goto label_22ef84;
        case 0x22ef88u: goto label_22ef88;
        case 0x22ef8cu: goto label_22ef8c;
        case 0x22ef90u: goto label_22ef90;
        case 0x22ef94u: goto label_22ef94;
        case 0x22ef98u: goto label_22ef98;
        case 0x22ef9cu: goto label_22ef9c;
        case 0x22efa0u: goto label_22efa0;
        case 0x22efa4u: goto label_22efa4;
        case 0x22efa8u: goto label_22efa8;
        case 0x22efacu: goto label_22efac;
        case 0x22efb0u: goto label_22efb0;
        case 0x22efb4u: goto label_22efb4;
        case 0x22efb8u: goto label_22efb8;
        case 0x22efbcu: goto label_22efbc;
        case 0x22efc0u: goto label_22efc0;
        case 0x22efc4u: goto label_22efc4;
        case 0x22efc8u: goto label_22efc8;
        case 0x22efccu: goto label_22efcc;
        case 0x22efd0u: goto label_22efd0;
        case 0x22efd4u: goto label_22efd4;
        case 0x22efd8u: goto label_22efd8;
        case 0x22efdcu: goto label_22efdc;
        case 0x22efe0u: goto label_22efe0;
        case 0x22efe4u: goto label_22efe4;
        case 0x22efe8u: goto label_22efe8;
        case 0x22efecu: goto label_22efec;
        case 0x22eff0u: goto label_22eff0;
        case 0x22eff4u: goto label_22eff4;
        case 0x22eff8u: goto label_22eff8;
        case 0x22effcu: goto label_22effc;
        case 0x22f000u: goto label_22f000;
        case 0x22f004u: goto label_22f004;
        case 0x22f008u: goto label_22f008;
        case 0x22f00cu: goto label_22f00c;
        case 0x22f010u: goto label_22f010;
        case 0x22f014u: goto label_22f014;
        case 0x22f018u: goto label_22f018;
        case 0x22f01cu: goto label_22f01c;
        case 0x22f020u: goto label_22f020;
        case 0x22f024u: goto label_22f024;
        case 0x22f028u: goto label_22f028;
        case 0x22f02cu: goto label_22f02c;
        case 0x22f030u: goto label_22f030;
        case 0x22f034u: goto label_22f034;
        case 0x22f038u: goto label_22f038;
        case 0x22f03cu: goto label_22f03c;
        case 0x22f040u: goto label_22f040;
        case 0x22f044u: goto label_22f044;
        case 0x22f048u: goto label_22f048;
        case 0x22f04cu: goto label_22f04c;
        case 0x22f050u: goto label_22f050;
        case 0x22f054u: goto label_22f054;
        case 0x22f058u: goto label_22f058;
        case 0x22f05cu: goto label_22f05c;
        case 0x22f060u: goto label_22f060;
        case 0x22f064u: goto label_22f064;
        case 0x22f068u: goto label_22f068;
        case 0x22f06cu: goto label_22f06c;
        case 0x22f070u: goto label_22f070;
        case 0x22f074u: goto label_22f074;
        case 0x22f078u: goto label_22f078;
        case 0x22f07cu: goto label_22f07c;
        case 0x22f080u: goto label_22f080;
        case 0x22f084u: goto label_22f084;
        case 0x22f088u: goto label_22f088;
        case 0x22f08cu: goto label_22f08c;
        case 0x22f090u: goto label_22f090;
        case 0x22f094u: goto label_22f094;
        case 0x22f098u: goto label_22f098;
        case 0x22f09cu: goto label_22f09c;
        case 0x22f0a0u: goto label_22f0a0;
        case 0x22f0a4u: goto label_22f0a4;
        case 0x22f0a8u: goto label_22f0a8;
        case 0x22f0acu: goto label_22f0ac;
        case 0x22f0b0u: goto label_22f0b0;
        case 0x22f0b4u: goto label_22f0b4;
        case 0x22f0b8u: goto label_22f0b8;
        case 0x22f0bcu: goto label_22f0bc;
        case 0x22f0c0u: goto label_22f0c0;
        case 0x22f0c4u: goto label_22f0c4;
        case 0x22f0c8u: goto label_22f0c8;
        case 0x22f0ccu: goto label_22f0cc;
        case 0x22f0d0u: goto label_22f0d0;
        case 0x22f0d4u: goto label_22f0d4;
        case 0x22f0d8u: goto label_22f0d8;
        case 0x22f0dcu: goto label_22f0dc;
        case 0x22f0e0u: goto label_22f0e0;
        case 0x22f0e4u: goto label_22f0e4;
        case 0x22f0e8u: goto label_22f0e8;
        case 0x22f0ecu: goto label_22f0ec;
        case 0x22f0f0u: goto label_22f0f0;
        case 0x22f0f4u: goto label_22f0f4;
        case 0x22f0f8u: goto label_22f0f8;
        case 0x22f0fcu: goto label_22f0fc;
        case 0x22f100u: goto label_22f100;
        case 0x22f104u: goto label_22f104;
        case 0x22f108u: goto label_22f108;
        case 0x22f10cu: goto label_22f10c;
        case 0x22f110u: goto label_22f110;
        case 0x22f114u: goto label_22f114;
        case 0x22f118u: goto label_22f118;
        case 0x22f11cu: goto label_22f11c;
        case 0x22f120u: goto label_22f120;
        case 0x22f124u: goto label_22f124;
        case 0x22f128u: goto label_22f128;
        case 0x22f12cu: goto label_22f12c;
        case 0x22f130u: goto label_22f130;
        case 0x22f134u: goto label_22f134;
        case 0x22f138u: goto label_22f138;
        case 0x22f13cu: goto label_22f13c;
        case 0x22f140u: goto label_22f140;
        case 0x22f144u: goto label_22f144;
        case 0x22f148u: goto label_22f148;
        case 0x22f14cu: goto label_22f14c;
        case 0x22f150u: goto label_22f150;
        case 0x22f154u: goto label_22f154;
        case 0x22f158u: goto label_22f158;
        case 0x22f15cu: goto label_22f15c;
        case 0x22f160u: goto label_22f160;
        case 0x22f164u: goto label_22f164;
        case 0x22f168u: goto label_22f168;
        case 0x22f16cu: goto label_22f16c;
        case 0x22f170u: goto label_22f170;
        case 0x22f174u: goto label_22f174;
        case 0x22f178u: goto label_22f178;
        case 0x22f17cu: goto label_22f17c;
        case 0x22f180u: goto label_22f180;
        case 0x22f184u: goto label_22f184;
        case 0x22f188u: goto label_22f188;
        case 0x22f18cu: goto label_22f18c;
        case 0x22f190u: goto label_22f190;
        case 0x22f194u: goto label_22f194;
        case 0x22f198u: goto label_22f198;
        case 0x22f19cu: goto label_22f19c;
        case 0x22f1a0u: goto label_22f1a0;
        case 0x22f1a4u: goto label_22f1a4;
        case 0x22f1a8u: goto label_22f1a8;
        case 0x22f1acu: goto label_22f1ac;
        case 0x22f1b0u: goto label_22f1b0;
        case 0x22f1b4u: goto label_22f1b4;
        case 0x22f1b8u: goto label_22f1b8;
        case 0x22f1bcu: goto label_22f1bc;
        case 0x22f1c0u: goto label_22f1c0;
        case 0x22f1c4u: goto label_22f1c4;
        case 0x22f1c8u: goto label_22f1c8;
        case 0x22f1ccu: goto label_22f1cc;
        case 0x22f1d0u: goto label_22f1d0;
        case 0x22f1d4u: goto label_22f1d4;
        case 0x22f1d8u: goto label_22f1d8;
        case 0x22f1dcu: goto label_22f1dc;
        case 0x22f1e0u: goto label_22f1e0;
        case 0x22f1e4u: goto label_22f1e4;
        case 0x22f1e8u: goto label_22f1e8;
        case 0x22f1ecu: goto label_22f1ec;
        case 0x22f1f0u: goto label_22f1f0;
        case 0x22f1f4u: goto label_22f1f4;
        case 0x22f1f8u: goto label_22f1f8;
        case 0x22f1fcu: goto label_22f1fc;
        case 0x22f200u: goto label_22f200;
        case 0x22f204u: goto label_22f204;
        case 0x22f208u: goto label_22f208;
        case 0x22f20cu: goto label_22f20c;
        case 0x22f210u: goto label_22f210;
        case 0x22f214u: goto label_22f214;
        case 0x22f218u: goto label_22f218;
        case 0x22f21cu: goto label_22f21c;
        case 0x22f220u: goto label_22f220;
        case 0x22f224u: goto label_22f224;
        case 0x22f228u: goto label_22f228;
        case 0x22f22cu: goto label_22f22c;
        case 0x22f230u: goto label_22f230;
        case 0x22f234u: goto label_22f234;
        case 0x22f238u: goto label_22f238;
        case 0x22f23cu: goto label_22f23c;
        case 0x22f240u: goto label_22f240;
        case 0x22f244u: goto label_22f244;
        case 0x22f248u: goto label_22f248;
        case 0x22f24cu: goto label_22f24c;
        case 0x22f250u: goto label_22f250;
        case 0x22f254u: goto label_22f254;
        case 0x22f258u: goto label_22f258;
        case 0x22f25cu: goto label_22f25c;
        case 0x22f260u: goto label_22f260;
        case 0x22f264u: goto label_22f264;
        case 0x22f268u: goto label_22f268;
        case 0x22f26cu: goto label_22f26c;
        case 0x22f270u: goto label_22f270;
        case 0x22f274u: goto label_22f274;
        case 0x22f278u: goto label_22f278;
        case 0x22f27cu: goto label_22f27c;
        case 0x22f280u: goto label_22f280;
        case 0x22f284u: goto label_22f284;
        case 0x22f288u: goto label_22f288;
        case 0x22f28cu: goto label_22f28c;
        case 0x22f290u: goto label_22f290;
        case 0x22f294u: goto label_22f294;
        case 0x22f298u: goto label_22f298;
        case 0x22f29cu: goto label_22f29c;
        case 0x22f2a0u: goto label_22f2a0;
        case 0x22f2a4u: goto label_22f2a4;
        case 0x22f2a8u: goto label_22f2a8;
        case 0x22f2acu: goto label_22f2ac;
        case 0x22f2b0u: goto label_22f2b0;
        case 0x22f2b4u: goto label_22f2b4;
        case 0x22f2b8u: goto label_22f2b8;
        case 0x22f2bcu: goto label_22f2bc;
        case 0x22f2c0u: goto label_22f2c0;
        case 0x22f2c4u: goto label_22f2c4;
        case 0x22f2c8u: goto label_22f2c8;
        case 0x22f2ccu: goto label_22f2cc;
        case 0x22f2d0u: goto label_22f2d0;
        case 0x22f2d4u: goto label_22f2d4;
        case 0x22f2d8u: goto label_22f2d8;
        case 0x22f2dcu: goto label_22f2dc;
        case 0x22f2e0u: goto label_22f2e0;
        case 0x22f2e4u: goto label_22f2e4;
        case 0x22f2e8u: goto label_22f2e8;
        case 0x22f2ecu: goto label_22f2ec;
        default: break;
    }

    ctx->pc = 0x22e5a0u;

label_22e5a0:
    // 0x22e5a0: 0x8ca60008  lw          $a2, 0x8($a1)
    ctx->pc = 0x22e5a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_22e5a4:
    // 0x22e5a4: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x22e5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_22e5a8:
    // 0x22e5a8: 0xc3082a  slt         $at, $a2, $v1
    ctx->pc = 0x22e5a8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_22e5ac:
    // 0x22e5ac: 0x50200001  beql        $at, $zero, . + 4 + (0x1 << 2)
label_22e5b0:
    if (ctx->pc == 0x22E5B0u) {
        ctx->pc = 0x22E5B0u;
            // 0x22e5b0: 0xc0182d  daddu       $v1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22E5B4u;
        goto label_22e5b4;
    }
    ctx->pc = 0x22E5ACu;
    {
        const bool branch_taken_0x22e5ac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e5ac) {
            ctx->pc = 0x22E5B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22E5ACu;
            // 0x22e5b0: 0xc0182d  daddu       $v1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22E5B4u;
            goto label_22e5b4;
        }
    }
    ctx->pc = 0x22E5B4u;
label_22e5b4:
    // 0x22e5b4: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x22e5b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
label_22e5b8:
    // 0x22e5b8: 0x8ca6000c  lw          $a2, 0xC($a1)
    ctx->pc = 0x22e5b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_22e5bc:
    // 0x22e5bc: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x22e5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_22e5c0:
    // 0x22e5c0: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x22e5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_22e5c4:
    // 0x22e5c4: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x22e5c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
label_22e5c8:
    // 0x22e5c8: 0x8ca60010  lw          $a2, 0x10($a1)
    ctx->pc = 0x22e5c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_22e5cc:
    // 0x22e5cc: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x22e5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_22e5d0:
    // 0x22e5d0: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x22e5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_22e5d4:
    // 0x22e5d4: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x22e5d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
label_22e5d8:
    // 0x22e5d8: 0x8ca50014  lw          $a1, 0x14($a1)
    ctx->pc = 0x22e5d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_22e5dc:
    // 0x22e5dc: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x22e5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_22e5e0:
    // 0x22e5e0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x22e5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_22e5e4:
    // 0x22e5e4: 0x3e00008  jr          $ra
label_22e5e8:
    if (ctx->pc == 0x22E5E8u) {
        ctx->pc = 0x22E5E8u;
            // 0x22e5e8: 0xac830014  sw          $v1, 0x14($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
        ctx->pc = 0x22E5ECu;
        goto label_22e5ec;
    }
    ctx->pc = 0x22E5E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22E5E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22E5E4u;
            // 0x22e5e8: 0xac830014  sw          $v1, 0x14($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22E5ECu;
label_22e5ec:
    // 0x22e5ec: 0x0  nop
    ctx->pc = 0x22e5ecu;
    // NOP
label_22e5f0:
    // 0x22e5f0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x22e5f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_22e5f4:
    // 0x22e5f4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x22e5f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_22e5f8:
    // 0x22e5f8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x22e5f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_22e5fc:
    // 0x22e5fc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x22e5fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_22e600:
    // 0x22e600: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22e600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_22e604:
    // 0x22e604: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22e604u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_22e608:
    // 0x22e608: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x22e608u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_22e60c:
    // 0x22e60c: 0x122002d6  beqz        $s1, . + 4 + (0x2D6 << 2)
label_22e610:
    if (ctx->pc == 0x22E610u) {
        ctx->pc = 0x22E610u;
            // 0x22e610: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22E614u;
        goto label_22e614;
    }
    ctx->pc = 0x22E60Cu;
    {
        const bool branch_taken_0x22e60c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E610u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22E60Cu;
            // 0x22e610: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e60c) {
            ctx->pc = 0x22F168u;
            goto label_22f168;
        }
    }
    ctx->pc = 0x22E614u;
label_22e614:
    // 0x22e614: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x22e614u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_22e618:
    // 0x22e618: 0x2442f080  addiu       $v0, $v0, -0xF80
    ctx->pc = 0x22e618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963328));
label_22e61c:
    // 0x22e61c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x22e61cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_22e620:
    // 0x22e620: 0x8e24004c  lw          $a0, 0x4C($s1)
    ctx->pc = 0x22e620u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
label_22e624:
    // 0x22e624: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x22e624u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_22e628:
    // 0x22e628: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
label_22e62c:
    if (ctx->pc == 0x22E62Cu) {
        ctx->pc = 0x22E62Cu;
            // 0x22e62c: 0xae20004c  sw          $zero, 0x4C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 0));
        ctx->pc = 0x22E630u;
        goto label_22e630;
    }
    ctx->pc = 0x22E628u;
    {
        const bool branch_taken_0x22e628 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e628) {
            ctx->pc = 0x22E62Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22E628u;
            // 0x22e62c: 0xae20004c  sw          $zero, 0x4C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22E668u;
            goto label_22e668;
        }
    }
    ctx->pc = 0x22E630u;
label_22e630:
    // 0x22e630: 0x84820006  lh          $v0, 0x6($a0)
    ctx->pc = 0x22e630u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_22e634:
    // 0x22e634: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x22e634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_22e638:
    // 0x22e638: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x22e638u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
label_22e63c:
    // 0x22e63c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x22e63cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_22e640:
    // 0x22e640: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x22e640u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_22e644:
    // 0x22e644: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_22e648:
    if (ctx->pc == 0x22E648u) {
        ctx->pc = 0x22E64Cu;
        goto label_22e64c;
    }
    ctx->pc = 0x22E644u;
    {
        const bool branch_taken_0x22e644 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22e644) {
            ctx->pc = 0x22E664u;
            goto label_22e664;
        }
    }
    ctx->pc = 0x22E64Cu;
label_22e64c:
    // 0x22e64c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_22e650:
    if (ctx->pc == 0x22E650u) {
        ctx->pc = 0x22E654u;
        goto label_22e654;
    }
    ctx->pc = 0x22E64Cu;
    {
        const bool branch_taken_0x22e64c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e64c) {
            ctx->pc = 0x22E664u;
            goto label_22e664;
        }
    }
    ctx->pc = 0x22E654u;
label_22e654:
    // 0x22e654: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x22e654u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_22e658:
    // 0x22e658: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x22e658u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_22e65c:
    // 0x22e65c: 0x320f809  jalr        $t9
label_22e660:
    if (ctx->pc == 0x22E660u) {
        ctx->pc = 0x22E660u;
            // 0x22e660: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x22E664u;
        goto label_22e664;
    }
    ctx->pc = 0x22E65Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x22E664u);
        ctx->pc = 0x22E660u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22E65Cu;
            // 0x22e660: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x22E664u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x22E664u; }
            if (ctx->pc != 0x22E664u) { return; }
        }
        }
    }
    ctx->pc = 0x22E664u;
label_22e664:
    // 0x22e664: 0xae20004c  sw          $zero, 0x4C($s1)
    ctx->pc = 0x22e664u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 0));
label_22e668:
    // 0x22e668: 0x8e3300a8  lw          $s3, 0xA8($s1)
    ctx->pc = 0x22e668u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 168)));
label_22e66c:
    // 0x22e66c: 0x52600016  beql        $s3, $zero, . + 4 + (0x16 << 2)
label_22e670:
    if (ctx->pc == 0x22E670u) {
        ctx->pc = 0x22E670u;
            // 0x22e670: 0x8e3300b4  lw          $s3, 0xB4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 180)));
        ctx->pc = 0x22E674u;
        goto label_22e674;
    }
    ctx->pc = 0x22E66Cu;
    {
        const bool branch_taken_0x22e66c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e66c) {
            ctx->pc = 0x22E670u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22E66Cu;
            // 0x22e670: 0x8e3300b4  lw          $s3, 0xB4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 180)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22E6C8u;
            goto label_22e6c8;
        }
    }
    ctx->pc = 0x22E674u;
label_22e674:
    // 0x22e674: 0x52600013  beql        $s3, $zero, . + 4 + (0x13 << 2)
label_22e678:
    if (ctx->pc == 0x22E678u) {
        ctx->pc = 0x22E678u;
            // 0x22e678: 0xae2000a8  sw          $zero, 0xA8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 168), GPR_U32(ctx, 0));
        ctx->pc = 0x22E67Cu;
        goto label_22e67c;
    }
    ctx->pc = 0x22E674u;
    {
        const bool branch_taken_0x22e674 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e674) {
            ctx->pc = 0x22E678u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22E674u;
            // 0x22e678: 0xae2000a8  sw          $zero, 0xA8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 168), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22E6C4u;
            goto label_22e6c4;
        }
    }
    ctx->pc = 0x22E67Cu;
label_22e67c:
    // 0x22e67c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x22e67cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_22e680:
    // 0x22e680: 0x8c52ea40  lw          $s2, -0x15C0($v0)
    ctx->pc = 0x22e680u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_22e684:
    // 0x22e684: 0x8e430030  lw          $v1, 0x30($s2)
    ctx->pc = 0x22e684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_22e688:
    // 0x22e688: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x22e688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_22e68c:
    // 0x22e68c: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x22e68cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_22e690:
    // 0x22e690: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_22e694:
    if (ctx->pc == 0x22E694u) {
        ctx->pc = 0x22E694u;
            // 0x22e694: 0x8e420030  lw          $v0, 0x30($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
        ctx->pc = 0x22E698u;
        goto label_22e698;
    }
    ctx->pc = 0x22E690u;
    {
        const bool branch_taken_0x22e690 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22e690) {
            ctx->pc = 0x22E694u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22E690u;
            // 0x22e694: 0x8e420030  lw          $v0, 0x30($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22E6ACu;
            goto label_22e6ac;
        }
    }
    ctx->pc = 0x22E698u;
label_22e698:
    // 0x22e698: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x22e698u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_22e69c:
    // 0x22e69c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x22e69cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22e6a0:
    // 0x22e6a0: 0xc0a79ec  jal         func_29E7B0
label_22e6a4:
    if (ctx->pc == 0x22E6A4u) {
        ctx->pc = 0x22E6A4u;
            // 0x22e6a4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22E6A8u;
        goto label_22e6a8;
    }
    ctx->pc = 0x22E6A0u;
    SET_GPR_U32(ctx, 31, 0x22E6A8u);
    ctx->pc = 0x22E6A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22E6A0u;
            // 0x22e6a4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29E7B0u;
    if (runtime->hasFunction(0x29E7B0u)) {
        auto targetFn = runtime->lookupFunction(0x29E7B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E6A8u; }
        if (ctx->pc != 0x22E6A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029E7B0_0x29e7b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E6A8u; }
        if (ctx->pc != 0x22E6A8u) { return; }
    }
    ctx->pc = 0x22E6A8u;
label_22e6a8:
    // 0x22e6a8: 0x8e420030  lw          $v0, 0x30($s2)
    ctx->pc = 0x22e6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_22e6ac:
    // 0x22e6ac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x22e6acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_22e6b0:
    // 0x22e6b0: 0xae420030  sw          $v0, 0x30($s2)
    ctx->pc = 0x22e6b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 2));
label_22e6b4:
    // 0x22e6b4: 0x8e42002c  lw          $v0, 0x2C($s2)
    ctx->pc = 0x22e6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
label_22e6b8:
    // 0x22e6b8: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x22e6b8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_22e6bc:
    // 0x22e6bc: 0xae53002c  sw          $s3, 0x2C($s2)
    ctx->pc = 0x22e6bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 19));
label_22e6c0:
    // 0x22e6c0: 0xae2000a8  sw          $zero, 0xA8($s1)
    ctx->pc = 0x22e6c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 168), GPR_U32(ctx, 0));
label_22e6c4:
    // 0x22e6c4: 0x8e3300b4  lw          $s3, 0xB4($s1)
    ctx->pc = 0x22e6c4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 180)));
label_22e6c8:
    // 0x22e6c8: 0x52600017  beql        $s3, $zero, . + 4 + (0x17 << 2)
label_22e6cc:
    if (ctx->pc == 0x22E6CCu) {
        ctx->pc = 0x22E6CCu;
            // 0x22e6cc: 0x8e3300ac  lw          $s3, 0xAC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 172)));
        ctx->pc = 0x22E6D0u;
        goto label_22e6d0;
    }
    ctx->pc = 0x22E6C8u;
    {
        const bool branch_taken_0x22e6c8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e6c8) {
            ctx->pc = 0x22E6CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22E6C8u;
            // 0x22e6cc: 0x8e3300ac  lw          $s3, 0xAC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 172)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22E728u;
            goto label_22e728;
        }
    }
    ctx->pc = 0x22E6D0u;
label_22e6d0:
    // 0x22e6d0: 0x52600013  beql        $s3, $zero, . + 4 + (0x13 << 2)
label_22e6d4:
    if (ctx->pc == 0x22E6D4u) {
        ctx->pc = 0x22E6D4u;
            // 0x22e6d4: 0xae2000b4  sw          $zero, 0xB4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 0));
        ctx->pc = 0x22E6D8u;
        goto label_22e6d8;
    }
    ctx->pc = 0x22E6D0u;
    {
        const bool branch_taken_0x22e6d0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e6d0) {
            ctx->pc = 0x22E6D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22E6D0u;
            // 0x22e6d4: 0xae2000b4  sw          $zero, 0xB4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22E720u;
            goto label_22e720;
        }
    }
    ctx->pc = 0x22E6D8u;
label_22e6d8:
    // 0x22e6d8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x22e6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_22e6dc:
    // 0x22e6dc: 0x8c52ea40  lw          $s2, -0x15C0($v0)
    ctx->pc = 0x22e6dcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_22e6e0:
    // 0x22e6e0: 0x8e430030  lw          $v1, 0x30($s2)
    ctx->pc = 0x22e6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_22e6e4:
    // 0x22e6e4: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x22e6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_22e6e8:
    // 0x22e6e8: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x22e6e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_22e6ec:
    // 0x22e6ec: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_22e6f0:
    if (ctx->pc == 0x22E6F0u) {
        ctx->pc = 0x22E6F0u;
            // 0x22e6f0: 0x8e420030  lw          $v0, 0x30($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
        ctx->pc = 0x22E6F4u;
        goto label_22e6f4;
    }
    ctx->pc = 0x22E6ECu;
    {
        const bool branch_taken_0x22e6ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22e6ec) {
            ctx->pc = 0x22E6F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22E6ECu;
            // 0x22e6f0: 0x8e420030  lw          $v0, 0x30($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22E708u;
            goto label_22e708;
        }
    }
    ctx->pc = 0x22E6F4u;
label_22e6f4:
    // 0x22e6f4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x22e6f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_22e6f8:
    // 0x22e6f8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x22e6f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22e6fc:
    // 0x22e6fc: 0xc0a79ec  jal         func_29E7B0
label_22e700:
    if (ctx->pc == 0x22E700u) {
        ctx->pc = 0x22E700u;
            // 0x22e700: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22E704u;
        goto label_22e704;
    }
    ctx->pc = 0x22E6FCu;
    SET_GPR_U32(ctx, 31, 0x22E704u);
    ctx->pc = 0x22E700u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22E6FCu;
            // 0x22e700: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29E7B0u;
    if (runtime->hasFunction(0x29E7B0u)) {
        auto targetFn = runtime->lookupFunction(0x29E7B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E704u; }
        if (ctx->pc != 0x22E704u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029E7B0_0x29e7b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E704u; }
        if (ctx->pc != 0x22E704u) { return; }
    }
    ctx->pc = 0x22E704u;
label_22e704:
    // 0x22e704: 0x8e420030  lw          $v0, 0x30($s2)
    ctx->pc = 0x22e704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_22e708:
    // 0x22e708: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x22e708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_22e70c:
    // 0x22e70c: 0xae420030  sw          $v0, 0x30($s2)
    ctx->pc = 0x22e70cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 2));
label_22e710:
    // 0x22e710: 0x8e42002c  lw          $v0, 0x2C($s2)
    ctx->pc = 0x22e710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
label_22e714:
    // 0x22e714: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x22e714u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_22e718:
    // 0x22e718: 0xae53002c  sw          $s3, 0x2C($s2)
    ctx->pc = 0x22e718u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 19));
label_22e71c:
    // 0x22e71c: 0xae2000b4  sw          $zero, 0xB4($s1)
    ctx->pc = 0x22e71cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 0));
label_22e720:
    // 0x22e720: 0xae2000bc  sw          $zero, 0xBC($s1)
    ctx->pc = 0x22e720u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 188), GPR_U32(ctx, 0));
label_22e724:
    // 0x22e724: 0x8e3300ac  lw          $s3, 0xAC($s1)
    ctx->pc = 0x22e724u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 172)));
label_22e728:
    // 0x22e728: 0x52600016  beql        $s3, $zero, . + 4 + (0x16 << 2)
label_22e72c:
    if (ctx->pc == 0x22E72Cu) {
        ctx->pc = 0x22E72Cu;
            // 0x22e72c: 0x8e3300b0  lw          $s3, 0xB0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
        ctx->pc = 0x22E730u;
        goto label_22e730;
    }
    ctx->pc = 0x22E728u;
    {
        const bool branch_taken_0x22e728 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e728) {
            ctx->pc = 0x22E72Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22E728u;
            // 0x22e72c: 0x8e3300b0  lw          $s3, 0xB0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22E784u;
            goto label_22e784;
        }
    }
    ctx->pc = 0x22E730u;
label_22e730:
    // 0x22e730: 0x52600013  beql        $s3, $zero, . + 4 + (0x13 << 2)
label_22e734:
    if (ctx->pc == 0x22E734u) {
        ctx->pc = 0x22E734u;
            // 0x22e734: 0xae2000ac  sw          $zero, 0xAC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 172), GPR_U32(ctx, 0));
        ctx->pc = 0x22E738u;
        goto label_22e738;
    }
    ctx->pc = 0x22E730u;
    {
        const bool branch_taken_0x22e730 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e730) {
            ctx->pc = 0x22E734u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22E730u;
            // 0x22e734: 0xae2000ac  sw          $zero, 0xAC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 172), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22E780u;
            goto label_22e780;
        }
    }
    ctx->pc = 0x22E738u;
label_22e738:
    // 0x22e738: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x22e738u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_22e73c:
    // 0x22e73c: 0x8c52ea40  lw          $s2, -0x15C0($v0)
    ctx->pc = 0x22e73cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_22e740:
    // 0x22e740: 0x8e430030  lw          $v1, 0x30($s2)
    ctx->pc = 0x22e740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_22e744:
    // 0x22e744: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x22e744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_22e748:
    // 0x22e748: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x22e748u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_22e74c:
    // 0x22e74c: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_22e750:
    if (ctx->pc == 0x22E750u) {
        ctx->pc = 0x22E750u;
            // 0x22e750: 0x8e420030  lw          $v0, 0x30($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
        ctx->pc = 0x22E754u;
        goto label_22e754;
    }
    ctx->pc = 0x22E74Cu;
    {
        const bool branch_taken_0x22e74c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22e74c) {
            ctx->pc = 0x22E750u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22E74Cu;
            // 0x22e750: 0x8e420030  lw          $v0, 0x30($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22E768u;
            goto label_22e768;
        }
    }
    ctx->pc = 0x22E754u;
label_22e754:
    // 0x22e754: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x22e754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_22e758:
    // 0x22e758: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x22e758u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22e75c:
    // 0x22e75c: 0xc0a79ec  jal         func_29E7B0
label_22e760:
    if (ctx->pc == 0x22E760u) {
        ctx->pc = 0x22E760u;
            // 0x22e760: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22E764u;
        goto label_22e764;
    }
    ctx->pc = 0x22E75Cu;
    SET_GPR_U32(ctx, 31, 0x22E764u);
    ctx->pc = 0x22E760u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22E75Cu;
            // 0x22e760: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29E7B0u;
    if (runtime->hasFunction(0x29E7B0u)) {
        auto targetFn = runtime->lookupFunction(0x29E7B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E764u; }
        if (ctx->pc != 0x22E764u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029E7B0_0x29e7b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E764u; }
        if (ctx->pc != 0x22E764u) { return; }
    }
    ctx->pc = 0x22E764u;
label_22e764:
    // 0x22e764: 0x8e420030  lw          $v0, 0x30($s2)
    ctx->pc = 0x22e764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_22e768:
    // 0x22e768: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x22e768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_22e76c:
    // 0x22e76c: 0xae420030  sw          $v0, 0x30($s2)
    ctx->pc = 0x22e76cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 2));
label_22e770:
    // 0x22e770: 0x8e42002c  lw          $v0, 0x2C($s2)
    ctx->pc = 0x22e770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
label_22e774:
    // 0x22e774: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x22e774u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_22e778:
    // 0x22e778: 0xae53002c  sw          $s3, 0x2C($s2)
    ctx->pc = 0x22e778u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 19));
label_22e77c:
    // 0x22e77c: 0xae2000ac  sw          $zero, 0xAC($s1)
    ctx->pc = 0x22e77cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 172), GPR_U32(ctx, 0));
label_22e780:
    // 0x22e780: 0x8e3300b0  lw          $s3, 0xB0($s1)
    ctx->pc = 0x22e780u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_22e784:
    // 0x22e784: 0x52600016  beql        $s3, $zero, . + 4 + (0x16 << 2)
label_22e788:
    if (ctx->pc == 0x22E788u) {
        ctx->pc = 0x22E788u;
            // 0x22e788: 0x8e240050  lw          $a0, 0x50($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
        ctx->pc = 0x22E78Cu;
        goto label_22e78c;
    }
    ctx->pc = 0x22E784u;
    {
        const bool branch_taken_0x22e784 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e784) {
            ctx->pc = 0x22E788u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22E784u;
            // 0x22e788: 0x8e240050  lw          $a0, 0x50($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22E7E0u;
            goto label_22e7e0;
        }
    }
    ctx->pc = 0x22E78Cu;
label_22e78c:
    // 0x22e78c: 0x52600013  beql        $s3, $zero, . + 4 + (0x13 << 2)
label_22e790:
    if (ctx->pc == 0x22E790u) {
        ctx->pc = 0x22E790u;
            // 0x22e790: 0xae2000b0  sw          $zero, 0xB0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 0));
        ctx->pc = 0x22E794u;
        goto label_22e794;
    }
    ctx->pc = 0x22E78Cu;
    {
        const bool branch_taken_0x22e78c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e78c) {
            ctx->pc = 0x22E790u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22E78Cu;
            // 0x22e790: 0xae2000b0  sw          $zero, 0xB0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22E7DCu;
            goto label_22e7dc;
        }
    }
    ctx->pc = 0x22E794u;
label_22e794:
    // 0x22e794: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x22e794u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_22e798:
    // 0x22e798: 0x8c52ea40  lw          $s2, -0x15C0($v0)
    ctx->pc = 0x22e798u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_22e79c:
    // 0x22e79c: 0x8e430030  lw          $v1, 0x30($s2)
    ctx->pc = 0x22e79cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_22e7a0:
    // 0x22e7a0: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x22e7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_22e7a4:
    // 0x22e7a4: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x22e7a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_22e7a8:
    // 0x22e7a8: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_22e7ac:
    if (ctx->pc == 0x22E7ACu) {
        ctx->pc = 0x22E7ACu;
            // 0x22e7ac: 0x8e420030  lw          $v0, 0x30($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
        ctx->pc = 0x22E7B0u;
        goto label_22e7b0;
    }
    ctx->pc = 0x22E7A8u;
    {
        const bool branch_taken_0x22e7a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22e7a8) {
            ctx->pc = 0x22E7ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22E7A8u;
            // 0x22e7ac: 0x8e420030  lw          $v0, 0x30($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22E7C4u;
            goto label_22e7c4;
        }
    }
    ctx->pc = 0x22E7B0u;
label_22e7b0:
    // 0x22e7b0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x22e7b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_22e7b4:
    // 0x22e7b4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x22e7b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22e7b8:
    // 0x22e7b8: 0xc0a79ec  jal         func_29E7B0
label_22e7bc:
    if (ctx->pc == 0x22E7BCu) {
        ctx->pc = 0x22E7BCu;
            // 0x22e7bc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22E7C0u;
        goto label_22e7c0;
    }
    ctx->pc = 0x22E7B8u;
    SET_GPR_U32(ctx, 31, 0x22E7C0u);
    ctx->pc = 0x22E7BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22E7B8u;
            // 0x22e7bc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29E7B0u;
    if (runtime->hasFunction(0x29E7B0u)) {
        auto targetFn = runtime->lookupFunction(0x29E7B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E7C0u; }
        if (ctx->pc != 0x22E7C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029E7B0_0x29e7b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E7C0u; }
        if (ctx->pc != 0x22E7C0u) { return; }
    }
    ctx->pc = 0x22E7C0u;
label_22e7c0:
    // 0x22e7c0: 0x8e420030  lw          $v0, 0x30($s2)
    ctx->pc = 0x22e7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_22e7c4:
    // 0x22e7c4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x22e7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_22e7c8:
    // 0x22e7c8: 0xae420030  sw          $v0, 0x30($s2)
    ctx->pc = 0x22e7c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 2));
label_22e7cc:
    // 0x22e7cc: 0x8e42002c  lw          $v0, 0x2C($s2)
    ctx->pc = 0x22e7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
label_22e7d0:
    // 0x22e7d0: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x22e7d0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_22e7d4:
    // 0x22e7d4: 0xae53002c  sw          $s3, 0x2C($s2)
    ctx->pc = 0x22e7d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 19));
label_22e7d8:
    // 0x22e7d8: 0xae2000b0  sw          $zero, 0xB0($s1)
    ctx->pc = 0x22e7d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 0));
label_22e7dc:
    // 0x22e7dc: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x22e7dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_22e7e0:
    // 0x22e7e0: 0x50800013  beql        $a0, $zero, . + 4 + (0x13 << 2)
label_22e7e4:
    if (ctx->pc == 0x22E7E4u) {
        ctx->pc = 0x22E7E4u;
            // 0x22e7e4: 0x8e2200f0  lw          $v0, 0xF0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
        ctx->pc = 0x22E7E8u;
        goto label_22e7e8;
    }
    ctx->pc = 0x22E7E0u;
    {
        const bool branch_taken_0x22e7e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e7e0) {
            ctx->pc = 0x22E7E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22E7E0u;
            // 0x22e7e4: 0x8e2200f0  lw          $v0, 0xF0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22E830u;
            goto label_22e830;
        }
    }
    ctx->pc = 0x22E7E8u;
label_22e7e8:
    // 0x22e7e8: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x22e7e8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_22e7ec:
    // 0x22e7ec: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
label_22e7f0:
    if (ctx->pc == 0x22E7F0u) {
        ctx->pc = 0x22E7F0u;
            // 0x22e7f0: 0xae200050  sw          $zero, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x22E7F4u;
        goto label_22e7f4;
    }
    ctx->pc = 0x22E7ECu;
    {
        const bool branch_taken_0x22e7ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e7ec) {
            ctx->pc = 0x22E7F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22E7ECu;
            // 0x22e7f0: 0xae200050  sw          $zero, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22E82Cu;
            goto label_22e82c;
        }
    }
    ctx->pc = 0x22E7F4u;
label_22e7f4:
    // 0x22e7f4: 0x84820006  lh          $v0, 0x6($a0)
    ctx->pc = 0x22e7f4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_22e7f8:
    // 0x22e7f8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x22e7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_22e7fc:
    // 0x22e7fc: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x22e7fcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
label_22e800:
    // 0x22e800: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x22e800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_22e804:
    // 0x22e804: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x22e804u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_22e808:
    // 0x22e808: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_22e80c:
    if (ctx->pc == 0x22E80Cu) {
        ctx->pc = 0x22E810u;
        goto label_22e810;
    }
    ctx->pc = 0x22E808u;
    {
        const bool branch_taken_0x22e808 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22e808) {
            ctx->pc = 0x22E828u;
            goto label_22e828;
        }
    }
    ctx->pc = 0x22E810u;
label_22e810:
    // 0x22e810: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_22e814:
    if (ctx->pc == 0x22E814u) {
        ctx->pc = 0x22E818u;
        goto label_22e818;
    }
    ctx->pc = 0x22E810u;
    {
        const bool branch_taken_0x22e810 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e810) {
            ctx->pc = 0x22E828u;
            goto label_22e828;
        }
    }
    ctx->pc = 0x22E818u;
label_22e818:
    // 0x22e818: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x22e818u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_22e81c:
    // 0x22e81c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x22e81cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_22e820:
    // 0x22e820: 0x320f809  jalr        $t9
label_22e824:
    if (ctx->pc == 0x22E824u) {
        ctx->pc = 0x22E824u;
            // 0x22e824: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x22E828u;
        goto label_22e828;
    }
    ctx->pc = 0x22E820u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x22E828u);
        ctx->pc = 0x22E824u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22E820u;
            // 0x22e824: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x22E828u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x22E828u; }
            if (ctx->pc != 0x22E828u) { return; }
        }
        }
    }
    ctx->pc = 0x22E828u;
label_22e828:
    // 0x22e828: 0xae200050  sw          $zero, 0x50($s1)
    ctx->pc = 0x22e828u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
label_22e82c:
    // 0x22e82c: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x22e82cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_22e830:
    // 0x22e830: 0x1840000f  blez        $v0, . + 4 + (0xF << 2)
label_22e834:
    if (ctx->pc == 0x22E834u) {
        ctx->pc = 0x22E834u;
            // 0x22e834: 0x26320028  addiu       $s2, $s1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
        ctx->pc = 0x22E838u;
        goto label_22e838;
    }
    ctx->pc = 0x22E830u;
    {
        const bool branch_taken_0x22e830 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x22E834u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22E830u;
            // 0x22e834: 0x26320028  addiu       $s2, $s1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e830) {
            ctx->pc = 0x22E870u;
            goto label_22e870;
        }
    }
    ctx->pc = 0x22E838u;
label_22e838:
    // 0x22e838: 0x8e2200ec  lw          $v0, 0xEC($s1)
    ctx->pc = 0x22e838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 236)));
label_22e83c:
    // 0x22e83c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x22e83cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_22e840:
    // 0x22e840: 0xc08c8fc  jal         func_2323F0
label_22e844:
    if (ctx->pc == 0x22E844u) {
        ctx->pc = 0x22E844u;
            // 0x22e844: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22E848u;
        goto label_22e848;
    }
    ctx->pc = 0x22E840u;
    SET_GPR_U32(ctx, 31, 0x22E848u);
    ctx->pc = 0x22E844u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22E840u;
            // 0x22e844: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2323F0u;
    if (runtime->hasFunction(0x2323F0u)) {
        auto targetFn = runtime->lookupFunction(0x2323F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E848u; }
        if (ctx->pc != 0x22E848u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002323F0_0x2323f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E848u; }
        if (ctx->pc != 0x22E848u) { return; }
    }
    ctx->pc = 0x22E848u;
label_22e848:
    // 0x22e848: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x22e848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_22e84c:
    // 0x22e84c: 0x1c40fffa  bgtz        $v0, . + 4 + (-0x6 << 2)
label_22e850:
    if (ctx->pc == 0x22E850u) {
        ctx->pc = 0x22E854u;
        goto label_22e854;
    }
    ctx->pc = 0x22E84Cu;
    {
        const bool branch_taken_0x22e84c = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x22e84c) {
            ctx->pc = 0x22E838u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22e838;
        }
    }
    ctx->pc = 0x22E854u;
label_22e854:
    // 0x22e854: 0x10000006  b           . + 4 + (0x6 << 2)
label_22e858:
    if (ctx->pc == 0x22E858u) {
        ctx->pc = 0x22E85Cu;
        goto label_22e85c;
    }
    ctx->pc = 0x22E854u;
    {
        const bool branch_taken_0x22e854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e854) {
            ctx->pc = 0x22E870u;
            goto label_22e870;
        }
    }
    ctx->pc = 0x22E85Cu;
label_22e85c:
    // 0x22e85c: 0x27a4005c  addiu       $a0, $sp, 0x5C
    ctx->pc = 0x22e85cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
label_22e860:
    // 0x22e860: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x22e860u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_22e864:
    // 0x22e864: 0xc08c3f4  jal         func_230FD0
label_22e868:
    if (ctx->pc == 0x22E868u) {
        ctx->pc = 0x22E868u;
            // 0x22e868: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22E86Cu;
        goto label_22e86c;
    }
    ctx->pc = 0x22E864u;
    SET_GPR_U32(ctx, 31, 0x22E86Cu);
    ctx->pc = 0x22E868u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22E864u;
            // 0x22e868: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x230FD0u;
    if (runtime->hasFunction(0x230FD0u)) {
        auto targetFn = runtime->lookupFunction(0x230FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E86Cu; }
        if (ctx->pc != 0x22E86Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00230FD0_0x230fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E86Cu; }
        if (ctx->pc != 0x22E86Cu) { return; }
    }
    ctx->pc = 0x22E86Cu;
label_22e86c:
    // 0x22e86c: 0x0  nop
    ctx->pc = 0x22e86cu;
    // NOP
label_22e870:
    // 0x22e870: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x22e870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_22e874:
    // 0x22e874: 0x18400006  blez        $v0, . + 4 + (0x6 << 2)
label_22e878:
    if (ctx->pc == 0x22E878u) {
        ctx->pc = 0x22E87Cu;
        goto label_22e87c;
    }
    ctx->pc = 0x22E874u;
    {
        const bool branch_taken_0x22e874 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x22e874) {
            ctx->pc = 0x22E890u;
            goto label_22e890;
        }
    }
    ctx->pc = 0x22E87Cu;
label_22e87c:
    // 0x22e87c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x22e87cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_22e880:
    // 0x22e880: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x22e880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_22e884:
    // 0x22e884: 0x8c620050  lw          $v0, 0x50($v1)
    ctx->pc = 0x22e884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
label_22e888:
    // 0x22e888: 0x5440fff4  bnel        $v0, $zero, . + 4 + (-0xC << 2)
label_22e88c:
    if (ctx->pc == 0x22E88Cu) {
        ctx->pc = 0x22E88Cu;
            // 0x22e88c: 0x8c62004c  lw          $v0, 0x4C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
        ctx->pc = 0x22E890u;
        goto label_22e890;
    }
    ctx->pc = 0x22E888u;
    {
        const bool branch_taken_0x22e888 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22e888) {
            ctx->pc = 0x22E88Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22E888u;
            // 0x22e88c: 0x8c62004c  lw          $v0, 0x4C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22E85Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22e85c;
        }
    }
    ctx->pc = 0x22E890u;
label_22e890:
    // 0x22e890: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x22e890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_22e894:
    // 0x22e894: 0x1840000c  blez        $v0, . + 4 + (0xC << 2)
label_22e898:
    if (ctx->pc == 0x22E898u) {
        ctx->pc = 0x22E89Cu;
        goto label_22e89c;
    }
    ctx->pc = 0x22E894u;
    {
        const bool branch_taken_0x22e894 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x22e894) {
            ctx->pc = 0x22E8C8u;
            goto label_22e8c8;
        }
    }
    ctx->pc = 0x22E89Cu;
label_22e89c:
    // 0x22e89c: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x22e89cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_22e8a0:
    // 0x22e8a0: 0x27a40058  addiu       $a0, $sp, 0x58
    ctx->pc = 0x22e8a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
label_22e8a4:
    // 0x22e8a4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x22e8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_22e8a8:
    // 0x22e8a8: 0x8c42004c  lw          $v0, 0x4C($v0)
    ctx->pc = 0x22e8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_22e8ac:
    // 0x22e8ac: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x22e8acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_22e8b0:
    // 0x22e8b0: 0xc08c3f4  jal         func_230FD0
label_22e8b4:
    if (ctx->pc == 0x22E8B4u) {
        ctx->pc = 0x22E8B4u;
            // 0x22e8b4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22E8B8u;
        goto label_22e8b8;
    }
    ctx->pc = 0x22E8B0u;
    SET_GPR_U32(ctx, 31, 0x22E8B8u);
    ctx->pc = 0x22E8B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22E8B0u;
            // 0x22e8b4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x230FD0u;
    if (runtime->hasFunction(0x230FD0u)) {
        auto targetFn = runtime->lookupFunction(0x230FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E8B8u; }
        if (ctx->pc != 0x22E8B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00230FD0_0x230fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E8B8u; }
        if (ctx->pc != 0x22E8B8u) { return; }
    }
    ctx->pc = 0x22E8B8u;
label_22e8b8:
    // 0x22e8b8: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x22e8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_22e8bc:
    // 0x22e8bc: 0x5c40fff8  bgtzl       $v0, . + 4 + (-0x8 << 2)
label_22e8c0:
    if (ctx->pc == 0x22E8C0u) {
        ctx->pc = 0x22E8C0u;
            // 0x22e8c0: 0x8e220034  lw          $v0, 0x34($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
        ctx->pc = 0x22E8C4u;
        goto label_22e8c4;
    }
    ctx->pc = 0x22E8BCu;
    {
        const bool branch_taken_0x22e8bc = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x22e8bc) {
            ctx->pc = 0x22E8C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22E8BCu;
            // 0x22e8c0: 0x8e220034  lw          $v0, 0x34($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22E8A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22e8a0;
        }
    }
    ctx->pc = 0x22E8C4u;
label_22e8c4:
    // 0x22e8c4: 0x0  nop
    ctx->pc = 0x22e8c4u;
    // NOP
label_22e8c8:
    // 0x22e8c8: 0x822200c4  lb          $v0, 0xC4($s1)
    ctx->pc = 0x22e8c8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 196)));
label_22e8cc:
    // 0x22e8cc: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
label_22e8d0:
    if (ctx->pc == 0x22E8D0u) {
        ctx->pc = 0x22E8D0u;
            // 0x22e8d0: 0x8e260024  lw          $a2, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->pc = 0x22E8D4u;
        goto label_22e8d4;
    }
    ctx->pc = 0x22E8CCu;
    {
        const bool branch_taken_0x22e8cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22e8cc) {
            ctx->pc = 0x22E8D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22E8CCu;
            // 0x22e8d0: 0x8e260024  lw          $a2, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22E934u;
            goto label_22e934;
        }
    }
    ctx->pc = 0x22E8D4u;
label_22e8d4:
    // 0x22e8d4: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x22e8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_22e8d8:
    // 0x22e8d8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x22e8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_22e8dc:
    // 0x22e8dc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x22e8dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_22e8e0:
    // 0x22e8e0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x22e8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_22e8e4:
    // 0x22e8e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x22e8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_22e8e8:
    // 0x22e8e8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x22e8e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_22e8ec:
    // 0x22e8ec: 0xc090728  jal         func_241CA0
label_22e8f0:
    if (ctx->pc == 0x22E8F0u) {
        ctx->pc = 0x22E8F0u;
            // 0x22e8f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22E8F4u;
        goto label_22e8f4;
    }
    ctx->pc = 0x22E8ECu;
    SET_GPR_U32(ctx, 31, 0x22E8F4u);
    ctx->pc = 0x22E8F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22E8ECu;
            // 0x22e8f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x241CA0u;
    if (runtime->hasFunction(0x241CA0u)) {
        auto targetFn = runtime->lookupFunction(0x241CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E8F4u; }
        if (ctx->pc != 0x22E8F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00241CA0_0x241ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E8F4u; }
        if (ctx->pc != 0x22E8F4u) { return; }
    }
    ctx->pc = 0x22E8F4u;
label_22e8f4:
    // 0x22e8f4: 0x8e23002c  lw          $v1, 0x2C($s1)
    ctx->pc = 0x22e8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_22e8f8:
    // 0x22e8f8: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x22e8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_22e8fc:
    // 0x22e8fc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x22e8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_22e900:
    // 0x22e900: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x22e900u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_22e904:
    // 0x22e904: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x22e904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_22e908:
    // 0x22e908: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x22e908u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_22e90c:
    // 0x22e90c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_22e910:
    if (ctx->pc == 0x22E910u) {
        ctx->pc = 0x22E910u;
            // 0x22e910: 0x8e22002c  lw          $v0, 0x2C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
        ctx->pc = 0x22E914u;
        goto label_22e914;
    }
    ctx->pc = 0x22E90Cu;
    {
        const bool branch_taken_0x22e90c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e90c) {
            ctx->pc = 0x22E910u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22E90Cu;
            // 0x22e910: 0x8e22002c  lw          $v0, 0x2C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22E928u;
            goto label_22e928;
        }
    }
    ctx->pc = 0x22E914u;
label_22e914:
    // 0x22e914: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x22e914u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_22e918:
    // 0x22e918: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x22e918u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_22e91c:
    // 0x22e91c: 0x320f809  jalr        $t9
label_22e920:
    if (ctx->pc == 0x22E920u) {
        ctx->pc = 0x22E920u;
            // 0x22e920: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x22E924u;
        goto label_22e924;
    }
    ctx->pc = 0x22E91Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x22E924u);
        ctx->pc = 0x22E920u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22E91Cu;
            // 0x22e920: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x22E924u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x22E924u; }
            if (ctx->pc != 0x22E924u) { return; }
        }
        }
    }
    ctx->pc = 0x22E924u;
label_22e924:
    // 0x22e924: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x22e924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_22e928:
    // 0x22e928: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x22e928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_22e92c:
    // 0x22e92c: 0xae22002c  sw          $v0, 0x2C($s1)
    ctx->pc = 0x22e92cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 2));
label_22e930:
    // 0x22e930: 0x8e260024  lw          $a2, 0x24($s1)
    ctx->pc = 0x22e930u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_22e934:
    // 0x22e934: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x22e934u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
label_22e938:
    // 0x22e938: 0xc08c3f4  jal         func_230FD0
label_22e93c:
    if (ctx->pc == 0x22E93Cu) {
        ctx->pc = 0x22E93Cu;
            // 0x22e93c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22E940u;
        goto label_22e940;
    }
    ctx->pc = 0x22E938u;
    SET_GPR_U32(ctx, 31, 0x22E940u);
    ctx->pc = 0x22E93Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22E938u;
            // 0x22e93c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x230FD0u;
    if (runtime->hasFunction(0x230FD0u)) {
        auto targetFn = runtime->lookupFunction(0x230FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E940u; }
        if (ctx->pc != 0x22E940u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00230FD0_0x230fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E940u; }
        if (ctx->pc != 0x22E940u) { return; }
    }
    ctx->pc = 0x22E940u;
label_22e940:
    // 0x22e940: 0xae200024  sw          $zero, 0x24($s1)
    ctx->pc = 0x22e940u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
label_22e944:
    // 0x22e944: 0x8e250020  lw          $a1, 0x20($s1)
    ctx->pc = 0x22e944u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_22e948:
    // 0x22e948: 0x8ca20050  lw          $v0, 0x50($a1)
    ctx->pc = 0x22e948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 80)));
label_22e94c:
    // 0x22e94c: 0x1840000a  blez        $v0, . + 4 + (0xA << 2)
label_22e950:
    if (ctx->pc == 0x22E950u) {
        ctx->pc = 0x22E954u;
        goto label_22e954;
    }
    ctx->pc = 0x22E94Cu;
    {
        const bool branch_taken_0x22e94c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x22e94c) {
            ctx->pc = 0x22E978u;
            goto label_22e978;
        }
    }
    ctx->pc = 0x22E954u;
label_22e954:
    // 0x22e954: 0x8ca2004c  lw          $v0, 0x4C($a1)
    ctx->pc = 0x22e954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 76)));
label_22e958:
    // 0x22e958: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x22e958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_22e95c:
    // 0x22e95c: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x22e95cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_22e960:
    // 0x22e960: 0xc08c3f4  jal         func_230FD0
label_22e964:
    if (ctx->pc == 0x22E964u) {
        ctx->pc = 0x22E964u;
            // 0x22e964: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22E968u;
        goto label_22e968;
    }
    ctx->pc = 0x22E960u;
    SET_GPR_U32(ctx, 31, 0x22E968u);
    ctx->pc = 0x22E964u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22E960u;
            // 0x22e964: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x230FD0u;
    if (runtime->hasFunction(0x230FD0u)) {
        auto targetFn = runtime->lookupFunction(0x230FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E968u; }
        if (ctx->pc != 0x22E968u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00230FD0_0x230fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E968u; }
        if (ctx->pc != 0x22E968u) { return; }
    }
    ctx->pc = 0x22E968u;
label_22e968:
    // 0x22e968: 0x8e250020  lw          $a1, 0x20($s1)
    ctx->pc = 0x22e968u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_22e96c:
    // 0x22e96c: 0x8ca20050  lw          $v0, 0x50($a1)
    ctx->pc = 0x22e96cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 80)));
label_22e970:
    // 0x22e970: 0x5c40fff9  bgtzl       $v0, . + 4 + (-0x7 << 2)
label_22e974:
    if (ctx->pc == 0x22E974u) {
        ctx->pc = 0x22E974u;
            // 0x22e974: 0x8ca2004c  lw          $v0, 0x4C($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 76)));
        ctx->pc = 0x22E978u;
        goto label_22e978;
    }
    ctx->pc = 0x22E970u;
    {
        const bool branch_taken_0x22e970 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x22e970) {
            ctx->pc = 0x22E974u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22E970u;
            // 0x22e974: 0x8ca2004c  lw          $v0, 0x4C($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 76)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22E958u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22e958;
        }
    }
    ctx->pc = 0x22E978u;
label_22e978:
    // 0x22e978: 0xc090728  jal         func_241CA0
label_22e97c:
    if (ctx->pc == 0x22E97Cu) {
        ctx->pc = 0x22E97Cu;
            // 0x22e97c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22E980u;
        goto label_22e980;
    }
    ctx->pc = 0x22E978u;
    SET_GPR_U32(ctx, 31, 0x22E980u);
    ctx->pc = 0x22E97Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22E978u;
            // 0x22e97c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x241CA0u;
    if (runtime->hasFunction(0x241CA0u)) {
        auto targetFn = runtime->lookupFunction(0x241CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E980u; }
        if (ctx->pc != 0x22E980u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00241CA0_0x241ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E980u; }
        if (ctx->pc != 0x22E980u) { return; }
    }
    ctx->pc = 0x22E980u;
label_22e980:
    // 0x22e980: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x22e980u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_22e984:
    // 0x22e984: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_22e988:
    if (ctx->pc == 0x22E988u) {
        ctx->pc = 0x22E988u;
            // 0x22e988: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22E98Cu;
        goto label_22e98c;
    }
    ctx->pc = 0x22E984u;
    {
        const bool branch_taken_0x22e984 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e984) {
            ctx->pc = 0x22E988u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22E984u;
            // 0x22e988: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22E9A0u;
            goto label_22e9a0;
        }
    }
    ctx->pc = 0x22E98Cu;
label_22e98c:
    // 0x22e98c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x22e98cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_22e990:
    // 0x22e990: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x22e990u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_22e994:
    // 0x22e994: 0x320f809  jalr        $t9
label_22e998:
    if (ctx->pc == 0x22E998u) {
        ctx->pc = 0x22E998u;
            // 0x22e998: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x22E99Cu;
        goto label_22e99c;
    }
    ctx->pc = 0x22E994u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x22E99Cu);
        ctx->pc = 0x22E998u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22E994u;
            // 0x22e998: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x22E99Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x22E99Cu; }
            if (ctx->pc != 0x22E99Cu) { return; }
        }
        }
    }
    ctx->pc = 0x22E99Cu;
label_22e99c:
    // 0x22e99c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22e99cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22e9a0:
    // 0x22e9a0: 0xc08e744  jal         func_239D10
label_22e9a4:
    if (ctx->pc == 0x22E9A4u) {
        ctx->pc = 0x22E9A4u;
            // 0x22e9a4: 0xae200020  sw          $zero, 0x20($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
        ctx->pc = 0x22E9A8u;
        goto label_22e9a8;
    }
    ctx->pc = 0x22E9A0u;
    SET_GPR_U32(ctx, 31, 0x22E9A8u);
    ctx->pc = 0x22E9A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22E9A0u;
            // 0x22e9a4: 0xae200020  sw          $zero, 0x20($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239D10u;
    if (runtime->hasFunction(0x239D10u)) {
        auto targetFn = runtime->lookupFunction(0x239D10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E9A8u; }
        if (ctx->pc != 0x22E9A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00239D10_0x239d10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E9A8u; }
        if (ctx->pc != 0x22E9A8u) { return; }
    }
    ctx->pc = 0x22E9A8u;
label_22e9a8:
    // 0x22e9a8: 0x8e240054  lw          $a0, 0x54($s1)
    ctx->pc = 0x22e9a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_22e9ac:
    // 0x22e9ac: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x22e9acu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_22e9b0:
    // 0x22e9b0: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
label_22e9b4:
    if (ctx->pc == 0x22E9B4u) {
        ctx->pc = 0x22E9B4u;
            // 0x22e9b4: 0xae200054  sw          $zero, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 0));
        ctx->pc = 0x22E9B8u;
        goto label_22e9b8;
    }
    ctx->pc = 0x22E9B0u;
    {
        const bool branch_taken_0x22e9b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e9b0) {
            ctx->pc = 0x22E9B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22E9B0u;
            // 0x22e9b4: 0xae200054  sw          $zero, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22E9F0u;
            goto label_22e9f0;
        }
    }
    ctx->pc = 0x22E9B8u;
label_22e9b8:
    // 0x22e9b8: 0x84820006  lh          $v0, 0x6($a0)
    ctx->pc = 0x22e9b8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_22e9bc:
    // 0x22e9bc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x22e9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_22e9c0:
    // 0x22e9c0: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x22e9c0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
label_22e9c4:
    // 0x22e9c4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x22e9c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_22e9c8:
    // 0x22e9c8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x22e9c8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_22e9cc:
    // 0x22e9cc: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_22e9d0:
    if (ctx->pc == 0x22E9D0u) {
        ctx->pc = 0x22E9D4u;
        goto label_22e9d4;
    }
    ctx->pc = 0x22E9CCu;
    {
        const bool branch_taken_0x22e9cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22e9cc) {
            ctx->pc = 0x22E9ECu;
            goto label_22e9ec;
        }
    }
    ctx->pc = 0x22E9D4u;
label_22e9d4:
    // 0x22e9d4: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_22e9d8:
    if (ctx->pc == 0x22E9D8u) {
        ctx->pc = 0x22E9DCu;
        goto label_22e9dc;
    }
    ctx->pc = 0x22E9D4u;
    {
        const bool branch_taken_0x22e9d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e9d4) {
            ctx->pc = 0x22E9ECu;
            goto label_22e9ec;
        }
    }
    ctx->pc = 0x22E9DCu;
label_22e9dc:
    // 0x22e9dc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x22e9dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_22e9e0:
    // 0x22e9e0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x22e9e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_22e9e4:
    // 0x22e9e4: 0x320f809  jalr        $t9
label_22e9e8:
    if (ctx->pc == 0x22E9E8u) {
        ctx->pc = 0x22E9E8u;
            // 0x22e9e8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x22E9ECu;
        goto label_22e9ec;
    }
    ctx->pc = 0x22E9E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x22E9ECu);
        ctx->pc = 0x22E9E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22E9E4u;
            // 0x22e9e8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x22E9ECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x22E9ECu; }
            if (ctx->pc != 0x22E9ECu) { return; }
        }
        }
    }
    ctx->pc = 0x22E9ECu;
label_22e9ec:
    // 0x22e9ec: 0xae200054  sw          $zero, 0x54($s1)
    ctx->pc = 0x22e9ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 0));
label_22e9f0:
    // 0x22e9f0: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x22e9f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_22e9f4:
    // 0x22e9f4: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x22e9f4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_22e9f8:
    // 0x22e9f8: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
label_22e9fc:
    if (ctx->pc == 0x22E9FCu) {
        ctx->pc = 0x22E9FCu;
            // 0x22e9fc: 0xae200074  sw          $zero, 0x74($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 0));
        ctx->pc = 0x22EA00u;
        goto label_22ea00;
    }
    ctx->pc = 0x22E9F8u;
    {
        const bool branch_taken_0x22e9f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e9f8) {
            ctx->pc = 0x22E9FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22E9F8u;
            // 0x22e9fc: 0xae200074  sw          $zero, 0x74($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22EA38u;
            goto label_22ea38;
        }
    }
    ctx->pc = 0x22EA00u;
label_22ea00:
    // 0x22ea00: 0x84820006  lh          $v0, 0x6($a0)
    ctx->pc = 0x22ea00u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_22ea04:
    // 0x22ea04: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x22ea04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_22ea08:
    // 0x22ea08: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x22ea08u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
label_22ea0c:
    // 0x22ea0c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x22ea0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_22ea10:
    // 0x22ea10: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x22ea10u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_22ea14:
    // 0x22ea14: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_22ea18:
    if (ctx->pc == 0x22EA18u) {
        ctx->pc = 0x22EA1Cu;
        goto label_22ea1c;
    }
    ctx->pc = 0x22EA14u;
    {
        const bool branch_taken_0x22ea14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22ea14) {
            ctx->pc = 0x22EA34u;
            goto label_22ea34;
        }
    }
    ctx->pc = 0x22EA1Cu;
label_22ea1c:
    // 0x22ea1c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_22ea20:
    if (ctx->pc == 0x22EA20u) {
        ctx->pc = 0x22EA24u;
        goto label_22ea24;
    }
    ctx->pc = 0x22EA1Cu;
    {
        const bool branch_taken_0x22ea1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x22ea1c) {
            ctx->pc = 0x22EA34u;
            goto label_22ea34;
        }
    }
    ctx->pc = 0x22EA24u;
label_22ea24:
    // 0x22ea24: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x22ea24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_22ea28:
    // 0x22ea28: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x22ea28u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_22ea2c:
    // 0x22ea2c: 0x320f809  jalr        $t9
label_22ea30:
    if (ctx->pc == 0x22EA30u) {
        ctx->pc = 0x22EA30u;
            // 0x22ea30: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x22EA34u;
        goto label_22ea34;
    }
    ctx->pc = 0x22EA2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x22EA34u);
        ctx->pc = 0x22EA30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22EA2Cu;
            // 0x22ea30: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x22EA34u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x22EA34u; }
            if (ctx->pc != 0x22EA34u) { return; }
        }
        }
    }
    ctx->pc = 0x22EA34u;
label_22ea34:
    // 0x22ea34: 0xae200074  sw          $zero, 0x74($s1)
    ctx->pc = 0x22ea34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 0));
label_22ea38:
    // 0x22ea38: 0x8e240058  lw          $a0, 0x58($s1)
    ctx->pc = 0x22ea38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_22ea3c:
    // 0x22ea3c: 0xc07fb0c  jal         func_1FEC30
label_22ea40:
    if (ctx->pc == 0x22EA40u) {
        ctx->pc = 0x22EA40u;
            // 0x22ea40: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x22EA44u;
        goto label_22ea44;
    }
    ctx->pc = 0x22EA3Cu;
    SET_GPR_U32(ctx, 31, 0x22EA44u);
    ctx->pc = 0x22EA40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22EA3Cu;
            // 0x22ea40: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (runtime->hasFunction(0x1FEC30u)) {
        auto targetFn = runtime->lookupFunction(0x1FEC30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22EA44u; }
        if (ctx->pc != 0x22EA44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FEC30_0x1fec30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22EA44u; }
        if (ctx->pc != 0x22EA44u) { return; }
    }
    ctx->pc = 0x22EA44u;
label_22ea44:
    // 0x22ea44: 0x8e240194  lw          $a0, 0x194($s1)
    ctx->pc = 0x22ea44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 404)));
label_22ea48:
    // 0x22ea48: 0x50800012  beql        $a0, $zero, . + 4 + (0x12 << 2)
label_22ea4c:
    if (ctx->pc == 0x22EA4Cu) {
        ctx->pc = 0x22EA4Cu;
            // 0x22ea4c: 0x8e24005c  lw          $a0, 0x5C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
        ctx->pc = 0x22EA50u;
        goto label_22ea50;
    }
    ctx->pc = 0x22EA48u;
    {
        const bool branch_taken_0x22ea48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x22ea48) {
            ctx->pc = 0x22EA4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22EA48u;
            // 0x22ea4c: 0x8e24005c  lw          $a0, 0x5C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22EA94u;
            goto label_22ea94;
        }
    }
    ctx->pc = 0x22EA50u;
label_22ea50:
    // 0x22ea50: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x22ea50u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_22ea54:
    // 0x22ea54: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_22ea58:
    if (ctx->pc == 0x22EA58u) {
        ctx->pc = 0x22EA5Cu;
        goto label_22ea5c;
    }
    ctx->pc = 0x22EA54u;
    {
        const bool branch_taken_0x22ea54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22ea54) {
            ctx->pc = 0x22EA90u;
            goto label_22ea90;
        }
    }
    ctx->pc = 0x22EA5Cu;
label_22ea5c:
    // 0x22ea5c: 0x84820006  lh          $v0, 0x6($a0)
    ctx->pc = 0x22ea5cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_22ea60:
    // 0x22ea60: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x22ea60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_22ea64:
    // 0x22ea64: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x22ea64u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
label_22ea68:
    // 0x22ea68: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x22ea68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_22ea6c:
    // 0x22ea6c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x22ea6cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_22ea70:
    // 0x22ea70: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_22ea74:
    if (ctx->pc == 0x22EA74u) {
        ctx->pc = 0x22EA78u;
        goto label_22ea78;
    }
    ctx->pc = 0x22EA70u;
    {
        const bool branch_taken_0x22ea70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22ea70) {
            ctx->pc = 0x22EA90u;
            goto label_22ea90;
        }
    }
    ctx->pc = 0x22EA78u;
label_22ea78:
    // 0x22ea78: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_22ea7c:
    if (ctx->pc == 0x22EA7Cu) {
        ctx->pc = 0x22EA80u;
        goto label_22ea80;
    }
    ctx->pc = 0x22EA78u;
    {
        const bool branch_taken_0x22ea78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x22ea78) {
            ctx->pc = 0x22EA90u;
            goto label_22ea90;
        }
    }
    ctx->pc = 0x22EA80u;
label_22ea80:
    // 0x22ea80: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x22ea80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_22ea84:
    // 0x22ea84: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x22ea84u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_22ea88:
    // 0x22ea88: 0x320f809  jalr        $t9
label_22ea8c:
    if (ctx->pc == 0x22EA8Cu) {
        ctx->pc = 0x22EA8Cu;
            // 0x22ea8c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x22EA90u;
        goto label_22ea90;
    }
    ctx->pc = 0x22EA88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x22EA90u);
        ctx->pc = 0x22EA8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22EA88u;
            // 0x22ea8c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x22EA90u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x22EA90u; }
            if (ctx->pc != 0x22EA90u) { return; }
        }
        }
    }
    ctx->pc = 0x22EA90u;
label_22ea90:
    // 0x22ea90: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x22ea90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_22ea94:
    // 0x22ea94: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_22ea98:
    if (ctx->pc == 0x22EA98u) {
        ctx->pc = 0x22EA98u;
            // 0x22ea98: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x22EA9Cu;
        goto label_22ea9c;
    }
    ctx->pc = 0x22EA94u;
    {
        const bool branch_taken_0x22ea94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x22ea94) {
            ctx->pc = 0x22EA98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22EA94u;
            // 0x22ea98: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22EAB0u;
            goto label_22eab0;
        }
    }
    ctx->pc = 0x22EA9Cu;
label_22ea9c:
    // 0x22ea9c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x22ea9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_22eaa0:
    // 0x22eaa0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x22eaa0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_22eaa4:
    // 0x22eaa4: 0x320f809  jalr        $t9
label_22eaa8:
    if (ctx->pc == 0x22EAA8u) {
        ctx->pc = 0x22EAA8u;
            // 0x22eaa8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x22EAACu;
        goto label_22eaac;
    }
    ctx->pc = 0x22EAA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x22EAACu);
        ctx->pc = 0x22EAA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22EAA4u;
            // 0x22eaa8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x22EAACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x22EAACu; }
            if (ctx->pc != 0x22EAACu) { return; }
        }
        }
    }
    ctx->pc = 0x22EAACu;
label_22eaac:
    // 0x22eaac: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x22eaacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_22eab0:
    // 0x22eab0: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_22eab4:
    if (ctx->pc == 0x22EAB4u) {
        ctx->pc = 0x22EAB4u;
            // 0x22eab4: 0x8e240064  lw          $a0, 0x64($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
        ctx->pc = 0x22EAB8u;
        goto label_22eab8;
    }
    ctx->pc = 0x22EAB0u;
    {
        const bool branch_taken_0x22eab0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x22eab0) {
            ctx->pc = 0x22EAB4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22EAB0u;
            // 0x22eab4: 0x8e240064  lw          $a0, 0x64($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22EACCu;
            goto label_22eacc;
        }
    }
    ctx->pc = 0x22EAB8u;
label_22eab8:
    // 0x22eab8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x22eab8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_22eabc:
    // 0x22eabc: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x22eabcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_22eac0:
    // 0x22eac0: 0x320f809  jalr        $t9
label_22eac4:
    if (ctx->pc == 0x22EAC4u) {
        ctx->pc = 0x22EAC4u;
            // 0x22eac4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x22EAC8u;
        goto label_22eac8;
    }
    ctx->pc = 0x22EAC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x22EAC8u);
        ctx->pc = 0x22EAC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22EAC0u;
            // 0x22eac4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x22EAC8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x22EAC8u; }
            if (ctx->pc != 0x22EAC8u) { return; }
        }
        }
    }
    ctx->pc = 0x22EAC8u;
label_22eac8:
    // 0x22eac8: 0x8e240064  lw          $a0, 0x64($s1)
    ctx->pc = 0x22eac8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
label_22eacc:
    // 0x22eacc: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_22ead0:
    if (ctx->pc == 0x22EAD0u) {
        ctx->pc = 0x22EAD0u;
            // 0x22ead0: 0x8e240070  lw          $a0, 0x70($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
        ctx->pc = 0x22EAD4u;
        goto label_22ead4;
    }
    ctx->pc = 0x22EACCu;
    {
        const bool branch_taken_0x22eacc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x22eacc) {
            ctx->pc = 0x22EAD0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22EACCu;
            // 0x22ead0: 0x8e240070  lw          $a0, 0x70($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22EAE8u;
            goto label_22eae8;
        }
    }
    ctx->pc = 0x22EAD4u;
label_22ead4:
    // 0x22ead4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x22ead4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_22ead8:
    // 0x22ead8: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x22ead8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_22eadc:
    // 0x22eadc: 0x320f809  jalr        $t9
label_22eae0:
    if (ctx->pc == 0x22EAE0u) {
        ctx->pc = 0x22EAE0u;
            // 0x22eae0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x22EAE4u;
        goto label_22eae4;
    }
    ctx->pc = 0x22EADCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x22EAE4u);
        ctx->pc = 0x22EAE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22EADCu;
            // 0x22eae0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x22EAE4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x22EAE4u; }
            if (ctx->pc != 0x22EAE4u) { return; }
        }
        }
    }
    ctx->pc = 0x22EAE4u;
label_22eae4:
    // 0x22eae4: 0x8e240070  lw          $a0, 0x70($s1)
    ctx->pc = 0x22eae4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
label_22eae8:
    // 0x22eae8: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x22eae8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_22eaec:
    // 0x22eaec: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
label_22eaf0:
    if (ctx->pc == 0x22EAF0u) {
        ctx->pc = 0x22EAF0u;
            // 0x22eaf0: 0x8e240078  lw          $a0, 0x78($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
        ctx->pc = 0x22EAF4u;
        goto label_22eaf4;
    }
    ctx->pc = 0x22EAECu;
    {
        const bool branch_taken_0x22eaec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22eaec) {
            ctx->pc = 0x22EAF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22EAECu;
            // 0x22eaf0: 0x8e240078  lw          $a0, 0x78($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22EB2Cu;
            goto label_22eb2c;
        }
    }
    ctx->pc = 0x22EAF4u;
label_22eaf4:
    // 0x22eaf4: 0x84820006  lh          $v0, 0x6($a0)
    ctx->pc = 0x22eaf4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_22eaf8:
    // 0x22eaf8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x22eaf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_22eafc:
    // 0x22eafc: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x22eafcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
label_22eb00:
    // 0x22eb00: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x22eb00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_22eb04:
    // 0x22eb04: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x22eb04u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_22eb08:
    // 0x22eb08: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_22eb0c:
    if (ctx->pc == 0x22EB0Cu) {
        ctx->pc = 0x22EB10u;
        goto label_22eb10;
    }
    ctx->pc = 0x22EB08u;
    {
        const bool branch_taken_0x22eb08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22eb08) {
            ctx->pc = 0x22EB28u;
            goto label_22eb28;
        }
    }
    ctx->pc = 0x22EB10u;
label_22eb10:
    // 0x22eb10: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_22eb14:
    if (ctx->pc == 0x22EB14u) {
        ctx->pc = 0x22EB18u;
        goto label_22eb18;
    }
    ctx->pc = 0x22EB10u;
    {
        const bool branch_taken_0x22eb10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x22eb10) {
            ctx->pc = 0x22EB28u;
            goto label_22eb28;
        }
    }
    ctx->pc = 0x22EB18u;
label_22eb18:
    // 0x22eb18: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x22eb18u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_22eb1c:
    // 0x22eb1c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x22eb1cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_22eb20:
    // 0x22eb20: 0x320f809  jalr        $t9
label_22eb24:
    if (ctx->pc == 0x22EB24u) {
        ctx->pc = 0x22EB24u;
            // 0x22eb24: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x22EB28u;
        goto label_22eb28;
    }
    ctx->pc = 0x22EB20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x22EB28u);
        ctx->pc = 0x22EB24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22EB20u;
            // 0x22eb24: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x22EB28u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x22EB28u; }
            if (ctx->pc != 0x22EB28u) { return; }
        }
        }
    }
    ctx->pc = 0x22EB28u;
label_22eb28:
    // 0x22eb28: 0x8e240078  lw          $a0, 0x78($s1)
    ctx->pc = 0x22eb28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
label_22eb2c:
    // 0x22eb2c: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x22eb2cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_22eb30:
    // 0x22eb30: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
label_22eb34:
    if (ctx->pc == 0x22EB34u) {
        ctx->pc = 0x22EB34u;
            // 0x22eb34: 0x8e23006c  lw          $v1, 0x6C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
        ctx->pc = 0x22EB38u;
        goto label_22eb38;
    }
    ctx->pc = 0x22EB30u;
    {
        const bool branch_taken_0x22eb30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22eb30) {
            ctx->pc = 0x22EB34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22EB30u;
            // 0x22eb34: 0x8e23006c  lw          $v1, 0x6C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22EB70u;
            goto label_22eb70;
        }
    }
    ctx->pc = 0x22EB38u;
label_22eb38:
    // 0x22eb38: 0x84820006  lh          $v0, 0x6($a0)
    ctx->pc = 0x22eb38u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_22eb3c:
    // 0x22eb3c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x22eb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_22eb40:
    // 0x22eb40: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x22eb40u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
label_22eb44:
    // 0x22eb44: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x22eb44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_22eb48:
    // 0x22eb48: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x22eb48u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_22eb4c:
    // 0x22eb4c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_22eb50:
    if (ctx->pc == 0x22EB50u) {
        ctx->pc = 0x22EB54u;
        goto label_22eb54;
    }
    ctx->pc = 0x22EB4Cu;
    {
        const bool branch_taken_0x22eb4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22eb4c) {
            ctx->pc = 0x22EB6Cu;
            goto label_22eb6c;
        }
    }
    ctx->pc = 0x22EB54u;
label_22eb54:
    // 0x22eb54: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_22eb58:
    if (ctx->pc == 0x22EB58u) {
        ctx->pc = 0x22EB5Cu;
        goto label_22eb5c;
    }
    ctx->pc = 0x22EB54u;
    {
        const bool branch_taken_0x22eb54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x22eb54) {
            ctx->pc = 0x22EB6Cu;
            goto label_22eb6c;
        }
    }
    ctx->pc = 0x22EB5Cu;
label_22eb5c:
    // 0x22eb5c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x22eb5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_22eb60:
    // 0x22eb60: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x22eb60u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_22eb64:
    // 0x22eb64: 0x320f809  jalr        $t9
label_22eb68:
    if (ctx->pc == 0x22EB68u) {
        ctx->pc = 0x22EB68u;
            // 0x22eb68: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x22EB6Cu;
        goto label_22eb6c;
    }
    ctx->pc = 0x22EB64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x22EB6Cu);
        ctx->pc = 0x22EB68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22EB64u;
            // 0x22eb68: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x22EB6Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x22EB6Cu; }
            if (ctx->pc != 0x22EB6Cu) { return; }
        }
        }
    }
    ctx->pc = 0x22EB6Cu;
label_22eb6c:
    // 0x22eb6c: 0x8e23006c  lw          $v1, 0x6C($s1)
    ctx->pc = 0x22eb6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
label_22eb70:
    // 0x22eb70: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x22eb70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_22eb74:
    // 0x22eb74: 0x8c52ea40  lw          $s2, -0x15C0($v0)
    ctx->pc = 0x22eb74u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_22eb78:
    // 0x22eb78: 0x8c73003c  lw          $s3, 0x3C($v1)
    ctx->pc = 0x22eb78u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
label_22eb7c:
    // 0x22eb7c: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x22eb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_22eb80:
    // 0x22eb80: 0x8e430038  lw          $v1, 0x38($s2)
    ctx->pc = 0x22eb80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
label_22eb84:
    // 0x22eb84: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x22eb84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_22eb88:
    // 0x22eb88: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_22eb8c:
    if (ctx->pc == 0x22EB8Cu) {
        ctx->pc = 0x22EB8Cu;
            // 0x22eb8c: 0x8e430038  lw          $v1, 0x38($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
        ctx->pc = 0x22EB90u;
        goto label_22eb90;
    }
    ctx->pc = 0x22EB88u;
    {
        const bool branch_taken_0x22eb88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22eb88) {
            ctx->pc = 0x22EB8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22EB88u;
            // 0x22eb8c: 0x8e430038  lw          $v1, 0x38($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22EBA4u;
            goto label_22eba4;
        }
    }
    ctx->pc = 0x22EB90u;
label_22eb90:
    // 0x22eb90: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x22eb90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_22eb94:
    // 0x22eb94: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x22eb94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_22eb98:
    // 0x22eb98: 0xc0a79ec  jal         func_29E7B0
label_22eb9c:
    if (ctx->pc == 0x22EB9Cu) {
        ctx->pc = 0x22EB9Cu;
            // 0x22eb9c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22EBA0u;
        goto label_22eba0;
    }
    ctx->pc = 0x22EB98u;
    SET_GPR_U32(ctx, 31, 0x22EBA0u);
    ctx->pc = 0x22EB9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22EB98u;
            // 0x22eb9c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29E7B0u;
    if (runtime->hasFunction(0x29E7B0u)) {
        auto targetFn = runtime->lookupFunction(0x29E7B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22EBA0u; }
        if (ctx->pc != 0x22EBA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029E7B0_0x29e7b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22EBA0u; }
        if (ctx->pc != 0x22EBA0u) { return; }
    }
    ctx->pc = 0x22EBA0u;
label_22eba0:
    // 0x22eba0: 0x8e430038  lw          $v1, 0x38($s2)
    ctx->pc = 0x22eba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
label_22eba4:
    // 0x22eba4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x22eba4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_22eba8:
    // 0x22eba8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x22eba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_22ebac:
    // 0x22ebac: 0xae430038  sw          $v1, 0x38($s2)
    ctx->pc = 0x22ebacu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 3));
label_22ebb0:
    // 0x22ebb0: 0x8e430034  lw          $v1, 0x34($s2)
    ctx->pc = 0x22ebb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
label_22ebb4:
    // 0x22ebb4: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x22ebb4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_22ebb8:
    // 0x22ebb8: 0xae530034  sw          $s3, 0x34($s2)
    ctx->pc = 0x22ebb8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 19));
label_22ebbc:
    // 0x22ebbc: 0x8c52ea40  lw          $s2, -0x15C0($v0)
    ctx->pc = 0x22ebbcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_22ebc0:
    // 0x22ebc0: 0x8e430050  lw          $v1, 0x50($s2)
    ctx->pc = 0x22ebc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_22ebc4:
    // 0x22ebc4: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x22ebc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_22ebc8:
    // 0x22ebc8: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x22ebc8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_22ebcc:
    // 0x22ebcc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_22ebd0:
    if (ctx->pc == 0x22EBD0u) {
        ctx->pc = 0x22EBD0u;
            // 0x22ebd0: 0x8e33006c  lw          $s3, 0x6C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
        ctx->pc = 0x22EBD4u;
        goto label_22ebd4;
    }
    ctx->pc = 0x22EBCCu;
    {
        const bool branch_taken_0x22ebcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22EBD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22EBCCu;
            // 0x22ebd0: 0x8e33006c  lw          $s3, 0x6C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ebcc) {
            ctx->pc = 0x22EBE4u;
            goto label_22ebe4;
        }
    }
    ctx->pc = 0x22EBD4u;
label_22ebd4:
    // 0x22ebd4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x22ebd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_22ebd8:
    // 0x22ebd8: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x22ebd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_22ebdc:
    // 0x22ebdc: 0xc0a79ec  jal         func_29E7B0
label_22ebe0:
    if (ctx->pc == 0x22EBE0u) {
        ctx->pc = 0x22EBE0u;
            // 0x22ebe0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22EBE4u;
        goto label_22ebe4;
    }
    ctx->pc = 0x22EBDCu;
    SET_GPR_U32(ctx, 31, 0x22EBE4u);
    ctx->pc = 0x22EBE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22EBDCu;
            // 0x22ebe0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29E7B0u;
    if (runtime->hasFunction(0x29E7B0u)) {
        auto targetFn = runtime->lookupFunction(0x29E7B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22EBE4u; }
        if (ctx->pc != 0x22EBE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029E7B0_0x29e7b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22EBE4u; }
        if (ctx->pc != 0x22EBE4u) { return; }
    }
    ctx->pc = 0x22EBE4u;
label_22ebe4:
    // 0x22ebe4: 0x8e420050  lw          $v0, 0x50($s2)
    ctx->pc = 0x22ebe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_22ebe8:
    // 0x22ebe8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x22ebe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_22ebec:
    // 0x22ebec: 0xae420050  sw          $v0, 0x50($s2)
    ctx->pc = 0x22ebecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 2));
label_22ebf0:
    // 0x22ebf0: 0x8e42004c  lw          $v0, 0x4C($s2)
    ctx->pc = 0x22ebf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
label_22ebf4:
    // 0x22ebf4: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x22ebf4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_22ebf8:
    // 0x22ebf8: 0xae53004c  sw          $s3, 0x4C($s2)
    ctx->pc = 0x22ebf8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 76), GPR_U32(ctx, 19));
label_22ebfc:
    // 0x22ebfc: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x22ebfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_22ec00:
    // 0x22ec00: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x22ec00u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_22ec04:
    // 0x22ec04: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
label_22ec08:
    if (ctx->pc == 0x22EC08u) {
        ctx->pc = 0x22EC08u;
            // 0x22ec08: 0x8e24007c  lw          $a0, 0x7C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 124)));
        ctx->pc = 0x22EC0Cu;
        goto label_22ec0c;
    }
    ctx->pc = 0x22EC04u;
    {
        const bool branch_taken_0x22ec04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22ec04) {
            ctx->pc = 0x22EC08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22EC04u;
            // 0x22ec08: 0x8e24007c  lw          $a0, 0x7C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 124)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22EC44u;
            goto label_22ec44;
        }
    }
    ctx->pc = 0x22EC0Cu;
label_22ec0c:
    // 0x22ec0c: 0x84820006  lh          $v0, 0x6($a0)
    ctx->pc = 0x22ec0cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_22ec10:
    // 0x22ec10: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x22ec10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_22ec14:
    // 0x22ec14: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x22ec14u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
label_22ec18:
    // 0x22ec18: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x22ec18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_22ec1c:
    // 0x22ec1c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x22ec1cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_22ec20:
    // 0x22ec20: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_22ec24:
    if (ctx->pc == 0x22EC24u) {
        ctx->pc = 0x22EC28u;
        goto label_22ec28;
    }
    ctx->pc = 0x22EC20u;
    {
        const bool branch_taken_0x22ec20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22ec20) {
            ctx->pc = 0x22EC40u;
            goto label_22ec40;
        }
    }
    ctx->pc = 0x22EC28u;
label_22ec28:
    // 0x22ec28: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_22ec2c:
    if (ctx->pc == 0x22EC2Cu) {
        ctx->pc = 0x22EC30u;
        goto label_22ec30;
    }
    ctx->pc = 0x22EC28u;
    {
        const bool branch_taken_0x22ec28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x22ec28) {
            ctx->pc = 0x22EC40u;
            goto label_22ec40;
        }
    }
    ctx->pc = 0x22EC30u;
label_22ec30:
    // 0x22ec30: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x22ec30u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_22ec34:
    // 0x22ec34: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x22ec34u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_22ec38:
    // 0x22ec38: 0x320f809  jalr        $t9
label_22ec3c:
    if (ctx->pc == 0x22EC3Cu) {
        ctx->pc = 0x22EC3Cu;
            // 0x22ec3c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x22EC40u;
        goto label_22ec40;
    }
    ctx->pc = 0x22EC38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x22EC40u);
        ctx->pc = 0x22EC3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22EC38u;
            // 0x22ec3c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x22EC40u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x22EC40u; }
            if (ctx->pc != 0x22EC40u) { return; }
        }
        }
    }
    ctx->pc = 0x22EC40u;
label_22ec40:
    // 0x22ec40: 0x8e24007c  lw          $a0, 0x7C($s1)
    ctx->pc = 0x22ec40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 124)));
label_22ec44:
    // 0x22ec44: 0xc08ed70  jal         func_23B5C0
label_22ec48:
    if (ctx->pc == 0x22EC48u) {
        ctx->pc = 0x22EC48u;
            // 0x22ec48: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x22EC4Cu;
        goto label_22ec4c;
    }
    ctx->pc = 0x22EC44u;
    SET_GPR_U32(ctx, 31, 0x22EC4Cu);
    ctx->pc = 0x22EC48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22EC44u;
            // 0x22ec48: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23B5C0u;
    if (runtime->hasFunction(0x23B5C0u)) {
        auto targetFn = runtime->lookupFunction(0x23B5C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22EC4Cu; }
        if (ctx->pc != 0x22EC4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0023B5C0_0x23b5c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22EC4Cu; }
        if (ctx->pc != 0x22EC4Cu) { return; }
    }
    ctx->pc = 0x22EC4Cu;
label_22ec4c:
    // 0x22ec4c: 0x26220188  addiu       $v0, $s1, 0x188
    ctx->pc = 0x22ec4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 392));
label_22ec50:
    // 0x22ec50: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
label_22ec54:
    if (ctx->pc == 0x22EC54u) {
        ctx->pc = 0x22EC54u;
            // 0x22ec54: 0x2622017c  addiu       $v0, $s1, 0x17C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 380));
        ctx->pc = 0x22EC58u;
        goto label_22ec58;
    }
    ctx->pc = 0x22EC50u;
    {
        const bool branch_taken_0x22ec50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22ec50) {
            ctx->pc = 0x22EC54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22EC50u;
            // 0x22ec54: 0x2622017c  addiu       $v0, $s1, 0x17C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 380));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22EC94u;
            goto label_22ec94;
        }
    }
    ctx->pc = 0x22EC58u;
label_22ec58:
    // 0x22ec58: 0x8e230190  lw          $v1, 0x190($s1)
    ctx->pc = 0x22ec58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 400)));
label_22ec5c:
    // 0x22ec5c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x22ec5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_22ec60:
    // 0x22ec60: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x22ec60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_22ec64:
    // 0x22ec64: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_22ec68:
    if (ctx->pc == 0x22EC68u) {
        ctx->pc = 0x22EC6Cu;
        goto label_22ec6c;
    }
    ctx->pc = 0x22EC64u;
    {
        const bool branch_taken_0x22ec64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22ec64) {
            ctx->pc = 0x22EC90u;
            goto label_22ec90;
        }
    }
    ctx->pc = 0x22EC6Cu;
label_22ec6c:
    // 0x22ec6c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x22ec6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_22ec70:
    // 0x22ec70: 0x8e230190  lw          $v1, 0x190($s1)
    ctx->pc = 0x22ec70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 400)));
label_22ec74:
    // 0x22ec74: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x22ec74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_22ec78:
    // 0x22ec78: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x22ec78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_22ec7c:
    // 0x22ec7c: 0x8e250188  lw          $a1, 0x188($s1)
    ctx->pc = 0x22ec7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 392)));
label_22ec80:
    // 0x22ec80: 0x310bc  dsll32      $v0, $v1, 2
    ctx->pc = 0x22ec80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 2));
label_22ec84:
    // 0x22ec84: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x22ec84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_22ec88:
    // 0x22ec88: 0xc0a7ab4  jal         func_29EAD0
label_22ec8c:
    if (ctx->pc == 0x22EC8Cu) {
        ctx->pc = 0x22EC8Cu;
            // 0x22ec8c: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x22EC90u;
        goto label_22ec90;
    }
    ctx->pc = 0x22EC88u;
    SET_GPR_U32(ctx, 31, 0x22EC90u);
    ctx->pc = 0x22EC8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22EC88u;
            // 0x22ec8c: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22EC90u; }
        if (ctx->pc != 0x22EC90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22EC90u; }
        if (ctx->pc != 0x22EC90u) { return; }
    }
    ctx->pc = 0x22EC90u;
label_22ec90:
    // 0x22ec90: 0x2622017c  addiu       $v0, $s1, 0x17C
    ctx->pc = 0x22ec90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 380));
label_22ec94:
    // 0x22ec94: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
label_22ec98:
    if (ctx->pc == 0x22EC98u) {
        ctx->pc = 0x22EC98u;
            // 0x22ec98: 0x26220170  addiu       $v0, $s1, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 368));
        ctx->pc = 0x22EC9Cu;
        goto label_22ec9c;
    }
    ctx->pc = 0x22EC94u;
    {
        const bool branch_taken_0x22ec94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22ec94) {
            ctx->pc = 0x22EC98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22EC94u;
            // 0x22ec98: 0x26220170  addiu       $v0, $s1, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 368));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22ECD8u;
            goto label_22ecd8;
        }
    }
    ctx->pc = 0x22EC9Cu;
label_22ec9c:
    // 0x22ec9c: 0x8e230184  lw          $v1, 0x184($s1)
    ctx->pc = 0x22ec9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 388)));
label_22eca0:
    // 0x22eca0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x22eca0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_22eca4:
    // 0x22eca4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x22eca4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_22eca8:
    // 0x22eca8: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_22ecac:
    if (ctx->pc == 0x22ECACu) {
        ctx->pc = 0x22ECB0u;
        goto label_22ecb0;
    }
    ctx->pc = 0x22ECA8u;
    {
        const bool branch_taken_0x22eca8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22eca8) {
            ctx->pc = 0x22ECD4u;
            goto label_22ecd4;
        }
    }
    ctx->pc = 0x22ECB0u;
label_22ecb0:
    // 0x22ecb0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x22ecb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_22ecb4:
    // 0x22ecb4: 0x8e230184  lw          $v1, 0x184($s1)
    ctx->pc = 0x22ecb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 388)));
label_22ecb8:
    // 0x22ecb8: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x22ecb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_22ecbc:
    // 0x22ecbc: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x22ecbcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_22ecc0:
    // 0x22ecc0: 0x8e25017c  lw          $a1, 0x17C($s1)
    ctx->pc = 0x22ecc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 380)));
label_22ecc4:
    // 0x22ecc4: 0x310bc  dsll32      $v0, $v1, 2
    ctx->pc = 0x22ecc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 2));
label_22ecc8:
    // 0x22ecc8: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x22ecc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_22eccc:
    // 0x22eccc: 0xc0a7ab4  jal         func_29EAD0
label_22ecd0:
    if (ctx->pc == 0x22ECD0u) {
        ctx->pc = 0x22ECD0u;
            // 0x22ecd0: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x22ECD4u;
        goto label_22ecd4;
    }
    ctx->pc = 0x22ECCCu;
    SET_GPR_U32(ctx, 31, 0x22ECD4u);
    ctx->pc = 0x22ECD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22ECCCu;
            // 0x22ecd0: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22ECD4u; }
        if (ctx->pc != 0x22ECD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22ECD4u; }
        if (ctx->pc != 0x22ECD4u) { return; }
    }
    ctx->pc = 0x22ECD4u;
label_22ecd4:
    // 0x22ecd4: 0x26220170  addiu       $v0, $s1, 0x170
    ctx->pc = 0x22ecd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 368));
label_22ecd8:
    // 0x22ecd8: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
label_22ecdc:
    if (ctx->pc == 0x22ECDCu) {
        ctx->pc = 0x22ECDCu;
            // 0x22ecdc: 0x26220164  addiu       $v0, $s1, 0x164 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 356));
        ctx->pc = 0x22ECE0u;
        goto label_22ece0;
    }
    ctx->pc = 0x22ECD8u;
    {
        const bool branch_taken_0x22ecd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22ecd8) {
            ctx->pc = 0x22ECDCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22ECD8u;
            // 0x22ecdc: 0x26220164  addiu       $v0, $s1, 0x164 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 356));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22ED1Cu;
            goto label_22ed1c;
        }
    }
    ctx->pc = 0x22ECE0u;
label_22ece0:
    // 0x22ece0: 0x8e230178  lw          $v1, 0x178($s1)
    ctx->pc = 0x22ece0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 376)));
label_22ece4:
    // 0x22ece4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x22ece4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_22ece8:
    // 0x22ece8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x22ece8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_22ecec:
    // 0x22ecec: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_22ecf0:
    if (ctx->pc == 0x22ECF0u) {
        ctx->pc = 0x22ECF4u;
        goto label_22ecf4;
    }
    ctx->pc = 0x22ECECu;
    {
        const bool branch_taken_0x22ecec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22ecec) {
            ctx->pc = 0x22ED18u;
            goto label_22ed18;
        }
    }
    ctx->pc = 0x22ECF4u;
label_22ecf4:
    // 0x22ecf4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x22ecf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_22ecf8:
    // 0x22ecf8: 0x8e230178  lw          $v1, 0x178($s1)
    ctx->pc = 0x22ecf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 376)));
label_22ecfc:
    // 0x22ecfc: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x22ecfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_22ed00:
    // 0x22ed00: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x22ed00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_22ed04:
    // 0x22ed04: 0x8e250170  lw          $a1, 0x170($s1)
    ctx->pc = 0x22ed04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 368)));
label_22ed08:
    // 0x22ed08: 0x310bc  dsll32      $v0, $v1, 2
    ctx->pc = 0x22ed08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 2));
label_22ed0c:
    // 0x22ed0c: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x22ed0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_22ed10:
    // 0x22ed10: 0xc0a7ab4  jal         func_29EAD0
label_22ed14:
    if (ctx->pc == 0x22ED14u) {
        ctx->pc = 0x22ED14u;
            // 0x22ed14: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x22ED18u;
        goto label_22ed18;
    }
    ctx->pc = 0x22ED10u;
    SET_GPR_U32(ctx, 31, 0x22ED18u);
    ctx->pc = 0x22ED14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22ED10u;
            // 0x22ed14: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22ED18u; }
        if (ctx->pc != 0x22ED18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22ED18u; }
        if (ctx->pc != 0x22ED18u) { return; }
    }
    ctx->pc = 0x22ED18u;
label_22ed18:
    // 0x22ed18: 0x26220164  addiu       $v0, $s1, 0x164
    ctx->pc = 0x22ed18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 356));
label_22ed1c:
    // 0x22ed1c: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
label_22ed20:
    if (ctx->pc == 0x22ED20u) {
        ctx->pc = 0x22ED20u;
            // 0x22ed20: 0x26220158  addiu       $v0, $s1, 0x158 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 344));
        ctx->pc = 0x22ED24u;
        goto label_22ed24;
    }
    ctx->pc = 0x22ED1Cu;
    {
        const bool branch_taken_0x22ed1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22ed1c) {
            ctx->pc = 0x22ED20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22ED1Cu;
            // 0x22ed20: 0x26220158  addiu       $v0, $s1, 0x158 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 344));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22ED60u;
            goto label_22ed60;
        }
    }
    ctx->pc = 0x22ED24u;
label_22ed24:
    // 0x22ed24: 0x8e23016c  lw          $v1, 0x16C($s1)
    ctx->pc = 0x22ed24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 364)));
label_22ed28:
    // 0x22ed28: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x22ed28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_22ed2c:
    // 0x22ed2c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x22ed2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_22ed30:
    // 0x22ed30: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_22ed34:
    if (ctx->pc == 0x22ED34u) {
        ctx->pc = 0x22ED38u;
        goto label_22ed38;
    }
    ctx->pc = 0x22ED30u;
    {
        const bool branch_taken_0x22ed30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22ed30) {
            ctx->pc = 0x22ED5Cu;
            goto label_22ed5c;
        }
    }
    ctx->pc = 0x22ED38u;
label_22ed38:
    // 0x22ed38: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x22ed38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_22ed3c:
    // 0x22ed3c: 0x8e23016c  lw          $v1, 0x16C($s1)
    ctx->pc = 0x22ed3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 364)));
label_22ed40:
    // 0x22ed40: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x22ed40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_22ed44:
    // 0x22ed44: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x22ed44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_22ed48:
    // 0x22ed48: 0x8e250164  lw          $a1, 0x164($s1)
    ctx->pc = 0x22ed48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 356)));
label_22ed4c:
    // 0x22ed4c: 0x310bc  dsll32      $v0, $v1, 2
    ctx->pc = 0x22ed4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 2));
label_22ed50:
    // 0x22ed50: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x22ed50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_22ed54:
    // 0x22ed54: 0xc0a7ab4  jal         func_29EAD0
label_22ed58:
    if (ctx->pc == 0x22ED58u) {
        ctx->pc = 0x22ED58u;
            // 0x22ed58: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x22ED5Cu;
        goto label_22ed5c;
    }
    ctx->pc = 0x22ED54u;
    SET_GPR_U32(ctx, 31, 0x22ED5Cu);
    ctx->pc = 0x22ED58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22ED54u;
            // 0x22ed58: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22ED5Cu; }
        if (ctx->pc != 0x22ED5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22ED5Cu; }
        if (ctx->pc != 0x22ED5Cu) { return; }
    }
    ctx->pc = 0x22ED5Cu;
label_22ed5c:
    // 0x22ed5c: 0x26220158  addiu       $v0, $s1, 0x158
    ctx->pc = 0x22ed5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 344));
label_22ed60:
    // 0x22ed60: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
label_22ed64:
    if (ctx->pc == 0x22ED64u) {
        ctx->pc = 0x22ED64u;
            // 0x22ed64: 0x2622014c  addiu       $v0, $s1, 0x14C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 332));
        ctx->pc = 0x22ED68u;
        goto label_22ed68;
    }
    ctx->pc = 0x22ED60u;
    {
        const bool branch_taken_0x22ed60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22ed60) {
            ctx->pc = 0x22ED64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22ED60u;
            // 0x22ed64: 0x2622014c  addiu       $v0, $s1, 0x14C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 332));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22EDA4u;
            goto label_22eda4;
        }
    }
    ctx->pc = 0x22ED68u;
label_22ed68:
    // 0x22ed68: 0x8e230160  lw          $v1, 0x160($s1)
    ctx->pc = 0x22ed68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 352)));
label_22ed6c:
    // 0x22ed6c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x22ed6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_22ed70:
    // 0x22ed70: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x22ed70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_22ed74:
    // 0x22ed74: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_22ed78:
    if (ctx->pc == 0x22ED78u) {
        ctx->pc = 0x22ED7Cu;
        goto label_22ed7c;
    }
    ctx->pc = 0x22ED74u;
    {
        const bool branch_taken_0x22ed74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22ed74) {
            ctx->pc = 0x22EDA0u;
            goto label_22eda0;
        }
    }
    ctx->pc = 0x22ED7Cu;
label_22ed7c:
    // 0x22ed7c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x22ed7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_22ed80:
    // 0x22ed80: 0x8e230160  lw          $v1, 0x160($s1)
    ctx->pc = 0x22ed80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 352)));
label_22ed84:
    // 0x22ed84: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x22ed84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_22ed88:
    // 0x22ed88: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x22ed88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_22ed8c:
    // 0x22ed8c: 0x8e250158  lw          $a1, 0x158($s1)
    ctx->pc = 0x22ed8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 344)));
label_22ed90:
    // 0x22ed90: 0x310bc  dsll32      $v0, $v1, 2
    ctx->pc = 0x22ed90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 2));
label_22ed94:
    // 0x22ed94: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x22ed94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_22ed98:
    // 0x22ed98: 0xc0a7ab4  jal         func_29EAD0
label_22ed9c:
    if (ctx->pc == 0x22ED9Cu) {
        ctx->pc = 0x22ED9Cu;
            // 0x22ed9c: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x22EDA0u;
        goto label_22eda0;
    }
    ctx->pc = 0x22ED98u;
    SET_GPR_U32(ctx, 31, 0x22EDA0u);
    ctx->pc = 0x22ED9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22ED98u;
            // 0x22ed9c: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22EDA0u; }
        if (ctx->pc != 0x22EDA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22EDA0u; }
        if (ctx->pc != 0x22EDA0u) { return; }
    }
    ctx->pc = 0x22EDA0u;
label_22eda0:
    // 0x22eda0: 0x2622014c  addiu       $v0, $s1, 0x14C
    ctx->pc = 0x22eda0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 332));
label_22eda4:
    // 0x22eda4: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
label_22eda8:
    if (ctx->pc == 0x22EDA8u) {
        ctx->pc = 0x22EDA8u;
            // 0x22eda8: 0x26220140  addiu       $v0, $s1, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 320));
        ctx->pc = 0x22EDACu;
        goto label_22edac;
    }
    ctx->pc = 0x22EDA4u;
    {
        const bool branch_taken_0x22eda4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22eda4) {
            ctx->pc = 0x22EDA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22EDA4u;
            // 0x22eda8: 0x26220140  addiu       $v0, $s1, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 320));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22EDE8u;
            goto label_22ede8;
        }
    }
    ctx->pc = 0x22EDACu;
label_22edac:
    // 0x22edac: 0x8e230154  lw          $v1, 0x154($s1)
    ctx->pc = 0x22edacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 340)));
label_22edb0:
    // 0x22edb0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x22edb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_22edb4:
    // 0x22edb4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x22edb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_22edb8:
    // 0x22edb8: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_22edbc:
    if (ctx->pc == 0x22EDBCu) {
        ctx->pc = 0x22EDC0u;
        goto label_22edc0;
    }
    ctx->pc = 0x22EDB8u;
    {
        const bool branch_taken_0x22edb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22edb8) {
            ctx->pc = 0x22EDE4u;
            goto label_22ede4;
        }
    }
    ctx->pc = 0x22EDC0u;
label_22edc0:
    // 0x22edc0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x22edc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_22edc4:
    // 0x22edc4: 0x8e230154  lw          $v1, 0x154($s1)
    ctx->pc = 0x22edc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 340)));
label_22edc8:
    // 0x22edc8: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x22edc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_22edcc:
    // 0x22edcc: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x22edccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_22edd0:
    // 0x22edd0: 0x8e25014c  lw          $a1, 0x14C($s1)
    ctx->pc = 0x22edd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 332)));
label_22edd4:
    // 0x22edd4: 0x310bc  dsll32      $v0, $v1, 2
    ctx->pc = 0x22edd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 2));
label_22edd8:
    // 0x22edd8: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x22edd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_22eddc:
    // 0x22eddc: 0xc0a7ab4  jal         func_29EAD0
label_22ede0:
    if (ctx->pc == 0x22EDE0u) {
        ctx->pc = 0x22EDE0u;
            // 0x22ede0: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x22EDE4u;
        goto label_22ede4;
    }
    ctx->pc = 0x22EDDCu;
    SET_GPR_U32(ctx, 31, 0x22EDE4u);
    ctx->pc = 0x22EDE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22EDDCu;
            // 0x22ede0: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22EDE4u; }
        if (ctx->pc != 0x22EDE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22EDE4u; }
        if (ctx->pc != 0x22EDE4u) { return; }
    }
    ctx->pc = 0x22EDE4u;
label_22ede4:
    // 0x22ede4: 0x26220140  addiu       $v0, $s1, 0x140
    ctx->pc = 0x22ede4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 320));
label_22ede8:
    // 0x22ede8: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
label_22edec:
    if (ctx->pc == 0x22EDECu) {
        ctx->pc = 0x22EDECu;
            // 0x22edec: 0x26220134  addiu       $v0, $s1, 0x134 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 308));
        ctx->pc = 0x22EDF0u;
        goto label_22edf0;
    }
    ctx->pc = 0x22EDE8u;
    {
        const bool branch_taken_0x22ede8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22ede8) {
            ctx->pc = 0x22EDECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22EDE8u;
            // 0x22edec: 0x26220134  addiu       $v0, $s1, 0x134 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 308));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22EE2Cu;
            goto label_22ee2c;
        }
    }
    ctx->pc = 0x22EDF0u;
label_22edf0:
    // 0x22edf0: 0x8e230148  lw          $v1, 0x148($s1)
    ctx->pc = 0x22edf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
label_22edf4:
    // 0x22edf4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x22edf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_22edf8:
    // 0x22edf8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x22edf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_22edfc:
    // 0x22edfc: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_22ee00:
    if (ctx->pc == 0x22EE00u) {
        ctx->pc = 0x22EE04u;
        goto label_22ee04;
    }
    ctx->pc = 0x22EDFCu;
    {
        const bool branch_taken_0x22edfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22edfc) {
            ctx->pc = 0x22EE28u;
            goto label_22ee28;
        }
    }
    ctx->pc = 0x22EE04u;
label_22ee04:
    // 0x22ee04: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x22ee04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_22ee08:
    // 0x22ee08: 0x8e230148  lw          $v1, 0x148($s1)
    ctx->pc = 0x22ee08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
label_22ee0c:
    // 0x22ee0c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x22ee0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_22ee10:
    // 0x22ee10: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x22ee10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_22ee14:
    // 0x22ee14: 0x8e250140  lw          $a1, 0x140($s1)
    ctx->pc = 0x22ee14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 320)));
label_22ee18:
    // 0x22ee18: 0x310bc  dsll32      $v0, $v1, 2
    ctx->pc = 0x22ee18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 2));
label_22ee1c:
    // 0x22ee1c: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x22ee1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_22ee20:
    // 0x22ee20: 0xc0a7ab4  jal         func_29EAD0
label_22ee24:
    if (ctx->pc == 0x22EE24u) {
        ctx->pc = 0x22EE24u;
            // 0x22ee24: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x22EE28u;
        goto label_22ee28;
    }
    ctx->pc = 0x22EE20u;
    SET_GPR_U32(ctx, 31, 0x22EE28u);
    ctx->pc = 0x22EE24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22EE20u;
            // 0x22ee24: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22EE28u; }
        if (ctx->pc != 0x22EE28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22EE28u; }
        if (ctx->pc != 0x22EE28u) { return; }
    }
    ctx->pc = 0x22EE28u;
label_22ee28:
    // 0x22ee28: 0x26220134  addiu       $v0, $s1, 0x134
    ctx->pc = 0x22ee28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 308));
label_22ee2c:
    // 0x22ee2c: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
label_22ee30:
    if (ctx->pc == 0x22EE30u) {
        ctx->pc = 0x22EE30u;
            // 0x22ee30: 0x26220128  addiu       $v0, $s1, 0x128 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 296));
        ctx->pc = 0x22EE34u;
        goto label_22ee34;
    }
    ctx->pc = 0x22EE2Cu;
    {
        const bool branch_taken_0x22ee2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22ee2c) {
            ctx->pc = 0x22EE30u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22EE2Cu;
            // 0x22ee30: 0x26220128  addiu       $v0, $s1, 0x128 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 296));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22EE70u;
            goto label_22ee70;
        }
    }
    ctx->pc = 0x22EE34u;
label_22ee34:
    // 0x22ee34: 0x8e23013c  lw          $v1, 0x13C($s1)
    ctx->pc = 0x22ee34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 316)));
label_22ee38:
    // 0x22ee38: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x22ee38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_22ee3c:
    // 0x22ee3c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x22ee3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_22ee40:
    // 0x22ee40: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_22ee44:
    if (ctx->pc == 0x22EE44u) {
        ctx->pc = 0x22EE48u;
        goto label_22ee48;
    }
    ctx->pc = 0x22EE40u;
    {
        const bool branch_taken_0x22ee40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22ee40) {
            ctx->pc = 0x22EE6Cu;
            goto label_22ee6c;
        }
    }
    ctx->pc = 0x22EE48u;
label_22ee48:
    // 0x22ee48: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x22ee48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_22ee4c:
    // 0x22ee4c: 0x8e23013c  lw          $v1, 0x13C($s1)
    ctx->pc = 0x22ee4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 316)));
label_22ee50:
    // 0x22ee50: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x22ee50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_22ee54:
    // 0x22ee54: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x22ee54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_22ee58:
    // 0x22ee58: 0x8e250134  lw          $a1, 0x134($s1)
    ctx->pc = 0x22ee58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 308)));
label_22ee5c:
    // 0x22ee5c: 0x310bc  dsll32      $v0, $v1, 2
    ctx->pc = 0x22ee5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 2));
label_22ee60:
    // 0x22ee60: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x22ee60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_22ee64:
    // 0x22ee64: 0xc0a7ab4  jal         func_29EAD0
label_22ee68:
    if (ctx->pc == 0x22EE68u) {
        ctx->pc = 0x22EE68u;
            // 0x22ee68: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x22EE6Cu;
        goto label_22ee6c;
    }
    ctx->pc = 0x22EE64u;
    SET_GPR_U32(ctx, 31, 0x22EE6Cu);
    ctx->pc = 0x22EE68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22EE64u;
            // 0x22ee68: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22EE6Cu; }
        if (ctx->pc != 0x22EE6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22EE6Cu; }
        if (ctx->pc != 0x22EE6Cu) { return; }
    }
    ctx->pc = 0x22EE6Cu;
label_22ee6c:
    // 0x22ee6c: 0x26220128  addiu       $v0, $s1, 0x128
    ctx->pc = 0x22ee6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 296));
label_22ee70:
    // 0x22ee70: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
label_22ee74:
    if (ctx->pc == 0x22EE74u) {
        ctx->pc = 0x22EE74u;
            // 0x22ee74: 0x2622011c  addiu       $v0, $s1, 0x11C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 284));
        ctx->pc = 0x22EE78u;
        goto label_22ee78;
    }
    ctx->pc = 0x22EE70u;
    {
        const bool branch_taken_0x22ee70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22ee70) {
            ctx->pc = 0x22EE74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22EE70u;
            // 0x22ee74: 0x2622011c  addiu       $v0, $s1, 0x11C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 284));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22EEB4u;
            goto label_22eeb4;
        }
    }
    ctx->pc = 0x22EE78u;
label_22ee78:
    // 0x22ee78: 0x8e230130  lw          $v1, 0x130($s1)
    ctx->pc = 0x22ee78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
label_22ee7c:
    // 0x22ee7c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x22ee7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_22ee80:
    // 0x22ee80: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x22ee80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_22ee84:
    // 0x22ee84: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_22ee88:
    if (ctx->pc == 0x22EE88u) {
        ctx->pc = 0x22EE8Cu;
        goto label_22ee8c;
    }
    ctx->pc = 0x22EE84u;
    {
        const bool branch_taken_0x22ee84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22ee84) {
            ctx->pc = 0x22EEB0u;
            goto label_22eeb0;
        }
    }
    ctx->pc = 0x22EE8Cu;
label_22ee8c:
    // 0x22ee8c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x22ee8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_22ee90:
    // 0x22ee90: 0x8e230130  lw          $v1, 0x130($s1)
    ctx->pc = 0x22ee90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
label_22ee94:
    // 0x22ee94: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x22ee94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_22ee98:
    // 0x22ee98: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x22ee98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_22ee9c:
    // 0x22ee9c: 0x8e250128  lw          $a1, 0x128($s1)
    ctx->pc = 0x22ee9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 296)));
label_22eea0:
    // 0x22eea0: 0x310bc  dsll32      $v0, $v1, 2
    ctx->pc = 0x22eea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 2));
label_22eea4:
    // 0x22eea4: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x22eea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_22eea8:
    // 0x22eea8: 0xc0a7ab4  jal         func_29EAD0
label_22eeac:
    if (ctx->pc == 0x22EEACu) {
        ctx->pc = 0x22EEACu;
            // 0x22eeac: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x22EEB0u;
        goto label_22eeb0;
    }
    ctx->pc = 0x22EEA8u;
    SET_GPR_U32(ctx, 31, 0x22EEB0u);
    ctx->pc = 0x22EEACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22EEA8u;
            // 0x22eeac: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22EEB0u; }
        if (ctx->pc != 0x22EEB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22EEB0u; }
        if (ctx->pc != 0x22EEB0u) { return; }
    }
    ctx->pc = 0x22EEB0u;
label_22eeb0:
    // 0x22eeb0: 0x2622011c  addiu       $v0, $s1, 0x11C
    ctx->pc = 0x22eeb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 284));
label_22eeb4:
    // 0x22eeb4: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
label_22eeb8:
    if (ctx->pc == 0x22EEB8u) {
        ctx->pc = 0x22EEB8u;
            // 0x22eeb8: 0x26220110  addiu       $v0, $s1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
        ctx->pc = 0x22EEBCu;
        goto label_22eebc;
    }
    ctx->pc = 0x22EEB4u;
    {
        const bool branch_taken_0x22eeb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22eeb4) {
            ctx->pc = 0x22EEB8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22EEB4u;
            // 0x22eeb8: 0x26220110  addiu       $v0, $s1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22EEF8u;
            goto label_22eef8;
        }
    }
    ctx->pc = 0x22EEBCu;
label_22eebc:
    // 0x22eebc: 0x8e230124  lw          $v1, 0x124($s1)
    ctx->pc = 0x22eebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 292)));
label_22eec0:
    // 0x22eec0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x22eec0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_22eec4:
    // 0x22eec4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x22eec4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_22eec8:
    // 0x22eec8: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_22eecc:
    if (ctx->pc == 0x22EECCu) {
        ctx->pc = 0x22EED0u;
        goto label_22eed0;
    }
    ctx->pc = 0x22EEC8u;
    {
        const bool branch_taken_0x22eec8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22eec8) {
            ctx->pc = 0x22EEF4u;
            goto label_22eef4;
        }
    }
    ctx->pc = 0x22EED0u;
label_22eed0:
    // 0x22eed0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x22eed0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_22eed4:
    // 0x22eed4: 0x8e230124  lw          $v1, 0x124($s1)
    ctx->pc = 0x22eed4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 292)));
label_22eed8:
    // 0x22eed8: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x22eed8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_22eedc:
    // 0x22eedc: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x22eedcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_22eee0:
    // 0x22eee0: 0x8e25011c  lw          $a1, 0x11C($s1)
    ctx->pc = 0x22eee0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 284)));
label_22eee4:
    // 0x22eee4: 0x310bc  dsll32      $v0, $v1, 2
    ctx->pc = 0x22eee4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 2));
label_22eee8:
    // 0x22eee8: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x22eee8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_22eeec:
    // 0x22eeec: 0xc0a7ab4  jal         func_29EAD0
label_22eef0:
    if (ctx->pc == 0x22EEF0u) {
        ctx->pc = 0x22EEF0u;
            // 0x22eef0: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x22EEF4u;
        goto label_22eef4;
    }
    ctx->pc = 0x22EEECu;
    SET_GPR_U32(ctx, 31, 0x22EEF4u);
    ctx->pc = 0x22EEF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22EEECu;
            // 0x22eef0: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22EEF4u; }
        if (ctx->pc != 0x22EEF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22EEF4u; }
        if (ctx->pc != 0x22EEF4u) { return; }
    }
    ctx->pc = 0x22EEF4u;
label_22eef4:
    // 0x22eef4: 0x26220110  addiu       $v0, $s1, 0x110
    ctx->pc = 0x22eef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
label_22eef8:
    // 0x22eef8: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
label_22eefc:
    if (ctx->pc == 0x22EEFCu) {
        ctx->pc = 0x22EEFCu;
            // 0x22eefc: 0x26220104  addiu       $v0, $s1, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 260));
        ctx->pc = 0x22EF00u;
        goto label_22ef00;
    }
    ctx->pc = 0x22EEF8u;
    {
        const bool branch_taken_0x22eef8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22eef8) {
            ctx->pc = 0x22EEFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22EEF8u;
            // 0x22eefc: 0x26220104  addiu       $v0, $s1, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 260));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22EF3Cu;
            goto label_22ef3c;
        }
    }
    ctx->pc = 0x22EF00u;
label_22ef00:
    // 0x22ef00: 0x8e230118  lw          $v1, 0x118($s1)
    ctx->pc = 0x22ef00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 280)));
label_22ef04:
    // 0x22ef04: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x22ef04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_22ef08:
    // 0x22ef08: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x22ef08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_22ef0c:
    // 0x22ef0c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_22ef10:
    if (ctx->pc == 0x22EF10u) {
        ctx->pc = 0x22EF14u;
        goto label_22ef14;
    }
    ctx->pc = 0x22EF0Cu;
    {
        const bool branch_taken_0x22ef0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22ef0c) {
            ctx->pc = 0x22EF38u;
            goto label_22ef38;
        }
    }
    ctx->pc = 0x22EF14u;
label_22ef14:
    // 0x22ef14: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x22ef14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_22ef18:
    // 0x22ef18: 0x8e230118  lw          $v1, 0x118($s1)
    ctx->pc = 0x22ef18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 280)));
label_22ef1c:
    // 0x22ef1c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x22ef1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_22ef20:
    // 0x22ef20: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x22ef20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_22ef24:
    // 0x22ef24: 0x8e250110  lw          $a1, 0x110($s1)
    ctx->pc = 0x22ef24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 272)));
label_22ef28:
    // 0x22ef28: 0x310bc  dsll32      $v0, $v1, 2
    ctx->pc = 0x22ef28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 2));
label_22ef2c:
    // 0x22ef2c: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x22ef2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_22ef30:
    // 0x22ef30: 0xc0a7ab4  jal         func_29EAD0
label_22ef34:
    if (ctx->pc == 0x22EF34u) {
        ctx->pc = 0x22EF34u;
            // 0x22ef34: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x22EF38u;
        goto label_22ef38;
    }
    ctx->pc = 0x22EF30u;
    SET_GPR_U32(ctx, 31, 0x22EF38u);
    ctx->pc = 0x22EF34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22EF30u;
            // 0x22ef34: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22EF38u; }
        if (ctx->pc != 0x22EF38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22EF38u; }
        if (ctx->pc != 0x22EF38u) { return; }
    }
    ctx->pc = 0x22EF38u;
label_22ef38:
    // 0x22ef38: 0x26220104  addiu       $v0, $s1, 0x104
    ctx->pc = 0x22ef38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 260));
label_22ef3c:
    // 0x22ef3c: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
label_22ef40:
    if (ctx->pc == 0x22EF40u) {
        ctx->pc = 0x22EF40u;
            // 0x22ef40: 0x262200f8  addiu       $v0, $s1, 0xF8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 248));
        ctx->pc = 0x22EF44u;
        goto label_22ef44;
    }
    ctx->pc = 0x22EF3Cu;
    {
        const bool branch_taken_0x22ef3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22ef3c) {
            ctx->pc = 0x22EF40u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22EF3Cu;
            // 0x22ef40: 0x262200f8  addiu       $v0, $s1, 0xF8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 248));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22EF80u;
            goto label_22ef80;
        }
    }
    ctx->pc = 0x22EF44u;
label_22ef44:
    // 0x22ef44: 0x8e23010c  lw          $v1, 0x10C($s1)
    ctx->pc = 0x22ef44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
label_22ef48:
    // 0x22ef48: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x22ef48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_22ef4c:
    // 0x22ef4c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x22ef4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_22ef50:
    // 0x22ef50: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_22ef54:
    if (ctx->pc == 0x22EF54u) {
        ctx->pc = 0x22EF58u;
        goto label_22ef58;
    }
    ctx->pc = 0x22EF50u;
    {
        const bool branch_taken_0x22ef50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22ef50) {
            ctx->pc = 0x22EF7Cu;
            goto label_22ef7c;
        }
    }
    ctx->pc = 0x22EF58u;
label_22ef58:
    // 0x22ef58: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x22ef58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_22ef5c:
    // 0x22ef5c: 0x8e23010c  lw          $v1, 0x10C($s1)
    ctx->pc = 0x22ef5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
label_22ef60:
    // 0x22ef60: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x22ef60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_22ef64:
    // 0x22ef64: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x22ef64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_22ef68:
    // 0x22ef68: 0x8e250104  lw          $a1, 0x104($s1)
    ctx->pc = 0x22ef68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
label_22ef6c:
    // 0x22ef6c: 0x310bc  dsll32      $v0, $v1, 2
    ctx->pc = 0x22ef6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 2));
label_22ef70:
    // 0x22ef70: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x22ef70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_22ef74:
    // 0x22ef74: 0xc0a7ab4  jal         func_29EAD0
label_22ef78:
    if (ctx->pc == 0x22EF78u) {
        ctx->pc = 0x22EF78u;
            // 0x22ef78: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x22EF7Cu;
        goto label_22ef7c;
    }
    ctx->pc = 0x22EF74u;
    SET_GPR_U32(ctx, 31, 0x22EF7Cu);
    ctx->pc = 0x22EF78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22EF74u;
            // 0x22ef78: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22EF7Cu; }
        if (ctx->pc != 0x22EF7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22EF7Cu; }
        if (ctx->pc != 0x22EF7Cu) { return; }
    }
    ctx->pc = 0x22EF7Cu;
label_22ef7c:
    // 0x22ef7c: 0x262200f8  addiu       $v0, $s1, 0xF8
    ctx->pc = 0x22ef7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 248));
label_22ef80:
    // 0x22ef80: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
label_22ef84:
    if (ctx->pc == 0x22EF84u) {
        ctx->pc = 0x22EF84u;
            // 0x22ef84: 0x262200ec  addiu       $v0, $s1, 0xEC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 236));
        ctx->pc = 0x22EF88u;
        goto label_22ef88;
    }
    ctx->pc = 0x22EF80u;
    {
        const bool branch_taken_0x22ef80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22ef80) {
            ctx->pc = 0x22EF84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22EF80u;
            // 0x22ef84: 0x262200ec  addiu       $v0, $s1, 0xEC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 236));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22EFC4u;
            goto label_22efc4;
        }
    }
    ctx->pc = 0x22EF88u;
label_22ef88:
    // 0x22ef88: 0x8e230100  lw          $v1, 0x100($s1)
    ctx->pc = 0x22ef88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 256)));
label_22ef8c:
    // 0x22ef8c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x22ef8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_22ef90:
    // 0x22ef90: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x22ef90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_22ef94:
    // 0x22ef94: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_22ef98:
    if (ctx->pc == 0x22EF98u) {
        ctx->pc = 0x22EF9Cu;
        goto label_22ef9c;
    }
    ctx->pc = 0x22EF94u;
    {
        const bool branch_taken_0x22ef94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22ef94) {
            ctx->pc = 0x22EFC0u;
            goto label_22efc0;
        }
    }
    ctx->pc = 0x22EF9Cu;
label_22ef9c:
    // 0x22ef9c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x22ef9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_22efa0:
    // 0x22efa0: 0x8e230100  lw          $v1, 0x100($s1)
    ctx->pc = 0x22efa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 256)));
label_22efa4:
    // 0x22efa4: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x22efa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_22efa8:
    // 0x22efa8: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x22efa8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_22efac:
    // 0x22efac: 0x8e2500f8  lw          $a1, 0xF8($s1)
    ctx->pc = 0x22efacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 248)));
label_22efb0:
    // 0x22efb0: 0x310bc  dsll32      $v0, $v1, 2
    ctx->pc = 0x22efb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 2));
label_22efb4:
    // 0x22efb4: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x22efb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_22efb8:
    // 0x22efb8: 0xc0a7ab4  jal         func_29EAD0
label_22efbc:
    if (ctx->pc == 0x22EFBCu) {
        ctx->pc = 0x22EFBCu;
            // 0x22efbc: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x22EFC0u;
        goto label_22efc0;
    }
    ctx->pc = 0x22EFB8u;
    SET_GPR_U32(ctx, 31, 0x22EFC0u);
    ctx->pc = 0x22EFBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22EFB8u;
            // 0x22efbc: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22EFC0u; }
        if (ctx->pc != 0x22EFC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22EFC0u; }
        if (ctx->pc != 0x22EFC0u) { return; }
    }
    ctx->pc = 0x22EFC0u;
label_22efc0:
    // 0x22efc0: 0x262200ec  addiu       $v0, $s1, 0xEC
    ctx->pc = 0x22efc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 236));
label_22efc4:
    // 0x22efc4: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
label_22efc8:
    if (ctx->pc == 0x22EFC8u) {
        ctx->pc = 0x22EFC8u;
            // 0x22efc8: 0x262200b8  addiu       $v0, $s1, 0xB8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 184));
        ctx->pc = 0x22EFCCu;
        goto label_22efcc;
    }
    ctx->pc = 0x22EFC4u;
    {
        const bool branch_taken_0x22efc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22efc4) {
            ctx->pc = 0x22EFC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22EFC4u;
            // 0x22efc8: 0x262200b8  addiu       $v0, $s1, 0xB8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 184));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22F008u;
            goto label_22f008;
        }
    }
    ctx->pc = 0x22EFCCu;
label_22efcc:
    // 0x22efcc: 0x8e2300f4  lw          $v1, 0xF4($s1)
    ctx->pc = 0x22efccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 244)));
label_22efd0:
    // 0x22efd0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x22efd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_22efd4:
    // 0x22efd4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x22efd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_22efd8:
    // 0x22efd8: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_22efdc:
    if (ctx->pc == 0x22EFDCu) {
        ctx->pc = 0x22EFE0u;
        goto label_22efe0;
    }
    ctx->pc = 0x22EFD8u;
    {
        const bool branch_taken_0x22efd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22efd8) {
            ctx->pc = 0x22F004u;
            goto label_22f004;
        }
    }
    ctx->pc = 0x22EFE0u;
label_22efe0:
    // 0x22efe0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x22efe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_22efe4:
    // 0x22efe4: 0x8e2300f4  lw          $v1, 0xF4($s1)
    ctx->pc = 0x22efe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 244)));
label_22efe8:
    // 0x22efe8: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x22efe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_22efec:
    // 0x22efec: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x22efecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_22eff0:
    // 0x22eff0: 0x8e2500ec  lw          $a1, 0xEC($s1)
    ctx->pc = 0x22eff0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 236)));
label_22eff4:
    // 0x22eff4: 0x310bc  dsll32      $v0, $v1, 2
    ctx->pc = 0x22eff4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 2));
label_22eff8:
    // 0x22eff8: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x22eff8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_22effc:
    // 0x22effc: 0xc0a7ab4  jal         func_29EAD0
label_22f000:
    if (ctx->pc == 0x22F000u) {
        ctx->pc = 0x22F000u;
            // 0x22f000: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x22F004u;
        goto label_22f004;
    }
    ctx->pc = 0x22EFFCu;
    SET_GPR_U32(ctx, 31, 0x22F004u);
    ctx->pc = 0x22F000u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22EFFCu;
            // 0x22f000: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F004u; }
        if (ctx->pc != 0x22F004u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F004u; }
        if (ctx->pc != 0x22F004u) { return; }
    }
    ctx->pc = 0x22F004u;
label_22f004:
    // 0x22f004: 0x262200b8  addiu       $v0, $s1, 0xB8
    ctx->pc = 0x22f004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 184));
label_22f008:
    // 0x22f008: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
label_22f00c:
    if (ctx->pc == 0x22F00Cu) {
        ctx->pc = 0x22F00Cu;
            // 0x22f00c: 0x26220040  addiu       $v0, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->pc = 0x22F010u;
        goto label_22f010;
    }
    ctx->pc = 0x22F008u;
    {
        const bool branch_taken_0x22f008 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f008) {
            ctx->pc = 0x22F00Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22F008u;
            // 0x22f00c: 0x26220040  addiu       $v0, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22F054u;
            goto label_22f054;
        }
    }
    ctx->pc = 0x22F010u;
label_22f010:
    // 0x22f010: 0x8e2300c0  lw          $v1, 0xC0($s1)
    ctx->pc = 0x22f010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
label_22f014:
    // 0x22f014: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x22f014u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_22f018:
    // 0x22f018: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x22f018u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_22f01c:
    // 0x22f01c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_22f020:
    if (ctx->pc == 0x22F020u) {
        ctx->pc = 0x22F024u;
        goto label_22f024;
    }
    ctx->pc = 0x22F01Cu;
    {
        const bool branch_taken_0x22f01c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22f01c) {
            ctx->pc = 0x22F050u;
            goto label_22f050;
        }
    }
    ctx->pc = 0x22F024u;
label_22f024:
    // 0x22f024: 0x8e2300c0  lw          $v1, 0xC0($s1)
    ctx->pc = 0x22f024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
label_22f028:
    // 0x22f028: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x22f028u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_22f02c:
    // 0x22f02c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x22f02cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_22f030:
    // 0x22f030: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x22f030u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_22f034:
    // 0x22f034: 0x8e2500b8  lw          $a1, 0xB8($s1)
    ctx->pc = 0x22f034u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
label_22f038:
    // 0x22f038: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x22f038u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
label_22f03c:
    // 0x22f03c: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x22f03cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
label_22f040:
    // 0x22f040: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x22f040u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_22f044:
    // 0x22f044: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x22f044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_22f048:
    // 0x22f048: 0xc0a7ab4  jal         func_29EAD0
label_22f04c:
    if (ctx->pc == 0x22F04Cu) {
        ctx->pc = 0x22F04Cu;
            // 0x22f04c: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x22F050u;
        goto label_22f050;
    }
    ctx->pc = 0x22F048u;
    SET_GPR_U32(ctx, 31, 0x22F050u);
    ctx->pc = 0x22F04Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22F048u;
            // 0x22f04c: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F050u; }
        if (ctx->pc != 0x22F050u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F050u; }
        if (ctx->pc != 0x22F050u) { return; }
    }
    ctx->pc = 0x22F050u;
label_22f050:
    // 0x22f050: 0x26220040  addiu       $v0, $s1, 0x40
    ctx->pc = 0x22f050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
label_22f054:
    // 0x22f054: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
label_22f058:
    if (ctx->pc == 0x22F058u) {
        ctx->pc = 0x22F058u;
            // 0x22f058: 0x26220034  addiu       $v0, $s1, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 52));
        ctx->pc = 0x22F05Cu;
        goto label_22f05c;
    }
    ctx->pc = 0x22F054u;
    {
        const bool branch_taken_0x22f054 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f054) {
            ctx->pc = 0x22F058u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22F054u;
            // 0x22f058: 0x26220034  addiu       $v0, $s1, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 52));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22F098u;
            goto label_22f098;
        }
    }
    ctx->pc = 0x22F05Cu;
label_22f05c:
    // 0x22f05c: 0x8e230048  lw          $v1, 0x48($s1)
    ctx->pc = 0x22f05cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
label_22f060:
    // 0x22f060: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x22f060u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_22f064:
    // 0x22f064: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x22f064u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_22f068:
    // 0x22f068: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_22f06c:
    if (ctx->pc == 0x22F06Cu) {
        ctx->pc = 0x22F070u;
        goto label_22f070;
    }
    ctx->pc = 0x22F068u;
    {
        const bool branch_taken_0x22f068 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22f068) {
            ctx->pc = 0x22F094u;
            goto label_22f094;
        }
    }
    ctx->pc = 0x22F070u;
label_22f070:
    // 0x22f070: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x22f070u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_22f074:
    // 0x22f074: 0x8e230048  lw          $v1, 0x48($s1)
    ctx->pc = 0x22f074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
label_22f078:
    // 0x22f078: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x22f078u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_22f07c:
    // 0x22f07c: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x22f07cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_22f080:
    // 0x22f080: 0x8e250040  lw          $a1, 0x40($s1)
    ctx->pc = 0x22f080u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_22f084:
    // 0x22f084: 0x310bc  dsll32      $v0, $v1, 2
    ctx->pc = 0x22f084u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 2));
label_22f088:
    // 0x22f088: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x22f088u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_22f08c:
    // 0x22f08c: 0xc0a7ab4  jal         func_29EAD0
label_22f090:
    if (ctx->pc == 0x22F090u) {
        ctx->pc = 0x22F090u;
            // 0x22f090: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x22F094u;
        goto label_22f094;
    }
    ctx->pc = 0x22F08Cu;
    SET_GPR_U32(ctx, 31, 0x22F094u);
    ctx->pc = 0x22F090u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22F08Cu;
            // 0x22f090: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F094u; }
        if (ctx->pc != 0x22F094u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F094u; }
        if (ctx->pc != 0x22F094u) { return; }
    }
    ctx->pc = 0x22F094u;
label_22f094:
    // 0x22f094: 0x26220034  addiu       $v0, $s1, 0x34
    ctx->pc = 0x22f094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 52));
label_22f098:
    // 0x22f098: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
label_22f09c:
    if (ctx->pc == 0x22F09Cu) {
        ctx->pc = 0x22F09Cu;
            // 0x22f09c: 0x26220028  addiu       $v0, $s1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
        ctx->pc = 0x22F0A0u;
        goto label_22f0a0;
    }
    ctx->pc = 0x22F098u;
    {
        const bool branch_taken_0x22f098 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f098) {
            ctx->pc = 0x22F09Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22F098u;
            // 0x22f09c: 0x26220028  addiu       $v0, $s1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22F0DCu;
            goto label_22f0dc;
        }
    }
    ctx->pc = 0x22F0A0u;
label_22f0a0:
    // 0x22f0a0: 0x8e23003c  lw          $v1, 0x3C($s1)
    ctx->pc = 0x22f0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_22f0a4:
    // 0x22f0a4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x22f0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_22f0a8:
    // 0x22f0a8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x22f0a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_22f0ac:
    // 0x22f0ac: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_22f0b0:
    if (ctx->pc == 0x22F0B0u) {
        ctx->pc = 0x22F0B4u;
        goto label_22f0b4;
    }
    ctx->pc = 0x22F0ACu;
    {
        const bool branch_taken_0x22f0ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22f0ac) {
            ctx->pc = 0x22F0D8u;
            goto label_22f0d8;
        }
    }
    ctx->pc = 0x22F0B4u;
label_22f0b4:
    // 0x22f0b4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x22f0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_22f0b8:
    // 0x22f0b8: 0x8e23003c  lw          $v1, 0x3C($s1)
    ctx->pc = 0x22f0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_22f0bc:
    // 0x22f0bc: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x22f0bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_22f0c0:
    // 0x22f0c0: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x22f0c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_22f0c4:
    // 0x22f0c4: 0x8e250034  lw          $a1, 0x34($s1)
    ctx->pc = 0x22f0c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_22f0c8:
    // 0x22f0c8: 0x310bc  dsll32      $v0, $v1, 2
    ctx->pc = 0x22f0c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 2));
label_22f0cc:
    // 0x22f0cc: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x22f0ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_22f0d0:
    // 0x22f0d0: 0xc0a7ab4  jal         func_29EAD0
label_22f0d4:
    if (ctx->pc == 0x22F0D4u) {
        ctx->pc = 0x22F0D4u;
            // 0x22f0d4: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x22F0D8u;
        goto label_22f0d8;
    }
    ctx->pc = 0x22F0D0u;
    SET_GPR_U32(ctx, 31, 0x22F0D8u);
    ctx->pc = 0x22F0D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22F0D0u;
            // 0x22f0d4: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F0D8u; }
        if (ctx->pc != 0x22F0D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F0D8u; }
        if (ctx->pc != 0x22F0D8u) { return; }
    }
    ctx->pc = 0x22F0D8u;
label_22f0d8:
    // 0x22f0d8: 0x26220028  addiu       $v0, $s1, 0x28
    ctx->pc = 0x22f0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
label_22f0dc:
    // 0x22f0dc: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_22f0e0:
    if (ctx->pc == 0x22F0E0u) {
        ctx->pc = 0x22F0E4u;
        goto label_22f0e4;
    }
    ctx->pc = 0x22F0DCu;
    {
        const bool branch_taken_0x22f0dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f0dc) {
            ctx->pc = 0x22F11Cu;
            goto label_22f11c;
        }
    }
    ctx->pc = 0x22F0E4u;
label_22f0e4:
    // 0x22f0e4: 0x8e230030  lw          $v1, 0x30($s1)
    ctx->pc = 0x22f0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_22f0e8:
    // 0x22f0e8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x22f0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_22f0ec:
    // 0x22f0ec: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x22f0ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_22f0f0:
    // 0x22f0f0: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_22f0f4:
    if (ctx->pc == 0x22F0F4u) {
        ctx->pc = 0x22F0F8u;
        goto label_22f0f8;
    }
    ctx->pc = 0x22F0F0u;
    {
        const bool branch_taken_0x22f0f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22f0f0) {
            ctx->pc = 0x22F11Cu;
            goto label_22f11c;
        }
    }
    ctx->pc = 0x22F0F8u;
label_22f0f8:
    // 0x22f0f8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x22f0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_22f0fc:
    // 0x22f0fc: 0x8e230030  lw          $v1, 0x30($s1)
    ctx->pc = 0x22f0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_22f100:
    // 0x22f100: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x22f100u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_22f104:
    // 0x22f104: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x22f104u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_22f108:
    // 0x22f108: 0x8e250028  lw          $a1, 0x28($s1)
    ctx->pc = 0x22f108u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_22f10c:
    // 0x22f10c: 0x310bc  dsll32      $v0, $v1, 2
    ctx->pc = 0x22f10cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 2));
label_22f110:
    // 0x22f110: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x22f110u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_22f114:
    // 0x22f114: 0xc0a7ab4  jal         func_29EAD0
label_22f118:
    if (ctx->pc == 0x22F118u) {
        ctx->pc = 0x22F118u;
            // 0x22f118: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x22F11Cu;
        goto label_22f11c;
    }
    ctx->pc = 0x22F114u;
    SET_GPR_U32(ctx, 31, 0x22F11Cu);
    ctx->pc = 0x22F118u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22F114u;
            // 0x22f118: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F11Cu; }
        if (ctx->pc != 0x22F11Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F11Cu; }
        if (ctx->pc != 0x22F11Cu) { return; }
    }
    ctx->pc = 0x22F11Cu;
label_22f11c:
    // 0x22f11c: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
label_22f120:
    if (ctx->pc == 0x22F120u) {
        ctx->pc = 0x22F120u;
            // 0x22f120: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x22F124u;
        goto label_22f124;
    }
    ctx->pc = 0x22F11Cu;
    {
        const bool branch_taken_0x22f11c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f11c) {
            ctx->pc = 0x22F120u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22F11Cu;
            // 0x22f120: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22F144u;
            goto label_22f144;
        }
    }
    ctx->pc = 0x22F124u;
label_22f124:
    // 0x22f124: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x22f124u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_22f128:
    // 0x22f128: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x22f128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
label_22f12c:
    // 0x22f12c: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_22f130:
    if (ctx->pc == 0x22F130u) {
        ctx->pc = 0x22F130u;
            // 0x22f130: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x22F134u;
        goto label_22f134;
    }
    ctx->pc = 0x22F12Cu;
    {
        const bool branch_taken_0x22f12c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F130u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22F12Cu;
            // 0x22f130: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f12c) {
            ctx->pc = 0x22F140u;
            goto label_22f140;
        }
    }
    ctx->pc = 0x22F134u;
label_22f134:
    // 0x22f134: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x22f134u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_22f138:
    // 0x22f138: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x22f138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
label_22f13c:
    // 0x22f13c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x22f13cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_22f140:
    // 0x22f140: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x22f140u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_22f144:
    // 0x22f144: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x22f144u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_22f148:
    // 0x22f148: 0x58400008  blezl       $v0, . + 4 + (0x8 << 2)
label_22f14c:
    if (ctx->pc == 0x22F14Cu) {
        ctx->pc = 0x22F14Cu;
            // 0x22f14c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22F150u;
        goto label_22f150;
    }
    ctx->pc = 0x22F148u;
    {
        const bool branch_taken_0x22f148 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x22f148) {
            ctx->pc = 0x22F14Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22F148u;
            // 0x22f14c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22F16Cu;
            goto label_22f16c;
        }
    }
    ctx->pc = 0x22F150u;
label_22f150:
    // 0x22f150: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x22f150u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_22f154:
    // 0x22f154: 0x96260004  lhu         $a2, 0x4($s1)
    ctx->pc = 0x22f154u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
label_22f158:
    // 0x22f158: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x22f158u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_22f15c:
    // 0x22f15c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x22f15cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22f160:
    // 0x22f160: 0xc0a7ab4  jal         func_29EAD0
label_22f164:
    if (ctx->pc == 0x22F164u) {
        ctx->pc = 0x22F164u;
            // 0x22f164: 0x2407002d  addiu       $a3, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->pc = 0x22F168u;
        goto label_22f168;
    }
    ctx->pc = 0x22F160u;
    SET_GPR_U32(ctx, 31, 0x22F168u);
    ctx->pc = 0x22F164u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22F160u;
            // 0x22f164: 0x2407002d  addiu       $a3, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F168u; }
        if (ctx->pc != 0x22F168u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F168u; }
        if (ctx->pc != 0x22F168u) { return; }
    }
    ctx->pc = 0x22F168u;
label_22f168:
    // 0x22f168: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x22f168u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22f16c:
    // 0x22f16c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x22f16cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_22f170:
    // 0x22f170: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x22f170u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_22f174:
    // 0x22f174: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x22f174u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_22f178:
    // 0x22f178: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22f178u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_22f17c:
    // 0x22f17c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22f17cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_22f180:
    // 0x22f180: 0x3e00008  jr          $ra
label_22f184:
    if (ctx->pc == 0x22F184u) {
        ctx->pc = 0x22F184u;
            // 0x22f184: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x22F188u;
        goto label_22f188;
    }
    ctx->pc = 0x22F180u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22F184u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22F180u;
            // 0x22f184: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22F188u;
label_22f188:
    // 0x22f188: 0x0  nop
    ctx->pc = 0x22f188u;
    // NOP
label_22f18c:
    // 0x22f18c: 0x0  nop
    ctx->pc = 0x22f18cu;
    // NOP
label_22f190:
    // 0x22f190: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x22f190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_22f194:
    // 0x22f194: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x22f194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_22f198:
    // 0x22f198: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22f198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_22f19c:
    // 0x22f19c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22f19cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_22f1a0:
    // 0x22f1a0: 0x52000020  beql        $s0, $zero, . + 4 + (0x20 << 2)
label_22f1a4:
    if (ctx->pc == 0x22F1A4u) {
        ctx->pc = 0x22F1A4u;
            // 0x22f1a4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22F1A8u;
        goto label_22f1a8;
    }
    ctx->pc = 0x22F1A0u;
    {
        const bool branch_taken_0x22f1a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f1a0) {
            ctx->pc = 0x22F1A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22F1A0u;
            // 0x22f1a4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22F224u;
            goto label_22f224;
        }
    }
    ctx->pc = 0x22F1A8u;
label_22f1a8:
    // 0x22f1a8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x22f1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_22f1ac:
    // 0x22f1ac: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x22f1acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_22f1b0:
    // 0x22f1b0: 0x2442f180  addiu       $v0, $v0, -0xE80
    ctx->pc = 0x22f1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963584));
label_22f1b4:
    // 0x22f1b4: 0x2463f190  addiu       $v1, $v1, -0xE70
    ctx->pc = 0x22f1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963600));
label_22f1b8:
    // 0x22f1b8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x22f1b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_22f1bc:
    // 0x22f1bc: 0x26020008  addiu       $v0, $s0, 0x8
    ctx->pc = 0x22f1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_22f1c0:
    // 0x22f1c0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_22f1c4:
    if (ctx->pc == 0x22F1C4u) {
        ctx->pc = 0x22F1C4u;
            // 0x22f1c4: 0xae030008  sw          $v1, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
        ctx->pc = 0x22F1C8u;
        goto label_22f1c8;
    }
    ctx->pc = 0x22F1C0u;
    {
        const bool branch_taken_0x22f1c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F1C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22F1C0u;
            // 0x22f1c4: 0xae030008  sw          $v1, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f1c0) {
            ctx->pc = 0x22F1D4u;
            goto label_22f1d4;
        }
    }
    ctx->pc = 0x22F1C8u;
label_22f1c8:
    // 0x22f1c8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x22f1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_22f1cc:
    // 0x22f1cc: 0x2442e010  addiu       $v0, $v0, -0x1FF0
    ctx->pc = 0x22f1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959120));
label_22f1d0:
    // 0x22f1d0: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x22f1d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_22f1d4:
    // 0x22f1d4: 0x52000009  beql        $s0, $zero, . + 4 + (0x9 << 2)
label_22f1d8:
    if (ctx->pc == 0x22F1D8u) {
        ctx->pc = 0x22F1D8u;
            // 0x22f1d8: 0x5143c  dsll32      $v0, $a1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
        ctx->pc = 0x22F1DCu;
        goto label_22f1dc;
    }
    ctx->pc = 0x22F1D4u;
    {
        const bool branch_taken_0x22f1d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f1d4) {
            ctx->pc = 0x22F1D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22F1D4u;
            // 0x22f1d8: 0x5143c  dsll32      $v0, $a1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22F1FCu;
            goto label_22f1fc;
        }
    }
    ctx->pc = 0x22F1DCu;
label_22f1dc:
    // 0x22f1dc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x22f1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_22f1e0:
    // 0x22f1e0: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x22f1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
label_22f1e4:
    // 0x22f1e4: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_22f1e8:
    if (ctx->pc == 0x22F1E8u) {
        ctx->pc = 0x22F1E8u;
            // 0x22f1e8: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x22F1ECu;
        goto label_22f1ec;
    }
    ctx->pc = 0x22F1E4u;
    {
        const bool branch_taken_0x22f1e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F1E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22F1E4u;
            // 0x22f1e8: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f1e4) {
            ctx->pc = 0x22F1F8u;
            goto label_22f1f8;
        }
    }
    ctx->pc = 0x22F1ECu;
label_22f1ec:
    // 0x22f1ec: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x22f1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_22f1f0:
    // 0x22f1f0: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x22f1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
label_22f1f4:
    // 0x22f1f4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x22f1f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_22f1f8:
    // 0x22f1f8: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x22f1f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_22f1fc:
    // 0x22f1fc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x22f1fcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_22f200:
    // 0x22f200: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
label_22f204:
    if (ctx->pc == 0x22F204u) {
        ctx->pc = 0x22F208u;
        goto label_22f208;
    }
    ctx->pc = 0x22F200u;
    {
        const bool branch_taken_0x22f200 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x22f200) {
            ctx->pc = 0x22F220u;
            goto label_22f220;
        }
    }
    ctx->pc = 0x22F208u;
label_22f208:
    // 0x22f208: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x22f208u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_22f20c:
    // 0x22f20c: 0x96060004  lhu         $a2, 0x4($s0)
    ctx->pc = 0x22f20cu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_22f210:
    // 0x22f210: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x22f210u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_22f214:
    // 0x22f214: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x22f214u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22f218:
    // 0x22f218: 0xc0a7ab4  jal         func_29EAD0
label_22f21c:
    if (ctx->pc == 0x22F21Cu) {
        ctx->pc = 0x22F21Cu;
            // 0x22f21c: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x22F220u;
        goto label_22f220;
    }
    ctx->pc = 0x22F218u;
    SET_GPR_U32(ctx, 31, 0x22F220u);
    ctx->pc = 0x22F21Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22F218u;
            // 0x22f21c: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F220u; }
        if (ctx->pc != 0x22F220u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F220u; }
        if (ctx->pc != 0x22F220u) { return; }
    }
    ctx->pc = 0x22F220u;
label_22f220:
    // 0x22f220: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x22f220u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22f224:
    // 0x22f224: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x22f224u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_22f228:
    // 0x22f228: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22f228u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_22f22c:
    // 0x22f22c: 0x3e00008  jr          $ra
label_22f230:
    if (ctx->pc == 0x22F230u) {
        ctx->pc = 0x22F230u;
            // 0x22f230: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x22F234u;
        goto label_22f234;
    }
    ctx->pc = 0x22F22Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22F230u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22F22Cu;
            // 0x22f230: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22F234u;
label_22f234:
    // 0x22f234: 0x0  nop
    ctx->pc = 0x22f234u;
    // NOP
label_22f238:
    // 0x22f238: 0x0  nop
    ctx->pc = 0x22f238u;
    // NOP
label_22f23c:
    // 0x22f23c: 0x0  nop
    ctx->pc = 0x22f23cu;
    // NOP
label_22f240:
    // 0x22f240: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x22f240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_22f244:
    // 0x22f244: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x22f244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_22f248:
    // 0x22f248: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22f248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_22f24c:
    // 0x22f24c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22f24cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_22f250:
    // 0x22f250: 0x52000020  beql        $s0, $zero, . + 4 + (0x20 << 2)
label_22f254:
    if (ctx->pc == 0x22F254u) {
        ctx->pc = 0x22F254u;
            // 0x22f254: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22F258u;
        goto label_22f258;
    }
    ctx->pc = 0x22F250u;
    {
        const bool branch_taken_0x22f250 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f250) {
            ctx->pc = 0x22F254u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22F250u;
            // 0x22f254: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22F2D4u;
            goto label_22f2d4;
        }
    }
    ctx->pc = 0x22F258u;
label_22f258:
    // 0x22f258: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x22f258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_22f25c:
    // 0x22f25c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x22f25cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_22f260:
    // 0x22f260: 0x2442f1b0  addiu       $v0, $v0, -0xE50
    ctx->pc = 0x22f260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963632));
label_22f264:
    // 0x22f264: 0x2463f1c0  addiu       $v1, $v1, -0xE40
    ctx->pc = 0x22f264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963648));
label_22f268:
    // 0x22f268: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x22f268u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_22f26c:
    // 0x22f26c: 0x26020008  addiu       $v0, $s0, 0x8
    ctx->pc = 0x22f26cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_22f270:
    // 0x22f270: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_22f274:
    if (ctx->pc == 0x22F274u) {
        ctx->pc = 0x22F274u;
            // 0x22f274: 0xae030008  sw          $v1, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
        ctx->pc = 0x22F278u;
        goto label_22f278;
    }
    ctx->pc = 0x22F270u;
    {
        const bool branch_taken_0x22f270 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F274u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22F270u;
            // 0x22f274: 0xae030008  sw          $v1, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f270) {
            ctx->pc = 0x22F284u;
            goto label_22f284;
        }
    }
    ctx->pc = 0x22F278u;
label_22f278:
    // 0x22f278: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x22f278u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_22f27c:
    // 0x22f27c: 0x2442e010  addiu       $v0, $v0, -0x1FF0
    ctx->pc = 0x22f27cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959120));
label_22f280:
    // 0x22f280: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x22f280u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_22f284:
    // 0x22f284: 0x52000009  beql        $s0, $zero, . + 4 + (0x9 << 2)
label_22f288:
    if (ctx->pc == 0x22F288u) {
        ctx->pc = 0x22F288u;
            // 0x22f288: 0x5143c  dsll32      $v0, $a1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
        ctx->pc = 0x22F28Cu;
        goto label_22f28c;
    }
    ctx->pc = 0x22F284u;
    {
        const bool branch_taken_0x22f284 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f284) {
            ctx->pc = 0x22F288u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22F284u;
            // 0x22f288: 0x5143c  dsll32      $v0, $a1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22F2ACu;
            goto label_22f2ac;
        }
    }
    ctx->pc = 0x22F28Cu;
label_22f28c:
    // 0x22f28c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x22f28cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_22f290:
    // 0x22f290: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x22f290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
label_22f294:
    // 0x22f294: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_22f298:
    if (ctx->pc == 0x22F298u) {
        ctx->pc = 0x22F298u;
            // 0x22f298: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x22F29Cu;
        goto label_22f29c;
    }
    ctx->pc = 0x22F294u;
    {
        const bool branch_taken_0x22f294 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F298u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22F294u;
            // 0x22f298: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f294) {
            ctx->pc = 0x22F2A8u;
            goto label_22f2a8;
        }
    }
    ctx->pc = 0x22F29Cu;
label_22f29c:
    // 0x22f29c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x22f29cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_22f2a0:
    // 0x22f2a0: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x22f2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
label_22f2a4:
    // 0x22f2a4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x22f2a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_22f2a8:
    // 0x22f2a8: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x22f2a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_22f2ac:
    // 0x22f2ac: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x22f2acu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_22f2b0:
    // 0x22f2b0: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
label_22f2b4:
    if (ctx->pc == 0x22F2B4u) {
        ctx->pc = 0x22F2B8u;
        goto label_22f2b8;
    }
    ctx->pc = 0x22F2B0u;
    {
        const bool branch_taken_0x22f2b0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x22f2b0) {
            ctx->pc = 0x22F2D0u;
            goto label_22f2d0;
        }
    }
    ctx->pc = 0x22F2B8u;
label_22f2b8:
    // 0x22f2b8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x22f2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_22f2bc:
    // 0x22f2bc: 0x96060004  lhu         $a2, 0x4($s0)
    ctx->pc = 0x22f2bcu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_22f2c0:
    // 0x22f2c0: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x22f2c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_22f2c4:
    // 0x22f2c4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x22f2c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22f2c8:
    // 0x22f2c8: 0xc0a7ab4  jal         func_29EAD0
label_22f2cc:
    if (ctx->pc == 0x22F2CCu) {
        ctx->pc = 0x22F2CCu;
            // 0x22f2cc: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x22F2D0u;
        goto label_22f2d0;
    }
    ctx->pc = 0x22F2C8u;
    SET_GPR_U32(ctx, 31, 0x22F2D0u);
    ctx->pc = 0x22F2CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22F2C8u;
            // 0x22f2cc: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F2D0u; }
        if (ctx->pc != 0x22F2D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F2D0u; }
        if (ctx->pc != 0x22F2D0u) { return; }
    }
    ctx->pc = 0x22F2D0u;
label_22f2d0:
    // 0x22f2d0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x22f2d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22f2d4:
    // 0x22f2d4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x22f2d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_22f2d8:
    // 0x22f2d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22f2d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_22f2dc:
    // 0x22f2dc: 0x3e00008  jr          $ra
label_22f2e0:
    if (ctx->pc == 0x22F2E0u) {
        ctx->pc = 0x22F2E0u;
            // 0x22f2e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x22F2E4u;
        goto label_22f2e4;
    }
    ctx->pc = 0x22F2DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22F2E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22F2DCu;
            // 0x22f2e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22F2E4u;
label_22f2e4:
    // 0x22f2e4: 0x0  nop
    ctx->pc = 0x22f2e4u;
    // NOP
label_22f2e8:
    // 0x22f2e8: 0x0  nop
    ctx->pc = 0x22f2e8u;
    // NOP
label_22f2ec:
    // 0x22f2ec: 0x0  nop
    ctx->pc = 0x22f2ecu;
    // NOP
}
