#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0043E7B0
// Address: 0x43e7b0 - 0x43f710
void sub_0043E7B0_0x43e7b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0043E7B0_0x43e7b0");
#endif

    switch (ctx->pc) {
        case 0x43e7b0u: goto label_43e7b0;
        case 0x43e7b4u: goto label_43e7b4;
        case 0x43e7b8u: goto label_43e7b8;
        case 0x43e7bcu: goto label_43e7bc;
        case 0x43e7c0u: goto label_43e7c0;
        case 0x43e7c4u: goto label_43e7c4;
        case 0x43e7c8u: goto label_43e7c8;
        case 0x43e7ccu: goto label_43e7cc;
        case 0x43e7d0u: goto label_43e7d0;
        case 0x43e7d4u: goto label_43e7d4;
        case 0x43e7d8u: goto label_43e7d8;
        case 0x43e7dcu: goto label_43e7dc;
        case 0x43e7e0u: goto label_43e7e0;
        case 0x43e7e4u: goto label_43e7e4;
        case 0x43e7e8u: goto label_43e7e8;
        case 0x43e7ecu: goto label_43e7ec;
        case 0x43e7f0u: goto label_43e7f0;
        case 0x43e7f4u: goto label_43e7f4;
        case 0x43e7f8u: goto label_43e7f8;
        case 0x43e7fcu: goto label_43e7fc;
        case 0x43e800u: goto label_43e800;
        case 0x43e804u: goto label_43e804;
        case 0x43e808u: goto label_43e808;
        case 0x43e80cu: goto label_43e80c;
        case 0x43e810u: goto label_43e810;
        case 0x43e814u: goto label_43e814;
        case 0x43e818u: goto label_43e818;
        case 0x43e81cu: goto label_43e81c;
        case 0x43e820u: goto label_43e820;
        case 0x43e824u: goto label_43e824;
        case 0x43e828u: goto label_43e828;
        case 0x43e82cu: goto label_43e82c;
        case 0x43e830u: goto label_43e830;
        case 0x43e834u: goto label_43e834;
        case 0x43e838u: goto label_43e838;
        case 0x43e83cu: goto label_43e83c;
        case 0x43e840u: goto label_43e840;
        case 0x43e844u: goto label_43e844;
        case 0x43e848u: goto label_43e848;
        case 0x43e84cu: goto label_43e84c;
        case 0x43e850u: goto label_43e850;
        case 0x43e854u: goto label_43e854;
        case 0x43e858u: goto label_43e858;
        case 0x43e85cu: goto label_43e85c;
        case 0x43e860u: goto label_43e860;
        case 0x43e864u: goto label_43e864;
        case 0x43e868u: goto label_43e868;
        case 0x43e86cu: goto label_43e86c;
        case 0x43e870u: goto label_43e870;
        case 0x43e874u: goto label_43e874;
        case 0x43e878u: goto label_43e878;
        case 0x43e87cu: goto label_43e87c;
        case 0x43e880u: goto label_43e880;
        case 0x43e884u: goto label_43e884;
        case 0x43e888u: goto label_43e888;
        case 0x43e88cu: goto label_43e88c;
        case 0x43e890u: goto label_43e890;
        case 0x43e894u: goto label_43e894;
        case 0x43e898u: goto label_43e898;
        case 0x43e89cu: goto label_43e89c;
        case 0x43e8a0u: goto label_43e8a0;
        case 0x43e8a4u: goto label_43e8a4;
        case 0x43e8a8u: goto label_43e8a8;
        case 0x43e8acu: goto label_43e8ac;
        case 0x43e8b0u: goto label_43e8b0;
        case 0x43e8b4u: goto label_43e8b4;
        case 0x43e8b8u: goto label_43e8b8;
        case 0x43e8bcu: goto label_43e8bc;
        case 0x43e8c0u: goto label_43e8c0;
        case 0x43e8c4u: goto label_43e8c4;
        case 0x43e8c8u: goto label_43e8c8;
        case 0x43e8ccu: goto label_43e8cc;
        case 0x43e8d0u: goto label_43e8d0;
        case 0x43e8d4u: goto label_43e8d4;
        case 0x43e8d8u: goto label_43e8d8;
        case 0x43e8dcu: goto label_43e8dc;
        case 0x43e8e0u: goto label_43e8e0;
        case 0x43e8e4u: goto label_43e8e4;
        case 0x43e8e8u: goto label_43e8e8;
        case 0x43e8ecu: goto label_43e8ec;
        case 0x43e8f0u: goto label_43e8f0;
        case 0x43e8f4u: goto label_43e8f4;
        case 0x43e8f8u: goto label_43e8f8;
        case 0x43e8fcu: goto label_43e8fc;
        case 0x43e900u: goto label_43e900;
        case 0x43e904u: goto label_43e904;
        case 0x43e908u: goto label_43e908;
        case 0x43e90cu: goto label_43e90c;
        case 0x43e910u: goto label_43e910;
        case 0x43e914u: goto label_43e914;
        case 0x43e918u: goto label_43e918;
        case 0x43e91cu: goto label_43e91c;
        case 0x43e920u: goto label_43e920;
        case 0x43e924u: goto label_43e924;
        case 0x43e928u: goto label_43e928;
        case 0x43e92cu: goto label_43e92c;
        case 0x43e930u: goto label_43e930;
        case 0x43e934u: goto label_43e934;
        case 0x43e938u: goto label_43e938;
        case 0x43e93cu: goto label_43e93c;
        case 0x43e940u: goto label_43e940;
        case 0x43e944u: goto label_43e944;
        case 0x43e948u: goto label_43e948;
        case 0x43e94cu: goto label_43e94c;
        case 0x43e950u: goto label_43e950;
        case 0x43e954u: goto label_43e954;
        case 0x43e958u: goto label_43e958;
        case 0x43e95cu: goto label_43e95c;
        case 0x43e960u: goto label_43e960;
        case 0x43e964u: goto label_43e964;
        case 0x43e968u: goto label_43e968;
        case 0x43e96cu: goto label_43e96c;
        case 0x43e970u: goto label_43e970;
        case 0x43e974u: goto label_43e974;
        case 0x43e978u: goto label_43e978;
        case 0x43e97cu: goto label_43e97c;
        case 0x43e980u: goto label_43e980;
        case 0x43e984u: goto label_43e984;
        case 0x43e988u: goto label_43e988;
        case 0x43e98cu: goto label_43e98c;
        case 0x43e990u: goto label_43e990;
        case 0x43e994u: goto label_43e994;
        case 0x43e998u: goto label_43e998;
        case 0x43e99cu: goto label_43e99c;
        case 0x43e9a0u: goto label_43e9a0;
        case 0x43e9a4u: goto label_43e9a4;
        case 0x43e9a8u: goto label_43e9a8;
        case 0x43e9acu: goto label_43e9ac;
        case 0x43e9b0u: goto label_43e9b0;
        case 0x43e9b4u: goto label_43e9b4;
        case 0x43e9b8u: goto label_43e9b8;
        case 0x43e9bcu: goto label_43e9bc;
        case 0x43e9c0u: goto label_43e9c0;
        case 0x43e9c4u: goto label_43e9c4;
        case 0x43e9c8u: goto label_43e9c8;
        case 0x43e9ccu: goto label_43e9cc;
        case 0x43e9d0u: goto label_43e9d0;
        case 0x43e9d4u: goto label_43e9d4;
        case 0x43e9d8u: goto label_43e9d8;
        case 0x43e9dcu: goto label_43e9dc;
        case 0x43e9e0u: goto label_43e9e0;
        case 0x43e9e4u: goto label_43e9e4;
        case 0x43e9e8u: goto label_43e9e8;
        case 0x43e9ecu: goto label_43e9ec;
        case 0x43e9f0u: goto label_43e9f0;
        case 0x43e9f4u: goto label_43e9f4;
        case 0x43e9f8u: goto label_43e9f8;
        case 0x43e9fcu: goto label_43e9fc;
        case 0x43ea00u: goto label_43ea00;
        case 0x43ea04u: goto label_43ea04;
        case 0x43ea08u: goto label_43ea08;
        case 0x43ea0cu: goto label_43ea0c;
        case 0x43ea10u: goto label_43ea10;
        case 0x43ea14u: goto label_43ea14;
        case 0x43ea18u: goto label_43ea18;
        case 0x43ea1cu: goto label_43ea1c;
        case 0x43ea20u: goto label_43ea20;
        case 0x43ea24u: goto label_43ea24;
        case 0x43ea28u: goto label_43ea28;
        case 0x43ea2cu: goto label_43ea2c;
        case 0x43ea30u: goto label_43ea30;
        case 0x43ea34u: goto label_43ea34;
        case 0x43ea38u: goto label_43ea38;
        case 0x43ea3cu: goto label_43ea3c;
        case 0x43ea40u: goto label_43ea40;
        case 0x43ea44u: goto label_43ea44;
        case 0x43ea48u: goto label_43ea48;
        case 0x43ea4cu: goto label_43ea4c;
        case 0x43ea50u: goto label_43ea50;
        case 0x43ea54u: goto label_43ea54;
        case 0x43ea58u: goto label_43ea58;
        case 0x43ea5cu: goto label_43ea5c;
        case 0x43ea60u: goto label_43ea60;
        case 0x43ea64u: goto label_43ea64;
        case 0x43ea68u: goto label_43ea68;
        case 0x43ea6cu: goto label_43ea6c;
        case 0x43ea70u: goto label_43ea70;
        case 0x43ea74u: goto label_43ea74;
        case 0x43ea78u: goto label_43ea78;
        case 0x43ea7cu: goto label_43ea7c;
        case 0x43ea80u: goto label_43ea80;
        case 0x43ea84u: goto label_43ea84;
        case 0x43ea88u: goto label_43ea88;
        case 0x43ea8cu: goto label_43ea8c;
        case 0x43ea90u: goto label_43ea90;
        case 0x43ea94u: goto label_43ea94;
        case 0x43ea98u: goto label_43ea98;
        case 0x43ea9cu: goto label_43ea9c;
        case 0x43eaa0u: goto label_43eaa0;
        case 0x43eaa4u: goto label_43eaa4;
        case 0x43eaa8u: goto label_43eaa8;
        case 0x43eaacu: goto label_43eaac;
        case 0x43eab0u: goto label_43eab0;
        case 0x43eab4u: goto label_43eab4;
        case 0x43eab8u: goto label_43eab8;
        case 0x43eabcu: goto label_43eabc;
        case 0x43eac0u: goto label_43eac0;
        case 0x43eac4u: goto label_43eac4;
        case 0x43eac8u: goto label_43eac8;
        case 0x43eaccu: goto label_43eacc;
        case 0x43ead0u: goto label_43ead0;
        case 0x43ead4u: goto label_43ead4;
        case 0x43ead8u: goto label_43ead8;
        case 0x43eadcu: goto label_43eadc;
        case 0x43eae0u: goto label_43eae0;
        case 0x43eae4u: goto label_43eae4;
        case 0x43eae8u: goto label_43eae8;
        case 0x43eaecu: goto label_43eaec;
        case 0x43eaf0u: goto label_43eaf0;
        case 0x43eaf4u: goto label_43eaf4;
        case 0x43eaf8u: goto label_43eaf8;
        case 0x43eafcu: goto label_43eafc;
        case 0x43eb00u: goto label_43eb00;
        case 0x43eb04u: goto label_43eb04;
        case 0x43eb08u: goto label_43eb08;
        case 0x43eb0cu: goto label_43eb0c;
        case 0x43eb10u: goto label_43eb10;
        case 0x43eb14u: goto label_43eb14;
        case 0x43eb18u: goto label_43eb18;
        case 0x43eb1cu: goto label_43eb1c;
        case 0x43eb20u: goto label_43eb20;
        case 0x43eb24u: goto label_43eb24;
        case 0x43eb28u: goto label_43eb28;
        case 0x43eb2cu: goto label_43eb2c;
        case 0x43eb30u: goto label_43eb30;
        case 0x43eb34u: goto label_43eb34;
        case 0x43eb38u: goto label_43eb38;
        case 0x43eb3cu: goto label_43eb3c;
        case 0x43eb40u: goto label_43eb40;
        case 0x43eb44u: goto label_43eb44;
        case 0x43eb48u: goto label_43eb48;
        case 0x43eb4cu: goto label_43eb4c;
        case 0x43eb50u: goto label_43eb50;
        case 0x43eb54u: goto label_43eb54;
        case 0x43eb58u: goto label_43eb58;
        case 0x43eb5cu: goto label_43eb5c;
        case 0x43eb60u: goto label_43eb60;
        case 0x43eb64u: goto label_43eb64;
        case 0x43eb68u: goto label_43eb68;
        case 0x43eb6cu: goto label_43eb6c;
        case 0x43eb70u: goto label_43eb70;
        case 0x43eb74u: goto label_43eb74;
        case 0x43eb78u: goto label_43eb78;
        case 0x43eb7cu: goto label_43eb7c;
        case 0x43eb80u: goto label_43eb80;
        case 0x43eb84u: goto label_43eb84;
        case 0x43eb88u: goto label_43eb88;
        case 0x43eb8cu: goto label_43eb8c;
        case 0x43eb90u: goto label_43eb90;
        case 0x43eb94u: goto label_43eb94;
        case 0x43eb98u: goto label_43eb98;
        case 0x43eb9cu: goto label_43eb9c;
        case 0x43eba0u: goto label_43eba0;
        case 0x43eba4u: goto label_43eba4;
        case 0x43eba8u: goto label_43eba8;
        case 0x43ebacu: goto label_43ebac;
        case 0x43ebb0u: goto label_43ebb0;
        case 0x43ebb4u: goto label_43ebb4;
        case 0x43ebb8u: goto label_43ebb8;
        case 0x43ebbcu: goto label_43ebbc;
        case 0x43ebc0u: goto label_43ebc0;
        case 0x43ebc4u: goto label_43ebc4;
        case 0x43ebc8u: goto label_43ebc8;
        case 0x43ebccu: goto label_43ebcc;
        case 0x43ebd0u: goto label_43ebd0;
        case 0x43ebd4u: goto label_43ebd4;
        case 0x43ebd8u: goto label_43ebd8;
        case 0x43ebdcu: goto label_43ebdc;
        case 0x43ebe0u: goto label_43ebe0;
        case 0x43ebe4u: goto label_43ebe4;
        case 0x43ebe8u: goto label_43ebe8;
        case 0x43ebecu: goto label_43ebec;
        case 0x43ebf0u: goto label_43ebf0;
        case 0x43ebf4u: goto label_43ebf4;
        case 0x43ebf8u: goto label_43ebf8;
        case 0x43ebfcu: goto label_43ebfc;
        case 0x43ec00u: goto label_43ec00;
        case 0x43ec04u: goto label_43ec04;
        case 0x43ec08u: goto label_43ec08;
        case 0x43ec0cu: goto label_43ec0c;
        case 0x43ec10u: goto label_43ec10;
        case 0x43ec14u: goto label_43ec14;
        case 0x43ec18u: goto label_43ec18;
        case 0x43ec1cu: goto label_43ec1c;
        case 0x43ec20u: goto label_43ec20;
        case 0x43ec24u: goto label_43ec24;
        case 0x43ec28u: goto label_43ec28;
        case 0x43ec2cu: goto label_43ec2c;
        case 0x43ec30u: goto label_43ec30;
        case 0x43ec34u: goto label_43ec34;
        case 0x43ec38u: goto label_43ec38;
        case 0x43ec3cu: goto label_43ec3c;
        case 0x43ec40u: goto label_43ec40;
        case 0x43ec44u: goto label_43ec44;
        case 0x43ec48u: goto label_43ec48;
        case 0x43ec4cu: goto label_43ec4c;
        case 0x43ec50u: goto label_43ec50;
        case 0x43ec54u: goto label_43ec54;
        case 0x43ec58u: goto label_43ec58;
        case 0x43ec5cu: goto label_43ec5c;
        case 0x43ec60u: goto label_43ec60;
        case 0x43ec64u: goto label_43ec64;
        case 0x43ec68u: goto label_43ec68;
        case 0x43ec6cu: goto label_43ec6c;
        case 0x43ec70u: goto label_43ec70;
        case 0x43ec74u: goto label_43ec74;
        case 0x43ec78u: goto label_43ec78;
        case 0x43ec7cu: goto label_43ec7c;
        case 0x43ec80u: goto label_43ec80;
        case 0x43ec84u: goto label_43ec84;
        case 0x43ec88u: goto label_43ec88;
        case 0x43ec8cu: goto label_43ec8c;
        case 0x43ec90u: goto label_43ec90;
        case 0x43ec94u: goto label_43ec94;
        case 0x43ec98u: goto label_43ec98;
        case 0x43ec9cu: goto label_43ec9c;
        case 0x43eca0u: goto label_43eca0;
        case 0x43eca4u: goto label_43eca4;
        case 0x43eca8u: goto label_43eca8;
        case 0x43ecacu: goto label_43ecac;
        case 0x43ecb0u: goto label_43ecb0;
        case 0x43ecb4u: goto label_43ecb4;
        case 0x43ecb8u: goto label_43ecb8;
        case 0x43ecbcu: goto label_43ecbc;
        case 0x43ecc0u: goto label_43ecc0;
        case 0x43ecc4u: goto label_43ecc4;
        case 0x43ecc8u: goto label_43ecc8;
        case 0x43ecccu: goto label_43eccc;
        case 0x43ecd0u: goto label_43ecd0;
        case 0x43ecd4u: goto label_43ecd4;
        case 0x43ecd8u: goto label_43ecd8;
        case 0x43ecdcu: goto label_43ecdc;
        case 0x43ece0u: goto label_43ece0;
        case 0x43ece4u: goto label_43ece4;
        case 0x43ece8u: goto label_43ece8;
        case 0x43ececu: goto label_43ecec;
        case 0x43ecf0u: goto label_43ecf0;
        case 0x43ecf4u: goto label_43ecf4;
        case 0x43ecf8u: goto label_43ecf8;
        case 0x43ecfcu: goto label_43ecfc;
        case 0x43ed00u: goto label_43ed00;
        case 0x43ed04u: goto label_43ed04;
        case 0x43ed08u: goto label_43ed08;
        case 0x43ed0cu: goto label_43ed0c;
        case 0x43ed10u: goto label_43ed10;
        case 0x43ed14u: goto label_43ed14;
        case 0x43ed18u: goto label_43ed18;
        case 0x43ed1cu: goto label_43ed1c;
        case 0x43ed20u: goto label_43ed20;
        case 0x43ed24u: goto label_43ed24;
        case 0x43ed28u: goto label_43ed28;
        case 0x43ed2cu: goto label_43ed2c;
        case 0x43ed30u: goto label_43ed30;
        case 0x43ed34u: goto label_43ed34;
        case 0x43ed38u: goto label_43ed38;
        case 0x43ed3cu: goto label_43ed3c;
        case 0x43ed40u: goto label_43ed40;
        case 0x43ed44u: goto label_43ed44;
        case 0x43ed48u: goto label_43ed48;
        case 0x43ed4cu: goto label_43ed4c;
        case 0x43ed50u: goto label_43ed50;
        case 0x43ed54u: goto label_43ed54;
        case 0x43ed58u: goto label_43ed58;
        case 0x43ed5cu: goto label_43ed5c;
        case 0x43ed60u: goto label_43ed60;
        case 0x43ed64u: goto label_43ed64;
        case 0x43ed68u: goto label_43ed68;
        case 0x43ed6cu: goto label_43ed6c;
        case 0x43ed70u: goto label_43ed70;
        case 0x43ed74u: goto label_43ed74;
        case 0x43ed78u: goto label_43ed78;
        case 0x43ed7cu: goto label_43ed7c;
        case 0x43ed80u: goto label_43ed80;
        case 0x43ed84u: goto label_43ed84;
        case 0x43ed88u: goto label_43ed88;
        case 0x43ed8cu: goto label_43ed8c;
        case 0x43ed90u: goto label_43ed90;
        case 0x43ed94u: goto label_43ed94;
        case 0x43ed98u: goto label_43ed98;
        case 0x43ed9cu: goto label_43ed9c;
        case 0x43eda0u: goto label_43eda0;
        case 0x43eda4u: goto label_43eda4;
        case 0x43eda8u: goto label_43eda8;
        case 0x43edacu: goto label_43edac;
        case 0x43edb0u: goto label_43edb0;
        case 0x43edb4u: goto label_43edb4;
        case 0x43edb8u: goto label_43edb8;
        case 0x43edbcu: goto label_43edbc;
        case 0x43edc0u: goto label_43edc0;
        case 0x43edc4u: goto label_43edc4;
        case 0x43edc8u: goto label_43edc8;
        case 0x43edccu: goto label_43edcc;
        case 0x43edd0u: goto label_43edd0;
        case 0x43edd4u: goto label_43edd4;
        case 0x43edd8u: goto label_43edd8;
        case 0x43eddcu: goto label_43eddc;
        case 0x43ede0u: goto label_43ede0;
        case 0x43ede4u: goto label_43ede4;
        case 0x43ede8u: goto label_43ede8;
        case 0x43edecu: goto label_43edec;
        case 0x43edf0u: goto label_43edf0;
        case 0x43edf4u: goto label_43edf4;
        case 0x43edf8u: goto label_43edf8;
        case 0x43edfcu: goto label_43edfc;
        case 0x43ee00u: goto label_43ee00;
        case 0x43ee04u: goto label_43ee04;
        case 0x43ee08u: goto label_43ee08;
        case 0x43ee0cu: goto label_43ee0c;
        case 0x43ee10u: goto label_43ee10;
        case 0x43ee14u: goto label_43ee14;
        case 0x43ee18u: goto label_43ee18;
        case 0x43ee1cu: goto label_43ee1c;
        case 0x43ee20u: goto label_43ee20;
        case 0x43ee24u: goto label_43ee24;
        case 0x43ee28u: goto label_43ee28;
        case 0x43ee2cu: goto label_43ee2c;
        case 0x43ee30u: goto label_43ee30;
        case 0x43ee34u: goto label_43ee34;
        case 0x43ee38u: goto label_43ee38;
        case 0x43ee3cu: goto label_43ee3c;
        case 0x43ee40u: goto label_43ee40;
        case 0x43ee44u: goto label_43ee44;
        case 0x43ee48u: goto label_43ee48;
        case 0x43ee4cu: goto label_43ee4c;
        case 0x43ee50u: goto label_43ee50;
        case 0x43ee54u: goto label_43ee54;
        case 0x43ee58u: goto label_43ee58;
        case 0x43ee5cu: goto label_43ee5c;
        case 0x43ee60u: goto label_43ee60;
        case 0x43ee64u: goto label_43ee64;
        case 0x43ee68u: goto label_43ee68;
        case 0x43ee6cu: goto label_43ee6c;
        case 0x43ee70u: goto label_43ee70;
        case 0x43ee74u: goto label_43ee74;
        case 0x43ee78u: goto label_43ee78;
        case 0x43ee7cu: goto label_43ee7c;
        case 0x43ee80u: goto label_43ee80;
        case 0x43ee84u: goto label_43ee84;
        case 0x43ee88u: goto label_43ee88;
        case 0x43ee8cu: goto label_43ee8c;
        case 0x43ee90u: goto label_43ee90;
        case 0x43ee94u: goto label_43ee94;
        case 0x43ee98u: goto label_43ee98;
        case 0x43ee9cu: goto label_43ee9c;
        case 0x43eea0u: goto label_43eea0;
        case 0x43eea4u: goto label_43eea4;
        case 0x43eea8u: goto label_43eea8;
        case 0x43eeacu: goto label_43eeac;
        case 0x43eeb0u: goto label_43eeb0;
        case 0x43eeb4u: goto label_43eeb4;
        case 0x43eeb8u: goto label_43eeb8;
        case 0x43eebcu: goto label_43eebc;
        case 0x43eec0u: goto label_43eec0;
        case 0x43eec4u: goto label_43eec4;
        case 0x43eec8u: goto label_43eec8;
        case 0x43eeccu: goto label_43eecc;
        case 0x43eed0u: goto label_43eed0;
        case 0x43eed4u: goto label_43eed4;
        case 0x43eed8u: goto label_43eed8;
        case 0x43eedcu: goto label_43eedc;
        case 0x43eee0u: goto label_43eee0;
        case 0x43eee4u: goto label_43eee4;
        case 0x43eee8u: goto label_43eee8;
        case 0x43eeecu: goto label_43eeec;
        case 0x43eef0u: goto label_43eef0;
        case 0x43eef4u: goto label_43eef4;
        case 0x43eef8u: goto label_43eef8;
        case 0x43eefcu: goto label_43eefc;
        case 0x43ef00u: goto label_43ef00;
        case 0x43ef04u: goto label_43ef04;
        case 0x43ef08u: goto label_43ef08;
        case 0x43ef0cu: goto label_43ef0c;
        case 0x43ef10u: goto label_43ef10;
        case 0x43ef14u: goto label_43ef14;
        case 0x43ef18u: goto label_43ef18;
        case 0x43ef1cu: goto label_43ef1c;
        case 0x43ef20u: goto label_43ef20;
        case 0x43ef24u: goto label_43ef24;
        case 0x43ef28u: goto label_43ef28;
        case 0x43ef2cu: goto label_43ef2c;
        case 0x43ef30u: goto label_43ef30;
        case 0x43ef34u: goto label_43ef34;
        case 0x43ef38u: goto label_43ef38;
        case 0x43ef3cu: goto label_43ef3c;
        case 0x43ef40u: goto label_43ef40;
        case 0x43ef44u: goto label_43ef44;
        case 0x43ef48u: goto label_43ef48;
        case 0x43ef4cu: goto label_43ef4c;
        case 0x43ef50u: goto label_43ef50;
        case 0x43ef54u: goto label_43ef54;
        case 0x43ef58u: goto label_43ef58;
        case 0x43ef5cu: goto label_43ef5c;
        case 0x43ef60u: goto label_43ef60;
        case 0x43ef64u: goto label_43ef64;
        case 0x43ef68u: goto label_43ef68;
        case 0x43ef6cu: goto label_43ef6c;
        case 0x43ef70u: goto label_43ef70;
        case 0x43ef74u: goto label_43ef74;
        case 0x43ef78u: goto label_43ef78;
        case 0x43ef7cu: goto label_43ef7c;
        case 0x43ef80u: goto label_43ef80;
        case 0x43ef84u: goto label_43ef84;
        case 0x43ef88u: goto label_43ef88;
        case 0x43ef8cu: goto label_43ef8c;
        case 0x43ef90u: goto label_43ef90;
        case 0x43ef94u: goto label_43ef94;
        case 0x43ef98u: goto label_43ef98;
        case 0x43ef9cu: goto label_43ef9c;
        case 0x43efa0u: goto label_43efa0;
        case 0x43efa4u: goto label_43efa4;
        case 0x43efa8u: goto label_43efa8;
        case 0x43efacu: goto label_43efac;
        case 0x43efb0u: goto label_43efb0;
        case 0x43efb4u: goto label_43efb4;
        case 0x43efb8u: goto label_43efb8;
        case 0x43efbcu: goto label_43efbc;
        case 0x43efc0u: goto label_43efc0;
        case 0x43efc4u: goto label_43efc4;
        case 0x43efc8u: goto label_43efc8;
        case 0x43efccu: goto label_43efcc;
        case 0x43efd0u: goto label_43efd0;
        case 0x43efd4u: goto label_43efd4;
        case 0x43efd8u: goto label_43efd8;
        case 0x43efdcu: goto label_43efdc;
        case 0x43efe0u: goto label_43efe0;
        case 0x43efe4u: goto label_43efe4;
        case 0x43efe8u: goto label_43efe8;
        case 0x43efecu: goto label_43efec;
        case 0x43eff0u: goto label_43eff0;
        case 0x43eff4u: goto label_43eff4;
        case 0x43eff8u: goto label_43eff8;
        case 0x43effcu: goto label_43effc;
        case 0x43f000u: goto label_43f000;
        case 0x43f004u: goto label_43f004;
        case 0x43f008u: goto label_43f008;
        case 0x43f00cu: goto label_43f00c;
        case 0x43f010u: goto label_43f010;
        case 0x43f014u: goto label_43f014;
        case 0x43f018u: goto label_43f018;
        case 0x43f01cu: goto label_43f01c;
        case 0x43f020u: goto label_43f020;
        case 0x43f024u: goto label_43f024;
        case 0x43f028u: goto label_43f028;
        case 0x43f02cu: goto label_43f02c;
        case 0x43f030u: goto label_43f030;
        case 0x43f034u: goto label_43f034;
        case 0x43f038u: goto label_43f038;
        case 0x43f03cu: goto label_43f03c;
        case 0x43f040u: goto label_43f040;
        case 0x43f044u: goto label_43f044;
        case 0x43f048u: goto label_43f048;
        case 0x43f04cu: goto label_43f04c;
        case 0x43f050u: goto label_43f050;
        case 0x43f054u: goto label_43f054;
        case 0x43f058u: goto label_43f058;
        case 0x43f05cu: goto label_43f05c;
        case 0x43f060u: goto label_43f060;
        case 0x43f064u: goto label_43f064;
        case 0x43f068u: goto label_43f068;
        case 0x43f06cu: goto label_43f06c;
        case 0x43f070u: goto label_43f070;
        case 0x43f074u: goto label_43f074;
        case 0x43f078u: goto label_43f078;
        case 0x43f07cu: goto label_43f07c;
        case 0x43f080u: goto label_43f080;
        case 0x43f084u: goto label_43f084;
        case 0x43f088u: goto label_43f088;
        case 0x43f08cu: goto label_43f08c;
        case 0x43f090u: goto label_43f090;
        case 0x43f094u: goto label_43f094;
        case 0x43f098u: goto label_43f098;
        case 0x43f09cu: goto label_43f09c;
        case 0x43f0a0u: goto label_43f0a0;
        case 0x43f0a4u: goto label_43f0a4;
        case 0x43f0a8u: goto label_43f0a8;
        case 0x43f0acu: goto label_43f0ac;
        case 0x43f0b0u: goto label_43f0b0;
        case 0x43f0b4u: goto label_43f0b4;
        case 0x43f0b8u: goto label_43f0b8;
        case 0x43f0bcu: goto label_43f0bc;
        case 0x43f0c0u: goto label_43f0c0;
        case 0x43f0c4u: goto label_43f0c4;
        case 0x43f0c8u: goto label_43f0c8;
        case 0x43f0ccu: goto label_43f0cc;
        case 0x43f0d0u: goto label_43f0d0;
        case 0x43f0d4u: goto label_43f0d4;
        case 0x43f0d8u: goto label_43f0d8;
        case 0x43f0dcu: goto label_43f0dc;
        case 0x43f0e0u: goto label_43f0e0;
        case 0x43f0e4u: goto label_43f0e4;
        case 0x43f0e8u: goto label_43f0e8;
        case 0x43f0ecu: goto label_43f0ec;
        case 0x43f0f0u: goto label_43f0f0;
        case 0x43f0f4u: goto label_43f0f4;
        case 0x43f0f8u: goto label_43f0f8;
        case 0x43f0fcu: goto label_43f0fc;
        case 0x43f100u: goto label_43f100;
        case 0x43f104u: goto label_43f104;
        case 0x43f108u: goto label_43f108;
        case 0x43f10cu: goto label_43f10c;
        case 0x43f110u: goto label_43f110;
        case 0x43f114u: goto label_43f114;
        case 0x43f118u: goto label_43f118;
        case 0x43f11cu: goto label_43f11c;
        case 0x43f120u: goto label_43f120;
        case 0x43f124u: goto label_43f124;
        case 0x43f128u: goto label_43f128;
        case 0x43f12cu: goto label_43f12c;
        case 0x43f130u: goto label_43f130;
        case 0x43f134u: goto label_43f134;
        case 0x43f138u: goto label_43f138;
        case 0x43f13cu: goto label_43f13c;
        case 0x43f140u: goto label_43f140;
        case 0x43f144u: goto label_43f144;
        case 0x43f148u: goto label_43f148;
        case 0x43f14cu: goto label_43f14c;
        case 0x43f150u: goto label_43f150;
        case 0x43f154u: goto label_43f154;
        case 0x43f158u: goto label_43f158;
        case 0x43f15cu: goto label_43f15c;
        case 0x43f160u: goto label_43f160;
        case 0x43f164u: goto label_43f164;
        case 0x43f168u: goto label_43f168;
        case 0x43f16cu: goto label_43f16c;
        case 0x43f170u: goto label_43f170;
        case 0x43f174u: goto label_43f174;
        case 0x43f178u: goto label_43f178;
        case 0x43f17cu: goto label_43f17c;
        case 0x43f180u: goto label_43f180;
        case 0x43f184u: goto label_43f184;
        case 0x43f188u: goto label_43f188;
        case 0x43f18cu: goto label_43f18c;
        case 0x43f190u: goto label_43f190;
        case 0x43f194u: goto label_43f194;
        case 0x43f198u: goto label_43f198;
        case 0x43f19cu: goto label_43f19c;
        case 0x43f1a0u: goto label_43f1a0;
        case 0x43f1a4u: goto label_43f1a4;
        case 0x43f1a8u: goto label_43f1a8;
        case 0x43f1acu: goto label_43f1ac;
        case 0x43f1b0u: goto label_43f1b0;
        case 0x43f1b4u: goto label_43f1b4;
        case 0x43f1b8u: goto label_43f1b8;
        case 0x43f1bcu: goto label_43f1bc;
        case 0x43f1c0u: goto label_43f1c0;
        case 0x43f1c4u: goto label_43f1c4;
        case 0x43f1c8u: goto label_43f1c8;
        case 0x43f1ccu: goto label_43f1cc;
        case 0x43f1d0u: goto label_43f1d0;
        case 0x43f1d4u: goto label_43f1d4;
        case 0x43f1d8u: goto label_43f1d8;
        case 0x43f1dcu: goto label_43f1dc;
        case 0x43f1e0u: goto label_43f1e0;
        case 0x43f1e4u: goto label_43f1e4;
        case 0x43f1e8u: goto label_43f1e8;
        case 0x43f1ecu: goto label_43f1ec;
        case 0x43f1f0u: goto label_43f1f0;
        case 0x43f1f4u: goto label_43f1f4;
        case 0x43f1f8u: goto label_43f1f8;
        case 0x43f1fcu: goto label_43f1fc;
        case 0x43f200u: goto label_43f200;
        case 0x43f204u: goto label_43f204;
        case 0x43f208u: goto label_43f208;
        case 0x43f20cu: goto label_43f20c;
        case 0x43f210u: goto label_43f210;
        case 0x43f214u: goto label_43f214;
        case 0x43f218u: goto label_43f218;
        case 0x43f21cu: goto label_43f21c;
        case 0x43f220u: goto label_43f220;
        case 0x43f224u: goto label_43f224;
        case 0x43f228u: goto label_43f228;
        case 0x43f22cu: goto label_43f22c;
        case 0x43f230u: goto label_43f230;
        case 0x43f234u: goto label_43f234;
        case 0x43f238u: goto label_43f238;
        case 0x43f23cu: goto label_43f23c;
        case 0x43f240u: goto label_43f240;
        case 0x43f244u: goto label_43f244;
        case 0x43f248u: goto label_43f248;
        case 0x43f24cu: goto label_43f24c;
        case 0x43f250u: goto label_43f250;
        case 0x43f254u: goto label_43f254;
        case 0x43f258u: goto label_43f258;
        case 0x43f25cu: goto label_43f25c;
        case 0x43f260u: goto label_43f260;
        case 0x43f264u: goto label_43f264;
        case 0x43f268u: goto label_43f268;
        case 0x43f26cu: goto label_43f26c;
        case 0x43f270u: goto label_43f270;
        case 0x43f274u: goto label_43f274;
        case 0x43f278u: goto label_43f278;
        case 0x43f27cu: goto label_43f27c;
        case 0x43f280u: goto label_43f280;
        case 0x43f284u: goto label_43f284;
        case 0x43f288u: goto label_43f288;
        case 0x43f28cu: goto label_43f28c;
        case 0x43f290u: goto label_43f290;
        case 0x43f294u: goto label_43f294;
        case 0x43f298u: goto label_43f298;
        case 0x43f29cu: goto label_43f29c;
        case 0x43f2a0u: goto label_43f2a0;
        case 0x43f2a4u: goto label_43f2a4;
        case 0x43f2a8u: goto label_43f2a8;
        case 0x43f2acu: goto label_43f2ac;
        case 0x43f2b0u: goto label_43f2b0;
        case 0x43f2b4u: goto label_43f2b4;
        case 0x43f2b8u: goto label_43f2b8;
        case 0x43f2bcu: goto label_43f2bc;
        case 0x43f2c0u: goto label_43f2c0;
        case 0x43f2c4u: goto label_43f2c4;
        case 0x43f2c8u: goto label_43f2c8;
        case 0x43f2ccu: goto label_43f2cc;
        case 0x43f2d0u: goto label_43f2d0;
        case 0x43f2d4u: goto label_43f2d4;
        case 0x43f2d8u: goto label_43f2d8;
        case 0x43f2dcu: goto label_43f2dc;
        case 0x43f2e0u: goto label_43f2e0;
        case 0x43f2e4u: goto label_43f2e4;
        case 0x43f2e8u: goto label_43f2e8;
        case 0x43f2ecu: goto label_43f2ec;
        case 0x43f2f0u: goto label_43f2f0;
        case 0x43f2f4u: goto label_43f2f4;
        case 0x43f2f8u: goto label_43f2f8;
        case 0x43f2fcu: goto label_43f2fc;
        case 0x43f300u: goto label_43f300;
        case 0x43f304u: goto label_43f304;
        case 0x43f308u: goto label_43f308;
        case 0x43f30cu: goto label_43f30c;
        case 0x43f310u: goto label_43f310;
        case 0x43f314u: goto label_43f314;
        case 0x43f318u: goto label_43f318;
        case 0x43f31cu: goto label_43f31c;
        case 0x43f320u: goto label_43f320;
        case 0x43f324u: goto label_43f324;
        case 0x43f328u: goto label_43f328;
        case 0x43f32cu: goto label_43f32c;
        case 0x43f330u: goto label_43f330;
        case 0x43f334u: goto label_43f334;
        case 0x43f338u: goto label_43f338;
        case 0x43f33cu: goto label_43f33c;
        case 0x43f340u: goto label_43f340;
        case 0x43f344u: goto label_43f344;
        case 0x43f348u: goto label_43f348;
        case 0x43f34cu: goto label_43f34c;
        case 0x43f350u: goto label_43f350;
        case 0x43f354u: goto label_43f354;
        case 0x43f358u: goto label_43f358;
        case 0x43f35cu: goto label_43f35c;
        case 0x43f360u: goto label_43f360;
        case 0x43f364u: goto label_43f364;
        case 0x43f368u: goto label_43f368;
        case 0x43f36cu: goto label_43f36c;
        case 0x43f370u: goto label_43f370;
        case 0x43f374u: goto label_43f374;
        case 0x43f378u: goto label_43f378;
        case 0x43f37cu: goto label_43f37c;
        case 0x43f380u: goto label_43f380;
        case 0x43f384u: goto label_43f384;
        case 0x43f388u: goto label_43f388;
        case 0x43f38cu: goto label_43f38c;
        case 0x43f390u: goto label_43f390;
        case 0x43f394u: goto label_43f394;
        case 0x43f398u: goto label_43f398;
        case 0x43f39cu: goto label_43f39c;
        case 0x43f3a0u: goto label_43f3a0;
        case 0x43f3a4u: goto label_43f3a4;
        case 0x43f3a8u: goto label_43f3a8;
        case 0x43f3acu: goto label_43f3ac;
        case 0x43f3b0u: goto label_43f3b0;
        case 0x43f3b4u: goto label_43f3b4;
        case 0x43f3b8u: goto label_43f3b8;
        case 0x43f3bcu: goto label_43f3bc;
        case 0x43f3c0u: goto label_43f3c0;
        case 0x43f3c4u: goto label_43f3c4;
        case 0x43f3c8u: goto label_43f3c8;
        case 0x43f3ccu: goto label_43f3cc;
        case 0x43f3d0u: goto label_43f3d0;
        case 0x43f3d4u: goto label_43f3d4;
        case 0x43f3d8u: goto label_43f3d8;
        case 0x43f3dcu: goto label_43f3dc;
        case 0x43f3e0u: goto label_43f3e0;
        case 0x43f3e4u: goto label_43f3e4;
        case 0x43f3e8u: goto label_43f3e8;
        case 0x43f3ecu: goto label_43f3ec;
        case 0x43f3f0u: goto label_43f3f0;
        case 0x43f3f4u: goto label_43f3f4;
        case 0x43f3f8u: goto label_43f3f8;
        case 0x43f3fcu: goto label_43f3fc;
        case 0x43f400u: goto label_43f400;
        case 0x43f404u: goto label_43f404;
        case 0x43f408u: goto label_43f408;
        case 0x43f40cu: goto label_43f40c;
        case 0x43f410u: goto label_43f410;
        case 0x43f414u: goto label_43f414;
        case 0x43f418u: goto label_43f418;
        case 0x43f41cu: goto label_43f41c;
        case 0x43f420u: goto label_43f420;
        case 0x43f424u: goto label_43f424;
        case 0x43f428u: goto label_43f428;
        case 0x43f42cu: goto label_43f42c;
        case 0x43f430u: goto label_43f430;
        case 0x43f434u: goto label_43f434;
        case 0x43f438u: goto label_43f438;
        case 0x43f43cu: goto label_43f43c;
        case 0x43f440u: goto label_43f440;
        case 0x43f444u: goto label_43f444;
        case 0x43f448u: goto label_43f448;
        case 0x43f44cu: goto label_43f44c;
        case 0x43f450u: goto label_43f450;
        case 0x43f454u: goto label_43f454;
        case 0x43f458u: goto label_43f458;
        case 0x43f45cu: goto label_43f45c;
        case 0x43f460u: goto label_43f460;
        case 0x43f464u: goto label_43f464;
        case 0x43f468u: goto label_43f468;
        case 0x43f46cu: goto label_43f46c;
        case 0x43f470u: goto label_43f470;
        case 0x43f474u: goto label_43f474;
        case 0x43f478u: goto label_43f478;
        case 0x43f47cu: goto label_43f47c;
        case 0x43f480u: goto label_43f480;
        case 0x43f484u: goto label_43f484;
        case 0x43f488u: goto label_43f488;
        case 0x43f48cu: goto label_43f48c;
        case 0x43f490u: goto label_43f490;
        case 0x43f494u: goto label_43f494;
        case 0x43f498u: goto label_43f498;
        case 0x43f49cu: goto label_43f49c;
        case 0x43f4a0u: goto label_43f4a0;
        case 0x43f4a4u: goto label_43f4a4;
        case 0x43f4a8u: goto label_43f4a8;
        case 0x43f4acu: goto label_43f4ac;
        case 0x43f4b0u: goto label_43f4b0;
        case 0x43f4b4u: goto label_43f4b4;
        case 0x43f4b8u: goto label_43f4b8;
        case 0x43f4bcu: goto label_43f4bc;
        case 0x43f4c0u: goto label_43f4c0;
        case 0x43f4c4u: goto label_43f4c4;
        case 0x43f4c8u: goto label_43f4c8;
        case 0x43f4ccu: goto label_43f4cc;
        case 0x43f4d0u: goto label_43f4d0;
        case 0x43f4d4u: goto label_43f4d4;
        case 0x43f4d8u: goto label_43f4d8;
        case 0x43f4dcu: goto label_43f4dc;
        case 0x43f4e0u: goto label_43f4e0;
        case 0x43f4e4u: goto label_43f4e4;
        case 0x43f4e8u: goto label_43f4e8;
        case 0x43f4ecu: goto label_43f4ec;
        case 0x43f4f0u: goto label_43f4f0;
        case 0x43f4f4u: goto label_43f4f4;
        case 0x43f4f8u: goto label_43f4f8;
        case 0x43f4fcu: goto label_43f4fc;
        case 0x43f500u: goto label_43f500;
        case 0x43f504u: goto label_43f504;
        case 0x43f508u: goto label_43f508;
        case 0x43f50cu: goto label_43f50c;
        case 0x43f510u: goto label_43f510;
        case 0x43f514u: goto label_43f514;
        case 0x43f518u: goto label_43f518;
        case 0x43f51cu: goto label_43f51c;
        case 0x43f520u: goto label_43f520;
        case 0x43f524u: goto label_43f524;
        case 0x43f528u: goto label_43f528;
        case 0x43f52cu: goto label_43f52c;
        case 0x43f530u: goto label_43f530;
        case 0x43f534u: goto label_43f534;
        case 0x43f538u: goto label_43f538;
        case 0x43f53cu: goto label_43f53c;
        case 0x43f540u: goto label_43f540;
        case 0x43f544u: goto label_43f544;
        case 0x43f548u: goto label_43f548;
        case 0x43f54cu: goto label_43f54c;
        case 0x43f550u: goto label_43f550;
        case 0x43f554u: goto label_43f554;
        case 0x43f558u: goto label_43f558;
        case 0x43f55cu: goto label_43f55c;
        case 0x43f560u: goto label_43f560;
        case 0x43f564u: goto label_43f564;
        case 0x43f568u: goto label_43f568;
        case 0x43f56cu: goto label_43f56c;
        case 0x43f570u: goto label_43f570;
        case 0x43f574u: goto label_43f574;
        case 0x43f578u: goto label_43f578;
        case 0x43f57cu: goto label_43f57c;
        case 0x43f580u: goto label_43f580;
        case 0x43f584u: goto label_43f584;
        case 0x43f588u: goto label_43f588;
        case 0x43f58cu: goto label_43f58c;
        case 0x43f590u: goto label_43f590;
        case 0x43f594u: goto label_43f594;
        case 0x43f598u: goto label_43f598;
        case 0x43f59cu: goto label_43f59c;
        case 0x43f5a0u: goto label_43f5a0;
        case 0x43f5a4u: goto label_43f5a4;
        case 0x43f5a8u: goto label_43f5a8;
        case 0x43f5acu: goto label_43f5ac;
        case 0x43f5b0u: goto label_43f5b0;
        case 0x43f5b4u: goto label_43f5b4;
        case 0x43f5b8u: goto label_43f5b8;
        case 0x43f5bcu: goto label_43f5bc;
        case 0x43f5c0u: goto label_43f5c0;
        case 0x43f5c4u: goto label_43f5c4;
        case 0x43f5c8u: goto label_43f5c8;
        case 0x43f5ccu: goto label_43f5cc;
        case 0x43f5d0u: goto label_43f5d0;
        case 0x43f5d4u: goto label_43f5d4;
        case 0x43f5d8u: goto label_43f5d8;
        case 0x43f5dcu: goto label_43f5dc;
        case 0x43f5e0u: goto label_43f5e0;
        case 0x43f5e4u: goto label_43f5e4;
        case 0x43f5e8u: goto label_43f5e8;
        case 0x43f5ecu: goto label_43f5ec;
        case 0x43f5f0u: goto label_43f5f0;
        case 0x43f5f4u: goto label_43f5f4;
        case 0x43f5f8u: goto label_43f5f8;
        case 0x43f5fcu: goto label_43f5fc;
        case 0x43f600u: goto label_43f600;
        case 0x43f604u: goto label_43f604;
        case 0x43f608u: goto label_43f608;
        case 0x43f60cu: goto label_43f60c;
        case 0x43f610u: goto label_43f610;
        case 0x43f614u: goto label_43f614;
        case 0x43f618u: goto label_43f618;
        case 0x43f61cu: goto label_43f61c;
        case 0x43f620u: goto label_43f620;
        case 0x43f624u: goto label_43f624;
        case 0x43f628u: goto label_43f628;
        case 0x43f62cu: goto label_43f62c;
        case 0x43f630u: goto label_43f630;
        case 0x43f634u: goto label_43f634;
        case 0x43f638u: goto label_43f638;
        case 0x43f63cu: goto label_43f63c;
        case 0x43f640u: goto label_43f640;
        case 0x43f644u: goto label_43f644;
        case 0x43f648u: goto label_43f648;
        case 0x43f64cu: goto label_43f64c;
        case 0x43f650u: goto label_43f650;
        case 0x43f654u: goto label_43f654;
        case 0x43f658u: goto label_43f658;
        case 0x43f65cu: goto label_43f65c;
        case 0x43f660u: goto label_43f660;
        case 0x43f664u: goto label_43f664;
        case 0x43f668u: goto label_43f668;
        case 0x43f66cu: goto label_43f66c;
        case 0x43f670u: goto label_43f670;
        case 0x43f674u: goto label_43f674;
        case 0x43f678u: goto label_43f678;
        case 0x43f67cu: goto label_43f67c;
        case 0x43f680u: goto label_43f680;
        case 0x43f684u: goto label_43f684;
        case 0x43f688u: goto label_43f688;
        case 0x43f68cu: goto label_43f68c;
        case 0x43f690u: goto label_43f690;
        case 0x43f694u: goto label_43f694;
        case 0x43f698u: goto label_43f698;
        case 0x43f69cu: goto label_43f69c;
        case 0x43f6a0u: goto label_43f6a0;
        case 0x43f6a4u: goto label_43f6a4;
        case 0x43f6a8u: goto label_43f6a8;
        case 0x43f6acu: goto label_43f6ac;
        case 0x43f6b0u: goto label_43f6b0;
        case 0x43f6b4u: goto label_43f6b4;
        case 0x43f6b8u: goto label_43f6b8;
        case 0x43f6bcu: goto label_43f6bc;
        case 0x43f6c0u: goto label_43f6c0;
        case 0x43f6c4u: goto label_43f6c4;
        case 0x43f6c8u: goto label_43f6c8;
        case 0x43f6ccu: goto label_43f6cc;
        case 0x43f6d0u: goto label_43f6d0;
        case 0x43f6d4u: goto label_43f6d4;
        case 0x43f6d8u: goto label_43f6d8;
        case 0x43f6dcu: goto label_43f6dc;
        case 0x43f6e0u: goto label_43f6e0;
        case 0x43f6e4u: goto label_43f6e4;
        case 0x43f6e8u: goto label_43f6e8;
        case 0x43f6ecu: goto label_43f6ec;
        case 0x43f6f0u: goto label_43f6f0;
        case 0x43f6f4u: goto label_43f6f4;
        case 0x43f6f8u: goto label_43f6f8;
        case 0x43f6fcu: goto label_43f6fc;
        case 0x43f700u: goto label_43f700;
        case 0x43f704u: goto label_43f704;
        case 0x43f708u: goto label_43f708;
        case 0x43f70cu: goto label_43f70c;
        default: break;
    }

    ctx->pc = 0x43e7b0u;

label_43e7b0:
    // 0x43e7b0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x43e7b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_43e7b4:
    // 0x43e7b4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x43e7b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_43e7b8:
    // 0x43e7b8: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x43e7b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_43e7bc:
    // 0x43e7bc: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x43e7bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_43e7c0:
    // 0x43e7c0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x43e7c0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_43e7c4:
    // 0x43e7c4: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x43e7c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_43e7c8:
    // 0x43e7c8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x43e7c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_43e7cc:
    // 0x43e7cc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x43e7ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_43e7d0:
    // 0x43e7d0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x43e7d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_43e7d4:
    // 0x43e7d4: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x43e7d4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_43e7d8:
    // 0x43e7d8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x43e7d8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_43e7dc:
    // 0x43e7dc: 0x908300e8  lbu         $v1, 0xE8($a0)
    ctx->pc = 0x43e7dcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 232)));
label_43e7e0:
    // 0x43e7e0: 0x106000e4  beqz        $v1, . + 4 + (0xE4 << 2)
label_43e7e4:
    if (ctx->pc == 0x43E7E4u) {
        ctx->pc = 0x43E7E4u;
            // 0x43e7e4: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43E7E8u;
        goto label_43e7e8;
    }
    ctx->pc = 0x43E7E0u;
    {
        const bool branch_taken_0x43e7e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x43E7E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43E7E0u;
            // 0x43e7e4: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43e7e0) {
            ctx->pc = 0x43EB74u;
            goto label_43eb74;
        }
    }
    ctx->pc = 0x43E7E8u;
label_43e7e8:
    // 0x43e7e8: 0x92a30090  lbu         $v1, 0x90($s5)
    ctx->pc = 0x43e7e8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 144)));
label_43e7ec:
    // 0x43e7ec: 0x506000e2  beql        $v1, $zero, . + 4 + (0xE2 << 2)
label_43e7f0:
    if (ctx->pc == 0x43E7F0u) {
        ctx->pc = 0x43E7F0u;
            // 0x43e7f0: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->pc = 0x43E7F4u;
        goto label_43e7f4;
    }
    ctx->pc = 0x43E7ECu;
    {
        const bool branch_taken_0x43e7ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x43e7ec) {
            ctx->pc = 0x43E7F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x43E7ECu;
            // 0x43e7f0: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x43EB78u;
            goto label_43eb78;
        }
    }
    ctx->pc = 0x43E7F4u;
label_43e7f4:
    // 0x43e7f4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x43e7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_43e7f8:
    // 0x43e7f8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x43e7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_43e7fc:
    // 0x43e7fc: 0x8c73e378  lw          $s3, -0x1C88($v1)
    ctx->pc = 0x43e7fcu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
label_43e800:
    // 0x43e800: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x43e800u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_43e804:
    // 0x43e804: 0x8c5189f0  lw          $s1, -0x7610($v0)
    ctx->pc = 0x43e804u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_43e808:
    // 0x43e808: 0xc04cce4  jal         func_133390
label_43e80c:
    if (ctx->pc == 0x43E80Cu) {
        ctx->pc = 0x43E80Cu;
            // 0x43e80c: 0x26a500f0  addiu       $a1, $s5, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 240));
        ctx->pc = 0x43E810u;
        goto label_43e810;
    }
    ctx->pc = 0x43E808u;
    SET_GPR_U32(ctx, 31, 0x43E810u);
    ctx->pc = 0x43E80Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43E808u;
            // 0x43e80c: 0x26a500f0  addiu       $a1, $s5, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133390u;
    if (runtime->hasFunction(0x133390u)) {
        auto targetFn = runtime->lookupFunction(0x133390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43E810u; }
        if (ctx->pc != 0x43E810u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133390_0x133390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43E810u; }
        if (ctx->pc != 0x43E810u) { return; }
    }
    ctx->pc = 0x43E810u;
label_43e810:
    // 0x43e810: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x43e810u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_43e814:
    // 0x43e814: 0x26a400f0  addiu       $a0, $s5, 0xF0
    ctx->pc = 0x43e814u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 240));
label_43e818:
    // 0x43e818: 0xc04ce80  jal         func_133A00
label_43e81c:
    if (ctx->pc == 0x43E81Cu) {
        ctx->pc = 0x43E81Cu;
            // 0x43e81c: 0x24a5d310  addiu       $a1, $a1, -0x2CF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955792));
        ctx->pc = 0x43E820u;
        goto label_43e820;
    }
    ctx->pc = 0x43E818u;
    SET_GPR_U32(ctx, 31, 0x43E820u);
    ctx->pc = 0x43E81Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43E818u;
            // 0x43e81c: 0x24a5d310  addiu       $a1, $a1, -0x2CF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955792));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43E820u; }
        if (ctx->pc != 0x43E820u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43E820u; }
        if (ctx->pc != 0x43E820u) { return; }
    }
    ctx->pc = 0x43E820u;
label_43e820:
    // 0x43e820: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x43e820u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
label_43e824:
    // 0x43e824: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x43e824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_43e828:
    // 0x43e828: 0x26a500f0  addiu       $a1, $s5, 0xF0
    ctx->pc = 0x43e828u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 240));
label_43e82c:
    // 0x43e82c: 0xc04cca0  jal         func_133280
label_43e830:
    if (ctx->pc == 0x43E830u) {
        ctx->pc = 0x43E830u;
            // 0x43e830: 0x24c6d300  addiu       $a2, $a2, -0x2D00 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294955776));
        ctx->pc = 0x43E834u;
        goto label_43e834;
    }
    ctx->pc = 0x43E82Cu;
    SET_GPR_U32(ctx, 31, 0x43E834u);
    ctx->pc = 0x43E830u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43E82Cu;
            // 0x43e830: 0x24c6d300  addiu       $a2, $a2, -0x2D00 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294955776));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43E834u; }
        if (ctx->pc != 0x43E834u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43E834u; }
        if (ctx->pc != 0x43E834u) { return; }
    }
    ctx->pc = 0x43E834u;
label_43e834:
    // 0x43e834: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x43e834u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_43e838:
    // 0x43e838: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x43e838u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_43e83c:
    // 0x43e83c: 0x24a5d300  addiu       $a1, $a1, -0x2D00
    ctx->pc = 0x43e83cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955776));
label_43e840:
    // 0x43e840: 0xc04cc08  jal         func_133020
label_43e844:
    if (ctx->pc == 0x43E844u) {
        ctx->pc = 0x43E844u;
            // 0x43e844: 0xafa00094  sw          $zero, 0x94($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 0));
        ctx->pc = 0x43E848u;
        goto label_43e848;
    }
    ctx->pc = 0x43E840u;
    SET_GPR_U32(ctx, 31, 0x43E848u);
    ctx->pc = 0x43E844u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43E840u;
            // 0x43e844: 0xafa00094  sw          $zero, 0x94($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133020u;
    if (runtime->hasFunction(0x133020u)) {
        auto targetFn = runtime->lookupFunction(0x133020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43E848u; }
        if (ctx->pc != 0x43E848u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133020_0x133020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43E848u; }
        if (ctx->pc != 0x43E848u) { return; }
    }
    ctx->pc = 0x43E848u;
label_43e848:
    // 0x43e848: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x43e848u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_43e84c:
    // 0x43e84c: 0xc04cc14  jal         func_133050
label_43e850:
    if (ctx->pc == 0x43E850u) {
        ctx->pc = 0x43E850u;
            // 0x43e850: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x43E854u;
        goto label_43e854;
    }
    ctx->pc = 0x43E84Cu;
    SET_GPR_U32(ctx, 31, 0x43E854u);
    ctx->pc = 0x43E850u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43E84Cu;
            // 0x43e850: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133050u;
    if (runtime->hasFunction(0x133050u)) {
        auto targetFn = runtime->lookupFunction(0x133050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43E854u; }
        if (ctx->pc != 0x43E854u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133050_0x133050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43E854u; }
        if (ctx->pc != 0x43E854u) { return; }
    }
    ctx->pc = 0x43E854u;
label_43e854:
    // 0x43e854: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x43e854u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
label_43e858:
    // 0x43e858: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x43e858u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_43e85c:
    // 0x43e85c: 0xc04cc14  jal         func_133050
label_43e860:
    if (ctx->pc == 0x43E860u) {
        ctx->pc = 0x43E860u;
            // 0x43e860: 0x2484d300  addiu       $a0, $a0, -0x2D00 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955776));
        ctx->pc = 0x43E864u;
        goto label_43e864;
    }
    ctx->pc = 0x43E85Cu;
    SET_GPR_U32(ctx, 31, 0x43E864u);
    ctx->pc = 0x43E860u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43E85Cu;
            // 0x43e860: 0x2484d300  addiu       $a0, $a0, -0x2D00 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955776));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133050u;
    if (runtime->hasFunction(0x133050u)) {
        auto targetFn = runtime->lookupFunction(0x133050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43E864u; }
        if (ctx->pc != 0x43E864u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133050_0x133050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43E864u; }
        if (ctx->pc != 0x43E864u) { return; }
    }
    ctx->pc = 0x43E864u;
label_43e864:
    // 0x43e864: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x43e864u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_43e868:
    // 0x43e868: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x43e868u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_43e86c:
    // 0x43e86c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x43e86cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_43e870:
    // 0x43e870: 0x4600a843  div.s       $f1, $f21, $f0
    ctx->pc = 0x43e870u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[21] * 0.0f); } else ctx->f[1] = ctx->f[21] / ctx->f[0];
label_43e874:
    // 0x43e874: 0x0  nop
    ctx->pc = 0x43e874u;
    // NOP
label_43e878:
    // 0x43e878: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x43e878u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_43e87c:
    // 0x43e87c: 0x0  nop
    ctx->pc = 0x43e87cu;
    // NOP
label_43e880:
    // 0x43e880: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x43e880u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_43e884:
    // 0x43e884: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_43e888:
    if (ctx->pc == 0x43E888u) {
        ctx->pc = 0x43E888u;
            // 0x43e888: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->pc = 0x43E88Cu;
        goto label_43e88c;
    }
    ctx->pc = 0x43E884u;
    {
        const bool branch_taken_0x43e884 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x43e884) {
            ctx->pc = 0x43E888u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x43E884u;
            // 0x43e888: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x43E894u;
            goto label_43e894;
        }
    }
    ctx->pc = 0x43E88Cu;
label_43e88c:
    // 0x43e88c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x43e88cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_43e890:
    // 0x43e890: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x43e890u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_43e894:
    // 0x43e894: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x43e894u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_43e898:
    // 0x43e898: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x43e898u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_43e89c:
    // 0x43e89c: 0x0  nop
    ctx->pc = 0x43e89cu;
    // NOP
label_43e8a0:
    // 0x43e8a0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x43e8a0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_43e8a4:
    // 0x43e8a4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_43e8a8:
    if (ctx->pc == 0x43E8A8u) {
        ctx->pc = 0x43E8A8u;
            // 0x43e8a8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x43E8ACu;
        goto label_43e8ac;
    }
    ctx->pc = 0x43E8A4u;
    {
        const bool branch_taken_0x43e8a4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x43E8A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43E8A4u;
            // 0x43e8a8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43e8a4) {
            ctx->pc = 0x43E8B0u;
            goto label_43e8b0;
        }
    }
    ctx->pc = 0x43E8ACu;
label_43e8ac:
    // 0x43e8ac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x43e8acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_43e8b0:
    // 0x43e8b0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x43e8b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_43e8b4:
    // 0x43e8b4: 0x38830001  xori        $v1, $a0, 0x1
    ctx->pc = 0x43e8b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
label_43e8b8:
    // 0x43e8b8: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x43e8b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_43e8bc:
    // 0x43e8bc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x43e8bcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_43e8c0:
    // 0x43e8c0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x43e8c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_43e8c4:
    // 0x43e8c4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x43e8c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_43e8c8:
    // 0x43e8c8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x43e8c8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_43e8cc:
    // 0x43e8cc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x43e8ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_43e8d0:
    // 0x43e8d0: 0x0  nop
    ctx->pc = 0x43e8d0u;
    // NOP
label_43e8d4:
    // 0x43e8d4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x43e8d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_43e8d8:
    // 0x43e8d8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x43e8d8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_43e8dc:
    // 0x43e8dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x43e8dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_43e8e0:
    // 0x43e8e0: 0x0  nop
    ctx->pc = 0x43e8e0u;
    // NOP
label_43e8e4:
    // 0x43e8e4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x43e8e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_43e8e8:
    // 0x43e8e8: 0xc0477fe  jal         func_11DFF8
label_43e8ec:
    if (ctx->pc == 0x43E8ECu) {
        ctx->pc = 0x43E8ECu;
            // 0x43e8ec: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x43E8F0u;
        goto label_43e8f0;
    }
    ctx->pc = 0x43E8E8u;
    SET_GPR_U32(ctx, 31, 0x43E8F0u);
    ctx->pc = 0x43E8ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43E8E8u;
            // 0x43e8ec: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DFF8u;
    if (runtime->hasFunction(0x11DFF8u)) {
        auto targetFn = runtime->lookupFunction(0x11DFF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43E8F0u; }
        if (ctx->pc != 0x43E8F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DFF8_0x11dff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43E8F0u; }
        if (ctx->pc != 0x43E8F0u) { return; }
    }
    ctx->pc = 0x43E8F0u;
label_43e8f0:
    // 0x43e8f0: 0xc7a20090  lwc1        $f2, 0x90($sp)
    ctx->pc = 0x43e8f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_43e8f4:
    // 0x43e8f4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x43e8f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_43e8f8:
    // 0x43e8f8: 0x0  nop
    ctx->pc = 0x43e8f8u;
    // NOP
label_43e8fc:
    // 0x43e8fc: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x43e8fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_43e900:
    // 0x43e900: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_43e904:
    if (ctx->pc == 0x43E904u) {
        ctx->pc = 0x43E904u;
            // 0x43e904: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x43E908u;
        goto label_43e908;
    }
    ctx->pc = 0x43E900u;
    {
        const bool branch_taken_0x43e900 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x43E904u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43E900u;
            // 0x43e904: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43e900) {
            ctx->pc = 0x43E90Cu;
            goto label_43e90c;
        }
    }
    ctx->pc = 0x43E908u;
label_43e908:
    // 0x43e908: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x43e908u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_43e90c:
    // 0x43e90c: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_43e910:
    if (ctx->pc == 0x43E910u) {
        ctx->pc = 0x43E910u;
            // 0x43e910: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x43E914u;
        goto label_43e914;
    }
    ctx->pc = 0x43E90Cu;
    {
        const bool branch_taken_0x43e90c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x43e90c) {
            ctx->pc = 0x43E910u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x43E90Cu;
            // 0x43e910: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x43E920u;
            goto label_43e920;
        }
    }
    ctx->pc = 0x43E914u;
label_43e914:
    // 0x43e914: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x43e914u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_43e918:
    // 0x43e918: 0x10000007  b           . + 4 + (0x7 << 2)
label_43e91c:
    if (ctx->pc == 0x43E91Cu) {
        ctx->pc = 0x43E91Cu;
            // 0x43e91c: 0x46800960  cvt.s.w     $f5, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x43E920u;
        goto label_43e920;
    }
    ctx->pc = 0x43E918u;
    {
        const bool branch_taken_0x43e918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43E91Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43E918u;
            // 0x43e91c: 0x46800960  cvt.s.w     $f5, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x43e918) {
            ctx->pc = 0x43E938u;
            goto label_43e938;
        }
    }
    ctx->pc = 0x43E920u;
label_43e920:
    // 0x43e920: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x43e920u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_43e924:
    // 0x43e924: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x43e924u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_43e928:
    // 0x43e928: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x43e928u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_43e92c:
    // 0x43e92c: 0x0  nop
    ctx->pc = 0x43e92cu;
    // NOP
label_43e930:
    // 0x43e930: 0x46800960  cvt.s.w     $f5, $f1
    ctx->pc = 0x43e930u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
label_43e934:
    // 0x43e934: 0x46052940  add.s       $f5, $f5, $f5
    ctx->pc = 0x43e934u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[5]);
label_43e938:
    // 0x43e938: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x43e938u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_43e93c:
    // 0x43e93c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x43e93cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_43e940:
    // 0x43e940: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x43e940u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_43e944:
    // 0x43e944: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x43e944u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_43e948:
    // 0x43e948: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x43e948u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_43e94c:
    // 0x43e94c: 0x46031018  adda.s      $f2, $f3
    ctx->pc = 0x43e94cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_43e950:
    // 0x43e950: 0x3c024622  lui         $v0, 0x4622
    ctx->pc = 0x43e950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17954 << 16));
label_43e954:
    // 0x43e954: 0x4605209d  msub.s      $f2, $f4, $f5
    ctx->pc = 0x43e954u;
    ctx->f[2] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[5]));
label_43e958:
    // 0x43e958: 0x3442f983  ori         $v0, $v0, 0xF983
    ctx->pc = 0x43e958u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63875);
label_43e95c:
    // 0x43e95c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x43e95cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_43e960:
    // 0x43e960: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x43e960u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_43e964:
    // 0x43e964: 0x0  nop
    ctx->pc = 0x43e964u;
    // NOP
label_43e968:
    // 0x43e968: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x43e968u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_43e96c:
    // 0x43e96c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x43e96cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_43e970:
    // 0x43e970: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x43e970u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_43e974:
    // 0x43e974: 0xc04f2b8  jal         func_13CAE0
label_43e978:
    if (ctx->pc == 0x43E978u) {
        ctx->pc = 0x43E978u;
            // 0x43e978: 0x26a400f0  addiu       $a0, $s5, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 240));
        ctx->pc = 0x43E97Cu;
        goto label_43e97c;
    }
    ctx->pc = 0x43E974u;
    SET_GPR_U32(ctx, 31, 0x43E97Cu);
    ctx->pc = 0x43E978u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43E974u;
            // 0x43e978: 0x26a400f0  addiu       $a0, $s5, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CAE0u;
    if (runtime->hasFunction(0x13CAE0u)) {
        auto targetFn = runtime->lookupFunction(0x13CAE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43E97Cu; }
        if (ctx->pc != 0x43E97Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CAE0_0x13cae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43E97Cu; }
        if (ctx->pc != 0x43E97Cu) { return; }
    }
    ctx->pc = 0x43E97Cu;
label_43e97c:
    // 0x43e97c: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x43e97cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_43e980:
    // 0x43e980: 0x3c024148  lui         $v0, 0x4148
    ctx->pc = 0x43e980u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16712 << 16));
label_43e984:
    // 0x43e984: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x43e984u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_43e988:
    // 0x43e988: 0x26a400f0  addiu       $a0, $s5, 0xF0
    ctx->pc = 0x43e988u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 240));
label_43e98c:
    // 0x43e98c: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x43e98cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_43e990:
    // 0x43e990: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x43e990u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_43e994:
    // 0x43e994: 0xc04ce80  jal         func_133A00
label_43e998:
    if (ctx->pc == 0x43E998u) {
        ctx->pc = 0x43E998u;
            // 0x43e998: 0xe7a00084  swc1        $f0, 0x84($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
        ctx->pc = 0x43E99Cu;
        goto label_43e99c;
    }
    ctx->pc = 0x43E994u;
    SET_GPR_U32(ctx, 31, 0x43E99Cu);
    ctx->pc = 0x43E998u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43E994u;
            // 0x43e998: 0xe7a00084  swc1        $f0, 0x84($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43E99Cu; }
        if (ctx->pc != 0x43E99Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43E99Cu; }
        if (ctx->pc != 0x43E99Cu) { return; }
    }
    ctx->pc = 0x43E99Cu;
label_43e99c:
    // 0x43e99c: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x43e99cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
label_43e9a0:
    // 0x43e9a0: 0x3c024128  lui         $v0, 0x4128
    ctx->pc = 0x43e9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16680 << 16));
label_43e9a4:
    // 0x43e9a4: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x43e9a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_43e9a8:
    // 0x43e9a8: 0x26a400f0  addiu       $a0, $s5, 0xF0
    ctx->pc = 0x43e9a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 240));
label_43e9ac:
    // 0x43e9ac: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x43e9acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_43e9b0:
    // 0x43e9b0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x43e9b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_43e9b4:
    // 0x43e9b4: 0xc04ce50  jal         func_133940
label_43e9b8:
    if (ctx->pc == 0x43E9B8u) {
        ctx->pc = 0x43E9B8u;
            // 0x43e9b8: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x43E9BCu;
        goto label_43e9bc;
    }
    ctx->pc = 0x43E9B4u;
    SET_GPR_U32(ctx, 31, 0x43E9BCu);
    ctx->pc = 0x43E9B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43E9B4u;
            // 0x43e9b8: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133940u;
    if (runtime->hasFunction(0x133940u)) {
        auto targetFn = runtime->lookupFunction(0x133940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43E9BCu; }
        if (ctx->pc != 0x43E9BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133940_0x133940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43E9BCu; }
        if (ctx->pc != 0x43E9BCu) { return; }
    }
    ctx->pc = 0x43E9BCu;
label_43e9bc:
    // 0x43e9bc: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x43e9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_43e9c0:
    // 0x43e9c0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x43e9c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_43e9c4:
    // 0x43e9c4: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x43e9c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_43e9c8:
    // 0x43e9c8: 0xc04e4a4  jal         func_139290
label_43e9cc:
    if (ctx->pc == 0x43E9CCu) {
        ctx->pc = 0x43E9CCu;
            // 0x43e9cc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43E9D0u;
        goto label_43e9d0;
    }
    ctx->pc = 0x43E9C8u;
    SET_GPR_U32(ctx, 31, 0x43E9D0u);
    ctx->pc = 0x43E9CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43E9C8u;
            // 0x43e9cc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43E9D0u; }
        if (ctx->pc != 0x43E9D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43E9D0u; }
        if (ctx->pc != 0x43E9D0u) { return; }
    }
    ctx->pc = 0x43E9D0u;
label_43e9d0:
    // 0x43e9d0: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x43e9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_43e9d4:
    // 0x43e9d4: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x43e9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
label_43e9d8:
    // 0x43e9d8: 0x34421001  ori         $v0, $v0, 0x1001
    ctx->pc = 0x43e9d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4097);
label_43e9dc:
    // 0x43e9dc: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x43e9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_43e9e0:
    // 0x43e9e0: 0x8c720004  lw          $s2, 0x4($v1)
    ctx->pc = 0x43e9e0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_43e9e4:
    // 0x43e9e4: 0x8e50003c  lw          $s0, 0x3C($s2)
    ctx->pc = 0x43e9e4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
label_43e9e8:
    // 0x43e9e8: 0xae42003c  sw          $v0, 0x3C($s2)
    ctx->pc = 0x43e9e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 2));
label_43e9ec:
    // 0x43e9ec: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x43e9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_43e9f0:
    // 0x43e9f0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x43e9f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_43e9f4:
    // 0x43e9f4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_43e9f8:
    if (ctx->pc == 0x43E9F8u) {
        ctx->pc = 0x43E9FCu;
        goto label_43e9fc;
    }
    ctx->pc = 0x43E9F4u;
    {
        const bool branch_taken_0x43e9f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x43e9f4) {
            ctx->pc = 0x43EA10u;
            goto label_43ea10;
        }
    }
    ctx->pc = 0x43E9FCu;
label_43e9fc:
    // 0x43e9fc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x43e9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_43ea00:
    // 0x43ea00: 0x9442eb70  lhu         $v0, -0x1490($v0)
    ctx->pc = 0x43ea00u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294962032)));
label_43ea04:
    // 0x43ea04: 0x304201ff  andi        $v0, $v0, 0x1FF
    ctx->pc = 0x43ea04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)511);
label_43ea08:
    // 0x43ea08: 0x10000005  b           . + 4 + (0x5 << 2)
label_43ea0c:
    if (ctx->pc == 0x43EA0Cu) {
        ctx->pc = 0x43EA0Cu;
            // 0x43ea0c: 0x21340  sll         $v0, $v0, 13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 13));
        ctx->pc = 0x43EA10u;
        goto label_43ea10;
    }
    ctx->pc = 0x43EA08u;
    {
        const bool branch_taken_0x43ea08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43EA0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43EA08u;
            // 0x43ea0c: 0x21340  sll         $v0, $v0, 13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43ea08) {
            ctx->pc = 0x43EA20u;
            goto label_43ea20;
        }
    }
    ctx->pc = 0x43EA10u;
label_43ea10:
    // 0x43ea10: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x43ea10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_43ea14:
    // 0x43ea14: 0x9442ece0  lhu         $v0, -0x1320($v0)
    ctx->pc = 0x43ea14u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294962400)));
label_43ea18:
    // 0x43ea18: 0x304201ff  andi        $v0, $v0, 0x1FF
    ctx->pc = 0x43ea18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)511);
label_43ea1c:
    // 0x43ea1c: 0x21340  sll         $v0, $v0, 13
    ctx->pc = 0x43ea1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 13));
label_43ea20:
    // 0x43ea20: 0x21b42  srl         $v1, $v0, 13
    ctx->pc = 0x43ea20u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 13));
label_43ea24:
    // 0x43ea24: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x43ea24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
label_43ea28:
    // 0x43ea28: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x43ea28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
label_43ea2c:
    // 0x43ea2c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x43ea2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_43ea30:
    // 0x43ea30: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x43ea30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
label_43ea34:
    // 0x43ea34: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x43ea34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_43ea38:
    // 0x43ea38: 0x3c02020a  lui         $v0, 0x20A
    ctx->pc = 0x43ea38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)522 << 16));
label_43ea3c:
    // 0x43ea3c: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x43ea3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_43ea40:
    // 0x43ea40: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x43ea40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_43ea44:
    // 0x43ea44: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x43ea44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_43ea48:
    // 0x43ea48: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x43ea48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
label_43ea4c:
    // 0x43ea4c: 0xfc44ce70  sd          $a0, -0x3190($v0)
    ctx->pc = 0x43ea4cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 4294954608), GPR_U64(ctx, 4));
label_43ea50:
    // 0x43ea50: 0xdc6357f0  ld          $v1, 0x57F0($v1)
    ctx->pc = 0x43ea50u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 22512)));
label_43ea54:
    // 0x43ea54: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x43ea54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_43ea58:
    // 0x43ea58: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x43ea58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_43ea5c:
    // 0x43ea5c: 0xc0574d8  jal         func_15D360
label_43ea60:
    if (ctx->pc == 0x43EA60u) {
        ctx->pc = 0x43EA60u;
            // 0x43ea60: 0xfc43ce78  sd          $v1, -0x3188($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 4294954616), GPR_U64(ctx, 3));
        ctx->pc = 0x43EA64u;
        goto label_43ea64;
    }
    ctx->pc = 0x43EA5Cu;
    SET_GPR_U32(ctx, 31, 0x43EA64u);
    ctx->pc = 0x43EA60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43EA5Cu;
            // 0x43ea60: 0xfc43ce78  sd          $v1, -0x3188($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 4294954616), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D360u;
    if (runtime->hasFunction(0x15D360u)) {
        auto targetFn = runtime->lookupFunction(0x15D360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43EA64u; }
        if (ctx->pc != 0x43EA64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D360_0x15d360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43EA64u; }
        if (ctx->pc != 0x43EA64u) { return; }
    }
    ctx->pc = 0x43EA64u;
label_43ea64:
    // 0x43ea64: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x43ea64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_43ea68:
    // 0x43ea68: 0x26a500f0  addiu       $a1, $s5, 0xF0
    ctx->pc = 0x43ea68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 240));
label_43ea6c:
    // 0x43ea6c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x43ea6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_43ea70:
    // 0x43ea70: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x43ea70u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_43ea74:
    // 0x43ea74: 0xc055234  jal         func_1548D0
label_43ea78:
    if (ctx->pc == 0x43EA78u) {
        ctx->pc = 0x43EA78u;
            // 0x43ea78: 0x240800c0  addiu       $t0, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->pc = 0x43EA7Cu;
        goto label_43ea7c;
    }
    ctx->pc = 0x43EA74u;
    SET_GPR_U32(ctx, 31, 0x43EA7Cu);
    ctx->pc = 0x43EA78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43EA74u;
            // 0x43ea78: 0x240800c0  addiu       $t0, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1548D0u;
    if (runtime->hasFunction(0x1548D0u)) {
        auto targetFn = runtime->lookupFunction(0x1548D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43EA7Cu; }
        if (ctx->pc != 0x43EA7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001548D0_0x1548d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43EA7Cu; }
        if (ctx->pc != 0x43EA7Cu) { return; }
    }
    ctx->pc = 0x43EA7Cu;
label_43ea7c:
    // 0x43ea7c: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x43ea7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_43ea80:
    // 0x43ea80: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x43ea80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_43ea84:
    // 0x43ea84: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_43ea88:
    if (ctx->pc == 0x43EA88u) {
        ctx->pc = 0x43EA8Cu;
        goto label_43ea8c;
    }
    ctx->pc = 0x43EA84u;
    {
        const bool branch_taken_0x43ea84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x43ea84) {
            ctx->pc = 0x43EAA0u;
            goto label_43eaa0;
        }
    }
    ctx->pc = 0x43EA8Cu;
label_43ea8c:
    // 0x43ea8c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x43ea8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_43ea90:
    // 0x43ea90: 0x9442eb70  lhu         $v0, -0x1490($v0)
    ctx->pc = 0x43ea90u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294962032)));
label_43ea94:
    // 0x43ea94: 0x304201ff  andi        $v0, $v0, 0x1FF
    ctx->pc = 0x43ea94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)511);
label_43ea98:
    // 0x43ea98: 0x10000005  b           . + 4 + (0x5 << 2)
label_43ea9c:
    if (ctx->pc == 0x43EA9Cu) {
        ctx->pc = 0x43EA9Cu;
            // 0x43ea9c: 0x21340  sll         $v0, $v0, 13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 13));
        ctx->pc = 0x43EAA0u;
        goto label_43eaa0;
    }
    ctx->pc = 0x43EA98u;
    {
        const bool branch_taken_0x43ea98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43EA9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43EA98u;
            // 0x43ea9c: 0x21340  sll         $v0, $v0, 13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43ea98) {
            ctx->pc = 0x43EAB0u;
            goto label_43eab0;
        }
    }
    ctx->pc = 0x43EAA0u;
label_43eaa0:
    // 0x43eaa0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x43eaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_43eaa4:
    // 0x43eaa4: 0x9442ece0  lhu         $v0, -0x1320($v0)
    ctx->pc = 0x43eaa4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294962400)));
label_43eaa8:
    // 0x43eaa8: 0x304201ff  andi        $v0, $v0, 0x1FF
    ctx->pc = 0x43eaa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)511);
label_43eaac:
    // 0x43eaac: 0x21340  sll         $v0, $v0, 13
    ctx->pc = 0x43eaacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 13));
label_43eab0:
    // 0x43eab0: 0x21b42  srl         $v1, $v0, 13
    ctx->pc = 0x43eab0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 13));
label_43eab4:
    // 0x43eab4: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x43eab4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
label_43eab8:
    // 0x43eab8: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x43eab8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
label_43eabc:
    // 0x43eabc: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x43eabcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
label_43eac0:
    // 0x43eac0: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x43eac0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
label_43eac4:
    // 0x43eac4: 0x3c02020a  lui         $v0, 0x20A
    ctx->pc = 0x43eac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)522 << 16));
label_43eac8:
    // 0x43eac8: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x43eac8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_43eacc:
    // 0x43eacc: 0x442025  or          $a0, $v0, $a0
    ctx->pc = 0x43eaccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_43ead0:
    // 0x43ead0: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x43ead0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
label_43ead4:
    // 0x43ead4: 0xdc4557f0  ld          $a1, 0x57F0($v0)
    ctx->pc = 0x43ead4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 22512)));
label_43ead8:
    // 0x43ead8: 0x70042389  pcpyld      $a0, $zero, $a0
    ctx->pc = 0x43ead8u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 4)));
label_43eadc:
    // 0x43eadc: 0xc42025  or          $a0, $a2, $a0
    ctx->pc = 0x43eadcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
label_43eae0:
    // 0x43eae0: 0xfc64ce70  sd          $a0, -0x3190($v1)
    ctx->pc = 0x43eae0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 4294954608), GPR_U64(ctx, 4));
label_43eae4:
    // 0x43eae4: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x43eae4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_43eae8:
    // 0x43eae8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x43eae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_43eaec:
    // 0x43eaec: 0xc0574d8  jal         func_15D360
label_43eaf0:
    if (ctx->pc == 0x43EAF0u) {
        ctx->pc = 0x43EAF0u;
            // 0x43eaf0: 0xfc45ce78  sd          $a1, -0x3188($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 4294954616), GPR_U64(ctx, 5));
        ctx->pc = 0x43EAF4u;
        goto label_43eaf4;
    }
    ctx->pc = 0x43EAECu;
    SET_GPR_U32(ctx, 31, 0x43EAF4u);
    ctx->pc = 0x43EAF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43EAECu;
            // 0x43eaf0: 0xfc45ce78  sd          $a1, -0x3188($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 4294954616), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D360u;
    if (runtime->hasFunction(0x15D360u)) {
        auto targetFn = runtime->lookupFunction(0x15D360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43EAF4u; }
        if (ctx->pc != 0x43EAF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D360_0x15d360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43EAF4u; }
        if (ctx->pc != 0x43EAF4u) { return; }
    }
    ctx->pc = 0x43EAF4u;
label_43eaf4:
    // 0x43eaf4: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x43eaf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
label_43eaf8:
    // 0x43eaf8: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x43eaf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_43eafc:
    // 0x43eafc: 0x34425001  ori         $v0, $v0, 0x5001
    ctx->pc = 0x43eafcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20481);
label_43eb00:
    // 0x43eb00: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x43eb00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_43eb04:
    // 0x43eb04: 0xae42003c  sw          $v0, 0x3C($s2)
    ctx->pc = 0x43eb04u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 2));
label_43eb08:
    // 0x43eb08: 0xc04a508  jal         func_129420
label_43eb0c:
    if (ctx->pc == 0x43EB0Cu) {
        ctx->pc = 0x43EB0Cu;
            // 0x43eb0c: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->pc = 0x43EB10u;
        goto label_43eb10;
    }
    ctx->pc = 0x43EB08u;
    SET_GPR_U32(ctx, 31, 0x43EB10u);
    ctx->pc = 0x43EB0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43EB08u;
            // 0x43eb0c: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43EB10u; }
        if (ctx->pc != 0x43EB10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43EB10u; }
        if (ctx->pc != 0x43EB10u) { return; }
    }
    ctx->pc = 0x43EB10u;
label_43eb10:
    // 0x43eb10: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x43eb10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_43eb14:
    // 0x43eb14: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x43eb14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_43eb18:
    // 0x43eb18: 0xc04a576  jal         func_1295D8
label_43eb1c:
    if (ctx->pc == 0x43EB1Cu) {
        ctx->pc = 0x43EB1Cu;
            // 0x43eb1c: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->pc = 0x43EB20u;
        goto label_43eb20;
    }
    ctx->pc = 0x43EB18u;
    SET_GPR_U32(ctx, 31, 0x43EB20u);
    ctx->pc = 0x43EB1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43EB18u;
            // 0x43eb1c: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43EB20u; }
        if (ctx->pc != 0x43EB20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43EB20u; }
        if (ctx->pc != 0x43EB20u) { return; }
    }
    ctx->pc = 0x43EB20u;
label_43eb20:
    // 0x43eb20: 0x3c023e34  lui         $v0, 0x3E34
    ctx->pc = 0x43eb20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15924 << 16));
label_43eb24:
    // 0x43eb24: 0x3442b4b4  ori         $v0, $v0, 0xB4B4
    ctx->pc = 0x43eb24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46260);
label_43eb28:
    // 0x43eb28: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x43eb28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_43eb2c:
    // 0x43eb2c: 0xc054c3c  jal         func_1530F0
label_43eb30:
    if (ctx->pc == 0x43EB30u) {
        ctx->pc = 0x43EB30u;
            // 0x43eb30: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x43EB34u;
        goto label_43eb34;
    }
    ctx->pc = 0x43EB2Cu;
    SET_GPR_U32(ctx, 31, 0x43EB34u);
    ctx->pc = 0x43EB30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43EB2Cu;
            // 0x43eb30: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1530F0u;
    if (runtime->hasFunction(0x1530F0u)) {
        auto targetFn = runtime->lookupFunction(0x1530F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43EB34u; }
        if (ctx->pc != 0x43EB34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001530F0_0x1530f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43EB34u; }
        if (ctx->pc != 0x43EB34u) { return; }
    }
    ctx->pc = 0x43EB34u;
label_43eb34:
    // 0x43eb34: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x43eb34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_43eb38:
    // 0x43eb38: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x43eb38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
label_43eb3c:
    // 0x43eb3c: 0x26a500f0  addiu       $a1, $s5, 0xF0
    ctx->pc = 0x43eb3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 240));
label_43eb40:
    // 0x43eb40: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x43eb40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_43eb44:
    // 0x43eb44: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x43eb44u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_43eb48:
    // 0x43eb48: 0xc055234  jal         func_1548D0
label_43eb4c:
    if (ctx->pc == 0x43EB4Cu) {
        ctx->pc = 0x43EB4Cu;
            // 0x43eb4c: 0x34480080  ori         $t0, $v0, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
        ctx->pc = 0x43EB50u;
        goto label_43eb50;
    }
    ctx->pc = 0x43EB48u;
    SET_GPR_U32(ctx, 31, 0x43EB50u);
    ctx->pc = 0x43EB4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43EB48u;
            // 0x43eb4c: 0x34480080  ori         $t0, $v0, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1548D0u;
    if (runtime->hasFunction(0x1548D0u)) {
        auto targetFn = runtime->lookupFunction(0x1548D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43EB50u; }
        if (ctx->pc != 0x43EB50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001548D0_0x1548d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43EB50u; }
        if (ctx->pc != 0x43EB50u) { return; }
    }
    ctx->pc = 0x43EB50u;
label_43eb50:
    // 0x43eb50: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x43eb50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_43eb54:
    // 0x43eb54: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x43eb54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_43eb58:
    // 0x43eb58: 0xc054c3c  jal         func_1530F0
label_43eb5c:
    if (ctx->pc == 0x43EB5Cu) {
        ctx->pc = 0x43EB5Cu;
            // 0x43eb5c: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x43EB60u;
        goto label_43eb60;
    }
    ctx->pc = 0x43EB58u;
    SET_GPR_U32(ctx, 31, 0x43EB60u);
    ctx->pc = 0x43EB5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43EB58u;
            // 0x43eb5c: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1530F0u;
    if (runtime->hasFunction(0x1530F0u)) {
        auto targetFn = runtime->lookupFunction(0x1530F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43EB60u; }
        if (ctx->pc != 0x43EB60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001530F0_0x1530f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43EB60u; }
        if (ctx->pc != 0x43EB60u) { return; }
    }
    ctx->pc = 0x43EB60u;
label_43eb60:
    // 0x43eb60: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x43eb60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_43eb64:
    // 0x43eb64: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x43eb64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_43eb68:
    // 0x43eb68: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x43eb68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_43eb6c:
    // 0x43eb6c: 0xc04a508  jal         func_129420
label_43eb70:
    if (ctx->pc == 0x43EB70u) {
        ctx->pc = 0x43EB70u;
            // 0x43eb70: 0xae50003c  sw          $s0, 0x3C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 16));
        ctx->pc = 0x43EB74u;
        goto label_43eb74;
    }
    ctx->pc = 0x43EB6Cu;
    SET_GPR_U32(ctx, 31, 0x43EB74u);
    ctx->pc = 0x43EB70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43EB6Cu;
            // 0x43eb70: 0xae50003c  sw          $s0, 0x3C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43EB74u; }
        if (ctx->pc != 0x43EB74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43EB74u; }
        if (ctx->pc != 0x43EB74u) { return; }
    }
    ctx->pc = 0x43EB74u;
label_43eb74:
    // 0x43eb74: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x43eb74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_43eb78:
    // 0x43eb78: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x43eb78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_43eb7c:
    // 0x43eb7c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x43eb7cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_43eb80:
    // 0x43eb80: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x43eb80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_43eb84:
    // 0x43eb84: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x43eb84u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_43eb88:
    // 0x43eb88: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x43eb88u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_43eb8c:
    // 0x43eb8c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x43eb8cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_43eb90:
    // 0x43eb90: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x43eb90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_43eb94:
    // 0x43eb94: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x43eb94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_43eb98:
    // 0x43eb98: 0x3e00008  jr          $ra
label_43eb9c:
    if (ctx->pc == 0x43EB9Cu) {
        ctx->pc = 0x43EB9Cu;
            // 0x43eb9c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x43EBA0u;
        goto label_43eba0;
    }
    ctx->pc = 0x43EB98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43EB9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43EB98u;
            // 0x43eb9c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x43EBA0u;
label_43eba0:
    // 0x43eba0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x43eba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_43eba4:
    // 0x43eba4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x43eba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_43eba8:
    // 0x43eba8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x43eba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_43ebac:
    // 0x43ebac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x43ebacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_43ebb0:
    // 0x43ebb0: 0x8c90009c  lw          $s0, 0x9C($a0)
    ctx->pc = 0x43ebb0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 156)));
label_43ebb4:
    // 0x43ebb4: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
label_43ebb8:
    if (ctx->pc == 0x43EBB8u) {
        ctx->pc = 0x43EBB8u;
            // 0x43ebb8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43EBBCu;
        goto label_43ebbc;
    }
    ctx->pc = 0x43EBB4u;
    {
        const bool branch_taken_0x43ebb4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x43EBB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43EBB4u;
            // 0x43ebb8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43ebb4) {
            ctx->pc = 0x43EBECu;
            goto label_43ebec;
        }
    }
    ctx->pc = 0x43EBBCu;
label_43ebbc:
    // 0x43ebbc: 0xc04008c  jal         func_100230
label_43ebc0:
    if (ctx->pc == 0x43EBC0u) {
        ctx->pc = 0x43EBC0u;
            // 0x43ebc0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x43EBC4u;
        goto label_43ebc4;
    }
    ctx->pc = 0x43EBBCu;
    SET_GPR_U32(ctx, 31, 0x43EBC4u);
    ctx->pc = 0x43EBC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43EBBCu;
            // 0x43ebc0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100230u;
    if (runtime->hasFunction(0x100230u)) {
        auto targetFn = runtime->lookupFunction(0x100230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43EBC4u; }
        if (ctx->pc != 0x43EBC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100230_0x100230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43EBC4u; }
        if (ctx->pc != 0x43EBC4u) { return; }
    }
    ctx->pc = 0x43EBC4u;
label_43ebc4:
    // 0x43ebc4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x43ebc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_43ebc8:
    // 0x43ebc8: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x43ebc8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
label_43ebcc:
    // 0x43ebcc: 0xc0407c0  jal         func_101F00
label_43ebd0:
    if (ctx->pc == 0x43EBD0u) {
        ctx->pc = 0x43EBD0u;
            // 0x43ebd0: 0x24a5b410  addiu       $a1, $a1, -0x4BF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947856));
        ctx->pc = 0x43EBD4u;
        goto label_43ebd4;
    }
    ctx->pc = 0x43EBCCu;
    SET_GPR_U32(ctx, 31, 0x43EBD4u);
    ctx->pc = 0x43EBD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43EBCCu;
            // 0x43ebd0: 0x24a5b410  addiu       $a1, $a1, -0x4BF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947856));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43EBD4u; }
        if (ctx->pc != 0x43EBD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43EBD4u; }
        if (ctx->pc != 0x43EBD4u) { return; }
    }
    ctx->pc = 0x43EBD4u;
label_43ebd4:
    // 0x43ebd4: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x43ebd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_43ebd8:
    // 0x43ebd8: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x43ebd8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
label_43ebdc:
    // 0x43ebdc: 0xc0407c0  jal         func_101F00
label_43ebe0:
    if (ctx->pc == 0x43EBE0u) {
        ctx->pc = 0x43EBE0u;
            // 0x43ebe0: 0x24a5b390  addiu       $a1, $a1, -0x4C70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947728));
        ctx->pc = 0x43EBE4u;
        goto label_43ebe4;
    }
    ctx->pc = 0x43EBDCu;
    SET_GPR_U32(ctx, 31, 0x43EBE4u);
    ctx->pc = 0x43EBE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43EBDCu;
            // 0x43ebe0: 0x24a5b390  addiu       $a1, $a1, -0x4C70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947728));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43EBE4u; }
        if (ctx->pc != 0x43EBE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43EBE4u; }
        if (ctx->pc != 0x43EBE4u) { return; }
    }
    ctx->pc = 0x43EBE4u;
label_43ebe4:
    // 0x43ebe4: 0xc0400a8  jal         func_1002A0
label_43ebe8:
    if (ctx->pc == 0x43EBE8u) {
        ctx->pc = 0x43EBE8u;
            // 0x43ebe8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43EBECu;
        goto label_43ebec;
    }
    ctx->pc = 0x43EBE4u;
    SET_GPR_U32(ctx, 31, 0x43EBECu);
    ctx->pc = 0x43EBE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43EBE4u;
            // 0x43ebe8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43EBECu; }
        if (ctx->pc != 0x43EBECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43EBECu; }
        if (ctx->pc != 0x43EBECu) { return; }
    }
    ctx->pc = 0x43EBECu;
label_43ebec:
    // 0x43ebec: 0xae20009c  sw          $zero, 0x9C($s1)
    ctx->pc = 0x43ebecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 0));
label_43ebf0:
    // 0x43ebf0: 0x8e2400e4  lw          $a0, 0xE4($s1)
    ctx->pc = 0x43ebf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 228)));
label_43ebf4:
    // 0x43ebf4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_43ebf8:
    if (ctx->pc == 0x43EBF8u) {
        ctx->pc = 0x43EBF8u;
            // 0x43ebf8: 0xae2000e4  sw          $zero, 0xE4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 228), GPR_U32(ctx, 0));
        ctx->pc = 0x43EBFCu;
        goto label_43ebfc;
    }
    ctx->pc = 0x43EBF4u;
    {
        const bool branch_taken_0x43ebf4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x43ebf4) {
            ctx->pc = 0x43EBF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x43EBF4u;
            // 0x43ebf8: 0xae2000e4  sw          $zero, 0xE4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 228), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x43EC10u;
            goto label_43ec10;
        }
    }
    ctx->pc = 0x43EBFCu;
label_43ebfc:
    // 0x43ebfc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x43ebfcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_43ec00:
    // 0x43ec00: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x43ec00u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_43ec04:
    // 0x43ec04: 0x320f809  jalr        $t9
label_43ec08:
    if (ctx->pc == 0x43EC08u) {
        ctx->pc = 0x43EC08u;
            // 0x43ec08: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x43EC0Cu;
        goto label_43ec0c;
    }
    ctx->pc = 0x43EC04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x43EC0Cu);
        ctx->pc = 0x43EC08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43EC04u;
            // 0x43ec08: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x43EC0Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x43EC0Cu; }
            if (ctx->pc != 0x43EC0Cu) { return; }
        }
        }
    }
    ctx->pc = 0x43EC0Cu;
label_43ec0c:
    // 0x43ec0c: 0xae2000e4  sw          $zero, 0xE4($s1)
    ctx->pc = 0x43ec0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 228), GPR_U32(ctx, 0));
label_43ec10:
    // 0x43ec10: 0x8e2400a0  lw          $a0, 0xA0($s1)
    ctx->pc = 0x43ec10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_43ec14:
    // 0x43ec14: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_43ec18:
    if (ctx->pc == 0x43EC18u) {
        ctx->pc = 0x43EC18u;
            // 0x43ec18: 0xae2000a0  sw          $zero, 0xA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 0));
        ctx->pc = 0x43EC1Cu;
        goto label_43ec1c;
    }
    ctx->pc = 0x43EC14u;
    {
        const bool branch_taken_0x43ec14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x43ec14) {
            ctx->pc = 0x43EC18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x43EC14u;
            // 0x43ec18: 0xae2000a0  sw          $zero, 0xA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x43EC30u;
            goto label_43ec30;
        }
    }
    ctx->pc = 0x43EC1Cu;
label_43ec1c:
    // 0x43ec1c: 0x8c990048  lw          $t9, 0x48($a0)
    ctx->pc = 0x43ec1cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_43ec20:
    // 0x43ec20: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x43ec20u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_43ec24:
    // 0x43ec24: 0x320f809  jalr        $t9
label_43ec28:
    if (ctx->pc == 0x43EC28u) {
        ctx->pc = 0x43EC28u;
            // 0x43ec28: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x43EC2Cu;
        goto label_43ec2c;
    }
    ctx->pc = 0x43EC24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x43EC2Cu);
        ctx->pc = 0x43EC28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43EC24u;
            // 0x43ec28: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x43EC2Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x43EC2Cu; }
            if (ctx->pc != 0x43EC2Cu) { return; }
        }
        }
    }
    ctx->pc = 0x43EC2Cu;
label_43ec2c:
    // 0x43ec2c: 0xae2000a0  sw          $zero, 0xA0($s1)
    ctx->pc = 0x43ec2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 0));
label_43ec30:
    // 0x43ec30: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x43ec30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_43ec34:
    // 0x43ec34: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_43ec38:
    if (ctx->pc == 0x43EC38u) {
        ctx->pc = 0x43EC38u;
            // 0x43ec38: 0xae200050  sw          $zero, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x43EC3Cu;
        goto label_43ec3c;
    }
    ctx->pc = 0x43EC34u;
    {
        const bool branch_taken_0x43ec34 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x43ec34) {
            ctx->pc = 0x43EC38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x43EC34u;
            // 0x43ec38: 0xae200050  sw          $zero, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x43EC50u;
            goto label_43ec50;
        }
    }
    ctx->pc = 0x43EC3Cu;
label_43ec3c:
    // 0x43ec3c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x43ec3cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_43ec40:
    // 0x43ec40: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x43ec40u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_43ec44:
    // 0x43ec44: 0x320f809  jalr        $t9
label_43ec48:
    if (ctx->pc == 0x43EC48u) {
        ctx->pc = 0x43EC48u;
            // 0x43ec48: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x43EC4Cu;
        goto label_43ec4c;
    }
    ctx->pc = 0x43EC44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x43EC4Cu);
        ctx->pc = 0x43EC48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43EC44u;
            // 0x43ec48: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x43EC4Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x43EC4Cu; }
            if (ctx->pc != 0x43EC4Cu) { return; }
        }
        }
    }
    ctx->pc = 0x43EC4Cu;
label_43ec4c:
    // 0x43ec4c: 0xae200050  sw          $zero, 0x50($s1)
    ctx->pc = 0x43ec4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
label_43ec50:
    // 0x43ec50: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x43ec50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_43ec54:
    // 0x43ec54: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x43ec54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_43ec58:
    // 0x43ec58: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x43ec58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_43ec5c:
    // 0x43ec5c: 0x3e00008  jr          $ra
label_43ec60:
    if (ctx->pc == 0x43EC60u) {
        ctx->pc = 0x43EC60u;
            // 0x43ec60: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x43EC64u;
        goto label_43ec64;
    }
    ctx->pc = 0x43EC5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43EC60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43EC5Cu;
            // 0x43ec60: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x43EC64u;
label_43ec64:
    // 0x43ec64: 0x0  nop
    ctx->pc = 0x43ec64u;
    // NOP
label_43ec68:
    // 0x43ec68: 0x0  nop
    ctx->pc = 0x43ec68u;
    // NOP
label_43ec6c:
    // 0x43ec6c: 0x0  nop
    ctx->pc = 0x43ec6cu;
    // NOP
label_43ec70:
    // 0x43ec70: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x43ec70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
label_43ec74:
    // 0x43ec74: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x43ec74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_43ec78:
    // 0x43ec78: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x43ec78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_43ec7c:
    // 0x43ec7c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x43ec7cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_43ec80:
    // 0x43ec80: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x43ec80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_43ec84:
    // 0x43ec84: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x43ec84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_43ec88:
    // 0x43ec88: 0xc0892d0  jal         func_224B40
label_43ec8c:
    if (ctx->pc == 0x43EC8Cu) {
        ctx->pc = 0x43EC8Cu;
            // 0x43ec8c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x43EC90u;
        goto label_43ec90;
    }
    ctx->pc = 0x43EC88u;
    SET_GPR_U32(ctx, 31, 0x43EC90u);
    ctx->pc = 0x43EC8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43EC88u;
            // 0x43ec8c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224B40u;
    if (runtime->hasFunction(0x224B40u)) {
        auto targetFn = runtime->lookupFunction(0x224B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43EC90u; }
        if (ctx->pc != 0x43EC90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224B40_0x224b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43EC90u; }
        if (ctx->pc != 0x43EC90u) { return; }
    }
    ctx->pc = 0x43EC90u;
label_43ec90:
    // 0x43ec90: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x43ec90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_43ec94:
    // 0x43ec94: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x43ec94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_43ec98:
    // 0x43ec98: 0x8c420d00  lw          $v0, 0xD00($v0)
    ctx->pc = 0x43ec98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3328)));
label_43ec9c:
    // 0x43ec9c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x43ec9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_43eca0:
    // 0x43eca0: 0x8c70e3e0  lw          $s0, -0x1C20($v1)
    ctx->pc = 0x43eca0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960096)));
label_43eca4:
    // 0x43eca4: 0x8c510060  lw          $s1, 0x60($v0)
    ctx->pc = 0x43eca4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_43eca8:
    // 0x43eca8: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x43eca8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
label_43ecac:
    // 0x43ecac: 0xc0b6e68  jal         func_2DB9A0
label_43ecb0:
    if (ctx->pc == 0x43ECB0u) {
        ctx->pc = 0x43ECB0u;
            // 0x43ecb0: 0xafa00074  sw          $zero, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
        ctx->pc = 0x43ECB4u;
        goto label_43ecb4;
    }
    ctx->pc = 0x43ECACu;
    SET_GPR_U32(ctx, 31, 0x43ECB4u);
    ctx->pc = 0x43ECB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43ECACu;
            // 0x43ecb0: 0xafa00074  sw          $zero, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB9A0u;
    if (runtime->hasFunction(0x2DB9A0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43ECB4u; }
        if (ctx->pc != 0x43ECB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB9A0_0x2db9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43ECB4u; }
        if (ctx->pc != 0x43ECB4u) { return; }
    }
    ctx->pc = 0x43ECB4u;
label_43ecb4:
    // 0x43ecb4: 0xc0b6dac  jal         func_2DB6B0
label_43ecb8:
    if (ctx->pc == 0x43ECB8u) {
        ctx->pc = 0x43ECB8u;
            // 0x43ecb8: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x43ECBCu;
        goto label_43ecbc;
    }
    ctx->pc = 0x43ECB4u;
    SET_GPR_U32(ctx, 31, 0x43ECBCu);
    ctx->pc = 0x43ECB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43ECB4u;
            // 0x43ecb8: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (runtime->hasFunction(0x2DB6B0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43ECBCu; }
        if (ctx->pc != 0x43ECBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB6B0_0x2db6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43ECBCu; }
        if (ctx->pc != 0x43ECBCu) { return; }
    }
    ctx->pc = 0x43ECBCu;
label_43ecbc:
    // 0x43ecbc: 0xc0cac94  jal         func_32B250
label_43ecc0:
    if (ctx->pc == 0x43ECC0u) {
        ctx->pc = 0x43ECC0u;
            // 0x43ecc0: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x43ECC4u;
        goto label_43ecc4;
    }
    ctx->pc = 0x43ECBCu;
    SET_GPR_U32(ctx, 31, 0x43ECC4u);
    ctx->pc = 0x43ECC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43ECBCu;
            // 0x43ecc0: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B250u;
    if (runtime->hasFunction(0x32B250u)) {
        auto targetFn = runtime->lookupFunction(0x32B250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43ECC4u; }
        if (ctx->pc != 0x43ECC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B250_0x32b250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43ECC4u; }
        if (ctx->pc != 0x43ECC4u) { return; }
    }
    ctx->pc = 0x43ECC4u;
label_43ecc4:
    // 0x43ecc4: 0xc0cac84  jal         func_32B210
label_43ecc8:
    if (ctx->pc == 0x43ECC8u) {
        ctx->pc = 0x43ECC8u;
            // 0x43ecc8: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x43ECCCu;
        goto label_43eccc;
    }
    ctx->pc = 0x43ECC4u;
    SET_GPR_U32(ctx, 31, 0x43ECCCu);
    ctx->pc = 0x43ECC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43ECC4u;
            // 0x43ecc8: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B210u;
    if (runtime->hasFunction(0x32B210u)) {
        auto targetFn = runtime->lookupFunction(0x32B210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43ECCCu; }
        if (ctx->pc != 0x43ECCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B210_0x32b210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43ECCCu; }
        if (ctx->pc != 0x43ECCCu) { return; }
    }
    ctx->pc = 0x43ECCCu;
label_43eccc:
    // 0x43eccc: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x43ecccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_43ecd0:
    // 0x43ecd0: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x43ecd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_43ecd4:
    // 0x43ecd4: 0xc44cc930  lwc1        $f12, -0x36D0($v0)
    ctx->pc = 0x43ecd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_43ecd8:
    // 0x43ecd8: 0xc0a5a68  jal         func_2969A0
label_43ecdc:
    if (ctx->pc == 0x43ECDCu) {
        ctx->pc = 0x43ECDCu;
            // 0x43ecdc: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x43ECE0u;
        goto label_43ece0;
    }
    ctx->pc = 0x43ECD8u;
    SET_GPR_U32(ctx, 31, 0x43ECE0u);
    ctx->pc = 0x43ECDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43ECD8u;
            // 0x43ecdc: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2969A0u;
    if (runtime->hasFunction(0x2969A0u)) {
        auto targetFn = runtime->lookupFunction(0x2969A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43ECE0u; }
        if (ctx->pc != 0x43ECE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002969A0_0x2969a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43ECE0u; }
        if (ctx->pc != 0x43ECE0u) { return; }
    }
    ctx->pc = 0x43ECE0u;
label_43ece0:
    // 0x43ece0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x43ece0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_43ece4:
    // 0x43ece4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x43ece4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_43ece8:
    // 0x43ece8: 0x8c440d00  lw          $a0, 0xD00($v0)
    ctx->pc = 0x43ece8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3328)));
label_43ecec:
    // 0x43ecec: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x43ececu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_43ecf0:
    // 0x43ecf0: 0xc7a200a0  lwc1        $f2, 0xA0($sp)
    ctx->pc = 0x43ecf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_43ecf4:
    // 0x43ecf4: 0x24050220  addiu       $a1, $zero, 0x220
    ctx->pc = 0x43ecf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_43ecf8:
    // 0x43ecf8: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x43ecf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_43ecfc:
    // 0x43ecfc: 0x2406002b  addiu       $a2, $zero, 0x2B
    ctx->pc = 0x43ecfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_43ed00:
    // 0x43ed00: 0x8c890060  lw          $t1, 0x60($a0)
    ctx->pc = 0x43ed00u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
label_43ed04:
    // 0x43ed04: 0x3c023f05  lui         $v0, 0x3F05
    ctx->pc = 0x43ed04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16133 << 16));
label_43ed08:
    // 0x43ed08: 0x34471eb8  ori         $a3, $v0, 0x1EB8
    ctx->pc = 0x43ed08u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)7864);
label_43ed0c:
    // 0x43ed0c: 0x3c0200e1  lui         $v0, 0xE1
    ctx->pc = 0x43ed0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)225 << 16));
label_43ed10:
    // 0x43ed10: 0xafa900c4  sw          $t1, 0xC4($sp)
    ctx->pc = 0x43ed10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 9));
label_43ed14:
    // 0x43ed14: 0x34430120  ori         $v1, $v0, 0x120
    ctx->pc = 0x43ed14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)288);
label_43ed18:
    // 0x43ed18: 0xc6490018  lwc1        $f9, 0x18($s2)
    ctx->pc = 0x43ed18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_43ed1c:
    // 0x43ed1c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x43ed1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_43ed20:
    // 0x43ed20: 0xc6480014  lwc1        $f8, 0x14($s2)
    ctx->pc = 0x43ed20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_43ed24:
    // 0x43ed24: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x43ed24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_43ed28:
    // 0x43ed28: 0xc6470010  lwc1        $f7, 0x10($s2)
    ctx->pc = 0x43ed28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_43ed2c:
    // 0x43ed2c: 0xc7a60090  lwc1        $f6, 0x90($sp)
    ctx->pc = 0x43ed2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_43ed30:
    // 0x43ed30: 0xc7a50094  lwc1        $f5, 0x94($sp)
    ctx->pc = 0x43ed30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_43ed34:
    // 0x43ed34: 0xe7a00128  swc1        $f0, 0x128($sp)
    ctx->pc = 0x43ed34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_43ed38:
    // 0x43ed38: 0xa3a80170  sb          $t0, 0x170($sp)
    ctx->pc = 0x43ed38u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 368), (uint8_t)GPR_U32(ctx, 8));
label_43ed3c:
    // 0x43ed3c: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x43ed3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_43ed40:
    // 0x43ed40: 0xafa7016c  sw          $a3, 0x16C($sp)
    ctx->pc = 0x43ed40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 364), GPR_U32(ctx, 7));
label_43ed44:
    // 0x43ed44: 0xe7a20120  swc1        $f2, 0x120($sp)
    ctx->pc = 0x43ed44u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_43ed48:
    // 0x43ed48: 0xafa300c0  sw          $v1, 0xC0($sp)
    ctx->pc = 0x43ed48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
label_43ed4c:
    // 0x43ed4c: 0xe7a10124  swc1        $f1, 0x124($sp)
    ctx->pc = 0x43ed4cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
label_43ed50:
    // 0x43ed50: 0xafa000dc  sw          $zero, 0xDC($sp)
    ctx->pc = 0x43ed50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 0));
label_43ed54:
    // 0x43ed54: 0xe7a00134  swc1        $f0, 0x134($sp)
    ctx->pc = 0x43ed54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
label_43ed58:
    // 0x43ed58: 0xc7a200ac  lwc1        $f2, 0xAC($sp)
    ctx->pc = 0x43ed58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_43ed5c:
    // 0x43ed5c: 0xc7a100b0  lwc1        $f1, 0xB0($sp)
    ctx->pc = 0x43ed5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_43ed60:
    // 0x43ed60: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x43ed60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_43ed64:
    // 0x43ed64: 0xe7a2012c  swc1        $f2, 0x12C($sp)
    ctx->pc = 0x43ed64u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
label_43ed68:
    // 0x43ed68: 0xe7a10130  swc1        $f1, 0x130($sp)
    ctx->pc = 0x43ed68u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_43ed6c:
    // 0x43ed6c: 0xe7a00140  swc1        $f0, 0x140($sp)
    ctx->pc = 0x43ed6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_43ed70:
    // 0x43ed70: 0xc7a200b8  lwc1        $f2, 0xB8($sp)
    ctx->pc = 0x43ed70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_43ed74:
    // 0x43ed74: 0xc7a100bc  lwc1        $f1, 0xBC($sp)
    ctx->pc = 0x43ed74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_43ed78:
    // 0x43ed78: 0xc7a0008c  lwc1        $f0, 0x8C($sp)
    ctx->pc = 0x43ed78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_43ed7c:
    // 0x43ed7c: 0xe7a20138  swc1        $f2, 0x138($sp)
    ctx->pc = 0x43ed7cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_43ed80:
    // 0x43ed80: 0xe7a1013c  swc1        $f1, 0x13C($sp)
    ctx->pc = 0x43ed80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
label_43ed84:
    // 0x43ed84: 0xe7a0014c  swc1        $f0, 0x14C($sp)
    ctx->pc = 0x43ed84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
label_43ed88:
    // 0x43ed88: 0xc7a40098  lwc1        $f4, 0x98($sp)
    ctx->pc = 0x43ed88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_43ed8c:
    // 0x43ed8c: 0xc7a3009c  lwc1        $f3, 0x9C($sp)
    ctx->pc = 0x43ed8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_43ed90:
    // 0x43ed90: 0xc7a20084  lwc1        $f2, 0x84($sp)
    ctx->pc = 0x43ed90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_43ed94:
    // 0x43ed94: 0xc7a10088  lwc1        $f1, 0x88($sp)
    ctx->pc = 0x43ed94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_43ed98:
    // 0x43ed98: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x43ed98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_43ed9c:
    // 0x43ed9c: 0xe7a700d0  swc1        $f7, 0xD0($sp)
    ctx->pc = 0x43ed9cu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_43eda0:
    // 0x43eda0: 0xe7a800d4  swc1        $f8, 0xD4($sp)
    ctx->pc = 0x43eda0u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_43eda4:
    // 0x43eda4: 0xe7a900d8  swc1        $f9, 0xD8($sp)
    ctx->pc = 0x43eda4u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_43eda8:
    // 0x43eda8: 0xe7a60110  swc1        $f6, 0x110($sp)
    ctx->pc = 0x43eda8u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_43edac:
    // 0x43edac: 0xe7a50114  swc1        $f5, 0x114($sp)
    ctx->pc = 0x43edacu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
label_43edb0:
    // 0x43edb0: 0xe7a40118  swc1        $f4, 0x118($sp)
    ctx->pc = 0x43edb0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_43edb4:
    // 0x43edb4: 0xe7a3011c  swc1        $f3, 0x11C($sp)
    ctx->pc = 0x43edb4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
label_43edb8:
    // 0x43edb8: 0xe7a20144  swc1        $f2, 0x144($sp)
    ctx->pc = 0x43edb8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
label_43edbc:
    // 0x43edbc: 0xe7a10148  swc1        $f1, 0x148($sp)
    ctx->pc = 0x43edbcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
label_43edc0:
    // 0x43edc0: 0xc0a7a88  jal         func_29EA20
label_43edc4:
    if (ctx->pc == 0x43EDC4u) {
        ctx->pc = 0x43EDC4u;
            // 0x43edc4: 0xe7a00150  swc1        $f0, 0x150($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
        ctx->pc = 0x43EDC8u;
        goto label_43edc8;
    }
    ctx->pc = 0x43EDC0u;
    SET_GPR_U32(ctx, 31, 0x43EDC8u);
    ctx->pc = 0x43EDC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43EDC0u;
            // 0x43edc4: 0xe7a00150  swc1        $f0, 0x150($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43EDC8u; }
        if (ctx->pc != 0x43EDC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43EDC8u; }
        if (ctx->pc != 0x43EDC8u) { return; }
    }
    ctx->pc = 0x43EDC8u;
label_43edc8:
    // 0x43edc8: 0x24030220  addiu       $v1, $zero, 0x220
    ctx->pc = 0x43edc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_43edcc:
    // 0x43edcc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x43edccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_43edd0:
    // 0x43edd0: 0x12200013  beqz        $s1, . + 4 + (0x13 << 2)
label_43edd4:
    if (ctx->pc == 0x43EDD4u) {
        ctx->pc = 0x43EDD4u;
            // 0x43edd4: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x43EDD8u;
        goto label_43edd8;
    }
    ctx->pc = 0x43EDD0u;
    {
        const bool branch_taken_0x43edd0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x43EDD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43EDD0u;
            // 0x43edd4: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43edd0) {
            ctx->pc = 0x43EE20u;
            goto label_43ee20;
        }
    }
    ctx->pc = 0x43EDD8u;
label_43edd8:
    // 0x43edd8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x43edd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_43eddc:
    // 0x43eddc: 0xc088ef4  jal         func_223BD0
label_43ede0:
    if (ctx->pc == 0x43EDE0u) {
        ctx->pc = 0x43EDE0u;
            // 0x43ede0: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x43EDE4u;
        goto label_43ede4;
    }
    ctx->pc = 0x43EDDCu;
    SET_GPR_U32(ctx, 31, 0x43EDE4u);
    ctx->pc = 0x43EDE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43EDDCu;
            // 0x43ede0: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x223BD0u;
    if (runtime->hasFunction(0x223BD0u)) {
        auto targetFn = runtime->lookupFunction(0x223BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43EDE4u; }
        if (ctx->pc != 0x43EDE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00223BD0_0x223bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43EDE4u; }
        if (ctx->pc != 0x43EDE4u) { return; }
    }
    ctx->pc = 0x43EDE4u;
label_43ede4:
    // 0x43ede4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x43ede4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_43ede8:
    // 0x43ede8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x43ede8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_43edec:
    // 0x43edec: 0x24422240  addiu       $v0, $v0, 0x2240
    ctx->pc = 0x43edecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8768));
label_43edf0:
    // 0x43edf0: 0x24632260  addiu       $v1, $v1, 0x2260
    ctx->pc = 0x43edf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8800));
label_43edf4:
    // 0x43edf4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x43edf4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_43edf8:
    // 0x43edf8: 0xae200200  sw          $zero, 0x200($s1)
    ctx->pc = 0x43edf8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 512), GPR_U32(ctx, 0));
label_43edfc:
    // 0x43edfc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x43edfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_43ee00:
    // 0x43ee00: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x43ee00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_43ee04:
    // 0x43ee04: 0xae200210  sw          $zero, 0x210($s1)
    ctx->pc = 0x43ee04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 528), GPR_U32(ctx, 0));
label_43ee08:
    // 0x43ee08: 0xae200214  sw          $zero, 0x214($s1)
    ctx->pc = 0x43ee08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 532), GPR_U32(ctx, 0));
label_43ee0c:
    // 0x43ee0c: 0xae32000c  sw          $s2, 0xC($s1)
    ctx->pc = 0x43ee0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 18));
label_43ee10:
    // 0x43ee10: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x43ee10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_43ee14:
    // 0x43ee14: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x43ee14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_43ee18:
    // 0x43ee18: 0xc088b38  jal         func_222CE0
label_43ee1c:
    if (ctx->pc == 0x43EE1Cu) {
        ctx->pc = 0x43EE1Cu;
            // 0x43ee1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43EE20u;
        goto label_43ee20;
    }
    ctx->pc = 0x43EE18u;
    SET_GPR_U32(ctx, 31, 0x43EE20u);
    ctx->pc = 0x43EE1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43EE18u;
            // 0x43ee1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222CE0u;
    if (runtime->hasFunction(0x222CE0u)) {
        auto targetFn = runtime->lookupFunction(0x222CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43EE20u; }
        if (ctx->pc != 0x43EE20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222CE0_0x222ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43EE20u; }
        if (ctx->pc != 0x43EE20u) { return; }
    }
    ctx->pc = 0x43EE20u;
label_43ee20:
    // 0x43ee20: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x43ee20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_43ee24:
    // 0x43ee24: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x43ee24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_43ee28:
    // 0x43ee28: 0xc08c164  jal         func_230590
label_43ee2c:
    if (ctx->pc == 0x43EE2Cu) {
        ctx->pc = 0x43EE2Cu;
            // 0x43ee2c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x43EE30u;
        goto label_43ee30;
    }
    ctx->pc = 0x43EE28u;
    SET_GPR_U32(ctx, 31, 0x43EE30u);
    ctx->pc = 0x43EE2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43EE28u;
            // 0x43ee2c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x230590u;
    if (runtime->hasFunction(0x230590u)) {
        auto targetFn = runtime->lookupFunction(0x230590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43EE30u; }
        if (ctx->pc != 0x43EE30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00230590_0x230590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43EE30u; }
        if (ctx->pc != 0x43EE30u) { return; }
    }
    ctx->pc = 0x43EE30u;
label_43ee30:
    // 0x43ee30: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x43ee30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_43ee34:
    // 0x43ee34: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x43ee34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_43ee38:
    // 0x43ee38: 0x24425f20  addiu       $v0, $v0, 0x5F20
    ctx->pc = 0x43ee38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24352));
label_43ee3c:
    // 0x43ee3c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x43ee3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_43ee40:
    // 0x43ee40: 0xae220200  sw          $v0, 0x200($s1)
    ctx->pc = 0x43ee40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 512), GPR_U32(ctx, 2));
label_43ee44:
    // 0x43ee44: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x43ee44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_43ee48:
    // 0x43ee48: 0xc08914c  jal         func_224530
label_43ee4c:
    if (ctx->pc == 0x43EE4Cu) {
        ctx->pc = 0x43EE4Cu;
            // 0x43ee4c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43EE50u;
        goto label_43ee50;
    }
    ctx->pc = 0x43EE48u;
    SET_GPR_U32(ctx, 31, 0x43EE50u);
    ctx->pc = 0x43EE4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43EE48u;
            // 0x43ee4c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43EE50u; }
        if (ctx->pc != 0x43EE50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43EE50u; }
        if (ctx->pc != 0x43EE50u) { return; }
    }
    ctx->pc = 0x43EE50u;
label_43ee50:
    // 0x43ee50: 0x3c0343d1  lui         $v1, 0x43D1
    ctx->pc = 0x43ee50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17361 << 16));
label_43ee54:
    // 0x43ee54: 0x3c023e32  lui         $v0, 0x3E32
    ctx->pc = 0x43ee54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15922 << 16));
label_43ee58:
    // 0x43ee58: 0x34637084  ori         $v1, $v1, 0x7084
    ctx->pc = 0x43ee58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)28804);
label_43ee5c:
    // 0x43ee5c: 0x3442b8c2  ori         $v0, $v0, 0xB8C2
    ctx->pc = 0x43ee5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)47298);
label_43ee60:
    // 0x43ee60: 0xae230154  sw          $v1, 0x154($s1)
    ctx->pc = 0x43ee60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 340), GPR_U32(ctx, 3));
label_43ee64:
    // 0x43ee64: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x43ee64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_43ee68:
    // 0x43ee68: 0xae220158  sw          $v0, 0x158($s1)
    ctx->pc = 0x43ee68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 344), GPR_U32(ctx, 2));
label_43ee6c:
    // 0x43ee6c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x43ee6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_43ee70:
    // 0x43ee70: 0xc6420018  lwc1        $f2, 0x18($s2)
    ctx->pc = 0x43ee70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_43ee74:
    // 0x43ee74: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x43ee74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_43ee78:
    // 0x43ee78: 0xc6410014  lwc1        $f1, 0x14($s2)
    ctx->pc = 0x43ee78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_43ee7c:
    // 0x43ee7c: 0xc6400010  lwc1        $f0, 0x10($s2)
    ctx->pc = 0x43ee7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_43ee80:
    // 0x43ee80: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x43ee80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_43ee84:
    // 0x43ee84: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x43ee84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
label_43ee88:
    // 0x43ee88: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x43ee88u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_43ee8c:
    // 0x43ee8c: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x43ee8cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_43ee90:
    // 0x43ee90: 0xc643002c  lwc1        $f3, 0x2C($s2)
    ctx->pc = 0x43ee90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_43ee94:
    // 0x43ee94: 0xc6420028  lwc1        $f2, 0x28($s2)
    ctx->pc = 0x43ee94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_43ee98:
    // 0x43ee98: 0xc6410024  lwc1        $f1, 0x24($s2)
    ctx->pc = 0x43ee98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_43ee9c:
    // 0x43ee9c: 0xc6400020  lwc1        $f0, 0x20($s2)
    ctx->pc = 0x43ee9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_43eea0:
    // 0x43eea0: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x43eea0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_43eea4:
    // 0x43eea4: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x43eea4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_43eea8:
    // 0x43eea8: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x43eea8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_43eeac:
    // 0x43eeac: 0xc0892b0  jal         func_224AC0
label_43eeb0:
    if (ctx->pc == 0x43EEB0u) {
        ctx->pc = 0x43EEB0u;
            // 0x43eeb0: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->pc = 0x43EEB4u;
        goto label_43eeb4;
    }
    ctx->pc = 0x43EEACu;
    SET_GPR_U32(ctx, 31, 0x43EEB4u);
    ctx->pc = 0x43EEB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43EEACu;
            // 0x43eeb0: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224AC0u;
    if (runtime->hasFunction(0x224AC0u)) {
        auto targetFn = runtime->lookupFunction(0x224AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43EEB4u; }
        if (ctx->pc != 0x43EEB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224AC0_0x224ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43EEB4u; }
        if (ctx->pc != 0x43EEB4u) { return; }
    }
    ctx->pc = 0x43EEB4u;
label_43eeb4:
    // 0x43eeb4: 0x3c02bf00  lui         $v0, 0xBF00
    ctx->pc = 0x43eeb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48896 << 16));
label_43eeb8:
    // 0x43eeb8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x43eeb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_43eebc:
    // 0x43eebc: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x43eebcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
label_43eec0:
    // 0x43eec0: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x43eec0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_43eec4:
    // 0x43eec4: 0xafa20068  sw          $v0, 0x68($sp)
    ctx->pc = 0x43eec4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
label_43eec8:
    // 0x43eec8: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x43eec8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
label_43eecc:
    // 0x43eecc: 0xc0891d8  jal         func_224760
label_43eed0:
    if (ctx->pc == 0x43EED0u) {
        ctx->pc = 0x43EED0u;
            // 0x43eed0: 0xafa0006c  sw          $zero, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
        ctx->pc = 0x43EED4u;
        goto label_43eed4;
    }
    ctx->pc = 0x43EECCu;
    SET_GPR_U32(ctx, 31, 0x43EED4u);
    ctx->pc = 0x43EED0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43EECCu;
            // 0x43eed0: 0xafa0006c  sw          $zero, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224760u;
    if (runtime->hasFunction(0x224760u)) {
        auto targetFn = runtime->lookupFunction(0x224760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43EED4u; }
        if (ctx->pc != 0x43EED4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224760_0x224760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43EED4u; }
        if (ctx->pc != 0x43EED4u) { return; }
    }
    ctx->pc = 0x43EED4u;
label_43eed4:
    // 0x43eed4: 0xae510050  sw          $s1, 0x50($s2)
    ctx->pc = 0x43eed4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 17));
label_43eed8:
    // 0x43eed8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x43eed8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_43eedc:
    // 0x43eedc: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x43eedcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_43eee0:
    // 0x43eee0: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x43eee0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_43eee4:
    // 0x43eee4: 0xc0a7a88  jal         func_29EA20
label_43eee8:
    if (ctx->pc == 0x43EEE8u) {
        ctx->pc = 0x43EEE8u;
            // 0x43eee8: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->pc = 0x43EEECu;
        goto label_43eeec;
    }
    ctx->pc = 0x43EEE4u;
    SET_GPR_U32(ctx, 31, 0x43EEECu);
    ctx->pc = 0x43EEE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43EEE4u;
            // 0x43eee8: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43EEECu; }
        if (ctx->pc != 0x43EEECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43EEECu; }
        if (ctx->pc != 0x43EEECu) { return; }
    }
    ctx->pc = 0x43EEECu;
label_43eeec:
    // 0x43eeec: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x43eeecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_43eef0:
    // 0x43eef0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x43eef0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_43eef4:
    // 0x43eef4: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_43eef8:
    if (ctx->pc == 0x43EEF8u) {
        ctx->pc = 0x43EEF8u;
            // 0x43eef8: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x43EEFCu;
        goto label_43eefc;
    }
    ctx->pc = 0x43EEF4u;
    {
        const bool branch_taken_0x43eef4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x43EEF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43EEF4u;
            // 0x43eef8: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43eef4) {
            ctx->pc = 0x43EF18u;
            goto label_43ef18;
        }
    }
    ctx->pc = 0x43EEFCu;
label_43eefc:
    // 0x43eefc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x43eefcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_43ef00:
    // 0x43ef00: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x43ef00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_43ef04:
    // 0x43ef04: 0xc0869d0  jal         func_21A740
label_43ef08:
    if (ctx->pc == 0x43EF08u) {
        ctx->pc = 0x43EF08u;
            // 0x43ef08: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43EF0Cu;
        goto label_43ef0c;
    }
    ctx->pc = 0x43EF04u;
    SET_GPR_U32(ctx, 31, 0x43EF0Cu);
    ctx->pc = 0x43EF08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43EF04u;
            // 0x43ef08: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21A740u;
    if (runtime->hasFunction(0x21A740u)) {
        auto targetFn = runtime->lookupFunction(0x21A740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43EF0Cu; }
        if (ctx->pc != 0x43EF0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021A740_0x21a740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43EF0Cu; }
        if (ctx->pc != 0x43EF0Cu) { return; }
    }
    ctx->pc = 0x43EF0Cu;
label_43ef0c:
    // 0x43ef0c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x43ef0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_43ef10:
    // 0x43ef10: 0x24422210  addiu       $v0, $v0, 0x2210
    ctx->pc = 0x43ef10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8720));
label_43ef14:
    // 0x43ef14: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x43ef14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_43ef18:
    // 0x43ef18: 0xae300210  sw          $s0, 0x210($s1)
    ctx->pc = 0x43ef18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 528), GPR_U32(ctx, 16));
label_43ef1c:
    // 0x43ef1c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x43ef1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_43ef20:
    // 0x43ef20: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x43ef20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_43ef24:
    // 0x43ef24: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x43ef24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_43ef28:
    // 0x43ef28: 0xc08c650  jal         func_231940
label_43ef2c:
    if (ctx->pc == 0x43EF2Cu) {
        ctx->pc = 0x43EF2Cu;
            // 0x43ef2c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43EF30u;
        goto label_43ef30;
    }
    ctx->pc = 0x43EF28u;
    SET_GPR_U32(ctx, 31, 0x43EF30u);
    ctx->pc = 0x43EF2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43EF28u;
            // 0x43ef2c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231940u;
    if (runtime->hasFunction(0x231940u)) {
        auto targetFn = runtime->lookupFunction(0x231940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43EF30u; }
        if (ctx->pc != 0x43EF30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231940_0x231940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43EF30u; }
        if (ctx->pc != 0x43EF30u) { return; }
    }
    ctx->pc = 0x43EF30u;
label_43ef30:
    // 0x43ef30: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x43ef30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_43ef34:
    // 0x43ef34: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x43ef34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_43ef38:
    // 0x43ef38: 0x8c4289d0  lw          $v0, -0x7630($v0)
    ctx->pc = 0x43ef38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
label_43ef3c:
    // 0x43ef3c: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x43ef3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
label_43ef40:
    // 0x43ef40: 0x54430028  bnel        $v0, $v1, . + 4 + (0x28 << 2)
label_43ef44:
    if (ctx->pc == 0x43EF44u) {
        ctx->pc = 0x43EF44u;
            // 0x43ef44: 0x24040070  addiu       $a0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->pc = 0x43EF48u;
        goto label_43ef48;
    }
    ctx->pc = 0x43EF40u;
    {
        const bool branch_taken_0x43ef40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x43ef40) {
            ctx->pc = 0x43EF44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x43EF40u;
            // 0x43ef44: 0x24040070  addiu       $a0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
            ctx->pc = 0x43EFE4u;
            goto label_43efe4;
        }
    }
    ctx->pc = 0x43EF48u;
label_43ef48:
    // 0x43ef48: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x43ef48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_43ef4c:
    // 0x43ef4c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x43ef4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_43ef50:
    // 0x43ef50: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x43ef50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_43ef54:
    // 0x43ef54: 0x8c420cc4  lw          $v0, 0xCC4($v0)
    ctx->pc = 0x43ef54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3268)));
label_43ef58:
    // 0x43ef58: 0x14430021  bne         $v0, $v1, . + 4 + (0x21 << 2)
label_43ef5c:
    if (ctx->pc == 0x43EF5Cu) {
        ctx->pc = 0x43EF60u;
        goto label_43ef60;
    }
    ctx->pc = 0x43EF58u;
    {
        const bool branch_taken_0x43ef58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x43ef58) {
            ctx->pc = 0x43EFE0u;
            goto label_43efe0;
        }
    }
    ctx->pc = 0x43EF60u;
label_43ef60:
    // 0x43ef60: 0xc040180  jal         func_100600
label_43ef64:
    if (ctx->pc == 0x43EF64u) {
        ctx->pc = 0x43EF64u;
            // 0x43ef64: 0x24040070  addiu       $a0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->pc = 0x43EF68u;
        goto label_43ef68;
    }
    ctx->pc = 0x43EF60u;
    SET_GPR_U32(ctx, 31, 0x43EF68u);
    ctx->pc = 0x43EF64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43EF60u;
            // 0x43ef64: 0x24040070  addiu       $a0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43EF68u; }
        if (ctx->pc != 0x43EF68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43EF68u; }
        if (ctx->pc != 0x43EF68u) { return; }
    }
    ctx->pc = 0x43EF68u;
label_43ef68:
    // 0x43ef68: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_43ef6c:
    if (ctx->pc == 0x43EF6Cu) {
        ctx->pc = 0x43EF6Cu;
            // 0x43ef6c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43EF70u;
        goto label_43ef70;
    }
    ctx->pc = 0x43EF68u;
    {
        const bool branch_taken_0x43ef68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x43EF6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43EF68u;
            // 0x43ef6c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43ef68) {
            ctx->pc = 0x43EFD8u;
            goto label_43efd8;
        }
    }
    ctx->pc = 0x43EF70u;
label_43ef70:
    // 0x43ef70: 0x8e470050  lw          $a3, 0x50($s2)
    ctx->pc = 0x43ef70u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_43ef74:
    // 0x43ef74: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x43ef74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
label_43ef78:
    // 0x43ef78: 0x248421e0  addiu       $a0, $a0, 0x21E0
    ctx->pc = 0x43ef78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8672));
label_43ef7c:
    // 0x43ef7c: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x43ef7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_43ef80:
    // 0x43ef80: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x43ef80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_43ef84:
    // 0x43ef84: 0x3c023ee6  lui         $v0, 0x3EE6
    ctx->pc = 0x43ef84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16102 << 16));
label_43ef88:
    // 0x43ef88: 0xae040048  sw          $a0, 0x48($s0)
    ctx->pc = 0x43ef88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 4));
label_43ef8c:
    // 0x43ef8c: 0x3c06c000  lui         $a2, 0xC000
    ctx->pc = 0x43ef8cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)49152 << 16));
label_43ef90:
    // 0x43ef90: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x43ef90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
label_43ef94:
    // 0x43ef94: 0x24a5d218  addiu       $a1, $a1, -0x2DE8
    ctx->pc = 0x43ef94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955544));
label_43ef98:
    // 0x43ef98: 0xae070024  sw          $a3, 0x24($s0)
    ctx->pc = 0x43ef98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 7));
label_43ef9c:
    // 0x43ef9c: 0x246385d0  addiu       $v1, $v1, -0x7A30
    ctx->pc = 0x43ef9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936016));
label_43efa0:
    // 0x43efa0: 0xae060028  sw          $a2, 0x28($s0)
    ctx->pc = 0x43efa0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 6));
label_43efa4:
    // 0x43efa4: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x43efa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
label_43efa8:
    // 0x43efa8: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x43efa8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
label_43efac:
    // 0x43efac: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x43efacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_43efb0:
    // 0x43efb0: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x43efb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
label_43efb4:
    // 0x43efb4: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x43efb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
label_43efb8:
    // 0x43efb8: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x43efb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
label_43efbc:
    // 0x43efbc: 0xae05003c  sw          $a1, 0x3C($s0)
    ctx->pc = 0x43efbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 5));
label_43efc0:
    // 0x43efc0: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x43efc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
label_43efc4:
    // 0x43efc4: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x43efc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
label_43efc8:
    // 0x43efc8: 0xae030048  sw          $v1, 0x48($s0)
    ctx->pc = 0x43efc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 3));
label_43efcc:
    // 0x43efcc: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x43efccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
label_43efd0:
    // 0x43efd0: 0xc04c968  jal         func_1325A0
label_43efd4:
    if (ctx->pc == 0x43EFD4u) {
        ctx->pc = 0x43EFD4u;
            // 0x43efd4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x43EFD8u;
        goto label_43efd8;
    }
    ctx->pc = 0x43EFD0u;
    SET_GPR_U32(ctx, 31, 0x43EFD8u);
    ctx->pc = 0x43EFD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43EFD0u;
            // 0x43efd4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43EFD8u; }
        if (ctx->pc != 0x43EFD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43EFD8u; }
        if (ctx->pc != 0x43EFD8u) { return; }
    }
    ctx->pc = 0x43EFD8u;
label_43efd8:
    // 0x43efd8: 0x10000021  b           . + 4 + (0x21 << 2)
label_43efdc:
    if (ctx->pc == 0x43EFDCu) {
        ctx->pc = 0x43EFDCu;
            // 0x43efdc: 0xae5000a0  sw          $s0, 0xA0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 160), GPR_U32(ctx, 16));
        ctx->pc = 0x43EFE0u;
        goto label_43efe0;
    }
    ctx->pc = 0x43EFD8u;
    {
        const bool branch_taken_0x43efd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43EFDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43EFD8u;
            // 0x43efdc: 0xae5000a0  sw          $s0, 0xA0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 160), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43efd8) {
            ctx->pc = 0x43F060u;
            goto label_43f060;
        }
    }
    ctx->pc = 0x43EFE0u;
label_43efe0:
    // 0x43efe0: 0x24040070  addiu       $a0, $zero, 0x70
    ctx->pc = 0x43efe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_43efe4:
    // 0x43efe4: 0xc040180  jal         func_100600
label_43efe8:
    if (ctx->pc == 0x43EFE8u) {
        ctx->pc = 0x43EFECu;
        goto label_43efec;
    }
    ctx->pc = 0x43EFE4u;
    SET_GPR_U32(ctx, 31, 0x43EFECu);
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43EFECu; }
        if (ctx->pc != 0x43EFECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43EFECu; }
        if (ctx->pc != 0x43EFECu) { return; }
    }
    ctx->pc = 0x43EFECu;
label_43efec:
    // 0x43efec: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_43eff0:
    if (ctx->pc == 0x43EFF0u) {
        ctx->pc = 0x43EFF0u;
            // 0x43eff0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43EFF4u;
        goto label_43eff4;
    }
    ctx->pc = 0x43EFECu;
    {
        const bool branch_taken_0x43efec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x43EFF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43EFECu;
            // 0x43eff0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43efec) {
            ctx->pc = 0x43F05Cu;
            goto label_43f05c;
        }
    }
    ctx->pc = 0x43EFF4u;
label_43eff4:
    // 0x43eff4: 0x8e470050  lw          $a3, 0x50($s2)
    ctx->pc = 0x43eff4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_43eff8:
    // 0x43eff8: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x43eff8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
label_43effc:
    // 0x43effc: 0x248421e0  addiu       $a0, $a0, 0x21E0
    ctx->pc = 0x43effcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8672));
label_43f000:
    // 0x43f000: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x43f000u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_43f004:
    // 0x43f004: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x43f004u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_43f008:
    // 0x43f008: 0x3c023ee6  lui         $v0, 0x3EE6
    ctx->pc = 0x43f008u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16102 << 16));
label_43f00c:
    // 0x43f00c: 0xae040048  sw          $a0, 0x48($s0)
    ctx->pc = 0x43f00cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 4));
label_43f010:
    // 0x43f010: 0x3c06c000  lui         $a2, 0xC000
    ctx->pc = 0x43f010u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)49152 << 16));
label_43f014:
    // 0x43f014: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x43f014u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
label_43f018:
    // 0x43f018: 0x24a5d1a0  addiu       $a1, $a1, -0x2E60
    ctx->pc = 0x43f018u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955424));
label_43f01c:
    // 0x43f01c: 0xae070024  sw          $a3, 0x24($s0)
    ctx->pc = 0x43f01cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 7));
label_43f020:
    // 0x43f020: 0x246385d0  addiu       $v1, $v1, -0x7A30
    ctx->pc = 0x43f020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936016));
label_43f024:
    // 0x43f024: 0xae060028  sw          $a2, 0x28($s0)
    ctx->pc = 0x43f024u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 6));
label_43f028:
    // 0x43f028: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x43f028u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
label_43f02c:
    // 0x43f02c: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x43f02cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
label_43f030:
    // 0x43f030: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x43f030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_43f034:
    // 0x43f034: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x43f034u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
label_43f038:
    // 0x43f038: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x43f038u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
label_43f03c:
    // 0x43f03c: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x43f03cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
label_43f040:
    // 0x43f040: 0xae05003c  sw          $a1, 0x3C($s0)
    ctx->pc = 0x43f040u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 5));
label_43f044:
    // 0x43f044: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x43f044u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
label_43f048:
    // 0x43f048: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x43f048u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
label_43f04c:
    // 0x43f04c: 0xae030048  sw          $v1, 0x48($s0)
    ctx->pc = 0x43f04cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 3));
label_43f050:
    // 0x43f050: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x43f050u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
label_43f054:
    // 0x43f054: 0xc04c968  jal         func_1325A0
label_43f058:
    if (ctx->pc == 0x43F058u) {
        ctx->pc = 0x43F058u;
            // 0x43f058: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x43F05Cu;
        goto label_43f05c;
    }
    ctx->pc = 0x43F054u;
    SET_GPR_U32(ctx, 31, 0x43F05Cu);
    ctx->pc = 0x43F058u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43F054u;
            // 0x43f058: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43F05Cu; }
        if (ctx->pc != 0x43F05Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43F05Cu; }
        if (ctx->pc != 0x43F05Cu) { return; }
    }
    ctx->pc = 0x43F05Cu;
label_43f05c:
    // 0x43f05c: 0xae5000a0  sw          $s0, 0xA0($s2)
    ctx->pc = 0x43f05cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 160), GPR_U32(ctx, 16));
label_43f060:
    // 0x43f060: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x43f060u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_43f064:
    // 0x43f064: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x43f064u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_43f068:
    // 0x43f068: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x43f068u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
label_43f06c:
    // 0x43f06c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x43f06cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_43f070:
    // 0x43f070: 0xae030040  sw          $v1, 0x40($s0)
    ctx->pc = 0x43f070u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 3));
label_43f074:
    // 0x43f074: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x43f074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_43f078:
    // 0x43f078: 0x8e4300b0  lw          $v1, 0xB0($s2)
    ctx->pc = 0x43f078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
label_43f07c:
    // 0x43f07c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x43f07cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_43f080:
    // 0x43f080: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x43f080u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_43f084:
    // 0x43f084: 0xae4200b0  sw          $v0, 0xB0($s2)
    ctx->pc = 0x43f084u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 176), GPR_U32(ctx, 2));
label_43f088:
    // 0x43f088: 0xc6410030  lwc1        $f1, 0x30($s2)
    ctx->pc = 0x43f088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_43f08c:
    // 0x43f08c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x43f08cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_43f090:
    // 0x43f090: 0x45020016  bc1fl       . + 4 + (0x16 << 2)
label_43f094:
    if (ctx->pc == 0x43F094u) {
        ctx->pc = 0x43F094u;
            // 0x43f094: 0x8e030060  lw          $v1, 0x60($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
        ctx->pc = 0x43F098u;
        goto label_43f098;
    }
    ctx->pc = 0x43F090u;
    {
        const bool branch_taken_0x43f090 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x43f090) {
            ctx->pc = 0x43F094u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x43F090u;
            // 0x43f094: 0x8e030060  lw          $v1, 0x60($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x43F0ECu;
            goto label_43f0ec;
        }
    }
    ctx->pc = 0x43F098u;
label_43f098:
    // 0x43f098: 0x8e070060  lw          $a3, 0x60($s0)
    ctx->pc = 0x43f098u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_43f09c:
    // 0x43f09c: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x43f09cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_43f0a0:
    // 0x43f0a0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x43f0a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_43f0a4:
    // 0x43f0a4: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x43f0a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_43f0a8:
    // 0x43f0a8: 0x3c0442f0  lui         $a0, 0x42F0
    ctx->pc = 0x43f0a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17136 << 16));
label_43f0ac:
    // 0x43f0ac: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x43f0acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
label_43f0b0:
    // 0x43f0b0: 0xe23824  and         $a3, $a3, $v0
    ctx->pc = 0x43f0b0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
label_43f0b4:
    // 0x43f0b4: 0x34e70001  ori         $a3, $a3, 0x1
    ctx->pc = 0x43f0b4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)1);
label_43f0b8:
    // 0x43f0b8: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x43f0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_43f0bc:
    // 0x43f0bc: 0xae070060  sw          $a3, 0x60($s0)
    ctx->pc = 0x43f0bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 7));
label_43f0c0:
    // 0x43f0c0: 0xae46008c  sw          $a2, 0x8C($s2)
    ctx->pc = 0x43f0c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 6));
label_43f0c4:
    // 0x43f0c4: 0xae450070  sw          $a1, 0x70($s2)
    ctx->pc = 0x43f0c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 112), GPR_U32(ctx, 5));
label_43f0c8:
    // 0x43f0c8: 0xae440078  sw          $a0, 0x78($s2)
    ctx->pc = 0x43f0c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 120), GPR_U32(ctx, 4));
label_43f0cc:
    // 0x43f0cc: 0xae430080  sw          $v1, 0x80($s2)
    ctx->pc = 0x43f0ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 128), GPR_U32(ctx, 3));
label_43f0d0:
    // 0x43f0d0: 0xa2420064  sb          $v0, 0x64($s2)
    ctx->pc = 0x43f0d0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 100), (uint8_t)GPR_U32(ctx, 2));
label_43f0d4:
    // 0x43f0d4: 0xa2460065  sb          $a2, 0x65($s2)
    ctx->pc = 0x43f0d4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 101), (uint8_t)GPR_U32(ctx, 6));
label_43f0d8:
    // 0x43f0d8: 0xa2400068  sb          $zero, 0x68($s2)
    ctx->pc = 0x43f0d8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 104), (uint8_t)GPR_U32(ctx, 0));
label_43f0dc:
    // 0x43f0dc: 0xa2460069  sb          $a2, 0x69($s2)
    ctx->pc = 0x43f0dcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 105), (uint8_t)GPR_U32(ctx, 6));
label_43f0e0:
    // 0x43f0e0: 0xa240006a  sb          $zero, 0x6A($s2)
    ctx->pc = 0x43f0e0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 106), (uint8_t)GPR_U32(ctx, 0));
label_43f0e4:
    // 0x43f0e4: 0x10000014  b           . + 4 + (0x14 << 2)
label_43f0e8:
    if (ctx->pc == 0x43F0E8u) {
        ctx->pc = 0x43F0E8u;
            // 0x43f0e8: 0xa246006b  sb          $a2, 0x6B($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 107), (uint8_t)GPR_U32(ctx, 6));
        ctx->pc = 0x43F0ECu;
        goto label_43f0ec;
    }
    ctx->pc = 0x43F0E4u;
    {
        const bool branch_taken_0x43f0e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43F0E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43F0E4u;
            // 0x43f0e8: 0xa246006b  sb          $a2, 0x6B($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 107), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43f0e4) {
            ctx->pc = 0x43F138u;
            goto label_43f138;
        }
    }
    ctx->pc = 0x43F0ECu;
label_43f0ec:
    // 0x43f0ec: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x43f0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_43f0f0:
    // 0x43f0f0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x43f0f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_43f0f4:
    // 0x43f0f4: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x43f0f4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
label_43f0f8:
    // 0x43f0f8: 0x3c054270  lui         $a1, 0x4270
    ctx->pc = 0x43f0f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17008 << 16));
label_43f0fc:
    // 0x43f0fc: 0x3c044396  lui         $a0, 0x4396
    ctx->pc = 0x43f0fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17302 << 16));
label_43f100:
    // 0x43f100: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x43f100u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_43f104:
    // 0x43f104: 0xae020060  sw          $v0, 0x60($s0)
    ctx->pc = 0x43f104u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
label_43f108:
    // 0x43f108: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x43f108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_43f10c:
    // 0x43f10c: 0xae47008c  sw          $a3, 0x8C($s2)
    ctx->pc = 0x43f10cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 7));
label_43f110:
    // 0x43f110: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x43f110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_43f114:
    // 0x43f114: 0xae460070  sw          $a2, 0x70($s2)
    ctx->pc = 0x43f114u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 112), GPR_U32(ctx, 6));
label_43f118:
    // 0x43f118: 0xae450078  sw          $a1, 0x78($s2)
    ctx->pc = 0x43f118u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 120), GPR_U32(ctx, 5));
label_43f11c:
    // 0x43f11c: 0xae440080  sw          $a0, 0x80($s2)
    ctx->pc = 0x43f11cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 128), GPR_U32(ctx, 4));
label_43f120:
    // 0x43f120: 0xa2430064  sb          $v1, 0x64($s2)
    ctx->pc = 0x43f120u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 100), (uint8_t)GPR_U32(ctx, 3));
label_43f124:
    // 0x43f124: 0xa2470065  sb          $a3, 0x65($s2)
    ctx->pc = 0x43f124u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 101), (uint8_t)GPR_U32(ctx, 7));
label_43f128:
    // 0x43f128: 0xa2420068  sb          $v0, 0x68($s2)
    ctx->pc = 0x43f128u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 104), (uint8_t)GPR_U32(ctx, 2));
label_43f12c:
    // 0x43f12c: 0xa2400069  sb          $zero, 0x69($s2)
    ctx->pc = 0x43f12cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 105), (uint8_t)GPR_U32(ctx, 0));
label_43f130:
    // 0x43f130: 0xa240006a  sb          $zero, 0x6A($s2)
    ctx->pc = 0x43f130u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 106), (uint8_t)GPR_U32(ctx, 0));
label_43f134:
    // 0x43f134: 0xa247006b  sb          $a3, 0x6B($s2)
    ctx->pc = 0x43f134u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 107), (uint8_t)GPR_U32(ctx, 7));
label_43f138:
    // 0x43f138: 0xc040180  jal         func_100600
label_43f13c:
    if (ctx->pc == 0x43F13Cu) {
        ctx->pc = 0x43F13Cu;
            // 0x43f13c: 0x24040024  addiu       $a0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->pc = 0x43F140u;
        goto label_43f140;
    }
    ctx->pc = 0x43F138u;
    SET_GPR_U32(ctx, 31, 0x43F140u);
    ctx->pc = 0x43F13Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43F138u;
            // 0x43f13c: 0x24040024  addiu       $a0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43F140u; }
        if (ctx->pc != 0x43F140u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43F140u; }
        if (ctx->pc != 0x43F140u) { return; }
    }
    ctx->pc = 0x43F140u;
label_43f140:
    // 0x43f140: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x43f140u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_43f144:
    // 0x43f144: 0x12000020  beqz        $s0, . + 4 + (0x20 << 2)
label_43f148:
    if (ctx->pc == 0x43F148u) {
        ctx->pc = 0x43F14Cu;
        goto label_43f14c;
    }
    ctx->pc = 0x43F144u;
    {
        const bool branch_taken_0x43f144 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x43f144) {
            ctx->pc = 0x43F1C8u;
            goto label_43f1c8;
        }
    }
    ctx->pc = 0x43F14Cu;
label_43f14c:
    // 0x43f14c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x43f14cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_43f150:
    // 0x43f150: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x43f150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_43f154:
    // 0x43f154: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x43f154u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_43f158:
    // 0x43f158: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x43f158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_43f15c:
    // 0x43f15c: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x43f15cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_43f160:
    // 0x43f160: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x43f160u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_43f164:
    // 0x43f164: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x43f164u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_43f168:
    // 0x43f168: 0xc040138  jal         func_1004E0
label_43f16c:
    if (ctx->pc == 0x43F16Cu) {
        ctx->pc = 0x43F16Cu;
            // 0x43f16c: 0xa2000020  sb          $zero, 0x20($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 32), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x43F170u;
        goto label_43f170;
    }
    ctx->pc = 0x43F168u;
    SET_GPR_U32(ctx, 31, 0x43F170u);
    ctx->pc = 0x43F16Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43F168u;
            // 0x43f16c: 0xa2000020  sb          $zero, 0x20($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 32), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43F170u; }
        if (ctx->pc != 0x43F170u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43F170u; }
        if (ctx->pc != 0x43F170u) { return; }
    }
    ctx->pc = 0x43F170u;
label_43f170:
    // 0x43f170: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x43f170u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_43f174:
    // 0x43f174: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x43f174u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_43f178:
    // 0x43f178: 0xc040138  jal         func_1004E0
label_43f17c:
    if (ctx->pc == 0x43F17Cu) {
        ctx->pc = 0x43F17Cu;
            // 0x43f17c: 0x240401f0  addiu       $a0, $zero, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 496));
        ctx->pc = 0x43F180u;
        goto label_43f180;
    }
    ctx->pc = 0x43F178u;
    SET_GPR_U32(ctx, 31, 0x43F180u);
    ctx->pc = 0x43F17Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43F178u;
            // 0x43f17c: 0x240401f0  addiu       $a0, $zero, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 496));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43F180u; }
        if (ctx->pc != 0x43F180u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43F180u; }
        if (ctx->pc != 0x43F180u) { return; }
    }
    ctx->pc = 0x43F180u;
label_43f180:
    // 0x43f180: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x43f180u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_43f184:
    // 0x43f184: 0x3c06002c  lui         $a2, 0x2C
    ctx->pc = 0x43f184u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)44 << 16));
label_43f188:
    // 0x43f188: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x43f188u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_43f18c:
    // 0x43f18c: 0x24a583b0  addiu       $a1, $a1, -0x7C50
    ctx->pc = 0x43f18cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935472));
label_43f190:
    // 0x43f190: 0x24c6b410  addiu       $a2, $a2, -0x4BF0
    ctx->pc = 0x43f190u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294947856));
label_43f194:
    // 0x43f194: 0x24070060  addiu       $a3, $zero, 0x60
    ctx->pc = 0x43f194u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_43f198:
    // 0x43f198: 0xc040840  jal         func_102100
label_43f19c:
    if (ctx->pc == 0x43F19Cu) {
        ctx->pc = 0x43F19Cu;
            // 0x43f19c: 0x24080005  addiu       $t0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x43F1A0u;
        goto label_43f1a0;
    }
    ctx->pc = 0x43F198u;
    SET_GPR_U32(ctx, 31, 0x43F1A0u);
    ctx->pc = 0x43F19Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43F198u;
            // 0x43f19c: 0x24080005  addiu       $t0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43F1A0u; }
        if (ctx->pc != 0x43F1A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43F1A0u; }
        if (ctx->pc != 0x43F1A0u) { return; }
    }
    ctx->pc = 0x43F1A0u;
label_43f1a0:
    // 0x43f1a0: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x43f1a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_43f1a4:
    // 0x43f1a4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x43f1a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_43f1a8:
    // 0x43f1a8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x43f1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_43f1ac:
    // 0x43f1ac: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x43f1acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_43f1b0:
    // 0x43f1b0: 0x28830005  slti        $v1, $a0, 0x5
    ctx->pc = 0x43f1b0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)5) ? 1 : 0);
label_43f1b4:
    // 0x43f1b4: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x43f1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
label_43f1b8:
    // 0x43f1b8: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x43f1b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_43f1bc:
    // 0x43f1bc: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_43f1c0:
    if (ctx->pc == 0x43F1C0u) {
        ctx->pc = 0x43F1C4u;
        goto label_43f1c4;
    }
    ctx->pc = 0x43F1BCu;
    {
        const bool branch_taken_0x43f1bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x43f1bc) {
            ctx->pc = 0x43F1A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_43f1a8;
        }
    }
    ctx->pc = 0x43F1C4u;
label_43f1c4:
    // 0x43f1c4: 0x0  nop
    ctx->pc = 0x43f1c4u;
    // NOP
label_43f1c8:
    // 0x43f1c8: 0xae50009c  sw          $s0, 0x9C($s2)
    ctx->pc = 0x43f1c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 156), GPR_U32(ctx, 16));
label_43f1cc:
    // 0x43f1cc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x43f1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_43f1d0:
    // 0x43f1d0: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x43f1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
label_43f1d4:
    // 0x43f1d4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x43f1d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_43f1d8:
    // 0x43f1d8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x43f1d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_43f1dc:
    // 0x43f1dc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x43f1dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_43f1e0:
    // 0x43f1e0: 0xc0e7d2c  jal         func_39F4B0
label_43f1e4:
    if (ctx->pc == 0x43F1E4u) {
        ctx->pc = 0x43F1E4u;
            // 0x43f1e4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43F1E8u;
        goto label_43f1e8;
    }
    ctx->pc = 0x43F1E0u;
    SET_GPR_U32(ctx, 31, 0x43F1E8u);
    ctx->pc = 0x43F1E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43F1E0u;
            // 0x43f1e4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x39F4B0u;
    if (runtime->hasFunction(0x39F4B0u)) {
        auto targetFn = runtime->lookupFunction(0x39F4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43F1E8u; }
        if (ctx->pc != 0x43F1E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0039F4B0_0x39f4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43F1E8u; }
        if (ctx->pc != 0x43F1E8u) { return; }
    }
    ctx->pc = 0x43F1E8u;
label_43f1e8:
    // 0x43f1e8: 0x8e43009c  lw          $v1, 0x9C($s2)
    ctx->pc = 0x43f1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
label_43f1ec:
    // 0x43f1ec: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x43f1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
label_43f1f0:
    // 0x43f1f0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x43f1f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_43f1f4:
    // 0x43f1f4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x43f1f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_43f1f8:
    // 0x43f1f8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x43f1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_43f1fc:
    // 0x43f1fc: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x43f1fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_43f200:
    // 0x43f200: 0xc0e7d2c  jal         func_39F4B0
label_43f204:
    if (ctx->pc == 0x43F204u) {
        ctx->pc = 0x43F204u;
            // 0x43f204: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43F208u;
        goto label_43f208;
    }
    ctx->pc = 0x43F200u;
    SET_GPR_U32(ctx, 31, 0x43F208u);
    ctx->pc = 0x43F204u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43F200u;
            // 0x43f204: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x39F4B0u;
    if (runtime->hasFunction(0x39F4B0u)) {
        auto targetFn = runtime->lookupFunction(0x39F4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43F208u; }
        if (ctx->pc != 0x43F208u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0039F4B0_0x39f4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43F208u; }
        if (ctx->pc != 0x43F208u) { return; }
    }
    ctx->pc = 0x43F208u;
label_43f208:
    // 0x43f208: 0x8e43009c  lw          $v1, 0x9C($s2)
    ctx->pc = 0x43f208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
label_43f20c:
    // 0x43f20c: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x43f20cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
label_43f210:
    // 0x43f210: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x43f210u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_43f214:
    // 0x43f214: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x43f214u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_43f218:
    // 0x43f218: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x43f218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_43f21c:
    // 0x43f21c: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x43f21cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_43f220:
    // 0x43f220: 0xc0e7d2c  jal         func_39F4B0
label_43f224:
    if (ctx->pc == 0x43F224u) {
        ctx->pc = 0x43F224u;
            // 0x43f224: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43F228u;
        goto label_43f228;
    }
    ctx->pc = 0x43F220u;
    SET_GPR_U32(ctx, 31, 0x43F228u);
    ctx->pc = 0x43F224u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43F220u;
            // 0x43f224: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x39F4B0u;
    if (runtime->hasFunction(0x39F4B0u)) {
        auto targetFn = runtime->lookupFunction(0x39F4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43F228u; }
        if (ctx->pc != 0x43F228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0039F4B0_0x39f4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43F228u; }
        if (ctx->pc != 0x43F228u) { return; }
    }
    ctx->pc = 0x43F228u;
label_43f228:
    // 0x43f228: 0x8e43009c  lw          $v1, 0x9C($s2)
    ctx->pc = 0x43f228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
label_43f22c:
    // 0x43f22c: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x43f22cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
label_43f230:
    // 0x43f230: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x43f230u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_43f234:
    // 0x43f234: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x43f234u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_43f238:
    // 0x43f238: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x43f238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_43f23c:
    // 0x43f23c: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x43f23cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_43f240:
    // 0x43f240: 0xc0e7d2c  jal         func_39F4B0
label_43f244:
    if (ctx->pc == 0x43F244u) {
        ctx->pc = 0x43F244u;
            // 0x43f244: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43F248u;
        goto label_43f248;
    }
    ctx->pc = 0x43F240u;
    SET_GPR_U32(ctx, 31, 0x43F248u);
    ctx->pc = 0x43F244u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43F240u;
            // 0x43f244: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x39F4B0u;
    if (runtime->hasFunction(0x39F4B0u)) {
        auto targetFn = runtime->lookupFunction(0x39F4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43F248u; }
        if (ctx->pc != 0x43F248u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0039F4B0_0x39f4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43F248u; }
        if (ctx->pc != 0x43F248u) { return; }
    }
    ctx->pc = 0x43F248u;
label_43f248:
    // 0x43f248: 0x8e43009c  lw          $v1, 0x9C($s2)
    ctx->pc = 0x43f248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
label_43f24c:
    // 0x43f24c: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x43f24cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
label_43f250:
    // 0x43f250: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x43f250u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_43f254:
    // 0x43f254: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x43f254u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_43f258:
    // 0x43f258: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x43f258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_43f25c:
    // 0x43f25c: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x43f25cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_43f260:
    // 0x43f260: 0xc0e7d2c  jal         func_39F4B0
label_43f264:
    if (ctx->pc == 0x43F264u) {
        ctx->pc = 0x43F264u;
            // 0x43f264: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43F268u;
        goto label_43f268;
    }
    ctx->pc = 0x43F260u;
    SET_GPR_U32(ctx, 31, 0x43F268u);
    ctx->pc = 0x43F264u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43F260u;
            // 0x43f264: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x39F4B0u;
    if (runtime->hasFunction(0x39F4B0u)) {
        auto targetFn = runtime->lookupFunction(0x39F4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43F268u; }
        if (ctx->pc != 0x43F268u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0039F4B0_0x39f4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43F268u; }
        if (ctx->pc != 0x43F268u) { return; }
    }
    ctx->pc = 0x43F268u;
label_43f268:
    // 0x43f268: 0x8e4300b0  lw          $v1, 0xB0($s2)
    ctx->pc = 0x43f268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
label_43f26c:
    // 0x43f26c: 0x2402fff7  addiu       $v0, $zero, -0x9
    ctx->pc = 0x43f26cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
label_43f270:
    // 0x43f270: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x43f270u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_43f274:
    // 0x43f274: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x43f274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_43f278:
    // 0x43f278: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x43f278u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
label_43f27c:
    // 0x43f27c: 0xc040180  jal         func_100600
label_43f280:
    if (ctx->pc == 0x43F280u) {
        ctx->pc = 0x43F280u;
            // 0x43f280: 0xae4200b0  sw          $v0, 0xB0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 176), GPR_U32(ctx, 2));
        ctx->pc = 0x43F284u;
        goto label_43f284;
    }
    ctx->pc = 0x43F27Cu;
    SET_GPR_U32(ctx, 31, 0x43F284u);
    ctx->pc = 0x43F280u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43F27Cu;
            // 0x43f280: 0xae4200b0  sw          $v0, 0xB0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43F284u; }
        if (ctx->pc != 0x43F284u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43F284u; }
        if (ctx->pc != 0x43F284u) { return; }
    }
    ctx->pc = 0x43F284u;
label_43f284:
    // 0x43f284: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x43f284u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_43f288:
    // 0x43f288: 0x5200000f  beql        $s0, $zero, . + 4 + (0xF << 2)
label_43f28c:
    if (ctx->pc == 0x43F28Cu) {
        ctx->pc = 0x43F28Cu;
            // 0x43f28c: 0x3c02461c  lui         $v0, 0x461C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
        ctx->pc = 0x43F290u;
        goto label_43f290;
    }
    ctx->pc = 0x43F288u;
    {
        const bool branch_taken_0x43f288 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x43f288) {
            ctx->pc = 0x43F28Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x43F288u;
            // 0x43f28c: 0x3c02461c  lui         $v0, 0x461C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x43F2C8u;
            goto label_43f2c8;
        }
    }
    ctx->pc = 0x43F290u;
label_43f290:
    // 0x43f290: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x43f290u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_43f294:
    // 0x43f294: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x43f294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_43f298:
    // 0x43f298: 0x24632db8  addiu       $v1, $v1, 0x2DB8
    ctx->pc = 0x43f298u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11704));
label_43f29c:
    // 0x43f29c: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x43f29cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_43f2a0:
    // 0x43f2a0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x43f2a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_43f2a4:
    // 0x43f2a4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x43f2a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_43f2a8:
    // 0x43f2a8: 0xc040138  jal         func_1004E0
label_43f2ac:
    if (ctx->pc == 0x43F2ACu) {
        ctx->pc = 0x43F2ACu;
            // 0x43f2ac: 0xa2020008  sb          $v0, 0x8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x43F2B0u;
        goto label_43f2b0;
    }
    ctx->pc = 0x43F2A8u;
    SET_GPR_U32(ctx, 31, 0x43F2B0u);
    ctx->pc = 0x43F2ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43F2A8u;
            // 0x43f2ac: 0xa2020008  sb          $v0, 0x8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43F2B0u; }
        if (ctx->pc != 0x43F2B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43F2B0u; }
        if (ctx->pc != 0x43F2B0u) { return; }
    }
    ctx->pc = 0x43F2B0u;
label_43f2b0:
    // 0x43f2b0: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x43f2b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_43f2b4:
    // 0x43f2b4: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x43f2b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_43f2b8:
    // 0x43f2b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x43f2b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_43f2bc:
    // 0x43f2bc: 0xc04a576  jal         func_1295D8
label_43f2c0:
    if (ctx->pc == 0x43F2C0u) {
        ctx->pc = 0x43F2C0u;
            // 0x43f2c0: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x43F2C4u;
        goto label_43f2c4;
    }
    ctx->pc = 0x43F2BCu;
    SET_GPR_U32(ctx, 31, 0x43F2C4u);
    ctx->pc = 0x43F2C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43F2BCu;
            // 0x43f2c0: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43F2C4u; }
        if (ctx->pc != 0x43F2C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43F2C4u; }
        if (ctx->pc != 0x43F2C4u) { return; }
    }
    ctx->pc = 0x43F2C4u;
label_43f2c4:
    // 0x43f2c4: 0x3c02461c  lui         $v0, 0x461C
    ctx->pc = 0x43f2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
label_43f2c8:
    // 0x43f2c8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x43f2c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_43f2cc:
    // 0x43f2cc: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x43f2ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_43f2d0:
    // 0x43f2d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x43f2d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_43f2d4:
    // 0x43f2d4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x43f2d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_43f2d8:
    // 0x43f2d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x43f2d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_43f2dc:
    // 0x43f2dc: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x43f2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_43f2e0:
    // 0x43f2e0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x43f2e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_43f2e4:
    // 0x43f2e4: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x43f2e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_43f2e8:
    // 0x43f2e8: 0x344613ae  ori         $a2, $v0, 0x13AE
    ctx->pc = 0x43f2e8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5038);
label_43f2ec:
    // 0x43f2ec: 0xc122cd8  jal         func_48B360
label_43f2f0:
    if (ctx->pc == 0x43F2F0u) {
        ctx->pc = 0x43F2F0u;
            // 0x43f2f0: 0xae5000e4  sw          $s0, 0xE4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 228), GPR_U32(ctx, 16));
        ctx->pc = 0x43F2F4u;
        goto label_43f2f4;
    }
    ctx->pc = 0x43F2ECu;
    SET_GPR_U32(ctx, 31, 0x43F2F4u);
    ctx->pc = 0x43F2F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43F2ECu;
            // 0x43f2f0: 0xae5000e4  sw          $s0, 0xE4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 228), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B360u;
    if (runtime->hasFunction(0x48B360u)) {
        auto targetFn = runtime->lookupFunction(0x48B360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43F2F4u; }
        if (ctx->pc != 0x43F2F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B360_0x48b360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43F2F4u; }
        if (ctx->pc != 0x43F2F4u) { return; }
    }
    ctx->pc = 0x43F2F4u;
label_43f2f4:
    // 0x43f2f4: 0x3c02461c  lui         $v0, 0x461C
    ctx->pc = 0x43f2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
label_43f2f8:
    // 0x43f2f8: 0x8e4400e4  lw          $a0, 0xE4($s2)
    ctx->pc = 0x43f2f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 228)));
label_43f2fc:
    // 0x43f2fc: 0x34434000  ori         $v1, $v0, 0x4000
    ctx->pc = 0x43f2fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_43f300:
    // 0x43f300: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x43f300u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_43f304:
    // 0x43f304: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x43f304u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_43f308:
    // 0x43f308: 0x240613ae  addiu       $a2, $zero, 0x13AE
    ctx->pc = 0x43f308u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5038));
label_43f30c:
    // 0x43f30c: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x43f30cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_43f310:
    // 0x43f310: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x43f310u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_43f314:
    // 0x43f314: 0xc122cd8  jal         func_48B360
label_43f318:
    if (ctx->pc == 0x43F318u) {
        ctx->pc = 0x43F318u;
            // 0x43f318: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43F31Cu;
        goto label_43f31c;
    }
    ctx->pc = 0x43F314u;
    SET_GPR_U32(ctx, 31, 0x43F31Cu);
    ctx->pc = 0x43F318u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43F314u;
            // 0x43f318: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B360u;
    if (runtime->hasFunction(0x48B360u)) {
        auto targetFn = runtime->lookupFunction(0x48B360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43F31Cu; }
        if (ctx->pc != 0x43F31Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B360_0x48b360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43F31Cu; }
        if (ctx->pc != 0x43F31Cu) { return; }
    }
    ctx->pc = 0x43F31Cu;
label_43f31c:
    // 0x43f31c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x43f31cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_43f320:
    // 0x43f320: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x43f320u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_43f324:
    // 0x43f324: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x43f324u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_43f328:
    // 0x43f328: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x43f328u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_43f32c:
    // 0x43f32c: 0x3e00008  jr          $ra
label_43f330:
    if (ctx->pc == 0x43F330u) {
        ctx->pc = 0x43F330u;
            // 0x43f330: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->pc = 0x43F334u;
        goto label_43f334;
    }
    ctx->pc = 0x43F32Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43F330u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43F32Cu;
            // 0x43f330: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x43F334u;
label_43f334:
    // 0x43f334: 0x0  nop
    ctx->pc = 0x43f334u;
    // NOP
label_43f338:
    // 0x43f338: 0x0  nop
    ctx->pc = 0x43f338u;
    // NOP
label_43f33c:
    // 0x43f33c: 0x0  nop
    ctx->pc = 0x43f33cu;
    // NOP
label_43f340:
    // 0x43f340: 0x3e00008  jr          $ra
label_43f344:
    if (ctx->pc == 0x43F344u) {
        ctx->pc = 0x43F348u;
        goto label_43f348;
    }
    ctx->pc = 0x43F340u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x43F348u;
label_43f348:
    // 0x43f348: 0x0  nop
    ctx->pc = 0x43f348u;
    // NOP
label_43f34c:
    // 0x43f34c: 0x0  nop
    ctx->pc = 0x43f34cu;
    // NOP
label_43f350:
    // 0x43f350: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x43f350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_43f354:
    // 0x43f354: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x43f354u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
label_43f358:
    // 0x43f358: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x43f358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_43f35c:
    // 0x43f35c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x43f35cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_43f360:
    // 0x43f360: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x43f360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_43f364:
    // 0x43f364: 0x24c6d290  addiu       $a2, $a2, -0x2D70
    ctx->pc = 0x43f364u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294955664));
label_43f368:
    // 0x43f368: 0xc4a202c0  lwc1        $f2, 0x2C0($a1)
    ctx->pc = 0x43f368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_43f36c:
    // 0x43f36c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x43f36cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_43f370:
    // 0x43f370: 0xc4a102c4  lwc1        $f1, 0x2C4($a1)
    ctx->pc = 0x43f370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_43f374:
    // 0x43f374: 0xc4a002c8  lwc1        $f0, 0x2C8($a1)
    ctx->pc = 0x43f374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_43f378:
    // 0x43f378: 0xe7a20040  swc1        $f2, 0x40($sp)
    ctx->pc = 0x43f378u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_43f37c:
    // 0x43f37c: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x43f37cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_43f380:
    // 0x43f380: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x43f380u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_43f384:
    // 0x43f384: 0xc4a20300  lwc1        $f2, 0x300($a1)
    ctx->pc = 0x43f384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_43f388:
    // 0x43f388: 0xc4a10304  lwc1        $f1, 0x304($a1)
    ctx->pc = 0x43f388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 772)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_43f38c:
    // 0x43f38c: 0xc4a00308  lwc1        $f0, 0x308($a1)
    ctx->pc = 0x43f38cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_43f390:
    // 0x43f390: 0xe7a20030  swc1        $f2, 0x30($sp)
    ctx->pc = 0x43f390u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_43f394:
    // 0x43f394: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x43f394u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_43f398:
    // 0x43f398: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x43f398u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_43f39c:
    // 0x43f39c: 0xc04cafc  jal         func_132BF0
label_43f3a0:
    if (ctx->pc == 0x43F3A0u) {
        ctx->pc = 0x43F3A0u;
            // 0x43f3a0: 0xe7a00038  swc1        $f0, 0x38($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
        ctx->pc = 0x43F3A4u;
        goto label_43f3a4;
    }
    ctx->pc = 0x43F39Cu;
    SET_GPR_U32(ctx, 31, 0x43F3A4u);
    ctx->pc = 0x43F3A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43F39Cu;
            // 0x43f3a0: 0xe7a00038  swc1        $f0, 0x38($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x132BF0u;
    if (runtime->hasFunction(0x132BF0u)) {
        auto targetFn = runtime->lookupFunction(0x132BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43F3A4u; }
        if (ctx->pc != 0x43F3A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132BF0_0x132bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43F3A4u; }
        if (ctx->pc != 0x43F3A4u) { return; }
    }
    ctx->pc = 0x43F3A4u;
label_43f3a4:
    // 0x43f3a4: 0xc040180  jal         func_100600
label_43f3a8:
    if (ctx->pc == 0x43F3A8u) {
        ctx->pc = 0x43F3A8u;
            // 0x43f3a8: 0x24040074  addiu       $a0, $zero, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
        ctx->pc = 0x43F3ACu;
        goto label_43f3ac;
    }
    ctx->pc = 0x43F3A4u;
    SET_GPR_U32(ctx, 31, 0x43F3ACu);
    ctx->pc = 0x43F3A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43F3A4u;
            // 0x43f3a8: 0x24040074  addiu       $a0, $zero, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43F3ACu; }
        if (ctx->pc != 0x43F3ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43F3ACu; }
        if (ctx->pc != 0x43F3ACu) { return; }
    }
    ctx->pc = 0x43F3ACu;
label_43f3ac:
    // 0x43f3ac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x43f3acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_43f3b0:
    // 0x43f3b0: 0x5080002a  beql        $a0, $zero, . + 4 + (0x2A << 2)
label_43f3b4:
    if (ctx->pc == 0x43F3B4u) {
        ctx->pc = 0x43F3B4u;
            // 0x43f3b4: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x43F3B8u;
        goto label_43f3b8;
    }
    ctx->pc = 0x43F3B0u;
    {
        const bool branch_taken_0x43f3b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x43f3b0) {
            ctx->pc = 0x43F3B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x43F3B0u;
            // 0x43f3b4: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x43F45Cu;
            goto label_43f45c;
        }
    }
    ctx->pc = 0x43F3B8u;
label_43f3b8:
    // 0x43f3b8: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x43f3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_43f3bc:
    // 0x43f3bc: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x43f3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_43f3c0:
    // 0x43f3c0: 0xc441d2d0  lwc1        $f1, -0x2D30($v0)
    ctx->pc = 0x43f3c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294955728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_43f3c4:
    // 0x43f3c4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x43f3c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_43f3c8:
    // 0x43f3c8: 0x0  nop
    ctx->pc = 0x43f3c8u;
    // NOP
label_43f3cc:
    // 0x43f3cc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x43f3ccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_43f3d0:
    // 0x43f3d0: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_43f3d4:
    if (ctx->pc == 0x43F3D4u) {
        ctx->pc = 0x43F3D4u;
            // 0x43f3d4: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x43F3D8u;
        goto label_43f3d8;
    }
    ctx->pc = 0x43F3D0u;
    {
        const bool branch_taken_0x43f3d0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x43f3d0) {
            ctx->pc = 0x43F3D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x43F3D0u;
            // 0x43f3d4: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x43F3E8u;
            goto label_43f3e8;
        }
    }
    ctx->pc = 0x43F3D8u;
label_43f3d8:
    // 0x43f3d8: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x43f3d8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_43f3dc:
    // 0x43f3dc: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x43f3dcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_43f3e0:
    // 0x43f3e0: 0x10000006  b           . + 4 + (0x6 << 2)
label_43f3e4:
    if (ctx->pc == 0x43F3E4u) {
        ctx->pc = 0x43F3E8u;
        goto label_43f3e8;
    }
    ctx->pc = 0x43F3E0u;
    {
        const bool branch_taken_0x43f3e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x43f3e0) {
            ctx->pc = 0x43F3FCu;
            goto label_43f3fc;
        }
    }
    ctx->pc = 0x43F3E8u;
label_43f3e8:
    // 0x43f3e8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x43f3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_43f3ec:
    // 0x43f3ec: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x43f3ecu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_43f3f0:
    // 0x43f3f0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x43f3f0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_43f3f4:
    // 0x43f3f4: 0x0  nop
    ctx->pc = 0x43f3f4u;
    // NOP
label_43f3f8:
    // 0x43f3f8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x43f3f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_43f3fc:
    // 0x43f3fc: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x43f3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_43f400:
    // 0x43f400: 0x3c090066  lui         $t1, 0x66
    ctx->pc = 0x43f400u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)102 << 16));
label_43f404:
    // 0x43f404: 0x2442d2a0  addiu       $v0, $v0, -0x2D60
    ctx->pc = 0x43f404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955680));
label_43f408:
    // 0x43f408: 0x3c0a0066  lui         $t2, 0x66
    ctx->pc = 0x43f408u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)102 << 16));
label_43f40c:
    // 0x43f40c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x43f40cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_43f410:
    // 0x43f410: 0x26070890  addiu       $a3, $s0, 0x890
    ctx->pc = 0x43f410u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 2192));
label_43f414:
    // 0x43f414: 0x3c02c47a  lui         $v0, 0xC47A
    ctx->pc = 0x43f414u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50298 << 16));
label_43f418:
    // 0x43f418: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x43f418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
label_43f41c:
    // 0x43f41c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x43f41cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_43f420:
    // 0x43f420: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x43f420u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_43f424:
    // 0x43f424: 0x3c02bf33  lui         $v0, 0xBF33
    ctx->pc = 0x43f424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48947 << 16));
label_43f428:
    // 0x43f428: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x43f428u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_43f42c:
    // 0x43f42c: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x43f42cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_43f430:
    // 0x43f430: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x43f430u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
label_43f434:
    // 0x43f434: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x43f434u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_43f438:
    // 0x43f438: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x43f438u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_43f43c:
    // 0x43f43c: 0x44808000  mtc1        $zero, $f16
    ctx->pc = 0x43f43cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
label_43f440:
    // 0x43f440: 0x27a80040  addiu       $t0, $sp, 0x40
    ctx->pc = 0x43f440u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_43f444:
    // 0x43f444: 0x2529d2b0  addiu       $t1, $t1, -0x2D50
    ctx->pc = 0x43f444u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294955696));
label_43f448:
    // 0x43f448: 0x254ad2c0  addiu       $t2, $t2, -0x2D40
    ctx->pc = 0x43f448u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294955712));
label_43f44c:
    // 0x43f44c: 0x27ab0030  addiu       $t3, $sp, 0x30
    ctx->pc = 0x43f44cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_43f450:
    // 0x43f450: 0xc0db488  jal         func_36D220
label_43f454:
    if (ctx->pc == 0x43F454u) {
        ctx->pc = 0x43F454u;
            // 0x43f454: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->pc = 0x43F458u;
        goto label_43f458;
    }
    ctx->pc = 0x43F450u;
    SET_GPR_U32(ctx, 31, 0x43F458u);
    ctx->pc = 0x43F454u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43F450u;
            // 0x43f454: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x36D220u;
    if (runtime->hasFunction(0x36D220u)) {
        auto targetFn = runtime->lookupFunction(0x36D220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43F458u; }
        if (ctx->pc != 0x43F458u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0036D220_0x36d220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43F458u; }
        if (ctx->pc != 0x43F458u) { return; }
    }
    ctx->pc = 0x43F458u;
label_43f458:
    // 0x43f458: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x43f458u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_43f45c:
    // 0x43f45c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x43f45cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_43f460:
    // 0x43f460: 0x3e00008  jr          $ra
label_43f464:
    if (ctx->pc == 0x43F464u) {
        ctx->pc = 0x43F464u;
            // 0x43f464: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x43F468u;
        goto label_43f468;
    }
    ctx->pc = 0x43F460u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43F464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43F460u;
            // 0x43f464: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x43F468u;
label_43f468:
    // 0x43f468: 0x0  nop
    ctx->pc = 0x43f468u;
    // NOP
label_43f46c:
    // 0x43f46c: 0x0  nop
    ctx->pc = 0x43f46cu;
    // NOP
label_43f470:
    // 0x43f470: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x43f470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_43f474:
    // 0x43f474: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x43f474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_43f478:
    // 0x43f478: 0xc4ac0000  lwc1        $f12, 0x0($a1)
    ctx->pc = 0x43f478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_43f47c:
    // 0x43f47c: 0xc4ad0004  lwc1        $f13, 0x4($a1)
    ctx->pc = 0x43f47cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_43f480:
    // 0x43f480: 0xc4ae0008  lwc1        $f14, 0x8($a1)
    ctx->pc = 0x43f480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_43f484:
    // 0x43f484: 0xc04cbd8  jal         func_132F60
label_43f488:
    if (ctx->pc == 0x43F488u) {
        ctx->pc = 0x43F488u;
            // 0x43f488: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x43F48Cu;
        goto label_43f48c;
    }
    ctx->pc = 0x43F484u;
    SET_GPR_U32(ctx, 31, 0x43F48Cu);
    ctx->pc = 0x43F488u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43F484u;
            // 0x43f488: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43F48Cu; }
        if (ctx->pc != 0x43F48Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43F48Cu; }
        if (ctx->pc != 0x43F48Cu) { return; }
    }
    ctx->pc = 0x43F48Cu;
label_43f48c:
    // 0x43f48c: 0xc7ac0010  lwc1        $f12, 0x10($sp)
    ctx->pc = 0x43f48cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_43f490:
    // 0x43f490: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x43f490u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_43f494:
    // 0x43f494: 0x44807800  mtc1        $zero, $f15
    ctx->pc = 0x43f494u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_43f498:
    // 0x43f498: 0x2405003d  addiu       $a1, $zero, 0x3D
    ctx->pc = 0x43f498u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
label_43f49c:
    // 0x43f49c: 0xc7ad0014  lwc1        $f13, 0x14($sp)
    ctx->pc = 0x43f49cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_43f4a0:
    // 0x43f4a0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x43f4a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_43f4a4:
    // 0x43f4a4: 0xc7ae0018  lwc1        $f14, 0x18($sp)
    ctx->pc = 0x43f4a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_43f4a8:
    // 0x43f4a8: 0x46007c06  mov.s       $f16, $f15
    ctx->pc = 0x43f4a8u;
    ctx->f[16] = FPU_MOV_S(ctx->f[15]);
label_43f4ac:
    // 0x43f4ac: 0xc0bafb8  jal         func_2EBEE0
label_43f4b0:
    if (ctx->pc == 0x43F4B0u) {
        ctx->pc = 0x43F4B0u;
            // 0x43f4b0: 0x46007c46  mov.s       $f17, $f15 (Delay Slot)
        ctx->f[17] = FPU_MOV_S(ctx->f[15]);
        ctx->pc = 0x43F4B4u;
        goto label_43f4b4;
    }
    ctx->pc = 0x43F4ACu;
    SET_GPR_U32(ctx, 31, 0x43F4B4u);
    ctx->pc = 0x43F4B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43F4ACu;
            // 0x43f4b0: 0x46007c46  mov.s       $f17, $f15 (Delay Slot)
        ctx->f[17] = FPU_MOV_S(ctx->f[15]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EBEE0u;
    if (runtime->hasFunction(0x2EBEE0u)) {
        auto targetFn = runtime->lookupFunction(0x2EBEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43F4B4u; }
        if (ctx->pc != 0x43F4B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EBEE0_0x2ebee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43F4B4u; }
        if (ctx->pc != 0x43F4B4u) { return; }
    }
    ctx->pc = 0x43F4B4u;
label_43f4b4:
    // 0x43f4b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x43f4b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_43f4b8:
    // 0x43f4b8: 0x3e00008  jr          $ra
label_43f4bc:
    if (ctx->pc == 0x43F4BCu) {
        ctx->pc = 0x43F4BCu;
            // 0x43f4bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x43F4C0u;
        goto label_43f4c0;
    }
    ctx->pc = 0x43F4B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43F4BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43F4B8u;
            // 0x43f4bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x43F4C0u;
label_43f4c0:
    // 0x43f4c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x43f4c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_43f4c4:
    // 0x43f4c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x43f4c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_43f4c8:
    // 0x43f4c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x43f4c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_43f4cc:
    // 0x43f4cc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x43f4ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_43f4d0:
    // 0x43f4d0: 0xc04ab66  jal         func_12AD98
label_43f4d4:
    if (ctx->pc == 0x43F4D4u) {
        ctx->pc = 0x43F4D4u;
            // 0x43f4d4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x43F4D8u;
        goto label_43f4d8;
    }
    ctx->pc = 0x43F4D0u;
    SET_GPR_U32(ctx, 31, 0x43F4D8u);
    ctx->pc = 0x43F4D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43F4D0u;
            // 0x43f4d4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43F4D8u; }
        if (ctx->pc != 0x43F4D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43F4D8u; }
        if (ctx->pc != 0x43F4D8u) { return; }
    }
    ctx->pc = 0x43F4D8u;
label_43f4d8:
    // 0x43f4d8: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x43f4d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_43f4dc:
    // 0x43f4dc: 0xc04ab66  jal         func_12AD98
label_43f4e0:
    if (ctx->pc == 0x43F4E0u) {
        ctx->pc = 0x43F4E0u;
            // 0x43f4e0: 0x28740  sll         $s0, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->pc = 0x43F4E4u;
        goto label_43f4e4;
    }
    ctx->pc = 0x43F4DCu;
    SET_GPR_U32(ctx, 31, 0x43F4E4u);
    ctx->pc = 0x43F4E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43F4DCu;
            // 0x43f4e0: 0x28740  sll         $s0, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43F4E4u; }
        if (ctx->pc != 0x43F4E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43F4E4u; }
        if (ctx->pc != 0x43F4E4u) { return; }
    }
    ctx->pc = 0x43F4E4u;
label_43f4e4:
    // 0x43f4e4: 0x501825  or          $v1, $v0, $s0
    ctx->pc = 0x43f4e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
label_43f4e8:
    // 0x43f4e8: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x43f4e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
label_43f4ec:
    // 0x43f4ec: 0x54600006  bnel        $v1, $zero, . + 4 + (0x6 << 2)
label_43f4f0:
    if (ctx->pc == 0x43F4F0u) {
        ctx->pc = 0x43F4F0u;
            // 0x43f4f0: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x43F4F4u;
        goto label_43f4f4;
    }
    ctx->pc = 0x43F4ECu;
    {
        const bool branch_taken_0x43f4ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x43f4ec) {
            ctx->pc = 0x43F4F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x43F4ECu;
            // 0x43f4f0: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x43F508u;
            goto label_43f508;
        }
    }
    ctx->pc = 0x43F4F4u;
label_43f4f4:
    // 0x43f4f4: 0x8e2400e4  lw          $a0, 0xE4($s1)
    ctx->pc = 0x43f4f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 228)));
label_43f4f8:
    // 0x43f4f8: 0x26260010  addiu       $a2, $s1, 0x10
    ctx->pc = 0x43f4f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_43f4fc:
    // 0x43f4fc: 0xc122d2c  jal         func_48B4B0
label_43f500:
    if (ctx->pc == 0x43F500u) {
        ctx->pc = 0x43F500u;
            // 0x43f500: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x43F504u;
        goto label_43f504;
    }
    ctx->pc = 0x43F4FCu;
    SET_GPR_U32(ctx, 31, 0x43F504u);
    ctx->pc = 0x43F500u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43F4FCu;
            // 0x43f500: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B4B0u;
    if (runtime->hasFunction(0x48B4B0u)) {
        auto targetFn = runtime->lookupFunction(0x48B4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43F504u; }
        if (ctx->pc != 0x43F504u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B4B0_0x48b4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43F504u; }
        if (ctx->pc != 0x43F504u) { return; }
    }
    ctx->pc = 0x43F504u;
label_43f504:
    // 0x43f504: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x43f504u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_43f508:
    // 0x43f508: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x43f508u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_43f50c:
    // 0x43f50c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x43f50cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_43f510:
    // 0x43f510: 0x3e00008  jr          $ra
label_43f514:
    if (ctx->pc == 0x43F514u) {
        ctx->pc = 0x43F514u;
            // 0x43f514: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x43F518u;
        goto label_43f518;
    }
    ctx->pc = 0x43F510u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43F514u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43F510u;
            // 0x43f514: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x43F518u;
label_43f518:
    // 0x43f518: 0x0  nop
    ctx->pc = 0x43f518u;
    // NOP
label_43f51c:
    // 0x43f51c: 0x0  nop
    ctx->pc = 0x43f51cu;
    // NOP
label_43f520:
    // 0x43f520: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x43f520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_43f524:
    // 0x43f524: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x43f524u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_43f528:
    // 0x43f528: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x43f528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_43f52c:
    // 0x43f52c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x43f52cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_43f530:
    // 0x43f530: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x43f530u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_43f534:
    // 0x43f534: 0xc0ba938  jal         func_2EA4E0
label_43f538:
    if (ctx->pc == 0x43F538u) {
        ctx->pc = 0x43F538u;
            // 0x43f538: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x43F53Cu;
        goto label_43f53c;
    }
    ctx->pc = 0x43F534u;
    SET_GPR_U32(ctx, 31, 0x43F53Cu);
    ctx->pc = 0x43F538u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43F534u;
            // 0x43f538: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EA4E0u;
    if (runtime->hasFunction(0x2EA4E0u)) {
        auto targetFn = runtime->lookupFunction(0x2EA4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43F53Cu; }
        if (ctx->pc != 0x43F53Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EA4E0_0x2ea4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43F53Cu; }
        if (ctx->pc != 0x43F53Cu) { return; }
    }
    ctx->pc = 0x43F53Cu;
label_43f53c:
    // 0x43f53c: 0x8e0400e4  lw          $a0, 0xE4($s0)
    ctx->pc = 0x43f53cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
label_43f540:
    // 0x43f540: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x43f540u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_43f544:
    // 0x43f544: 0xc122d2c  jal         func_48B4B0
label_43f548:
    if (ctx->pc == 0x43F548u) {
        ctx->pc = 0x43F548u;
            // 0x43f548: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43F54Cu;
        goto label_43f54c;
    }
    ctx->pc = 0x43F544u;
    SET_GPR_U32(ctx, 31, 0x43F54Cu);
    ctx->pc = 0x43F548u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43F544u;
            // 0x43f548: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B4B0u;
    if (runtime->hasFunction(0x48B4B0u)) {
        auto targetFn = runtime->lookupFunction(0x48B4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43F54Cu; }
        if (ctx->pc != 0x43F54Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B4B0_0x48b4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43F54Cu; }
        if (ctx->pc != 0x43F54Cu) { return; }
    }
    ctx->pc = 0x43F54Cu;
label_43f54c:
    // 0x43f54c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x43f54cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_43f550:
    // 0x43f550: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x43f550u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_43f554:
    // 0x43f554: 0x3e00008  jr          $ra
label_43f558:
    if (ctx->pc == 0x43F558u) {
        ctx->pc = 0x43F558u;
            // 0x43f558: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x43F55Cu;
        goto label_43f55c;
    }
    ctx->pc = 0x43F554u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43F558u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43F554u;
            // 0x43f558: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x43F55Cu;
label_43f55c:
    // 0x43f55c: 0x0  nop
    ctx->pc = 0x43f55cu;
    // NOP
label_43f560:
    // 0x43f560: 0x8c8500e0  lw          $a1, 0xE0($a0)
    ctx->pc = 0x43f560u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 224)));
label_43f564:
    // 0x43f564: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x43f564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_43f568:
    // 0x43f568: 0x10a3001e  beq         $a1, $v1, . + 4 + (0x1E << 2)
label_43f56c:
    if (ctx->pc == 0x43F56Cu) {
        ctx->pc = 0x43F570u;
        goto label_43f570;
    }
    ctx->pc = 0x43F568u;
    {
        const bool branch_taken_0x43f568 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x43f568) {
            ctx->pc = 0x43F5E4u;
            goto label_43f5e4;
        }
    }
    ctx->pc = 0x43F570u;
label_43f570:
    // 0x43f570: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_43f574:
    if (ctx->pc == 0x43F574u) {
        ctx->pc = 0x43F578u;
        goto label_43f578;
    }
    ctx->pc = 0x43F570u;
    {
        const bool branch_taken_0x43f570 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x43f570) {
            ctx->pc = 0x43F580u;
            goto label_43f580;
        }
    }
    ctx->pc = 0x43F578u;
label_43f578:
    // 0x43f578: 0x1000001a  b           . + 4 + (0x1A << 2)
label_43f57c:
    if (ctx->pc == 0x43F57Cu) {
        ctx->pc = 0x43F580u;
        goto label_43f580;
    }
    ctx->pc = 0x43F578u;
    {
        const bool branch_taken_0x43f578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x43f578) {
            ctx->pc = 0x43F5E4u;
            goto label_43f5e4;
        }
    }
    ctx->pc = 0x43F580u;
label_43f580:
    // 0x43f580: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x43f580u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_43f584:
    // 0x43f584: 0x8c85009c  lw          $a1, 0x9C($a0)
    ctx->pc = 0x43f584u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 156)));
label_43f588:
    // 0x43f588: 0x8c630d00  lw          $v1, 0xD00($v1)
    ctx->pc = 0x43f588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3328)));
label_43f58c:
    // 0x43f58c: 0x8c630084  lw          $v1, 0x84($v1)
    ctx->pc = 0x43f58cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_43f590:
    // 0x43f590: 0x8c690030  lw          $t1, 0x30($v1)
    ctx->pc = 0x43f590u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_43f594:
    // 0x43f594: 0xaca9000c  sw          $t1, 0xC($a1)
    ctx->pc = 0x43f594u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 9));
label_43f598:
    // 0x43f598: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x43f598u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_43f59c:
    // 0x43f59c: 0x8cab0000  lw          $t3, 0x0($a1)
    ctx->pc = 0x43f59cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_43f5a0:
    // 0x43f5a0: 0x8caa0010  lw          $t2, 0x10($a1)
    ctx->pc = 0x43f5a0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_43f5a4:
    // 0x43f5a4: 0x8d680000  lw          $t0, 0x0($t3)
    ctx->pc = 0x43f5a4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_43f5a8:
    // 0x43f5a8: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x43f5a8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
label_43f5ac:
    // 0x43f5ac: 0x8c650190  lw          $a1, 0x190($v1)
    ctx->pc = 0x43f5acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 400)));
label_43f5b0:
    // 0x43f5b0: 0x8d070018  lw          $a3, 0x18($t0)
    ctx->pc = 0x43f5b0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 24)));
label_43f5b4:
    // 0x43f5b4: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x43f5b4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
label_43f5b8:
    // 0x43f5b8: 0x730c0  sll         $a2, $a3, 3
    ctx->pc = 0x43f5b8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_43f5bc:
    // 0x43f5bc: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x43f5bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_43f5c0:
    // 0x43f5c0: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x43f5c0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_43f5c4:
    // 0x43f5c4: 0x1263021  addu        $a2, $t1, $a2
    ctx->pc = 0x43f5c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
label_43f5c8:
    // 0x43f5c8: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x43f5c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_43f5cc:
    // 0x43f5cc: 0xc52824  and         $a1, $a2, $a1
    ctx->pc = 0x43f5ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
label_43f5d0:
    // 0x43f5d0: 0x5282b  sltu        $a1, $zero, $a1
    ctx->pc = 0x43f5d0u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_43f5d4:
    // 0x43f5d4: 0x1d40fff3  bgtz        $t2, . + 4 + (-0xD << 2)
label_43f5d8:
    if (ctx->pc == 0x43F5D8u) {
        ctx->pc = 0x43F5D8u;
            // 0x43f5d8: 0xa1050020  sb          $a1, 0x20($t0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 8), 32), (uint8_t)GPR_U32(ctx, 5));
        ctx->pc = 0x43F5DCu;
        goto label_43f5dc;
    }
    ctx->pc = 0x43F5D4u;
    {
        const bool branch_taken_0x43f5d4 = (GPR_S32(ctx, 10) > 0);
        ctx->pc = 0x43F5D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43F5D4u;
            // 0x43f5d8: 0xa1050020  sb          $a1, 0x20($t0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 8), 32), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43f5d4) {
            ctx->pc = 0x43F5A4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_43f5a4;
        }
    }
    ctx->pc = 0x43F5DCu;
label_43f5dc:
    // 0x43f5dc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x43f5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_43f5e0:
    // 0x43f5e0: 0xac8300e0  sw          $v1, 0xE0($a0)
    ctx->pc = 0x43f5e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 224), GPR_U32(ctx, 3));
label_43f5e4:
    // 0x43f5e4: 0x3e00008  jr          $ra
label_43f5e8:
    if (ctx->pc == 0x43F5E8u) {
        ctx->pc = 0x43F5ECu;
        goto label_43f5ec;
    }
    ctx->pc = 0x43F5E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x43F5ECu;
label_43f5ec:
    // 0x43f5ec: 0x0  nop
    ctx->pc = 0x43f5ecu;
    // NOP
label_43f5f0:
    // 0x43f5f0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x43f5f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_43f5f4:
    // 0x43f5f4: 0x3c0200e1  lui         $v0, 0xE1
    ctx->pc = 0x43f5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)225 << 16));
label_43f5f8:
    // 0x43f5f8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x43f5f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_43f5fc:
    // 0x43f5fc: 0x34430120  ori         $v1, $v0, 0x120
    ctx->pc = 0x43f5fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)288);
label_43f600:
    // 0x43f600: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x43f600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_43f604:
    // 0x43f604: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x43f604u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_43f608:
    // 0x43f608: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x43f608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_43f60c:
    // 0x43f60c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x43f60cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_43f610:
    // 0x43f610: 0x8c900050  lw          $s0, 0x50($a0)
    ctx->pc = 0x43f610u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_43f614:
    // 0x43f614: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x43f614u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_43f618:
    // 0x43f618: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x43f618u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_43f61c:
    // 0x43f61c: 0xae03002c  sw          $v1, 0x2C($s0)
    ctx->pc = 0x43f61cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
label_43f620:
    // 0x43f620: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x43f620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_43f624:
    // 0x43f624: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x43f624u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_43f628:
    // 0x43f628: 0xc08bff0  jal         func_22FFC0
label_43f62c:
    if (ctx->pc == 0x43F62Cu) {
        ctx->pc = 0x43F62Cu;
            // 0x43f62c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43F630u;
        goto label_43f630;
    }
    ctx->pc = 0x43F628u;
    SET_GPR_U32(ctx, 31, 0x43F630u);
    ctx->pc = 0x43F62Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43F628u;
            // 0x43f62c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43F630u; }
        if (ctx->pc != 0x43F630u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43F630u; }
        if (ctx->pc != 0x43F630u) { return; }
    }
    ctx->pc = 0x43F630u;
label_43f630:
    // 0x43f630: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x43f630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_43f634:
    // 0x43f634: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x43f634u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_43f638:
    // 0x43f638: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x43f638u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_43f63c:
    // 0x43f63c: 0xc08914c  jal         func_224530
label_43f640:
    if (ctx->pc == 0x43F640u) {
        ctx->pc = 0x43F640u;
            // 0x43f640: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43F644u;
        goto label_43f644;
    }
    ctx->pc = 0x43F63Cu;
    SET_GPR_U32(ctx, 31, 0x43F644u);
    ctx->pc = 0x43F640u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43F63Cu;
            // 0x43f640: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43F644u; }
        if (ctx->pc != 0x43F644u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43F644u; }
        if (ctx->pc != 0x43F644u) { return; }
    }
    ctx->pc = 0x43F644u;
label_43f644:
    // 0x43f644: 0xc0e393c  jal         func_38E4F0
label_43f648:
    if (ctx->pc == 0x43F648u) {
        ctx->pc = 0x43F648u;
            // 0x43f648: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43F64Cu;
        goto label_43f64c;
    }
    ctx->pc = 0x43F644u;
    SET_GPR_U32(ctx, 31, 0x43F64Cu);
    ctx->pc = 0x43F648u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43F644u;
            // 0x43f648: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38E4F0u;
    if (runtime->hasFunction(0x38E4F0u)) {
        auto targetFn = runtime->lookupFunction(0x38E4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43F64Cu; }
        if (ctx->pc != 0x43F64Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038E4F0_0x38e4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43F64Cu; }
        if (ctx->pc != 0x43F64Cu) { return; }
    }
    ctx->pc = 0x43F64Cu;
label_43f64c:
    // 0x43f64c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x43f64cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_43f650:
    // 0x43f650: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x43f650u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
label_43f654:
    // 0x43f654: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x43f654u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
label_43f658:
    // 0x43f658: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x43f658u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
label_43f65c:
    // 0x43f65c: 0xc088b74  jal         func_222DD0
label_43f660:
    if (ctx->pc == 0x43F660u) {
        ctx->pc = 0x43F660u;
            // 0x43f660: 0xafa0005c  sw          $zero, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
        ctx->pc = 0x43F664u;
        goto label_43f664;
    }
    ctx->pc = 0x43F65Cu;
    SET_GPR_U32(ctx, 31, 0x43F664u);
    ctx->pc = 0x43F660u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43F65Cu;
            // 0x43f660: 0xafa0005c  sw          $zero, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43F664u; }
        if (ctx->pc != 0x43F664u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43F664u; }
        if (ctx->pc != 0x43F664u) { return; }
    }
    ctx->pc = 0x43F664u;
label_43f664:
    // 0x43f664: 0x8e1900a0  lw          $t9, 0xA0($s0)
    ctx->pc = 0x43f664u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_43f668:
    // 0x43f668: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x43f668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_43f66c:
    // 0x43f66c: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x43f66cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_43f670:
    // 0x43f670: 0x320f809  jalr        $t9
label_43f674:
    if (ctx->pc == 0x43F674u) {
        ctx->pc = 0x43F674u;
            // 0x43f674: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x43F678u;
        goto label_43f678;
    }
    ctx->pc = 0x43F670u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x43F678u);
        ctx->pc = 0x43F674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43F670u;
            // 0x43f674: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x43F678u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x43F678u; }
            if (ctx->pc != 0x43F678u) { return; }
        }
        }
    }
    ctx->pc = 0x43F678u;
label_43f678:
    // 0x43f678: 0xc088b74  jal         func_222DD0
label_43f67c:
    if (ctx->pc == 0x43F67Cu) {
        ctx->pc = 0x43F67Cu;
            // 0x43f67c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43F680u;
        goto label_43f680;
    }
    ctx->pc = 0x43F678u;
    SET_GPR_U32(ctx, 31, 0x43F680u);
    ctx->pc = 0x43F67Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43F678u;
            // 0x43f67c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43F680u; }
        if (ctx->pc != 0x43F680u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43F680u; }
        if (ctx->pc != 0x43F680u) { return; }
    }
    ctx->pc = 0x43F680u;
label_43f680:
    // 0x43f680: 0x8e1900a0  lw          $t9, 0xA0($s0)
    ctx->pc = 0x43f680u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_43f684:
    // 0x43f684: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x43f684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_43f688:
    // 0x43f688: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x43f688u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_43f68c:
    // 0x43f68c: 0x320f809  jalr        $t9
label_43f690:
    if (ctx->pc == 0x43F690u) {
        ctx->pc = 0x43F690u;
            // 0x43f690: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x43F694u;
        goto label_43f694;
    }
    ctx->pc = 0x43F68Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x43F694u);
        ctx->pc = 0x43F690u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43F68Cu;
            // 0x43f690: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x43F694u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x43F694u; }
            if (ctx->pc != 0x43F694u) { return; }
        }
        }
    }
    ctx->pc = 0x43F694u;
label_43f694:
    // 0x43f694: 0x3c0343d1  lui         $v1, 0x43D1
    ctx->pc = 0x43f694u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17361 << 16));
label_43f698:
    // 0x43f698: 0x3c023e32  lui         $v0, 0x3E32
    ctx->pc = 0x43f698u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15922 << 16));
label_43f69c:
    // 0x43f69c: 0x34637084  ori         $v1, $v1, 0x7084
    ctx->pc = 0x43f69cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)28804);
label_43f6a0:
    // 0x43f6a0: 0x3442b8c2  ori         $v0, $v0, 0xB8C2
    ctx->pc = 0x43f6a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)47298);
label_43f6a4:
    // 0x43f6a4: 0xae030154  sw          $v1, 0x154($s0)
    ctx->pc = 0x43f6a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 340), GPR_U32(ctx, 3));
label_43f6a8:
    // 0x43f6a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x43f6a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_43f6ac:
    // 0x43f6ac: 0xae020158  sw          $v0, 0x158($s0)
    ctx->pc = 0x43f6acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 344), GPR_U32(ctx, 2));
label_43f6b0:
    // 0x43f6b0: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x43f6b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_43f6b4:
    // 0x43f6b4: 0xc6220018  lwc1        $f2, 0x18($s1)
    ctx->pc = 0x43f6b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_43f6b8:
    // 0x43f6b8: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x43f6b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_43f6bc:
    // 0x43f6bc: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x43f6bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_43f6c0:
    // 0x43f6c0: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x43f6c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_43f6c4:
    // 0x43f6c4: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x43f6c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_43f6c8:
    // 0x43f6c8: 0xafa0004c  sw          $zero, 0x4C($sp)
    ctx->pc = 0x43f6c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
label_43f6cc:
    // 0x43f6cc: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x43f6ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_43f6d0:
    // 0x43f6d0: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x43f6d0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_43f6d4:
    // 0x43f6d4: 0xc623002c  lwc1        $f3, 0x2C($s1)
    ctx->pc = 0x43f6d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_43f6d8:
    // 0x43f6d8: 0xc6220028  lwc1        $f2, 0x28($s1)
    ctx->pc = 0x43f6d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_43f6dc:
    // 0x43f6dc: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x43f6dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_43f6e0:
    // 0x43f6e0: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x43f6e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_43f6e4:
    // 0x43f6e4: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x43f6e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_43f6e8:
    // 0x43f6e8: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x43f6e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_43f6ec:
    // 0x43f6ec: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x43f6ecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_43f6f0:
    // 0x43f6f0: 0xc0892b0  jal         func_224AC0
label_43f6f4:
    if (ctx->pc == 0x43F6F4u) {
        ctx->pc = 0x43F6F4u;
            // 0x43f6f4: 0xe7a3003c  swc1        $f3, 0x3C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
        ctx->pc = 0x43F6F8u;
        goto label_43f6f8;
    }
    ctx->pc = 0x43F6F0u;
    SET_GPR_U32(ctx, 31, 0x43F6F8u);
    ctx->pc = 0x43F6F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43F6F0u;
            // 0x43f6f4: 0xe7a3003c  swc1        $f3, 0x3C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224AC0u;
    if (runtime->hasFunction(0x224AC0u)) {
        auto targetFn = runtime->lookupFunction(0x224AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43F6F8u; }
        if (ctx->pc != 0x43F6F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224AC0_0x224ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43F6F8u; }
        if (ctx->pc != 0x43F6F8u) { return; }
    }
    ctx->pc = 0x43F6F8u;
label_43f6f8:
    // 0x43f6f8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x43f6f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_43f6fc:
    // 0x43f6fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x43f6fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_43f700:
    // 0x43f700: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x43f700u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_43f704:
    // 0x43f704: 0x3e00008  jr          $ra
label_43f708:
    if (ctx->pc == 0x43F708u) {
        ctx->pc = 0x43F708u;
            // 0x43f708: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x43F70Cu;
        goto label_43f70c;
    }
    ctx->pc = 0x43F704u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43F708u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43F704u;
            // 0x43f708: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x43F70Cu;
label_43f70c:
    // 0x43f70c: 0x0  nop
    ctx->pc = 0x43f70cu;
    // NOP
}
