#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0048E810
// Address: 0x48e810 - 0x48f790
void sub_0048E810_0x48e810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048E810_0x48e810");
#endif

    switch (ctx->pc) {
        case 0x48e810u: goto label_48e810;
        case 0x48e814u: goto label_48e814;
        case 0x48e818u: goto label_48e818;
        case 0x48e81cu: goto label_48e81c;
        case 0x48e820u: goto label_48e820;
        case 0x48e824u: goto label_48e824;
        case 0x48e828u: goto label_48e828;
        case 0x48e82cu: goto label_48e82c;
        case 0x48e830u: goto label_48e830;
        case 0x48e834u: goto label_48e834;
        case 0x48e838u: goto label_48e838;
        case 0x48e83cu: goto label_48e83c;
        case 0x48e840u: goto label_48e840;
        case 0x48e844u: goto label_48e844;
        case 0x48e848u: goto label_48e848;
        case 0x48e84cu: goto label_48e84c;
        case 0x48e850u: goto label_48e850;
        case 0x48e854u: goto label_48e854;
        case 0x48e858u: goto label_48e858;
        case 0x48e85cu: goto label_48e85c;
        case 0x48e860u: goto label_48e860;
        case 0x48e864u: goto label_48e864;
        case 0x48e868u: goto label_48e868;
        case 0x48e86cu: goto label_48e86c;
        case 0x48e870u: goto label_48e870;
        case 0x48e874u: goto label_48e874;
        case 0x48e878u: goto label_48e878;
        case 0x48e87cu: goto label_48e87c;
        case 0x48e880u: goto label_48e880;
        case 0x48e884u: goto label_48e884;
        case 0x48e888u: goto label_48e888;
        case 0x48e88cu: goto label_48e88c;
        case 0x48e890u: goto label_48e890;
        case 0x48e894u: goto label_48e894;
        case 0x48e898u: goto label_48e898;
        case 0x48e89cu: goto label_48e89c;
        case 0x48e8a0u: goto label_48e8a0;
        case 0x48e8a4u: goto label_48e8a4;
        case 0x48e8a8u: goto label_48e8a8;
        case 0x48e8acu: goto label_48e8ac;
        case 0x48e8b0u: goto label_48e8b0;
        case 0x48e8b4u: goto label_48e8b4;
        case 0x48e8b8u: goto label_48e8b8;
        case 0x48e8bcu: goto label_48e8bc;
        case 0x48e8c0u: goto label_48e8c0;
        case 0x48e8c4u: goto label_48e8c4;
        case 0x48e8c8u: goto label_48e8c8;
        case 0x48e8ccu: goto label_48e8cc;
        case 0x48e8d0u: goto label_48e8d0;
        case 0x48e8d4u: goto label_48e8d4;
        case 0x48e8d8u: goto label_48e8d8;
        case 0x48e8dcu: goto label_48e8dc;
        case 0x48e8e0u: goto label_48e8e0;
        case 0x48e8e4u: goto label_48e8e4;
        case 0x48e8e8u: goto label_48e8e8;
        case 0x48e8ecu: goto label_48e8ec;
        case 0x48e8f0u: goto label_48e8f0;
        case 0x48e8f4u: goto label_48e8f4;
        case 0x48e8f8u: goto label_48e8f8;
        case 0x48e8fcu: goto label_48e8fc;
        case 0x48e900u: goto label_48e900;
        case 0x48e904u: goto label_48e904;
        case 0x48e908u: goto label_48e908;
        case 0x48e90cu: goto label_48e90c;
        case 0x48e910u: goto label_48e910;
        case 0x48e914u: goto label_48e914;
        case 0x48e918u: goto label_48e918;
        case 0x48e91cu: goto label_48e91c;
        case 0x48e920u: goto label_48e920;
        case 0x48e924u: goto label_48e924;
        case 0x48e928u: goto label_48e928;
        case 0x48e92cu: goto label_48e92c;
        case 0x48e930u: goto label_48e930;
        case 0x48e934u: goto label_48e934;
        case 0x48e938u: goto label_48e938;
        case 0x48e93cu: goto label_48e93c;
        case 0x48e940u: goto label_48e940;
        case 0x48e944u: goto label_48e944;
        case 0x48e948u: goto label_48e948;
        case 0x48e94cu: goto label_48e94c;
        case 0x48e950u: goto label_48e950;
        case 0x48e954u: goto label_48e954;
        case 0x48e958u: goto label_48e958;
        case 0x48e95cu: goto label_48e95c;
        case 0x48e960u: goto label_48e960;
        case 0x48e964u: goto label_48e964;
        case 0x48e968u: goto label_48e968;
        case 0x48e96cu: goto label_48e96c;
        case 0x48e970u: goto label_48e970;
        case 0x48e974u: goto label_48e974;
        case 0x48e978u: goto label_48e978;
        case 0x48e97cu: goto label_48e97c;
        case 0x48e980u: goto label_48e980;
        case 0x48e984u: goto label_48e984;
        case 0x48e988u: goto label_48e988;
        case 0x48e98cu: goto label_48e98c;
        case 0x48e990u: goto label_48e990;
        case 0x48e994u: goto label_48e994;
        case 0x48e998u: goto label_48e998;
        case 0x48e99cu: goto label_48e99c;
        case 0x48e9a0u: goto label_48e9a0;
        case 0x48e9a4u: goto label_48e9a4;
        case 0x48e9a8u: goto label_48e9a8;
        case 0x48e9acu: goto label_48e9ac;
        case 0x48e9b0u: goto label_48e9b0;
        case 0x48e9b4u: goto label_48e9b4;
        case 0x48e9b8u: goto label_48e9b8;
        case 0x48e9bcu: goto label_48e9bc;
        case 0x48e9c0u: goto label_48e9c0;
        case 0x48e9c4u: goto label_48e9c4;
        case 0x48e9c8u: goto label_48e9c8;
        case 0x48e9ccu: goto label_48e9cc;
        case 0x48e9d0u: goto label_48e9d0;
        case 0x48e9d4u: goto label_48e9d4;
        case 0x48e9d8u: goto label_48e9d8;
        case 0x48e9dcu: goto label_48e9dc;
        case 0x48e9e0u: goto label_48e9e0;
        case 0x48e9e4u: goto label_48e9e4;
        case 0x48e9e8u: goto label_48e9e8;
        case 0x48e9ecu: goto label_48e9ec;
        case 0x48e9f0u: goto label_48e9f0;
        case 0x48e9f4u: goto label_48e9f4;
        case 0x48e9f8u: goto label_48e9f8;
        case 0x48e9fcu: goto label_48e9fc;
        case 0x48ea00u: goto label_48ea00;
        case 0x48ea04u: goto label_48ea04;
        case 0x48ea08u: goto label_48ea08;
        case 0x48ea0cu: goto label_48ea0c;
        case 0x48ea10u: goto label_48ea10;
        case 0x48ea14u: goto label_48ea14;
        case 0x48ea18u: goto label_48ea18;
        case 0x48ea1cu: goto label_48ea1c;
        case 0x48ea20u: goto label_48ea20;
        case 0x48ea24u: goto label_48ea24;
        case 0x48ea28u: goto label_48ea28;
        case 0x48ea2cu: goto label_48ea2c;
        case 0x48ea30u: goto label_48ea30;
        case 0x48ea34u: goto label_48ea34;
        case 0x48ea38u: goto label_48ea38;
        case 0x48ea3cu: goto label_48ea3c;
        case 0x48ea40u: goto label_48ea40;
        case 0x48ea44u: goto label_48ea44;
        case 0x48ea48u: goto label_48ea48;
        case 0x48ea4cu: goto label_48ea4c;
        case 0x48ea50u: goto label_48ea50;
        case 0x48ea54u: goto label_48ea54;
        case 0x48ea58u: goto label_48ea58;
        case 0x48ea5cu: goto label_48ea5c;
        case 0x48ea60u: goto label_48ea60;
        case 0x48ea64u: goto label_48ea64;
        case 0x48ea68u: goto label_48ea68;
        case 0x48ea6cu: goto label_48ea6c;
        case 0x48ea70u: goto label_48ea70;
        case 0x48ea74u: goto label_48ea74;
        case 0x48ea78u: goto label_48ea78;
        case 0x48ea7cu: goto label_48ea7c;
        case 0x48ea80u: goto label_48ea80;
        case 0x48ea84u: goto label_48ea84;
        case 0x48ea88u: goto label_48ea88;
        case 0x48ea8cu: goto label_48ea8c;
        case 0x48ea90u: goto label_48ea90;
        case 0x48ea94u: goto label_48ea94;
        case 0x48ea98u: goto label_48ea98;
        case 0x48ea9cu: goto label_48ea9c;
        case 0x48eaa0u: goto label_48eaa0;
        case 0x48eaa4u: goto label_48eaa4;
        case 0x48eaa8u: goto label_48eaa8;
        case 0x48eaacu: goto label_48eaac;
        case 0x48eab0u: goto label_48eab0;
        case 0x48eab4u: goto label_48eab4;
        case 0x48eab8u: goto label_48eab8;
        case 0x48eabcu: goto label_48eabc;
        case 0x48eac0u: goto label_48eac0;
        case 0x48eac4u: goto label_48eac4;
        case 0x48eac8u: goto label_48eac8;
        case 0x48eaccu: goto label_48eacc;
        case 0x48ead0u: goto label_48ead0;
        case 0x48ead4u: goto label_48ead4;
        case 0x48ead8u: goto label_48ead8;
        case 0x48eadcu: goto label_48eadc;
        case 0x48eae0u: goto label_48eae0;
        case 0x48eae4u: goto label_48eae4;
        case 0x48eae8u: goto label_48eae8;
        case 0x48eaecu: goto label_48eaec;
        case 0x48eaf0u: goto label_48eaf0;
        case 0x48eaf4u: goto label_48eaf4;
        case 0x48eaf8u: goto label_48eaf8;
        case 0x48eafcu: goto label_48eafc;
        case 0x48eb00u: goto label_48eb00;
        case 0x48eb04u: goto label_48eb04;
        case 0x48eb08u: goto label_48eb08;
        case 0x48eb0cu: goto label_48eb0c;
        case 0x48eb10u: goto label_48eb10;
        case 0x48eb14u: goto label_48eb14;
        case 0x48eb18u: goto label_48eb18;
        case 0x48eb1cu: goto label_48eb1c;
        case 0x48eb20u: goto label_48eb20;
        case 0x48eb24u: goto label_48eb24;
        case 0x48eb28u: goto label_48eb28;
        case 0x48eb2cu: goto label_48eb2c;
        case 0x48eb30u: goto label_48eb30;
        case 0x48eb34u: goto label_48eb34;
        case 0x48eb38u: goto label_48eb38;
        case 0x48eb3cu: goto label_48eb3c;
        case 0x48eb40u: goto label_48eb40;
        case 0x48eb44u: goto label_48eb44;
        case 0x48eb48u: goto label_48eb48;
        case 0x48eb4cu: goto label_48eb4c;
        case 0x48eb50u: goto label_48eb50;
        case 0x48eb54u: goto label_48eb54;
        case 0x48eb58u: goto label_48eb58;
        case 0x48eb5cu: goto label_48eb5c;
        case 0x48eb60u: goto label_48eb60;
        case 0x48eb64u: goto label_48eb64;
        case 0x48eb68u: goto label_48eb68;
        case 0x48eb6cu: goto label_48eb6c;
        case 0x48eb70u: goto label_48eb70;
        case 0x48eb74u: goto label_48eb74;
        case 0x48eb78u: goto label_48eb78;
        case 0x48eb7cu: goto label_48eb7c;
        case 0x48eb80u: goto label_48eb80;
        case 0x48eb84u: goto label_48eb84;
        case 0x48eb88u: goto label_48eb88;
        case 0x48eb8cu: goto label_48eb8c;
        case 0x48eb90u: goto label_48eb90;
        case 0x48eb94u: goto label_48eb94;
        case 0x48eb98u: goto label_48eb98;
        case 0x48eb9cu: goto label_48eb9c;
        case 0x48eba0u: goto label_48eba0;
        case 0x48eba4u: goto label_48eba4;
        case 0x48eba8u: goto label_48eba8;
        case 0x48ebacu: goto label_48ebac;
        case 0x48ebb0u: goto label_48ebb0;
        case 0x48ebb4u: goto label_48ebb4;
        case 0x48ebb8u: goto label_48ebb8;
        case 0x48ebbcu: goto label_48ebbc;
        case 0x48ebc0u: goto label_48ebc0;
        case 0x48ebc4u: goto label_48ebc4;
        case 0x48ebc8u: goto label_48ebc8;
        case 0x48ebccu: goto label_48ebcc;
        case 0x48ebd0u: goto label_48ebd0;
        case 0x48ebd4u: goto label_48ebd4;
        case 0x48ebd8u: goto label_48ebd8;
        case 0x48ebdcu: goto label_48ebdc;
        case 0x48ebe0u: goto label_48ebe0;
        case 0x48ebe4u: goto label_48ebe4;
        case 0x48ebe8u: goto label_48ebe8;
        case 0x48ebecu: goto label_48ebec;
        case 0x48ebf0u: goto label_48ebf0;
        case 0x48ebf4u: goto label_48ebf4;
        case 0x48ebf8u: goto label_48ebf8;
        case 0x48ebfcu: goto label_48ebfc;
        case 0x48ec00u: goto label_48ec00;
        case 0x48ec04u: goto label_48ec04;
        case 0x48ec08u: goto label_48ec08;
        case 0x48ec0cu: goto label_48ec0c;
        case 0x48ec10u: goto label_48ec10;
        case 0x48ec14u: goto label_48ec14;
        case 0x48ec18u: goto label_48ec18;
        case 0x48ec1cu: goto label_48ec1c;
        case 0x48ec20u: goto label_48ec20;
        case 0x48ec24u: goto label_48ec24;
        case 0x48ec28u: goto label_48ec28;
        case 0x48ec2cu: goto label_48ec2c;
        case 0x48ec30u: goto label_48ec30;
        case 0x48ec34u: goto label_48ec34;
        case 0x48ec38u: goto label_48ec38;
        case 0x48ec3cu: goto label_48ec3c;
        case 0x48ec40u: goto label_48ec40;
        case 0x48ec44u: goto label_48ec44;
        case 0x48ec48u: goto label_48ec48;
        case 0x48ec4cu: goto label_48ec4c;
        case 0x48ec50u: goto label_48ec50;
        case 0x48ec54u: goto label_48ec54;
        case 0x48ec58u: goto label_48ec58;
        case 0x48ec5cu: goto label_48ec5c;
        case 0x48ec60u: goto label_48ec60;
        case 0x48ec64u: goto label_48ec64;
        case 0x48ec68u: goto label_48ec68;
        case 0x48ec6cu: goto label_48ec6c;
        case 0x48ec70u: goto label_48ec70;
        case 0x48ec74u: goto label_48ec74;
        case 0x48ec78u: goto label_48ec78;
        case 0x48ec7cu: goto label_48ec7c;
        case 0x48ec80u: goto label_48ec80;
        case 0x48ec84u: goto label_48ec84;
        case 0x48ec88u: goto label_48ec88;
        case 0x48ec8cu: goto label_48ec8c;
        case 0x48ec90u: goto label_48ec90;
        case 0x48ec94u: goto label_48ec94;
        case 0x48ec98u: goto label_48ec98;
        case 0x48ec9cu: goto label_48ec9c;
        case 0x48eca0u: goto label_48eca0;
        case 0x48eca4u: goto label_48eca4;
        case 0x48eca8u: goto label_48eca8;
        case 0x48ecacu: goto label_48ecac;
        case 0x48ecb0u: goto label_48ecb0;
        case 0x48ecb4u: goto label_48ecb4;
        case 0x48ecb8u: goto label_48ecb8;
        case 0x48ecbcu: goto label_48ecbc;
        case 0x48ecc0u: goto label_48ecc0;
        case 0x48ecc4u: goto label_48ecc4;
        case 0x48ecc8u: goto label_48ecc8;
        case 0x48ecccu: goto label_48eccc;
        case 0x48ecd0u: goto label_48ecd0;
        case 0x48ecd4u: goto label_48ecd4;
        case 0x48ecd8u: goto label_48ecd8;
        case 0x48ecdcu: goto label_48ecdc;
        case 0x48ece0u: goto label_48ece0;
        case 0x48ece4u: goto label_48ece4;
        case 0x48ece8u: goto label_48ece8;
        case 0x48ececu: goto label_48ecec;
        case 0x48ecf0u: goto label_48ecf0;
        case 0x48ecf4u: goto label_48ecf4;
        case 0x48ecf8u: goto label_48ecf8;
        case 0x48ecfcu: goto label_48ecfc;
        case 0x48ed00u: goto label_48ed00;
        case 0x48ed04u: goto label_48ed04;
        case 0x48ed08u: goto label_48ed08;
        case 0x48ed0cu: goto label_48ed0c;
        case 0x48ed10u: goto label_48ed10;
        case 0x48ed14u: goto label_48ed14;
        case 0x48ed18u: goto label_48ed18;
        case 0x48ed1cu: goto label_48ed1c;
        case 0x48ed20u: goto label_48ed20;
        case 0x48ed24u: goto label_48ed24;
        case 0x48ed28u: goto label_48ed28;
        case 0x48ed2cu: goto label_48ed2c;
        case 0x48ed30u: goto label_48ed30;
        case 0x48ed34u: goto label_48ed34;
        case 0x48ed38u: goto label_48ed38;
        case 0x48ed3cu: goto label_48ed3c;
        case 0x48ed40u: goto label_48ed40;
        case 0x48ed44u: goto label_48ed44;
        case 0x48ed48u: goto label_48ed48;
        case 0x48ed4cu: goto label_48ed4c;
        case 0x48ed50u: goto label_48ed50;
        case 0x48ed54u: goto label_48ed54;
        case 0x48ed58u: goto label_48ed58;
        case 0x48ed5cu: goto label_48ed5c;
        case 0x48ed60u: goto label_48ed60;
        case 0x48ed64u: goto label_48ed64;
        case 0x48ed68u: goto label_48ed68;
        case 0x48ed6cu: goto label_48ed6c;
        case 0x48ed70u: goto label_48ed70;
        case 0x48ed74u: goto label_48ed74;
        case 0x48ed78u: goto label_48ed78;
        case 0x48ed7cu: goto label_48ed7c;
        case 0x48ed80u: goto label_48ed80;
        case 0x48ed84u: goto label_48ed84;
        case 0x48ed88u: goto label_48ed88;
        case 0x48ed8cu: goto label_48ed8c;
        case 0x48ed90u: goto label_48ed90;
        case 0x48ed94u: goto label_48ed94;
        case 0x48ed98u: goto label_48ed98;
        case 0x48ed9cu: goto label_48ed9c;
        case 0x48eda0u: goto label_48eda0;
        case 0x48eda4u: goto label_48eda4;
        case 0x48eda8u: goto label_48eda8;
        case 0x48edacu: goto label_48edac;
        case 0x48edb0u: goto label_48edb0;
        case 0x48edb4u: goto label_48edb4;
        case 0x48edb8u: goto label_48edb8;
        case 0x48edbcu: goto label_48edbc;
        case 0x48edc0u: goto label_48edc0;
        case 0x48edc4u: goto label_48edc4;
        case 0x48edc8u: goto label_48edc8;
        case 0x48edccu: goto label_48edcc;
        case 0x48edd0u: goto label_48edd0;
        case 0x48edd4u: goto label_48edd4;
        case 0x48edd8u: goto label_48edd8;
        case 0x48eddcu: goto label_48eddc;
        case 0x48ede0u: goto label_48ede0;
        case 0x48ede4u: goto label_48ede4;
        case 0x48ede8u: goto label_48ede8;
        case 0x48edecu: goto label_48edec;
        case 0x48edf0u: goto label_48edf0;
        case 0x48edf4u: goto label_48edf4;
        case 0x48edf8u: goto label_48edf8;
        case 0x48edfcu: goto label_48edfc;
        case 0x48ee00u: goto label_48ee00;
        case 0x48ee04u: goto label_48ee04;
        case 0x48ee08u: goto label_48ee08;
        case 0x48ee0cu: goto label_48ee0c;
        case 0x48ee10u: goto label_48ee10;
        case 0x48ee14u: goto label_48ee14;
        case 0x48ee18u: goto label_48ee18;
        case 0x48ee1cu: goto label_48ee1c;
        case 0x48ee20u: goto label_48ee20;
        case 0x48ee24u: goto label_48ee24;
        case 0x48ee28u: goto label_48ee28;
        case 0x48ee2cu: goto label_48ee2c;
        case 0x48ee30u: goto label_48ee30;
        case 0x48ee34u: goto label_48ee34;
        case 0x48ee38u: goto label_48ee38;
        case 0x48ee3cu: goto label_48ee3c;
        case 0x48ee40u: goto label_48ee40;
        case 0x48ee44u: goto label_48ee44;
        case 0x48ee48u: goto label_48ee48;
        case 0x48ee4cu: goto label_48ee4c;
        case 0x48ee50u: goto label_48ee50;
        case 0x48ee54u: goto label_48ee54;
        case 0x48ee58u: goto label_48ee58;
        case 0x48ee5cu: goto label_48ee5c;
        case 0x48ee60u: goto label_48ee60;
        case 0x48ee64u: goto label_48ee64;
        case 0x48ee68u: goto label_48ee68;
        case 0x48ee6cu: goto label_48ee6c;
        case 0x48ee70u: goto label_48ee70;
        case 0x48ee74u: goto label_48ee74;
        case 0x48ee78u: goto label_48ee78;
        case 0x48ee7cu: goto label_48ee7c;
        case 0x48ee80u: goto label_48ee80;
        case 0x48ee84u: goto label_48ee84;
        case 0x48ee88u: goto label_48ee88;
        case 0x48ee8cu: goto label_48ee8c;
        case 0x48ee90u: goto label_48ee90;
        case 0x48ee94u: goto label_48ee94;
        case 0x48ee98u: goto label_48ee98;
        case 0x48ee9cu: goto label_48ee9c;
        case 0x48eea0u: goto label_48eea0;
        case 0x48eea4u: goto label_48eea4;
        case 0x48eea8u: goto label_48eea8;
        case 0x48eeacu: goto label_48eeac;
        case 0x48eeb0u: goto label_48eeb0;
        case 0x48eeb4u: goto label_48eeb4;
        case 0x48eeb8u: goto label_48eeb8;
        case 0x48eebcu: goto label_48eebc;
        case 0x48eec0u: goto label_48eec0;
        case 0x48eec4u: goto label_48eec4;
        case 0x48eec8u: goto label_48eec8;
        case 0x48eeccu: goto label_48eecc;
        case 0x48eed0u: goto label_48eed0;
        case 0x48eed4u: goto label_48eed4;
        case 0x48eed8u: goto label_48eed8;
        case 0x48eedcu: goto label_48eedc;
        case 0x48eee0u: goto label_48eee0;
        case 0x48eee4u: goto label_48eee4;
        case 0x48eee8u: goto label_48eee8;
        case 0x48eeecu: goto label_48eeec;
        case 0x48eef0u: goto label_48eef0;
        case 0x48eef4u: goto label_48eef4;
        case 0x48eef8u: goto label_48eef8;
        case 0x48eefcu: goto label_48eefc;
        case 0x48ef00u: goto label_48ef00;
        case 0x48ef04u: goto label_48ef04;
        case 0x48ef08u: goto label_48ef08;
        case 0x48ef0cu: goto label_48ef0c;
        case 0x48ef10u: goto label_48ef10;
        case 0x48ef14u: goto label_48ef14;
        case 0x48ef18u: goto label_48ef18;
        case 0x48ef1cu: goto label_48ef1c;
        case 0x48ef20u: goto label_48ef20;
        case 0x48ef24u: goto label_48ef24;
        case 0x48ef28u: goto label_48ef28;
        case 0x48ef2cu: goto label_48ef2c;
        case 0x48ef30u: goto label_48ef30;
        case 0x48ef34u: goto label_48ef34;
        case 0x48ef38u: goto label_48ef38;
        case 0x48ef3cu: goto label_48ef3c;
        case 0x48ef40u: goto label_48ef40;
        case 0x48ef44u: goto label_48ef44;
        case 0x48ef48u: goto label_48ef48;
        case 0x48ef4cu: goto label_48ef4c;
        case 0x48ef50u: goto label_48ef50;
        case 0x48ef54u: goto label_48ef54;
        case 0x48ef58u: goto label_48ef58;
        case 0x48ef5cu: goto label_48ef5c;
        case 0x48ef60u: goto label_48ef60;
        case 0x48ef64u: goto label_48ef64;
        case 0x48ef68u: goto label_48ef68;
        case 0x48ef6cu: goto label_48ef6c;
        case 0x48ef70u: goto label_48ef70;
        case 0x48ef74u: goto label_48ef74;
        case 0x48ef78u: goto label_48ef78;
        case 0x48ef7cu: goto label_48ef7c;
        case 0x48ef80u: goto label_48ef80;
        case 0x48ef84u: goto label_48ef84;
        case 0x48ef88u: goto label_48ef88;
        case 0x48ef8cu: goto label_48ef8c;
        case 0x48ef90u: goto label_48ef90;
        case 0x48ef94u: goto label_48ef94;
        case 0x48ef98u: goto label_48ef98;
        case 0x48ef9cu: goto label_48ef9c;
        case 0x48efa0u: goto label_48efa0;
        case 0x48efa4u: goto label_48efa4;
        case 0x48efa8u: goto label_48efa8;
        case 0x48efacu: goto label_48efac;
        case 0x48efb0u: goto label_48efb0;
        case 0x48efb4u: goto label_48efb4;
        case 0x48efb8u: goto label_48efb8;
        case 0x48efbcu: goto label_48efbc;
        case 0x48efc0u: goto label_48efc0;
        case 0x48efc4u: goto label_48efc4;
        case 0x48efc8u: goto label_48efc8;
        case 0x48efccu: goto label_48efcc;
        case 0x48efd0u: goto label_48efd0;
        case 0x48efd4u: goto label_48efd4;
        case 0x48efd8u: goto label_48efd8;
        case 0x48efdcu: goto label_48efdc;
        case 0x48efe0u: goto label_48efe0;
        case 0x48efe4u: goto label_48efe4;
        case 0x48efe8u: goto label_48efe8;
        case 0x48efecu: goto label_48efec;
        case 0x48eff0u: goto label_48eff0;
        case 0x48eff4u: goto label_48eff4;
        case 0x48eff8u: goto label_48eff8;
        case 0x48effcu: goto label_48effc;
        case 0x48f000u: goto label_48f000;
        case 0x48f004u: goto label_48f004;
        case 0x48f008u: goto label_48f008;
        case 0x48f00cu: goto label_48f00c;
        case 0x48f010u: goto label_48f010;
        case 0x48f014u: goto label_48f014;
        case 0x48f018u: goto label_48f018;
        case 0x48f01cu: goto label_48f01c;
        case 0x48f020u: goto label_48f020;
        case 0x48f024u: goto label_48f024;
        case 0x48f028u: goto label_48f028;
        case 0x48f02cu: goto label_48f02c;
        case 0x48f030u: goto label_48f030;
        case 0x48f034u: goto label_48f034;
        case 0x48f038u: goto label_48f038;
        case 0x48f03cu: goto label_48f03c;
        case 0x48f040u: goto label_48f040;
        case 0x48f044u: goto label_48f044;
        case 0x48f048u: goto label_48f048;
        case 0x48f04cu: goto label_48f04c;
        case 0x48f050u: goto label_48f050;
        case 0x48f054u: goto label_48f054;
        case 0x48f058u: goto label_48f058;
        case 0x48f05cu: goto label_48f05c;
        case 0x48f060u: goto label_48f060;
        case 0x48f064u: goto label_48f064;
        case 0x48f068u: goto label_48f068;
        case 0x48f06cu: goto label_48f06c;
        case 0x48f070u: goto label_48f070;
        case 0x48f074u: goto label_48f074;
        case 0x48f078u: goto label_48f078;
        case 0x48f07cu: goto label_48f07c;
        case 0x48f080u: goto label_48f080;
        case 0x48f084u: goto label_48f084;
        case 0x48f088u: goto label_48f088;
        case 0x48f08cu: goto label_48f08c;
        case 0x48f090u: goto label_48f090;
        case 0x48f094u: goto label_48f094;
        case 0x48f098u: goto label_48f098;
        case 0x48f09cu: goto label_48f09c;
        case 0x48f0a0u: goto label_48f0a0;
        case 0x48f0a4u: goto label_48f0a4;
        case 0x48f0a8u: goto label_48f0a8;
        case 0x48f0acu: goto label_48f0ac;
        case 0x48f0b0u: goto label_48f0b0;
        case 0x48f0b4u: goto label_48f0b4;
        case 0x48f0b8u: goto label_48f0b8;
        case 0x48f0bcu: goto label_48f0bc;
        case 0x48f0c0u: goto label_48f0c0;
        case 0x48f0c4u: goto label_48f0c4;
        case 0x48f0c8u: goto label_48f0c8;
        case 0x48f0ccu: goto label_48f0cc;
        case 0x48f0d0u: goto label_48f0d0;
        case 0x48f0d4u: goto label_48f0d4;
        case 0x48f0d8u: goto label_48f0d8;
        case 0x48f0dcu: goto label_48f0dc;
        case 0x48f0e0u: goto label_48f0e0;
        case 0x48f0e4u: goto label_48f0e4;
        case 0x48f0e8u: goto label_48f0e8;
        case 0x48f0ecu: goto label_48f0ec;
        case 0x48f0f0u: goto label_48f0f0;
        case 0x48f0f4u: goto label_48f0f4;
        case 0x48f0f8u: goto label_48f0f8;
        case 0x48f0fcu: goto label_48f0fc;
        case 0x48f100u: goto label_48f100;
        case 0x48f104u: goto label_48f104;
        case 0x48f108u: goto label_48f108;
        case 0x48f10cu: goto label_48f10c;
        case 0x48f110u: goto label_48f110;
        case 0x48f114u: goto label_48f114;
        case 0x48f118u: goto label_48f118;
        case 0x48f11cu: goto label_48f11c;
        case 0x48f120u: goto label_48f120;
        case 0x48f124u: goto label_48f124;
        case 0x48f128u: goto label_48f128;
        case 0x48f12cu: goto label_48f12c;
        case 0x48f130u: goto label_48f130;
        case 0x48f134u: goto label_48f134;
        case 0x48f138u: goto label_48f138;
        case 0x48f13cu: goto label_48f13c;
        case 0x48f140u: goto label_48f140;
        case 0x48f144u: goto label_48f144;
        case 0x48f148u: goto label_48f148;
        case 0x48f14cu: goto label_48f14c;
        case 0x48f150u: goto label_48f150;
        case 0x48f154u: goto label_48f154;
        case 0x48f158u: goto label_48f158;
        case 0x48f15cu: goto label_48f15c;
        case 0x48f160u: goto label_48f160;
        case 0x48f164u: goto label_48f164;
        case 0x48f168u: goto label_48f168;
        case 0x48f16cu: goto label_48f16c;
        case 0x48f170u: goto label_48f170;
        case 0x48f174u: goto label_48f174;
        case 0x48f178u: goto label_48f178;
        case 0x48f17cu: goto label_48f17c;
        case 0x48f180u: goto label_48f180;
        case 0x48f184u: goto label_48f184;
        case 0x48f188u: goto label_48f188;
        case 0x48f18cu: goto label_48f18c;
        case 0x48f190u: goto label_48f190;
        case 0x48f194u: goto label_48f194;
        case 0x48f198u: goto label_48f198;
        case 0x48f19cu: goto label_48f19c;
        case 0x48f1a0u: goto label_48f1a0;
        case 0x48f1a4u: goto label_48f1a4;
        case 0x48f1a8u: goto label_48f1a8;
        case 0x48f1acu: goto label_48f1ac;
        case 0x48f1b0u: goto label_48f1b0;
        case 0x48f1b4u: goto label_48f1b4;
        case 0x48f1b8u: goto label_48f1b8;
        case 0x48f1bcu: goto label_48f1bc;
        case 0x48f1c0u: goto label_48f1c0;
        case 0x48f1c4u: goto label_48f1c4;
        case 0x48f1c8u: goto label_48f1c8;
        case 0x48f1ccu: goto label_48f1cc;
        case 0x48f1d0u: goto label_48f1d0;
        case 0x48f1d4u: goto label_48f1d4;
        case 0x48f1d8u: goto label_48f1d8;
        case 0x48f1dcu: goto label_48f1dc;
        case 0x48f1e0u: goto label_48f1e0;
        case 0x48f1e4u: goto label_48f1e4;
        case 0x48f1e8u: goto label_48f1e8;
        case 0x48f1ecu: goto label_48f1ec;
        case 0x48f1f0u: goto label_48f1f0;
        case 0x48f1f4u: goto label_48f1f4;
        case 0x48f1f8u: goto label_48f1f8;
        case 0x48f1fcu: goto label_48f1fc;
        case 0x48f200u: goto label_48f200;
        case 0x48f204u: goto label_48f204;
        case 0x48f208u: goto label_48f208;
        case 0x48f20cu: goto label_48f20c;
        case 0x48f210u: goto label_48f210;
        case 0x48f214u: goto label_48f214;
        case 0x48f218u: goto label_48f218;
        case 0x48f21cu: goto label_48f21c;
        case 0x48f220u: goto label_48f220;
        case 0x48f224u: goto label_48f224;
        case 0x48f228u: goto label_48f228;
        case 0x48f22cu: goto label_48f22c;
        case 0x48f230u: goto label_48f230;
        case 0x48f234u: goto label_48f234;
        case 0x48f238u: goto label_48f238;
        case 0x48f23cu: goto label_48f23c;
        case 0x48f240u: goto label_48f240;
        case 0x48f244u: goto label_48f244;
        case 0x48f248u: goto label_48f248;
        case 0x48f24cu: goto label_48f24c;
        case 0x48f250u: goto label_48f250;
        case 0x48f254u: goto label_48f254;
        case 0x48f258u: goto label_48f258;
        case 0x48f25cu: goto label_48f25c;
        case 0x48f260u: goto label_48f260;
        case 0x48f264u: goto label_48f264;
        case 0x48f268u: goto label_48f268;
        case 0x48f26cu: goto label_48f26c;
        case 0x48f270u: goto label_48f270;
        case 0x48f274u: goto label_48f274;
        case 0x48f278u: goto label_48f278;
        case 0x48f27cu: goto label_48f27c;
        case 0x48f280u: goto label_48f280;
        case 0x48f284u: goto label_48f284;
        case 0x48f288u: goto label_48f288;
        case 0x48f28cu: goto label_48f28c;
        case 0x48f290u: goto label_48f290;
        case 0x48f294u: goto label_48f294;
        case 0x48f298u: goto label_48f298;
        case 0x48f29cu: goto label_48f29c;
        case 0x48f2a0u: goto label_48f2a0;
        case 0x48f2a4u: goto label_48f2a4;
        case 0x48f2a8u: goto label_48f2a8;
        case 0x48f2acu: goto label_48f2ac;
        case 0x48f2b0u: goto label_48f2b0;
        case 0x48f2b4u: goto label_48f2b4;
        case 0x48f2b8u: goto label_48f2b8;
        case 0x48f2bcu: goto label_48f2bc;
        case 0x48f2c0u: goto label_48f2c0;
        case 0x48f2c4u: goto label_48f2c4;
        case 0x48f2c8u: goto label_48f2c8;
        case 0x48f2ccu: goto label_48f2cc;
        case 0x48f2d0u: goto label_48f2d0;
        case 0x48f2d4u: goto label_48f2d4;
        case 0x48f2d8u: goto label_48f2d8;
        case 0x48f2dcu: goto label_48f2dc;
        case 0x48f2e0u: goto label_48f2e0;
        case 0x48f2e4u: goto label_48f2e4;
        case 0x48f2e8u: goto label_48f2e8;
        case 0x48f2ecu: goto label_48f2ec;
        case 0x48f2f0u: goto label_48f2f0;
        case 0x48f2f4u: goto label_48f2f4;
        case 0x48f2f8u: goto label_48f2f8;
        case 0x48f2fcu: goto label_48f2fc;
        case 0x48f300u: goto label_48f300;
        case 0x48f304u: goto label_48f304;
        case 0x48f308u: goto label_48f308;
        case 0x48f30cu: goto label_48f30c;
        case 0x48f310u: goto label_48f310;
        case 0x48f314u: goto label_48f314;
        case 0x48f318u: goto label_48f318;
        case 0x48f31cu: goto label_48f31c;
        case 0x48f320u: goto label_48f320;
        case 0x48f324u: goto label_48f324;
        case 0x48f328u: goto label_48f328;
        case 0x48f32cu: goto label_48f32c;
        case 0x48f330u: goto label_48f330;
        case 0x48f334u: goto label_48f334;
        case 0x48f338u: goto label_48f338;
        case 0x48f33cu: goto label_48f33c;
        case 0x48f340u: goto label_48f340;
        case 0x48f344u: goto label_48f344;
        case 0x48f348u: goto label_48f348;
        case 0x48f34cu: goto label_48f34c;
        case 0x48f350u: goto label_48f350;
        case 0x48f354u: goto label_48f354;
        case 0x48f358u: goto label_48f358;
        case 0x48f35cu: goto label_48f35c;
        case 0x48f360u: goto label_48f360;
        case 0x48f364u: goto label_48f364;
        case 0x48f368u: goto label_48f368;
        case 0x48f36cu: goto label_48f36c;
        case 0x48f370u: goto label_48f370;
        case 0x48f374u: goto label_48f374;
        case 0x48f378u: goto label_48f378;
        case 0x48f37cu: goto label_48f37c;
        case 0x48f380u: goto label_48f380;
        case 0x48f384u: goto label_48f384;
        case 0x48f388u: goto label_48f388;
        case 0x48f38cu: goto label_48f38c;
        case 0x48f390u: goto label_48f390;
        case 0x48f394u: goto label_48f394;
        case 0x48f398u: goto label_48f398;
        case 0x48f39cu: goto label_48f39c;
        case 0x48f3a0u: goto label_48f3a0;
        case 0x48f3a4u: goto label_48f3a4;
        case 0x48f3a8u: goto label_48f3a8;
        case 0x48f3acu: goto label_48f3ac;
        case 0x48f3b0u: goto label_48f3b0;
        case 0x48f3b4u: goto label_48f3b4;
        case 0x48f3b8u: goto label_48f3b8;
        case 0x48f3bcu: goto label_48f3bc;
        case 0x48f3c0u: goto label_48f3c0;
        case 0x48f3c4u: goto label_48f3c4;
        case 0x48f3c8u: goto label_48f3c8;
        case 0x48f3ccu: goto label_48f3cc;
        case 0x48f3d0u: goto label_48f3d0;
        case 0x48f3d4u: goto label_48f3d4;
        case 0x48f3d8u: goto label_48f3d8;
        case 0x48f3dcu: goto label_48f3dc;
        case 0x48f3e0u: goto label_48f3e0;
        case 0x48f3e4u: goto label_48f3e4;
        case 0x48f3e8u: goto label_48f3e8;
        case 0x48f3ecu: goto label_48f3ec;
        case 0x48f3f0u: goto label_48f3f0;
        case 0x48f3f4u: goto label_48f3f4;
        case 0x48f3f8u: goto label_48f3f8;
        case 0x48f3fcu: goto label_48f3fc;
        case 0x48f400u: goto label_48f400;
        case 0x48f404u: goto label_48f404;
        case 0x48f408u: goto label_48f408;
        case 0x48f40cu: goto label_48f40c;
        case 0x48f410u: goto label_48f410;
        case 0x48f414u: goto label_48f414;
        case 0x48f418u: goto label_48f418;
        case 0x48f41cu: goto label_48f41c;
        case 0x48f420u: goto label_48f420;
        case 0x48f424u: goto label_48f424;
        case 0x48f428u: goto label_48f428;
        case 0x48f42cu: goto label_48f42c;
        case 0x48f430u: goto label_48f430;
        case 0x48f434u: goto label_48f434;
        case 0x48f438u: goto label_48f438;
        case 0x48f43cu: goto label_48f43c;
        case 0x48f440u: goto label_48f440;
        case 0x48f444u: goto label_48f444;
        case 0x48f448u: goto label_48f448;
        case 0x48f44cu: goto label_48f44c;
        case 0x48f450u: goto label_48f450;
        case 0x48f454u: goto label_48f454;
        case 0x48f458u: goto label_48f458;
        case 0x48f45cu: goto label_48f45c;
        case 0x48f460u: goto label_48f460;
        case 0x48f464u: goto label_48f464;
        case 0x48f468u: goto label_48f468;
        case 0x48f46cu: goto label_48f46c;
        case 0x48f470u: goto label_48f470;
        case 0x48f474u: goto label_48f474;
        case 0x48f478u: goto label_48f478;
        case 0x48f47cu: goto label_48f47c;
        case 0x48f480u: goto label_48f480;
        case 0x48f484u: goto label_48f484;
        case 0x48f488u: goto label_48f488;
        case 0x48f48cu: goto label_48f48c;
        case 0x48f490u: goto label_48f490;
        case 0x48f494u: goto label_48f494;
        case 0x48f498u: goto label_48f498;
        case 0x48f49cu: goto label_48f49c;
        case 0x48f4a0u: goto label_48f4a0;
        case 0x48f4a4u: goto label_48f4a4;
        case 0x48f4a8u: goto label_48f4a8;
        case 0x48f4acu: goto label_48f4ac;
        case 0x48f4b0u: goto label_48f4b0;
        case 0x48f4b4u: goto label_48f4b4;
        case 0x48f4b8u: goto label_48f4b8;
        case 0x48f4bcu: goto label_48f4bc;
        case 0x48f4c0u: goto label_48f4c0;
        case 0x48f4c4u: goto label_48f4c4;
        case 0x48f4c8u: goto label_48f4c8;
        case 0x48f4ccu: goto label_48f4cc;
        case 0x48f4d0u: goto label_48f4d0;
        case 0x48f4d4u: goto label_48f4d4;
        case 0x48f4d8u: goto label_48f4d8;
        case 0x48f4dcu: goto label_48f4dc;
        case 0x48f4e0u: goto label_48f4e0;
        case 0x48f4e4u: goto label_48f4e4;
        case 0x48f4e8u: goto label_48f4e8;
        case 0x48f4ecu: goto label_48f4ec;
        case 0x48f4f0u: goto label_48f4f0;
        case 0x48f4f4u: goto label_48f4f4;
        case 0x48f4f8u: goto label_48f4f8;
        case 0x48f4fcu: goto label_48f4fc;
        case 0x48f500u: goto label_48f500;
        case 0x48f504u: goto label_48f504;
        case 0x48f508u: goto label_48f508;
        case 0x48f50cu: goto label_48f50c;
        case 0x48f510u: goto label_48f510;
        case 0x48f514u: goto label_48f514;
        case 0x48f518u: goto label_48f518;
        case 0x48f51cu: goto label_48f51c;
        case 0x48f520u: goto label_48f520;
        case 0x48f524u: goto label_48f524;
        case 0x48f528u: goto label_48f528;
        case 0x48f52cu: goto label_48f52c;
        case 0x48f530u: goto label_48f530;
        case 0x48f534u: goto label_48f534;
        case 0x48f538u: goto label_48f538;
        case 0x48f53cu: goto label_48f53c;
        case 0x48f540u: goto label_48f540;
        case 0x48f544u: goto label_48f544;
        case 0x48f548u: goto label_48f548;
        case 0x48f54cu: goto label_48f54c;
        case 0x48f550u: goto label_48f550;
        case 0x48f554u: goto label_48f554;
        case 0x48f558u: goto label_48f558;
        case 0x48f55cu: goto label_48f55c;
        case 0x48f560u: goto label_48f560;
        case 0x48f564u: goto label_48f564;
        case 0x48f568u: goto label_48f568;
        case 0x48f56cu: goto label_48f56c;
        case 0x48f570u: goto label_48f570;
        case 0x48f574u: goto label_48f574;
        case 0x48f578u: goto label_48f578;
        case 0x48f57cu: goto label_48f57c;
        case 0x48f580u: goto label_48f580;
        case 0x48f584u: goto label_48f584;
        case 0x48f588u: goto label_48f588;
        case 0x48f58cu: goto label_48f58c;
        case 0x48f590u: goto label_48f590;
        case 0x48f594u: goto label_48f594;
        case 0x48f598u: goto label_48f598;
        case 0x48f59cu: goto label_48f59c;
        case 0x48f5a0u: goto label_48f5a0;
        case 0x48f5a4u: goto label_48f5a4;
        case 0x48f5a8u: goto label_48f5a8;
        case 0x48f5acu: goto label_48f5ac;
        case 0x48f5b0u: goto label_48f5b0;
        case 0x48f5b4u: goto label_48f5b4;
        case 0x48f5b8u: goto label_48f5b8;
        case 0x48f5bcu: goto label_48f5bc;
        case 0x48f5c0u: goto label_48f5c0;
        case 0x48f5c4u: goto label_48f5c4;
        case 0x48f5c8u: goto label_48f5c8;
        case 0x48f5ccu: goto label_48f5cc;
        case 0x48f5d0u: goto label_48f5d0;
        case 0x48f5d4u: goto label_48f5d4;
        case 0x48f5d8u: goto label_48f5d8;
        case 0x48f5dcu: goto label_48f5dc;
        case 0x48f5e0u: goto label_48f5e0;
        case 0x48f5e4u: goto label_48f5e4;
        case 0x48f5e8u: goto label_48f5e8;
        case 0x48f5ecu: goto label_48f5ec;
        case 0x48f5f0u: goto label_48f5f0;
        case 0x48f5f4u: goto label_48f5f4;
        case 0x48f5f8u: goto label_48f5f8;
        case 0x48f5fcu: goto label_48f5fc;
        case 0x48f600u: goto label_48f600;
        case 0x48f604u: goto label_48f604;
        case 0x48f608u: goto label_48f608;
        case 0x48f60cu: goto label_48f60c;
        case 0x48f610u: goto label_48f610;
        case 0x48f614u: goto label_48f614;
        case 0x48f618u: goto label_48f618;
        case 0x48f61cu: goto label_48f61c;
        case 0x48f620u: goto label_48f620;
        case 0x48f624u: goto label_48f624;
        case 0x48f628u: goto label_48f628;
        case 0x48f62cu: goto label_48f62c;
        case 0x48f630u: goto label_48f630;
        case 0x48f634u: goto label_48f634;
        case 0x48f638u: goto label_48f638;
        case 0x48f63cu: goto label_48f63c;
        case 0x48f640u: goto label_48f640;
        case 0x48f644u: goto label_48f644;
        case 0x48f648u: goto label_48f648;
        case 0x48f64cu: goto label_48f64c;
        case 0x48f650u: goto label_48f650;
        case 0x48f654u: goto label_48f654;
        case 0x48f658u: goto label_48f658;
        case 0x48f65cu: goto label_48f65c;
        case 0x48f660u: goto label_48f660;
        case 0x48f664u: goto label_48f664;
        case 0x48f668u: goto label_48f668;
        case 0x48f66cu: goto label_48f66c;
        case 0x48f670u: goto label_48f670;
        case 0x48f674u: goto label_48f674;
        case 0x48f678u: goto label_48f678;
        case 0x48f67cu: goto label_48f67c;
        case 0x48f680u: goto label_48f680;
        case 0x48f684u: goto label_48f684;
        case 0x48f688u: goto label_48f688;
        case 0x48f68cu: goto label_48f68c;
        case 0x48f690u: goto label_48f690;
        case 0x48f694u: goto label_48f694;
        case 0x48f698u: goto label_48f698;
        case 0x48f69cu: goto label_48f69c;
        case 0x48f6a0u: goto label_48f6a0;
        case 0x48f6a4u: goto label_48f6a4;
        case 0x48f6a8u: goto label_48f6a8;
        case 0x48f6acu: goto label_48f6ac;
        case 0x48f6b0u: goto label_48f6b0;
        case 0x48f6b4u: goto label_48f6b4;
        case 0x48f6b8u: goto label_48f6b8;
        case 0x48f6bcu: goto label_48f6bc;
        case 0x48f6c0u: goto label_48f6c0;
        case 0x48f6c4u: goto label_48f6c4;
        case 0x48f6c8u: goto label_48f6c8;
        case 0x48f6ccu: goto label_48f6cc;
        case 0x48f6d0u: goto label_48f6d0;
        case 0x48f6d4u: goto label_48f6d4;
        case 0x48f6d8u: goto label_48f6d8;
        case 0x48f6dcu: goto label_48f6dc;
        case 0x48f6e0u: goto label_48f6e0;
        case 0x48f6e4u: goto label_48f6e4;
        case 0x48f6e8u: goto label_48f6e8;
        case 0x48f6ecu: goto label_48f6ec;
        case 0x48f6f0u: goto label_48f6f0;
        case 0x48f6f4u: goto label_48f6f4;
        case 0x48f6f8u: goto label_48f6f8;
        case 0x48f6fcu: goto label_48f6fc;
        case 0x48f700u: goto label_48f700;
        case 0x48f704u: goto label_48f704;
        case 0x48f708u: goto label_48f708;
        case 0x48f70cu: goto label_48f70c;
        case 0x48f710u: goto label_48f710;
        case 0x48f714u: goto label_48f714;
        case 0x48f718u: goto label_48f718;
        case 0x48f71cu: goto label_48f71c;
        case 0x48f720u: goto label_48f720;
        case 0x48f724u: goto label_48f724;
        case 0x48f728u: goto label_48f728;
        case 0x48f72cu: goto label_48f72c;
        case 0x48f730u: goto label_48f730;
        case 0x48f734u: goto label_48f734;
        case 0x48f738u: goto label_48f738;
        case 0x48f73cu: goto label_48f73c;
        case 0x48f740u: goto label_48f740;
        case 0x48f744u: goto label_48f744;
        case 0x48f748u: goto label_48f748;
        case 0x48f74cu: goto label_48f74c;
        case 0x48f750u: goto label_48f750;
        case 0x48f754u: goto label_48f754;
        case 0x48f758u: goto label_48f758;
        case 0x48f75cu: goto label_48f75c;
        case 0x48f760u: goto label_48f760;
        case 0x48f764u: goto label_48f764;
        case 0x48f768u: goto label_48f768;
        case 0x48f76cu: goto label_48f76c;
        case 0x48f770u: goto label_48f770;
        case 0x48f774u: goto label_48f774;
        case 0x48f778u: goto label_48f778;
        case 0x48f77cu: goto label_48f77c;
        case 0x48f780u: goto label_48f780;
        case 0x48f784u: goto label_48f784;
        case 0x48f788u: goto label_48f788;
        case 0x48f78cu: goto label_48f78c;
        default: break;
    }

    ctx->pc = 0x48e810u;

label_48e810:
    // 0x48e810: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x48e810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_48e814:
    // 0x48e814: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x48e814u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_48e818:
    // 0x48e818: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x48e818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_48e81c:
    // 0x48e81c: 0x2442fa10  addiu       $v0, $v0, -0x5F0
    ctx->pc = 0x48e81cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965776));
label_48e820:
    // 0x48e820: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x48e820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_48e824:
    // 0x48e824: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x48e824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_48e828:
    // 0x48e828: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x48e828u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_48e82c:
    // 0x48e82c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x48e82cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_48e830:
    // 0x48e830: 0xac850004  sw          $a1, 0x4($a0)
    ctx->pc = 0x48e830u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
label_48e834:
    // 0x48e834: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x48e834u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_48e838:
    // 0x48e838: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x48e838u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
label_48e83c:
    // 0x48e83c: 0x26090030  addiu       $t1, $s0, 0x30
    ctx->pc = 0x48e83cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_48e840:
    // 0x48e840: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x48e840u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
label_48e844:
    // 0x48e844: 0x26080064  addiu       $t0, $s0, 0x64
    ctx->pc = 0x48e844u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
label_48e848:
    // 0x48e848: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x48e848u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
label_48e84c:
    // 0x48e84c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x48e84cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_48e850:
    // 0x48e850: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x48e850u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
label_48e854:
    // 0x48e854: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x48e854u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_48e858:
    // 0x48e858: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x48e858u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
label_48e85c:
    // 0x48e85c: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x48e85cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
label_48e860:
    // 0x48e860: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x48e860u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
label_48e864:
    // 0x48e864: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x48e864u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
label_48e868:
    // 0x48e868: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x48e868u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
label_48e86c:
    // 0x48e86c: 0xac800038  sw          $zero, 0x38($a0)
    ctx->pc = 0x48e86cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 0));
label_48e870:
    // 0x48e870: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x48e870u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
label_48e874:
    // 0x48e874: 0xac800040  sw          $zero, 0x40($a0)
    ctx->pc = 0x48e874u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 0));
label_48e878:
    // 0x48e878: 0xac800044  sw          $zero, 0x44($a0)
    ctx->pc = 0x48e878u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 0));
label_48e87c:
    // 0x48e87c: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x48e87cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
label_48e880:
    // 0x48e880: 0xac80004c  sw          $zero, 0x4C($a0)
    ctx->pc = 0x48e880u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 0));
label_48e884:
    // 0x48e884: 0xac800050  sw          $zero, 0x50($a0)
    ctx->pc = 0x48e884u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 0));
label_48e888:
    // 0x48e888: 0xac800054  sw          $zero, 0x54($a0)
    ctx->pc = 0x48e888u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 0));
label_48e88c:
    // 0x48e88c: 0xac800058  sw          $zero, 0x58($a0)
    ctx->pc = 0x48e88cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 0));
label_48e890:
    // 0x48e890: 0xac80005c  sw          $zero, 0x5C($a0)
    ctx->pc = 0x48e890u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 0));
label_48e894:
    // 0x48e894: 0xac800064  sw          $zero, 0x64($a0)
    ctx->pc = 0x48e894u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 0));
label_48e898:
    // 0x48e898: 0xac800068  sw          $zero, 0x68($a0)
    ctx->pc = 0x48e898u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 104), GPR_U32(ctx, 0));
label_48e89c:
    // 0x48e89c: 0xac80006c  sw          $zero, 0x6C($a0)
    ctx->pc = 0x48e89cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 108), GPR_U32(ctx, 0));
label_48e8a0:
    // 0x48e8a0: 0xac800070  sw          $zero, 0x70($a0)
    ctx->pc = 0x48e8a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 112), GPR_U32(ctx, 0));
label_48e8a4:
    // 0x48e8a4: 0xac800074  sw          $zero, 0x74($a0)
    ctx->pc = 0x48e8a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 116), GPR_U32(ctx, 0));
label_48e8a8:
    // 0x48e8a8: 0xac800078  sw          $zero, 0x78($a0)
    ctx->pc = 0x48e8a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 120), GPR_U32(ctx, 0));
label_48e8ac:
    // 0x48e8ac: 0xa080007c  sb          $zero, 0x7C($a0)
    ctx->pc = 0x48e8acu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 124), (uint8_t)GPR_U32(ctx, 0));
label_48e8b0:
    // 0x48e8b0: 0xac800080  sw          $zero, 0x80($a0)
    ctx->pc = 0x48e8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 0));
label_48e8b4:
    // 0x48e8b4: 0xac800084  sw          $zero, 0x84($a0)
    ctx->pc = 0x48e8b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 0));
label_48e8b8:
    // 0x48e8b8: 0xac800088  sw          $zero, 0x88($a0)
    ctx->pc = 0x48e8b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 0));
label_48e8bc:
    // 0x48e8bc: 0xa0830030  sb          $v1, 0x30($a0)
    ctx->pc = 0x48e8bcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 48), (uint8_t)GPR_U32(ctx, 3));
label_48e8c0:
    // 0x48e8c0: 0x8c423e24  lw          $v0, 0x3E24($v0)
    ctx->pc = 0x48e8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15908)));
label_48e8c4:
    // 0x48e8c4: 0xac820034  sw          $v0, 0x34($a0)
    ctx->pc = 0x48e8c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 2));
label_48e8c8:
    // 0x48e8c8: 0xafa9002c  sw          $t1, 0x2C($sp)
    ctx->pc = 0x48e8c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 9));
label_48e8cc:
    // 0x48e8cc: 0x8c830068  lw          $v1, 0x68($a0)
    ctx->pc = 0x48e8ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 104)));
label_48e8d0:
    // 0x48e8d0: 0x8c82006c  lw          $v0, 0x6C($a0)
    ctx->pc = 0x48e8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 108)));
label_48e8d4:
    // 0x48e8d4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x48e8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_48e8d8:
    // 0x48e8d8: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x48e8d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_48e8dc:
    // 0x48e8dc: 0xc0a997c  jal         func_2A65F0
label_48e8e0:
    if (ctx->pc == 0x48E8E0u) {
        ctx->pc = 0x48E8E0u;
            // 0x48e8e0: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x48E8E4u;
        goto label_48e8e4;
    }
    ctx->pc = 0x48E8DCu;
    SET_GPR_U32(ctx, 31, 0x48E8E4u);
    ctx->pc = 0x48E8E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48E8DCu;
            // 0x48e8e0: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48E8E4u; }
        if (ctx->pc != 0x48E8E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48E8E4u; }
        if (ctx->pc != 0x48E8E4u) { return; }
    }
    ctx->pc = 0x48E8E4u;
label_48e8e4:
    // 0x48e8e4: 0xafb00028  sw          $s0, 0x28($sp)
    ctx->pc = 0x48e8e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 16));
label_48e8e8:
    // 0x48e8e8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x48e8e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_48e8ec:
    // 0x48e8ec: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x48e8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_48e8f0:
    // 0x48e8f0: 0x27a70028  addiu       $a3, $sp, 0x28
    ctx->pc = 0x48e8f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
label_48e8f4:
    // 0x48e8f4: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x48e8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_48e8f8:
    // 0x48e8f8: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x48e8f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_48e8fc:
    // 0x48e8fc: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x48e8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_48e900:
    // 0x48e900: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x48e900u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_48e904:
    // 0x48e904: 0xc0a997c  jal         func_2A65F0
label_48e908:
    if (ctx->pc == 0x48E908u) {
        ctx->pc = 0x48E908u;
            // 0x48e908: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x48E90Cu;
        goto label_48e90c;
    }
    ctx->pc = 0x48E904u;
    SET_GPR_U32(ctx, 31, 0x48E90Cu);
    ctx->pc = 0x48E908u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48E904u;
            // 0x48e908: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48E90Cu; }
        if (ctx->pc != 0x48E90Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48E90Cu; }
        if (ctx->pc != 0x48E90Cu) { return; }
    }
    ctx->pc = 0x48E90Cu;
label_48e90c:
    // 0x48e90c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x48e90cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_48e910:
    // 0x48e910: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x48e910u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_48e914:
    // 0x48e914: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x48e914u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_48e918:
    // 0x48e918: 0x3e00008  jr          $ra
label_48e91c:
    if (ctx->pc == 0x48E91Cu) {
        ctx->pc = 0x48E91Cu;
            // 0x48e91c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x48E920u;
        goto label_48e920;
    }
    ctx->pc = 0x48E918u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48E91Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48E918u;
            // 0x48e91c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x48E920u;
label_48e920:
    // 0x48e920: 0x27bdfd90  addiu       $sp, $sp, -0x270
    ctx->pc = 0x48e920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966672));
label_48e924:
    // 0x48e924: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x48e924u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_48e928:
    // 0x48e928: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x48e928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_48e92c:
    // 0x48e92c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x48e92cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_48e930:
    // 0x48e930: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x48e930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_48e934:
    // 0x48e934: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x48e934u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_48e938:
    // 0x48e938: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x48e938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_48e93c:
    // 0x48e93c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x48e93cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_48e940:
    // 0x48e940: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x48e940u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_48e944:
    // 0x48e944: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x48e944u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_48e948:
    // 0x48e948: 0x9083000c  lbu         $v1, 0xC($a0)
    ctx->pc = 0x48e948u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 12)));
label_48e94c:
    // 0x48e94c: 0x506002e7  beql        $v1, $zero, . + 4 + (0x2E7 << 2)
label_48e950:
    if (ctx->pc == 0x48E950u) {
        ctx->pc = 0x48E950u;
            // 0x48e950: 0x7bbe0080  lq          $fp, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->pc = 0x48E954u;
        goto label_48e954;
    }
    ctx->pc = 0x48E94Cu;
    {
        const bool branch_taken_0x48e94c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x48e94c) {
            ctx->pc = 0x48E950u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x48E94Cu;
            // 0x48e950: 0x7bbe0080  lq          $fp, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x48F4ECu;
            goto label_48f4ec;
        }
    }
    ctx->pc = 0x48E954u;
label_48e954:
    // 0x48e954: 0x90830038  lbu         $v1, 0x38($a0)
    ctx->pc = 0x48e954u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 56)));
label_48e958:
    // 0x48e958: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_48e95c:
    if (ctx->pc == 0x48E95Cu) {
        ctx->pc = 0x48E960u;
        goto label_48e960;
    }
    ctx->pc = 0x48E958u;
    {
        const bool branch_taken_0x48e958 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x48e958) {
            ctx->pc = 0x48E974u;
            goto label_48e974;
        }
    }
    ctx->pc = 0x48E960u;
label_48e960:
    // 0x48e960: 0x14a00004  bnez        $a1, . + 4 + (0x4 << 2)
label_48e964:
    if (ctx->pc == 0x48E964u) {
        ctx->pc = 0x48E968u;
        goto label_48e968;
    }
    ctx->pc = 0x48E960u;
    {
        const bool branch_taken_0x48e960 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x48e960) {
            ctx->pc = 0x48E974u;
            goto label_48e974;
        }
    }
    ctx->pc = 0x48E968u;
label_48e968:
    // 0x48e968: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x48e968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_48e96c:
    // 0x48e96c: 0x146002de  bnez        $v1, . + 4 + (0x2DE << 2)
label_48e970:
    if (ctx->pc == 0x48E970u) {
        ctx->pc = 0x48E974u;
        goto label_48e974;
    }
    ctx->pc = 0x48E96Cu;
    {
        const bool branch_taken_0x48e96c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x48e96c) {
            ctx->pc = 0x48F4E8u;
            goto label_48f4e8;
        }
    }
    ctx->pc = 0x48E974u;
label_48e974:
    // 0x48e974: 0x50a00007  beql        $a1, $zero, . + 4 + (0x7 << 2)
label_48e978:
    if (ctx->pc == 0x48E978u) {
        ctx->pc = 0x48E978u;
            // 0x48e978: 0xac850034  sw          $a1, 0x34($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 5));
        ctx->pc = 0x48E97Cu;
        goto label_48e97c;
    }
    ctx->pc = 0x48E974u;
    {
        const bool branch_taken_0x48e974 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x48e974) {
            ctx->pc = 0x48E978u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x48E974u;
            // 0x48e978: 0xac850034  sw          $a1, 0x34($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
            ctx->pc = 0x48E994u;
            goto label_48e994;
        }
    }
    ctx->pc = 0x48E97Cu;
label_48e97c:
    // 0x48e97c: 0x8c830034  lw          $v1, 0x34($a0)
    ctx->pc = 0x48e97cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_48e980:
    // 0x48e980: 0x14650003  bne         $v1, $a1, . + 4 + (0x3 << 2)
label_48e984:
    if (ctx->pc == 0x48E984u) {
        ctx->pc = 0x48E988u;
        goto label_48e988;
    }
    ctx->pc = 0x48E980u;
    {
        const bool branch_taken_0x48e980 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x48e980) {
            ctx->pc = 0x48E990u;
            goto label_48e990;
        }
    }
    ctx->pc = 0x48E988u;
label_48e988:
    // 0x48e988: 0x100002d7  b           . + 4 + (0x2D7 << 2)
label_48e98c:
    if (ctx->pc == 0x48E98Cu) {
        ctx->pc = 0x48E990u;
        goto label_48e990;
    }
    ctx->pc = 0x48E988u;
    {
        const bool branch_taken_0x48e988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x48e988) {
            ctx->pc = 0x48F4E8u;
            goto label_48f4e8;
        }
    }
    ctx->pc = 0x48E990u;
label_48e990:
    // 0x48e990: 0xac850034  sw          $a1, 0x34($a0)
    ctx->pc = 0x48e990u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 5));
label_48e994:
    // 0x48e994: 0x90830038  lbu         $v1, 0x38($a0)
    ctx->pc = 0x48e994u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 56)));
label_48e998:
    // 0x48e998: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_48e99c:
    if (ctx->pc == 0x48E99Cu) {
        ctx->pc = 0x48E9A0u;
        goto label_48e9a0;
    }
    ctx->pc = 0x48E998u;
    {
        const bool branch_taken_0x48e998 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x48e998) {
            ctx->pc = 0x48E9ACu;
            goto label_48e9ac;
        }
    }
    ctx->pc = 0x48E9A0u;
label_48e9a0:
    // 0x48e9a0: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x48e9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_48e9a4:
    // 0x48e9a4: 0x10a302d0  beq         $a1, $v1, . + 4 + (0x2D0 << 2)
label_48e9a8:
    if (ctx->pc == 0x48E9A8u) {
        ctx->pc = 0x48E9ACu;
        goto label_48e9ac;
    }
    ctx->pc = 0x48E9A4u;
    {
        const bool branch_taken_0x48e9a4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x48e9a4) {
            ctx->pc = 0x48F4E8u;
            goto label_48f4e8;
        }
    }
    ctx->pc = 0x48E9ACu;
label_48e9ac:
    // 0x48e9ac: 0x14a00002  bnez        $a1, . + 4 + (0x2 << 2)
label_48e9b0:
    if (ctx->pc == 0x48E9B0u) {
        ctx->pc = 0x48E9B4u;
        goto label_48e9b4;
    }
    ctx->pc = 0x48E9ACu;
    {
        const bool branch_taken_0x48e9ac = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x48e9ac) {
            ctx->pc = 0x48E9B8u;
            goto label_48e9b8;
        }
    }
    ctx->pc = 0x48E9B4u;
label_48e9b4:
    // 0x48e9b4: 0x8c850030  lw          $a1, 0x30($a0)
    ctx->pc = 0x48e9b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_48e9b8:
    // 0x48e9b8: 0x10a002cb  beqz        $a1, . + 4 + (0x2CB << 2)
label_48e9bc:
    if (ctx->pc == 0x48E9BCu) {
        ctx->pc = 0x48E9C0u;
        goto label_48e9c0;
    }
    ctx->pc = 0x48E9B8u;
    {
        const bool branch_taken_0x48e9b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x48e9b8) {
            ctx->pc = 0x48F4E8u;
            goto label_48f4e8;
        }
    }
    ctx->pc = 0x48E9C0u;
label_48e9c0:
    // 0x48e9c0: 0x8cae0004  lw          $t6, 0x4($a1)
    ctx->pc = 0x48e9c0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_48e9c4:
    // 0x48e9c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x48e9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_48e9c8:
    // 0x48e9c8: 0xa083000c  sb          $v1, 0xC($a0)
    ctx->pc = 0x48e9c8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 12), (uint8_t)GPR_U32(ctx, 3));
label_48e9cc:
    // 0x48e9cc: 0x94a30002  lhu         $v1, 0x2($a1)
    ctx->pc = 0x48e9ccu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
label_48e9d0:
    // 0x48e9d0: 0x18600002  blez        $v1, . + 4 + (0x2 << 2)
label_48e9d4:
    if (ctx->pc == 0x48E9D4u) {
        ctx->pc = 0x48E9D4u;
            // 0x48e9d4: 0x8cad0008  lw          $t5, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->pc = 0x48E9D8u;
        goto label_48e9d8;
    }
    ctx->pc = 0x48E9D0u;
    {
        const bool branch_taken_0x48e9d0 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x48E9D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48E9D0u;
            // 0x48e9d4: 0x8cad0008  lw          $t5, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48e9d0) {
            ctx->pc = 0x48E9DCu;
            goto label_48e9dc;
        }
    }
    ctx->pc = 0x48E9D8u;
label_48e9d8:
    // 0x48e9d8: 0xa0830039  sb          $v1, 0x39($a0)
    ctx->pc = 0x48e9d8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 57), (uint8_t)GPR_U32(ctx, 3));
label_48e9dc:
    // 0x48e9dc: 0x90830038  lbu         $v1, 0x38($a0)
    ctx->pc = 0x48e9dcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 56)));
label_48e9e0:
    // 0x48e9e0: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
label_48e9e4:
    if (ctx->pc == 0x48E9E4u) {
        ctx->pc = 0x48E9E4u;
            // 0x48e9e4: 0x90830038  lbu         $v1, 0x38($a0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 56)));
        ctx->pc = 0x48E9E8u;
        goto label_48e9e8;
    }
    ctx->pc = 0x48E9E0u;
    {
        const bool branch_taken_0x48e9e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x48e9e0) {
            ctx->pc = 0x48E9E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x48E9E0u;
            // 0x48e9e4: 0x90830038  lbu         $v1, 0x38($a0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 56)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x48E9F0u;
            goto label_48e9f0;
        }
    }
    ctx->pc = 0x48E9E8u;
label_48e9e8:
    // 0x48e9e8: 0xac850030  sw          $a1, 0x30($a0)
    ctx->pc = 0x48e9e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 5));
label_48e9ec:
    // 0x48e9ec: 0x90830038  lbu         $v1, 0x38($a0)
    ctx->pc = 0x48e9ecu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 56)));
label_48e9f0:
    // 0x48e9f0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x48e9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_48e9f4:
    // 0x48e9f4: 0xa0830038  sb          $v1, 0x38($a0)
    ctx->pc = 0x48e9f4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 56), (uint8_t)GPR_U32(ctx, 3));
label_48e9f8:
    // 0x48e9f8: 0x90830022  lbu         $v1, 0x22($a0)
    ctx->pc = 0x48e9f8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 34)));
label_48e9fc:
    // 0x48e9fc: 0x1060015e  beqz        $v1, . + 4 + (0x15E << 2)
label_48ea00:
    if (ctx->pc == 0x48EA00u) {
        ctx->pc = 0x48EA04u;
        goto label_48ea04;
    }
    ctx->pc = 0x48E9FCu;
    {
        const bool branch_taken_0x48e9fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x48e9fc) {
            ctx->pc = 0x48EF78u;
            goto label_48ef78;
        }
    }
    ctx->pc = 0x48EA04u;
label_48ea04:
    // 0x48ea04: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x48ea04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_48ea08:
    // 0x48ea08: 0x3c110061  lui         $s1, 0x61
    ctx->pc = 0x48ea08u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)97 << 16));
label_48ea0c:
    // 0x48ea0c: 0x7fa30220  sq          $v1, 0x220($sp)
    ctx->pc = 0x48ea0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 3));
label_48ea10:
    // 0x48ea10: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x48ea10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_48ea14:
    // 0x48ea14: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x48ea14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_48ea18:
    // 0x48ea18: 0x7fb10190  sq          $s1, 0x190($sp)
    ctx->pc = 0x48ea18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 17));
label_48ea1c:
    // 0x48ea1c: 0x7fa30210  sq          $v1, 0x210($sp)
    ctx->pc = 0x48ea1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 528), GPR_VEC(ctx, 3));
label_48ea20:
    // 0x48ea20: 0x3c110061  lui         $s1, 0x61
    ctx->pc = 0x48ea20u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)97 << 16));
label_48ea24:
    // 0x48ea24: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x48ea24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_48ea28:
    // 0x48ea28: 0x7fb10180  sq          $s1, 0x180($sp)
    ctx->pc = 0x48ea28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 17));
label_48ea2c:
    // 0x48ea2c: 0x7fa30200  sq          $v1, 0x200($sp)
    ctx->pc = 0x48ea2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), GPR_VEC(ctx, 3));
label_48ea30:
    // 0x48ea30: 0x3c110061  lui         $s1, 0x61
    ctx->pc = 0x48ea30u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)97 << 16));
label_48ea34:
    // 0x48ea34: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x48ea34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_48ea38:
    // 0x48ea38: 0x34a900ff  ori         $t1, $a1, 0xFF
    ctx->pc = 0x48ea38u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)255);
label_48ea3c:
    // 0x48ea3c: 0x7fa301f0  sq          $v1, 0x1F0($sp)
    ctx->pc = 0x48ea3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), GPR_VEC(ctx, 3));
label_48ea40:
    // 0x48ea40: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x48ea40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
label_48ea44:
    // 0x48ea44: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x48ea44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_48ea48:
    // 0x48ea48: 0x7fb10170  sq          $s1, 0x170($sp)
    ctx->pc = 0x48ea48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 17));
label_48ea4c:
    // 0x48ea4c: 0x7fa301e0  sq          $v1, 0x1E0($sp)
    ctx->pc = 0x48ea4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), GPR_VEC(ctx, 3));
label_48ea50:
    // 0x48ea50: 0x3c110061  lui         $s1, 0x61
    ctx->pc = 0x48ea50u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)97 << 16));
label_48ea54:
    // 0x48ea54: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x48ea54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_48ea58:
    // 0x48ea58: 0x8c8f002c  lw          $t7, 0x2C($a0)
    ctx->pc = 0x48ea58u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
label_48ea5c:
    // 0x48ea5c: 0x7fa301d0  sq          $v1, 0x1D0($sp)
    ctx->pc = 0x48ea5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), GPR_VEC(ctx, 3));
label_48ea60:
    // 0x48ea60: 0x34a7ffff  ori         $a3, $a1, 0xFFFF
    ctx->pc = 0x48ea60u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
label_48ea64:
    // 0x48ea64: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x48ea64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_48ea68:
    // 0x48ea68: 0x7fb10160  sq          $s1, 0x160($sp)
    ctx->pc = 0x48ea68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 17));
label_48ea6c:
    // 0x48ea6c: 0x7fa301c0  sq          $v1, 0x1C0($sp)
    ctx->pc = 0x48ea6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 3));
label_48ea70:
    // 0x48ea70: 0x3c0c0061  lui         $t4, 0x61
    ctx->pc = 0x48ea70u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)97 << 16));
label_48ea74:
    // 0x48ea74: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x48ea74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_48ea78:
    // 0x48ea78: 0x3c0a0061  lui         $t2, 0x61
    ctx->pc = 0x48ea78u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)97 << 16));
label_48ea7c:
    // 0x48ea7c: 0x7fa301b0  sq          $v1, 0x1B0($sp)
    ctx->pc = 0x48ea7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 3));
label_48ea80:
    // 0x48ea80: 0x3c080061  lui         $t0, 0x61
    ctx->pc = 0x48ea80u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)97 << 16));
label_48ea84:
    // 0x48ea84: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x48ea84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_48ea88:
    // 0x48ea88: 0x3c060061  lui         $a2, 0x61
    ctx->pc = 0x48ea88u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)97 << 16));
label_48ea8c:
    // 0x48ea8c: 0x7fa301a0  sq          $v1, 0x1A0($sp)
    ctx->pc = 0x48ea8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 3));
label_48ea90:
    // 0x48ea90: 0x3c050061  lui         $a1, 0x61
    ctx->pc = 0x48ea90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)97 << 16));
label_48ea94:
    // 0x48ea94: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x48ea94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_48ea98:
    // 0x48ea98: 0x3c150061  lui         $s5, 0x61
    ctx->pc = 0x48ea98u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)97 << 16));
label_48ea9c:
    // 0x48ea9c: 0x3c110061  lui         $s1, 0x61
    ctx->pc = 0x48ea9cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)97 << 16));
label_48eaa0:
    // 0x48eaa0: 0xc82d  daddu       $t9, $zero, $zero
    ctx->pc = 0x48eaa0u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_48eaa4:
    // 0x48eaa4: 0x1e0c02d  daddu       $t8, $t7, $zero
    ctx->pc = 0x48eaa4u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
label_48eaa8:
    // 0x48eaa8: 0x3c100061  lui         $s0, 0x61
    ctx->pc = 0x48eaa8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)97 << 16));
label_48eaac:
    // 0x48eaac: 0x3c170061  lui         $s7, 0x61
    ctx->pc = 0x48eaacu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)97 << 16));
label_48eab0:
    // 0x48eab0: 0x258c3e30  addiu       $t4, $t4, 0x3E30
    ctx->pc = 0x48eab0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 15920));
label_48eab4:
    // 0x48eab4: 0x240bff00  addiu       $t3, $zero, -0x100
    ctx->pc = 0x48eab4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
label_48eab8:
    // 0x48eab8: 0x3c1e0061  lui         $fp, 0x61
    ctx->pc = 0x48eab8u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)97 << 16));
label_48eabc:
    // 0x48eabc: 0x254a3e40  addiu       $t2, $t2, 0x3E40
    ctx->pc = 0x48eabcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 15936));
label_48eac0:
    // 0x48eac0: 0x25083e50  addiu       $t0, $t0, 0x3E50
    ctx->pc = 0x48eac0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 15952));
label_48eac4:
    // 0x48eac4: 0x24c63e60  addiu       $a2, $a2, 0x3E60
    ctx->pc = 0x48eac4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 15968));
label_48eac8:
    // 0x48eac8: 0x24a53e70  addiu       $a1, $a1, 0x3E70
    ctx->pc = 0x48eac8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15984));
label_48eacc:
    // 0x48eacc: 0x24633e80  addiu       $v1, $v1, 0x3E80
    ctx->pc = 0x48eaccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16000));
label_48ead0:
    // 0x48ead0: 0x26b53e90  addiu       $s5, $s5, 0x3E90
    ctx->pc = 0x48ead0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 16016));
label_48ead4:
    // 0x48ead4: 0x26313ea0  addiu       $s1, $s1, 0x3EA0
    ctx->pc = 0x48ead4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16032));
label_48ead8:
    // 0x48ead8: 0xc5e30004  lwc1        $f3, 0x4($t7)
    ctx->pc = 0x48ead8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_48eadc:
    // 0x48eadc: 0x24130003  addiu       $s3, $zero, 0x3
    ctx->pc = 0x48eadcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_48eae0:
    // 0x48eae0: 0xc5c10008  lwc1        $f1, 0x8($t6)
    ctx->pc = 0x48eae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_48eae4:
    // 0x48eae4: 0xc5e40000  lwc1        $f4, 0x0($t7)
    ctx->pc = 0x48eae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_48eae8:
    // 0x48eae8: 0xc5c20000  lwc1        $f2, 0x0($t6)
    ctx->pc = 0x48eae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_48eaec:
    // 0x48eaec: 0x4601181a  mula.s      $f3, $f1
    ctx->pc = 0x48eaecu;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_48eaf0:
    // 0x48eaf0: 0xc5c00010  lwc1        $f0, 0x10($t6)
    ctx->pc = 0x48eaf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_48eaf4:
    // 0x48eaf4: 0x4602205c  madd.s      $f1, $f4, $f2
    ctx->pc = 0x48eaf4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[2]));
label_48eaf8:
    // 0x48eaf8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x48eaf8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_48eafc:
    // 0x48eafc: 0xe7000000  swc1        $f0, 0x0($t8)
    ctx->pc = 0x48eafcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 0), bits); }
label_48eb00:
    // 0x48eb00: 0xc5c1000c  lwc1        $f1, 0xC($t6)
    ctx->pc = 0x48eb00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_48eb04:
    // 0x48eb04: 0xc5c20004  lwc1        $f2, 0x4($t6)
    ctx->pc = 0x48eb04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_48eb08:
    // 0x48eb08: 0xc5c00014  lwc1        $f0, 0x14($t6)
    ctx->pc = 0x48eb08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_48eb0c:
    // 0x48eb0c: 0x4601181a  mula.s      $f3, $f1
    ctx->pc = 0x48eb0cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_48eb10:
    // 0x48eb10: 0x4602205c  madd.s      $f1, $f4, $f2
    ctx->pc = 0x48eb10u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[2]));
label_48eb14:
    // 0x48eb14: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x48eb14u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_48eb18:
    // 0x48eb18: 0xe7000004  swc1        $f0, 0x4($t8)
    ctx->pc = 0x48eb18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 4), bits); }
label_48eb1c:
    // 0x48eb1c: 0x91b20000  lbu         $s2, 0x0($t5)
    ctx->pc = 0x48eb1cu;
    SET_GPR_U32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 0)));
label_48eb20:
    // 0x48eb20: 0x1253009b  beq         $s2, $s3, . + 4 + (0x9B << 2)
label_48eb24:
    if (ctx->pc == 0x48EB24u) {
        ctx->pc = 0x48EB28u;
        goto label_48eb28;
    }
    ctx->pc = 0x48EB20u;
    {
        const bool branch_taken_0x48eb20 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 19));
        if (branch_taken_0x48eb20) {
            ctx->pc = 0x48ED90u;
            goto label_48ed90;
        }
    }
    ctx->pc = 0x48EB28u;
label_48eb28:
    // 0x48eb28: 0x24130002  addiu       $s3, $zero, 0x2
    ctx->pc = 0x48eb28u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_48eb2c:
    // 0x48eb2c: 0x1253006c  beq         $s2, $s3, . + 4 + (0x6C << 2)
label_48eb30:
    if (ctx->pc == 0x48EB30u) {
        ctx->pc = 0x48EB34u;
        goto label_48eb34;
    }
    ctx->pc = 0x48EB2Cu;
    {
        const bool branch_taken_0x48eb2c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 19));
        if (branch_taken_0x48eb2c) {
            ctx->pc = 0x48ECE0u;
            goto label_48ece0;
        }
    }
    ctx->pc = 0x48EB34u;
label_48eb34:
    // 0x48eb34: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x48eb34u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_48eb38:
    // 0x48eb38: 0x12530005  beq         $s2, $s3, . + 4 + (0x5 << 2)
label_48eb3c:
    if (ctx->pc == 0x48EB3Cu) {
        ctx->pc = 0x48EB40u;
        goto label_48eb40;
    }
    ctx->pc = 0x48EB38u;
    {
        const bool branch_taken_0x48eb38 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 19));
        if (branch_taken_0x48eb38) {
            ctx->pc = 0x48EB50u;
            goto label_48eb50;
        }
    }
    ctx->pc = 0x48EB40u;
label_48eb40:
    // 0x48eb40: 0x12400105  beqz        $s2, . + 4 + (0x105 << 2)
label_48eb44:
    if (ctx->pc == 0x48EB44u) {
        ctx->pc = 0x48EB48u;
        goto label_48eb48;
    }
    ctx->pc = 0x48EB40u;
    {
        const bool branch_taken_0x48eb40 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x48eb40) {
            ctx->pc = 0x48EF58u;
            goto label_48ef58;
        }
    }
    ctx->pc = 0x48EB48u;
label_48eb48:
    // 0x48eb48: 0x10000103  b           . + 4 + (0x103 << 2)
label_48eb4c:
    if (ctx->pc == 0x48EB4Cu) {
        ctx->pc = 0x48EB50u;
        goto label_48eb50;
    }
    ctx->pc = 0x48EB48u;
    {
        const bool branch_taken_0x48eb48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x48eb48) {
            ctx->pc = 0x48EF58u;
            goto label_48ef58;
        }
    }
    ctx->pc = 0x48EB50u;
label_48eb50:
    // 0x48eb50: 0x91f40008  lbu         $s4, 0x8($t7)
    ctx->pc = 0x48eb50u;
    SET_GPR_U32(ctx, 20, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 8)));
label_48eb54:
    // 0x48eb54: 0x85b3000a  lh          $s3, 0xA($t5)
    ctx->pc = 0x48eb54u;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 10)));
label_48eb58:
    // 0x48eb58: 0x8e123e28  lw          $s2, 0x3E28($s0)
    ctx->pc = 0x48eb58u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 15912)));
label_48eb5c:
    // 0x48eb5c: 0x2939821  addu        $s3, $s4, $s3
    ctx->pc = 0x48eb5cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
label_48eb60:
    // 0x48eb60: 0x253082b  sltu        $at, $s2, $s3
    ctx->pc = 0x48eb60u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_48eb64:
    // 0x48eb64: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_48eb68:
    if (ctx->pc == 0x48EB68u) {
        ctx->pc = 0x48EB68u;
            // 0x48eb68: 0xafb3026c  sw          $s3, 0x26C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 620), GPR_U32(ctx, 19));
        ctx->pc = 0x48EB6Cu;
        goto label_48eb6c;
    }
    ctx->pc = 0x48EB64u;
    {
        const bool branch_taken_0x48eb64 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x48EB68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48EB64u;
            // 0x48eb68: 0xafb3026c  sw          $s3, 0x26C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 620), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48eb64) {
            ctx->pc = 0x48EB78u;
            goto label_48eb78;
        }
    }
    ctx->pc = 0x48EB6Cu;
label_48eb6c:
    // 0x48eb6c: 0x3c140061  lui         $s4, 0x61
    ctx->pc = 0x48eb6cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)97 << 16));
label_48eb70:
    // 0x48eb70: 0x10000002  b           . + 4 + (0x2 << 2)
label_48eb74:
    if (ctx->pc == 0x48EB74u) {
        ctx->pc = 0x48EB74u;
            // 0x48eb74: 0x26943e28  addiu       $s4, $s4, 0x3E28 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 15912));
        ctx->pc = 0x48EB78u;
        goto label_48eb78;
    }
    ctx->pc = 0x48EB70u;
    {
        const bool branch_taken_0x48eb70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48EB74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48EB70u;
            // 0x48eb74: 0x26943e28  addiu       $s4, $s4, 0x3E28 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 15912));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48eb70) {
            ctx->pc = 0x48EB7Cu;
            goto label_48eb7c;
        }
    }
    ctx->pc = 0x48EB78u;
label_48eb78:
    // 0x48eb78: 0x27b4026c  addiu       $s4, $sp, 0x26C
    ctx->pc = 0x48eb78u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 620));
label_48eb7c:
    // 0x48eb7c: 0x8ef33e30  lw          $s3, 0x3E30($s7)
    ctx->pc = 0x48eb7cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 15920)));
label_48eb80:
    // 0x48eb80: 0x8e920000  lw          $s2, 0x0($s4)
    ctx->pc = 0x48eb80u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_48eb84:
    // 0x48eb84: 0x272082b  sltu        $at, $s3, $s2
    ctx->pc = 0x48eb84u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_48eb88:
    // 0x48eb88: 0x50200001  beql        $at, $zero, . + 4 + (0x1 << 2)
label_48eb8c:
    if (ctx->pc == 0x48EB8Cu) {
        ctx->pc = 0x48EB8Cu;
            // 0x48eb8c: 0x180a02d  daddu       $s4, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x48EB90u;
        goto label_48eb90;
    }
    ctx->pc = 0x48EB88u;
    {
        const bool branch_taken_0x48eb88 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x48eb88) {
            ctx->pc = 0x48EB8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x48EB88u;
            // 0x48eb8c: 0x180a02d  daddu       $s4, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x48EB90u;
            goto label_48eb90;
        }
    }
    ctx->pc = 0x48EB90u;
label_48eb90:
    // 0x48eb90: 0x8f130008  lw          $s3, 0x8($t8)
    ctx->pc = 0x48eb90u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 8)));
label_48eb94:
    // 0x48eb94: 0x92920000  lbu         $s2, 0x0($s4)
    ctx->pc = 0x48eb94u;
    SET_GPR_U32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
label_48eb98:
    // 0x48eb98: 0x26b9824  and         $s3, $s3, $t3
    ctx->pc = 0x48eb98u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 11));
label_48eb9c:
    // 0x48eb9c: 0x2729025  or          $s2, $s3, $s2
    ctx->pc = 0x48eb9cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 19) | GPR_U64(ctx, 18));
label_48eba0:
    // 0x48eba0: 0xaf120008  sw          $s2, 0x8($t8)
    ctx->pc = 0x48eba0u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 8), GPR_U32(ctx, 18));
label_48eba4:
    // 0x48eba4: 0x8df40008  lw          $s4, 0x8($t7)
    ctx->pc = 0x48eba4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 8)));
label_48eba8:
    // 0x48eba8: 0x85b30008  lh          $s3, 0x8($t5)
    ctx->pc = 0x48eba8u;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 8)));
label_48ebac:
    // 0x48ebac: 0x8fd23e38  lw          $s2, 0x3E38($fp)
    ctx->pc = 0x48ebacu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 15928)));
label_48ebb0:
    // 0x48ebb0: 0x14a202  srl         $s4, $s4, 8
    ctx->pc = 0x48ebb0u;
    SET_GPR_S32(ctx, 20, (int32_t)SRL32(GPR_U32(ctx, 20), 8));
label_48ebb4:
    // 0x48ebb4: 0x329400ff  andi        $s4, $s4, 0xFF
    ctx->pc = 0x48ebb4u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
label_48ebb8:
    // 0x48ebb8: 0x2939821  addu        $s3, $s4, $s3
    ctx->pc = 0x48ebb8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
label_48ebbc:
    // 0x48ebbc: 0x253082b  sltu        $at, $s2, $s3
    ctx->pc = 0x48ebbcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_48ebc0:
    // 0x48ebc0: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_48ebc4:
    if (ctx->pc == 0x48EBC4u) {
        ctx->pc = 0x48EBC4u;
            // 0x48ebc4: 0xafb30268  sw          $s3, 0x268($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 616), GPR_U32(ctx, 19));
        ctx->pc = 0x48EBC8u;
        goto label_48ebc8;
    }
    ctx->pc = 0x48EBC0u;
    {
        const bool branch_taken_0x48ebc0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x48EBC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48EBC0u;
            // 0x48ebc4: 0xafb30268  sw          $s3, 0x268($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 616), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48ebc0) {
            ctx->pc = 0x48EBD4u;
            goto label_48ebd4;
        }
    }
    ctx->pc = 0x48EBC8u;
label_48ebc8:
    // 0x48ebc8: 0x3c140061  lui         $s4, 0x61
    ctx->pc = 0x48ebc8u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)97 << 16));
label_48ebcc:
    // 0x48ebcc: 0x10000002  b           . + 4 + (0x2 << 2)
label_48ebd0:
    if (ctx->pc == 0x48EBD0u) {
        ctx->pc = 0x48EBD0u;
            // 0x48ebd0: 0x26943e38  addiu       $s4, $s4, 0x3E38 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 15928));
        ctx->pc = 0x48EBD4u;
        goto label_48ebd4;
    }
    ctx->pc = 0x48EBCCu;
    {
        const bool branch_taken_0x48ebcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48EBD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48EBCCu;
            // 0x48ebd0: 0x26943e38  addiu       $s4, $s4, 0x3E38 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 15928));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48ebcc) {
            ctx->pc = 0x48EBD8u;
            goto label_48ebd8;
        }
    }
    ctx->pc = 0x48EBD4u;
label_48ebd4:
    // 0x48ebd4: 0x27b40268  addiu       $s4, $sp, 0x268
    ctx->pc = 0x48ebd4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 616));
label_48ebd8:
    // 0x48ebd8: 0x7bb20220  lq          $s2, 0x220($sp)
    ctx->pc = 0x48ebd8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 544)));
label_48ebdc:
    // 0x48ebdc: 0x8e533e40  lw          $s3, 0x3E40($s2)
    ctx->pc = 0x48ebdcu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 15936)));
label_48ebe0:
    // 0x48ebe0: 0x8e920000  lw          $s2, 0x0($s4)
    ctx->pc = 0x48ebe0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_48ebe4:
    // 0x48ebe4: 0x272082b  sltu        $at, $s3, $s2
    ctx->pc = 0x48ebe4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_48ebe8:
    // 0x48ebe8: 0x50200001  beql        $at, $zero, . + 4 + (0x1 << 2)
label_48ebec:
    if (ctx->pc == 0x48EBECu) {
        ctx->pc = 0x48EBECu;
            // 0x48ebec: 0x140a02d  daddu       $s4, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x48EBF0u;
        goto label_48ebf0;
    }
    ctx->pc = 0x48EBE8u;
    {
        const bool branch_taken_0x48ebe8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x48ebe8) {
            ctx->pc = 0x48EBECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x48EBE8u;
            // 0x48ebec: 0x140a02d  daddu       $s4, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x48EBF0u;
            goto label_48ebf0;
        }
    }
    ctx->pc = 0x48EBF0u;
label_48ebf0:
    // 0x48ebf0: 0x92920000  lbu         $s2, 0x0($s4)
    ctx->pc = 0x48ebf0u;
    SET_GPR_U32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
label_48ebf4:
    // 0x48ebf4: 0x8f130008  lw          $s3, 0x8($t8)
    ctx->pc = 0x48ebf4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 8)));
label_48ebf8:
    // 0x48ebf8: 0x129200  sll         $s2, $s2, 8
    ctx->pc = 0x48ebf8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 8));
label_48ebfc:
    // 0x48ebfc: 0x7bb40210  lq          $s4, 0x210($sp)
    ctx->pc = 0x48ebfcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 528)));
label_48ec00:
    // 0x48ec00: 0x2699824  and         $s3, $s3, $t1
    ctx->pc = 0x48ec00u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 9));
label_48ec04:
    // 0x48ec04: 0x2729025  or          $s2, $s3, $s2
    ctx->pc = 0x48ec04u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 19) | GPR_U64(ctx, 18));
label_48ec08:
    // 0x48ec08: 0xaf120008  sw          $s2, 0x8($t8)
    ctx->pc = 0x48ec08u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 8), GPR_U32(ctx, 18));
label_48ec0c:
    // 0x48ec0c: 0x8df30008  lw          $s3, 0x8($t7)
    ctx->pc = 0x48ec0cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 8)));
label_48ec10:
    // 0x48ec10: 0x85b20006  lh          $s2, 0x6($t5)
    ctx->pc = 0x48ec10u;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 6)));
label_48ec14:
    // 0x48ec14: 0x8e943e48  lw          $s4, 0x3E48($s4)
    ctx->pc = 0x48ec14u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 15944)));
label_48ec18:
    // 0x48ec18: 0x139c02  srl         $s3, $s3, 16
    ctx->pc = 0x48ec18u;
    SET_GPR_S32(ctx, 19, (int32_t)SRL32(GPR_U32(ctx, 19), 16));
label_48ec1c:
    // 0x48ec1c: 0x327300ff  andi        $s3, $s3, 0xFF
    ctx->pc = 0x48ec1cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
label_48ec20:
    // 0x48ec20: 0x2729021  addu        $s2, $s3, $s2
    ctx->pc = 0x48ec20u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
label_48ec24:
    // 0x48ec24: 0x292082b  sltu        $at, $s4, $s2
    ctx->pc = 0x48ec24u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_48ec28:
    // 0x48ec28: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_48ec2c:
    if (ctx->pc == 0x48EC2Cu) {
        ctx->pc = 0x48EC2Cu;
            // 0x48ec2c: 0xafb20264  sw          $s2, 0x264($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 18));
        ctx->pc = 0x48EC30u;
        goto label_48ec30;
    }
    ctx->pc = 0x48EC28u;
    {
        const bool branch_taken_0x48ec28 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x48EC2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48EC28u;
            // 0x48ec2c: 0xafb20264  sw          $s2, 0x264($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48ec28) {
            ctx->pc = 0x48EC3Cu;
            goto label_48ec3c;
        }
    }
    ctx->pc = 0x48EC30u;
label_48ec30:
    // 0x48ec30: 0x3c140061  lui         $s4, 0x61
    ctx->pc = 0x48ec30u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)97 << 16));
label_48ec34:
    // 0x48ec34: 0x10000002  b           . + 4 + (0x2 << 2)
label_48ec38:
    if (ctx->pc == 0x48EC38u) {
        ctx->pc = 0x48EC38u;
            // 0x48ec38: 0x26943e48  addiu       $s4, $s4, 0x3E48 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 15944));
        ctx->pc = 0x48EC3Cu;
        goto label_48ec3c;
    }
    ctx->pc = 0x48EC34u;
    {
        const bool branch_taken_0x48ec34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48EC38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48EC34u;
            // 0x48ec38: 0x26943e48  addiu       $s4, $s4, 0x3E48 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 15944));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48ec34) {
            ctx->pc = 0x48EC40u;
            goto label_48ec40;
        }
    }
    ctx->pc = 0x48EC3Cu;
label_48ec3c:
    // 0x48ec3c: 0x27b40264  addiu       $s4, $sp, 0x264
    ctx->pc = 0x48ec3cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 612));
label_48ec40:
    // 0x48ec40: 0x7bb20200  lq          $s2, 0x200($sp)
    ctx->pc = 0x48ec40u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 512)));
label_48ec44:
    // 0x48ec44: 0x8e533e50  lw          $s3, 0x3E50($s2)
    ctx->pc = 0x48ec44u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 15952)));
label_48ec48:
    // 0x48ec48: 0x8e920000  lw          $s2, 0x0($s4)
    ctx->pc = 0x48ec48u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_48ec4c:
    // 0x48ec4c: 0x272082b  sltu        $at, $s3, $s2
    ctx->pc = 0x48ec4cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_48ec50:
    // 0x48ec50: 0x50200001  beql        $at, $zero, . + 4 + (0x1 << 2)
label_48ec54:
    if (ctx->pc == 0x48EC54u) {
        ctx->pc = 0x48EC54u;
            // 0x48ec54: 0x100a02d  daddu       $s4, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x48EC58u;
        goto label_48ec58;
    }
    ctx->pc = 0x48EC50u;
    {
        const bool branch_taken_0x48ec50 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x48ec50) {
            ctx->pc = 0x48EC54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x48EC50u;
            // 0x48ec54: 0x100a02d  daddu       $s4, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x48EC58u;
            goto label_48ec58;
        }
    }
    ctx->pc = 0x48EC58u;
label_48ec58:
    // 0x48ec58: 0x92920000  lbu         $s2, 0x0($s4)
    ctx->pc = 0x48ec58u;
    SET_GPR_U32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
label_48ec5c:
    // 0x48ec5c: 0x8f130008  lw          $s3, 0x8($t8)
    ctx->pc = 0x48ec5cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 8)));
label_48ec60:
    // 0x48ec60: 0x129400  sll         $s2, $s2, 16
    ctx->pc = 0x48ec60u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 16));
label_48ec64:
    // 0x48ec64: 0x7bb401f0  lq          $s4, 0x1F0($sp)
    ctx->pc = 0x48ec64u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 496)));
label_48ec68:
    // 0x48ec68: 0x2679824  and         $s3, $s3, $a3
    ctx->pc = 0x48ec68u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 7));
label_48ec6c:
    // 0x48ec6c: 0x2729025  or          $s2, $s3, $s2
    ctx->pc = 0x48ec6cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 19) | GPR_U64(ctx, 18));
label_48ec70:
    // 0x48ec70: 0xaf120008  sw          $s2, 0x8($t8)
    ctx->pc = 0x48ec70u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 8), GPR_U32(ctx, 18));
label_48ec74:
    // 0x48ec74: 0x8df30008  lw          $s3, 0x8($t7)
    ctx->pc = 0x48ec74u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 8)));
label_48ec78:
    // 0x48ec78: 0x85b20004  lh          $s2, 0x4($t5)
    ctx->pc = 0x48ec78u;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 4)));
label_48ec7c:
    // 0x48ec7c: 0x8e943e58  lw          $s4, 0x3E58($s4)
    ctx->pc = 0x48ec7cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 15960)));
label_48ec80:
    // 0x48ec80: 0x139e02  srl         $s3, $s3, 24
    ctx->pc = 0x48ec80u;
    SET_GPR_S32(ctx, 19, (int32_t)SRL32(GPR_U32(ctx, 19), 24));
label_48ec84:
    // 0x48ec84: 0x327300ff  andi        $s3, $s3, 0xFF
    ctx->pc = 0x48ec84u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
label_48ec88:
    // 0x48ec88: 0x2729021  addu        $s2, $s3, $s2
    ctx->pc = 0x48ec88u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
label_48ec8c:
    // 0x48ec8c: 0x292082b  sltu        $at, $s4, $s2
    ctx->pc = 0x48ec8cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_48ec90:
    // 0x48ec90: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_48ec94:
    if (ctx->pc == 0x48EC94u) {
        ctx->pc = 0x48EC94u;
            // 0x48ec94: 0xafb20260  sw          $s2, 0x260($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 608), GPR_U32(ctx, 18));
        ctx->pc = 0x48EC98u;
        goto label_48ec98;
    }
    ctx->pc = 0x48EC90u;
    {
        const bool branch_taken_0x48ec90 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x48EC94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48EC90u;
            // 0x48ec94: 0xafb20260  sw          $s2, 0x260($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 608), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48ec90) {
            ctx->pc = 0x48ECA4u;
            goto label_48eca4;
        }
    }
    ctx->pc = 0x48EC98u;
label_48ec98:
    // 0x48ec98: 0x3c140061  lui         $s4, 0x61
    ctx->pc = 0x48ec98u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)97 << 16));
label_48ec9c:
    // 0x48ec9c: 0x10000002  b           . + 4 + (0x2 << 2)
label_48eca0:
    if (ctx->pc == 0x48ECA0u) {
        ctx->pc = 0x48ECA0u;
            // 0x48eca0: 0x26943e58  addiu       $s4, $s4, 0x3E58 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 15960));
        ctx->pc = 0x48ECA4u;
        goto label_48eca4;
    }
    ctx->pc = 0x48EC9Cu;
    {
        const bool branch_taken_0x48ec9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48ECA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48EC9Cu;
            // 0x48eca0: 0x26943e58  addiu       $s4, $s4, 0x3E58 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 15960));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48ec9c) {
            ctx->pc = 0x48ECA8u;
            goto label_48eca8;
        }
    }
    ctx->pc = 0x48ECA4u;
label_48eca4:
    // 0x48eca4: 0x27b40260  addiu       $s4, $sp, 0x260
    ctx->pc = 0x48eca4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
label_48eca8:
    // 0x48eca8: 0x7bb201e0  lq          $s2, 0x1E0($sp)
    ctx->pc = 0x48eca8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 480)));
label_48ecac:
    // 0x48ecac: 0x8e533e60  lw          $s3, 0x3E60($s2)
    ctx->pc = 0x48ecacu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 15968)));
label_48ecb0:
    // 0x48ecb0: 0x8e920000  lw          $s2, 0x0($s4)
    ctx->pc = 0x48ecb0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_48ecb4:
    // 0x48ecb4: 0x272082b  sltu        $at, $s3, $s2
    ctx->pc = 0x48ecb4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_48ecb8:
    // 0x48ecb8: 0x50200001  beql        $at, $zero, . + 4 + (0x1 << 2)
label_48ecbc:
    if (ctx->pc == 0x48ECBCu) {
        ctx->pc = 0x48ECBCu;
            // 0x48ecbc: 0xc0a02d  daddu       $s4, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x48ECC0u;
        goto label_48ecc0;
    }
    ctx->pc = 0x48ECB8u;
    {
        const bool branch_taken_0x48ecb8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x48ecb8) {
            ctx->pc = 0x48ECBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x48ECB8u;
            // 0x48ecbc: 0xc0a02d  daddu       $s4, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x48ECC0u;
            goto label_48ecc0;
        }
    }
    ctx->pc = 0x48ECC0u;
label_48ecc0:
    // 0x48ecc0: 0x8f130008  lw          $s3, 0x8($t8)
    ctx->pc = 0x48ecc0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 8)));
label_48ecc4:
    // 0x48ecc4: 0x92920000  lbu         $s2, 0x0($s4)
    ctx->pc = 0x48ecc4u;
    SET_GPR_U32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
label_48ecc8:
    // 0x48ecc8: 0x139a3c  dsll32      $s3, $s3, 8
    ctx->pc = 0x48ecc8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) << (32 + 8));
label_48eccc:
    // 0x48eccc: 0x129600  sll         $s2, $s2, 24
    ctx->pc = 0x48ecccu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 24));
label_48ecd0:
    // 0x48ecd0: 0x139a3e  dsrl32      $s3, $s3, 8
    ctx->pc = 0x48ecd0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) >> (32 + 8));
label_48ecd4:
    // 0x48ecd4: 0x2729025  or          $s2, $s3, $s2
    ctx->pc = 0x48ecd4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 19) | GPR_U64(ctx, 18));
label_48ecd8:
    // 0x48ecd8: 0x1000009f  b           . + 4 + (0x9F << 2)
label_48ecdc:
    if (ctx->pc == 0x48ECDCu) {
        ctx->pc = 0x48ECDCu;
            // 0x48ecdc: 0xaf120008  sw          $s2, 0x8($t8) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 24), 8), GPR_U32(ctx, 18));
        ctx->pc = 0x48ECE0u;
        goto label_48ece0;
    }
    ctx->pc = 0x48ECD8u;
    {
        const bool branch_taken_0x48ecd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48ECDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48ECD8u;
            // 0x48ecdc: 0xaf120008  sw          $s2, 0x8($t8) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 24), 8), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48ecd8) {
            ctx->pc = 0x48EF58u;
            goto label_48ef58;
        }
    }
    ctx->pc = 0x48ECE0u;
label_48ece0:
    // 0x48ece0: 0x91f40008  lbu         $s4, 0x8($t7)
    ctx->pc = 0x48ece0u;
    SET_GPR_U32(ctx, 20, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 8)));
label_48ece4:
    // 0x48ece4: 0x85b30012  lh          $s3, 0x12($t5)
    ctx->pc = 0x48ece4u;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 18)));
label_48ece8:
    // 0x48ece8: 0x8f120008  lw          $s2, 0x8($t8)
    ctx->pc = 0x48ece8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 8)));
label_48ecec:
    // 0x48ecec: 0x2939818  mult        $s3, $s4, $s3
    ctx->pc = 0x48ececu;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 19, (int32_t)result); }
label_48ecf0:
    // 0x48ecf0: 0x24b9024  and         $s2, $s2, $t3
    ctx->pc = 0x48ecf0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & GPR_U64(ctx, 11));
label_48ecf4:
    // 0x48ecf4: 0x139a02  srl         $s3, $s3, 8
    ctx->pc = 0x48ecf4u;
    SET_GPR_S32(ctx, 19, (int32_t)SRL32(GPR_U32(ctx, 19), 8));
label_48ecf8:
    // 0x48ecf8: 0x327300ff  andi        $s3, $s3, 0xFF
    ctx->pc = 0x48ecf8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
label_48ecfc:
    // 0x48ecfc: 0x2539025  or          $s2, $s2, $s3
    ctx->pc = 0x48ecfcu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 19));
label_48ed00:
    // 0x48ed00: 0xaf120008  sw          $s2, 0x8($t8)
    ctx->pc = 0x48ed00u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 8), GPR_U32(ctx, 18));
label_48ed04:
    // 0x48ed04: 0x8df40008  lw          $s4, 0x8($t7)
    ctx->pc = 0x48ed04u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 8)));
label_48ed08:
    // 0x48ed08: 0x2499024  and         $s2, $s2, $t1
    ctx->pc = 0x48ed08u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & GPR_U64(ctx, 9));
label_48ed0c:
    // 0x48ed0c: 0x85b30010  lh          $s3, 0x10($t5)
    ctx->pc = 0x48ed0cu;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 16)));
label_48ed10:
    // 0x48ed10: 0x14a202  srl         $s4, $s4, 8
    ctx->pc = 0x48ed10u;
    SET_GPR_S32(ctx, 20, (int32_t)SRL32(GPR_U32(ctx, 20), 8));
label_48ed14:
    // 0x48ed14: 0x329400ff  andi        $s4, $s4, 0xFF
    ctx->pc = 0x48ed14u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
label_48ed18:
    // 0x48ed18: 0x72939818  mult1       $s3, $s4, $s3
    ctx->pc = 0x48ed18u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 19); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 19, (int32_t)result); }
label_48ed1c:
    // 0x48ed1c: 0x139a02  srl         $s3, $s3, 8
    ctx->pc = 0x48ed1cu;
    SET_GPR_S32(ctx, 19, (int32_t)SRL32(GPR_U32(ctx, 19), 8));
label_48ed20:
    // 0x48ed20: 0x327300ff  andi        $s3, $s3, 0xFF
    ctx->pc = 0x48ed20u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
label_48ed24:
    // 0x48ed24: 0x139a00  sll         $s3, $s3, 8
    ctx->pc = 0x48ed24u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 19), 8));
label_48ed28:
    // 0x48ed28: 0x2539025  or          $s2, $s2, $s3
    ctx->pc = 0x48ed28u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 19));
label_48ed2c:
    // 0x48ed2c: 0xaf120008  sw          $s2, 0x8($t8)
    ctx->pc = 0x48ed2cu;
    WRITE32(ADD32(GPR_U32(ctx, 24), 8), GPR_U32(ctx, 18));
label_48ed30:
    // 0x48ed30: 0x8df40008  lw          $s4, 0x8($t7)
    ctx->pc = 0x48ed30u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 8)));
label_48ed34:
    // 0x48ed34: 0x2479024  and         $s2, $s2, $a3
    ctx->pc = 0x48ed34u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & GPR_U64(ctx, 7));
label_48ed38:
    // 0x48ed38: 0x85b3000e  lh          $s3, 0xE($t5)
    ctx->pc = 0x48ed38u;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 14)));
label_48ed3c:
    // 0x48ed3c: 0x14a602  srl         $s4, $s4, 24
    ctx->pc = 0x48ed3cu;
    SET_GPR_S32(ctx, 20, (int32_t)SRL32(GPR_U32(ctx, 20), 24));
label_48ed40:
    // 0x48ed40: 0x329400ff  andi        $s4, $s4, 0xFF
    ctx->pc = 0x48ed40u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
label_48ed44:
    // 0x48ed44: 0x2939818  mult        $s3, $s4, $s3
    ctx->pc = 0x48ed44u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 19, (int32_t)result); }
label_48ed48:
    // 0x48ed48: 0x139a02  srl         $s3, $s3, 8
    ctx->pc = 0x48ed48u;
    SET_GPR_S32(ctx, 19, (int32_t)SRL32(GPR_U32(ctx, 19), 8));
label_48ed4c:
    // 0x48ed4c: 0x327300ff  andi        $s3, $s3, 0xFF
    ctx->pc = 0x48ed4cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
label_48ed50:
    // 0x48ed50: 0x139c00  sll         $s3, $s3, 16
    ctx->pc = 0x48ed50u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 19), 16));
label_48ed54:
    // 0x48ed54: 0x2539025  or          $s2, $s2, $s3
    ctx->pc = 0x48ed54u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 19));
label_48ed58:
    // 0x48ed58: 0xaf120008  sw          $s2, 0x8($t8)
    ctx->pc = 0x48ed58u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 8), GPR_U32(ctx, 18));
label_48ed5c:
    // 0x48ed5c: 0x8df40008  lw          $s4, 0x8($t7)
    ctx->pc = 0x48ed5cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 8)));
label_48ed60:
    // 0x48ed60: 0x12923c  dsll32      $s2, $s2, 8
    ctx->pc = 0x48ed60u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) << (32 + 8));
label_48ed64:
    // 0x48ed64: 0x85b3000c  lh          $s3, 0xC($t5)
    ctx->pc = 0x48ed64u;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 12)));
label_48ed68:
    // 0x48ed68: 0x12923e  dsrl32      $s2, $s2, 8
    ctx->pc = 0x48ed68u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) >> (32 + 8));
label_48ed6c:
    // 0x48ed6c: 0x14a602  srl         $s4, $s4, 24
    ctx->pc = 0x48ed6cu;
    SET_GPR_S32(ctx, 20, (int32_t)SRL32(GPR_U32(ctx, 20), 24));
label_48ed70:
    // 0x48ed70: 0x329400ff  andi        $s4, $s4, 0xFF
    ctx->pc = 0x48ed70u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
label_48ed74:
    // 0x48ed74: 0x72939818  mult1       $s3, $s4, $s3
    ctx->pc = 0x48ed74u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 19); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 19, (int32_t)result); }
label_48ed78:
    // 0x48ed78: 0x139a02  srl         $s3, $s3, 8
    ctx->pc = 0x48ed78u;
    SET_GPR_S32(ctx, 19, (int32_t)SRL32(GPR_U32(ctx, 19), 8));
label_48ed7c:
    // 0x48ed7c: 0x327300ff  andi        $s3, $s3, 0xFF
    ctx->pc = 0x48ed7cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
label_48ed80:
    // 0x48ed80: 0x139e00  sll         $s3, $s3, 24
    ctx->pc = 0x48ed80u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 19), 24));
label_48ed84:
    // 0x48ed84: 0x2539025  or          $s2, $s2, $s3
    ctx->pc = 0x48ed84u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 19));
label_48ed88:
    // 0x48ed88: 0x10000073  b           . + 4 + (0x73 << 2)
label_48ed8c:
    if (ctx->pc == 0x48ED8Cu) {
        ctx->pc = 0x48ED8Cu;
            // 0x48ed8c: 0xaf120008  sw          $s2, 0x8($t8) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 24), 8), GPR_U32(ctx, 18));
        ctx->pc = 0x48ED90u;
        goto label_48ed90;
    }
    ctx->pc = 0x48ED88u;
    {
        const bool branch_taken_0x48ed88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48ED8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48ED88u;
            // 0x48ed8c: 0xaf120008  sw          $s2, 0x8($t8) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 24), 8), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48ed88) {
            ctx->pc = 0x48EF58u;
            goto label_48ef58;
        }
    }
    ctx->pc = 0x48ED90u;
label_48ed90:
    // 0x48ed90: 0x91f40008  lbu         $s4, 0x8($t7)
    ctx->pc = 0x48ed90u;
    SET_GPR_U32(ctx, 20, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 8)));
label_48ed94:
    // 0x48ed94: 0x85b30012  lh          $s3, 0x12($t5)
    ctx->pc = 0x48ed94u;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 18)));
label_48ed98:
    // 0x48ed98: 0x7bb601d0  lq          $s6, 0x1D0($sp)
    ctx->pc = 0x48ed98u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 464)));
label_48ed9c:
    // 0x48ed9c: 0x85b2000a  lh          $s2, 0xA($t5)
    ctx->pc = 0x48ed9cu;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 10)));
label_48eda0:
    // 0x48eda0: 0x2939818  mult        $s3, $s4, $s3
    ctx->pc = 0x48eda0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 19, (int32_t)result); }
label_48eda4:
    // 0x48eda4: 0x8ed63e68  lw          $s6, 0x3E68($s6)
    ctx->pc = 0x48eda4u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 15976)));
label_48eda8:
    // 0x48eda8: 0x139a02  srl         $s3, $s3, 8
    ctx->pc = 0x48eda8u;
    SET_GPR_S32(ctx, 19, (int32_t)SRL32(GPR_U32(ctx, 19), 8));
label_48edac:
    // 0x48edac: 0x2539021  addu        $s2, $s2, $s3
    ctx->pc = 0x48edacu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
label_48edb0:
    // 0x48edb0: 0x2d2082b  sltu        $at, $s6, $s2
    ctx->pc = 0x48edb0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_48edb4:
    // 0x48edb4: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_48edb8:
    if (ctx->pc == 0x48EDB8u) {
        ctx->pc = 0x48EDB8u;
            // 0x48edb8: 0xafb2025c  sw          $s2, 0x25C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 604), GPR_U32(ctx, 18));
        ctx->pc = 0x48EDBCu;
        goto label_48edbc;
    }
    ctx->pc = 0x48EDB4u;
    {
        const bool branch_taken_0x48edb4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x48EDB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48EDB4u;
            // 0x48edb8: 0xafb2025c  sw          $s2, 0x25C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 604), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48edb4) {
            ctx->pc = 0x48EDC8u;
            goto label_48edc8;
        }
    }
    ctx->pc = 0x48EDBCu;
label_48edbc:
    // 0x48edbc: 0x3c140061  lui         $s4, 0x61
    ctx->pc = 0x48edbcu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)97 << 16));
label_48edc0:
    // 0x48edc0: 0x10000002  b           . + 4 + (0x2 << 2)
label_48edc4:
    if (ctx->pc == 0x48EDC4u) {
        ctx->pc = 0x48EDC4u;
            // 0x48edc4: 0x26943e68  addiu       $s4, $s4, 0x3E68 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 15976));
        ctx->pc = 0x48EDC8u;
        goto label_48edc8;
    }
    ctx->pc = 0x48EDC0u;
    {
        const bool branch_taken_0x48edc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48EDC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48EDC0u;
            // 0x48edc4: 0x26943e68  addiu       $s4, $s4, 0x3E68 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 15976));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48edc0) {
            ctx->pc = 0x48EDCCu;
            goto label_48edcc;
        }
    }
    ctx->pc = 0x48EDC8u;
label_48edc8:
    // 0x48edc8: 0x27b4025c  addiu       $s4, $sp, 0x25C
    ctx->pc = 0x48edc8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 604));
label_48edcc:
    // 0x48edcc: 0x7bb201c0  lq          $s2, 0x1C0($sp)
    ctx->pc = 0x48edccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 448)));
label_48edd0:
    // 0x48edd0: 0x8e533e70  lw          $s3, 0x3E70($s2)
    ctx->pc = 0x48edd0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 15984)));
label_48edd4:
    // 0x48edd4: 0x8e920000  lw          $s2, 0x0($s4)
    ctx->pc = 0x48edd4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_48edd8:
    // 0x48edd8: 0x272082b  sltu        $at, $s3, $s2
    ctx->pc = 0x48edd8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_48eddc:
    // 0x48eddc: 0x50200001  beql        $at, $zero, . + 4 + (0x1 << 2)
label_48ede0:
    if (ctx->pc == 0x48EDE0u) {
        ctx->pc = 0x48EDE0u;
            // 0x48ede0: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x48EDE4u;
        goto label_48ede4;
    }
    ctx->pc = 0x48EDDCu;
    {
        const bool branch_taken_0x48eddc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x48eddc) {
            ctx->pc = 0x48EDE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x48EDDCu;
            // 0x48ede0: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x48EDE4u;
            goto label_48ede4;
        }
    }
    ctx->pc = 0x48EDE4u;
label_48ede4:
    // 0x48ede4: 0x8f130008  lw          $s3, 0x8($t8)
    ctx->pc = 0x48ede4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 8)));
label_48ede8:
    // 0x48ede8: 0x92920000  lbu         $s2, 0x0($s4)
    ctx->pc = 0x48ede8u;
    SET_GPR_U32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
label_48edec:
    // 0x48edec: 0x7bb601b0  lq          $s6, 0x1B0($sp)
    ctx->pc = 0x48edecu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 432)));
label_48edf0:
    // 0x48edf0: 0x26b9824  and         $s3, $s3, $t3
    ctx->pc = 0x48edf0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 11));
label_48edf4:
    // 0x48edf4: 0x2729025  or          $s2, $s3, $s2
    ctx->pc = 0x48edf4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 19) | GPR_U64(ctx, 18));
label_48edf8:
    // 0x48edf8: 0xaf120008  sw          $s2, 0x8($t8)
    ctx->pc = 0x48edf8u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 8), GPR_U32(ctx, 18));
label_48edfc:
    // 0x48edfc: 0x8df40008  lw          $s4, 0x8($t7)
    ctx->pc = 0x48edfcu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 8)));
label_48ee00:
    // 0x48ee00: 0x85b30010  lh          $s3, 0x10($t5)
    ctx->pc = 0x48ee00u;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 16)));
label_48ee04:
    // 0x48ee04: 0x85b20008  lh          $s2, 0x8($t5)
    ctx->pc = 0x48ee04u;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 8)));
label_48ee08:
    // 0x48ee08: 0x14a202  srl         $s4, $s4, 8
    ctx->pc = 0x48ee08u;
    SET_GPR_S32(ctx, 20, (int32_t)SRL32(GPR_U32(ctx, 20), 8));
label_48ee0c:
    // 0x48ee0c: 0x8ed63e78  lw          $s6, 0x3E78($s6)
    ctx->pc = 0x48ee0cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 15992)));
label_48ee10:
    // 0x48ee10: 0x329400ff  andi        $s4, $s4, 0xFF
    ctx->pc = 0x48ee10u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
label_48ee14:
    // 0x48ee14: 0x2939818  mult        $s3, $s4, $s3
    ctx->pc = 0x48ee14u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 19, (int32_t)result); }
label_48ee18:
    // 0x48ee18: 0x139a02  srl         $s3, $s3, 8
    ctx->pc = 0x48ee18u;
    SET_GPR_S32(ctx, 19, (int32_t)SRL32(GPR_U32(ctx, 19), 8));
label_48ee1c:
    // 0x48ee1c: 0x2539021  addu        $s2, $s2, $s3
    ctx->pc = 0x48ee1cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
label_48ee20:
    // 0x48ee20: 0x2d2082b  sltu        $at, $s6, $s2
    ctx->pc = 0x48ee20u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_48ee24:
    // 0x48ee24: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_48ee28:
    if (ctx->pc == 0x48EE28u) {
        ctx->pc = 0x48EE28u;
            // 0x48ee28: 0xafb20258  sw          $s2, 0x258($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 600), GPR_U32(ctx, 18));
        ctx->pc = 0x48EE2Cu;
        goto label_48ee2c;
    }
    ctx->pc = 0x48EE24u;
    {
        const bool branch_taken_0x48ee24 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x48EE28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48EE24u;
            // 0x48ee28: 0xafb20258  sw          $s2, 0x258($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 600), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48ee24) {
            ctx->pc = 0x48EE38u;
            goto label_48ee38;
        }
    }
    ctx->pc = 0x48EE2Cu;
label_48ee2c:
    // 0x48ee2c: 0x3c140061  lui         $s4, 0x61
    ctx->pc = 0x48ee2cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)97 << 16));
label_48ee30:
    // 0x48ee30: 0x10000002  b           . + 4 + (0x2 << 2)
label_48ee34:
    if (ctx->pc == 0x48EE34u) {
        ctx->pc = 0x48EE34u;
            // 0x48ee34: 0x26943e78  addiu       $s4, $s4, 0x3E78 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 15992));
        ctx->pc = 0x48EE38u;
        goto label_48ee38;
    }
    ctx->pc = 0x48EE30u;
    {
        const bool branch_taken_0x48ee30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48EE34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48EE30u;
            // 0x48ee34: 0x26943e78  addiu       $s4, $s4, 0x3E78 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 15992));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48ee30) {
            ctx->pc = 0x48EE3Cu;
            goto label_48ee3c;
        }
    }
    ctx->pc = 0x48EE38u;
label_48ee38:
    // 0x48ee38: 0x27b40258  addiu       $s4, $sp, 0x258
    ctx->pc = 0x48ee38u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 600));
label_48ee3c:
    // 0x48ee3c: 0x7bb201a0  lq          $s2, 0x1A0($sp)
    ctx->pc = 0x48ee3cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 416)));
label_48ee40:
    // 0x48ee40: 0x8e533e80  lw          $s3, 0x3E80($s2)
    ctx->pc = 0x48ee40u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16000)));
label_48ee44:
    // 0x48ee44: 0x8e920000  lw          $s2, 0x0($s4)
    ctx->pc = 0x48ee44u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_48ee48:
    // 0x48ee48: 0x272082b  sltu        $at, $s3, $s2
    ctx->pc = 0x48ee48u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_48ee4c:
    // 0x48ee4c: 0x50200001  beql        $at, $zero, . + 4 + (0x1 << 2)
label_48ee50:
    if (ctx->pc == 0x48EE50u) {
        ctx->pc = 0x48EE50u;
            // 0x48ee50: 0x60a02d  daddu       $s4, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x48EE54u;
        goto label_48ee54;
    }
    ctx->pc = 0x48EE4Cu;
    {
        const bool branch_taken_0x48ee4c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x48ee4c) {
            ctx->pc = 0x48EE50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x48EE4Cu;
            // 0x48ee50: 0x60a02d  daddu       $s4, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x48EE54u;
            goto label_48ee54;
        }
    }
    ctx->pc = 0x48EE54u;
label_48ee54:
    // 0x48ee54: 0x92920000  lbu         $s2, 0x0($s4)
    ctx->pc = 0x48ee54u;
    SET_GPR_U32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
label_48ee58:
    // 0x48ee58: 0x8f130008  lw          $s3, 0x8($t8)
    ctx->pc = 0x48ee58u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 8)));
label_48ee5c:
    // 0x48ee5c: 0x7bb60190  lq          $s6, 0x190($sp)
    ctx->pc = 0x48ee5cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 400)));
label_48ee60:
    // 0x48ee60: 0x129200  sll         $s2, $s2, 8
    ctx->pc = 0x48ee60u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 8));
label_48ee64:
    // 0x48ee64: 0x2699824  and         $s3, $s3, $t1
    ctx->pc = 0x48ee64u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 9));
label_48ee68:
    // 0x48ee68: 0x2729025  or          $s2, $s3, $s2
    ctx->pc = 0x48ee68u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 19) | GPR_U64(ctx, 18));
label_48ee6c:
    // 0x48ee6c: 0xaf120008  sw          $s2, 0x8($t8)
    ctx->pc = 0x48ee6cu;
    WRITE32(ADD32(GPR_U32(ctx, 24), 8), GPR_U32(ctx, 18));
label_48ee70:
    // 0x48ee70: 0x8df40008  lw          $s4, 0x8($t7)
    ctx->pc = 0x48ee70u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 8)));
label_48ee74:
    // 0x48ee74: 0x85b3000e  lh          $s3, 0xE($t5)
    ctx->pc = 0x48ee74u;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 14)));
label_48ee78:
    // 0x48ee78: 0x85b20006  lh          $s2, 0x6($t5)
    ctx->pc = 0x48ee78u;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 6)));
label_48ee7c:
    // 0x48ee7c: 0x14a402  srl         $s4, $s4, 16
    ctx->pc = 0x48ee7cu;
    SET_GPR_S32(ctx, 20, (int32_t)SRL32(GPR_U32(ctx, 20), 16));
label_48ee80:
    // 0x48ee80: 0x8ed63e88  lw          $s6, 0x3E88($s6)
    ctx->pc = 0x48ee80u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16008)));
label_48ee84:
    // 0x48ee84: 0x329400ff  andi        $s4, $s4, 0xFF
    ctx->pc = 0x48ee84u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
label_48ee88:
    // 0x48ee88: 0x2939818  mult        $s3, $s4, $s3
    ctx->pc = 0x48ee88u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 19, (int32_t)result); }
label_48ee8c:
    // 0x48ee8c: 0x139a02  srl         $s3, $s3, 8
    ctx->pc = 0x48ee8cu;
    SET_GPR_S32(ctx, 19, (int32_t)SRL32(GPR_U32(ctx, 19), 8));
label_48ee90:
    // 0x48ee90: 0x2539021  addu        $s2, $s2, $s3
    ctx->pc = 0x48ee90u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
label_48ee94:
    // 0x48ee94: 0x2d2082b  sltu        $at, $s6, $s2
    ctx->pc = 0x48ee94u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_48ee98:
    // 0x48ee98: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_48ee9c:
    if (ctx->pc == 0x48EE9Cu) {
        ctx->pc = 0x48EE9Cu;
            // 0x48ee9c: 0xafb20254  sw          $s2, 0x254($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 596), GPR_U32(ctx, 18));
        ctx->pc = 0x48EEA0u;
        goto label_48eea0;
    }
    ctx->pc = 0x48EE98u;
    {
        const bool branch_taken_0x48ee98 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x48EE9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48EE98u;
            // 0x48ee9c: 0xafb20254  sw          $s2, 0x254($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 596), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48ee98) {
            ctx->pc = 0x48EEACu;
            goto label_48eeac;
        }
    }
    ctx->pc = 0x48EEA0u;
label_48eea0:
    // 0x48eea0: 0x3c140061  lui         $s4, 0x61
    ctx->pc = 0x48eea0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)97 << 16));
label_48eea4:
    // 0x48eea4: 0x10000002  b           . + 4 + (0x2 << 2)
label_48eea8:
    if (ctx->pc == 0x48EEA8u) {
        ctx->pc = 0x48EEA8u;
            // 0x48eea8: 0x26943e88  addiu       $s4, $s4, 0x3E88 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16008));
        ctx->pc = 0x48EEACu;
        goto label_48eeac;
    }
    ctx->pc = 0x48EEA4u;
    {
        const bool branch_taken_0x48eea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48EEA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48EEA4u;
            // 0x48eea8: 0x26943e88  addiu       $s4, $s4, 0x3E88 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16008));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48eea4) {
            ctx->pc = 0x48EEB0u;
            goto label_48eeb0;
        }
    }
    ctx->pc = 0x48EEACu;
label_48eeac:
    // 0x48eeac: 0x27b40254  addiu       $s4, $sp, 0x254
    ctx->pc = 0x48eeacu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 596));
label_48eeb0:
    // 0x48eeb0: 0x7bb20180  lq          $s2, 0x180($sp)
    ctx->pc = 0x48eeb0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 384)));
label_48eeb4:
    // 0x48eeb4: 0x8e533e90  lw          $s3, 0x3E90($s2)
    ctx->pc = 0x48eeb4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16016)));
label_48eeb8:
    // 0x48eeb8: 0x8e920000  lw          $s2, 0x0($s4)
    ctx->pc = 0x48eeb8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_48eebc:
    // 0x48eebc: 0x272082b  sltu        $at, $s3, $s2
    ctx->pc = 0x48eebcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_48eec0:
    // 0x48eec0: 0x50200001  beql        $at, $zero, . + 4 + (0x1 << 2)
label_48eec4:
    if (ctx->pc == 0x48EEC4u) {
        ctx->pc = 0x48EEC4u;
            // 0x48eec4: 0x2a0a02d  daddu       $s4, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x48EEC8u;
        goto label_48eec8;
    }
    ctx->pc = 0x48EEC0u;
    {
        const bool branch_taken_0x48eec0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x48eec0) {
            ctx->pc = 0x48EEC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x48EEC0u;
            // 0x48eec4: 0x2a0a02d  daddu       $s4, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x48EEC8u;
            goto label_48eec8;
        }
    }
    ctx->pc = 0x48EEC8u;
label_48eec8:
    // 0x48eec8: 0x92920000  lbu         $s2, 0x0($s4)
    ctx->pc = 0x48eec8u;
    SET_GPR_U32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
label_48eecc:
    // 0x48eecc: 0x8f130008  lw          $s3, 0x8($t8)
    ctx->pc = 0x48eeccu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 8)));
label_48eed0:
    // 0x48eed0: 0x7bb60170  lq          $s6, 0x170($sp)
    ctx->pc = 0x48eed0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 368)));
label_48eed4:
    // 0x48eed4: 0x129400  sll         $s2, $s2, 16
    ctx->pc = 0x48eed4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 16));
label_48eed8:
    // 0x48eed8: 0x2679824  and         $s3, $s3, $a3
    ctx->pc = 0x48eed8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 7));
label_48eedc:
    // 0x48eedc: 0x2729025  or          $s2, $s3, $s2
    ctx->pc = 0x48eedcu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 19) | GPR_U64(ctx, 18));
label_48eee0:
    // 0x48eee0: 0xaf120008  sw          $s2, 0x8($t8)
    ctx->pc = 0x48eee0u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 8), GPR_U32(ctx, 18));
label_48eee4:
    // 0x48eee4: 0x8df40008  lw          $s4, 0x8($t7)
    ctx->pc = 0x48eee4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 8)));
label_48eee8:
    // 0x48eee8: 0x85b3000c  lh          $s3, 0xC($t5)
    ctx->pc = 0x48eee8u;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 12)));
label_48eeec:
    // 0x48eeec: 0x85b20004  lh          $s2, 0x4($t5)
    ctx->pc = 0x48eeecu;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 4)));
label_48eef0:
    // 0x48eef0: 0x14a602  srl         $s4, $s4, 24
    ctx->pc = 0x48eef0u;
    SET_GPR_S32(ctx, 20, (int32_t)SRL32(GPR_U32(ctx, 20), 24));
label_48eef4:
    // 0x48eef4: 0x8ed63e98  lw          $s6, 0x3E98($s6)
    ctx->pc = 0x48eef4u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16024)));
label_48eef8:
    // 0x48eef8: 0x329400ff  andi        $s4, $s4, 0xFF
    ctx->pc = 0x48eef8u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
label_48eefc:
    // 0x48eefc: 0x2939818  mult        $s3, $s4, $s3
    ctx->pc = 0x48eefcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 19, (int32_t)result); }
label_48ef00:
    // 0x48ef00: 0x139a02  srl         $s3, $s3, 8
    ctx->pc = 0x48ef00u;
    SET_GPR_S32(ctx, 19, (int32_t)SRL32(GPR_U32(ctx, 19), 8));
label_48ef04:
    // 0x48ef04: 0x2539021  addu        $s2, $s2, $s3
    ctx->pc = 0x48ef04u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
label_48ef08:
    // 0x48ef08: 0x2d2082b  sltu        $at, $s6, $s2
    ctx->pc = 0x48ef08u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_48ef0c:
    // 0x48ef0c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_48ef10:
    if (ctx->pc == 0x48EF10u) {
        ctx->pc = 0x48EF10u;
            // 0x48ef10: 0xafb20250  sw          $s2, 0x250($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 592), GPR_U32(ctx, 18));
        ctx->pc = 0x48EF14u;
        goto label_48ef14;
    }
    ctx->pc = 0x48EF0Cu;
    {
        const bool branch_taken_0x48ef0c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x48EF10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48EF0Cu;
            // 0x48ef10: 0xafb20250  sw          $s2, 0x250($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 592), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48ef0c) {
            ctx->pc = 0x48EF20u;
            goto label_48ef20;
        }
    }
    ctx->pc = 0x48EF14u;
label_48ef14:
    // 0x48ef14: 0x3c140061  lui         $s4, 0x61
    ctx->pc = 0x48ef14u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)97 << 16));
label_48ef18:
    // 0x48ef18: 0x10000002  b           . + 4 + (0x2 << 2)
label_48ef1c:
    if (ctx->pc == 0x48EF1Cu) {
        ctx->pc = 0x48EF1Cu;
            // 0x48ef1c: 0x26943e98  addiu       $s4, $s4, 0x3E98 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16024));
        ctx->pc = 0x48EF20u;
        goto label_48ef20;
    }
    ctx->pc = 0x48EF18u;
    {
        const bool branch_taken_0x48ef18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48EF1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48EF18u;
            // 0x48ef1c: 0x26943e98  addiu       $s4, $s4, 0x3E98 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48ef18) {
            ctx->pc = 0x48EF24u;
            goto label_48ef24;
        }
    }
    ctx->pc = 0x48EF20u;
label_48ef20:
    // 0x48ef20: 0x27b40250  addiu       $s4, $sp, 0x250
    ctx->pc = 0x48ef20u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
label_48ef24:
    // 0x48ef24: 0x7bb20160  lq          $s2, 0x160($sp)
    ctx->pc = 0x48ef24u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 352)));
label_48ef28:
    // 0x48ef28: 0x8e533ea0  lw          $s3, 0x3EA0($s2)
    ctx->pc = 0x48ef28u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16032)));
label_48ef2c:
    // 0x48ef2c: 0x8e920000  lw          $s2, 0x0($s4)
    ctx->pc = 0x48ef2cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_48ef30:
    // 0x48ef30: 0x272082b  sltu        $at, $s3, $s2
    ctx->pc = 0x48ef30u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_48ef34:
    // 0x48ef34: 0x50200001  beql        $at, $zero, . + 4 + (0x1 << 2)
label_48ef38:
    if (ctx->pc == 0x48EF38u) {
        ctx->pc = 0x48EF38u;
            // 0x48ef38: 0x220a02d  daddu       $s4, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x48EF3Cu;
        goto label_48ef3c;
    }
    ctx->pc = 0x48EF34u;
    {
        const bool branch_taken_0x48ef34 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x48ef34) {
            ctx->pc = 0x48EF38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x48EF34u;
            // 0x48ef38: 0x220a02d  daddu       $s4, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x48EF3Cu;
            goto label_48ef3c;
        }
    }
    ctx->pc = 0x48EF3Cu;
label_48ef3c:
    // 0x48ef3c: 0x8f130008  lw          $s3, 0x8($t8)
    ctx->pc = 0x48ef3cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 8)));
label_48ef40:
    // 0x48ef40: 0x92920000  lbu         $s2, 0x0($s4)
    ctx->pc = 0x48ef40u;
    SET_GPR_U32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
label_48ef44:
    // 0x48ef44: 0x139a3c  dsll32      $s3, $s3, 8
    ctx->pc = 0x48ef44u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) << (32 + 8));
label_48ef48:
    // 0x48ef48: 0x129600  sll         $s2, $s2, 24
    ctx->pc = 0x48ef48u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 24));
label_48ef4c:
    // 0x48ef4c: 0x139a3e  dsrl32      $s3, $s3, 8
    ctx->pc = 0x48ef4cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) >> (32 + 8));
label_48ef50:
    // 0x48ef50: 0x2729025  or          $s2, $s3, $s2
    ctx->pc = 0x48ef50u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 19) | GPR_U64(ctx, 18));
label_48ef54:
    // 0x48ef54: 0xaf120008  sw          $s2, 0x8($t8)
    ctx->pc = 0x48ef54u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 8), GPR_U32(ctx, 18));
label_48ef58:
    // 0x48ef58: 0x8c92001c  lw          $s2, 0x1C($a0)
    ctx->pc = 0x48ef58u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_48ef5c:
    // 0x48ef5c: 0x27390001  addiu       $t9, $t9, 0x1
    ctx->pc = 0x48ef5cu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 1));
label_48ef60:
    // 0x48ef60: 0x25ef0014  addiu       $t7, $t7, 0x14
    ctx->pc = 0x48ef60u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 20));
label_48ef64:
    // 0x48ef64: 0x332902b  sltu        $s2, $t9, $s2
    ctx->pc = 0x48ef64u;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 25) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_48ef68:
    // 0x48ef68: 0x1640fedb  bnez        $s2, . + 4 + (-0x125 << 2)
label_48ef6c:
    if (ctx->pc == 0x48EF6Cu) {
        ctx->pc = 0x48EF6Cu;
            // 0x48ef6c: 0x27180014  addiu       $t8, $t8, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 20));
        ctx->pc = 0x48EF70u;
        goto label_48ef70;
    }
    ctx->pc = 0x48EF68u;
    {
        const bool branch_taken_0x48ef68 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x48EF6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48EF68u;
            // 0x48ef6c: 0x27180014  addiu       $t8, $t8, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48ef68) {
            ctx->pc = 0x48EAD8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_48ead8;
        }
    }
    ctx->pc = 0x48EF70u;
label_48ef70:
    // 0x48ef70: 0x1000015d  b           . + 4 + (0x15D << 2)
label_48ef74:
    if (ctx->pc == 0x48EF74u) {
        ctx->pc = 0x48EF78u;
        goto label_48ef78;
    }
    ctx->pc = 0x48EF70u;
    {
        const bool branch_taken_0x48ef70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x48ef70) {
            ctx->pc = 0x48F4E8u;
            goto label_48f4e8;
        }
    }
    ctx->pc = 0x48EF78u;
label_48ef78:
    // 0x48ef78: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x48ef78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_48ef7c:
    // 0x48ef7c: 0x3c130061  lui         $s3, 0x61
    ctx->pc = 0x48ef7cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)97 << 16));
label_48ef80:
    // 0x48ef80: 0x7fa30150  sq          $v1, 0x150($sp)
    ctx->pc = 0x48ef80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 3));
label_48ef84:
    // 0x48ef84: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x48ef84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_48ef88:
    // 0x48ef88: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x48ef88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_48ef8c:
    // 0x48ef8c: 0x7fb300c0  sq          $s3, 0xC0($sp)
    ctx->pc = 0x48ef8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 19));
label_48ef90:
    // 0x48ef90: 0x7fa30140  sq          $v1, 0x140($sp)
    ctx->pc = 0x48ef90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 3));
label_48ef94:
    // 0x48ef94: 0x3c130061  lui         $s3, 0x61
    ctx->pc = 0x48ef94u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)97 << 16));
label_48ef98:
    // 0x48ef98: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x48ef98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_48ef9c:
    // 0x48ef9c: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x48ef9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
label_48efa0:
    // 0x48efa0: 0x7fa30130  sq          $v1, 0x130($sp)
    ctx->pc = 0x48efa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 3));
label_48efa4:
    // 0x48efa4: 0x3c130061  lui         $s3, 0x61
    ctx->pc = 0x48efa4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)97 << 16));
label_48efa8:
    // 0x48efa8: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x48efa8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_48efac:
    // 0x48efac: 0x34a900ff  ori         $t1, $a1, 0xFF
    ctx->pc = 0x48efacu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)255);
label_48efb0:
    // 0x48efb0: 0x7fa30120  sq          $v1, 0x120($sp)
    ctx->pc = 0x48efb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 3));
label_48efb4:
    // 0x48efb4: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x48efb4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
label_48efb8:
    // 0x48efb8: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x48efb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_48efbc:
    // 0x48efbc: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x48efbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
label_48efc0:
    // 0x48efc0: 0x7fa30110  sq          $v1, 0x110($sp)
    ctx->pc = 0x48efc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 3));
label_48efc4:
    // 0x48efc4: 0x3c130061  lui         $s3, 0x61
    ctx->pc = 0x48efc4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)97 << 16));
label_48efc8:
    // 0x48efc8: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x48efc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_48efcc:
    // 0x48efcc: 0x8c900028  lw          $s0, 0x28($a0)
    ctx->pc = 0x48efccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_48efd0:
    // 0x48efd0: 0x7fa30100  sq          $v1, 0x100($sp)
    ctx->pc = 0x48efd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 3));
label_48efd4:
    // 0x48efd4: 0x34a7ffff  ori         $a3, $a1, 0xFFFF
    ctx->pc = 0x48efd4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
label_48efd8:
    // 0x48efd8: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x48efd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_48efdc:
    // 0x48efdc: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x48efdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
label_48efe0:
    // 0x48efe0: 0x7fa300f0  sq          $v1, 0xF0($sp)
    ctx->pc = 0x48efe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 3));
label_48efe4:
    // 0x48efe4: 0x3c0c0061  lui         $t4, 0x61
    ctx->pc = 0x48efe4u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)97 << 16));
label_48efe8:
    // 0x48efe8: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x48efe8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_48efec:
    // 0x48efec: 0x3c0a0061  lui         $t2, 0x61
    ctx->pc = 0x48efecu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)97 << 16));
label_48eff0:
    // 0x48eff0: 0x7fa300e0  sq          $v1, 0xE0($sp)
    ctx->pc = 0x48eff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 3));
label_48eff4:
    // 0x48eff4: 0x3c080061  lui         $t0, 0x61
    ctx->pc = 0x48eff4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)97 << 16));
label_48eff8:
    // 0x48eff8: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x48eff8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_48effc:
    // 0x48effc: 0x3c060061  lui         $a2, 0x61
    ctx->pc = 0x48effcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)97 << 16));
label_48f000:
    // 0x48f000: 0x7fa300d0  sq          $v1, 0xD0($sp)
    ctx->pc = 0x48f000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 3));
label_48f004:
    // 0x48f004: 0x3c050061  lui         $a1, 0x61
    ctx->pc = 0x48f004u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)97 << 16));
label_48f008:
    // 0x48f008: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x48f008u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_48f00c:
    // 0x48f00c: 0x3c170061  lui         $s7, 0x61
    ctx->pc = 0x48f00cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)97 << 16));
label_48f010:
    // 0x48f010: 0x3c130061  lui         $s3, 0x61
    ctx->pc = 0x48f010u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)97 << 16));
label_48f014:
    // 0x48f014: 0x782d  daddu       $t7, $zero, $zero
    ctx->pc = 0x48f014u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_48f018:
    // 0x48f018: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x48f018u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_48f01c:
    // 0x48f01c: 0x3c120061  lui         $s2, 0x61
    ctx->pc = 0x48f01cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)97 << 16));
label_48f020:
    // 0x48f020: 0x3c190061  lui         $t9, 0x61
    ctx->pc = 0x48f020u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)97 << 16));
label_48f024:
    // 0x48f024: 0x258c3eb0  addiu       $t4, $t4, 0x3EB0
    ctx->pc = 0x48f024u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 16048));
label_48f028:
    // 0x48f028: 0x240bff00  addiu       $t3, $zero, -0x100
    ctx->pc = 0x48f028u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
label_48f02c:
    // 0x48f02c: 0x3c1e0061  lui         $fp, 0x61
    ctx->pc = 0x48f02cu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)97 << 16));
label_48f030:
    // 0x48f030: 0x254a3ec0  addiu       $t2, $t2, 0x3EC0
    ctx->pc = 0x48f030u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16064));
label_48f034:
    // 0x48f034: 0x25083ed0  addiu       $t0, $t0, 0x3ED0
    ctx->pc = 0x48f034u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16080));
label_48f038:
    // 0x48f038: 0x24c63ee0  addiu       $a2, $a2, 0x3EE0
    ctx->pc = 0x48f038u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16096));
label_48f03c:
    // 0x48f03c: 0x24a53ef0  addiu       $a1, $a1, 0x3EF0
    ctx->pc = 0x48f03cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16112));
label_48f040:
    // 0x48f040: 0x24633f00  addiu       $v1, $v1, 0x3F00
    ctx->pc = 0x48f040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16128));
label_48f044:
    // 0x48f044: 0x26f73f10  addiu       $s7, $s7, 0x3F10
    ctx->pc = 0x48f044u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 16144));
label_48f048:
    // 0x48f048: 0x26733f20  addiu       $s3, $s3, 0x3F20
    ctx->pc = 0x48f048u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16160));
label_48f04c:
    // 0x48f04c: 0xc6030004  lwc1        $f3, 0x4($s0)
    ctx->pc = 0x48f04cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_48f050:
    // 0x48f050: 0x24150003  addiu       $s5, $zero, 0x3
    ctx->pc = 0x48f050u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_48f054:
    // 0x48f054: 0xc5c10008  lwc1        $f1, 0x8($t6)
    ctx->pc = 0x48f054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_48f058:
    // 0x48f058: 0xc6040000  lwc1        $f4, 0x0($s0)
    ctx->pc = 0x48f058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_48f05c:
    // 0x48f05c: 0xc5c20000  lwc1        $f2, 0x0($t6)
    ctx->pc = 0x48f05cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_48f060:
    // 0x48f060: 0x4601181a  mula.s      $f3, $f1
    ctx->pc = 0x48f060u;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_48f064:
    // 0x48f064: 0xc5c00010  lwc1        $f0, 0x10($t6)
    ctx->pc = 0x48f064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_48f068:
    // 0x48f068: 0x4602205c  madd.s      $f1, $f4, $f2
    ctx->pc = 0x48f068u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[2]));
label_48f06c:
    // 0x48f06c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x48f06cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_48f070:
    // 0x48f070: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x48f070u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_48f074:
    // 0x48f074: 0xc5c1000c  lwc1        $f1, 0xC($t6)
    ctx->pc = 0x48f074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_48f078:
    // 0x48f078: 0xc5c20004  lwc1        $f2, 0x4($t6)
    ctx->pc = 0x48f078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_48f07c:
    // 0x48f07c: 0xc5c00014  lwc1        $f0, 0x14($t6)
    ctx->pc = 0x48f07cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_48f080:
    // 0x48f080: 0x4601181a  mula.s      $f3, $f1
    ctx->pc = 0x48f080u;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_48f084:
    // 0x48f084: 0x4602205c  madd.s      $f1, $f4, $f2
    ctx->pc = 0x48f084u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[2]));
label_48f088:
    // 0x48f088: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x48f088u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_48f08c:
    // 0x48f08c: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x48f08cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_48f090:
    // 0x48f090: 0x91b40000  lbu         $s4, 0x0($t5)
    ctx->pc = 0x48f090u;
    SET_GPR_U32(ctx, 20, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 0)));
label_48f094:
    // 0x48f094: 0x1295009c  beq         $s4, $s5, . + 4 + (0x9C << 2)
label_48f098:
    if (ctx->pc == 0x48F098u) {
        ctx->pc = 0x48F09Cu;
        goto label_48f09c;
    }
    ctx->pc = 0x48F094u;
    {
        const bool branch_taken_0x48f094 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 21));
        if (branch_taken_0x48f094) {
            ctx->pc = 0x48F308u;
            goto label_48f308;
        }
    }
    ctx->pc = 0x48F09Cu;
label_48f09c:
    // 0x48f09c: 0x24150002  addiu       $s5, $zero, 0x2
    ctx->pc = 0x48f09cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_48f0a0:
    // 0x48f0a0: 0x1295006d  beq         $s4, $s5, . + 4 + (0x6D << 2)
label_48f0a4:
    if (ctx->pc == 0x48F0A4u) {
        ctx->pc = 0x48F0A8u;
        goto label_48f0a8;
    }
    ctx->pc = 0x48F0A0u;
    {
        const bool branch_taken_0x48f0a0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 21));
        if (branch_taken_0x48f0a0) {
            ctx->pc = 0x48F258u;
            goto label_48f258;
        }
    }
    ctx->pc = 0x48F0A8u;
label_48f0a8:
    // 0x48f0a8: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x48f0a8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_48f0ac:
    // 0x48f0ac: 0x12950006  beq         $s4, $s5, . + 4 + (0x6 << 2)
label_48f0b0:
    if (ctx->pc == 0x48F0B0u) {
        ctx->pc = 0x48F0B4u;
        goto label_48f0b4;
    }
    ctx->pc = 0x48F0ACu;
    {
        const bool branch_taken_0x48f0ac = (GPR_U64(ctx, 20) == GPR_U64(ctx, 21));
        if (branch_taken_0x48f0ac) {
            ctx->pc = 0x48F0C8u;
            goto label_48f0c8;
        }
    }
    ctx->pc = 0x48F0B4u;
label_48f0b4:
    // 0x48f0b4: 0x12800106  beqz        $s4, . + 4 + (0x106 << 2)
label_48f0b8:
    if (ctx->pc == 0x48F0B8u) {
        ctx->pc = 0x48F0BCu;
        goto label_48f0bc;
    }
    ctx->pc = 0x48F0B4u;
    {
        const bool branch_taken_0x48f0b4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x48f0b4) {
            ctx->pc = 0x48F4D0u;
            goto label_48f4d0;
        }
    }
    ctx->pc = 0x48F0BCu;
label_48f0bc:
    // 0x48f0bc: 0x10000104  b           . + 4 + (0x104 << 2)
label_48f0c0:
    if (ctx->pc == 0x48F0C0u) {
        ctx->pc = 0x48F0C4u;
        goto label_48f0c4;
    }
    ctx->pc = 0x48F0BCu;
    {
        const bool branch_taken_0x48f0bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x48f0bc) {
            ctx->pc = 0x48F4D0u;
            goto label_48f4d0;
        }
    }
    ctx->pc = 0x48F0C4u;
label_48f0c4:
    // 0x48f0c4: 0x0  nop
    ctx->pc = 0x48f0c4u;
    // NOP
label_48f0c8:
    // 0x48f0c8: 0x92160008  lbu         $s6, 0x8($s0)
    ctx->pc = 0x48f0c8u;
    SET_GPR_U32(ctx, 22, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
label_48f0cc:
    // 0x48f0cc: 0x85b5000a  lh          $s5, 0xA($t5)
    ctx->pc = 0x48f0ccu;
    SET_GPR_S32(ctx, 21, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 10)));
label_48f0d0:
    // 0x48f0d0: 0x8e543ea8  lw          $s4, 0x3EA8($s2)
    ctx->pc = 0x48f0d0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16040)));
label_48f0d4:
    // 0x48f0d4: 0x2d5a821  addu        $s5, $s6, $s5
    ctx->pc = 0x48f0d4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 21)));
label_48f0d8:
    // 0x48f0d8: 0x295082b  sltu        $at, $s4, $s5
    ctx->pc = 0x48f0d8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
label_48f0dc:
    // 0x48f0dc: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_48f0e0:
    if (ctx->pc == 0x48F0E0u) {
        ctx->pc = 0x48F0E0u;
            // 0x48f0e0: 0xafb5024c  sw          $s5, 0x24C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 588), GPR_U32(ctx, 21));
        ctx->pc = 0x48F0E4u;
        goto label_48f0e4;
    }
    ctx->pc = 0x48F0DCu;
    {
        const bool branch_taken_0x48f0dc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x48F0E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48F0DCu;
            // 0x48f0e0: 0xafb5024c  sw          $s5, 0x24C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 588), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48f0dc) {
            ctx->pc = 0x48F0F0u;
            goto label_48f0f0;
        }
    }
    ctx->pc = 0x48F0E4u;
label_48f0e4:
    // 0x48f0e4: 0x3c160061  lui         $s6, 0x61
    ctx->pc = 0x48f0e4u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)97 << 16));
label_48f0e8:
    // 0x48f0e8: 0x10000002  b           . + 4 + (0x2 << 2)
label_48f0ec:
    if (ctx->pc == 0x48F0ECu) {
        ctx->pc = 0x48F0ECu;
            // 0x48f0ec: 0x26d63ea8  addiu       $s6, $s6, 0x3EA8 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 16040));
        ctx->pc = 0x48F0F0u;
        goto label_48f0f0;
    }
    ctx->pc = 0x48F0E8u;
    {
        const bool branch_taken_0x48f0e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48F0ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48F0E8u;
            // 0x48f0ec: 0x26d63ea8  addiu       $s6, $s6, 0x3EA8 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 16040));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48f0e8) {
            ctx->pc = 0x48F0F4u;
            goto label_48f0f4;
        }
    }
    ctx->pc = 0x48F0F0u;
label_48f0f0:
    // 0x48f0f0: 0x27b6024c  addiu       $s6, $sp, 0x24C
    ctx->pc = 0x48f0f0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 588));
label_48f0f4:
    // 0x48f0f4: 0x8f353eb0  lw          $s5, 0x3EB0($t9)
    ctx->pc = 0x48f0f4u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16048)));
label_48f0f8:
    // 0x48f0f8: 0x8ed40000  lw          $s4, 0x0($s6)
    ctx->pc = 0x48f0f8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_48f0fc:
    // 0x48f0fc: 0x2b4082b  sltu        $at, $s5, $s4
    ctx->pc = 0x48f0fcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
label_48f100:
    // 0x48f100: 0x50200001  beql        $at, $zero, . + 4 + (0x1 << 2)
label_48f104:
    if (ctx->pc == 0x48F104u) {
        ctx->pc = 0x48F104u;
            // 0x48f104: 0x180b02d  daddu       $s6, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x48F108u;
        goto label_48f108;
    }
    ctx->pc = 0x48F100u;
    {
        const bool branch_taken_0x48f100 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x48f100) {
            ctx->pc = 0x48F104u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x48F100u;
            // 0x48f104: 0x180b02d  daddu       $s6, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x48F108u;
            goto label_48f108;
        }
    }
    ctx->pc = 0x48F108u;
label_48f108:
    // 0x48f108: 0x8e350008  lw          $s5, 0x8($s1)
    ctx->pc = 0x48f108u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_48f10c:
    // 0x48f10c: 0x92d40000  lbu         $s4, 0x0($s6)
    ctx->pc = 0x48f10cu;
    SET_GPR_U32(ctx, 20, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
label_48f110:
    // 0x48f110: 0x2aba824  and         $s5, $s5, $t3
    ctx->pc = 0x48f110u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) & GPR_U64(ctx, 11));
label_48f114:
    // 0x48f114: 0x2b4a025  or          $s4, $s5, $s4
    ctx->pc = 0x48f114u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) | GPR_U64(ctx, 20));
label_48f118:
    // 0x48f118: 0xae340008  sw          $s4, 0x8($s1)
    ctx->pc = 0x48f118u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 20));
label_48f11c:
    // 0x48f11c: 0x8e160008  lw          $s6, 0x8($s0)
    ctx->pc = 0x48f11cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_48f120:
    // 0x48f120: 0x85b50008  lh          $s5, 0x8($t5)
    ctx->pc = 0x48f120u;
    SET_GPR_S32(ctx, 21, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 8)));
label_48f124:
    // 0x48f124: 0x8fd43eb8  lw          $s4, 0x3EB8($fp)
    ctx->pc = 0x48f124u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16056)));
label_48f128:
    // 0x48f128: 0x16b202  srl         $s6, $s6, 8
    ctx->pc = 0x48f128u;
    SET_GPR_S32(ctx, 22, (int32_t)SRL32(GPR_U32(ctx, 22), 8));
label_48f12c:
    // 0x48f12c: 0x32d600ff  andi        $s6, $s6, 0xFF
    ctx->pc = 0x48f12cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
label_48f130:
    // 0x48f130: 0x2d5a821  addu        $s5, $s6, $s5
    ctx->pc = 0x48f130u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 21)));
label_48f134:
    // 0x48f134: 0x295082b  sltu        $at, $s4, $s5
    ctx->pc = 0x48f134u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
label_48f138:
    // 0x48f138: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_48f13c:
    if (ctx->pc == 0x48F13Cu) {
        ctx->pc = 0x48F13Cu;
            // 0x48f13c: 0xafb50248  sw          $s5, 0x248($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 584), GPR_U32(ctx, 21));
        ctx->pc = 0x48F140u;
        goto label_48f140;
    }
    ctx->pc = 0x48F138u;
    {
        const bool branch_taken_0x48f138 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x48F13Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48F138u;
            // 0x48f13c: 0xafb50248  sw          $s5, 0x248($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 584), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48f138) {
            ctx->pc = 0x48F14Cu;
            goto label_48f14c;
        }
    }
    ctx->pc = 0x48F140u;
label_48f140:
    // 0x48f140: 0x3c160061  lui         $s6, 0x61
    ctx->pc = 0x48f140u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)97 << 16));
label_48f144:
    // 0x48f144: 0x10000002  b           . + 4 + (0x2 << 2)
label_48f148:
    if (ctx->pc == 0x48F148u) {
        ctx->pc = 0x48F148u;
            // 0x48f148: 0x26d63eb8  addiu       $s6, $s6, 0x3EB8 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 16056));
        ctx->pc = 0x48F14Cu;
        goto label_48f14c;
    }
    ctx->pc = 0x48F144u;
    {
        const bool branch_taken_0x48f144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48F148u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48F144u;
            // 0x48f148: 0x26d63eb8  addiu       $s6, $s6, 0x3EB8 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 16056));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48f144) {
            ctx->pc = 0x48F150u;
            goto label_48f150;
        }
    }
    ctx->pc = 0x48F14Cu;
label_48f14c:
    // 0x48f14c: 0x27b60248  addiu       $s6, $sp, 0x248
    ctx->pc = 0x48f14cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 584));
label_48f150:
    // 0x48f150: 0x7bb40150  lq          $s4, 0x150($sp)
    ctx->pc = 0x48f150u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_48f154:
    // 0x48f154: 0x8e953ec0  lw          $s5, 0x3EC0($s4)
    ctx->pc = 0x48f154u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16064)));
label_48f158:
    // 0x48f158: 0x8ed40000  lw          $s4, 0x0($s6)
    ctx->pc = 0x48f158u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_48f15c:
    // 0x48f15c: 0x2b4082b  sltu        $at, $s5, $s4
    ctx->pc = 0x48f15cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
label_48f160:
    // 0x48f160: 0x50200001  beql        $at, $zero, . + 4 + (0x1 << 2)
label_48f164:
    if (ctx->pc == 0x48F164u) {
        ctx->pc = 0x48F164u;
            // 0x48f164: 0x140b02d  daddu       $s6, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x48F168u;
        goto label_48f168;
    }
    ctx->pc = 0x48F160u;
    {
        const bool branch_taken_0x48f160 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x48f160) {
            ctx->pc = 0x48F164u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x48F160u;
            // 0x48f164: 0x140b02d  daddu       $s6, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x48F168u;
            goto label_48f168;
        }
    }
    ctx->pc = 0x48F168u;
label_48f168:
    // 0x48f168: 0x92d40000  lbu         $s4, 0x0($s6)
    ctx->pc = 0x48f168u;
    SET_GPR_U32(ctx, 20, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
label_48f16c:
    // 0x48f16c: 0x8e350008  lw          $s5, 0x8($s1)
    ctx->pc = 0x48f16cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_48f170:
    // 0x48f170: 0x14a200  sll         $s4, $s4, 8
    ctx->pc = 0x48f170u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 20), 8));
label_48f174:
    // 0x48f174: 0x7bb60140  lq          $s6, 0x140($sp)
    ctx->pc = 0x48f174u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_48f178:
    // 0x48f178: 0x2a9a824  and         $s5, $s5, $t1
    ctx->pc = 0x48f178u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) & GPR_U64(ctx, 9));
label_48f17c:
    // 0x48f17c: 0x2b4a025  or          $s4, $s5, $s4
    ctx->pc = 0x48f17cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) | GPR_U64(ctx, 20));
label_48f180:
    // 0x48f180: 0xae340008  sw          $s4, 0x8($s1)
    ctx->pc = 0x48f180u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 20));
label_48f184:
    // 0x48f184: 0x8e150008  lw          $s5, 0x8($s0)
    ctx->pc = 0x48f184u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_48f188:
    // 0x48f188: 0x85b40006  lh          $s4, 0x6($t5)
    ctx->pc = 0x48f188u;
    SET_GPR_S32(ctx, 20, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 6)));
label_48f18c:
    // 0x48f18c: 0x8ed63ec8  lw          $s6, 0x3EC8($s6)
    ctx->pc = 0x48f18cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16072)));
label_48f190:
    // 0x48f190: 0x15ac02  srl         $s5, $s5, 16
    ctx->pc = 0x48f190u;
    SET_GPR_S32(ctx, 21, (int32_t)SRL32(GPR_U32(ctx, 21), 16));
label_48f194:
    // 0x48f194: 0x32b500ff  andi        $s5, $s5, 0xFF
    ctx->pc = 0x48f194u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
label_48f198:
    // 0x48f198: 0x2b4a021  addu        $s4, $s5, $s4
    ctx->pc = 0x48f198u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 20)));
label_48f19c:
    // 0x48f19c: 0x2d4082b  sltu        $at, $s6, $s4
    ctx->pc = 0x48f19cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
label_48f1a0:
    // 0x48f1a0: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_48f1a4:
    if (ctx->pc == 0x48F1A4u) {
        ctx->pc = 0x48F1A4u;
            // 0x48f1a4: 0xafb40244  sw          $s4, 0x244($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 580), GPR_U32(ctx, 20));
        ctx->pc = 0x48F1A8u;
        goto label_48f1a8;
    }
    ctx->pc = 0x48F1A0u;
    {
        const bool branch_taken_0x48f1a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x48F1A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48F1A0u;
            // 0x48f1a4: 0xafb40244  sw          $s4, 0x244($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 580), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48f1a0) {
            ctx->pc = 0x48F1B4u;
            goto label_48f1b4;
        }
    }
    ctx->pc = 0x48F1A8u;
label_48f1a8:
    // 0x48f1a8: 0x3c160061  lui         $s6, 0x61
    ctx->pc = 0x48f1a8u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)97 << 16));
label_48f1ac:
    // 0x48f1ac: 0x10000002  b           . + 4 + (0x2 << 2)
label_48f1b0:
    if (ctx->pc == 0x48F1B0u) {
        ctx->pc = 0x48F1B0u;
            // 0x48f1b0: 0x26d63ec8  addiu       $s6, $s6, 0x3EC8 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 16072));
        ctx->pc = 0x48F1B4u;
        goto label_48f1b4;
    }
    ctx->pc = 0x48F1ACu;
    {
        const bool branch_taken_0x48f1ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48F1B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48F1ACu;
            // 0x48f1b0: 0x26d63ec8  addiu       $s6, $s6, 0x3EC8 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 16072));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48f1ac) {
            ctx->pc = 0x48F1B8u;
            goto label_48f1b8;
        }
    }
    ctx->pc = 0x48F1B4u;
label_48f1b4:
    // 0x48f1b4: 0x27b60244  addiu       $s6, $sp, 0x244
    ctx->pc = 0x48f1b4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 580));
label_48f1b8:
    // 0x48f1b8: 0x7bb40130  lq          $s4, 0x130($sp)
    ctx->pc = 0x48f1b8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_48f1bc:
    // 0x48f1bc: 0x8e953ed0  lw          $s5, 0x3ED0($s4)
    ctx->pc = 0x48f1bcu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16080)));
label_48f1c0:
    // 0x48f1c0: 0x8ed40000  lw          $s4, 0x0($s6)
    ctx->pc = 0x48f1c0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_48f1c4:
    // 0x48f1c4: 0x2b4082b  sltu        $at, $s5, $s4
    ctx->pc = 0x48f1c4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
label_48f1c8:
    // 0x48f1c8: 0x50200001  beql        $at, $zero, . + 4 + (0x1 << 2)
label_48f1cc:
    if (ctx->pc == 0x48F1CCu) {
        ctx->pc = 0x48F1CCu;
            // 0x48f1cc: 0x100b02d  daddu       $s6, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x48F1D0u;
        goto label_48f1d0;
    }
    ctx->pc = 0x48F1C8u;
    {
        const bool branch_taken_0x48f1c8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x48f1c8) {
            ctx->pc = 0x48F1CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x48F1C8u;
            // 0x48f1cc: 0x100b02d  daddu       $s6, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x48F1D0u;
            goto label_48f1d0;
        }
    }
    ctx->pc = 0x48F1D0u;
label_48f1d0:
    // 0x48f1d0: 0x92d40000  lbu         $s4, 0x0($s6)
    ctx->pc = 0x48f1d0u;
    SET_GPR_U32(ctx, 20, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
label_48f1d4:
    // 0x48f1d4: 0x8e350008  lw          $s5, 0x8($s1)
    ctx->pc = 0x48f1d4u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_48f1d8:
    // 0x48f1d8: 0x14a400  sll         $s4, $s4, 16
    ctx->pc = 0x48f1d8u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 20), 16));
label_48f1dc:
    // 0x48f1dc: 0x7bb60120  lq          $s6, 0x120($sp)
    ctx->pc = 0x48f1dcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_48f1e0:
    // 0x48f1e0: 0x2a7a824  and         $s5, $s5, $a3
    ctx->pc = 0x48f1e0u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) & GPR_U64(ctx, 7));
label_48f1e4:
    // 0x48f1e4: 0x2b4a025  or          $s4, $s5, $s4
    ctx->pc = 0x48f1e4u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) | GPR_U64(ctx, 20));
label_48f1e8:
    // 0x48f1e8: 0xae340008  sw          $s4, 0x8($s1)
    ctx->pc = 0x48f1e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 20));
label_48f1ec:
    // 0x48f1ec: 0x8e150008  lw          $s5, 0x8($s0)
    ctx->pc = 0x48f1ecu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_48f1f0:
    // 0x48f1f0: 0x85b40004  lh          $s4, 0x4($t5)
    ctx->pc = 0x48f1f0u;
    SET_GPR_S32(ctx, 20, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 4)));
label_48f1f4:
    // 0x48f1f4: 0x8ed63ed8  lw          $s6, 0x3ED8($s6)
    ctx->pc = 0x48f1f4u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16088)));
label_48f1f8:
    // 0x48f1f8: 0x15ae02  srl         $s5, $s5, 24
    ctx->pc = 0x48f1f8u;
    SET_GPR_S32(ctx, 21, (int32_t)SRL32(GPR_U32(ctx, 21), 24));
label_48f1fc:
    // 0x48f1fc: 0x32b500ff  andi        $s5, $s5, 0xFF
    ctx->pc = 0x48f1fcu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
label_48f200:
    // 0x48f200: 0x2b4a021  addu        $s4, $s5, $s4
    ctx->pc = 0x48f200u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 20)));
label_48f204:
    // 0x48f204: 0x2d4082b  sltu        $at, $s6, $s4
    ctx->pc = 0x48f204u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
label_48f208:
    // 0x48f208: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_48f20c:
    if (ctx->pc == 0x48F20Cu) {
        ctx->pc = 0x48F20Cu;
            // 0x48f20c: 0xafb40240  sw          $s4, 0x240($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 576), GPR_U32(ctx, 20));
        ctx->pc = 0x48F210u;
        goto label_48f210;
    }
    ctx->pc = 0x48F208u;
    {
        const bool branch_taken_0x48f208 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x48F20Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48F208u;
            // 0x48f20c: 0xafb40240  sw          $s4, 0x240($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 576), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48f208) {
            ctx->pc = 0x48F21Cu;
            goto label_48f21c;
        }
    }
    ctx->pc = 0x48F210u;
label_48f210:
    // 0x48f210: 0x3c160061  lui         $s6, 0x61
    ctx->pc = 0x48f210u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)97 << 16));
label_48f214:
    // 0x48f214: 0x10000002  b           . + 4 + (0x2 << 2)
label_48f218:
    if (ctx->pc == 0x48F218u) {
        ctx->pc = 0x48F218u;
            // 0x48f218: 0x26d63ed8  addiu       $s6, $s6, 0x3ED8 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 16088));
        ctx->pc = 0x48F21Cu;
        goto label_48f21c;
    }
    ctx->pc = 0x48F214u;
    {
        const bool branch_taken_0x48f214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48F218u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48F214u;
            // 0x48f218: 0x26d63ed8  addiu       $s6, $s6, 0x3ED8 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 16088));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48f214) {
            ctx->pc = 0x48F220u;
            goto label_48f220;
        }
    }
    ctx->pc = 0x48F21Cu;
label_48f21c:
    // 0x48f21c: 0x27b60240  addiu       $s6, $sp, 0x240
    ctx->pc = 0x48f21cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
label_48f220:
    // 0x48f220: 0x7bb40110  lq          $s4, 0x110($sp)
    ctx->pc = 0x48f220u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_48f224:
    // 0x48f224: 0x8e953ee0  lw          $s5, 0x3EE0($s4)
    ctx->pc = 0x48f224u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16096)));
label_48f228:
    // 0x48f228: 0x8ed40000  lw          $s4, 0x0($s6)
    ctx->pc = 0x48f228u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_48f22c:
    // 0x48f22c: 0x2b4082b  sltu        $at, $s5, $s4
    ctx->pc = 0x48f22cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
label_48f230:
    // 0x48f230: 0x50200001  beql        $at, $zero, . + 4 + (0x1 << 2)
label_48f234:
    if (ctx->pc == 0x48F234u) {
        ctx->pc = 0x48F234u;
            // 0x48f234: 0xc0b02d  daddu       $s6, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x48F238u;
        goto label_48f238;
    }
    ctx->pc = 0x48F230u;
    {
        const bool branch_taken_0x48f230 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x48f230) {
            ctx->pc = 0x48F234u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x48F230u;
            // 0x48f234: 0xc0b02d  daddu       $s6, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x48F238u;
            goto label_48f238;
        }
    }
    ctx->pc = 0x48F238u;
label_48f238:
    // 0x48f238: 0x8e350008  lw          $s5, 0x8($s1)
    ctx->pc = 0x48f238u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_48f23c:
    // 0x48f23c: 0x92d40000  lbu         $s4, 0x0($s6)
    ctx->pc = 0x48f23cu;
    SET_GPR_U32(ctx, 20, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
label_48f240:
    // 0x48f240: 0x15aa3c  dsll32      $s5, $s5, 8
    ctx->pc = 0x48f240u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) << (32 + 8));
label_48f244:
    // 0x48f244: 0x14a600  sll         $s4, $s4, 24
    ctx->pc = 0x48f244u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 20), 24));
label_48f248:
    // 0x48f248: 0x15aa3e  dsrl32      $s5, $s5, 8
    ctx->pc = 0x48f248u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) >> (32 + 8));
label_48f24c:
    // 0x48f24c: 0x2b4a025  or          $s4, $s5, $s4
    ctx->pc = 0x48f24cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) | GPR_U64(ctx, 20));
label_48f250:
    // 0x48f250: 0x1000009f  b           . + 4 + (0x9F << 2)
label_48f254:
    if (ctx->pc == 0x48F254u) {
        ctx->pc = 0x48F254u;
            // 0x48f254: 0xae340008  sw          $s4, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 20));
        ctx->pc = 0x48F258u;
        goto label_48f258;
    }
    ctx->pc = 0x48F250u;
    {
        const bool branch_taken_0x48f250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48F254u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48F250u;
            // 0x48f254: 0xae340008  sw          $s4, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48f250) {
            ctx->pc = 0x48F4D0u;
            goto label_48f4d0;
        }
    }
    ctx->pc = 0x48F258u;
label_48f258:
    // 0x48f258: 0x92160008  lbu         $s6, 0x8($s0)
    ctx->pc = 0x48f258u;
    SET_GPR_U32(ctx, 22, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
label_48f25c:
    // 0x48f25c: 0x85b50012  lh          $s5, 0x12($t5)
    ctx->pc = 0x48f25cu;
    SET_GPR_S32(ctx, 21, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 18)));
label_48f260:
    // 0x48f260: 0x8e340008  lw          $s4, 0x8($s1)
    ctx->pc = 0x48f260u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_48f264:
    // 0x48f264: 0x2d5a818  mult        $s5, $s6, $s5
    ctx->pc = 0x48f264u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 21, (int32_t)result); }
label_48f268:
    // 0x48f268: 0x28ba024  and         $s4, $s4, $t3
    ctx->pc = 0x48f268u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) & GPR_U64(ctx, 11));
label_48f26c:
    // 0x48f26c: 0x15aa02  srl         $s5, $s5, 8
    ctx->pc = 0x48f26cu;
    SET_GPR_S32(ctx, 21, (int32_t)SRL32(GPR_U32(ctx, 21), 8));
label_48f270:
    // 0x48f270: 0x32b500ff  andi        $s5, $s5, 0xFF
    ctx->pc = 0x48f270u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
label_48f274:
    // 0x48f274: 0x295a025  or          $s4, $s4, $s5
    ctx->pc = 0x48f274u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | GPR_U64(ctx, 21));
label_48f278:
    // 0x48f278: 0xae340008  sw          $s4, 0x8($s1)
    ctx->pc = 0x48f278u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 20));
label_48f27c:
    // 0x48f27c: 0x8e160008  lw          $s6, 0x8($s0)
    ctx->pc = 0x48f27cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_48f280:
    // 0x48f280: 0x289a024  and         $s4, $s4, $t1
    ctx->pc = 0x48f280u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) & GPR_U64(ctx, 9));
label_48f284:
    // 0x48f284: 0x85b50010  lh          $s5, 0x10($t5)
    ctx->pc = 0x48f284u;
    SET_GPR_S32(ctx, 21, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 16)));
label_48f288:
    // 0x48f288: 0x16b202  srl         $s6, $s6, 8
    ctx->pc = 0x48f288u;
    SET_GPR_S32(ctx, 22, (int32_t)SRL32(GPR_U32(ctx, 22), 8));
label_48f28c:
    // 0x48f28c: 0x32d600ff  andi        $s6, $s6, 0xFF
    ctx->pc = 0x48f28cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
label_48f290:
    // 0x48f290: 0x72d5a818  mult1       $s5, $s6, $s5
    ctx->pc = 0x48f290u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 21); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 21, (int32_t)result); }
label_48f294:
    // 0x48f294: 0x15aa02  srl         $s5, $s5, 8
    ctx->pc = 0x48f294u;
    SET_GPR_S32(ctx, 21, (int32_t)SRL32(GPR_U32(ctx, 21), 8));
label_48f298:
    // 0x48f298: 0x32b500ff  andi        $s5, $s5, 0xFF
    ctx->pc = 0x48f298u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
label_48f29c:
    // 0x48f29c: 0x15aa00  sll         $s5, $s5, 8
    ctx->pc = 0x48f29cu;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 21), 8));
label_48f2a0:
    // 0x48f2a0: 0x295a025  or          $s4, $s4, $s5
    ctx->pc = 0x48f2a0u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | GPR_U64(ctx, 21));
label_48f2a4:
    // 0x48f2a4: 0xae340008  sw          $s4, 0x8($s1)
    ctx->pc = 0x48f2a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 20));
label_48f2a8:
    // 0x48f2a8: 0x8e160008  lw          $s6, 0x8($s0)
    ctx->pc = 0x48f2a8u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_48f2ac:
    // 0x48f2ac: 0x287a024  and         $s4, $s4, $a3
    ctx->pc = 0x48f2acu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) & GPR_U64(ctx, 7));
label_48f2b0:
    // 0x48f2b0: 0x85b5000e  lh          $s5, 0xE($t5)
    ctx->pc = 0x48f2b0u;
    SET_GPR_S32(ctx, 21, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 14)));
label_48f2b4:
    // 0x48f2b4: 0x16b602  srl         $s6, $s6, 24
    ctx->pc = 0x48f2b4u;
    SET_GPR_S32(ctx, 22, (int32_t)SRL32(GPR_U32(ctx, 22), 24));
label_48f2b8:
    // 0x48f2b8: 0x32d600ff  andi        $s6, $s6, 0xFF
    ctx->pc = 0x48f2b8u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
label_48f2bc:
    // 0x48f2bc: 0x2d5a818  mult        $s5, $s6, $s5
    ctx->pc = 0x48f2bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 21, (int32_t)result); }
label_48f2c0:
    // 0x48f2c0: 0x15aa02  srl         $s5, $s5, 8
    ctx->pc = 0x48f2c0u;
    SET_GPR_S32(ctx, 21, (int32_t)SRL32(GPR_U32(ctx, 21), 8));
label_48f2c4:
    // 0x48f2c4: 0x32b500ff  andi        $s5, $s5, 0xFF
    ctx->pc = 0x48f2c4u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
label_48f2c8:
    // 0x48f2c8: 0x15ac00  sll         $s5, $s5, 16
    ctx->pc = 0x48f2c8u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 21), 16));
label_48f2cc:
    // 0x48f2cc: 0x295a025  or          $s4, $s4, $s5
    ctx->pc = 0x48f2ccu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | GPR_U64(ctx, 21));
label_48f2d0:
    // 0x48f2d0: 0xae340008  sw          $s4, 0x8($s1)
    ctx->pc = 0x48f2d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 20));
label_48f2d4:
    // 0x48f2d4: 0x8e160008  lw          $s6, 0x8($s0)
    ctx->pc = 0x48f2d4u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_48f2d8:
    // 0x48f2d8: 0x14a23c  dsll32      $s4, $s4, 8
    ctx->pc = 0x48f2d8u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) << (32 + 8));
label_48f2dc:
    // 0x48f2dc: 0x85b5000c  lh          $s5, 0xC($t5)
    ctx->pc = 0x48f2dcu;
    SET_GPR_S32(ctx, 21, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 12)));
label_48f2e0:
    // 0x48f2e0: 0x14a23e  dsrl32      $s4, $s4, 8
    ctx->pc = 0x48f2e0u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) >> (32 + 8));
label_48f2e4:
    // 0x48f2e4: 0x16b602  srl         $s6, $s6, 24
    ctx->pc = 0x48f2e4u;
    SET_GPR_S32(ctx, 22, (int32_t)SRL32(GPR_U32(ctx, 22), 24));
label_48f2e8:
    // 0x48f2e8: 0x32d600ff  andi        $s6, $s6, 0xFF
    ctx->pc = 0x48f2e8u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
label_48f2ec:
    // 0x48f2ec: 0x72d5a818  mult1       $s5, $s6, $s5
    ctx->pc = 0x48f2ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 21); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 21, (int32_t)result); }
label_48f2f0:
    // 0x48f2f0: 0x15aa02  srl         $s5, $s5, 8
    ctx->pc = 0x48f2f0u;
    SET_GPR_S32(ctx, 21, (int32_t)SRL32(GPR_U32(ctx, 21), 8));
label_48f2f4:
    // 0x48f2f4: 0x32b500ff  andi        $s5, $s5, 0xFF
    ctx->pc = 0x48f2f4u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
label_48f2f8:
    // 0x48f2f8: 0x15ae00  sll         $s5, $s5, 24
    ctx->pc = 0x48f2f8u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 21), 24));
label_48f2fc:
    // 0x48f2fc: 0x295a025  or          $s4, $s4, $s5
    ctx->pc = 0x48f2fcu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | GPR_U64(ctx, 21));
label_48f300:
    // 0x48f300: 0x10000073  b           . + 4 + (0x73 << 2)
label_48f304:
    if (ctx->pc == 0x48F304u) {
        ctx->pc = 0x48F304u;
            // 0x48f304: 0xae340008  sw          $s4, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 20));
        ctx->pc = 0x48F308u;
        goto label_48f308;
    }
    ctx->pc = 0x48F300u;
    {
        const bool branch_taken_0x48f300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48F304u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48F300u;
            // 0x48f304: 0xae340008  sw          $s4, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48f300) {
            ctx->pc = 0x48F4D0u;
            goto label_48f4d0;
        }
    }
    ctx->pc = 0x48F308u;
label_48f308:
    // 0x48f308: 0x92160008  lbu         $s6, 0x8($s0)
    ctx->pc = 0x48f308u;
    SET_GPR_U32(ctx, 22, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
label_48f30c:
    // 0x48f30c: 0x85b50012  lh          $s5, 0x12($t5)
    ctx->pc = 0x48f30cu;
    SET_GPR_S32(ctx, 21, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 18)));
label_48f310:
    // 0x48f310: 0x7bb80100  lq          $t8, 0x100($sp)
    ctx->pc = 0x48f310u;
    SET_GPR_VEC(ctx, 24, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_48f314:
    // 0x48f314: 0x85b4000a  lh          $s4, 0xA($t5)
    ctx->pc = 0x48f314u;
    SET_GPR_S32(ctx, 20, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 10)));
label_48f318:
    // 0x48f318: 0x2d5a818  mult        $s5, $s6, $s5
    ctx->pc = 0x48f318u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 21, (int32_t)result); }
label_48f31c:
    // 0x48f31c: 0x8f183ee8  lw          $t8, 0x3EE8($t8)
    ctx->pc = 0x48f31cu;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 16104)));
label_48f320:
    // 0x48f320: 0x15aa02  srl         $s5, $s5, 8
    ctx->pc = 0x48f320u;
    SET_GPR_S32(ctx, 21, (int32_t)SRL32(GPR_U32(ctx, 21), 8));
label_48f324:
    // 0x48f324: 0x295a021  addu        $s4, $s4, $s5
    ctx->pc = 0x48f324u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 21)));
label_48f328:
    // 0x48f328: 0x314082b  sltu        $at, $t8, $s4
    ctx->pc = 0x48f328u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 24) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
label_48f32c:
    // 0x48f32c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_48f330:
    if (ctx->pc == 0x48F330u) {
        ctx->pc = 0x48F330u;
            // 0x48f330: 0xafb4023c  sw          $s4, 0x23C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 572), GPR_U32(ctx, 20));
        ctx->pc = 0x48F334u;
        goto label_48f334;
    }
    ctx->pc = 0x48F32Cu;
    {
        const bool branch_taken_0x48f32c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x48F330u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48F32Cu;
            // 0x48f330: 0xafb4023c  sw          $s4, 0x23C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 572), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48f32c) {
            ctx->pc = 0x48F340u;
            goto label_48f340;
        }
    }
    ctx->pc = 0x48F334u;
label_48f334:
    // 0x48f334: 0x3c160061  lui         $s6, 0x61
    ctx->pc = 0x48f334u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)97 << 16));
label_48f338:
    // 0x48f338: 0x10000002  b           . + 4 + (0x2 << 2)
label_48f33c:
    if (ctx->pc == 0x48F33Cu) {
        ctx->pc = 0x48F33Cu;
            // 0x48f33c: 0x26d63ee8  addiu       $s6, $s6, 0x3EE8 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 16104));
        ctx->pc = 0x48F340u;
        goto label_48f340;
    }
    ctx->pc = 0x48F338u;
    {
        const bool branch_taken_0x48f338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48F33Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48F338u;
            // 0x48f33c: 0x26d63ee8  addiu       $s6, $s6, 0x3EE8 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 16104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48f338) {
            ctx->pc = 0x48F344u;
            goto label_48f344;
        }
    }
    ctx->pc = 0x48F340u;
label_48f340:
    // 0x48f340: 0x27b6023c  addiu       $s6, $sp, 0x23C
    ctx->pc = 0x48f340u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 572));
label_48f344:
    // 0x48f344: 0x7bb400f0  lq          $s4, 0xF0($sp)
    ctx->pc = 0x48f344u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_48f348:
    // 0x48f348: 0x8e953ef0  lw          $s5, 0x3EF0($s4)
    ctx->pc = 0x48f348u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16112)));
label_48f34c:
    // 0x48f34c: 0x8ed40000  lw          $s4, 0x0($s6)
    ctx->pc = 0x48f34cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_48f350:
    // 0x48f350: 0x2b4082b  sltu        $at, $s5, $s4
    ctx->pc = 0x48f350u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
label_48f354:
    // 0x48f354: 0x50200001  beql        $at, $zero, . + 4 + (0x1 << 2)
label_48f358:
    if (ctx->pc == 0x48F358u) {
        ctx->pc = 0x48F358u;
            // 0x48f358: 0xa0b02d  daddu       $s6, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x48F35Cu;
        goto label_48f35c;
    }
    ctx->pc = 0x48F354u;
    {
        const bool branch_taken_0x48f354 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x48f354) {
            ctx->pc = 0x48F358u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x48F354u;
            // 0x48f358: 0xa0b02d  daddu       $s6, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x48F35Cu;
            goto label_48f35c;
        }
    }
    ctx->pc = 0x48F35Cu;
label_48f35c:
    // 0x48f35c: 0x8e350008  lw          $s5, 0x8($s1)
    ctx->pc = 0x48f35cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_48f360:
    // 0x48f360: 0x92d40000  lbu         $s4, 0x0($s6)
    ctx->pc = 0x48f360u;
    SET_GPR_U32(ctx, 20, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
label_48f364:
    // 0x48f364: 0x7bb800e0  lq          $t8, 0xE0($sp)
    ctx->pc = 0x48f364u;
    SET_GPR_VEC(ctx, 24, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_48f368:
    // 0x48f368: 0x2aba824  and         $s5, $s5, $t3
    ctx->pc = 0x48f368u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) & GPR_U64(ctx, 11));
label_48f36c:
    // 0x48f36c: 0x2b4a025  or          $s4, $s5, $s4
    ctx->pc = 0x48f36cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) | GPR_U64(ctx, 20));
label_48f370:
    // 0x48f370: 0xae340008  sw          $s4, 0x8($s1)
    ctx->pc = 0x48f370u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 20));
label_48f374:
    // 0x48f374: 0x8e160008  lw          $s6, 0x8($s0)
    ctx->pc = 0x48f374u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_48f378:
    // 0x48f378: 0x85b50010  lh          $s5, 0x10($t5)
    ctx->pc = 0x48f378u;
    SET_GPR_S32(ctx, 21, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 16)));
label_48f37c:
    // 0x48f37c: 0x85b40008  lh          $s4, 0x8($t5)
    ctx->pc = 0x48f37cu;
    SET_GPR_S32(ctx, 20, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 8)));
label_48f380:
    // 0x48f380: 0x16b202  srl         $s6, $s6, 8
    ctx->pc = 0x48f380u;
    SET_GPR_S32(ctx, 22, (int32_t)SRL32(GPR_U32(ctx, 22), 8));
label_48f384:
    // 0x48f384: 0x8f183ef8  lw          $t8, 0x3EF8($t8)
    ctx->pc = 0x48f384u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 16120)));
label_48f388:
    // 0x48f388: 0x32d600ff  andi        $s6, $s6, 0xFF
    ctx->pc = 0x48f388u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
label_48f38c:
    // 0x48f38c: 0x2d5a818  mult        $s5, $s6, $s5
    ctx->pc = 0x48f38cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 21, (int32_t)result); }
label_48f390:
    // 0x48f390: 0x15aa02  srl         $s5, $s5, 8
    ctx->pc = 0x48f390u;
    SET_GPR_S32(ctx, 21, (int32_t)SRL32(GPR_U32(ctx, 21), 8));
label_48f394:
    // 0x48f394: 0x295a021  addu        $s4, $s4, $s5
    ctx->pc = 0x48f394u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 21)));
label_48f398:
    // 0x48f398: 0x314082b  sltu        $at, $t8, $s4
    ctx->pc = 0x48f398u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 24) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
label_48f39c:
    // 0x48f39c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_48f3a0:
    if (ctx->pc == 0x48F3A0u) {
        ctx->pc = 0x48F3A0u;
            // 0x48f3a0: 0xafb40238  sw          $s4, 0x238($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 568), GPR_U32(ctx, 20));
        ctx->pc = 0x48F3A4u;
        goto label_48f3a4;
    }
    ctx->pc = 0x48F39Cu;
    {
        const bool branch_taken_0x48f39c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x48F3A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48F39Cu;
            // 0x48f3a0: 0xafb40238  sw          $s4, 0x238($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 568), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48f39c) {
            ctx->pc = 0x48F3B0u;
            goto label_48f3b0;
        }
    }
    ctx->pc = 0x48F3A4u;
label_48f3a4:
    // 0x48f3a4: 0x3c160061  lui         $s6, 0x61
    ctx->pc = 0x48f3a4u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)97 << 16));
label_48f3a8:
    // 0x48f3a8: 0x10000002  b           . + 4 + (0x2 << 2)
label_48f3ac:
    if (ctx->pc == 0x48F3ACu) {
        ctx->pc = 0x48F3ACu;
            // 0x48f3ac: 0x26d63ef8  addiu       $s6, $s6, 0x3EF8 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 16120));
        ctx->pc = 0x48F3B0u;
        goto label_48f3b0;
    }
    ctx->pc = 0x48F3A8u;
    {
        const bool branch_taken_0x48f3a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48F3ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48F3A8u;
            // 0x48f3ac: 0x26d63ef8  addiu       $s6, $s6, 0x3EF8 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 16120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48f3a8) {
            ctx->pc = 0x48F3B4u;
            goto label_48f3b4;
        }
    }
    ctx->pc = 0x48F3B0u;
label_48f3b0:
    // 0x48f3b0: 0x27b60238  addiu       $s6, $sp, 0x238
    ctx->pc = 0x48f3b0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 568));
label_48f3b4:
    // 0x48f3b4: 0x7bb400d0  lq          $s4, 0xD0($sp)
    ctx->pc = 0x48f3b4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_48f3b8:
    // 0x48f3b8: 0x8e953f00  lw          $s5, 0x3F00($s4)
    ctx->pc = 0x48f3b8u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16128)));
label_48f3bc:
    // 0x48f3bc: 0x8ed40000  lw          $s4, 0x0($s6)
    ctx->pc = 0x48f3bcu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_48f3c0:
    // 0x48f3c0: 0x2b4082b  sltu        $at, $s5, $s4
    ctx->pc = 0x48f3c0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
label_48f3c4:
    // 0x48f3c4: 0x50200001  beql        $at, $zero, . + 4 + (0x1 << 2)
label_48f3c8:
    if (ctx->pc == 0x48F3C8u) {
        ctx->pc = 0x48F3C8u;
            // 0x48f3c8: 0x60b02d  daddu       $s6, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x48F3CCu;
        goto label_48f3cc;
    }
    ctx->pc = 0x48F3C4u;
    {
        const bool branch_taken_0x48f3c4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x48f3c4) {
            ctx->pc = 0x48F3C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x48F3C4u;
            // 0x48f3c8: 0x60b02d  daddu       $s6, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x48F3CCu;
            goto label_48f3cc;
        }
    }
    ctx->pc = 0x48F3CCu;
label_48f3cc:
    // 0x48f3cc: 0x92d40000  lbu         $s4, 0x0($s6)
    ctx->pc = 0x48f3ccu;
    SET_GPR_U32(ctx, 20, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
label_48f3d0:
    // 0x48f3d0: 0x8e350008  lw          $s5, 0x8($s1)
    ctx->pc = 0x48f3d0u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_48f3d4:
    // 0x48f3d4: 0x7bb800c0  lq          $t8, 0xC0($sp)
    ctx->pc = 0x48f3d4u;
    SET_GPR_VEC(ctx, 24, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_48f3d8:
    // 0x48f3d8: 0x14a200  sll         $s4, $s4, 8
    ctx->pc = 0x48f3d8u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 20), 8));
label_48f3dc:
    // 0x48f3dc: 0x2a9a824  and         $s5, $s5, $t1
    ctx->pc = 0x48f3dcu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) & GPR_U64(ctx, 9));
label_48f3e0:
    // 0x48f3e0: 0x2b4a025  or          $s4, $s5, $s4
    ctx->pc = 0x48f3e0u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) | GPR_U64(ctx, 20));
label_48f3e4:
    // 0x48f3e4: 0xae340008  sw          $s4, 0x8($s1)
    ctx->pc = 0x48f3e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 20));
label_48f3e8:
    // 0x48f3e8: 0x8e160008  lw          $s6, 0x8($s0)
    ctx->pc = 0x48f3e8u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_48f3ec:
    // 0x48f3ec: 0x85b5000e  lh          $s5, 0xE($t5)
    ctx->pc = 0x48f3ecu;
    SET_GPR_S32(ctx, 21, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 14)));
label_48f3f0:
    // 0x48f3f0: 0x85b40006  lh          $s4, 0x6($t5)
    ctx->pc = 0x48f3f0u;
    SET_GPR_S32(ctx, 20, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 6)));
label_48f3f4:
    // 0x48f3f4: 0x16b402  srl         $s6, $s6, 16
    ctx->pc = 0x48f3f4u;
    SET_GPR_S32(ctx, 22, (int32_t)SRL32(GPR_U32(ctx, 22), 16));
label_48f3f8:
    // 0x48f3f8: 0x8f183f08  lw          $t8, 0x3F08($t8)
    ctx->pc = 0x48f3f8u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 16136)));
label_48f3fc:
    // 0x48f3fc: 0x32d600ff  andi        $s6, $s6, 0xFF
    ctx->pc = 0x48f3fcu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
label_48f400:
    // 0x48f400: 0x2d5a818  mult        $s5, $s6, $s5
    ctx->pc = 0x48f400u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 21, (int32_t)result); }
label_48f404:
    // 0x48f404: 0x15aa02  srl         $s5, $s5, 8
    ctx->pc = 0x48f404u;
    SET_GPR_S32(ctx, 21, (int32_t)SRL32(GPR_U32(ctx, 21), 8));
label_48f408:
    // 0x48f408: 0x295a021  addu        $s4, $s4, $s5
    ctx->pc = 0x48f408u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 21)));
label_48f40c:
    // 0x48f40c: 0x314082b  sltu        $at, $t8, $s4
    ctx->pc = 0x48f40cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 24) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
label_48f410:
    // 0x48f410: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_48f414:
    if (ctx->pc == 0x48F414u) {
        ctx->pc = 0x48F414u;
            // 0x48f414: 0xafb40234  sw          $s4, 0x234($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 564), GPR_U32(ctx, 20));
        ctx->pc = 0x48F418u;
        goto label_48f418;
    }
    ctx->pc = 0x48F410u;
    {
        const bool branch_taken_0x48f410 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x48F414u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48F410u;
            // 0x48f414: 0xafb40234  sw          $s4, 0x234($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 564), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48f410) {
            ctx->pc = 0x48F424u;
            goto label_48f424;
        }
    }
    ctx->pc = 0x48F418u;
label_48f418:
    // 0x48f418: 0x3c160061  lui         $s6, 0x61
    ctx->pc = 0x48f418u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)97 << 16));
label_48f41c:
    // 0x48f41c: 0x10000002  b           . + 4 + (0x2 << 2)
label_48f420:
    if (ctx->pc == 0x48F420u) {
        ctx->pc = 0x48F420u;
            // 0x48f420: 0x26d63f08  addiu       $s6, $s6, 0x3F08 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 16136));
        ctx->pc = 0x48F424u;
        goto label_48f424;
    }
    ctx->pc = 0x48F41Cu;
    {
        const bool branch_taken_0x48f41c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48F420u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48F41Cu;
            // 0x48f420: 0x26d63f08  addiu       $s6, $s6, 0x3F08 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 16136));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48f41c) {
            ctx->pc = 0x48F428u;
            goto label_48f428;
        }
    }
    ctx->pc = 0x48F424u;
label_48f424:
    // 0x48f424: 0x27b60234  addiu       $s6, $sp, 0x234
    ctx->pc = 0x48f424u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 564));
label_48f428:
    // 0x48f428: 0x7bb400b0  lq          $s4, 0xB0($sp)
    ctx->pc = 0x48f428u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_48f42c:
    // 0x48f42c: 0x8e953f10  lw          $s5, 0x3F10($s4)
    ctx->pc = 0x48f42cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16144)));
label_48f430:
    // 0x48f430: 0x8ed40000  lw          $s4, 0x0($s6)
    ctx->pc = 0x48f430u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_48f434:
    // 0x48f434: 0x2b4082b  sltu        $at, $s5, $s4
    ctx->pc = 0x48f434u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
label_48f438:
    // 0x48f438: 0x50200001  beql        $at, $zero, . + 4 + (0x1 << 2)
label_48f43c:
    if (ctx->pc == 0x48F43Cu) {
        ctx->pc = 0x48F43Cu;
            // 0x48f43c: 0x2e0b02d  daddu       $s6, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x48F440u;
        goto label_48f440;
    }
    ctx->pc = 0x48F438u;
    {
        const bool branch_taken_0x48f438 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x48f438) {
            ctx->pc = 0x48F43Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x48F438u;
            // 0x48f43c: 0x2e0b02d  daddu       $s6, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x48F440u;
            goto label_48f440;
        }
    }
    ctx->pc = 0x48F440u;
label_48f440:
    // 0x48f440: 0x92d40000  lbu         $s4, 0x0($s6)
    ctx->pc = 0x48f440u;
    SET_GPR_U32(ctx, 20, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
label_48f444:
    // 0x48f444: 0x8e350008  lw          $s5, 0x8($s1)
    ctx->pc = 0x48f444u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_48f448:
    // 0x48f448: 0x7bb800a0  lq          $t8, 0xA0($sp)
    ctx->pc = 0x48f448u;
    SET_GPR_VEC(ctx, 24, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_48f44c:
    // 0x48f44c: 0x14a400  sll         $s4, $s4, 16
    ctx->pc = 0x48f44cu;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 20), 16));
label_48f450:
    // 0x48f450: 0x2a7a824  and         $s5, $s5, $a3
    ctx->pc = 0x48f450u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) & GPR_U64(ctx, 7));
label_48f454:
    // 0x48f454: 0x2b4a025  or          $s4, $s5, $s4
    ctx->pc = 0x48f454u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) | GPR_U64(ctx, 20));
label_48f458:
    // 0x48f458: 0xae340008  sw          $s4, 0x8($s1)
    ctx->pc = 0x48f458u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 20));
label_48f45c:
    // 0x48f45c: 0x8e160008  lw          $s6, 0x8($s0)
    ctx->pc = 0x48f45cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_48f460:
    // 0x48f460: 0x85b5000c  lh          $s5, 0xC($t5)
    ctx->pc = 0x48f460u;
    SET_GPR_S32(ctx, 21, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 12)));
label_48f464:
    // 0x48f464: 0x85b40004  lh          $s4, 0x4($t5)
    ctx->pc = 0x48f464u;
    SET_GPR_S32(ctx, 20, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 4)));
label_48f468:
    // 0x48f468: 0x16b602  srl         $s6, $s6, 24
    ctx->pc = 0x48f468u;
    SET_GPR_S32(ctx, 22, (int32_t)SRL32(GPR_U32(ctx, 22), 24));
label_48f46c:
    // 0x48f46c: 0x8f183f18  lw          $t8, 0x3F18($t8)
    ctx->pc = 0x48f46cu;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 16152)));
label_48f470:
    // 0x48f470: 0x32d600ff  andi        $s6, $s6, 0xFF
    ctx->pc = 0x48f470u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
label_48f474:
    // 0x48f474: 0x2d5a818  mult        $s5, $s6, $s5
    ctx->pc = 0x48f474u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 21, (int32_t)result); }
label_48f478:
    // 0x48f478: 0x15aa02  srl         $s5, $s5, 8
    ctx->pc = 0x48f478u;
    SET_GPR_S32(ctx, 21, (int32_t)SRL32(GPR_U32(ctx, 21), 8));
label_48f47c:
    // 0x48f47c: 0x295a021  addu        $s4, $s4, $s5
    ctx->pc = 0x48f47cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 21)));
label_48f480:
    // 0x48f480: 0x314082b  sltu        $at, $t8, $s4
    ctx->pc = 0x48f480u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 24) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
label_48f484:
    // 0x48f484: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_48f488:
    if (ctx->pc == 0x48F488u) {
        ctx->pc = 0x48F488u;
            // 0x48f488: 0xafb40230  sw          $s4, 0x230($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 560), GPR_U32(ctx, 20));
        ctx->pc = 0x48F48Cu;
        goto label_48f48c;
    }
    ctx->pc = 0x48F484u;
    {
        const bool branch_taken_0x48f484 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x48F488u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48F484u;
            // 0x48f488: 0xafb40230  sw          $s4, 0x230($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 560), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48f484) {
            ctx->pc = 0x48F498u;
            goto label_48f498;
        }
    }
    ctx->pc = 0x48F48Cu;
label_48f48c:
    // 0x48f48c: 0x3c160061  lui         $s6, 0x61
    ctx->pc = 0x48f48cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)97 << 16));
label_48f490:
    // 0x48f490: 0x10000002  b           . + 4 + (0x2 << 2)
label_48f494:
    if (ctx->pc == 0x48F494u) {
        ctx->pc = 0x48F494u;
            // 0x48f494: 0x26d63f18  addiu       $s6, $s6, 0x3F18 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 16152));
        ctx->pc = 0x48F498u;
        goto label_48f498;
    }
    ctx->pc = 0x48F490u;
    {
        const bool branch_taken_0x48f490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48F494u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48F490u;
            // 0x48f494: 0x26d63f18  addiu       $s6, $s6, 0x3F18 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 16152));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48f490) {
            ctx->pc = 0x48F49Cu;
            goto label_48f49c;
        }
    }
    ctx->pc = 0x48F498u;
label_48f498:
    // 0x48f498: 0x27b60230  addiu       $s6, $sp, 0x230
    ctx->pc = 0x48f498u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
label_48f49c:
    // 0x48f49c: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x48f49cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_48f4a0:
    // 0x48f4a0: 0x8e953f20  lw          $s5, 0x3F20($s4)
    ctx->pc = 0x48f4a0u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16160)));
label_48f4a4:
    // 0x48f4a4: 0x8ed40000  lw          $s4, 0x0($s6)
    ctx->pc = 0x48f4a4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_48f4a8:
    // 0x48f4a8: 0x2b4082b  sltu        $at, $s5, $s4
    ctx->pc = 0x48f4a8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
label_48f4ac:
    // 0x48f4ac: 0x50200001  beql        $at, $zero, . + 4 + (0x1 << 2)
label_48f4b0:
    if (ctx->pc == 0x48F4B0u) {
        ctx->pc = 0x48F4B0u;
            // 0x48f4b0: 0x260b02d  daddu       $s6, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x48F4B4u;
        goto label_48f4b4;
    }
    ctx->pc = 0x48F4ACu;
    {
        const bool branch_taken_0x48f4ac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x48f4ac) {
            ctx->pc = 0x48F4B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x48F4ACu;
            // 0x48f4b0: 0x260b02d  daddu       $s6, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x48F4B4u;
            goto label_48f4b4;
        }
    }
    ctx->pc = 0x48F4B4u;
label_48f4b4:
    // 0x48f4b4: 0x8e350008  lw          $s5, 0x8($s1)
    ctx->pc = 0x48f4b4u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_48f4b8:
    // 0x48f4b8: 0x92d40000  lbu         $s4, 0x0($s6)
    ctx->pc = 0x48f4b8u;
    SET_GPR_U32(ctx, 20, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
label_48f4bc:
    // 0x48f4bc: 0x15aa3c  dsll32      $s5, $s5, 8
    ctx->pc = 0x48f4bcu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) << (32 + 8));
label_48f4c0:
    // 0x48f4c0: 0x14a600  sll         $s4, $s4, 24
    ctx->pc = 0x48f4c0u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 20), 24));
label_48f4c4:
    // 0x48f4c4: 0x15aa3e  dsrl32      $s5, $s5, 8
    ctx->pc = 0x48f4c4u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) >> (32 + 8));
label_48f4c8:
    // 0x48f4c8: 0x2b4a025  or          $s4, $s5, $s4
    ctx->pc = 0x48f4c8u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) | GPR_U64(ctx, 20));
label_48f4cc:
    // 0x48f4cc: 0xae340008  sw          $s4, 0x8($s1)
    ctx->pc = 0x48f4ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 20));
label_48f4d0:
    // 0x48f4d0: 0x8c94001c  lw          $s4, 0x1C($a0)
    ctx->pc = 0x48f4d0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_48f4d4:
    // 0x48f4d4: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x48f4d4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
label_48f4d8:
    // 0x48f4d8: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x48f4d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_48f4dc:
    // 0x48f4dc: 0x1f4a02b  sltu        $s4, $t7, $s4
    ctx->pc = 0x48f4dcu;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
label_48f4e0:
    // 0x48f4e0: 0x1680feda  bnez        $s4, . + 4 + (-0x126 << 2)
label_48f4e4:
    if (ctx->pc == 0x48F4E4u) {
        ctx->pc = 0x48F4E4u;
            // 0x48f4e4: 0x2631000c  addiu       $s1, $s1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
        ctx->pc = 0x48F4E8u;
        goto label_48f4e8;
    }
    ctx->pc = 0x48F4E0u;
    {
        const bool branch_taken_0x48f4e0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x48F4E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48F4E0u;
            // 0x48f4e4: 0x2631000c  addiu       $s1, $s1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48f4e0) {
            ctx->pc = 0x48F04Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_48f04c;
        }
    }
    ctx->pc = 0x48F4E8u;
label_48f4e8:
    // 0x48f4e8: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x48f4e8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_48f4ec:
    // 0x48f4ec: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x48f4ecu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_48f4f0:
    // 0x48f4f0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x48f4f0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_48f4f4:
    // 0x48f4f4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x48f4f4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_48f4f8:
    // 0x48f4f8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x48f4f8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_48f4fc:
    // 0x48f4fc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x48f4fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_48f500:
    // 0x48f500: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x48f500u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_48f504:
    // 0x48f504: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x48f504u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_48f508:
    // 0x48f508: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x48f508u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_48f50c:
    // 0x48f50c: 0x3e00008  jr          $ra
label_48f510:
    if (ctx->pc == 0x48F510u) {
        ctx->pc = 0x48F510u;
            // 0x48f510: 0x27bd0270  addiu       $sp, $sp, 0x270 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
        ctx->pc = 0x48F514u;
        goto label_48f514;
    }
    ctx->pc = 0x48F50Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48F510u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48F50Cu;
            // 0x48f510: 0x27bd0270  addiu       $sp, $sp, 0x270 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x48F514u;
label_48f514:
    // 0x48f514: 0x0  nop
    ctx->pc = 0x48f514u;
    // NOP
label_48f518:
    // 0x48f518: 0x0  nop
    ctx->pc = 0x48f518u;
    // NOP
label_48f51c:
    // 0x48f51c: 0x0  nop
    ctx->pc = 0x48f51cu;
    // NOP
label_48f520:
    // 0x48f520: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x48f520u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_48f524:
    // 0x48f524: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x48f524u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_48f528:
    // 0x48f528: 0x3200008  jr          $t9
label_48f52c:
    if (ctx->pc == 0x48F52Cu) {
        ctx->pc = 0x48F530u;
        goto label_48f530;
    }
    ctx->pc = 0x48F528u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x48F530u;
label_48f530:
    // 0x48f530: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x48f530u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
label_48f534:
    // 0x48f534: 0x3e00008  jr          $ra
label_48f538:
    if (ctx->pc == 0x48F538u) {
        ctx->pc = 0x48F538u;
            // 0x48f538: 0xa0800038  sb          $zero, 0x38($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 56), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x48F53Cu;
        goto label_48f53c;
    }
    ctx->pc = 0x48F534u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48F538u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48F534u;
            // 0x48f538: 0xa0800038  sb          $zero, 0x38($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 56), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x48F53Cu;
label_48f53c:
    // 0x48f53c: 0x0  nop
    ctx->pc = 0x48f53cu;
    // NOP
label_48f540:
    // 0x48f540: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x48f540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_48f544:
    // 0x48f544: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x48f544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_48f548:
    // 0x48f548: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x48f548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_48f54c:
    // 0x48f54c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x48f54cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_48f550:
    // 0x48f550: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x48f550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_48f554:
    // 0x48f554: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x48f554u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_48f558:
    // 0x48f558: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x48f558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_48f55c:
    // 0x48f55c: 0x9083000c  lbu         $v1, 0xC($a0)
    ctx->pc = 0x48f55cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 12)));
label_48f560:
    // 0x48f560: 0x10600083  beqz        $v1, . + 4 + (0x83 << 2)
label_48f564:
    if (ctx->pc == 0x48F564u) {
        ctx->pc = 0x48F564u;
            // 0x48f564: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x48F568u;
        goto label_48f568;
    }
    ctx->pc = 0x48F560u;
    {
        const bool branch_taken_0x48f560 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x48F564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48F560u;
            // 0x48f564: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48f560) {
            ctx->pc = 0x48F770u;
            goto label_48f770;
        }
    }
    ctx->pc = 0x48F568u;
label_48f568:
    // 0x48f568: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x48f568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_48f56c:
    // 0x48f56c: 0x8c510060  lw          $s1, 0x60($v0)
    ctx->pc = 0x48f56cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_48f570:
    // 0x48f570: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
label_48f574:
    if (ctx->pc == 0x48F574u) {
        ctx->pc = 0x48F574u;
            // 0x48f574: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x48F578u;
        goto label_48f578;
    }
    ctx->pc = 0x48F570u;
    {
        const bool branch_taken_0x48f570 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x48F574u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48F570u;
            // 0x48f574: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48f570) {
            ctx->pc = 0x48F580u;
            goto label_48f580;
        }
    }
    ctx->pc = 0x48F578u;
label_48f578:
    // 0x48f578: 0x50c00004  beql        $a2, $zero, . + 4 + (0x4 << 2)
label_48f57c:
    if (ctx->pc == 0x48F57Cu) {
        ctx->pc = 0x48F57Cu;
            // 0x48f57c: 0x92820022  lbu         $v0, 0x22($s4) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 34)));
        ctx->pc = 0x48F580u;
        goto label_48f580;
    }
    ctx->pc = 0x48F578u;
    {
        const bool branch_taken_0x48f578 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x48f578) {
            ctx->pc = 0x48F57Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x48F578u;
            // 0x48f57c: 0x92820022  lbu         $v0, 0x22($s4) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 34)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x48F58Cu;
            goto label_48f58c;
        }
    }
    ctx->pc = 0x48F580u;
label_48f580:
    // 0x48f580: 0xc123de4  jal         func_48F790
label_48f584:
    if (ctx->pc == 0x48F584u) {
        ctx->pc = 0x48F584u;
            // 0x48f584: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x48F588u;
        goto label_48f588;
    }
    ctx->pc = 0x48F580u;
    SET_GPR_U32(ctx, 31, 0x48F588u);
    ctx->pc = 0x48F584u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48F580u;
            // 0x48f584: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48F790u;
    if (runtime->hasFunction(0x48F790u)) {
        auto targetFn = runtime->lookupFunction(0x48F790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48F588u; }
        if (ctx->pc != 0x48F588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048F790_0x48f790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48F588u; }
        if (ctx->pc != 0x48F588u) { return; }
    }
    ctx->pc = 0x48F588u;
label_48f588:
    // 0x48f588: 0x92820022  lbu         $v0, 0x22($s4)
    ctx->pc = 0x48f588u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 34)));
label_48f58c:
    // 0x48f58c: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
label_48f590:
    if (ctx->pc == 0x48F590u) {
        ctx->pc = 0x48F590u;
            // 0x48f590: 0x8e390004  lw          $t9, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->pc = 0x48F594u;
        goto label_48f594;
    }
    ctx->pc = 0x48F58Cu;
    {
        const bool branch_taken_0x48f58c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48f58c) {
            ctx->pc = 0x48F590u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x48F58Cu;
            // 0x48f590: 0x8e390004  lw          $t9, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x48F5D8u;
            goto label_48f5d8;
        }
    }
    ctx->pc = 0x48F594u;
label_48f594:
    // 0x48f594: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x48f594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_48f598:
    // 0x48f598: 0x8c44005c  lw          $a0, 0x5C($v0)
    ctx->pc = 0x48f598u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_48f59c:
    // 0x48f59c: 0x50800008  beql        $a0, $zero, . + 4 + (0x8 << 2)
label_48f5a0:
    if (ctx->pc == 0x48F5A0u) {
        ctx->pc = 0x48F5A0u;
            // 0x48f5a0: 0x8e390004  lw          $t9, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->pc = 0x48F5A4u;
        goto label_48f5a4;
    }
    ctx->pc = 0x48F59Cu;
    {
        const bool branch_taken_0x48f59c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x48f59c) {
            ctx->pc = 0x48F5A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x48F59Cu;
            // 0x48f5a0: 0x8e390004  lw          $t9, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x48F5C0u;
            goto label_48f5c0;
        }
    }
    ctx->pc = 0x48F5A4u;
label_48f5a4:
    // 0x48f5a4: 0x8e820014  lw          $v0, 0x14($s4)
    ctx->pc = 0x48f5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_48f5a8:
    // 0x48f5a8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x48f5a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_48f5ac:
    // 0x48f5ac: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x48f5acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_48f5b0:
    // 0x48f5b0: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x48f5b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_48f5b4:
    // 0x48f5b4: 0x320f809  jalr        $t9
label_48f5b8:
    if (ctx->pc == 0x48F5B8u) {
        ctx->pc = 0x48F5B8u;
            // 0x48f5b8: 0x9445002e  lhu         $a1, 0x2E($v0) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 46)));
        ctx->pc = 0x48F5BCu;
        goto label_48f5bc;
    }
    ctx->pc = 0x48F5B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x48F5BCu);
        ctx->pc = 0x48F5B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48F5B4u;
            // 0x48f5b8: 0x9445002e  lhu         $a1, 0x2E($v0) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 46)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x48F5BCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x48F5BCu; }
            if (ctx->pc != 0x48F5BCu) { return; }
        }
        }
    }
    ctx->pc = 0x48F5BCu;
label_48f5bc:
    // 0x48f5bc: 0x8e390004  lw          $t9, 0x4($s1)
    ctx->pc = 0x48f5bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_48f5c0:
    // 0x48f5c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x48f5c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_48f5c4:
    // 0x48f5c4: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x48f5c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_48f5c8:
    // 0x48f5c8: 0x320f809  jalr        $t9
label_48f5cc:
    if (ctx->pc == 0x48F5CCu) {
        ctx->pc = 0x48F5CCu;
            // 0x48f5cc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x48F5D0u;
        goto label_48f5d0;
    }
    ctx->pc = 0x48F5C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x48F5D0u);
        ctx->pc = 0x48F5CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48F5C8u;
            // 0x48f5cc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x48F5D0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x48F5D0u; }
            if (ctx->pc != 0x48F5D0u) { return; }
        }
        }
    }
    ctx->pc = 0x48F5D0u;
label_48f5d0:
    // 0x48f5d0: 0x10000006  b           . + 4 + (0x6 << 2)
label_48f5d4:
    if (ctx->pc == 0x48F5D4u) {
        ctx->pc = 0x48F5D4u;
            // 0x48f5d4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x48F5D8u;
        goto label_48f5d8;
    }
    ctx->pc = 0x48F5D0u;
    {
        const bool branch_taken_0x48f5d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48F5D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48F5D0u;
            // 0x48f5d4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48f5d0) {
            ctx->pc = 0x48F5ECu;
            goto label_48f5ec;
        }
    }
    ctx->pc = 0x48F5D8u;
label_48f5d8:
    // 0x48f5d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x48f5d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_48f5dc:
    // 0x48f5dc: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x48f5dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_48f5e0:
    // 0x48f5e0: 0x320f809  jalr        $t9
label_48f5e4:
    if (ctx->pc == 0x48F5E4u) {
        ctx->pc = 0x48F5E4u;
            // 0x48f5e4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x48F5E8u;
        goto label_48f5e8;
    }
    ctx->pc = 0x48F5E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x48F5E8u);
        ctx->pc = 0x48F5E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48F5E0u;
            // 0x48f5e4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x48F5E8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x48F5E8u; }
            if (ctx->pc != 0x48F5E8u) { return; }
        }
        }
    }
    ctx->pc = 0x48F5E8u;
label_48f5e8:
    // 0x48f5e8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x48f5e8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_48f5ec:
    // 0x48f5ec: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x48f5ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_48f5f0:
    // 0x48f5f0: 0x8e830024  lw          $v1, 0x24($s4)
    ctx->pc = 0x48f5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
label_48f5f4:
    // 0x48f5f4: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x48f5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_48f5f8:
    // 0x48f5f8: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x48f5f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_48f5fc:
    // 0x48f5fc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x48f5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_48f600:
    // 0x48f600: 0x1062002b  beq         $v1, $v0, . + 4 + (0x2B << 2)
label_48f604:
    if (ctx->pc == 0x48F604u) {
        ctx->pc = 0x48F608u;
        goto label_48f608;
    }
    ctx->pc = 0x48F600u;
    {
        const bool branch_taken_0x48f600 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x48f600) {
            ctx->pc = 0x48F6B0u;
            goto label_48f6b0;
        }
    }
    ctx->pc = 0x48F608u;
label_48f608:
    // 0x48f608: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x48f608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_48f60c:
    // 0x48f60c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_48f610:
    if (ctx->pc == 0x48F610u) {
        ctx->pc = 0x48F614u;
        goto label_48f614;
    }
    ctx->pc = 0x48F60Cu;
    {
        const bool branch_taken_0x48f60c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x48f60c) {
            ctx->pc = 0x48F620u;
            goto label_48f620;
        }
    }
    ctx->pc = 0x48F614u;
label_48f614:
    // 0x48f614: 0x10000048  b           . + 4 + (0x48 << 2)
label_48f618:
    if (ctx->pc == 0x48F618u) {
        ctx->pc = 0x48F61Cu;
        goto label_48f61c;
    }
    ctx->pc = 0x48F614u;
    {
        const bool branch_taken_0x48f614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x48f614) {
            ctx->pc = 0x48F738u;
            goto label_48f738;
        }
    }
    ctx->pc = 0x48F61Cu;
label_48f61c:
    // 0x48f61c: 0x0  nop
    ctx->pc = 0x48f61cu;
    // NOP
label_48f620:
    // 0x48f620: 0x92820022  lbu         $v0, 0x22($s4)
    ctx->pc = 0x48f620u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 34)));
label_48f624:
    // 0x48f624: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_48f628:
    if (ctx->pc == 0x48F628u) {
        ctx->pc = 0x48F62Cu;
        goto label_48f62c;
    }
    ctx->pc = 0x48F624u;
    {
        const bool branch_taken_0x48f624 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48f624) {
            ctx->pc = 0x48F668u;
            goto label_48f668;
        }
    }
    ctx->pc = 0x48F62Cu;
label_48f62c:
    // 0x48f62c: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x48f62cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_48f630:
    // 0x48f630: 0x8e390004  lw          $t9, 0x4($s1)
    ctx->pc = 0x48f630u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_48f634:
    // 0x48f634: 0x521821  addu        $v1, $v0, $s2
    ctx->pc = 0x48f634u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_48f638:
    // 0x48f638: 0x8c870004  lw          $a3, 0x4($a0)
    ctx->pc = 0x48f638u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_48f63c:
    // 0x48f63c: 0x8e82002c  lw          $v0, 0x2C($s4)
    ctx->pc = 0x48f63cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 44)));
label_48f640:
    // 0x48f640: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x48f640u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_48f644:
    // 0x48f644: 0xc68c0010  lwc1        $f12, 0x10($s4)
    ctx->pc = 0x48f644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_48f648:
    // 0x48f648: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x48f648u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_48f64c:
    // 0x48f64c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x48f64cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_48f650:
    // 0x48f650: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x48f650u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_48f654:
    // 0x48f654: 0x320f809  jalr        $t9
label_48f658:
    if (ctx->pc == 0x48F658u) {
        ctx->pc = 0x48F658u;
            // 0x48f658: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x48F65Cu;
        goto label_48f65c;
    }
    ctx->pc = 0x48F654u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x48F65Cu);
        ctx->pc = 0x48F658u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48F654u;
            // 0x48f658: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x48F65Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x48F65Cu; }
            if (ctx->pc != 0x48F65Cu) { return; }
        }
        }
    }
    ctx->pc = 0x48F65Cu;
label_48f65c:
    // 0x48f65c: 0x1000000e  b           . + 4 + (0xE << 2)
label_48f660:
    if (ctx->pc == 0x48F660u) {
        ctx->pc = 0x48F664u;
        goto label_48f664;
    }
    ctx->pc = 0x48F65Cu;
    {
        const bool branch_taken_0x48f65c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x48f65c) {
            ctx->pc = 0x48F698u;
            goto label_48f698;
        }
    }
    ctx->pc = 0x48F664u;
label_48f664:
    // 0x48f664: 0x0  nop
    ctx->pc = 0x48f664u;
    // NOP
label_48f668:
    // 0x48f668: 0x8e390004  lw          $t9, 0x4($s1)
    ctx->pc = 0x48f668u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_48f66c:
    // 0x48f66c: 0x8c870004  lw          $a3, 0x4($a0)
    ctx->pc = 0x48f66cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_48f670:
    // 0x48f670: 0x121840  sll         $v1, $s2, 1
    ctx->pc = 0x48f670u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
label_48f674:
    // 0x48f674: 0x8e820028  lw          $v0, 0x28($s4)
    ctx->pc = 0x48f674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 40)));
label_48f678:
    // 0x48f678: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x48f678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_48f67c:
    // 0x48f67c: 0xc68c0010  lwc1        $f12, 0x10($s4)
    ctx->pc = 0x48f67cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_48f680:
    // 0x48f680: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x48f680u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_48f684:
    // 0x48f684: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x48f684u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_48f688:
    // 0x48f688: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x48f688u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_48f68c:
    // 0x48f68c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x48f68cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_48f690:
    // 0x48f690: 0x320f809  jalr        $t9
label_48f694:
    if (ctx->pc == 0x48F694u) {
        ctx->pc = 0x48F694u;
            // 0x48f694: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x48F698u;
        goto label_48f698;
    }
    ctx->pc = 0x48F690u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x48F698u);
        ctx->pc = 0x48F694u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48F690u;
            // 0x48f694: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x48F698u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x48F698u; }
            if (ctx->pc != 0x48F698u) { return; }
        }
        }
    }
    ctx->pc = 0x48F698u;
label_48f698:
    // 0x48f698: 0x8e820024  lw          $v0, 0x24($s4)
    ctx->pc = 0x48f698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
label_48f69c:
    // 0x48f69c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x48f69cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_48f6a0:
    // 0x48f6a0: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x48f6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_48f6a4:
    // 0x48f6a4: 0x10000024  b           . + 4 + (0x24 << 2)
label_48f6a8:
    if (ctx->pc == 0x48F6A8u) {
        ctx->pc = 0x48F6A8u;
            // 0x48f6a8: 0x2429021  addu        $s2, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->pc = 0x48F6ACu;
        goto label_48f6ac;
    }
    ctx->pc = 0x48F6A4u;
    {
        const bool branch_taken_0x48f6a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48F6A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48F6A4u;
            // 0x48f6a8: 0x2429021  addu        $s2, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48f6a4) {
            ctx->pc = 0x48F738u;
            goto label_48f738;
        }
    }
    ctx->pc = 0x48F6ACu;
label_48f6ac:
    // 0x48f6ac: 0x0  nop
    ctx->pc = 0x48f6acu;
    // NOP
label_48f6b0:
    // 0x48f6b0: 0x92820022  lbu         $v0, 0x22($s4)
    ctx->pc = 0x48f6b0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 34)));
label_48f6b4:
    // 0x48f6b4: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_48f6b8:
    if (ctx->pc == 0x48F6B8u) {
        ctx->pc = 0x48F6BCu;
        goto label_48f6bc;
    }
    ctx->pc = 0x48F6B4u;
    {
        const bool branch_taken_0x48f6b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48f6b4) {
            ctx->pc = 0x48F6F8u;
            goto label_48f6f8;
        }
    }
    ctx->pc = 0x48F6BCu;
label_48f6bc:
    // 0x48f6bc: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x48f6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_48f6c0:
    // 0x48f6c0: 0x8e390004  lw          $t9, 0x4($s1)
    ctx->pc = 0x48f6c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_48f6c4:
    // 0x48f6c4: 0x521821  addu        $v1, $v0, $s2
    ctx->pc = 0x48f6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_48f6c8:
    // 0x48f6c8: 0x8c870004  lw          $a3, 0x4($a0)
    ctx->pc = 0x48f6c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_48f6cc:
    // 0x48f6cc: 0x8e82002c  lw          $v0, 0x2C($s4)
    ctx->pc = 0x48f6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 44)));
label_48f6d0:
    // 0x48f6d0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x48f6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_48f6d4:
    // 0x48f6d4: 0xc68c0010  lwc1        $f12, 0x10($s4)
    ctx->pc = 0x48f6d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_48f6d8:
    // 0x48f6d8: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x48f6d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_48f6dc:
    // 0x48f6dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x48f6dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_48f6e0:
    // 0x48f6e0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x48f6e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_48f6e4:
    // 0x48f6e4: 0x320f809  jalr        $t9
label_48f6e8:
    if (ctx->pc == 0x48F6E8u) {
        ctx->pc = 0x48F6E8u;
            // 0x48f6e8: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x48F6ECu;
        goto label_48f6ec;
    }
    ctx->pc = 0x48F6E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x48F6ECu);
        ctx->pc = 0x48F6E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48F6E4u;
            // 0x48f6e8: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x48F6ECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x48F6ECu; }
            if (ctx->pc != 0x48F6ECu) { return; }
        }
        }
    }
    ctx->pc = 0x48F6ECu;
label_48f6ec:
    // 0x48f6ec: 0x1000000e  b           . + 4 + (0xE << 2)
label_48f6f0:
    if (ctx->pc == 0x48F6F0u) {
        ctx->pc = 0x48F6F4u;
        goto label_48f6f4;
    }
    ctx->pc = 0x48F6ECu;
    {
        const bool branch_taken_0x48f6ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x48f6ec) {
            ctx->pc = 0x48F728u;
            goto label_48f728;
        }
    }
    ctx->pc = 0x48F6F4u;
label_48f6f4:
    // 0x48f6f4: 0x0  nop
    ctx->pc = 0x48f6f4u;
    // NOP
label_48f6f8:
    // 0x48f6f8: 0x8e390004  lw          $t9, 0x4($s1)
    ctx->pc = 0x48f6f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_48f6fc:
    // 0x48f6fc: 0x8c870004  lw          $a3, 0x4($a0)
    ctx->pc = 0x48f6fcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_48f700:
    // 0x48f700: 0x121840  sll         $v1, $s2, 1
    ctx->pc = 0x48f700u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
label_48f704:
    // 0x48f704: 0x8e820028  lw          $v0, 0x28($s4)
    ctx->pc = 0x48f704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 40)));
label_48f708:
    // 0x48f708: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x48f708u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_48f70c:
    // 0x48f70c: 0xc68c0010  lwc1        $f12, 0x10($s4)
    ctx->pc = 0x48f70cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_48f710:
    // 0x48f710: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x48f710u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_48f714:
    // 0x48f714: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x48f714u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_48f718:
    // 0x48f718: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x48f718u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_48f71c:
    // 0x48f71c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x48f71cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_48f720:
    // 0x48f720: 0x320f809  jalr        $t9
label_48f724:
    if (ctx->pc == 0x48F724u) {
        ctx->pc = 0x48F724u;
            // 0x48f724: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x48F728u;
        goto label_48f728;
    }
    ctx->pc = 0x48F720u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x48F728u);
        ctx->pc = 0x48F724u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48F720u;
            // 0x48f724: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x48F728u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x48F728u; }
            if (ctx->pc != 0x48F728u) { return; }
        }
        }
    }
    ctx->pc = 0x48F728u;
label_48f728:
    // 0x48f728: 0x8e820024  lw          $v0, 0x24($s4)
    ctx->pc = 0x48f728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
label_48f72c:
    // 0x48f72c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x48f72cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_48f730:
    // 0x48f730: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x48f730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_48f734:
    // 0x48f734: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x48f734u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_48f738:
    // 0x48f738: 0x96820020  lhu         $v0, 0x20($s4)
    ctx->pc = 0x48f738u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 32)));
label_48f73c:
    // 0x48f73c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x48f73cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_48f740:
    // 0x48f740: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x48f740u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_48f744:
    // 0x48f744: 0x1440ffaa  bnez        $v0, . + 4 + (-0x56 << 2)
label_48f748:
    if (ctx->pc == 0x48F748u) {
        ctx->pc = 0x48F748u;
            // 0x48f748: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->pc = 0x48F74Cu;
        goto label_48f74c;
    }
    ctx->pc = 0x48F744u;
    {
        const bool branch_taken_0x48f744 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x48F748u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48F744u;
            // 0x48f748: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48f744) {
            ctx->pc = 0x48F5F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_48f5f0;
        }
    }
    ctx->pc = 0x48F74Cu;
label_48f74c:
    // 0x48f74c: 0x8e390004  lw          $t9, 0x4($s1)
    ctx->pc = 0x48f74cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_48f750:
    // 0x48f750: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x48f750u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_48f754:
    // 0x48f754: 0x320f809  jalr        $t9
label_48f758:
    if (ctx->pc == 0x48F758u) {
        ctx->pc = 0x48F758u;
            // 0x48f758: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x48F75Cu;
        goto label_48f75c;
    }
    ctx->pc = 0x48F754u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x48F75Cu);
        ctx->pc = 0x48F758u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48F754u;
            // 0x48f758: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x48F75Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x48F75Cu; }
            if (ctx->pc != 0x48F75Cu) { return; }
        }
        }
    }
    ctx->pc = 0x48F75Cu;
label_48f75c:
    // 0x48f75c: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x48f75cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_48f760:
    // 0x48f760: 0x8f390040  lw          $t9, 0x40($t9)
    ctx->pc = 0x48f760u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 64)));
label_48f764:
    // 0x48f764: 0x320f809  jalr        $t9
label_48f768:
    if (ctx->pc == 0x48F768u) {
        ctx->pc = 0x48F768u;
            // 0x48f768: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x48F76Cu;
        goto label_48f76c;
    }
    ctx->pc = 0x48F764u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x48F76Cu);
        ctx->pc = 0x48F768u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48F764u;
            // 0x48f768: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x48F76Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x48F76Cu; }
            if (ctx->pc != 0x48F76Cu) { return; }
        }
        }
    }
    ctx->pc = 0x48F76Cu;
label_48f76c:
    // 0x48f76c: 0xae800034  sw          $zero, 0x34($s4)
    ctx->pc = 0x48f76cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 52), GPR_U32(ctx, 0));
label_48f770:
    // 0x48f770: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x48f770u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_48f774:
    // 0x48f774: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x48f774u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_48f778:
    // 0x48f778: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x48f778u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_48f77c:
    // 0x48f77c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x48f77cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_48f780:
    // 0x48f780: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x48f780u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_48f784:
    // 0x48f784: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x48f784u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_48f788:
    // 0x48f788: 0x3e00008  jr          $ra
label_48f78c:
    if (ctx->pc == 0x48F78Cu) {
        ctx->pc = 0x48F78Cu;
            // 0x48f78c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x48F790u;
        goto label_fallthrough_0x48f788;
    }
    ctx->pc = 0x48F788u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48F78Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48F788u;
            // 0x48f78c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x48f788:
    ctx->pc = 0x48F790u;
}
