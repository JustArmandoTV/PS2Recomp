#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0031E5B0
// Address: 0x31e5b0 - 0x31ebf0
void sub_0031E5B0_0x31e5b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031E5B0_0x31e5b0");
#endif

    switch (ctx->pc) {
        case 0x31e5b0u: goto label_31e5b0;
        case 0x31e5b4u: goto label_31e5b4;
        case 0x31e5b8u: goto label_31e5b8;
        case 0x31e5bcu: goto label_31e5bc;
        case 0x31e5c0u: goto label_31e5c0;
        case 0x31e5c4u: goto label_31e5c4;
        case 0x31e5c8u: goto label_31e5c8;
        case 0x31e5ccu: goto label_31e5cc;
        case 0x31e5d0u: goto label_31e5d0;
        case 0x31e5d4u: goto label_31e5d4;
        case 0x31e5d8u: goto label_31e5d8;
        case 0x31e5dcu: goto label_31e5dc;
        case 0x31e5e0u: goto label_31e5e0;
        case 0x31e5e4u: goto label_31e5e4;
        case 0x31e5e8u: goto label_31e5e8;
        case 0x31e5ecu: goto label_31e5ec;
        case 0x31e5f0u: goto label_31e5f0;
        case 0x31e5f4u: goto label_31e5f4;
        case 0x31e5f8u: goto label_31e5f8;
        case 0x31e5fcu: goto label_31e5fc;
        case 0x31e600u: goto label_31e600;
        case 0x31e604u: goto label_31e604;
        case 0x31e608u: goto label_31e608;
        case 0x31e60cu: goto label_31e60c;
        case 0x31e610u: goto label_31e610;
        case 0x31e614u: goto label_31e614;
        case 0x31e618u: goto label_31e618;
        case 0x31e61cu: goto label_31e61c;
        case 0x31e620u: goto label_31e620;
        case 0x31e624u: goto label_31e624;
        case 0x31e628u: goto label_31e628;
        case 0x31e62cu: goto label_31e62c;
        case 0x31e630u: goto label_31e630;
        case 0x31e634u: goto label_31e634;
        case 0x31e638u: goto label_31e638;
        case 0x31e63cu: goto label_31e63c;
        case 0x31e640u: goto label_31e640;
        case 0x31e644u: goto label_31e644;
        case 0x31e648u: goto label_31e648;
        case 0x31e64cu: goto label_31e64c;
        case 0x31e650u: goto label_31e650;
        case 0x31e654u: goto label_31e654;
        case 0x31e658u: goto label_31e658;
        case 0x31e65cu: goto label_31e65c;
        case 0x31e660u: goto label_31e660;
        case 0x31e664u: goto label_31e664;
        case 0x31e668u: goto label_31e668;
        case 0x31e66cu: goto label_31e66c;
        case 0x31e670u: goto label_31e670;
        case 0x31e674u: goto label_31e674;
        case 0x31e678u: goto label_31e678;
        case 0x31e67cu: goto label_31e67c;
        case 0x31e680u: goto label_31e680;
        case 0x31e684u: goto label_31e684;
        case 0x31e688u: goto label_31e688;
        case 0x31e68cu: goto label_31e68c;
        case 0x31e690u: goto label_31e690;
        case 0x31e694u: goto label_31e694;
        case 0x31e698u: goto label_31e698;
        case 0x31e69cu: goto label_31e69c;
        case 0x31e6a0u: goto label_31e6a0;
        case 0x31e6a4u: goto label_31e6a4;
        case 0x31e6a8u: goto label_31e6a8;
        case 0x31e6acu: goto label_31e6ac;
        case 0x31e6b0u: goto label_31e6b0;
        case 0x31e6b4u: goto label_31e6b4;
        case 0x31e6b8u: goto label_31e6b8;
        case 0x31e6bcu: goto label_31e6bc;
        case 0x31e6c0u: goto label_31e6c0;
        case 0x31e6c4u: goto label_31e6c4;
        case 0x31e6c8u: goto label_31e6c8;
        case 0x31e6ccu: goto label_31e6cc;
        case 0x31e6d0u: goto label_31e6d0;
        case 0x31e6d4u: goto label_31e6d4;
        case 0x31e6d8u: goto label_31e6d8;
        case 0x31e6dcu: goto label_31e6dc;
        case 0x31e6e0u: goto label_31e6e0;
        case 0x31e6e4u: goto label_31e6e4;
        case 0x31e6e8u: goto label_31e6e8;
        case 0x31e6ecu: goto label_31e6ec;
        case 0x31e6f0u: goto label_31e6f0;
        case 0x31e6f4u: goto label_31e6f4;
        case 0x31e6f8u: goto label_31e6f8;
        case 0x31e6fcu: goto label_31e6fc;
        case 0x31e700u: goto label_31e700;
        case 0x31e704u: goto label_31e704;
        case 0x31e708u: goto label_31e708;
        case 0x31e70cu: goto label_31e70c;
        case 0x31e710u: goto label_31e710;
        case 0x31e714u: goto label_31e714;
        case 0x31e718u: goto label_31e718;
        case 0x31e71cu: goto label_31e71c;
        case 0x31e720u: goto label_31e720;
        case 0x31e724u: goto label_31e724;
        case 0x31e728u: goto label_31e728;
        case 0x31e72cu: goto label_31e72c;
        case 0x31e730u: goto label_31e730;
        case 0x31e734u: goto label_31e734;
        case 0x31e738u: goto label_31e738;
        case 0x31e73cu: goto label_31e73c;
        case 0x31e740u: goto label_31e740;
        case 0x31e744u: goto label_31e744;
        case 0x31e748u: goto label_31e748;
        case 0x31e74cu: goto label_31e74c;
        case 0x31e750u: goto label_31e750;
        case 0x31e754u: goto label_31e754;
        case 0x31e758u: goto label_31e758;
        case 0x31e75cu: goto label_31e75c;
        case 0x31e760u: goto label_31e760;
        case 0x31e764u: goto label_31e764;
        case 0x31e768u: goto label_31e768;
        case 0x31e76cu: goto label_31e76c;
        case 0x31e770u: goto label_31e770;
        case 0x31e774u: goto label_31e774;
        case 0x31e778u: goto label_31e778;
        case 0x31e77cu: goto label_31e77c;
        case 0x31e780u: goto label_31e780;
        case 0x31e784u: goto label_31e784;
        case 0x31e788u: goto label_31e788;
        case 0x31e78cu: goto label_31e78c;
        case 0x31e790u: goto label_31e790;
        case 0x31e794u: goto label_31e794;
        case 0x31e798u: goto label_31e798;
        case 0x31e79cu: goto label_31e79c;
        case 0x31e7a0u: goto label_31e7a0;
        case 0x31e7a4u: goto label_31e7a4;
        case 0x31e7a8u: goto label_31e7a8;
        case 0x31e7acu: goto label_31e7ac;
        case 0x31e7b0u: goto label_31e7b0;
        case 0x31e7b4u: goto label_31e7b4;
        case 0x31e7b8u: goto label_31e7b8;
        case 0x31e7bcu: goto label_31e7bc;
        case 0x31e7c0u: goto label_31e7c0;
        case 0x31e7c4u: goto label_31e7c4;
        case 0x31e7c8u: goto label_31e7c8;
        case 0x31e7ccu: goto label_31e7cc;
        case 0x31e7d0u: goto label_31e7d0;
        case 0x31e7d4u: goto label_31e7d4;
        case 0x31e7d8u: goto label_31e7d8;
        case 0x31e7dcu: goto label_31e7dc;
        case 0x31e7e0u: goto label_31e7e0;
        case 0x31e7e4u: goto label_31e7e4;
        case 0x31e7e8u: goto label_31e7e8;
        case 0x31e7ecu: goto label_31e7ec;
        case 0x31e7f0u: goto label_31e7f0;
        case 0x31e7f4u: goto label_31e7f4;
        case 0x31e7f8u: goto label_31e7f8;
        case 0x31e7fcu: goto label_31e7fc;
        case 0x31e800u: goto label_31e800;
        case 0x31e804u: goto label_31e804;
        case 0x31e808u: goto label_31e808;
        case 0x31e80cu: goto label_31e80c;
        case 0x31e810u: goto label_31e810;
        case 0x31e814u: goto label_31e814;
        case 0x31e818u: goto label_31e818;
        case 0x31e81cu: goto label_31e81c;
        case 0x31e820u: goto label_31e820;
        case 0x31e824u: goto label_31e824;
        case 0x31e828u: goto label_31e828;
        case 0x31e82cu: goto label_31e82c;
        case 0x31e830u: goto label_31e830;
        case 0x31e834u: goto label_31e834;
        case 0x31e838u: goto label_31e838;
        case 0x31e83cu: goto label_31e83c;
        case 0x31e840u: goto label_31e840;
        case 0x31e844u: goto label_31e844;
        case 0x31e848u: goto label_31e848;
        case 0x31e84cu: goto label_31e84c;
        case 0x31e850u: goto label_31e850;
        case 0x31e854u: goto label_31e854;
        case 0x31e858u: goto label_31e858;
        case 0x31e85cu: goto label_31e85c;
        case 0x31e860u: goto label_31e860;
        case 0x31e864u: goto label_31e864;
        case 0x31e868u: goto label_31e868;
        case 0x31e86cu: goto label_31e86c;
        case 0x31e870u: goto label_31e870;
        case 0x31e874u: goto label_31e874;
        case 0x31e878u: goto label_31e878;
        case 0x31e87cu: goto label_31e87c;
        case 0x31e880u: goto label_31e880;
        case 0x31e884u: goto label_31e884;
        case 0x31e888u: goto label_31e888;
        case 0x31e88cu: goto label_31e88c;
        case 0x31e890u: goto label_31e890;
        case 0x31e894u: goto label_31e894;
        case 0x31e898u: goto label_31e898;
        case 0x31e89cu: goto label_31e89c;
        case 0x31e8a0u: goto label_31e8a0;
        case 0x31e8a4u: goto label_31e8a4;
        case 0x31e8a8u: goto label_31e8a8;
        case 0x31e8acu: goto label_31e8ac;
        case 0x31e8b0u: goto label_31e8b0;
        case 0x31e8b4u: goto label_31e8b4;
        case 0x31e8b8u: goto label_31e8b8;
        case 0x31e8bcu: goto label_31e8bc;
        case 0x31e8c0u: goto label_31e8c0;
        case 0x31e8c4u: goto label_31e8c4;
        case 0x31e8c8u: goto label_31e8c8;
        case 0x31e8ccu: goto label_31e8cc;
        case 0x31e8d0u: goto label_31e8d0;
        case 0x31e8d4u: goto label_31e8d4;
        case 0x31e8d8u: goto label_31e8d8;
        case 0x31e8dcu: goto label_31e8dc;
        case 0x31e8e0u: goto label_31e8e0;
        case 0x31e8e4u: goto label_31e8e4;
        case 0x31e8e8u: goto label_31e8e8;
        case 0x31e8ecu: goto label_31e8ec;
        case 0x31e8f0u: goto label_31e8f0;
        case 0x31e8f4u: goto label_31e8f4;
        case 0x31e8f8u: goto label_31e8f8;
        case 0x31e8fcu: goto label_31e8fc;
        case 0x31e900u: goto label_31e900;
        case 0x31e904u: goto label_31e904;
        case 0x31e908u: goto label_31e908;
        case 0x31e90cu: goto label_31e90c;
        case 0x31e910u: goto label_31e910;
        case 0x31e914u: goto label_31e914;
        case 0x31e918u: goto label_31e918;
        case 0x31e91cu: goto label_31e91c;
        case 0x31e920u: goto label_31e920;
        case 0x31e924u: goto label_31e924;
        case 0x31e928u: goto label_31e928;
        case 0x31e92cu: goto label_31e92c;
        case 0x31e930u: goto label_31e930;
        case 0x31e934u: goto label_31e934;
        case 0x31e938u: goto label_31e938;
        case 0x31e93cu: goto label_31e93c;
        case 0x31e940u: goto label_31e940;
        case 0x31e944u: goto label_31e944;
        case 0x31e948u: goto label_31e948;
        case 0x31e94cu: goto label_31e94c;
        case 0x31e950u: goto label_31e950;
        case 0x31e954u: goto label_31e954;
        case 0x31e958u: goto label_31e958;
        case 0x31e95cu: goto label_31e95c;
        case 0x31e960u: goto label_31e960;
        case 0x31e964u: goto label_31e964;
        case 0x31e968u: goto label_31e968;
        case 0x31e96cu: goto label_31e96c;
        case 0x31e970u: goto label_31e970;
        case 0x31e974u: goto label_31e974;
        case 0x31e978u: goto label_31e978;
        case 0x31e97cu: goto label_31e97c;
        case 0x31e980u: goto label_31e980;
        case 0x31e984u: goto label_31e984;
        case 0x31e988u: goto label_31e988;
        case 0x31e98cu: goto label_31e98c;
        case 0x31e990u: goto label_31e990;
        case 0x31e994u: goto label_31e994;
        case 0x31e998u: goto label_31e998;
        case 0x31e99cu: goto label_31e99c;
        case 0x31e9a0u: goto label_31e9a0;
        case 0x31e9a4u: goto label_31e9a4;
        case 0x31e9a8u: goto label_31e9a8;
        case 0x31e9acu: goto label_31e9ac;
        case 0x31e9b0u: goto label_31e9b0;
        case 0x31e9b4u: goto label_31e9b4;
        case 0x31e9b8u: goto label_31e9b8;
        case 0x31e9bcu: goto label_31e9bc;
        case 0x31e9c0u: goto label_31e9c0;
        case 0x31e9c4u: goto label_31e9c4;
        case 0x31e9c8u: goto label_31e9c8;
        case 0x31e9ccu: goto label_31e9cc;
        case 0x31e9d0u: goto label_31e9d0;
        case 0x31e9d4u: goto label_31e9d4;
        case 0x31e9d8u: goto label_31e9d8;
        case 0x31e9dcu: goto label_31e9dc;
        case 0x31e9e0u: goto label_31e9e0;
        case 0x31e9e4u: goto label_31e9e4;
        case 0x31e9e8u: goto label_31e9e8;
        case 0x31e9ecu: goto label_31e9ec;
        case 0x31e9f0u: goto label_31e9f0;
        case 0x31e9f4u: goto label_31e9f4;
        case 0x31e9f8u: goto label_31e9f8;
        case 0x31e9fcu: goto label_31e9fc;
        case 0x31ea00u: goto label_31ea00;
        case 0x31ea04u: goto label_31ea04;
        case 0x31ea08u: goto label_31ea08;
        case 0x31ea0cu: goto label_31ea0c;
        case 0x31ea10u: goto label_31ea10;
        case 0x31ea14u: goto label_31ea14;
        case 0x31ea18u: goto label_31ea18;
        case 0x31ea1cu: goto label_31ea1c;
        case 0x31ea20u: goto label_31ea20;
        case 0x31ea24u: goto label_31ea24;
        case 0x31ea28u: goto label_31ea28;
        case 0x31ea2cu: goto label_31ea2c;
        case 0x31ea30u: goto label_31ea30;
        case 0x31ea34u: goto label_31ea34;
        case 0x31ea38u: goto label_31ea38;
        case 0x31ea3cu: goto label_31ea3c;
        case 0x31ea40u: goto label_31ea40;
        case 0x31ea44u: goto label_31ea44;
        case 0x31ea48u: goto label_31ea48;
        case 0x31ea4cu: goto label_31ea4c;
        case 0x31ea50u: goto label_31ea50;
        case 0x31ea54u: goto label_31ea54;
        case 0x31ea58u: goto label_31ea58;
        case 0x31ea5cu: goto label_31ea5c;
        case 0x31ea60u: goto label_31ea60;
        case 0x31ea64u: goto label_31ea64;
        case 0x31ea68u: goto label_31ea68;
        case 0x31ea6cu: goto label_31ea6c;
        case 0x31ea70u: goto label_31ea70;
        case 0x31ea74u: goto label_31ea74;
        case 0x31ea78u: goto label_31ea78;
        case 0x31ea7cu: goto label_31ea7c;
        case 0x31ea80u: goto label_31ea80;
        case 0x31ea84u: goto label_31ea84;
        case 0x31ea88u: goto label_31ea88;
        case 0x31ea8cu: goto label_31ea8c;
        case 0x31ea90u: goto label_31ea90;
        case 0x31ea94u: goto label_31ea94;
        case 0x31ea98u: goto label_31ea98;
        case 0x31ea9cu: goto label_31ea9c;
        case 0x31eaa0u: goto label_31eaa0;
        case 0x31eaa4u: goto label_31eaa4;
        case 0x31eaa8u: goto label_31eaa8;
        case 0x31eaacu: goto label_31eaac;
        case 0x31eab0u: goto label_31eab0;
        case 0x31eab4u: goto label_31eab4;
        case 0x31eab8u: goto label_31eab8;
        case 0x31eabcu: goto label_31eabc;
        case 0x31eac0u: goto label_31eac0;
        case 0x31eac4u: goto label_31eac4;
        case 0x31eac8u: goto label_31eac8;
        case 0x31eaccu: goto label_31eacc;
        case 0x31ead0u: goto label_31ead0;
        case 0x31ead4u: goto label_31ead4;
        case 0x31ead8u: goto label_31ead8;
        case 0x31eadcu: goto label_31eadc;
        case 0x31eae0u: goto label_31eae0;
        case 0x31eae4u: goto label_31eae4;
        case 0x31eae8u: goto label_31eae8;
        case 0x31eaecu: goto label_31eaec;
        case 0x31eaf0u: goto label_31eaf0;
        case 0x31eaf4u: goto label_31eaf4;
        case 0x31eaf8u: goto label_31eaf8;
        case 0x31eafcu: goto label_31eafc;
        case 0x31eb00u: goto label_31eb00;
        case 0x31eb04u: goto label_31eb04;
        case 0x31eb08u: goto label_31eb08;
        case 0x31eb0cu: goto label_31eb0c;
        case 0x31eb10u: goto label_31eb10;
        case 0x31eb14u: goto label_31eb14;
        case 0x31eb18u: goto label_31eb18;
        case 0x31eb1cu: goto label_31eb1c;
        case 0x31eb20u: goto label_31eb20;
        case 0x31eb24u: goto label_31eb24;
        case 0x31eb28u: goto label_31eb28;
        case 0x31eb2cu: goto label_31eb2c;
        case 0x31eb30u: goto label_31eb30;
        case 0x31eb34u: goto label_31eb34;
        case 0x31eb38u: goto label_31eb38;
        case 0x31eb3cu: goto label_31eb3c;
        case 0x31eb40u: goto label_31eb40;
        case 0x31eb44u: goto label_31eb44;
        case 0x31eb48u: goto label_31eb48;
        case 0x31eb4cu: goto label_31eb4c;
        case 0x31eb50u: goto label_31eb50;
        case 0x31eb54u: goto label_31eb54;
        case 0x31eb58u: goto label_31eb58;
        case 0x31eb5cu: goto label_31eb5c;
        case 0x31eb60u: goto label_31eb60;
        case 0x31eb64u: goto label_31eb64;
        case 0x31eb68u: goto label_31eb68;
        case 0x31eb6cu: goto label_31eb6c;
        case 0x31eb70u: goto label_31eb70;
        case 0x31eb74u: goto label_31eb74;
        case 0x31eb78u: goto label_31eb78;
        case 0x31eb7cu: goto label_31eb7c;
        case 0x31eb80u: goto label_31eb80;
        case 0x31eb84u: goto label_31eb84;
        case 0x31eb88u: goto label_31eb88;
        case 0x31eb8cu: goto label_31eb8c;
        case 0x31eb90u: goto label_31eb90;
        case 0x31eb94u: goto label_31eb94;
        case 0x31eb98u: goto label_31eb98;
        case 0x31eb9cu: goto label_31eb9c;
        case 0x31eba0u: goto label_31eba0;
        case 0x31eba4u: goto label_31eba4;
        case 0x31eba8u: goto label_31eba8;
        case 0x31ebacu: goto label_31ebac;
        case 0x31ebb0u: goto label_31ebb0;
        case 0x31ebb4u: goto label_31ebb4;
        case 0x31ebb8u: goto label_31ebb8;
        case 0x31ebbcu: goto label_31ebbc;
        case 0x31ebc0u: goto label_31ebc0;
        case 0x31ebc4u: goto label_31ebc4;
        case 0x31ebc8u: goto label_31ebc8;
        case 0x31ebccu: goto label_31ebcc;
        case 0x31ebd0u: goto label_31ebd0;
        case 0x31ebd4u: goto label_31ebd4;
        case 0x31ebd8u: goto label_31ebd8;
        case 0x31ebdcu: goto label_31ebdc;
        case 0x31ebe0u: goto label_31ebe0;
        case 0x31ebe4u: goto label_31ebe4;
        case 0x31ebe8u: goto label_31ebe8;
        case 0x31ebecu: goto label_31ebec;
        default: break;
    }

    ctx->pc = 0x31e5b0u;

label_31e5b0:
    // 0x31e5b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x31e5b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_31e5b4:
    // 0x31e5b4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x31e5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_31e5b8:
    // 0x31e5b8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x31e5b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_31e5bc:
    // 0x31e5bc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x31e5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_31e5c0:
    // 0x31e5c0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x31e5c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_31e5c4:
    // 0x31e5c4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x31e5c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_31e5c8:
    // 0x31e5c8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x31e5c8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_31e5cc:
    // 0x31e5cc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x31e5ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_31e5d0:
    // 0x31e5d0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x31e5d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_31e5d4:
    // 0x31e5d4: 0x8c84068c  lw          $a0, 0x68C($a0)
    ctx->pc = 0x31e5d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1676)));
label_31e5d8:
    // 0x31e5d8: 0x8c70a140  lw          $s0, -0x5EC0($v1)
    ctx->pc = 0x31e5d8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294943040)));
label_31e5dc:
    // 0x31e5dc: 0x8c5189d0  lw          $s1, -0x7630($v0)
    ctx->pc = 0x31e5dcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
label_31e5e0:
    // 0x31e5e0: 0x14800105  bnez        $a0, . + 4 + (0x105 << 2)
label_31e5e4:
    if (ctx->pc == 0x31E5E4u) {
        ctx->pc = 0x31E5E4u;
            // 0x31e5e4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x31E5E8u;
        goto label_31e5e8;
    }
    ctx->pc = 0x31E5E0u;
    {
        const bool branch_taken_0x31e5e0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x31E5E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31E5E0u;
            // 0x31e5e4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e5e0) {
            ctx->pc = 0x31E9F8u;
            goto label_31e9f8;
        }
    }
    ctx->pc = 0x31E5E8u;
label_31e5e8:
    // 0x31e5e8: 0x8e220088  lw          $v0, 0x88($s1)
    ctx->pc = 0x31e5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
label_31e5ec:
    // 0x31e5ec: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x31e5ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_31e5f0:
    // 0x31e5f0: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
label_31e5f4:
    if (ctx->pc == 0x31E5F4u) {
        ctx->pc = 0x31E5F4u;
            // 0x31e5f4: 0x30430002  andi        $v1, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
        ctx->pc = 0x31E5F8u;
        goto label_31e5f8;
    }
    ctx->pc = 0x31E5F0u;
    {
        const bool branch_taken_0x31e5f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x31e5f0) {
            ctx->pc = 0x31E5F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x31E5F0u;
            // 0x31e5f4: 0x30430002  andi        $v1, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
            ctx->pc = 0x31E60Cu;
            goto label_31e60c;
        }
    }
    ctx->pc = 0x31E5F8u;
label_31e5f8:
    // 0x31e5f8: 0xae600688  sw          $zero, 0x688($s3)
    ctx->pc = 0x31e5f8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1672), GPR_U32(ctx, 0));
label_31e5fc:
    // 0x31e5fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31e5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31e600:
    // 0x31e600: 0xae62068c  sw          $v0, 0x68C($s3)
    ctx->pc = 0x31e600u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1676), GPR_U32(ctx, 2));
label_31e604:
    // 0x31e604: 0x100000fc  b           . + 4 + (0xFC << 2)
label_31e608:
    if (ctx->pc == 0x31E608u) {
        ctx->pc = 0x31E608u;
            // 0x31e608: 0xae600690  sw          $zero, 0x690($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 1680), GPR_U32(ctx, 0));
        ctx->pc = 0x31E60Cu;
        goto label_31e60c;
    }
    ctx->pc = 0x31E604u;
    {
        const bool branch_taken_0x31e604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E608u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31E604u;
            // 0x31e608: 0xae600690  sw          $zero, 0x690($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 1680), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e604) {
            ctx->pc = 0x31E9F8u;
            goto label_31e9f8;
        }
    }
    ctx->pc = 0x31E60Cu;
label_31e60c:
    // 0x31e60c: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
label_31e610:
    if (ctx->pc == 0x31E610u) {
        ctx->pc = 0x31E610u;
            // 0x31e610: 0x30430004  andi        $v1, $v0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
        ctx->pc = 0x31E614u;
        goto label_31e614;
    }
    ctx->pc = 0x31E60Cu;
    {
        const bool branch_taken_0x31e60c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x31e60c) {
            ctx->pc = 0x31E610u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x31E60Cu;
            // 0x31e610: 0x30430004  andi        $v1, $v0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
            ctx->pc = 0x31E628u;
            goto label_31e628;
        }
    }
    ctx->pc = 0x31E614u;
label_31e614:
    // 0x31e614: 0xae600688  sw          $zero, 0x688($s3)
    ctx->pc = 0x31e614u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1672), GPR_U32(ctx, 0));
label_31e618:
    // 0x31e618: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31e618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31e61c:
    // 0x31e61c: 0xae62068c  sw          $v0, 0x68C($s3)
    ctx->pc = 0x31e61cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1676), GPR_U32(ctx, 2));
label_31e620:
    // 0x31e620: 0x100000f5  b           . + 4 + (0xF5 << 2)
label_31e624:
    if (ctx->pc == 0x31E624u) {
        ctx->pc = 0x31E624u;
            // 0x31e624: 0xae620690  sw          $v0, 0x690($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 1680), GPR_U32(ctx, 2));
        ctx->pc = 0x31E628u;
        goto label_31e628;
    }
    ctx->pc = 0x31E620u;
    {
        const bool branch_taken_0x31e620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31E620u;
            // 0x31e624: 0xae620690  sw          $v0, 0x690($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 1680), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e620) {
            ctx->pc = 0x31E9F8u;
            goto label_31e9f8;
        }
    }
    ctx->pc = 0x31E628u;
label_31e628:
    // 0x31e628: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
label_31e62c:
    if (ctx->pc == 0x31E62Cu) {
        ctx->pc = 0x31E62Cu;
            // 0x31e62c: 0x30430008  andi        $v1, $v0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
        ctx->pc = 0x31E630u;
        goto label_31e630;
    }
    ctx->pc = 0x31E628u;
    {
        const bool branch_taken_0x31e628 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x31e628) {
            ctx->pc = 0x31E62Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x31E628u;
            // 0x31e62c: 0x30430008  andi        $v1, $v0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
            ctx->pc = 0x31E648u;
            goto label_31e648;
        }
    }
    ctx->pc = 0x31E630u;
label_31e630:
    // 0x31e630: 0xae600688  sw          $zero, 0x688($s3)
    ctx->pc = 0x31e630u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1672), GPR_U32(ctx, 0));
label_31e634:
    // 0x31e634: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31e634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31e638:
    // 0x31e638: 0xae62068c  sw          $v0, 0x68C($s3)
    ctx->pc = 0x31e638u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1676), GPR_U32(ctx, 2));
label_31e63c:
    // 0x31e63c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x31e63cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_31e640:
    // 0x31e640: 0x100000ed  b           . + 4 + (0xED << 2)
label_31e644:
    if (ctx->pc == 0x31E644u) {
        ctx->pc = 0x31E644u;
            // 0x31e644: 0xae620690  sw          $v0, 0x690($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 1680), GPR_U32(ctx, 2));
        ctx->pc = 0x31E648u;
        goto label_31e648;
    }
    ctx->pc = 0x31E640u;
    {
        const bool branch_taken_0x31e640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E644u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31E640u;
            // 0x31e644: 0xae620690  sw          $v0, 0x690($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 1680), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e640) {
            ctx->pc = 0x31E9F8u;
            goto label_31e9f8;
        }
    }
    ctx->pc = 0x31E648u;
label_31e648:
    // 0x31e648: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
label_31e64c:
    if (ctx->pc == 0x31E64Cu) {
        ctx->pc = 0x31E64Cu;
            // 0x31e64c: 0x30430010  andi        $v1, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
        ctx->pc = 0x31E650u;
        goto label_31e650;
    }
    ctx->pc = 0x31E648u;
    {
        const bool branch_taken_0x31e648 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x31e648) {
            ctx->pc = 0x31E64Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x31E648u;
            // 0x31e64c: 0x30430010  andi        $v1, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
            ctx->pc = 0x31E668u;
            goto label_31e668;
        }
    }
    ctx->pc = 0x31E650u;
label_31e650:
    // 0x31e650: 0xae600688  sw          $zero, 0x688($s3)
    ctx->pc = 0x31e650u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1672), GPR_U32(ctx, 0));
label_31e654:
    // 0x31e654: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31e654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31e658:
    // 0x31e658: 0xae62068c  sw          $v0, 0x68C($s3)
    ctx->pc = 0x31e658u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1676), GPR_U32(ctx, 2));
label_31e65c:
    // 0x31e65c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x31e65cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_31e660:
    // 0x31e660: 0x100000e5  b           . + 4 + (0xE5 << 2)
label_31e664:
    if (ctx->pc == 0x31E664u) {
        ctx->pc = 0x31E664u;
            // 0x31e664: 0xae620690  sw          $v0, 0x690($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 1680), GPR_U32(ctx, 2));
        ctx->pc = 0x31E668u;
        goto label_31e668;
    }
    ctx->pc = 0x31E660u;
    {
        const bool branch_taken_0x31e660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E664u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31E660u;
            // 0x31e664: 0xae620690  sw          $v0, 0x690($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 1680), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e660) {
            ctx->pc = 0x31E9F8u;
            goto label_31e9f8;
        }
    }
    ctx->pc = 0x31E668u;
label_31e668:
    // 0x31e668: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
label_31e66c:
    if (ctx->pc == 0x31E66Cu) {
        ctx->pc = 0x31E66Cu;
            // 0x31e66c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x31E670u;
        goto label_31e670;
    }
    ctx->pc = 0x31E668u;
    {
        const bool branch_taken_0x31e668 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x31e668) {
            ctx->pc = 0x31E66Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x31E668u;
            // 0x31e66c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x31E688u;
            goto label_31e688;
        }
    }
    ctx->pc = 0x31E670u;
label_31e670:
    // 0x31e670: 0xae600688  sw          $zero, 0x688($s3)
    ctx->pc = 0x31e670u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1672), GPR_U32(ctx, 0));
label_31e674:
    // 0x31e674: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31e674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31e678:
    // 0x31e678: 0xae62068c  sw          $v0, 0x68C($s3)
    ctx->pc = 0x31e678u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1676), GPR_U32(ctx, 2));
label_31e67c:
    // 0x31e67c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x31e67cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_31e680:
    // 0x31e680: 0x100000dd  b           . + 4 + (0xDD << 2)
label_31e684:
    if (ctx->pc == 0x31E684u) {
        ctx->pc = 0x31E684u;
            // 0x31e684: 0xae620690  sw          $v0, 0x690($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 1680), GPR_U32(ctx, 2));
        ctx->pc = 0x31E688u;
        goto label_31e688;
    }
    ctx->pc = 0x31E680u;
    {
        const bool branch_taken_0x31e680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E684u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31E680u;
            // 0x31e684: 0xae620690  sw          $v0, 0x690($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 1680), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e680) {
            ctx->pc = 0x31E9F8u;
            goto label_31e9f8;
        }
    }
    ctx->pc = 0x31E688u;
label_31e688:
    // 0x31e688: 0x2261821  addu        $v1, $s1, $a2
    ctx->pc = 0x31e688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
label_31e68c:
    // 0x31e68c: 0x906300d5  lbu         $v1, 0xD5($v1)
    ctx->pc = 0x31e68cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 213)));
label_31e690:
    // 0x31e690: 0x5060000a  beql        $v1, $zero, . + 4 + (0xA << 2)
label_31e694:
    if (ctx->pc == 0x31E694u) {
        ctx->pc = 0x31E694u;
            // 0x31e694: 0x61880  sll         $v1, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->pc = 0x31E698u;
        goto label_31e698;
    }
    ctx->pc = 0x31E690u;
    {
        const bool branch_taken_0x31e690 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x31e690) {
            ctx->pc = 0x31E694u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x31E690u;
            // 0x31e694: 0x61880  sll         $v1, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x31E6BCu;
            goto label_31e6bc;
        }
    }
    ctx->pc = 0x31E698u;
label_31e698:
    // 0x31e698: 0x28c10005  slti        $at, $a2, 0x5
    ctx->pc = 0x31e698u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)5) ? 1 : 0);
label_31e69c:
    // 0x31e69c: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
label_31e6a0:
    if (ctx->pc == 0x31E6A0u) {
        ctx->pc = 0x31E6A4u;
        goto label_31e6a4;
    }
    ctx->pc = 0x31E69Cu;
    {
        const bool branch_taken_0x31e69c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x31e69c) {
            ctx->pc = 0x31E6B8u;
            goto label_31e6b8;
        }
    }
    ctx->pc = 0x31E6A4u;
label_31e6a4:
    // 0x31e6a4: 0xae600688  sw          $zero, 0x688($s3)
    ctx->pc = 0x31e6a4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1672), GPR_U32(ctx, 0));
label_31e6a8:
    // 0x31e6a8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x31e6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_31e6ac:
    // 0x31e6ac: 0xae62068c  sw          $v0, 0x68C($s3)
    ctx->pc = 0x31e6acu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1676), GPR_U32(ctx, 2));
label_31e6b0:
    // 0x31e6b0: 0x100000d1  b           . + 4 + (0xD1 << 2)
label_31e6b4:
    if (ctx->pc == 0x31E6B4u) {
        ctx->pc = 0x31E6B4u;
            // 0x31e6b4: 0xae660690  sw          $a2, 0x690($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 1680), GPR_U32(ctx, 6));
        ctx->pc = 0x31E6B8u;
        goto label_31e6b8;
    }
    ctx->pc = 0x31E6B0u;
    {
        const bool branch_taken_0x31e6b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E6B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31E6B0u;
            // 0x31e6b4: 0xae660690  sw          $a2, 0x690($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 1680), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e6b0) {
            ctx->pc = 0x31E9F8u;
            goto label_31e9f8;
        }
    }
    ctx->pc = 0x31E6B8u;
label_31e6b8:
    // 0x31e6b8: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x31e6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_31e6bc:
    // 0x31e6bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x31e6bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31e6c0:
    // 0x31e6c0: 0x2232021  addu        $a0, $s1, $v1
    ctx->pc = 0x31e6c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_31e6c4:
    // 0x31e6c4: 0x0  nop
    ctx->pc = 0x31e6c4u;
    // NOP
label_31e6c8:
    // 0x31e6c8: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x31e6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_31e6cc:
    // 0x31e6cc: 0x90630095  lbu         $v1, 0x95($v1)
    ctx->pc = 0x31e6ccu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 149)));
label_31e6d0:
    // 0x31e6d0: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x31e6d0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_31e6d4:
    // 0x31e6d4: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x31e6d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_31e6d8:
    // 0x31e6d8: 0x54600007  bnel        $v1, $zero, . + 4 + (0x7 << 2)
label_31e6dc:
    if (ctx->pc == 0x31E6DCu) {
        ctx->pc = 0x31E6DCu;
            // 0x31e6dc: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->pc = 0x31E6E0u;
        goto label_31e6e0;
    }
    ctx->pc = 0x31E6D8u;
    {
        const bool branch_taken_0x31e6d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x31e6d8) {
            ctx->pc = 0x31E6DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x31E6D8u;
            // 0x31e6dc: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x31E6F8u;
            goto label_31e6f8;
        }
    }
    ctx->pc = 0x31E6E0u;
label_31e6e0:
    // 0x31e6e0: 0xae600688  sw          $zero, 0x688($s3)
    ctx->pc = 0x31e6e0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1672), GPR_U32(ctx, 0));
label_31e6e4:
    // 0x31e6e4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x31e6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_31e6e8:
    // 0x31e6e8: 0xae62068c  sw          $v0, 0x68C($s3)
    ctx->pc = 0x31e6e8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1676), GPR_U32(ctx, 2));
label_31e6ec:
    // 0x31e6ec: 0xae660690  sw          $a2, 0x690($s3)
    ctx->pc = 0x31e6ecu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1680), GPR_U32(ctx, 6));
label_31e6f0:
    // 0x31e6f0: 0x100000c1  b           . + 4 + (0xC1 << 2)
label_31e6f4:
    if (ctx->pc == 0x31E6F4u) {
        ctx->pc = 0x31E6F4u;
            // 0x31e6f4: 0xae650694  sw          $a1, 0x694($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 1684), GPR_U32(ctx, 5));
        ctx->pc = 0x31E6F8u;
        goto label_31e6f8;
    }
    ctx->pc = 0x31E6F0u;
    {
        const bool branch_taken_0x31e6f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E6F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31E6F0u;
            // 0x31e6f4: 0xae650694  sw          $a1, 0x694($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 1684), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e6f0) {
            ctx->pc = 0x31E9F8u;
            goto label_31e9f8;
        }
    }
    ctx->pc = 0x31E6F8u;
label_31e6f8:
    // 0x31e6f8: 0x28a30004  slti        $v1, $a1, 0x4
    ctx->pc = 0x31e6f8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
label_31e6fc:
    // 0x31e6fc: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
label_31e700:
    if (ctx->pc == 0x31E700u) {
        ctx->pc = 0x31E704u;
        goto label_31e704;
    }
    ctx->pc = 0x31E6FCu;
    {
        const bool branch_taken_0x31e6fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x31e6fc) {
            ctx->pc = 0x31E6C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_31e6c8;
        }
    }
    ctx->pc = 0x31E704u;
label_31e704:
    // 0x31e704: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x31e704u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_31e708:
    // 0x31e708: 0x28c30010  slti        $v1, $a2, 0x10
    ctx->pc = 0x31e708u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)16) ? 1 : 0);
label_31e70c:
    // 0x31e70c: 0x5460ffdf  bnel        $v1, $zero, . + 4 + (-0x21 << 2)
label_31e710:
    if (ctx->pc == 0x31E710u) {
        ctx->pc = 0x31E710u;
            // 0x31e710: 0x2261821  addu        $v1, $s1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
        ctx->pc = 0x31E714u;
        goto label_31e714;
    }
    ctx->pc = 0x31E70Cu;
    {
        const bool branch_taken_0x31e70c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x31e70c) {
            ctx->pc = 0x31E710u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x31E70Cu;
            // 0x31e710: 0x2261821  addu        $v1, $s1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x31E68Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_31e68c;
        }
    }
    ctx->pc = 0x31E714u;
label_31e714:
    // 0x31e714: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x31e714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31e718:
    // 0x31e718: 0x2241821  addu        $v1, $s1, $a0
    ctx->pc = 0x31e718u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
label_31e71c:
    // 0x31e71c: 0x906300e5  lbu         $v1, 0xE5($v1)
    ctx->pc = 0x31e71cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 229)));
label_31e720:
    // 0x31e720: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x31e720u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_31e724:
    // 0x31e724: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x31e724u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_31e728:
    // 0x31e728: 0x5460002f  bnel        $v1, $zero, . + 4 + (0x2F << 2)
label_31e72c:
    if (ctx->pc == 0x31E72Cu) {
        ctx->pc = 0x31E72Cu;
            // 0x31e72c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->pc = 0x31E730u;
        goto label_31e730;
    }
    ctx->pc = 0x31E728u;
    {
        const bool branch_taken_0x31e728 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x31e728) {
            ctx->pc = 0x31E72Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x31E728u;
            // 0x31e72c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x31E7E8u;
            goto label_31e7e8;
        }
    }
    ctx->pc = 0x31E730u;
label_31e730:
    // 0x31e730: 0xae600688  sw          $zero, 0x688($s3)
    ctx->pc = 0x31e730u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1672), GPR_U32(ctx, 0));
label_31e734:
    // 0x31e734: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x31e734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_31e738:
    // 0x31e738: 0xae62068c  sw          $v0, 0x68C($s3)
    ctx->pc = 0x31e738u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1676), GPR_U32(ctx, 2));
label_31e73c:
    // 0x31e73c: 0x2c81000b  sltiu       $at, $a0, 0xB
    ctx->pc = 0x31e73cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
label_31e740:
    // 0x31e740: 0x102000ad  beqz        $at, . + 4 + (0xAD << 2)
label_31e744:
    if (ctx->pc == 0x31E744u) {
        ctx->pc = 0x31E744u;
            // 0x31e744: 0xae6406a0  sw          $a0, 0x6A0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 1696), GPR_U32(ctx, 4));
        ctx->pc = 0x31E748u;
        goto label_31e748;
    }
    ctx->pc = 0x31E740u;
    {
        const bool branch_taken_0x31e740 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E744u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31E740u;
            // 0x31e744: 0xae6406a0  sw          $a0, 0x6A0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 1696), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e740) {
            ctx->pc = 0x31E9F8u;
            goto label_31e9f8;
        }
    }
    ctx->pc = 0x31E748u;
label_31e748:
    // 0x31e748: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x31e748u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
label_31e74c:
    // 0x31e74c: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x31e74cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_31e750:
    // 0x31e750: 0x2463c3f0  addiu       $v1, $v1, -0x3C10
    ctx->pc = 0x31e750u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951920));
label_31e754:
    // 0x31e754: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31e754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_31e758:
    // 0x31e758: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x31e758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_31e75c:
    // 0x31e75c: 0x400008  jr          $v0
label_31e760:
    if (ctx->pc == 0x31E760u) {
        ctx->pc = 0x31E764u;
        goto label_31e764;
    }
    ctx->pc = 0x31E75Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x31E764u: goto label_31e764;
            case 0x31E770u: goto label_31e770;
            case 0x31E77Cu: goto label_31e77c;
            case 0x31E788u: goto label_31e788;
            case 0x31E794u: goto label_31e794;
            case 0x31E7A0u: goto label_31e7a0;
            case 0x31E7ACu: goto label_31e7ac;
            case 0x31E7B8u: goto label_31e7b8;
            case 0x31E7C4u: goto label_31e7c4;
            case 0x31E7D0u: goto label_31e7d0;
            case 0x31E7DCu: goto label_31e7dc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x31E764u;
label_31e764:
    // 0x31e764: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x31e764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_31e768:
    // 0x31e768: 0x100000a3  b           . + 4 + (0xA3 << 2)
label_31e76c:
    if (ctx->pc == 0x31E76Cu) {
        ctx->pc = 0x31E76Cu;
            // 0x31e76c: 0xae620690  sw          $v0, 0x690($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 1680), GPR_U32(ctx, 2));
        ctx->pc = 0x31E770u;
        goto label_31e770;
    }
    ctx->pc = 0x31E768u;
    {
        const bool branch_taken_0x31e768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E76Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31E768u;
            // 0x31e76c: 0xae620690  sw          $v0, 0x690($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 1680), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e768) {
            ctx->pc = 0x31E9F8u;
            goto label_31e9f8;
        }
    }
    ctx->pc = 0x31E770u;
label_31e770:
    // 0x31e770: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x31e770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_31e774:
    // 0x31e774: 0x100000a0  b           . + 4 + (0xA0 << 2)
label_31e778:
    if (ctx->pc == 0x31E778u) {
        ctx->pc = 0x31E778u;
            // 0x31e778: 0xae620690  sw          $v0, 0x690($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 1680), GPR_U32(ctx, 2));
        ctx->pc = 0x31E77Cu;
        goto label_31e77c;
    }
    ctx->pc = 0x31E774u;
    {
        const bool branch_taken_0x31e774 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E778u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31E774u;
            // 0x31e778: 0xae620690  sw          $v0, 0x690($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 1680), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e774) {
            ctx->pc = 0x31E9F8u;
            goto label_31e9f8;
        }
    }
    ctx->pc = 0x31E77Cu;
label_31e77c:
    // 0x31e77c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x31e77cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_31e780:
    // 0x31e780: 0x1000009d  b           . + 4 + (0x9D << 2)
label_31e784:
    if (ctx->pc == 0x31E784u) {
        ctx->pc = 0x31E784u;
            // 0x31e784: 0xae620690  sw          $v0, 0x690($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 1680), GPR_U32(ctx, 2));
        ctx->pc = 0x31E788u;
        goto label_31e788;
    }
    ctx->pc = 0x31E780u;
    {
        const bool branch_taken_0x31e780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E784u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31E780u;
            // 0x31e784: 0xae620690  sw          $v0, 0x690($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 1680), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e780) {
            ctx->pc = 0x31E9F8u;
            goto label_31e9f8;
        }
    }
    ctx->pc = 0x31E788u;
label_31e788:
    // 0x31e788: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x31e788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_31e78c:
    // 0x31e78c: 0x1000009a  b           . + 4 + (0x9A << 2)
label_31e790:
    if (ctx->pc == 0x31E790u) {
        ctx->pc = 0x31E790u;
            // 0x31e790: 0xae620690  sw          $v0, 0x690($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 1680), GPR_U32(ctx, 2));
        ctx->pc = 0x31E794u;
        goto label_31e794;
    }
    ctx->pc = 0x31E78Cu;
    {
        const bool branch_taken_0x31e78c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E790u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31E78Cu;
            // 0x31e790: 0xae620690  sw          $v0, 0x690($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 1680), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e78c) {
            ctx->pc = 0x31E9F8u;
            goto label_31e9f8;
        }
    }
    ctx->pc = 0x31E794u;
label_31e794:
    // 0x31e794: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x31e794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_31e798:
    // 0x31e798: 0x10000097  b           . + 4 + (0x97 << 2)
label_31e79c:
    if (ctx->pc == 0x31E79Cu) {
        ctx->pc = 0x31E79Cu;
            // 0x31e79c: 0xae620690  sw          $v0, 0x690($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 1680), GPR_U32(ctx, 2));
        ctx->pc = 0x31E7A0u;
        goto label_31e7a0;
    }
    ctx->pc = 0x31E798u;
    {
        const bool branch_taken_0x31e798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E79Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31E798u;
            // 0x31e79c: 0xae620690  sw          $v0, 0x690($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 1680), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e798) {
            ctx->pc = 0x31E9F8u;
            goto label_31e9f8;
        }
    }
    ctx->pc = 0x31E7A0u;
label_31e7a0:
    // 0x31e7a0: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x31e7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_31e7a4:
    // 0x31e7a4: 0x10000094  b           . + 4 + (0x94 << 2)
label_31e7a8:
    if (ctx->pc == 0x31E7A8u) {
        ctx->pc = 0x31E7A8u;
            // 0x31e7a8: 0xae620690  sw          $v0, 0x690($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 1680), GPR_U32(ctx, 2));
        ctx->pc = 0x31E7ACu;
        goto label_31e7ac;
    }
    ctx->pc = 0x31E7A4u;
    {
        const bool branch_taken_0x31e7a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E7A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31E7A4u;
            // 0x31e7a8: 0xae620690  sw          $v0, 0x690($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 1680), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e7a4) {
            ctx->pc = 0x31E9F8u;
            goto label_31e9f8;
        }
    }
    ctx->pc = 0x31E7ACu;
label_31e7ac:
    // 0x31e7ac: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x31e7acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_31e7b0:
    // 0x31e7b0: 0x10000091  b           . + 4 + (0x91 << 2)
label_31e7b4:
    if (ctx->pc == 0x31E7B4u) {
        ctx->pc = 0x31E7B4u;
            // 0x31e7b4: 0xae620690  sw          $v0, 0x690($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 1680), GPR_U32(ctx, 2));
        ctx->pc = 0x31E7B8u;
        goto label_31e7b8;
    }
    ctx->pc = 0x31E7B0u;
    {
        const bool branch_taken_0x31e7b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E7B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31E7B0u;
            // 0x31e7b4: 0xae620690  sw          $v0, 0x690($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 1680), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e7b0) {
            ctx->pc = 0x31E9F8u;
            goto label_31e9f8;
        }
    }
    ctx->pc = 0x31E7B8u;
label_31e7b8:
    // 0x31e7b8: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x31e7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_31e7bc:
    // 0x31e7bc: 0x1000008e  b           . + 4 + (0x8E << 2)
label_31e7c0:
    if (ctx->pc == 0x31E7C0u) {
        ctx->pc = 0x31E7C0u;
            // 0x31e7c0: 0xae620690  sw          $v0, 0x690($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 1680), GPR_U32(ctx, 2));
        ctx->pc = 0x31E7C4u;
        goto label_31e7c4;
    }
    ctx->pc = 0x31E7BCu;
    {
        const bool branch_taken_0x31e7bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E7C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31E7BCu;
            // 0x31e7c0: 0xae620690  sw          $v0, 0x690($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 1680), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e7bc) {
            ctx->pc = 0x31E9F8u;
            goto label_31e9f8;
        }
    }
    ctx->pc = 0x31E7C4u;
label_31e7c4:
    // 0x31e7c4: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x31e7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_31e7c8:
    // 0x31e7c8: 0x1000008b  b           . + 4 + (0x8B << 2)
label_31e7cc:
    if (ctx->pc == 0x31E7CCu) {
        ctx->pc = 0x31E7CCu;
            // 0x31e7cc: 0xae620690  sw          $v0, 0x690($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 1680), GPR_U32(ctx, 2));
        ctx->pc = 0x31E7D0u;
        goto label_31e7d0;
    }
    ctx->pc = 0x31E7C8u;
    {
        const bool branch_taken_0x31e7c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E7CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31E7C8u;
            // 0x31e7cc: 0xae620690  sw          $v0, 0x690($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 1680), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e7c8) {
            ctx->pc = 0x31E9F8u;
            goto label_31e9f8;
        }
    }
    ctx->pc = 0x31E7D0u;
label_31e7d0:
    // 0x31e7d0: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x31e7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_31e7d4:
    // 0x31e7d4: 0x10000088  b           . + 4 + (0x88 << 2)
label_31e7d8:
    if (ctx->pc == 0x31E7D8u) {
        ctx->pc = 0x31E7D8u;
            // 0x31e7d8: 0xae620690  sw          $v0, 0x690($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 1680), GPR_U32(ctx, 2));
        ctx->pc = 0x31E7DCu;
        goto label_31e7dc;
    }
    ctx->pc = 0x31E7D4u;
    {
        const bool branch_taken_0x31e7d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E7D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31E7D4u;
            // 0x31e7d8: 0xae620690  sw          $v0, 0x690($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 1680), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e7d4) {
            ctx->pc = 0x31E9F8u;
            goto label_31e9f8;
        }
    }
    ctx->pc = 0x31E7DCu;
label_31e7dc:
    // 0x31e7dc: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x31e7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_31e7e0:
    // 0x31e7e0: 0x10000085  b           . + 4 + (0x85 << 2)
label_31e7e4:
    if (ctx->pc == 0x31E7E4u) {
        ctx->pc = 0x31E7E4u;
            // 0x31e7e4: 0xae620690  sw          $v0, 0x690($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 1680), GPR_U32(ctx, 2));
        ctx->pc = 0x31E7E8u;
        goto label_31e7e8;
    }
    ctx->pc = 0x31E7E0u;
    {
        const bool branch_taken_0x31e7e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E7E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31E7E0u;
            // 0x31e7e4: 0xae620690  sw          $v0, 0x690($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 1680), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e7e0) {
            ctx->pc = 0x31E9F8u;
            goto label_31e9f8;
        }
    }
    ctx->pc = 0x31E7E8u;
label_31e7e8:
    // 0x31e7e8: 0x2883000b  slti        $v1, $a0, 0xB
    ctx->pc = 0x31e7e8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)11) ? 1 : 0);
label_31e7ec:
    // 0x31e7ec: 0x5460ffcb  bnel        $v1, $zero, . + 4 + (-0x35 << 2)
label_31e7f0:
    if (ctx->pc == 0x31E7F0u) {
        ctx->pc = 0x31E7F0u;
            // 0x31e7f0: 0x2241821  addu        $v1, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->pc = 0x31E7F4u;
        goto label_31e7f4;
    }
    ctx->pc = 0x31E7ECu;
    {
        const bool branch_taken_0x31e7ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x31e7ec) {
            ctx->pc = 0x31E7F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x31E7ECu;
            // 0x31e7f0: 0x2241821  addu        $v1, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x31E71Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_31e71c;
        }
    }
    ctx->pc = 0x31E7F4u;
label_31e7f4:
    // 0x31e7f4: 0x30430020  andi        $v1, $v0, 0x20
    ctx->pc = 0x31e7f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_31e7f8:
    // 0x31e7f8: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
label_31e7fc:
    if (ctx->pc == 0x31E7FCu) {
        ctx->pc = 0x31E7FCu;
            // 0x31e7fc: 0x30430040  andi        $v1, $v0, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
        ctx->pc = 0x31E800u;
        goto label_31e800;
    }
    ctx->pc = 0x31E7F8u;
    {
        const bool branch_taken_0x31e7f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x31e7f8) {
            ctx->pc = 0x31E7FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x31E7F8u;
            // 0x31e7fc: 0x30430040  andi        $v1, $v0, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
            ctx->pc = 0x31E814u;
            goto label_31e814;
        }
    }
    ctx->pc = 0x31E800u;
label_31e800:
    // 0x31e800: 0xae600688  sw          $zero, 0x688($s3)
    ctx->pc = 0x31e800u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1672), GPR_U32(ctx, 0));
label_31e804:
    // 0x31e804: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x31e804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_31e808:
    // 0x31e808: 0xae62068c  sw          $v0, 0x68C($s3)
    ctx->pc = 0x31e808u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1676), GPR_U32(ctx, 2));
label_31e80c:
    // 0x31e80c: 0x1000007a  b           . + 4 + (0x7A << 2)
label_31e810:
    if (ctx->pc == 0x31E810u) {
        ctx->pc = 0x31E810u;
            // 0x31e810: 0xae600690  sw          $zero, 0x690($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 1680), GPR_U32(ctx, 0));
        ctx->pc = 0x31E814u;
        goto label_31e814;
    }
    ctx->pc = 0x31E80Cu;
    {
        const bool branch_taken_0x31e80c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E810u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31E80Cu;
            // 0x31e810: 0xae600690  sw          $zero, 0x690($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 1680), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e80c) {
            ctx->pc = 0x31E9F8u;
            goto label_31e9f8;
        }
    }
    ctx->pc = 0x31E814u;
label_31e814:
    // 0x31e814: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
label_31e818:
    if (ctx->pc == 0x31E818u) {
        ctx->pc = 0x31E818u;
            // 0x31e818: 0x30430080  andi        $v1, $v0, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
        ctx->pc = 0x31E81Cu;
        goto label_31e81c;
    }
    ctx->pc = 0x31E814u;
    {
        const bool branch_taken_0x31e814 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x31e814) {
            ctx->pc = 0x31E818u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x31E814u;
            // 0x31e818: 0x30430080  andi        $v1, $v0, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
            ctx->pc = 0x31E834u;
            goto label_31e834;
        }
    }
    ctx->pc = 0x31E81Cu;
label_31e81c:
    // 0x31e81c: 0xae600688  sw          $zero, 0x688($s3)
    ctx->pc = 0x31e81cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1672), GPR_U32(ctx, 0));
label_31e820:
    // 0x31e820: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x31e820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_31e824:
    // 0x31e824: 0xae62068c  sw          $v0, 0x68C($s3)
    ctx->pc = 0x31e824u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1676), GPR_U32(ctx, 2));
label_31e828:
    // 0x31e828: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31e828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31e82c:
    // 0x31e82c: 0x10000072  b           . + 4 + (0x72 << 2)
label_31e830:
    if (ctx->pc == 0x31E830u) {
        ctx->pc = 0x31E830u;
            // 0x31e830: 0xae620690  sw          $v0, 0x690($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 1680), GPR_U32(ctx, 2));
        ctx->pc = 0x31E834u;
        goto label_31e834;
    }
    ctx->pc = 0x31E82Cu;
    {
        const bool branch_taken_0x31e82c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E830u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31E82Cu;
            // 0x31e830: 0xae620690  sw          $v0, 0x690($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 1680), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e82c) {
            ctx->pc = 0x31E9F8u;
            goto label_31e9f8;
        }
    }
    ctx->pc = 0x31E834u;
label_31e834:
    // 0x31e834: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
label_31e838:
    if (ctx->pc == 0x31E838u) {
        ctx->pc = 0x31E838u;
            // 0x31e838: 0x30430100  andi        $v1, $v0, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
        ctx->pc = 0x31E83Cu;
        goto label_31e83c;
    }
    ctx->pc = 0x31E834u;
    {
        const bool branch_taken_0x31e834 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x31e834) {
            ctx->pc = 0x31E838u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x31E834u;
            // 0x31e838: 0x30430100  andi        $v1, $v0, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
            ctx->pc = 0x31E854u;
            goto label_31e854;
        }
    }
    ctx->pc = 0x31E83Cu;
label_31e83c:
    // 0x31e83c: 0xae600688  sw          $zero, 0x688($s3)
    ctx->pc = 0x31e83cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1672), GPR_U32(ctx, 0));
label_31e840:
    // 0x31e840: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x31e840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_31e844:
    // 0x31e844: 0xae62068c  sw          $v0, 0x68C($s3)
    ctx->pc = 0x31e844u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1676), GPR_U32(ctx, 2));
label_31e848:
    // 0x31e848: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x31e848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_31e84c:
    // 0x31e84c: 0x1000006a  b           . + 4 + (0x6A << 2)
label_31e850:
    if (ctx->pc == 0x31E850u) {
        ctx->pc = 0x31E850u;
            // 0x31e850: 0xae620690  sw          $v0, 0x690($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 1680), GPR_U32(ctx, 2));
        ctx->pc = 0x31E854u;
        goto label_31e854;
    }
    ctx->pc = 0x31E84Cu;
    {
        const bool branch_taken_0x31e84c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E850u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31E84Cu;
            // 0x31e850: 0xae620690  sw          $v0, 0x690($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 1680), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e84c) {
            ctx->pc = 0x31E9F8u;
            goto label_31e9f8;
        }
    }
    ctx->pc = 0x31E854u;
label_31e854:
    // 0x31e854: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
label_31e858:
    if (ctx->pc == 0x31E858u) {
        ctx->pc = 0x31E858u;
            // 0x31e858: 0x30430200  andi        $v1, $v0, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
        ctx->pc = 0x31E85Cu;
        goto label_31e85c;
    }
    ctx->pc = 0x31E854u;
    {
        const bool branch_taken_0x31e854 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x31e854) {
            ctx->pc = 0x31E858u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x31E854u;
            // 0x31e858: 0x30430200  andi        $v1, $v0, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
            ctx->pc = 0x31E874u;
            goto label_31e874;
        }
    }
    ctx->pc = 0x31E85Cu;
label_31e85c:
    // 0x31e85c: 0xae600688  sw          $zero, 0x688($s3)
    ctx->pc = 0x31e85cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1672), GPR_U32(ctx, 0));
label_31e860:
    // 0x31e860: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x31e860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_31e864:
    // 0x31e864: 0xae62068c  sw          $v0, 0x68C($s3)
    ctx->pc = 0x31e864u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1676), GPR_U32(ctx, 2));
label_31e868:
    // 0x31e868: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x31e868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_31e86c:
    // 0x31e86c: 0x10000062  b           . + 4 + (0x62 << 2)
label_31e870:
    if (ctx->pc == 0x31E870u) {
        ctx->pc = 0x31E870u;
            // 0x31e870: 0xae620690  sw          $v0, 0x690($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 1680), GPR_U32(ctx, 2));
        ctx->pc = 0x31E874u;
        goto label_31e874;
    }
    ctx->pc = 0x31E86Cu;
    {
        const bool branch_taken_0x31e86c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E870u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31E86Cu;
            // 0x31e870: 0xae620690  sw          $v0, 0x690($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 1680), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e86c) {
            ctx->pc = 0x31E9F8u;
            goto label_31e9f8;
        }
    }
    ctx->pc = 0x31E874u;
label_31e874:
    // 0x31e874: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
label_31e878:
    if (ctx->pc == 0x31E878u) {
        ctx->pc = 0x31E878u;
            // 0x31e878: 0x30430400  andi        $v1, $v0, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
        ctx->pc = 0x31E87Cu;
        goto label_31e87c;
    }
    ctx->pc = 0x31E874u;
    {
        const bool branch_taken_0x31e874 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x31e874) {
            ctx->pc = 0x31E878u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x31E874u;
            // 0x31e878: 0x30430400  andi        $v1, $v0, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
        ctx->in_delay_slot = false;
            ctx->pc = 0x31E890u;
            goto label_31e890;
        }
    }
    ctx->pc = 0x31E87Cu;
label_31e87c:
    // 0x31e87c: 0xae600688  sw          $zero, 0x688($s3)
    ctx->pc = 0x31e87cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1672), GPR_U32(ctx, 0));
label_31e880:
    // 0x31e880: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x31e880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_31e884:
    // 0x31e884: 0xae62068c  sw          $v0, 0x68C($s3)
    ctx->pc = 0x31e884u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1676), GPR_U32(ctx, 2));
label_31e888:
    // 0x31e888: 0x1000005b  b           . + 4 + (0x5B << 2)
label_31e88c:
    if (ctx->pc == 0x31E88Cu) {
        ctx->pc = 0x31E88Cu;
            // 0x31e88c: 0xae600690  sw          $zero, 0x690($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 1680), GPR_U32(ctx, 0));
        ctx->pc = 0x31E890u;
        goto label_31e890;
    }
    ctx->pc = 0x31E888u;
    {
        const bool branch_taken_0x31e888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E88Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31E888u;
            // 0x31e88c: 0xae600690  sw          $zero, 0x690($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 1680), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e888) {
            ctx->pc = 0x31E9F8u;
            goto label_31e9f8;
        }
    }
    ctx->pc = 0x31E890u;
label_31e890:
    // 0x31e890: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
label_31e894:
    if (ctx->pc == 0x31E894u) {
        ctx->pc = 0x31E894u;
            // 0x31e894: 0x30430800  andi        $v1, $v0, 0x800 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
        ctx->pc = 0x31E898u;
        goto label_31e898;
    }
    ctx->pc = 0x31E890u;
    {
        const bool branch_taken_0x31e890 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x31e890) {
            ctx->pc = 0x31E894u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x31E890u;
            // 0x31e894: 0x30430800  andi        $v1, $v0, 0x800 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
        ctx->in_delay_slot = false;
            ctx->pc = 0x31E8B0u;
            goto label_31e8b0;
        }
    }
    ctx->pc = 0x31E898u;
label_31e898:
    // 0x31e898: 0xae600688  sw          $zero, 0x688($s3)
    ctx->pc = 0x31e898u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1672), GPR_U32(ctx, 0));
label_31e89c:
    // 0x31e89c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x31e89cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_31e8a0:
    // 0x31e8a0: 0xae62068c  sw          $v0, 0x68C($s3)
    ctx->pc = 0x31e8a0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1676), GPR_U32(ctx, 2));
label_31e8a4:
    // 0x31e8a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31e8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31e8a8:
    // 0x31e8a8: 0x10000053  b           . + 4 + (0x53 << 2)
label_31e8ac:
    if (ctx->pc == 0x31E8ACu) {
        ctx->pc = 0x31E8ACu;
            // 0x31e8ac: 0xae620690  sw          $v0, 0x690($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 1680), GPR_U32(ctx, 2));
        ctx->pc = 0x31E8B0u;
        goto label_31e8b0;
    }
    ctx->pc = 0x31E8A8u;
    {
        const bool branch_taken_0x31e8a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E8ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31E8A8u;
            // 0x31e8ac: 0xae620690  sw          $v0, 0x690($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 1680), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e8a8) {
            ctx->pc = 0x31E9F8u;
            goto label_31e9f8;
        }
    }
    ctx->pc = 0x31E8B0u;
label_31e8b0:
    // 0x31e8b0: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_31e8b4:
    if (ctx->pc == 0x31E8B4u) {
        ctx->pc = 0x31E8B8u;
        goto label_31e8b8;
    }
    ctx->pc = 0x31E8B0u;
    {
        const bool branch_taken_0x31e8b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x31e8b0) {
            ctx->pc = 0x31E8D0u;
            goto label_31e8d0;
        }
    }
    ctx->pc = 0x31E8B8u;
label_31e8b8:
    // 0x31e8b8: 0xae600688  sw          $zero, 0x688($s3)
    ctx->pc = 0x31e8b8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1672), GPR_U32(ctx, 0));
label_31e8bc:
    // 0x31e8bc: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x31e8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_31e8c0:
    // 0x31e8c0: 0xae62068c  sw          $v0, 0x68C($s3)
    ctx->pc = 0x31e8c0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1676), GPR_U32(ctx, 2));
label_31e8c4:
    // 0x31e8c4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x31e8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_31e8c8:
    // 0x31e8c8: 0x1000004b  b           . + 4 + (0x4B << 2)
label_31e8cc:
    if (ctx->pc == 0x31E8CCu) {
        ctx->pc = 0x31E8CCu;
            // 0x31e8cc: 0xae620690  sw          $v0, 0x690($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 1680), GPR_U32(ctx, 2));
        ctx->pc = 0x31E8D0u;
        goto label_31e8d0;
    }
    ctx->pc = 0x31E8C8u;
    {
        const bool branch_taken_0x31e8c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E8CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31E8C8u;
            // 0x31e8cc: 0xae620690  sw          $v0, 0x690($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 1680), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e8c8) {
            ctx->pc = 0x31E9F8u;
            goto label_31e9f8;
        }
    }
    ctx->pc = 0x31E8D0u;
label_31e8d0:
    // 0x31e8d0: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x31e8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_31e8d4:
    // 0x31e8d4: 0x30451000  andi        $a1, $v0, 0x1000
    ctx->pc = 0x31e8d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
label_31e8d8:
    // 0x31e8d8: 0x8c630ec8  lw          $v1, 0xEC8($v1)
    ctx->pc = 0x31e8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3784)));
label_31e8dc:
    // 0x31e8dc: 0x14a00004  bnez        $a1, . + 4 + (0x4 << 2)
label_31e8e0:
    if (ctx->pc == 0x31E8E0u) {
        ctx->pc = 0x31E8E0u;
            // 0x31e8e0: 0x8c640008  lw          $a0, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->pc = 0x31E8E4u;
        goto label_31e8e4;
    }
    ctx->pc = 0x31E8DCu;
    {
        const bool branch_taken_0x31e8dc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x31E8E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31E8DCu;
            // 0x31e8e0: 0x8c640008  lw          $a0, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e8dc) {
            ctx->pc = 0x31E8F0u;
            goto label_31e8f0;
        }
    }
    ctx->pc = 0x31E8E4u;
label_31e8e4:
    // 0x31e8e4: 0x30432000  andi        $v1, $v0, 0x2000
    ctx->pc = 0x31e8e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
label_31e8e8:
    // 0x31e8e8: 0x50600013  beql        $v1, $zero, . + 4 + (0x13 << 2)
label_31e8ec:
    if (ctx->pc == 0x31E8ECu) {
        ctx->pc = 0x31E8ECu;
            // 0x31e8ec: 0x30434000  andi        $v1, $v0, 0x4000 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
        ctx->pc = 0x31E8F0u;
        goto label_31e8f0;
    }
    ctx->pc = 0x31E8E8u;
    {
        const bool branch_taken_0x31e8e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x31e8e8) {
            ctx->pc = 0x31E8ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x31E8E8u;
            // 0x31e8ec: 0x30434000  andi        $v1, $v0, 0x4000 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
        ctx->in_delay_slot = false;
            ctx->pc = 0x31E938u;
            goto label_31e938;
        }
    }
    ctx->pc = 0x31E8F0u;
label_31e8f0:
    // 0x31e8f0: 0xae600688  sw          $zero, 0x688($s3)
    ctx->pc = 0x31e8f0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1672), GPR_U32(ctx, 0));
label_31e8f4:
    // 0x31e8f4: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x31e8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_31e8f8:
    // 0x31e8f8: 0xae62068c  sw          $v0, 0x68C($s3)
    ctx->pc = 0x31e8f8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1676), GPR_U32(ctx, 2));
label_31e8fc:
    // 0x31e8fc: 0xae600690  sw          $zero, 0x690($s3)
    ctx->pc = 0x31e8fcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1680), GPR_U32(ctx, 0));
label_31e900:
    // 0x31e900: 0x8e220088  lw          $v0, 0x88($s1)
    ctx->pc = 0x31e900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
label_31e904:
    // 0x31e904: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x31e904u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
label_31e908:
    // 0x31e908: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_31e90c:
    if (ctx->pc == 0x31E90Cu) {
        ctx->pc = 0x31E90Cu;
            // 0x31e90c: 0x24022000  addiu       $v0, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->pc = 0x31E910u;
        goto label_31e910;
    }
    ctx->pc = 0x31E908u;
    {
        const bool branch_taken_0x31e908 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31e908) {
            ctx->pc = 0x31E90Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x31E908u;
            // 0x31e90c: 0x24022000  addiu       $v0, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
            ctx->pc = 0x31E91Cu;
            goto label_31e91c;
        }
    }
    ctx->pc = 0x31E910u;
label_31e910:
    // 0x31e910: 0x24021000  addiu       $v0, $zero, 0x1000
    ctx->pc = 0x31e910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
label_31e914:
    // 0x31e914: 0x10000002  b           . + 4 + (0x2 << 2)
label_31e918:
    if (ctx->pc == 0x31E918u) {
        ctx->pc = 0x31E918u;
            // 0x31e918: 0xae620694  sw          $v0, 0x694($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 1684), GPR_U32(ctx, 2));
        ctx->pc = 0x31E91Cu;
        goto label_31e91c;
    }
    ctx->pc = 0x31E914u;
    {
        const bool branch_taken_0x31e914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E918u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31E914u;
            // 0x31e918: 0xae620694  sw          $v0, 0x694($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 1684), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e914) {
            ctx->pc = 0x31E920u;
            goto label_31e920;
        }
    }
    ctx->pc = 0x31E91Cu;
label_31e91c:
    // 0x31e91c: 0xae620694  sw          $v0, 0x694($s3)
    ctx->pc = 0x31e91cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1684), GPR_U32(ctx, 2));
label_31e920:
    // 0x31e920: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x31e920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_31e924:
    // 0x31e924: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x31e924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_31e928:
    // 0x31e928: 0xc120640  jal         func_481900
label_31e92c:
    if (ctx->pc == 0x31E92Cu) {
        ctx->pc = 0x31E92Cu;
            // 0x31e92c: 0x244501f4  addiu       $a1, $v0, 0x1F4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 500));
        ctx->pc = 0x31E930u;
        goto label_31e930;
    }
    ctx->pc = 0x31E928u;
    SET_GPR_U32(ctx, 31, 0x31E930u);
    ctx->pc = 0x31E92Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31E928u;
            // 0x31e92c: 0x244501f4  addiu       $a1, $v0, 0x1F4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 500));
        ctx->in_delay_slot = false;
    ctx->pc = 0x481900u;
    if (runtime->hasFunction(0x481900u)) {
        auto targetFn = runtime->lookupFunction(0x481900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31E930u; }
        if (ctx->pc != 0x31E930u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00481900_0x481900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31E930u; }
        if (ctx->pc != 0x31E930u) { return; }
    }
    ctx->pc = 0x31E930u;
label_31e930:
    // 0x31e930: 0x10000032  b           . + 4 + (0x32 << 2)
label_31e934:
    if (ctx->pc == 0x31E934u) {
        ctx->pc = 0x31E934u;
            // 0x31e934: 0x8e62068c  lw          $v0, 0x68C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1676)));
        ctx->pc = 0x31E938u;
        goto label_31e938;
    }
    ctx->pc = 0x31E930u;
    {
        const bool branch_taken_0x31e930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E934u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31E930u;
            // 0x31e934: 0x8e62068c  lw          $v0, 0x68C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1676)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e930) {
            ctx->pc = 0x31E9FCu;
            goto label_31e9fc;
        }
    }
    ctx->pc = 0x31E938u;
label_31e938:
    // 0x31e938: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
label_31e93c:
    if (ctx->pc == 0x31E93Cu) {
        ctx->pc = 0x31E93Cu;
            // 0x31e93c: 0xae600688  sw          $zero, 0x688($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 1672), GPR_U32(ctx, 0));
        ctx->pc = 0x31E940u;
        goto label_31e940;
    }
    ctx->pc = 0x31E938u;
    {
        const bool branch_taken_0x31e938 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x31e938) {
            ctx->pc = 0x31E93Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x31E938u;
            // 0x31e93c: 0xae600688  sw          $zero, 0x688($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 1672), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x31E950u;
            goto label_31e950;
        }
    }
    ctx->pc = 0x31E940u;
label_31e940:
    // 0x31e940: 0x30438000  andi        $v1, $v0, 0x8000
    ctx->pc = 0x31e940u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
label_31e944:
    // 0x31e944: 0x50600014  beql        $v1, $zero, . + 4 + (0x14 << 2)
label_31e948:
    if (ctx->pc == 0x31E948u) {
        ctx->pc = 0x31E948u;
            // 0x31e948: 0x3c030001  lui         $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
        ctx->pc = 0x31E94Cu;
        goto label_31e94c;
    }
    ctx->pc = 0x31E944u;
    {
        const bool branch_taken_0x31e944 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x31e944) {
            ctx->pc = 0x31E948u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x31E944u;
            // 0x31e948: 0x3c030001  lui         $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x31E998u;
            goto label_31e998;
        }
    }
    ctx->pc = 0x31E94Cu;
label_31e94c:
    // 0x31e94c: 0xae600688  sw          $zero, 0x688($s3)
    ctx->pc = 0x31e94cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1672), GPR_U32(ctx, 0));
label_31e950:
    // 0x31e950: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x31e950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_31e954:
    // 0x31e954: 0xae62068c  sw          $v0, 0x68C($s3)
    ctx->pc = 0x31e954u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1676), GPR_U32(ctx, 2));
label_31e958:
    // 0x31e958: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31e958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31e95c:
    // 0x31e95c: 0xae620690  sw          $v0, 0x690($s3)
    ctx->pc = 0x31e95cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1680), GPR_U32(ctx, 2));
label_31e960:
    // 0x31e960: 0x8e220088  lw          $v0, 0x88($s1)
    ctx->pc = 0x31e960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
label_31e964:
    // 0x31e964: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x31e964u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
label_31e968:
    // 0x31e968: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_31e96c:
    if (ctx->pc == 0x31E96Cu) {
        ctx->pc = 0x31E96Cu;
            // 0x31e96c: 0x34028000  ori         $v0, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->pc = 0x31E970u;
        goto label_31e970;
    }
    ctx->pc = 0x31E968u;
    {
        const bool branch_taken_0x31e968 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31e968) {
            ctx->pc = 0x31E96Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x31E968u;
            // 0x31e96c: 0x34028000  ori         $v0, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
            ctx->pc = 0x31E97Cu;
            goto label_31e97c;
        }
    }
    ctx->pc = 0x31E970u;
label_31e970:
    // 0x31e970: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x31e970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
label_31e974:
    // 0x31e974: 0x10000002  b           . + 4 + (0x2 << 2)
label_31e978:
    if (ctx->pc == 0x31E978u) {
        ctx->pc = 0x31E978u;
            // 0x31e978: 0xae620694  sw          $v0, 0x694($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 1684), GPR_U32(ctx, 2));
        ctx->pc = 0x31E97Cu;
        goto label_31e97c;
    }
    ctx->pc = 0x31E974u;
    {
        const bool branch_taken_0x31e974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E978u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31E974u;
            // 0x31e978: 0xae620694  sw          $v0, 0x694($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 1684), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e974) {
            ctx->pc = 0x31E980u;
            goto label_31e980;
        }
    }
    ctx->pc = 0x31E97Cu;
label_31e97c:
    // 0x31e97c: 0xae620694  sw          $v0, 0x694($s3)
    ctx->pc = 0x31e97cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1684), GPR_U32(ctx, 2));
label_31e980:
    // 0x31e980: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x31e980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_31e984:
    // 0x31e984: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x31e984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_31e988:
    // 0x31e988: 0xc120640  jal         func_481900
label_31e98c:
    if (ctx->pc == 0x31E98Cu) {
        ctx->pc = 0x31E98Cu;
            // 0x31e98c: 0x24450190  addiu       $a1, $v0, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 400));
        ctx->pc = 0x31E990u;
        goto label_31e990;
    }
    ctx->pc = 0x31E988u;
    SET_GPR_U32(ctx, 31, 0x31E990u);
    ctx->pc = 0x31E98Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31E988u;
            // 0x31e98c: 0x24450190  addiu       $a1, $v0, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x481900u;
    if (runtime->hasFunction(0x481900u)) {
        auto targetFn = runtime->lookupFunction(0x481900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31E990u; }
        if (ctx->pc != 0x31E990u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00481900_0x481900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31E990u; }
        if (ctx->pc != 0x31E990u) { return; }
    }
    ctx->pc = 0x31E990u;
label_31e990:
    // 0x31e990: 0x10000019  b           . + 4 + (0x19 << 2)
label_31e994:
    if (ctx->pc == 0x31E994u) {
        ctx->pc = 0x31E998u;
        goto label_31e998;
    }
    ctx->pc = 0x31E990u;
    {
        const bool branch_taken_0x31e990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31e990) {
            ctx->pc = 0x31E9F8u;
            goto label_31e9f8;
        }
    }
    ctx->pc = 0x31E998u;
label_31e998:
    // 0x31e998: 0x431824  and         $v1, $v0, $v1
    ctx->pc = 0x31e998u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_31e99c:
    // 0x31e99c: 0x54600006  bnel        $v1, $zero, . + 4 + (0x6 << 2)
label_31e9a0:
    if (ctx->pc == 0x31E9A0u) {
        ctx->pc = 0x31E9A0u;
            // 0x31e9a0: 0xae600688  sw          $zero, 0x688($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 1672), GPR_U32(ctx, 0));
        ctx->pc = 0x31E9A4u;
        goto label_31e9a4;
    }
    ctx->pc = 0x31E99Cu;
    {
        const bool branch_taken_0x31e99c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x31e99c) {
            ctx->pc = 0x31E9A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x31E99Cu;
            // 0x31e9a0: 0xae600688  sw          $zero, 0x688($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 1672), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x31E9B8u;
            goto label_31e9b8;
        }
    }
    ctx->pc = 0x31E9A4u;
label_31e9a4:
    // 0x31e9a4: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x31e9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
label_31e9a8:
    // 0x31e9a8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x31e9a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_31e9ac:
    // 0x31e9ac: 0x50400067  beql        $v0, $zero, . + 4 + (0x67 << 2)
label_31e9b0:
    if (ctx->pc == 0x31E9B0u) {
        ctx->pc = 0x31E9B0u;
            // 0x31e9b0: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x31E9B4u;
        goto label_31e9b4;
    }
    ctx->pc = 0x31E9ACu;
    {
        const bool branch_taken_0x31e9ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31e9ac) {
            ctx->pc = 0x31E9B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x31E9ACu;
            // 0x31e9b0: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x31EB4Cu;
            goto label_31eb4c;
        }
    }
    ctx->pc = 0x31E9B4u;
label_31e9b4:
    // 0x31e9b4: 0xae600688  sw          $zero, 0x688($s3)
    ctx->pc = 0x31e9b4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1672), GPR_U32(ctx, 0));
label_31e9b8:
    // 0x31e9b8: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x31e9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_31e9bc:
    // 0x31e9bc: 0xae62068c  sw          $v0, 0x68C($s3)
    ctx->pc = 0x31e9bcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1676), GPR_U32(ctx, 2));
label_31e9c0:
    // 0x31e9c0: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x31e9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_31e9c4:
    // 0x31e9c4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x31e9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_31e9c8:
    // 0x31e9c8: 0xae620690  sw          $v0, 0x690($s3)
    ctx->pc = 0x31e9c8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1680), GPR_U32(ctx, 2));
label_31e9cc:
    // 0x31e9cc: 0x8e220088  lw          $v0, 0x88($s1)
    ctx->pc = 0x31e9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
label_31e9d0:
    // 0x31e9d0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x31e9d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_31e9d4:
    // 0x31e9d4: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_31e9d8:
    if (ctx->pc == 0x31E9D8u) {
        ctx->pc = 0x31E9D8u;
            // 0x31e9d8: 0x3c020002  lui         $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
        ctx->pc = 0x31E9DCu;
        goto label_31e9dc;
    }
    ctx->pc = 0x31E9D4u;
    {
        const bool branch_taken_0x31e9d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31e9d4) {
            ctx->pc = 0x31E9D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x31E9D4u;
            // 0x31e9d8: 0x3c020002  lui         $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x31E9E4u;
            goto label_31e9e4;
        }
    }
    ctx->pc = 0x31E9DCu;
label_31e9dc:
    // 0x31e9dc: 0x10000002  b           . + 4 + (0x2 << 2)
label_31e9e0:
    if (ctx->pc == 0x31E9E0u) {
        ctx->pc = 0x31E9E0u;
            // 0x31e9e0: 0xae630694  sw          $v1, 0x694($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 1684), GPR_U32(ctx, 3));
        ctx->pc = 0x31E9E4u;
        goto label_31e9e4;
    }
    ctx->pc = 0x31E9DCu;
    {
        const bool branch_taken_0x31e9dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E9E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31E9DCu;
            // 0x31e9e0: 0xae630694  sw          $v1, 0x694($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 1684), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e9dc) {
            ctx->pc = 0x31E9E8u;
            goto label_31e9e8;
        }
    }
    ctx->pc = 0x31E9E4u;
label_31e9e4:
    // 0x31e9e4: 0xae620694  sw          $v0, 0x694($s3)
    ctx->pc = 0x31e9e4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1684), GPR_U32(ctx, 2));
label_31e9e8:
    // 0x31e9e8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x31e9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_31e9ec:
    // 0x31e9ec: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x31e9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_31e9f0:
    // 0x31e9f0: 0xc120640  jal         func_481900
label_31e9f4:
    if (ctx->pc == 0x31E9F4u) {
        ctx->pc = 0x31E9F4u;
            // 0x31e9f4: 0x2445012c  addiu       $a1, $v0, 0x12C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 300));
        ctx->pc = 0x31E9F8u;
        goto label_31e9f8;
    }
    ctx->pc = 0x31E9F0u;
    SET_GPR_U32(ctx, 31, 0x31E9F8u);
    ctx->pc = 0x31E9F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31E9F0u;
            // 0x31e9f4: 0x2445012c  addiu       $a1, $v0, 0x12C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 300));
        ctx->in_delay_slot = false;
    ctx->pc = 0x481900u;
    if (runtime->hasFunction(0x481900u)) {
        auto targetFn = runtime->lookupFunction(0x481900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31E9F8u; }
        if (ctx->pc != 0x31E9F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00481900_0x481900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31E9F8u; }
        if (ctx->pc != 0x31E9F8u) { return; }
    }
    ctx->pc = 0x31E9F8u;
label_31e9f8:
    // 0x31e9f8: 0x8e62068c  lw          $v0, 0x68C($s3)
    ctx->pc = 0x31e9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1676)));
label_31e9fc:
    // 0x31e9fc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x31e9fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31ea00:
    // 0x31ea00: 0x2c410008  sltiu       $at, $v0, 0x8
    ctx->pc = 0x31ea00u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_31ea04:
    // 0x31ea04: 0x10200033  beqz        $at, . + 4 + (0x33 << 2)
label_31ea08:
    if (ctx->pc == 0x31EA08u) {
        ctx->pc = 0x31EA08u;
            // 0x31ea08: 0x64120001  daddiu      $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x31EA0Cu;
        goto label_31ea0c;
    }
    ctx->pc = 0x31EA04u;
    {
        const bool branch_taken_0x31ea04 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x31EA08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31EA04u;
            // 0x31ea08: 0x64120001  daddiu      $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ea04) {
            ctx->pc = 0x31EAD4u;
            goto label_31ead4;
        }
    }
    ctx->pc = 0x31EA0Cu;
label_31ea0c:
    // 0x31ea0c: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x31ea0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
label_31ea10:
    // 0x31ea10: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x31ea10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_31ea14:
    // 0x31ea14: 0x2463c3d0  addiu       $v1, $v1, -0x3C30
    ctx->pc = 0x31ea14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951888));
label_31ea18:
    // 0x31ea18: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31ea18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_31ea1c:
    // 0x31ea1c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x31ea1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_31ea20:
    // 0x31ea20: 0x400008  jr          $v0
label_31ea24:
    if (ctx->pc == 0x31EA24u) {
        ctx->pc = 0x31EA28u;
        goto label_31ea28;
    }
    ctx->pc = 0x31EA20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x31EA28u: goto label_31ea28;
            case 0x31EA44u: goto label_31ea44;
            case 0x31EA64u: goto label_31ea64;
            case 0x31EA84u: goto label_31ea84;
            case 0x31EA94u: goto label_31ea94;
            case 0x31EAB0u: goto label_31eab0;
            case 0x31EAC0u: goto label_31eac0;
            case 0x31EAD4u: goto label_31ead4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x31EA28u;
label_31ea28:
    // 0x31ea28: 0x8e630690  lw          $v1, 0x690($s3)
    ctx->pc = 0x31ea28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1680)));
label_31ea2c:
    // 0x31ea2c: 0x8e220088  lw          $v0, 0x88($s1)
    ctx->pc = 0x31ea2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
label_31ea30:
    // 0x31ea30: 0x641804  sllv        $v1, $a0, $v1
    ctx->pc = 0x31ea30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 3) & 0x1F));
label_31ea34:
    // 0x31ea34: 0x601827  not         $v1, $v1
    ctx->pc = 0x31ea34u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 3) | GPR_U64(ctx, 0)));
label_31ea38:
    // 0x31ea38: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x31ea38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_31ea3c:
    // 0x31ea3c: 0x10000025  b           . + 4 + (0x25 << 2)
label_31ea40:
    if (ctx->pc == 0x31EA40u) {
        ctx->pc = 0x31EA40u;
            // 0x31ea40: 0xae220088  sw          $v0, 0x88($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 2));
        ctx->pc = 0x31EA44u;
        goto label_31ea44;
    }
    ctx->pc = 0x31EA3Cu;
    {
        const bool branch_taken_0x31ea3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31EA40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31EA3Cu;
            // 0x31ea40: 0xae220088  sw          $v0, 0x88($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ea3c) {
            ctx->pc = 0x31EAD4u;
            goto label_31ead4;
        }
    }
    ctx->pc = 0x31EA44u;
label_31ea44:
    // 0x31ea44: 0x8e630690  lw          $v1, 0x690($s3)
    ctx->pc = 0x31ea44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1680)));
label_31ea48:
    // 0x31ea48: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x31ea48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_31ea4c:
    // 0x31ea4c: 0x8e220088  lw          $v0, 0x88($s1)
    ctx->pc = 0x31ea4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
label_31ea50:
    // 0x31ea50: 0x641804  sllv        $v1, $a0, $v1
    ctx->pc = 0x31ea50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 3) & 0x1F));
label_31ea54:
    // 0x31ea54: 0x601827  not         $v1, $v1
    ctx->pc = 0x31ea54u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 3) | GPR_U64(ctx, 0)));
label_31ea58:
    // 0x31ea58: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x31ea58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_31ea5c:
    // 0x31ea5c: 0x1000001d  b           . + 4 + (0x1D << 2)
label_31ea60:
    if (ctx->pc == 0x31EA60u) {
        ctx->pc = 0x31EA60u;
            // 0x31ea60: 0xae220088  sw          $v0, 0x88($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 2));
        ctx->pc = 0x31EA64u;
        goto label_31ea64;
    }
    ctx->pc = 0x31EA5Cu;
    {
        const bool branch_taken_0x31ea5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31EA60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31EA5Cu;
            // 0x31ea60: 0xae220088  sw          $v0, 0x88($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ea5c) {
            ctx->pc = 0x31EAD4u;
            goto label_31ead4;
        }
    }
    ctx->pc = 0x31EA64u;
label_31ea64:
    // 0x31ea64: 0x8e630690  lw          $v1, 0x690($s3)
    ctx->pc = 0x31ea64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1680)));
label_31ea68:
    // 0x31ea68: 0x24040200  addiu       $a0, $zero, 0x200
    ctx->pc = 0x31ea68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_31ea6c:
    // 0x31ea6c: 0x8e220088  lw          $v0, 0x88($s1)
    ctx->pc = 0x31ea6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
label_31ea70:
    // 0x31ea70: 0x641804  sllv        $v1, $a0, $v1
    ctx->pc = 0x31ea70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 3) & 0x1F));
label_31ea74:
    // 0x31ea74: 0x601827  not         $v1, $v1
    ctx->pc = 0x31ea74u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 3) | GPR_U64(ctx, 0)));
label_31ea78:
    // 0x31ea78: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x31ea78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_31ea7c:
    // 0x31ea7c: 0x10000015  b           . + 4 + (0x15 << 2)
label_31ea80:
    if (ctx->pc == 0x31EA80u) {
        ctx->pc = 0x31EA80u;
            // 0x31ea80: 0xae220088  sw          $v0, 0x88($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 2));
        ctx->pc = 0x31EA84u;
        goto label_31ea84;
    }
    ctx->pc = 0x31EA7Cu;
    {
        const bool branch_taken_0x31ea7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31EA80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31EA7Cu;
            // 0x31ea80: 0xae220088  sw          $v0, 0x88($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ea7c) {
            ctx->pc = 0x31EAD4u;
            goto label_31ead4;
        }
    }
    ctx->pc = 0x31EA84u;
label_31ea84:
    // 0x31ea84: 0x8e620690  lw          $v0, 0x690($s3)
    ctx->pc = 0x31ea84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1680)));
label_31ea88:
    // 0x31ea88: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x31ea88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_31ea8c:
    // 0x31ea8c: 0x10000011  b           . + 4 + (0x11 << 2)
label_31ea90:
    if (ctx->pc == 0x31EA90u) {
        ctx->pc = 0x31EA90u;
            // 0x31ea90: 0xa04000d5  sb          $zero, 0xD5($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 213), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x31EA94u;
        goto label_31ea94;
    }
    ctx->pc = 0x31EA8Cu;
    {
        const bool branch_taken_0x31ea8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31EA90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31EA8Cu;
            // 0x31ea90: 0xa04000d5  sb          $zero, 0xD5($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 213), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ea8c) {
            ctx->pc = 0x31EAD4u;
            goto label_31ead4;
        }
    }
    ctx->pc = 0x31EA94u;
label_31ea94:
    // 0x31ea94: 0x8e630690  lw          $v1, 0x690($s3)
    ctx->pc = 0x31ea94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1680)));
label_31ea98:
    // 0x31ea98: 0x8e620694  lw          $v0, 0x694($s3)
    ctx->pc = 0x31ea98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1684)));
label_31ea9c:
    // 0x31ea9c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x31ea9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_31eaa0:
    // 0x31eaa0: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x31eaa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_31eaa4:
    // 0x31eaa4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31eaa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_31eaa8:
    // 0x31eaa8: 0x1000000a  b           . + 4 + (0xA << 2)
label_31eaac:
    if (ctx->pc == 0x31EAACu) {
        ctx->pc = 0x31EAACu;
            // 0x31eaac: 0xa0400095  sb          $zero, 0x95($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 149), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x31EAB0u;
        goto label_31eab0;
    }
    ctx->pc = 0x31EAA8u;
    {
        const bool branch_taken_0x31eaa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31EAACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31EAA8u;
            // 0x31eaac: 0xa0400095  sb          $zero, 0x95($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 149), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31eaa8) {
            ctx->pc = 0x31EAD4u;
            goto label_31ead4;
        }
    }
    ctx->pc = 0x31EAB0u;
label_31eab0:
    // 0x31eab0: 0x8e6206a0  lw          $v0, 0x6A0($s3)
    ctx->pc = 0x31eab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1696)));
label_31eab4:
    // 0x31eab4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x31eab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_31eab8:
    // 0x31eab8: 0x10000006  b           . + 4 + (0x6 << 2)
label_31eabc:
    if (ctx->pc == 0x31EABCu) {
        ctx->pc = 0x31EABCu;
            // 0x31eabc: 0xa04000e5  sb          $zero, 0xE5($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 229), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x31EAC0u;
        goto label_31eac0;
    }
    ctx->pc = 0x31EAB8u;
    {
        const bool branch_taken_0x31eab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31EABCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31EAB8u;
            // 0x31eabc: 0xa04000e5  sb          $zero, 0xE5($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 229), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31eab8) {
            ctx->pc = 0x31EAD4u;
            goto label_31ead4;
        }
    }
    ctx->pc = 0x31EAC0u;
label_31eac0:
    // 0x31eac0: 0x8e630694  lw          $v1, 0x694($s3)
    ctx->pc = 0x31eac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1684)));
label_31eac4:
    // 0x31eac4: 0x8e220088  lw          $v0, 0x88($s1)
    ctx->pc = 0x31eac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
label_31eac8:
    // 0x31eac8: 0x601827  not         $v1, $v1
    ctx->pc = 0x31eac8u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 3) | GPR_U64(ctx, 0)));
label_31eacc:
    // 0x31eacc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x31eaccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_31ead0:
    // 0x31ead0: 0xae220088  sw          $v0, 0x88($s1)
    ctx->pc = 0x31ead0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 2));
label_31ead4:
    // 0x31ead4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x31ead4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_31ead8:
    // 0x31ead8: 0x3c034170  lui         $v1, 0x4170
    ctx->pc = 0x31ead8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16752 << 16));
label_31eadc:
    // 0x31eadc: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x31eadcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_31eae0:
    // 0x31eae0: 0xc6610688  lwc1        $f1, 0x688($s3)
    ctx->pc = 0x31eae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 1672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_31eae4:
    // 0x31eae4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31eae4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31eae8:
    // 0x31eae8: 0xc4420018  lwc1        $f2, 0x18($v0)
    ctx->pc = 0x31eae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_31eaec:
    // 0x31eaec: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x31eaecu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_31eaf0:
    // 0x31eaf0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x31eaf0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_31eaf4:
    // 0x31eaf4: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_31eaf8:
    if (ctx->pc == 0x31EAF8u) {
        ctx->pc = 0x31EAF8u;
            // 0x31eaf8: 0xe6600688  swc1        $f0, 0x688($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 1672), bits); }
        ctx->pc = 0x31EAFCu;
        goto label_31eafc;
    }
    ctx->pc = 0x31EAF4u;
    {
        const bool branch_taken_0x31eaf4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x31eaf4) {
            ctx->pc = 0x31EAF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x31EAF4u;
            // 0x31eaf8: 0xe6600688  swc1        $f0, 0x688($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 1672), bits); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x31EB04u;
            goto label_31eb04;
        }
    }
    ctx->pc = 0x31EAFCu;
label_31eafc:
    // 0x31eafc: 0x10000012  b           . + 4 + (0x12 << 2)
label_31eb00:
    if (ctx->pc == 0x31EB00u) {
        ctx->pc = 0x31EB00u;
            // 0x31eb00: 0xe6610688  swc1        $f1, 0x688($s3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 1672), bits); }
        ctx->pc = 0x31EB04u;
        goto label_31eb04;
    }
    ctx->pc = 0x31EAFCu;
    {
        const bool branch_taken_0x31eafc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31EB00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31EAFCu;
            // 0x31eb00: 0xe6610688  swc1        $f1, 0x688($s3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 1672), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31eafc) {
            ctx->pc = 0x31EB48u;
            goto label_31eb48;
        }
    }
    ctx->pc = 0x31EB04u;
label_31eb04:
    // 0x31eb04: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x31eb04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_31eb08:
    // 0x31eb08: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x31eb08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_31eb0c:
    // 0x31eb0c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_31eb10:
    if (ctx->pc == 0x31EB10u) {
        ctx->pc = 0x31EB14u;
        goto label_31eb14;
    }
    ctx->pc = 0x31EB0Cu;
    {
        const bool branch_taken_0x31eb0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31eb0c) {
            ctx->pc = 0x31EB48u;
            goto label_31eb48;
        }
    }
    ctx->pc = 0x31EB14u;
label_31eb14:
    // 0x31eb14: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x31eb14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_31eb18:
    // 0x31eb18: 0xc073234  jal         func_1CC8D0
label_31eb1c:
    if (ctx->pc == 0x31EB1Cu) {
        ctx->pc = 0x31EB1Cu;
            // 0x31eb1c: 0x344400a9  ori         $a0, $v0, 0xA9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)169);
        ctx->pc = 0x31EB20u;
        goto label_31eb20;
    }
    ctx->pc = 0x31EB18u;
    SET_GPR_U32(ctx, 31, 0x31EB20u);
    ctx->pc = 0x31EB1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31EB18u;
            // 0x31eb1c: 0x344400a9  ori         $a0, $v0, 0xA9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)169);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31EB20u; }
        if (ctx->pc != 0x31EB20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31EB20u; }
        if (ctx->pc != 0x31EB20u) { return; }
    }
    ctx->pc = 0x31EB20u;
label_31eb20:
    // 0x31eb20: 0xae600688  sw          $zero, 0x688($s3)
    ctx->pc = 0x31eb20u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1672), GPR_U32(ctx, 0));
label_31eb24:
    // 0x31eb24: 0x8e62068c  lw          $v0, 0x68C($s3)
    ctx->pc = 0x31eb24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1676)));
label_31eb28:
    // 0x31eb28: 0xae620698  sw          $v0, 0x698($s3)
    ctx->pc = 0x31eb28u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1688), GPR_U32(ctx, 2));
label_31eb2c:
    // 0x31eb2c: 0x8e620690  lw          $v0, 0x690($s3)
    ctx->pc = 0x31eb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1680)));
label_31eb30:
    // 0x31eb30: 0xae62069c  sw          $v0, 0x69C($s3)
    ctx->pc = 0x31eb30u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1692), GPR_U32(ctx, 2));
label_31eb34:
    // 0x31eb34: 0x8e620694  lw          $v0, 0x694($s3)
    ctx->pc = 0x31eb34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1684)));
label_31eb38:
    // 0x31eb38: 0xae6206a0  sw          $v0, 0x6A0($s3)
    ctx->pc = 0x31eb38u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1696), GPR_U32(ctx, 2));
label_31eb3c:
    // 0x31eb3c: 0xae60068c  sw          $zero, 0x68C($s3)
    ctx->pc = 0x31eb3cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1676), GPR_U32(ctx, 0));
label_31eb40:
    // 0x31eb40: 0xae600690  sw          $zero, 0x690($s3)
    ctx->pc = 0x31eb40u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1680), GPR_U32(ctx, 0));
label_31eb44:
    // 0x31eb44: 0xae600694  sw          $zero, 0x694($s3)
    ctx->pc = 0x31eb44u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1684), GPR_U32(ctx, 0));
label_31eb48:
    // 0x31eb48: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x31eb48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_31eb4c:
    // 0x31eb4c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x31eb4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_31eb50:
    // 0x31eb50: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x31eb50u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_31eb54:
    // 0x31eb54: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x31eb54u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_31eb58:
    // 0x31eb58: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x31eb58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_31eb5c:
    // 0x31eb5c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x31eb5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_31eb60:
    // 0x31eb60: 0x3e00008  jr          $ra
label_31eb64:
    if (ctx->pc == 0x31EB64u) {
        ctx->pc = 0x31EB64u;
            // 0x31eb64: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x31EB68u;
        goto label_31eb68;
    }
    ctx->pc = 0x31EB60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31EB64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31EB60u;
            // 0x31eb64: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x31EB68u;
label_31eb68:
    // 0x31eb68: 0x0  nop
    ctx->pc = 0x31eb68u;
    // NOP
label_31eb6c:
    // 0x31eb6c: 0x0  nop
    ctx->pc = 0x31eb6cu;
    // NOP
label_31eb70:
    // 0x31eb70: 0x3e00008  jr          $ra
label_31eb74:
    if (ctx->pc == 0x31EB74u) {
        ctx->pc = 0x31EB74u;
            // 0x31eb74: 0xac85007c  sw          $a1, 0x7C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 5));
        ctx->pc = 0x31EB78u;
        goto label_31eb78;
    }
    ctx->pc = 0x31EB70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31EB74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31EB70u;
            // 0x31eb74: 0xac85007c  sw          $a1, 0x7C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x31EB78u;
label_31eb78:
    // 0x31eb78: 0x0  nop
    ctx->pc = 0x31eb78u;
    // NOP
label_31eb7c:
    // 0x31eb7c: 0x0  nop
    ctx->pc = 0x31eb7cu;
    // NOP
label_31eb80:
    // 0x31eb80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x31eb80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_31eb84:
    // 0x31eb84: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x31eb84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_31eb88:
    // 0x31eb88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x31eb88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_31eb8c:
    // 0x31eb8c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x31eb8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_31eb90:
    // 0x31eb90: 0x8c840090  lw          $a0, 0x90($a0)
    ctx->pc = 0x31eb90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 144)));
label_31eb94:
    // 0x31eb94: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x31eb94u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_31eb98:
    // 0x31eb98: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x31eb98u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_31eb9c:
    // 0x31eb9c: 0x320f809  jalr        $t9
label_31eba0:
    if (ctx->pc == 0x31EBA0u) {
        ctx->pc = 0x31EBA4u;
        goto label_31eba4;
    }
    ctx->pc = 0x31EB9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x31EBA4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x31EBA4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x31EBA4u; }
            if (ctx->pc != 0x31EBA4u) { return; }
        }
        }
    }
    ctx->pc = 0x31EBA4u;
label_31eba4:
    // 0x31eba4: 0x8e040090  lw          $a0, 0x90($s0)
    ctx->pc = 0x31eba4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
label_31eba8:
    // 0x31eba8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x31eba8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_31ebac:
    // 0x31ebac: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x31ebacu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_31ebb0:
    // 0x31ebb0: 0x320f809  jalr        $t9
label_31ebb4:
    if (ctx->pc == 0x31EBB4u) {
        ctx->pc = 0x31EBB8u;
        goto label_31ebb8;
    }
    ctx->pc = 0x31EBB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x31EBB8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x31EBB8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x31EBB8u; }
            if (ctx->pc != 0x31EBB8u) { return; }
        }
        }
    }
    ctx->pc = 0x31EBB8u;
label_31ebb8:
    // 0x31ebb8: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x31ebb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_31ebbc:
    // 0x31ebbc: 0x8c633e28  lw          $v1, 0x3E28($v1)
    ctx->pc = 0x31ebbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15912)));
label_31ebc0:
    // 0x31ebc0: 0xac620088  sw          $v0, 0x88($v1)
    ctx->pc = 0x31ebc0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 136), GPR_U32(ctx, 2));
label_31ebc4:
    // 0x31ebc4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x31ebc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_31ebc8:
    // 0x31ebc8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x31ebc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_31ebcc:
    // 0x31ebcc: 0x3e00008  jr          $ra
label_31ebd0:
    if (ctx->pc == 0x31EBD0u) {
        ctx->pc = 0x31EBD0u;
            // 0x31ebd0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x31EBD4u;
        goto label_31ebd4;
    }
    ctx->pc = 0x31EBCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31EBD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31EBCCu;
            // 0x31ebd0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x31EBD4u;
label_31ebd4:
    // 0x31ebd4: 0x0  nop
    ctx->pc = 0x31ebd4u;
    // NOP
label_31ebd8:
    // 0x31ebd8: 0x0  nop
    ctx->pc = 0x31ebd8u;
    // NOP
label_31ebdc:
    // 0x31ebdc: 0x0  nop
    ctx->pc = 0x31ebdcu;
    // NOP
label_31ebe0:
    // 0x31ebe0: 0x3e00008  jr          $ra
label_31ebe4:
    if (ctx->pc == 0x31EBE4u) {
        ctx->pc = 0x31EBE4u;
            // 0x31ebe4: 0x8c820044  lw          $v0, 0x44($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
        ctx->pc = 0x31EBE8u;
        goto label_31ebe8;
    }
    ctx->pc = 0x31EBE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31EBE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31EBE0u;
            // 0x31ebe4: 0x8c820044  lw          $v0, 0x44($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x31EBE8u;
label_31ebe8:
    // 0x31ebe8: 0x0  nop
    ctx->pc = 0x31ebe8u;
    // NOP
label_31ebec:
    // 0x31ebec: 0x0  nop
    ctx->pc = 0x31ebecu;
    // NOP
}
