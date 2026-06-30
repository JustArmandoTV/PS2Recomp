#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0045E800
// Address: 0x45e800 - 0x45f4e0
void sub_0045E800_0x45e800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0045E800_0x45e800");
#endif

    switch (ctx->pc) {
        case 0x45e800u: goto label_45e800;
        case 0x45e804u: goto label_45e804;
        case 0x45e808u: goto label_45e808;
        case 0x45e80cu: goto label_45e80c;
        case 0x45e810u: goto label_45e810;
        case 0x45e814u: goto label_45e814;
        case 0x45e818u: goto label_45e818;
        case 0x45e81cu: goto label_45e81c;
        case 0x45e820u: goto label_45e820;
        case 0x45e824u: goto label_45e824;
        case 0x45e828u: goto label_45e828;
        case 0x45e82cu: goto label_45e82c;
        case 0x45e830u: goto label_45e830;
        case 0x45e834u: goto label_45e834;
        case 0x45e838u: goto label_45e838;
        case 0x45e83cu: goto label_45e83c;
        case 0x45e840u: goto label_45e840;
        case 0x45e844u: goto label_45e844;
        case 0x45e848u: goto label_45e848;
        case 0x45e84cu: goto label_45e84c;
        case 0x45e850u: goto label_45e850;
        case 0x45e854u: goto label_45e854;
        case 0x45e858u: goto label_45e858;
        case 0x45e85cu: goto label_45e85c;
        case 0x45e860u: goto label_45e860;
        case 0x45e864u: goto label_45e864;
        case 0x45e868u: goto label_45e868;
        case 0x45e86cu: goto label_45e86c;
        case 0x45e870u: goto label_45e870;
        case 0x45e874u: goto label_45e874;
        case 0x45e878u: goto label_45e878;
        case 0x45e87cu: goto label_45e87c;
        case 0x45e880u: goto label_45e880;
        case 0x45e884u: goto label_45e884;
        case 0x45e888u: goto label_45e888;
        case 0x45e88cu: goto label_45e88c;
        case 0x45e890u: goto label_45e890;
        case 0x45e894u: goto label_45e894;
        case 0x45e898u: goto label_45e898;
        case 0x45e89cu: goto label_45e89c;
        case 0x45e8a0u: goto label_45e8a0;
        case 0x45e8a4u: goto label_45e8a4;
        case 0x45e8a8u: goto label_45e8a8;
        case 0x45e8acu: goto label_45e8ac;
        case 0x45e8b0u: goto label_45e8b0;
        case 0x45e8b4u: goto label_45e8b4;
        case 0x45e8b8u: goto label_45e8b8;
        case 0x45e8bcu: goto label_45e8bc;
        case 0x45e8c0u: goto label_45e8c0;
        case 0x45e8c4u: goto label_45e8c4;
        case 0x45e8c8u: goto label_45e8c8;
        case 0x45e8ccu: goto label_45e8cc;
        case 0x45e8d0u: goto label_45e8d0;
        case 0x45e8d4u: goto label_45e8d4;
        case 0x45e8d8u: goto label_45e8d8;
        case 0x45e8dcu: goto label_45e8dc;
        case 0x45e8e0u: goto label_45e8e0;
        case 0x45e8e4u: goto label_45e8e4;
        case 0x45e8e8u: goto label_45e8e8;
        case 0x45e8ecu: goto label_45e8ec;
        case 0x45e8f0u: goto label_45e8f0;
        case 0x45e8f4u: goto label_45e8f4;
        case 0x45e8f8u: goto label_45e8f8;
        case 0x45e8fcu: goto label_45e8fc;
        case 0x45e900u: goto label_45e900;
        case 0x45e904u: goto label_45e904;
        case 0x45e908u: goto label_45e908;
        case 0x45e90cu: goto label_45e90c;
        case 0x45e910u: goto label_45e910;
        case 0x45e914u: goto label_45e914;
        case 0x45e918u: goto label_45e918;
        case 0x45e91cu: goto label_45e91c;
        case 0x45e920u: goto label_45e920;
        case 0x45e924u: goto label_45e924;
        case 0x45e928u: goto label_45e928;
        case 0x45e92cu: goto label_45e92c;
        case 0x45e930u: goto label_45e930;
        case 0x45e934u: goto label_45e934;
        case 0x45e938u: goto label_45e938;
        case 0x45e93cu: goto label_45e93c;
        case 0x45e940u: goto label_45e940;
        case 0x45e944u: goto label_45e944;
        case 0x45e948u: goto label_45e948;
        case 0x45e94cu: goto label_45e94c;
        case 0x45e950u: goto label_45e950;
        case 0x45e954u: goto label_45e954;
        case 0x45e958u: goto label_45e958;
        case 0x45e95cu: goto label_45e95c;
        case 0x45e960u: goto label_45e960;
        case 0x45e964u: goto label_45e964;
        case 0x45e968u: goto label_45e968;
        case 0x45e96cu: goto label_45e96c;
        case 0x45e970u: goto label_45e970;
        case 0x45e974u: goto label_45e974;
        case 0x45e978u: goto label_45e978;
        case 0x45e97cu: goto label_45e97c;
        case 0x45e980u: goto label_45e980;
        case 0x45e984u: goto label_45e984;
        case 0x45e988u: goto label_45e988;
        case 0x45e98cu: goto label_45e98c;
        case 0x45e990u: goto label_45e990;
        case 0x45e994u: goto label_45e994;
        case 0x45e998u: goto label_45e998;
        case 0x45e99cu: goto label_45e99c;
        case 0x45e9a0u: goto label_45e9a0;
        case 0x45e9a4u: goto label_45e9a4;
        case 0x45e9a8u: goto label_45e9a8;
        case 0x45e9acu: goto label_45e9ac;
        case 0x45e9b0u: goto label_45e9b0;
        case 0x45e9b4u: goto label_45e9b4;
        case 0x45e9b8u: goto label_45e9b8;
        case 0x45e9bcu: goto label_45e9bc;
        case 0x45e9c0u: goto label_45e9c0;
        case 0x45e9c4u: goto label_45e9c4;
        case 0x45e9c8u: goto label_45e9c8;
        case 0x45e9ccu: goto label_45e9cc;
        case 0x45e9d0u: goto label_45e9d0;
        case 0x45e9d4u: goto label_45e9d4;
        case 0x45e9d8u: goto label_45e9d8;
        case 0x45e9dcu: goto label_45e9dc;
        case 0x45e9e0u: goto label_45e9e0;
        case 0x45e9e4u: goto label_45e9e4;
        case 0x45e9e8u: goto label_45e9e8;
        case 0x45e9ecu: goto label_45e9ec;
        case 0x45e9f0u: goto label_45e9f0;
        case 0x45e9f4u: goto label_45e9f4;
        case 0x45e9f8u: goto label_45e9f8;
        case 0x45e9fcu: goto label_45e9fc;
        case 0x45ea00u: goto label_45ea00;
        case 0x45ea04u: goto label_45ea04;
        case 0x45ea08u: goto label_45ea08;
        case 0x45ea0cu: goto label_45ea0c;
        case 0x45ea10u: goto label_45ea10;
        case 0x45ea14u: goto label_45ea14;
        case 0x45ea18u: goto label_45ea18;
        case 0x45ea1cu: goto label_45ea1c;
        case 0x45ea20u: goto label_45ea20;
        case 0x45ea24u: goto label_45ea24;
        case 0x45ea28u: goto label_45ea28;
        case 0x45ea2cu: goto label_45ea2c;
        case 0x45ea30u: goto label_45ea30;
        case 0x45ea34u: goto label_45ea34;
        case 0x45ea38u: goto label_45ea38;
        case 0x45ea3cu: goto label_45ea3c;
        case 0x45ea40u: goto label_45ea40;
        case 0x45ea44u: goto label_45ea44;
        case 0x45ea48u: goto label_45ea48;
        case 0x45ea4cu: goto label_45ea4c;
        case 0x45ea50u: goto label_45ea50;
        case 0x45ea54u: goto label_45ea54;
        case 0x45ea58u: goto label_45ea58;
        case 0x45ea5cu: goto label_45ea5c;
        case 0x45ea60u: goto label_45ea60;
        case 0x45ea64u: goto label_45ea64;
        case 0x45ea68u: goto label_45ea68;
        case 0x45ea6cu: goto label_45ea6c;
        case 0x45ea70u: goto label_45ea70;
        case 0x45ea74u: goto label_45ea74;
        case 0x45ea78u: goto label_45ea78;
        case 0x45ea7cu: goto label_45ea7c;
        case 0x45ea80u: goto label_45ea80;
        case 0x45ea84u: goto label_45ea84;
        case 0x45ea88u: goto label_45ea88;
        case 0x45ea8cu: goto label_45ea8c;
        case 0x45ea90u: goto label_45ea90;
        case 0x45ea94u: goto label_45ea94;
        case 0x45ea98u: goto label_45ea98;
        case 0x45ea9cu: goto label_45ea9c;
        case 0x45eaa0u: goto label_45eaa0;
        case 0x45eaa4u: goto label_45eaa4;
        case 0x45eaa8u: goto label_45eaa8;
        case 0x45eaacu: goto label_45eaac;
        case 0x45eab0u: goto label_45eab0;
        case 0x45eab4u: goto label_45eab4;
        case 0x45eab8u: goto label_45eab8;
        case 0x45eabcu: goto label_45eabc;
        case 0x45eac0u: goto label_45eac0;
        case 0x45eac4u: goto label_45eac4;
        case 0x45eac8u: goto label_45eac8;
        case 0x45eaccu: goto label_45eacc;
        case 0x45ead0u: goto label_45ead0;
        case 0x45ead4u: goto label_45ead4;
        case 0x45ead8u: goto label_45ead8;
        case 0x45eadcu: goto label_45eadc;
        case 0x45eae0u: goto label_45eae0;
        case 0x45eae4u: goto label_45eae4;
        case 0x45eae8u: goto label_45eae8;
        case 0x45eaecu: goto label_45eaec;
        case 0x45eaf0u: goto label_45eaf0;
        case 0x45eaf4u: goto label_45eaf4;
        case 0x45eaf8u: goto label_45eaf8;
        case 0x45eafcu: goto label_45eafc;
        case 0x45eb00u: goto label_45eb00;
        case 0x45eb04u: goto label_45eb04;
        case 0x45eb08u: goto label_45eb08;
        case 0x45eb0cu: goto label_45eb0c;
        case 0x45eb10u: goto label_45eb10;
        case 0x45eb14u: goto label_45eb14;
        case 0x45eb18u: goto label_45eb18;
        case 0x45eb1cu: goto label_45eb1c;
        case 0x45eb20u: goto label_45eb20;
        case 0x45eb24u: goto label_45eb24;
        case 0x45eb28u: goto label_45eb28;
        case 0x45eb2cu: goto label_45eb2c;
        case 0x45eb30u: goto label_45eb30;
        case 0x45eb34u: goto label_45eb34;
        case 0x45eb38u: goto label_45eb38;
        case 0x45eb3cu: goto label_45eb3c;
        case 0x45eb40u: goto label_45eb40;
        case 0x45eb44u: goto label_45eb44;
        case 0x45eb48u: goto label_45eb48;
        case 0x45eb4cu: goto label_45eb4c;
        case 0x45eb50u: goto label_45eb50;
        case 0x45eb54u: goto label_45eb54;
        case 0x45eb58u: goto label_45eb58;
        case 0x45eb5cu: goto label_45eb5c;
        case 0x45eb60u: goto label_45eb60;
        case 0x45eb64u: goto label_45eb64;
        case 0x45eb68u: goto label_45eb68;
        case 0x45eb6cu: goto label_45eb6c;
        case 0x45eb70u: goto label_45eb70;
        case 0x45eb74u: goto label_45eb74;
        case 0x45eb78u: goto label_45eb78;
        case 0x45eb7cu: goto label_45eb7c;
        case 0x45eb80u: goto label_45eb80;
        case 0x45eb84u: goto label_45eb84;
        case 0x45eb88u: goto label_45eb88;
        case 0x45eb8cu: goto label_45eb8c;
        case 0x45eb90u: goto label_45eb90;
        case 0x45eb94u: goto label_45eb94;
        case 0x45eb98u: goto label_45eb98;
        case 0x45eb9cu: goto label_45eb9c;
        case 0x45eba0u: goto label_45eba0;
        case 0x45eba4u: goto label_45eba4;
        case 0x45eba8u: goto label_45eba8;
        case 0x45ebacu: goto label_45ebac;
        case 0x45ebb0u: goto label_45ebb0;
        case 0x45ebb4u: goto label_45ebb4;
        case 0x45ebb8u: goto label_45ebb8;
        case 0x45ebbcu: goto label_45ebbc;
        case 0x45ebc0u: goto label_45ebc0;
        case 0x45ebc4u: goto label_45ebc4;
        case 0x45ebc8u: goto label_45ebc8;
        case 0x45ebccu: goto label_45ebcc;
        case 0x45ebd0u: goto label_45ebd0;
        case 0x45ebd4u: goto label_45ebd4;
        case 0x45ebd8u: goto label_45ebd8;
        case 0x45ebdcu: goto label_45ebdc;
        case 0x45ebe0u: goto label_45ebe0;
        case 0x45ebe4u: goto label_45ebe4;
        case 0x45ebe8u: goto label_45ebe8;
        case 0x45ebecu: goto label_45ebec;
        case 0x45ebf0u: goto label_45ebf0;
        case 0x45ebf4u: goto label_45ebf4;
        case 0x45ebf8u: goto label_45ebf8;
        case 0x45ebfcu: goto label_45ebfc;
        case 0x45ec00u: goto label_45ec00;
        case 0x45ec04u: goto label_45ec04;
        case 0x45ec08u: goto label_45ec08;
        case 0x45ec0cu: goto label_45ec0c;
        case 0x45ec10u: goto label_45ec10;
        case 0x45ec14u: goto label_45ec14;
        case 0x45ec18u: goto label_45ec18;
        case 0x45ec1cu: goto label_45ec1c;
        case 0x45ec20u: goto label_45ec20;
        case 0x45ec24u: goto label_45ec24;
        case 0x45ec28u: goto label_45ec28;
        case 0x45ec2cu: goto label_45ec2c;
        case 0x45ec30u: goto label_45ec30;
        case 0x45ec34u: goto label_45ec34;
        case 0x45ec38u: goto label_45ec38;
        case 0x45ec3cu: goto label_45ec3c;
        case 0x45ec40u: goto label_45ec40;
        case 0x45ec44u: goto label_45ec44;
        case 0x45ec48u: goto label_45ec48;
        case 0x45ec4cu: goto label_45ec4c;
        case 0x45ec50u: goto label_45ec50;
        case 0x45ec54u: goto label_45ec54;
        case 0x45ec58u: goto label_45ec58;
        case 0x45ec5cu: goto label_45ec5c;
        case 0x45ec60u: goto label_45ec60;
        case 0x45ec64u: goto label_45ec64;
        case 0x45ec68u: goto label_45ec68;
        case 0x45ec6cu: goto label_45ec6c;
        case 0x45ec70u: goto label_45ec70;
        case 0x45ec74u: goto label_45ec74;
        case 0x45ec78u: goto label_45ec78;
        case 0x45ec7cu: goto label_45ec7c;
        case 0x45ec80u: goto label_45ec80;
        case 0x45ec84u: goto label_45ec84;
        case 0x45ec88u: goto label_45ec88;
        case 0x45ec8cu: goto label_45ec8c;
        case 0x45ec90u: goto label_45ec90;
        case 0x45ec94u: goto label_45ec94;
        case 0x45ec98u: goto label_45ec98;
        case 0x45ec9cu: goto label_45ec9c;
        case 0x45eca0u: goto label_45eca0;
        case 0x45eca4u: goto label_45eca4;
        case 0x45eca8u: goto label_45eca8;
        case 0x45ecacu: goto label_45ecac;
        case 0x45ecb0u: goto label_45ecb0;
        case 0x45ecb4u: goto label_45ecb4;
        case 0x45ecb8u: goto label_45ecb8;
        case 0x45ecbcu: goto label_45ecbc;
        case 0x45ecc0u: goto label_45ecc0;
        case 0x45ecc4u: goto label_45ecc4;
        case 0x45ecc8u: goto label_45ecc8;
        case 0x45ecccu: goto label_45eccc;
        case 0x45ecd0u: goto label_45ecd0;
        case 0x45ecd4u: goto label_45ecd4;
        case 0x45ecd8u: goto label_45ecd8;
        case 0x45ecdcu: goto label_45ecdc;
        case 0x45ece0u: goto label_45ece0;
        case 0x45ece4u: goto label_45ece4;
        case 0x45ece8u: goto label_45ece8;
        case 0x45ececu: goto label_45ecec;
        case 0x45ecf0u: goto label_45ecf0;
        case 0x45ecf4u: goto label_45ecf4;
        case 0x45ecf8u: goto label_45ecf8;
        case 0x45ecfcu: goto label_45ecfc;
        case 0x45ed00u: goto label_45ed00;
        case 0x45ed04u: goto label_45ed04;
        case 0x45ed08u: goto label_45ed08;
        case 0x45ed0cu: goto label_45ed0c;
        case 0x45ed10u: goto label_45ed10;
        case 0x45ed14u: goto label_45ed14;
        case 0x45ed18u: goto label_45ed18;
        case 0x45ed1cu: goto label_45ed1c;
        case 0x45ed20u: goto label_45ed20;
        case 0x45ed24u: goto label_45ed24;
        case 0x45ed28u: goto label_45ed28;
        case 0x45ed2cu: goto label_45ed2c;
        case 0x45ed30u: goto label_45ed30;
        case 0x45ed34u: goto label_45ed34;
        case 0x45ed38u: goto label_45ed38;
        case 0x45ed3cu: goto label_45ed3c;
        case 0x45ed40u: goto label_45ed40;
        case 0x45ed44u: goto label_45ed44;
        case 0x45ed48u: goto label_45ed48;
        case 0x45ed4cu: goto label_45ed4c;
        case 0x45ed50u: goto label_45ed50;
        case 0x45ed54u: goto label_45ed54;
        case 0x45ed58u: goto label_45ed58;
        case 0x45ed5cu: goto label_45ed5c;
        case 0x45ed60u: goto label_45ed60;
        case 0x45ed64u: goto label_45ed64;
        case 0x45ed68u: goto label_45ed68;
        case 0x45ed6cu: goto label_45ed6c;
        case 0x45ed70u: goto label_45ed70;
        case 0x45ed74u: goto label_45ed74;
        case 0x45ed78u: goto label_45ed78;
        case 0x45ed7cu: goto label_45ed7c;
        case 0x45ed80u: goto label_45ed80;
        case 0x45ed84u: goto label_45ed84;
        case 0x45ed88u: goto label_45ed88;
        case 0x45ed8cu: goto label_45ed8c;
        case 0x45ed90u: goto label_45ed90;
        case 0x45ed94u: goto label_45ed94;
        case 0x45ed98u: goto label_45ed98;
        case 0x45ed9cu: goto label_45ed9c;
        case 0x45eda0u: goto label_45eda0;
        case 0x45eda4u: goto label_45eda4;
        case 0x45eda8u: goto label_45eda8;
        case 0x45edacu: goto label_45edac;
        case 0x45edb0u: goto label_45edb0;
        case 0x45edb4u: goto label_45edb4;
        case 0x45edb8u: goto label_45edb8;
        case 0x45edbcu: goto label_45edbc;
        case 0x45edc0u: goto label_45edc0;
        case 0x45edc4u: goto label_45edc4;
        case 0x45edc8u: goto label_45edc8;
        case 0x45edccu: goto label_45edcc;
        case 0x45edd0u: goto label_45edd0;
        case 0x45edd4u: goto label_45edd4;
        case 0x45edd8u: goto label_45edd8;
        case 0x45eddcu: goto label_45eddc;
        case 0x45ede0u: goto label_45ede0;
        case 0x45ede4u: goto label_45ede4;
        case 0x45ede8u: goto label_45ede8;
        case 0x45edecu: goto label_45edec;
        case 0x45edf0u: goto label_45edf0;
        case 0x45edf4u: goto label_45edf4;
        case 0x45edf8u: goto label_45edf8;
        case 0x45edfcu: goto label_45edfc;
        case 0x45ee00u: goto label_45ee00;
        case 0x45ee04u: goto label_45ee04;
        case 0x45ee08u: goto label_45ee08;
        case 0x45ee0cu: goto label_45ee0c;
        case 0x45ee10u: goto label_45ee10;
        case 0x45ee14u: goto label_45ee14;
        case 0x45ee18u: goto label_45ee18;
        case 0x45ee1cu: goto label_45ee1c;
        case 0x45ee20u: goto label_45ee20;
        case 0x45ee24u: goto label_45ee24;
        case 0x45ee28u: goto label_45ee28;
        case 0x45ee2cu: goto label_45ee2c;
        case 0x45ee30u: goto label_45ee30;
        case 0x45ee34u: goto label_45ee34;
        case 0x45ee38u: goto label_45ee38;
        case 0x45ee3cu: goto label_45ee3c;
        case 0x45ee40u: goto label_45ee40;
        case 0x45ee44u: goto label_45ee44;
        case 0x45ee48u: goto label_45ee48;
        case 0x45ee4cu: goto label_45ee4c;
        case 0x45ee50u: goto label_45ee50;
        case 0x45ee54u: goto label_45ee54;
        case 0x45ee58u: goto label_45ee58;
        case 0x45ee5cu: goto label_45ee5c;
        case 0x45ee60u: goto label_45ee60;
        case 0x45ee64u: goto label_45ee64;
        case 0x45ee68u: goto label_45ee68;
        case 0x45ee6cu: goto label_45ee6c;
        case 0x45ee70u: goto label_45ee70;
        case 0x45ee74u: goto label_45ee74;
        case 0x45ee78u: goto label_45ee78;
        case 0x45ee7cu: goto label_45ee7c;
        case 0x45ee80u: goto label_45ee80;
        case 0x45ee84u: goto label_45ee84;
        case 0x45ee88u: goto label_45ee88;
        case 0x45ee8cu: goto label_45ee8c;
        case 0x45ee90u: goto label_45ee90;
        case 0x45ee94u: goto label_45ee94;
        case 0x45ee98u: goto label_45ee98;
        case 0x45ee9cu: goto label_45ee9c;
        case 0x45eea0u: goto label_45eea0;
        case 0x45eea4u: goto label_45eea4;
        case 0x45eea8u: goto label_45eea8;
        case 0x45eeacu: goto label_45eeac;
        case 0x45eeb0u: goto label_45eeb0;
        case 0x45eeb4u: goto label_45eeb4;
        case 0x45eeb8u: goto label_45eeb8;
        case 0x45eebcu: goto label_45eebc;
        case 0x45eec0u: goto label_45eec0;
        case 0x45eec4u: goto label_45eec4;
        case 0x45eec8u: goto label_45eec8;
        case 0x45eeccu: goto label_45eecc;
        case 0x45eed0u: goto label_45eed0;
        case 0x45eed4u: goto label_45eed4;
        case 0x45eed8u: goto label_45eed8;
        case 0x45eedcu: goto label_45eedc;
        case 0x45eee0u: goto label_45eee0;
        case 0x45eee4u: goto label_45eee4;
        case 0x45eee8u: goto label_45eee8;
        case 0x45eeecu: goto label_45eeec;
        case 0x45eef0u: goto label_45eef0;
        case 0x45eef4u: goto label_45eef4;
        case 0x45eef8u: goto label_45eef8;
        case 0x45eefcu: goto label_45eefc;
        case 0x45ef00u: goto label_45ef00;
        case 0x45ef04u: goto label_45ef04;
        case 0x45ef08u: goto label_45ef08;
        case 0x45ef0cu: goto label_45ef0c;
        case 0x45ef10u: goto label_45ef10;
        case 0x45ef14u: goto label_45ef14;
        case 0x45ef18u: goto label_45ef18;
        case 0x45ef1cu: goto label_45ef1c;
        case 0x45ef20u: goto label_45ef20;
        case 0x45ef24u: goto label_45ef24;
        case 0x45ef28u: goto label_45ef28;
        case 0x45ef2cu: goto label_45ef2c;
        case 0x45ef30u: goto label_45ef30;
        case 0x45ef34u: goto label_45ef34;
        case 0x45ef38u: goto label_45ef38;
        case 0x45ef3cu: goto label_45ef3c;
        case 0x45ef40u: goto label_45ef40;
        case 0x45ef44u: goto label_45ef44;
        case 0x45ef48u: goto label_45ef48;
        case 0x45ef4cu: goto label_45ef4c;
        case 0x45ef50u: goto label_45ef50;
        case 0x45ef54u: goto label_45ef54;
        case 0x45ef58u: goto label_45ef58;
        case 0x45ef5cu: goto label_45ef5c;
        case 0x45ef60u: goto label_45ef60;
        case 0x45ef64u: goto label_45ef64;
        case 0x45ef68u: goto label_45ef68;
        case 0x45ef6cu: goto label_45ef6c;
        case 0x45ef70u: goto label_45ef70;
        case 0x45ef74u: goto label_45ef74;
        case 0x45ef78u: goto label_45ef78;
        case 0x45ef7cu: goto label_45ef7c;
        case 0x45ef80u: goto label_45ef80;
        case 0x45ef84u: goto label_45ef84;
        case 0x45ef88u: goto label_45ef88;
        case 0x45ef8cu: goto label_45ef8c;
        case 0x45ef90u: goto label_45ef90;
        case 0x45ef94u: goto label_45ef94;
        case 0x45ef98u: goto label_45ef98;
        case 0x45ef9cu: goto label_45ef9c;
        case 0x45efa0u: goto label_45efa0;
        case 0x45efa4u: goto label_45efa4;
        case 0x45efa8u: goto label_45efa8;
        case 0x45efacu: goto label_45efac;
        case 0x45efb0u: goto label_45efb0;
        case 0x45efb4u: goto label_45efb4;
        case 0x45efb8u: goto label_45efb8;
        case 0x45efbcu: goto label_45efbc;
        case 0x45efc0u: goto label_45efc0;
        case 0x45efc4u: goto label_45efc4;
        case 0x45efc8u: goto label_45efc8;
        case 0x45efccu: goto label_45efcc;
        case 0x45efd0u: goto label_45efd0;
        case 0x45efd4u: goto label_45efd4;
        case 0x45efd8u: goto label_45efd8;
        case 0x45efdcu: goto label_45efdc;
        case 0x45efe0u: goto label_45efe0;
        case 0x45efe4u: goto label_45efe4;
        case 0x45efe8u: goto label_45efe8;
        case 0x45efecu: goto label_45efec;
        case 0x45eff0u: goto label_45eff0;
        case 0x45eff4u: goto label_45eff4;
        case 0x45eff8u: goto label_45eff8;
        case 0x45effcu: goto label_45effc;
        case 0x45f000u: goto label_45f000;
        case 0x45f004u: goto label_45f004;
        case 0x45f008u: goto label_45f008;
        case 0x45f00cu: goto label_45f00c;
        case 0x45f010u: goto label_45f010;
        case 0x45f014u: goto label_45f014;
        case 0x45f018u: goto label_45f018;
        case 0x45f01cu: goto label_45f01c;
        case 0x45f020u: goto label_45f020;
        case 0x45f024u: goto label_45f024;
        case 0x45f028u: goto label_45f028;
        case 0x45f02cu: goto label_45f02c;
        case 0x45f030u: goto label_45f030;
        case 0x45f034u: goto label_45f034;
        case 0x45f038u: goto label_45f038;
        case 0x45f03cu: goto label_45f03c;
        case 0x45f040u: goto label_45f040;
        case 0x45f044u: goto label_45f044;
        case 0x45f048u: goto label_45f048;
        case 0x45f04cu: goto label_45f04c;
        case 0x45f050u: goto label_45f050;
        case 0x45f054u: goto label_45f054;
        case 0x45f058u: goto label_45f058;
        case 0x45f05cu: goto label_45f05c;
        case 0x45f060u: goto label_45f060;
        case 0x45f064u: goto label_45f064;
        case 0x45f068u: goto label_45f068;
        case 0x45f06cu: goto label_45f06c;
        case 0x45f070u: goto label_45f070;
        case 0x45f074u: goto label_45f074;
        case 0x45f078u: goto label_45f078;
        case 0x45f07cu: goto label_45f07c;
        case 0x45f080u: goto label_45f080;
        case 0x45f084u: goto label_45f084;
        case 0x45f088u: goto label_45f088;
        case 0x45f08cu: goto label_45f08c;
        case 0x45f090u: goto label_45f090;
        case 0x45f094u: goto label_45f094;
        case 0x45f098u: goto label_45f098;
        case 0x45f09cu: goto label_45f09c;
        case 0x45f0a0u: goto label_45f0a0;
        case 0x45f0a4u: goto label_45f0a4;
        case 0x45f0a8u: goto label_45f0a8;
        case 0x45f0acu: goto label_45f0ac;
        case 0x45f0b0u: goto label_45f0b0;
        case 0x45f0b4u: goto label_45f0b4;
        case 0x45f0b8u: goto label_45f0b8;
        case 0x45f0bcu: goto label_45f0bc;
        case 0x45f0c0u: goto label_45f0c0;
        case 0x45f0c4u: goto label_45f0c4;
        case 0x45f0c8u: goto label_45f0c8;
        case 0x45f0ccu: goto label_45f0cc;
        case 0x45f0d0u: goto label_45f0d0;
        case 0x45f0d4u: goto label_45f0d4;
        case 0x45f0d8u: goto label_45f0d8;
        case 0x45f0dcu: goto label_45f0dc;
        case 0x45f0e0u: goto label_45f0e0;
        case 0x45f0e4u: goto label_45f0e4;
        case 0x45f0e8u: goto label_45f0e8;
        case 0x45f0ecu: goto label_45f0ec;
        case 0x45f0f0u: goto label_45f0f0;
        case 0x45f0f4u: goto label_45f0f4;
        case 0x45f0f8u: goto label_45f0f8;
        case 0x45f0fcu: goto label_45f0fc;
        case 0x45f100u: goto label_45f100;
        case 0x45f104u: goto label_45f104;
        case 0x45f108u: goto label_45f108;
        case 0x45f10cu: goto label_45f10c;
        case 0x45f110u: goto label_45f110;
        case 0x45f114u: goto label_45f114;
        case 0x45f118u: goto label_45f118;
        case 0x45f11cu: goto label_45f11c;
        case 0x45f120u: goto label_45f120;
        case 0x45f124u: goto label_45f124;
        case 0x45f128u: goto label_45f128;
        case 0x45f12cu: goto label_45f12c;
        case 0x45f130u: goto label_45f130;
        case 0x45f134u: goto label_45f134;
        case 0x45f138u: goto label_45f138;
        case 0x45f13cu: goto label_45f13c;
        case 0x45f140u: goto label_45f140;
        case 0x45f144u: goto label_45f144;
        case 0x45f148u: goto label_45f148;
        case 0x45f14cu: goto label_45f14c;
        case 0x45f150u: goto label_45f150;
        case 0x45f154u: goto label_45f154;
        case 0x45f158u: goto label_45f158;
        case 0x45f15cu: goto label_45f15c;
        case 0x45f160u: goto label_45f160;
        case 0x45f164u: goto label_45f164;
        case 0x45f168u: goto label_45f168;
        case 0x45f16cu: goto label_45f16c;
        case 0x45f170u: goto label_45f170;
        case 0x45f174u: goto label_45f174;
        case 0x45f178u: goto label_45f178;
        case 0x45f17cu: goto label_45f17c;
        case 0x45f180u: goto label_45f180;
        case 0x45f184u: goto label_45f184;
        case 0x45f188u: goto label_45f188;
        case 0x45f18cu: goto label_45f18c;
        case 0x45f190u: goto label_45f190;
        case 0x45f194u: goto label_45f194;
        case 0x45f198u: goto label_45f198;
        case 0x45f19cu: goto label_45f19c;
        case 0x45f1a0u: goto label_45f1a0;
        case 0x45f1a4u: goto label_45f1a4;
        case 0x45f1a8u: goto label_45f1a8;
        case 0x45f1acu: goto label_45f1ac;
        case 0x45f1b0u: goto label_45f1b0;
        case 0x45f1b4u: goto label_45f1b4;
        case 0x45f1b8u: goto label_45f1b8;
        case 0x45f1bcu: goto label_45f1bc;
        case 0x45f1c0u: goto label_45f1c0;
        case 0x45f1c4u: goto label_45f1c4;
        case 0x45f1c8u: goto label_45f1c8;
        case 0x45f1ccu: goto label_45f1cc;
        case 0x45f1d0u: goto label_45f1d0;
        case 0x45f1d4u: goto label_45f1d4;
        case 0x45f1d8u: goto label_45f1d8;
        case 0x45f1dcu: goto label_45f1dc;
        case 0x45f1e0u: goto label_45f1e0;
        case 0x45f1e4u: goto label_45f1e4;
        case 0x45f1e8u: goto label_45f1e8;
        case 0x45f1ecu: goto label_45f1ec;
        case 0x45f1f0u: goto label_45f1f0;
        case 0x45f1f4u: goto label_45f1f4;
        case 0x45f1f8u: goto label_45f1f8;
        case 0x45f1fcu: goto label_45f1fc;
        case 0x45f200u: goto label_45f200;
        case 0x45f204u: goto label_45f204;
        case 0x45f208u: goto label_45f208;
        case 0x45f20cu: goto label_45f20c;
        case 0x45f210u: goto label_45f210;
        case 0x45f214u: goto label_45f214;
        case 0x45f218u: goto label_45f218;
        case 0x45f21cu: goto label_45f21c;
        case 0x45f220u: goto label_45f220;
        case 0x45f224u: goto label_45f224;
        case 0x45f228u: goto label_45f228;
        case 0x45f22cu: goto label_45f22c;
        case 0x45f230u: goto label_45f230;
        case 0x45f234u: goto label_45f234;
        case 0x45f238u: goto label_45f238;
        case 0x45f23cu: goto label_45f23c;
        case 0x45f240u: goto label_45f240;
        case 0x45f244u: goto label_45f244;
        case 0x45f248u: goto label_45f248;
        case 0x45f24cu: goto label_45f24c;
        case 0x45f250u: goto label_45f250;
        case 0x45f254u: goto label_45f254;
        case 0x45f258u: goto label_45f258;
        case 0x45f25cu: goto label_45f25c;
        case 0x45f260u: goto label_45f260;
        case 0x45f264u: goto label_45f264;
        case 0x45f268u: goto label_45f268;
        case 0x45f26cu: goto label_45f26c;
        case 0x45f270u: goto label_45f270;
        case 0x45f274u: goto label_45f274;
        case 0x45f278u: goto label_45f278;
        case 0x45f27cu: goto label_45f27c;
        case 0x45f280u: goto label_45f280;
        case 0x45f284u: goto label_45f284;
        case 0x45f288u: goto label_45f288;
        case 0x45f28cu: goto label_45f28c;
        case 0x45f290u: goto label_45f290;
        case 0x45f294u: goto label_45f294;
        case 0x45f298u: goto label_45f298;
        case 0x45f29cu: goto label_45f29c;
        case 0x45f2a0u: goto label_45f2a0;
        case 0x45f2a4u: goto label_45f2a4;
        case 0x45f2a8u: goto label_45f2a8;
        case 0x45f2acu: goto label_45f2ac;
        case 0x45f2b0u: goto label_45f2b0;
        case 0x45f2b4u: goto label_45f2b4;
        case 0x45f2b8u: goto label_45f2b8;
        case 0x45f2bcu: goto label_45f2bc;
        case 0x45f2c0u: goto label_45f2c0;
        case 0x45f2c4u: goto label_45f2c4;
        case 0x45f2c8u: goto label_45f2c8;
        case 0x45f2ccu: goto label_45f2cc;
        case 0x45f2d0u: goto label_45f2d0;
        case 0x45f2d4u: goto label_45f2d4;
        case 0x45f2d8u: goto label_45f2d8;
        case 0x45f2dcu: goto label_45f2dc;
        case 0x45f2e0u: goto label_45f2e0;
        case 0x45f2e4u: goto label_45f2e4;
        case 0x45f2e8u: goto label_45f2e8;
        case 0x45f2ecu: goto label_45f2ec;
        case 0x45f2f0u: goto label_45f2f0;
        case 0x45f2f4u: goto label_45f2f4;
        case 0x45f2f8u: goto label_45f2f8;
        case 0x45f2fcu: goto label_45f2fc;
        case 0x45f300u: goto label_45f300;
        case 0x45f304u: goto label_45f304;
        case 0x45f308u: goto label_45f308;
        case 0x45f30cu: goto label_45f30c;
        case 0x45f310u: goto label_45f310;
        case 0x45f314u: goto label_45f314;
        case 0x45f318u: goto label_45f318;
        case 0x45f31cu: goto label_45f31c;
        case 0x45f320u: goto label_45f320;
        case 0x45f324u: goto label_45f324;
        case 0x45f328u: goto label_45f328;
        case 0x45f32cu: goto label_45f32c;
        case 0x45f330u: goto label_45f330;
        case 0x45f334u: goto label_45f334;
        case 0x45f338u: goto label_45f338;
        case 0x45f33cu: goto label_45f33c;
        case 0x45f340u: goto label_45f340;
        case 0x45f344u: goto label_45f344;
        case 0x45f348u: goto label_45f348;
        case 0x45f34cu: goto label_45f34c;
        case 0x45f350u: goto label_45f350;
        case 0x45f354u: goto label_45f354;
        case 0x45f358u: goto label_45f358;
        case 0x45f35cu: goto label_45f35c;
        case 0x45f360u: goto label_45f360;
        case 0x45f364u: goto label_45f364;
        case 0x45f368u: goto label_45f368;
        case 0x45f36cu: goto label_45f36c;
        case 0x45f370u: goto label_45f370;
        case 0x45f374u: goto label_45f374;
        case 0x45f378u: goto label_45f378;
        case 0x45f37cu: goto label_45f37c;
        case 0x45f380u: goto label_45f380;
        case 0x45f384u: goto label_45f384;
        case 0x45f388u: goto label_45f388;
        case 0x45f38cu: goto label_45f38c;
        case 0x45f390u: goto label_45f390;
        case 0x45f394u: goto label_45f394;
        case 0x45f398u: goto label_45f398;
        case 0x45f39cu: goto label_45f39c;
        case 0x45f3a0u: goto label_45f3a0;
        case 0x45f3a4u: goto label_45f3a4;
        case 0x45f3a8u: goto label_45f3a8;
        case 0x45f3acu: goto label_45f3ac;
        case 0x45f3b0u: goto label_45f3b0;
        case 0x45f3b4u: goto label_45f3b4;
        case 0x45f3b8u: goto label_45f3b8;
        case 0x45f3bcu: goto label_45f3bc;
        case 0x45f3c0u: goto label_45f3c0;
        case 0x45f3c4u: goto label_45f3c4;
        case 0x45f3c8u: goto label_45f3c8;
        case 0x45f3ccu: goto label_45f3cc;
        case 0x45f3d0u: goto label_45f3d0;
        case 0x45f3d4u: goto label_45f3d4;
        case 0x45f3d8u: goto label_45f3d8;
        case 0x45f3dcu: goto label_45f3dc;
        case 0x45f3e0u: goto label_45f3e0;
        case 0x45f3e4u: goto label_45f3e4;
        case 0x45f3e8u: goto label_45f3e8;
        case 0x45f3ecu: goto label_45f3ec;
        case 0x45f3f0u: goto label_45f3f0;
        case 0x45f3f4u: goto label_45f3f4;
        case 0x45f3f8u: goto label_45f3f8;
        case 0x45f3fcu: goto label_45f3fc;
        case 0x45f400u: goto label_45f400;
        case 0x45f404u: goto label_45f404;
        case 0x45f408u: goto label_45f408;
        case 0x45f40cu: goto label_45f40c;
        case 0x45f410u: goto label_45f410;
        case 0x45f414u: goto label_45f414;
        case 0x45f418u: goto label_45f418;
        case 0x45f41cu: goto label_45f41c;
        case 0x45f420u: goto label_45f420;
        case 0x45f424u: goto label_45f424;
        case 0x45f428u: goto label_45f428;
        case 0x45f42cu: goto label_45f42c;
        case 0x45f430u: goto label_45f430;
        case 0x45f434u: goto label_45f434;
        case 0x45f438u: goto label_45f438;
        case 0x45f43cu: goto label_45f43c;
        case 0x45f440u: goto label_45f440;
        case 0x45f444u: goto label_45f444;
        case 0x45f448u: goto label_45f448;
        case 0x45f44cu: goto label_45f44c;
        case 0x45f450u: goto label_45f450;
        case 0x45f454u: goto label_45f454;
        case 0x45f458u: goto label_45f458;
        case 0x45f45cu: goto label_45f45c;
        case 0x45f460u: goto label_45f460;
        case 0x45f464u: goto label_45f464;
        case 0x45f468u: goto label_45f468;
        case 0x45f46cu: goto label_45f46c;
        case 0x45f470u: goto label_45f470;
        case 0x45f474u: goto label_45f474;
        case 0x45f478u: goto label_45f478;
        case 0x45f47cu: goto label_45f47c;
        case 0x45f480u: goto label_45f480;
        case 0x45f484u: goto label_45f484;
        case 0x45f488u: goto label_45f488;
        case 0x45f48cu: goto label_45f48c;
        case 0x45f490u: goto label_45f490;
        case 0x45f494u: goto label_45f494;
        case 0x45f498u: goto label_45f498;
        case 0x45f49cu: goto label_45f49c;
        case 0x45f4a0u: goto label_45f4a0;
        case 0x45f4a4u: goto label_45f4a4;
        case 0x45f4a8u: goto label_45f4a8;
        case 0x45f4acu: goto label_45f4ac;
        case 0x45f4b0u: goto label_45f4b0;
        case 0x45f4b4u: goto label_45f4b4;
        case 0x45f4b8u: goto label_45f4b8;
        case 0x45f4bcu: goto label_45f4bc;
        case 0x45f4c0u: goto label_45f4c0;
        case 0x45f4c4u: goto label_45f4c4;
        case 0x45f4c8u: goto label_45f4c8;
        case 0x45f4ccu: goto label_45f4cc;
        case 0x45f4d0u: goto label_45f4d0;
        case 0x45f4d4u: goto label_45f4d4;
        case 0x45f4d8u: goto label_45f4d8;
        case 0x45f4dcu: goto label_45f4dc;
        default: break;
    }

    ctx->pc = 0x45e800u;

label_45e800:
    // 0x45e800: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x45e800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
label_45e804:
    // 0x45e804: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x45e804u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_45e808:
    // 0x45e808: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x45e808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_45e80c:
    // 0x45e80c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x45e80cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_45e810:
    // 0x45e810: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x45e810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_45e814:
    // 0x45e814: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x45e814u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_45e818:
    // 0x45e818: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x45e818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_45e81c:
    // 0x45e81c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x45e81cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_45e820:
    // 0x45e820: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x45e820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_45e824:
    // 0x45e824: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x45e824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_45e828:
    // 0x45e828: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x45e828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_45e82c:
    // 0x45e82c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x45e82cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_45e830:
    // 0x45e830: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x45e830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_45e834:
    // 0x45e834: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x45e834u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_45e838:
    // 0x45e838: 0xafa4014c  sw          $a0, 0x14C($sp)
    ctx->pc = 0x45e838u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 4));
label_45e83c:
    // 0x45e83c: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x45e83cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_45e840:
    // 0x45e840: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x45e840u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_45e844:
    // 0x45e844: 0x8c630ec8  lw          $v1, 0xEC8($v1)
    ctx->pc = 0x45e844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3784)));
label_45e848:
    // 0x45e848: 0x8c5789e0  lw          $s7, -0x7620($v0)
    ctx->pc = 0x45e848u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_45e84c:
    // 0x45e84c: 0x8c840054  lw          $a0, 0x54($a0)
    ctx->pc = 0x45e84cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
label_45e850:
    // 0x45e850: 0x8c730008  lw          $s3, 0x8($v1)
    ctx->pc = 0x45e850u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_45e854:
    // 0x45e854: 0xc0c9a58  jal         func_326960
label_45e858:
    if (ctx->pc == 0x45E858u) {
        ctx->pc = 0x45E858u;
            // 0x45e858: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x45E85Cu;
        goto label_45e85c;
    }
    ctx->pc = 0x45E854u;
    SET_GPR_U32(ctx, 31, 0x45E85Cu);
    ctx->pc = 0x45E858u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45E854u;
            // 0x45e858: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x326960u;
    if (runtime->hasFunction(0x326960u)) {
        auto targetFn = runtime->lookupFunction(0x326960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45E85Cu; }
        if (ctx->pc != 0x45E85Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00326960_0x326960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45E85Cu; }
        if (ctx->pc != 0x45E85Cu) { return; }
    }
    ctx->pc = 0x45E85Cu;
label_45e85c:
    // 0x45e85c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x45e85cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_45e860:
    // 0x45e860: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x45e860u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_45e864:
    // 0x45e864: 0xc123328  jal         func_48CCA0
label_45e868:
    if (ctx->pc == 0x45E868u) {
        ctx->pc = 0x45E868u;
            // 0x45e868: 0x24050028  addiu       $a1, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->pc = 0x45E86Cu;
        goto label_45e86c;
    }
    ctx->pc = 0x45E864u;
    SET_GPR_U32(ctx, 31, 0x45E86Cu);
    ctx->pc = 0x45E868u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45E864u;
            // 0x45e868: 0x24050028  addiu       $a1, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CCA0u;
    if (runtime->hasFunction(0x48CCA0u)) {
        auto targetFn = runtime->lookupFunction(0x48CCA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45E86Cu; }
        if (ctx->pc != 0x45E86Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CCA0_0x48cca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45E86Cu; }
        if (ctx->pc != 0x45E86Cu) { return; }
    }
    ctx->pc = 0x45E86Cu;
label_45e86c:
    // 0x45e86c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x45e86cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_45e870:
    // 0x45e870: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x45e870u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_45e874:
    // 0x45e874: 0xc123328  jal         func_48CCA0
label_45e878:
    if (ctx->pc == 0x45E878u) {
        ctx->pc = 0x45E878u;
            // 0x45e878: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x45E87Cu;
        goto label_45e87c;
    }
    ctx->pc = 0x45E874u;
    SET_GPR_U32(ctx, 31, 0x45E87Cu);
    ctx->pc = 0x45E878u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45E874u;
            // 0x45e878: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CCA0u;
    if (runtime->hasFunction(0x48CCA0u)) {
        auto targetFn = runtime->lookupFunction(0x48CCA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45E87Cu; }
        if (ctx->pc != 0x45E87Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CCA0_0x48cca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45E87Cu; }
        if (ctx->pc != 0x45E87Cu) { return; }
    }
    ctx->pc = 0x45E87Cu;
label_45e87c:
    // 0x45e87c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x45e87cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_45e880:
    // 0x45e880: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x45e880u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_45e884:
    // 0x45e884: 0xc123328  jal         func_48CCA0
label_45e888:
    if (ctx->pc == 0x45E888u) {
        ctx->pc = 0x45E888u;
            // 0x45e888: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x45E88Cu;
        goto label_45e88c;
    }
    ctx->pc = 0x45E884u;
    SET_GPR_U32(ctx, 31, 0x45E88Cu);
    ctx->pc = 0x45E888u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45E884u;
            // 0x45e888: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CCA0u;
    if (runtime->hasFunction(0x48CCA0u)) {
        auto targetFn = runtime->lookupFunction(0x48CCA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45E88Cu; }
        if (ctx->pc != 0x45E88Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CCA0_0x48cca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45E88Cu; }
        if (ctx->pc != 0x45E88Cu) { return; }
    }
    ctx->pc = 0x45E88Cu;
label_45e88c:
    // 0x45e88c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x45e88cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_45e890:
    // 0x45e890: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x45e890u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_45e894:
    // 0x45e894: 0xc123328  jal         func_48CCA0
label_45e898:
    if (ctx->pc == 0x45E898u) {
        ctx->pc = 0x45E898u;
            // 0x45e898: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x45E89Cu;
        goto label_45e89c;
    }
    ctx->pc = 0x45E894u;
    SET_GPR_U32(ctx, 31, 0x45E89Cu);
    ctx->pc = 0x45E898u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45E894u;
            // 0x45e898: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CCA0u;
    if (runtime->hasFunction(0x48CCA0u)) {
        auto targetFn = runtime->lookupFunction(0x48CCA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45E89Cu; }
        if (ctx->pc != 0x45E89Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CCA0_0x48cca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45E89Cu; }
        if (ctx->pc != 0x45E89Cu) { return; }
    }
    ctx->pc = 0x45E89Cu;
label_45e89c:
    // 0x45e89c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x45e89cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_45e8a0:
    // 0x45e8a0: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x45e8a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_45e8a4:
    // 0x45e8a4: 0xc123328  jal         func_48CCA0
label_45e8a8:
    if (ctx->pc == 0x45E8A8u) {
        ctx->pc = 0x45E8A8u;
            // 0x45e8a8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x45E8ACu;
        goto label_45e8ac;
    }
    ctx->pc = 0x45E8A4u;
    SET_GPR_U32(ctx, 31, 0x45E8ACu);
    ctx->pc = 0x45E8A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45E8A4u;
            // 0x45e8a8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CCA0u;
    if (runtime->hasFunction(0x48CCA0u)) {
        auto targetFn = runtime->lookupFunction(0x48CCA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45E8ACu; }
        if (ctx->pc != 0x45E8ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CCA0_0x48cca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45E8ACu; }
        if (ctx->pc != 0x45E8ACu) { return; }
    }
    ctx->pc = 0x45E8ACu;
label_45e8ac:
    // 0x45e8ac: 0x12a002fa  beqz        $s5, . + 4 + (0x2FA << 2)
label_45e8b0:
    if (ctx->pc == 0x45E8B0u) {
        ctx->pc = 0x45E8B0u;
            // 0x45e8b0: 0x7fa20120  sq          $v0, 0x120($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 2));
        ctx->pc = 0x45E8B4u;
        goto label_45e8b4;
    }
    ctx->pc = 0x45E8ACu;
    {
        const bool branch_taken_0x45e8ac = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x45E8B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45E8ACu;
            // 0x45e8b0: 0x7fa20120  sq          $v0, 0x120($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45e8ac) {
            ctx->pc = 0x45F498u;
            goto label_45f498;
        }
    }
    ctx->pc = 0x45E8B4u;
label_45e8b4:
    // 0x45e8b4: 0x562002f9  bnel        $s1, $zero, . + 4 + (0x2F9 << 2)
label_45e8b8:
    if (ctx->pc == 0x45E8B8u) {
        ctx->pc = 0x45E8B8u;
            // 0x45e8b8: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->pc = 0x45E8BCu;
        goto label_45e8bc;
    }
    ctx->pc = 0x45E8B4u;
    {
        const bool branch_taken_0x45e8b4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x45e8b4) {
            ctx->pc = 0x45E8B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x45E8B4u;
            // 0x45e8b8: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x45F49Cu;
            goto label_45f49c;
        }
    }
    ctx->pc = 0x45E8BCu;
label_45e8bc:
    // 0x45e8bc: 0x32020002  andi        $v0, $s0, 0x2
    ctx->pc = 0x45e8bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2);
label_45e8c0:
    // 0x45e8c0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_45e8c4:
    if (ctx->pc == 0x45E8C4u) {
        ctx->pc = 0x45E8C8u;
        goto label_45e8c8;
    }
    ctx->pc = 0x45E8C0u;
    {
        const bool branch_taken_0x45e8c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45e8c0) {
            ctx->pc = 0x45E8E0u;
            goto label_45e8e0;
        }
    }
    ctx->pc = 0x45E8C8u;
label_45e8c8:
    // 0x45e8c8: 0x16c00005  bnez        $s6, . + 4 + (0x5 << 2)
label_45e8cc:
    if (ctx->pc == 0x45E8CCu) {
        ctx->pc = 0x45E8D0u;
        goto label_45e8d0;
    }
    ctx->pc = 0x45E8C8u;
    {
        const bool branch_taken_0x45e8c8 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x45e8c8) {
            ctx->pc = 0x45E8E0u;
            goto label_45e8e0;
        }
    }
    ctx->pc = 0x45E8D0u;
label_45e8d0:
    // 0x45e8d0: 0x2ea10009  sltiu       $at, $s5, 0x9
    ctx->pc = 0x45e8d0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_45e8d4:
    // 0x45e8d4: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_45e8d8:
    if (ctx->pc == 0x45E8D8u) {
        ctx->pc = 0x45E8DCu;
        goto label_45e8dc;
    }
    ctx->pc = 0x45E8D4u;
    {
        const bool branch_taken_0x45e8d4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x45e8d4) {
            ctx->pc = 0x45E8E0u;
            goto label_45e8e0;
        }
    }
    ctx->pc = 0x45E8DCu;
label_45e8dc:
    // 0x45e8dc: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x45e8dcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
label_45e8e0:
    // 0x45e8e0: 0x12a00002  beqz        $s5, . + 4 + (0x2 << 2)
label_45e8e4:
    if (ctx->pc == 0x45E8E4u) {
        ctx->pc = 0x45E8E8u;
        goto label_45e8e8;
    }
    ctx->pc = 0x45E8E0u;
    {
        const bool branch_taken_0x45e8e0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x45e8e0) {
            ctx->pc = 0x45E8ECu;
            goto label_45e8ec;
        }
    }
    ctx->pc = 0x45E8E8u;
label_45e8e8:
    // 0x45e8e8: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x45e8e8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
label_45e8ec:
    // 0x45e8ec: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x45e8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_45e8f0:
    // 0x45e8f0: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x45e8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_45e8f4:
    // 0x45e8f4: 0x2442c230  addiu       $v0, $v0, -0x3DD0
    ctx->pc = 0x45e8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951472));
label_45e8f8:
    // 0x45e8f8: 0x847004ba  lh          $s0, 0x4BA($v1)
    ctx->pc = 0x45e8f8u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 1210)));
label_45e8fc:
    // 0x45e8fc: 0xafa20130  sw          $v0, 0x130($sp)
    ctx->pc = 0x45e8fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 2));
label_45e900:
    // 0x45e900: 0x3c120067  lui         $s2, 0x67
    ctx->pc = 0x45e900u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)103 << 16));
label_45e904:
    // 0x45e904: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x45e904u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_45e908:
    // 0x45e908: 0x2652c150  addiu       $s2, $s2, -0x3EB0
    ctx->pc = 0x45e908u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294951248));
label_45e90c:
    // 0x45e90c: 0x845104b8  lh          $s1, 0x4B8($v0)
    ctx->pc = 0x45e90cu;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 1208)));
label_45e910:
    // 0x45e910: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x45e910u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_45e914:
    // 0x45e914: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x45e914u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_45e918:
    // 0x45e918: 0x844204c0  lh          $v0, 0x4C0($v0)
    ctx->pc = 0x45e918u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 1216)));
label_45e91c:
    // 0x45e91c: 0x7fa20110  sq          $v0, 0x110($sp)
    ctx->pc = 0x45e91cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 2));
label_45e920:
    // 0x45e920: 0x846204c2  lh          $v0, 0x4C2($v1)
    ctx->pc = 0x45e920u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 1218)));
label_45e924:
    // 0x45e924: 0x7fa20100  sq          $v0, 0x100($sp)
    ctx->pc = 0x45e924u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 2));
label_45e928:
    // 0x45e928: 0x3c02c180  lui         $v0, 0xC180
    ctx->pc = 0x45e928u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49536 << 16));
label_45e92c:
    // 0x45e92c: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x45e92cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_45e930:
    // 0x45e930: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x45e930u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_45e934:
    // 0x45e934: 0x8c4289f0  lw          $v0, -0x7610($v0)
    ctx->pc = 0x45e934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_45e938:
    // 0x45e938: 0x90420029  lbu         $v0, 0x29($v0)
    ctx->pc = 0x45e938u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 41)));
label_45e93c:
    // 0x45e93c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_45e940:
    if (ctx->pc == 0x45E940u) {
        ctx->pc = 0x45E940u;
            // 0x45e940: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x45E944u;
        goto label_45e944;
    }
    ctx->pc = 0x45E93Cu;
    {
        const bool branch_taken_0x45e93c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x45E940u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45E93Cu;
            // 0x45e940: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45e93c) {
            ctx->pc = 0x45E954u;
            goto label_45e954;
        }
    }
    ctx->pc = 0x45E944u;
label_45e944:
    // 0x45e944: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x45e944u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
label_45e948:
    // 0x45e948: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x45e948u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_45e94c:
    // 0x45e94c: 0x0  nop
    ctx->pc = 0x45e94cu;
    // NOP
label_45e950:
    // 0x45e950: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x45e950u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_45e954:
    // 0x45e954: 0x8fa2014c  lw          $v0, 0x14C($sp)
    ctx->pc = 0x45e954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
label_45e958:
    // 0x45e958: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x45e958u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_45e95c:
    // 0x45e95c: 0x8c420054  lw          $v0, 0x54($v0)
    ctx->pc = 0x45e95cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_45e960:
    // 0x45e960: 0x8c44060c  lw          $a0, 0x60C($v0)
    ctx->pc = 0x45e960u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1548)));
label_45e964:
    // 0x45e964: 0xc0506ac  jal         func_141AB0
label_45e968:
    if (ctx->pc == 0x45E968u) {
        ctx->pc = 0x45E968u;
            // 0x45e968: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x45E96Cu;
        goto label_45e96c;
    }
    ctx->pc = 0x45E964u;
    SET_GPR_U32(ctx, 31, 0x45E96Cu);
    ctx->pc = 0x45E968u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45E964u;
            // 0x45e968: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45E96Cu; }
        if (ctx->pc != 0x45E96Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45E96Cu; }
        if (ctx->pc != 0x45E96Cu) { return; }
    }
    ctx->pc = 0x45E96Cu;
label_45e96c:
    // 0x45e96c: 0x8ef90000  lw          $t9, 0x0($s7)
    ctx->pc = 0x45e96cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_45e970:
    // 0x45e970: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x45e970u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_45e974:
    // 0x45e974: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x45e974u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_45e978:
    // 0x45e978: 0x320f809  jalr        $t9
label_45e97c:
    if (ctx->pc == 0x45E97Cu) {
        ctx->pc = 0x45E97Cu;
            // 0x45e97c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x45E980u;
        goto label_45e980;
    }
    ctx->pc = 0x45E978u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x45E980u);
        ctx->pc = 0x45E97Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45E978u;
            // 0x45e97c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x45E980u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x45E980u; }
            if (ctx->pc != 0x45E980u) { return; }
        }
        }
    }
    ctx->pc = 0x45E980u;
label_45e980:
    // 0x45e980: 0x3c02438e  lui         $v0, 0x438E
    ctx->pc = 0x45e980u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17294 << 16));
label_45e984:
    // 0x45e984: 0x3c083f00  lui         $t0, 0x3F00
    ctx->pc = 0x45e984u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16128 << 16));
label_45e988:
    // 0x45e988: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x45e988u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_45e98c:
    // 0x45e98c: 0x8fa50130  lw          $a1, 0x130($sp)
    ctx->pc = 0x45e98cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_45e990:
    // 0x45e990: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x45e990u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_45e994:
    // 0x45e994: 0x3c034302  lui         $v1, 0x4302
    ctx->pc = 0x45e994u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17154 << 16));
label_45e998:
    // 0x45e998: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x45e998u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_45e99c:
    // 0x45e99c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x45e99cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_45e9a0:
    // 0x45e9a0: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x45e9a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_45e9a4:
    // 0x45e9a4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x45e9a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_45e9a8:
    // 0x45e9a8: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x45e9a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_45e9ac:
    // 0x45e9ac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x45e9acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_45e9b0:
    // 0x45e9b0: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x45e9b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_45e9b4:
    // 0x45e9b4: 0xc442000c  lwc1        $f2, 0xC($v0)
    ctx->pc = 0x45e9b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_45e9b8:
    // 0x45e9b8: 0x46140540  add.s       $f21, $f0, $f20
    ctx->pc = 0x45e9b8u;
    ctx->f[21] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_45e9bc:
    // 0x45e9bc: 0x7ba20110  lq          $v0, 0x110($sp)
    ctx->pc = 0x45e9bcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_45e9c0:
    // 0x45e9c0: 0x44882000  mtc1        $t0, $f4
    ctx->pc = 0x45e9c0u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_45e9c4:
    // 0x45e9c4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x45e9c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_45e9c8:
    // 0x45e9c8: 0x0  nop
    ctx->pc = 0x45e9c8u;
    // NOP
label_45e9cc:
    // 0x45e9cc: 0x46800c20  cvt.s.w     $f16, $f1
    ctx->pc = 0x45e9ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_45e9d0:
    // 0x45e9d0: 0x7ba20100  lq          $v0, 0x100($sp)
    ctx->pc = 0x45e9d0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_45e9d4:
    // 0x45e9d4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x45e9d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_45e9d8:
    // 0x45e9d8: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x45e9d8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
label_45e9dc:
    // 0x45e9dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x45e9dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_45e9e0:
    // 0x45e9e0: 0x0  nop
    ctx->pc = 0x45e9e0u;
    // NOP
label_45e9e4:
    // 0x45e9e4: 0x46800c60  cvt.s.w     $f17, $f1
    ctx->pc = 0x45e9e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_45e9e8:
    // 0x45e9e8: 0x4602abc0  add.s       $f15, $f21, $f2
    ctx->pc = 0x45e9e8u;
    ctx->f[15] = FPU_ADD_S(ctx->f[21], ctx->f[2]);
label_45e9ec:
    // 0x45e9ec: 0x46030301  sub.s       $f12, $f0, $f3
    ctx->pc = 0x45e9ecu;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
label_45e9f0:
    // 0x45e9f0: 0x46030380  add.s       $f14, $f0, $f3
    ctx->pc = 0x45e9f0u;
    ctx->f[14] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_45e9f4:
    // 0x45e9f4: 0xc0bc284  jal         func_2F0A10
label_45e9f8:
    if (ctx->pc == 0x45E9F8u) {
        ctx->pc = 0x45E9F8u;
            // 0x45e9f8: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x45E9FCu;
        goto label_45e9fc;
    }
    ctx->pc = 0x45E9F4u;
    SET_GPR_U32(ctx, 31, 0x45E9FCu);
    ctx->pc = 0x45E9F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45E9F4u;
            // 0x45e9f8: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45E9FCu; }
        if (ctx->pc != 0x45E9FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45E9FCu; }
        if (ctx->pc != 0x45E9FCu) { return; }
    }
    ctx->pc = 0x45E9FCu;
label_45e9fc:
    // 0x45e9fc: 0x7ba20110  lq          $v0, 0x110($sp)
    ctx->pc = 0x45e9fcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_45ea00:
    // 0x45ea00: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x45ea00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
label_45ea04:
    // 0x45ea04: 0x3c0843be  lui         $t0, 0x43BE
    ctx->pc = 0x45ea04u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)17342 << 16));
label_45ea08:
    // 0x45ea08: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x45ea08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_45ea0c:
    // 0x45ea0c: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x45ea0cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_45ea10:
    // 0x45ea10: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x45ea10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_45ea14:
    // 0x45ea14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x45ea14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_45ea18:
    // 0x45ea18: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x45ea18u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_45ea1c:
    // 0x45ea1c: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x45ea1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_45ea20:
    // 0x45ea20: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x45ea20u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_45ea24:
    // 0x45ea24: 0x24450010  addiu       $a1, $v0, 0x10
    ctx->pc = 0x45ea24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_45ea28:
    // 0x45ea28: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x45ea28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_45ea2c:
    // 0x45ea2c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x45ea2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_45ea30:
    // 0x45ea30: 0x7ba20100  lq          $v0, 0x100($sp)
    ctx->pc = 0x45ea30u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_45ea34:
    // 0x45ea34: 0x44839000  mtc1        $v1, $f18
    ctx->pc = 0x45ea34u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_45ea38:
    // 0x45ea38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x45ea38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_45ea3c:
    // 0x45ea3c: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x45ea3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_45ea40:
    // 0x45ea40: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x45ea40u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_45ea44:
    // 0x45ea44: 0xc4420018  lwc1        $f2, 0x18($v0)
    ctx->pc = 0x45ea44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_45ea48:
    // 0x45ea48: 0xc441001c  lwc1        $f1, 0x1C($v0)
    ctx->pc = 0x45ea48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_45ea4c:
    // 0x45ea4c: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x45ea4cu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_45ea50:
    // 0x45ea50: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x45ea50u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_45ea54:
    // 0x45ea54: 0x4601abc0  add.s       $f15, $f21, $f1
    ctx->pc = 0x45ea54u;
    ctx->f[15] = FPU_ADD_S(ctx->f[21], ctx->f[1]);
label_45ea58:
    // 0x45ea58: 0x46020301  sub.s       $f12, $f0, $f2
    ctx->pc = 0x45ea58u;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_45ea5c:
    // 0x45ea5c: 0xc0bc284  jal         func_2F0A10
label_45ea60:
    if (ctx->pc == 0x45EA60u) {
        ctx->pc = 0x45EA60u;
            // 0x45ea60: 0x46020380  add.s       $f14, $f0, $f2 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
        ctx->pc = 0x45EA64u;
        goto label_45ea64;
    }
    ctx->pc = 0x45EA5Cu;
    SET_GPR_U32(ctx, 31, 0x45EA64u);
    ctx->pc = 0x45EA60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45EA5Cu;
            // 0x45ea60: 0x46020380  add.s       $f14, $f0, $f2 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45EA64u; }
        if (ctx->pc != 0x45EA64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45EA64u; }
        if (ctx->pc != 0x45EA64u) { return; }
    }
    ctx->pc = 0x45EA64u;
label_45ea64:
    // 0x45ea64: 0x8ef90000  lw          $t9, 0x0($s7)
    ctx->pc = 0x45ea64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_45ea68:
    // 0x45ea68: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x45ea68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_45ea6c:
    // 0x45ea6c: 0x320f809  jalr        $t9
label_45ea70:
    if (ctx->pc == 0x45EA70u) {
        ctx->pc = 0x45EA70u;
            // 0x45ea70: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x45EA74u;
        goto label_45ea74;
    }
    ctx->pc = 0x45EA6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x45EA74u);
        ctx->pc = 0x45EA70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45EA6Cu;
            // 0x45ea70: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x45EA74u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x45EA74u; }
            if (ctx->pc != 0x45EA74u) { return; }
        }
        }
    }
    ctx->pc = 0x45EA74u;
label_45ea74:
    // 0x45ea74: 0x8fa2014c  lw          $v0, 0x14C($sp)
    ctx->pc = 0x45ea74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
label_45ea78:
    // 0x45ea78: 0x8c420054  lw          $v0, 0x54($v0)
    ctx->pc = 0x45ea78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_45ea7c:
    // 0x45ea7c: 0x8c44060c  lw          $a0, 0x60C($v0)
    ctx->pc = 0x45ea7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1548)));
label_45ea80:
    // 0x45ea80: 0xc0506ac  jal         func_141AB0
label_45ea84:
    if (ctx->pc == 0x45EA84u) {
        ctx->pc = 0x45EA84u;
            // 0x45ea84: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x45EA88u;
        goto label_45ea88;
    }
    ctx->pc = 0x45EA80u;
    SET_GPR_U32(ctx, 31, 0x45EA88u);
    ctx->pc = 0x45EA84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45EA80u;
            // 0x45ea84: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45EA88u; }
        if (ctx->pc != 0x45EA88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45EA88u; }
        if (ctx->pc != 0x45EA88u) { return; }
    }
    ctx->pc = 0x45EA88u;
label_45ea88:
    // 0x45ea88: 0x8ef90000  lw          $t9, 0x0($s7)
    ctx->pc = 0x45ea88u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_45ea8c:
    // 0x45ea8c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x45ea8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_45ea90:
    // 0x45ea90: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x45ea90u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_45ea94:
    // 0x45ea94: 0x320f809  jalr        $t9
label_45ea98:
    if (ctx->pc == 0x45EA98u) {
        ctx->pc = 0x45EA98u;
            // 0x45ea98: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x45EA9Cu;
        goto label_45ea9c;
    }
    ctx->pc = 0x45EA94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x45EA9Cu);
        ctx->pc = 0x45EA98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45EA94u;
            // 0x45ea98: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x45EA9Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x45EA9Cu; }
            if (ctx->pc != 0x45EA9Cu) { return; }
        }
        }
    }
    ctx->pc = 0x45EA9Cu;
label_45ea9c:
    // 0x45ea9c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x45ea9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_45eaa0:
    // 0x45eaa0: 0x52c30017  beql        $s6, $v1, . + 4 + (0x17 << 2)
label_45eaa4:
    if (ctx->pc == 0x45EAA4u) {
        ctx->pc = 0x45EAA4u;
            // 0x45eaa4: 0x7ba20120  lq          $v0, 0x120($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 288)));
        ctx->pc = 0x45EAA8u;
        goto label_45eaa8;
    }
    ctx->pc = 0x45EAA0u;
    {
        const bool branch_taken_0x45eaa0 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 3));
        if (branch_taken_0x45eaa0) {
            ctx->pc = 0x45EAA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x45EAA0u;
            // 0x45eaa4: 0x7ba20120  lq          $v0, 0x120($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 288)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x45EB00u;
            goto label_45eb00;
        }
    }
    ctx->pc = 0x45EAA8u;
label_45eaa8:
    // 0x45eaa8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x45eaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_45eaac:
    // 0x45eaac: 0x52c20010  beql        $s6, $v0, . + 4 + (0x10 << 2)
label_45eab0:
    if (ctx->pc == 0x45EAB0u) {
        ctx->pc = 0x45EAB0u;
            // 0x45eab0: 0x8e630004  lw          $v1, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->pc = 0x45EAB4u;
        goto label_45eab4;
    }
    ctx->pc = 0x45EAACu;
    {
        const bool branch_taken_0x45eaac = (GPR_U64(ctx, 22) == GPR_U64(ctx, 2));
        if (branch_taken_0x45eaac) {
            ctx->pc = 0x45EAB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x45EAACu;
            // 0x45eab0: 0x8e630004  lw          $v1, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x45EAF0u;
            goto label_45eaf0;
        }
    }
    ctx->pc = 0x45EAB4u;
label_45eab4:
    // 0x45eab4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x45eab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_45eab8:
    // 0x45eab8: 0x52c20009  beql        $s6, $v0, . + 4 + (0x9 << 2)
label_45eabc:
    if (ctx->pc == 0x45EABCu) {
        ctx->pc = 0x45EABCu;
            // 0x45eabc: 0x8e630004  lw          $v1, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->pc = 0x45EAC0u;
        goto label_45eac0;
    }
    ctx->pc = 0x45EAB8u;
    {
        const bool branch_taken_0x45eab8 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 2));
        if (branch_taken_0x45eab8) {
            ctx->pc = 0x45EABCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x45EAB8u;
            // 0x45eabc: 0x8e630004  lw          $v1, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x45EAE0u;
            goto label_45eae0;
        }
    }
    ctx->pc = 0x45EAC0u;
label_45eac0:
    // 0x45eac0: 0x52c00003  beql        $s6, $zero, . + 4 + (0x3 << 2)
label_45eac4:
    if (ctx->pc == 0x45EAC4u) {
        ctx->pc = 0x45EAC4u;
            // 0x45eac4: 0x8e630004  lw          $v1, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->pc = 0x45EAC8u;
        goto label_45eac8;
    }
    ctx->pc = 0x45EAC0u;
    {
        const bool branch_taken_0x45eac0 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x45eac0) {
            ctx->pc = 0x45EAC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x45EAC0u;
            // 0x45eac4: 0x8e630004  lw          $v1, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x45EAD0u;
            goto label_45ead0;
        }
    }
    ctx->pc = 0x45EAC8u;
label_45eac8:
    // 0x45eac8: 0x10000022  b           . + 4 + (0x22 << 2)
label_45eacc:
    if (ctx->pc == 0x45EACCu) {
        ctx->pc = 0x45EAD0u;
        goto label_45ead0;
    }
    ctx->pc = 0x45EAC8u;
    {
        const bool branch_taken_0x45eac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45eac8) {
            ctx->pc = 0x45EB54u;
            goto label_45eb54;
        }
    }
    ctx->pc = 0x45EAD0u;
label_45ead0:
    // 0x45ead0: 0x151080  sll         $v0, $s5, 2
    ctx->pc = 0x45ead0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
label_45ead4:
    // 0x45ead4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x45ead4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_45ead8:
    // 0x45ead8: 0x1000001e  b           . + 4 + (0x1E << 2)
label_45eadc:
    if (ctx->pc == 0x45EADCu) {
        ctx->pc = 0x45EADCu;
            // 0x45eadc: 0x8c5400c8  lw          $s4, 0xC8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 200)));
        ctx->pc = 0x45EAE0u;
        goto label_45eae0;
    }
    ctx->pc = 0x45EAD8u;
    {
        const bool branch_taken_0x45ead8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x45EADCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45EAD8u;
            // 0x45eadc: 0x8c5400c8  lw          $s4, 0xC8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 200)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45ead8) {
            ctx->pc = 0x45EB54u;
            goto label_45eb54;
        }
    }
    ctx->pc = 0x45EAE0u;
label_45eae0:
    // 0x45eae0: 0x151080  sll         $v0, $s5, 2
    ctx->pc = 0x45eae0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
label_45eae4:
    // 0x45eae4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x45eae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_45eae8:
    // 0x45eae8: 0x1000001a  b           . + 4 + (0x1A << 2)
label_45eaec:
    if (ctx->pc == 0x45EAECu) {
        ctx->pc = 0x45EAECu;
            // 0x45eaec: 0x8c540048  lw          $s4, 0x48($v0) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
        ctx->pc = 0x45EAF0u;
        goto label_45eaf0;
    }
    ctx->pc = 0x45EAE8u;
    {
        const bool branch_taken_0x45eae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x45EAECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45EAE8u;
            // 0x45eaec: 0x8c540048  lw          $s4, 0x48($v0) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45eae8) {
            ctx->pc = 0x45EB54u;
            goto label_45eb54;
        }
    }
    ctx->pc = 0x45EAF0u;
label_45eaf0:
    // 0x45eaf0: 0x151080  sll         $v0, $s5, 2
    ctx->pc = 0x45eaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
label_45eaf4:
    // 0x45eaf4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x45eaf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_45eaf8:
    // 0x45eaf8: 0x10000016  b           . + 4 + (0x16 << 2)
label_45eafc:
    if (ctx->pc == 0x45EAFCu) {
        ctx->pc = 0x45EAFCu;
            // 0x45eafc: 0x8c540088  lw          $s4, 0x88($v0) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
        ctx->pc = 0x45EB00u;
        goto label_45eb00;
    }
    ctx->pc = 0x45EAF8u;
    {
        const bool branch_taken_0x45eaf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x45EAFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45EAF8u;
            // 0x45eafc: 0x8c540088  lw          $s4, 0x88($v0) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45eaf8) {
            ctx->pc = 0x45EB54u;
            goto label_45eb54;
        }
    }
    ctx->pc = 0x45EB00u;
label_45eb00:
    // 0x45eb00: 0x50430011  beql        $v0, $v1, . + 4 + (0x11 << 2)
label_45eb04:
    if (ctx->pc == 0x45EB04u) {
        ctx->pc = 0x45EB04u;
            // 0x45eb04: 0x8e630004  lw          $v1, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->pc = 0x45EB08u;
        goto label_45eb08;
    }
    ctx->pc = 0x45EB00u;
    {
        const bool branch_taken_0x45eb00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x45eb00) {
            ctx->pc = 0x45EB04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x45EB00u;
            // 0x45eb04: 0x8e630004  lw          $v1, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x45EB48u;
            goto label_45eb48;
        }
    }
    ctx->pc = 0x45EB08u;
label_45eb08:
    // 0x45eb08: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x45eb08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_45eb0c:
    // 0x45eb0c: 0x5043000a  beql        $v0, $v1, . + 4 + (0xA << 2)
label_45eb10:
    if (ctx->pc == 0x45EB10u) {
        ctx->pc = 0x45EB10u;
            // 0x45eb10: 0x8e630004  lw          $v1, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->pc = 0x45EB14u;
        goto label_45eb14;
    }
    ctx->pc = 0x45EB0Cu;
    {
        const bool branch_taken_0x45eb0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x45eb0c) {
            ctx->pc = 0x45EB10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x45EB0Cu;
            // 0x45eb10: 0x8e630004  lw          $v1, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x45EB38u;
            goto label_45eb38;
        }
    }
    ctx->pc = 0x45EB14u;
label_45eb14:
    // 0x45eb14: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x45eb14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_45eb18:
    // 0x45eb18: 0x50430003  beql        $v0, $v1, . + 4 + (0x3 << 2)
label_45eb1c:
    if (ctx->pc == 0x45EB1Cu) {
        ctx->pc = 0x45EB1Cu;
            // 0x45eb1c: 0x8e630004  lw          $v1, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->pc = 0x45EB20u;
        goto label_45eb20;
    }
    ctx->pc = 0x45EB18u;
    {
        const bool branch_taken_0x45eb18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x45eb18) {
            ctx->pc = 0x45EB1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x45EB18u;
            // 0x45eb1c: 0x8e630004  lw          $v1, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x45EB28u;
            goto label_45eb28;
        }
    }
    ctx->pc = 0x45EB20u;
label_45eb20:
    // 0x45eb20: 0x1000000c  b           . + 4 + (0xC << 2)
label_45eb24:
    if (ctx->pc == 0x45EB24u) {
        ctx->pc = 0x45EB28u;
        goto label_45eb28;
    }
    ctx->pc = 0x45EB20u;
    {
        const bool branch_taken_0x45eb20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45eb20) {
            ctx->pc = 0x45EB54u;
            goto label_45eb54;
        }
    }
    ctx->pc = 0x45EB28u;
label_45eb28:
    // 0x45eb28: 0x151080  sll         $v0, $s5, 2
    ctx->pc = 0x45eb28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
label_45eb2c:
    // 0x45eb2c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x45eb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_45eb30:
    // 0x45eb30: 0x10000008  b           . + 4 + (0x8 << 2)
label_45eb34:
    if (ctx->pc == 0x45EB34u) {
        ctx->pc = 0x45EB34u;
            // 0x45eb34: 0x8c54051c  lw          $s4, 0x51C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1308)));
        ctx->pc = 0x45EB38u;
        goto label_45eb38;
    }
    ctx->pc = 0x45EB30u;
    {
        const bool branch_taken_0x45eb30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x45EB34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45EB30u;
            // 0x45eb34: 0x8c54051c  lw          $s4, 0x51C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1308)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45eb30) {
            ctx->pc = 0x45EB54u;
            goto label_45eb54;
        }
    }
    ctx->pc = 0x45EB38u;
label_45eb38:
    // 0x45eb38: 0x151080  sll         $v0, $s5, 2
    ctx->pc = 0x45eb38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
label_45eb3c:
    // 0x45eb3c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x45eb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_45eb40:
    // 0x45eb40: 0x10000004  b           . + 4 + (0x4 << 2)
label_45eb44:
    if (ctx->pc == 0x45EB44u) {
        ctx->pc = 0x45EB44u;
            // 0x45eb44: 0x8c54055c  lw          $s4, 0x55C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1372)));
        ctx->pc = 0x45EB48u;
        goto label_45eb48;
    }
    ctx->pc = 0x45EB40u;
    {
        const bool branch_taken_0x45eb40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x45EB44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45EB40u;
            // 0x45eb44: 0x8c54055c  lw          $s4, 0x55C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1372)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45eb40) {
            ctx->pc = 0x45EB54u;
            goto label_45eb54;
        }
    }
    ctx->pc = 0x45EB48u;
label_45eb48:
    // 0x45eb48: 0x151080  sll         $v0, $s5, 2
    ctx->pc = 0x45eb48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
label_45eb4c:
    // 0x45eb4c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x45eb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_45eb50:
    // 0x45eb50: 0x8c54059c  lw          $s4, 0x59C($v0)
    ctx->pc = 0x45eb50u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1436)));
label_45eb54:
    // 0x45eb54: 0x56800003  bnel        $s4, $zero, . + 4 + (0x3 << 2)
label_45eb58:
    if (ctx->pc == 0x45EB58u) {
        ctx->pc = 0x45EB58u;
            // 0x45eb58: 0x3c031062  lui         $v1, 0x1062 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4194 << 16));
        ctx->pc = 0x45EB5Cu;
        goto label_45eb5c;
    }
    ctx->pc = 0x45EB54u;
    {
        const bool branch_taken_0x45eb54 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x45eb54) {
            ctx->pc = 0x45EB58u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x45EB54u;
            // 0x45eb58: 0x3c031062  lui         $v1, 0x1062 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4194 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x45EB64u;
            goto label_45eb64;
        }
    }
    ctx->pc = 0x45EB5Cu;
label_45eb5c:
    // 0x45eb5c: 0x641e0001  daddiu      $fp, $zero, 0x1
    ctx->pc = 0x45eb5cu;
    SET_GPR_S64(ctx, 30, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_45eb60:
    // 0x45eb60: 0x3c031062  lui         $v1, 0x1062
    ctx->pc = 0x45eb60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4194 << 16));
label_45eb64:
    // 0x45eb64: 0x3c028888  lui         $v0, 0x8888
    ctx->pc = 0x45eb64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34952 << 16));
label_45eb68:
    // 0x45eb68: 0x34634dd3  ori         $v1, $v1, 0x4DD3
    ctx->pc = 0x45eb68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)19923);
label_45eb6c:
    // 0x45eb6c: 0x34448889  ori         $a0, $v0, 0x8889
    ctx->pc = 0x45eb6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
label_45eb70:
    // 0x45eb70: 0x740019  multu       $v1, $s4
    ctx->pc = 0x45eb70u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 3) * (uint64_t)GPR_U32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_45eb74:
    // 0x45eb74: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x45eb74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
label_45eb78:
    // 0x45eb78: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x45eb78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_45eb7c:
    // 0x45eb7c: 0x3c02cccc  lui         $v0, 0xCCCC
    ctx->pc = 0x45eb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52428 << 16));
label_45eb80:
    // 0x45eb80: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x45eb80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_45eb84:
    // 0x45eb84: 0x1010  mfhi        $v0
    ctx->pc = 0x45eb84u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_45eb88:
    // 0x45eb88: 0x22982  srl         $a1, $v0, 6
    ctx->pc = 0x45eb88u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
label_45eb8c:
    // 0x45eb8c: 0x51140  sll         $v0, $a1, 5
    ctx->pc = 0x45eb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_45eb90:
    // 0x45eb90: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x45eb90u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_45eb94:
    // 0x45eb94: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x45eb94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_45eb98:
    // 0x45eb98: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x45eb98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_45eb9c:
    // 0x45eb9c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x45eb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_45eba0:
    // 0x45eba0: 0x2821023  subu        $v0, $s4, $v0
    ctx->pc = 0x45eba0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_45eba4:
    // 0x45eba4: 0x850019  multu       $a0, $a1
    ctx->pc = 0x45eba4u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 4) * (uint64_t)GPR_U32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_45eba8:
    // 0x45eba8: 0x7fa200f0  sq          $v0, 0xF0($sp)
    ctx->pc = 0x45eba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
label_45ebac:
    // 0x45ebac: 0x0  nop
    ctx->pc = 0x45ebacu;
    // NOP
label_45ebb0:
    // 0x45ebb0: 0x1010  mfhi        $v0
    ctx->pc = 0x45ebb0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_45ebb4:
    // 0x45ebb4: 0x23142  srl         $a2, $v0, 5
    ctx->pc = 0x45ebb4u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
label_45ebb8:
    // 0x45ebb8: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x45ebb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_45ebbc:
    // 0x45ebbc: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x45ebbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_45ebc0:
    // 0x45ebc0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x45ebc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_45ebc4:
    // 0x45ebc4: 0xa21023  subu        $v0, $a1, $v0
    ctx->pc = 0x45ebc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_45ebc8:
    // 0x45ebc8: 0x660019  multu       $v1, $a2
    ctx->pc = 0x45ebc8u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 3) * (uint64_t)GPR_U32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_45ebcc:
    // 0x45ebcc: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x45ebccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
label_45ebd0:
    // 0x45ebd0: 0x0  nop
    ctx->pc = 0x45ebd0u;
    // NOP
label_45ebd4:
    // 0x45ebd4: 0x1010  mfhi        $v0
    ctx->pc = 0x45ebd4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_45ebd8:
    // 0x45ebd8: 0x220c2  srl         $a0, $v0, 3
    ctx->pc = 0x45ebd8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
label_45ebdc:
    // 0x45ebdc: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x45ebdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_45ebe0:
    // 0x45ebe0: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x45ebe0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_45ebe4:
    // 0x45ebe4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x45ebe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_45ebe8:
    // 0x45ebe8: 0x2422821  addu        $a1, $s2, $v0
    ctx->pc = 0x45ebe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_45ebec:
    // 0x45ebec: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x45ebecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_45ebf0:
    // 0x45ebf0: 0xc21023  subu        $v0, $a2, $v0
    ctx->pc = 0x45ebf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_45ebf4:
    // 0x45ebf4: 0x13c00002  beqz        $fp, . + 4 + (0x2 << 2)
label_45ebf8:
    if (ctx->pc == 0x45EBF8u) {
        ctx->pc = 0x45EBF8u;
            // 0x45ebf8: 0x7fa200d0  sq          $v0, 0xD0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
        ctx->pc = 0x45EBFCu;
        goto label_45ebfc;
    }
    ctx->pc = 0x45EBF4u;
    {
        const bool branch_taken_0x45ebf4 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x45EBF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45EBF4u;
            // 0x45ebf8: 0x7fa200d0  sq          $v0, 0xD0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45ebf4) {
            ctx->pc = 0x45EC00u;
            goto label_45ec00;
        }
    }
    ctx->pc = 0x45EBFCu;
label_45ebfc:
    // 0x45ebfc: 0x264500c0  addiu       $a1, $s2, 0xC0
    ctx->pc = 0x45ebfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 192));
label_45ec00:
    // 0x45ec00: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x45ec00u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_45ec04:
    // 0x45ec04: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x45ec04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
label_45ec08:
    // 0x45ec08: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x45ec08u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_45ec0c:
    // 0x45ec0c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x45ec0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_45ec10:
    // 0x45ec10: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x45ec10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_45ec14:
    // 0x45ec14: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x45ec14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_45ec18:
    // 0x45ec18: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x45ec18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_45ec1c:
    // 0x45ec1c: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x45ec1cu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_45ec20:
    // 0x45ec20: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x45ec20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_45ec24:
    // 0x45ec24: 0xc4b60008  lwc1        $f22, 0x8($a1)
    ctx->pc = 0x45ec24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_45ec28:
    // 0x45ec28: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x45ec28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_45ec2c:
    // 0x45ec2c: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x45ec2cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_45ec30:
    // 0x45ec30: 0x4601abc0  add.s       $f15, $f21, $f1
    ctx->pc = 0x45ec30u;
    ctx->f[15] = FPU_ADD_S(ctx->f[21], ctx->f[1]);
label_45ec34:
    // 0x45ec34: 0x46166380  add.s       $f14, $f12, $f22
    ctx->pc = 0x45ec34u;
    ctx->f[14] = FPU_ADD_S(ctx->f[12], ctx->f[22]);
label_45ec38:
    // 0x45ec38: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x45ec38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_45ec3c:
    // 0x45ec3c: 0xc0bc284  jal         func_2F0A10
label_45ec40:
    if (ctx->pc == 0x45EC40u) {
        ctx->pc = 0x45EC40u;
            // 0x45ec40: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x45EC44u;
        goto label_45ec44;
    }
    ctx->pc = 0x45EC3Cu;
    SET_GPR_U32(ctx, 31, 0x45EC44u);
    ctx->pc = 0x45EC40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45EC3Cu;
            // 0x45ec40: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45EC44u; }
        if (ctx->pc != 0x45EC44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45EC44u; }
        if (ctx->pc != 0x45EC44u) { return; }
    }
    ctx->pc = 0x45EC44u;
label_45ec44:
    // 0x45ec44: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x45ec44u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_45ec48:
    // 0x45ec48: 0x3c033f40  lui         $v1, 0x3F40
    ctx->pc = 0x45ec48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16192 << 16));
label_45ec4c:
    // 0x45ec4c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x45ec4cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_45ec50:
    // 0x45ec50: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x45ec50u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_45ec54:
    // 0x45ec54: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x45ec54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_45ec58:
    // 0x45ec58: 0x46140018  adda.s      $f0, $f20
    ctx->pc = 0x45ec58u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_45ec5c:
    // 0x45ec5c: 0x2422821  addu        $a1, $s2, $v0
    ctx->pc = 0x45ec5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_45ec60:
    // 0x45ec60: 0x13c00002  beqz        $fp, . + 4 + (0x2 << 2)
label_45ec64:
    if (ctx->pc == 0x45EC64u) {
        ctx->pc = 0x45EC64u;
            // 0x45ec64: 0x4601b51c  madd.s      $f20, $f22, $f1 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[22], ctx->f[1]));
        ctx->pc = 0x45EC68u;
        goto label_45ec68;
    }
    ctx->pc = 0x45EC60u;
    {
        const bool branch_taken_0x45ec60 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x45EC64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45EC60u;
            // 0x45ec64: 0x4601b51c  madd.s      $f20, $f22, $f1 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[22], ctx->f[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45ec60) {
            ctx->pc = 0x45EC6Cu;
            goto label_45ec6c;
        }
    }
    ctx->pc = 0x45EC68u;
label_45ec68:
    // 0x45ec68: 0x264500c0  addiu       $a1, $s2, 0xC0
    ctx->pc = 0x45ec68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 192));
label_45ec6c:
    // 0x45ec6c: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x45ec6cu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_45ec70:
    // 0x45ec70: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x45ec70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_45ec74:
    // 0x45ec74: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x45ec74u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_45ec78:
    // 0x45ec78: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x45ec78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_45ec7c:
    // 0x45ec7c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x45ec7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_45ec80:
    // 0x45ec80: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x45ec80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_45ec84:
    // 0x45ec84: 0xc4b60008  lwc1        $f22, 0x8($a1)
    ctx->pc = 0x45ec84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_45ec88:
    // 0x45ec88: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x45ec88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_45ec8c:
    // 0x45ec8c: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x45ec8cu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_45ec90:
    // 0x45ec90: 0x0  nop
    ctx->pc = 0x45ec90u;
    // NOP
label_45ec94:
    // 0x45ec94: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x45ec94u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_45ec98:
    // 0x45ec98: 0x4601abc0  add.s       $f15, $f21, $f1
    ctx->pc = 0x45ec98u;
    ctx->f[15] = FPU_ADD_S(ctx->f[21], ctx->f[1]);
label_45ec9c:
    // 0x45ec9c: 0x4616a380  add.s       $f14, $f20, $f22
    ctx->pc = 0x45ec9cu;
    ctx->f[14] = FPU_ADD_S(ctx->f[20], ctx->f[22]);
label_45eca0:
    // 0x45eca0: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x45eca0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_45eca4:
    // 0x45eca4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x45eca4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_45eca8:
    // 0x45eca8: 0xc0bc284  jal         func_2F0A10
label_45ecac:
    if (ctx->pc == 0x45ECACu) {
        ctx->pc = 0x45ECACu;
            // 0x45ecac: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x45ECB0u;
        goto label_45ecb0;
    }
    ctx->pc = 0x45ECA8u;
    SET_GPR_U32(ctx, 31, 0x45ECB0u);
    ctx->pc = 0x45ECACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45ECA8u;
            // 0x45ecac: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45ECB0u; }
        if (ctx->pc != 0x45ECB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45ECB0u; }
        if (ctx->pc != 0x45ECB0u) { return; }
    }
    ctx->pc = 0x45ECB0u;
label_45ecb0:
    // 0x45ecb0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x45ecb0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_45ecb4:
    // 0x45ecb4: 0x3c023f40  lui         $v0, 0x3F40
    ctx->pc = 0x45ecb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16192 << 16));
label_45ecb8:
    // 0x45ecb8: 0x46140018  adda.s      $f0, $f20
    ctx->pc = 0x45ecb8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_45ecbc:
    // 0x45ecbc: 0x264500a0  addiu       $a1, $s2, 0xA0
    ctx->pc = 0x45ecbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
label_45ecc0:
    // 0x45ecc0: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x45ecc0u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_45ecc4:
    // 0x45ecc4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x45ecc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_45ecc8:
    // 0x45ecc8: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x45ecc8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_45eccc:
    // 0x45eccc: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x45ecccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_45ecd0:
    // 0x45ecd0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x45ecd0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_45ecd4:
    // 0x45ecd4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x45ecd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_45ecd8:
    // 0x45ecd8: 0x0  nop
    ctx->pc = 0x45ecd8u;
    // NOP
label_45ecdc:
    // 0x45ecdc: 0x4601b51c  madd.s      $f20, $f22, $f1
    ctx->pc = 0x45ecdcu;
    ctx->f[20] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[22], ctx->f[1]));
label_45ece0:
    // 0x45ece0: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x45ece0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_45ece4:
    // 0x45ece4: 0xc65600a8  lwc1        $f22, 0xA8($s2)
    ctx->pc = 0x45ece4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_45ece8:
    // 0x45ece8: 0xc64100ac  lwc1        $f1, 0xAC($s2)
    ctx->pc = 0x45ece8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_45ecec:
    // 0x45ecec: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x45ececu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_45ecf0:
    // 0x45ecf0: 0x0  nop
    ctx->pc = 0x45ecf0u;
    // NOP
label_45ecf4:
    // 0x45ecf4: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x45ecf4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_45ecf8:
    // 0x45ecf8: 0x4601abc0  add.s       $f15, $f21, $f1
    ctx->pc = 0x45ecf8u;
    ctx->f[15] = FPU_ADD_S(ctx->f[21], ctx->f[1]);
label_45ecfc:
    // 0x45ecfc: 0x4616a380  add.s       $f14, $f20, $f22
    ctx->pc = 0x45ecfcu;
    ctx->f[14] = FPU_ADD_S(ctx->f[20], ctx->f[22]);
label_45ed00:
    // 0x45ed00: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x45ed00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_45ed04:
    // 0x45ed04: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x45ed04u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_45ed08:
    // 0x45ed08: 0xc0bc284  jal         func_2F0A10
label_45ed0c:
    if (ctx->pc == 0x45ED0Cu) {
        ctx->pc = 0x45ED0Cu;
            // 0x45ed0c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x45ED10u;
        goto label_45ed10;
    }
    ctx->pc = 0x45ED08u;
    SET_GPR_U32(ctx, 31, 0x45ED10u);
    ctx->pc = 0x45ED0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45ED08u;
            // 0x45ed0c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45ED10u; }
        if (ctx->pc != 0x45ED10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45ED10u; }
        if (ctx->pc != 0x45ED10u) { return; }
    }
    ctx->pc = 0x45ED10u;
label_45ed10:
    // 0x45ed10: 0x3c033f40  lui         $v1, 0x3F40
    ctx->pc = 0x45ed10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16192 << 16));
label_45ed14:
    // 0x45ed14: 0x3c02cccc  lui         $v0, 0xCCCC
    ctx->pc = 0x45ed14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52428 << 16));
label_45ed18:
    // 0x45ed18: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x45ed18u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_45ed1c:
    // 0x45ed1c: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x45ed1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_45ed20:
    // 0x45ed20: 0x7ba200e0  lq          $v0, 0xE0($sp)
    ctx->pc = 0x45ed20u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_45ed24:
    // 0x45ed24: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x45ed24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_45ed28:
    // 0x45ed28: 0x0  nop
    ctx->pc = 0x45ed28u;
    // NOP
label_45ed2c:
    // 0x45ed2c: 0x46140018  adda.s      $f0, $f20
    ctx->pc = 0x45ed2cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_45ed30:
    // 0x45ed30: 0x4601b51c  madd.s      $f20, $f22, $f1
    ctx->pc = 0x45ed30u;
    ctx->f[20] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[22], ctx->f[1]));
label_45ed34:
    // 0x45ed34: 0x620019  multu       $v1, $v0
    ctx->pc = 0x45ed34u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 3) * (uint64_t)GPR_U32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_45ed38:
    // 0x45ed38: 0x1010  mfhi        $v0
    ctx->pc = 0x45ed38u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_45ed3c:
    // 0x45ed3c: 0x220c2  srl         $a0, $v0, 3
    ctx->pc = 0x45ed3cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
label_45ed40:
    // 0x45ed40: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x45ed40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_45ed44:
    // 0x45ed44: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x45ed44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_45ed48:
    // 0x45ed48: 0x2422821  addu        $a1, $s2, $v0
    ctx->pc = 0x45ed48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_45ed4c:
    // 0x45ed4c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x45ed4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_45ed50:
    // 0x45ed50: 0x7ba200e0  lq          $v0, 0xE0($sp)
    ctx->pc = 0x45ed50u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_45ed54:
    // 0x45ed54: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x45ed54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_45ed58:
    // 0x45ed58: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x45ed58u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_45ed5c:
    // 0x45ed5c: 0x13c00002  beqz        $fp, . + 4 + (0x2 << 2)
label_45ed60:
    if (ctx->pc == 0x45ED60u) {
        ctx->pc = 0x45ED60u;
            // 0x45ed60: 0x7fa200c0  sq          $v0, 0xC0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
        ctx->pc = 0x45ED64u;
        goto label_45ed64;
    }
    ctx->pc = 0x45ED5Cu;
    {
        const bool branch_taken_0x45ed5c = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x45ED60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45ED5Cu;
            // 0x45ed60: 0x7fa200c0  sq          $v0, 0xC0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45ed5c) {
            ctx->pc = 0x45ED68u;
            goto label_45ed68;
        }
    }
    ctx->pc = 0x45ED64u;
label_45ed64:
    // 0x45ed64: 0x264500c0  addiu       $a1, $s2, 0xC0
    ctx->pc = 0x45ed64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 192));
label_45ed68:
    // 0x45ed68: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x45ed68u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_45ed6c:
    // 0x45ed6c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x45ed6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_45ed70:
    // 0x45ed70: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x45ed70u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_45ed74:
    // 0x45ed74: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x45ed74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_45ed78:
    // 0x45ed78: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x45ed78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_45ed7c:
    // 0x45ed7c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x45ed7cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_45ed80:
    // 0x45ed80: 0xc4b60008  lwc1        $f22, 0x8($a1)
    ctx->pc = 0x45ed80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_45ed84:
    // 0x45ed84: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x45ed84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_45ed88:
    // 0x45ed88: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x45ed88u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_45ed8c:
    // 0x45ed8c: 0x0  nop
    ctx->pc = 0x45ed8cu;
    // NOP
label_45ed90:
    // 0x45ed90: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x45ed90u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_45ed94:
    // 0x45ed94: 0x4601abc0  add.s       $f15, $f21, $f1
    ctx->pc = 0x45ed94u;
    ctx->f[15] = FPU_ADD_S(ctx->f[21], ctx->f[1]);
label_45ed98:
    // 0x45ed98: 0x4616a380  add.s       $f14, $f20, $f22
    ctx->pc = 0x45ed98u;
    ctx->f[14] = FPU_ADD_S(ctx->f[20], ctx->f[22]);
label_45ed9c:
    // 0x45ed9c: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x45ed9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_45eda0:
    // 0x45eda0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x45eda0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_45eda4:
    // 0x45eda4: 0xc0bc284  jal         func_2F0A10
label_45eda8:
    if (ctx->pc == 0x45EDA8u) {
        ctx->pc = 0x45EDA8u;
            // 0x45eda8: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x45EDACu;
        goto label_45edac;
    }
    ctx->pc = 0x45EDA4u;
    SET_GPR_U32(ctx, 31, 0x45EDACu);
    ctx->pc = 0x45EDA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45EDA4u;
            // 0x45eda8: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45EDACu; }
        if (ctx->pc != 0x45EDACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45EDACu; }
        if (ctx->pc != 0x45EDACu) { return; }
    }
    ctx->pc = 0x45EDACu;
label_45edac:
    // 0x45edac: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x45edacu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_45edb0:
    // 0x45edb0: 0x3c033f40  lui         $v1, 0x3F40
    ctx->pc = 0x45edb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16192 << 16));
label_45edb4:
    // 0x45edb4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x45edb4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_45edb8:
    // 0x45edb8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x45edb8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_45edbc:
    // 0x45edbc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x45edbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_45edc0:
    // 0x45edc0: 0x46140018  adda.s      $f0, $f20
    ctx->pc = 0x45edc0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_45edc4:
    // 0x45edc4: 0x2422821  addu        $a1, $s2, $v0
    ctx->pc = 0x45edc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_45edc8:
    // 0x45edc8: 0x13c00002  beqz        $fp, . + 4 + (0x2 << 2)
label_45edcc:
    if (ctx->pc == 0x45EDCCu) {
        ctx->pc = 0x45EDCCu;
            // 0x45edcc: 0x4601b51c  madd.s      $f20, $f22, $f1 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[22], ctx->f[1]));
        ctx->pc = 0x45EDD0u;
        goto label_45edd0;
    }
    ctx->pc = 0x45EDC8u;
    {
        const bool branch_taken_0x45edc8 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x45EDCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45EDC8u;
            // 0x45edcc: 0x4601b51c  madd.s      $f20, $f22, $f1 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[22], ctx->f[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45edc8) {
            ctx->pc = 0x45EDD4u;
            goto label_45edd4;
        }
    }
    ctx->pc = 0x45EDD0u;
label_45edd0:
    // 0x45edd0: 0x264500c0  addiu       $a1, $s2, 0xC0
    ctx->pc = 0x45edd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 192));
label_45edd4:
    // 0x45edd4: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x45edd4u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_45edd8:
    // 0x45edd8: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x45edd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_45eddc:
    // 0x45eddc: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x45eddcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_45ede0:
    // 0x45ede0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x45ede0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_45ede4:
    // 0x45ede4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x45ede4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_45ede8:
    // 0x45ede8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x45ede8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_45edec:
    // 0x45edec: 0xc4b60008  lwc1        $f22, 0x8($a1)
    ctx->pc = 0x45edecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_45edf0:
    // 0x45edf0: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x45edf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_45edf4:
    // 0x45edf4: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x45edf4u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_45edf8:
    // 0x45edf8: 0x0  nop
    ctx->pc = 0x45edf8u;
    // NOP
label_45edfc:
    // 0x45edfc: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x45edfcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_45ee00:
    // 0x45ee00: 0x4601abc0  add.s       $f15, $f21, $f1
    ctx->pc = 0x45ee00u;
    ctx->f[15] = FPU_ADD_S(ctx->f[21], ctx->f[1]);
label_45ee04:
    // 0x45ee04: 0x4616a380  add.s       $f14, $f20, $f22
    ctx->pc = 0x45ee04u;
    ctx->f[14] = FPU_ADD_S(ctx->f[20], ctx->f[22]);
label_45ee08:
    // 0x45ee08: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x45ee08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_45ee0c:
    // 0x45ee0c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x45ee0cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_45ee10:
    // 0x45ee10: 0xc0bc284  jal         func_2F0A10
label_45ee14:
    if (ctx->pc == 0x45EE14u) {
        ctx->pc = 0x45EE14u;
            // 0x45ee14: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x45EE18u;
        goto label_45ee18;
    }
    ctx->pc = 0x45EE10u;
    SET_GPR_U32(ctx, 31, 0x45EE18u);
    ctx->pc = 0x45EE14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45EE10u;
            // 0x45ee14: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45EE18u; }
        if (ctx->pc != 0x45EE18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45EE18u; }
        if (ctx->pc != 0x45EE18u) { return; }
    }
    ctx->pc = 0x45EE18u;
label_45ee18:
    // 0x45ee18: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x45ee18u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_45ee1c:
    // 0x45ee1c: 0x3c023f40  lui         $v0, 0x3F40
    ctx->pc = 0x45ee1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16192 << 16));
label_45ee20:
    // 0x45ee20: 0x46140018  adda.s      $f0, $f20
    ctx->pc = 0x45ee20u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_45ee24:
    // 0x45ee24: 0x264500b0  addiu       $a1, $s2, 0xB0
    ctx->pc = 0x45ee24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 176));
label_45ee28:
    // 0x45ee28: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x45ee28u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_45ee2c:
    // 0x45ee2c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x45ee2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_45ee30:
    // 0x45ee30: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x45ee30u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_45ee34:
    // 0x45ee34: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x45ee34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_45ee38:
    // 0x45ee38: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x45ee38u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_45ee3c:
    // 0x45ee3c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x45ee3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_45ee40:
    // 0x45ee40: 0x0  nop
    ctx->pc = 0x45ee40u;
    // NOP
label_45ee44:
    // 0x45ee44: 0x4601b51c  madd.s      $f20, $f22, $f1
    ctx->pc = 0x45ee44u;
    ctx->f[20] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[22], ctx->f[1]));
label_45ee48:
    // 0x45ee48: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x45ee48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_45ee4c:
    // 0x45ee4c: 0xc65600b8  lwc1        $f22, 0xB8($s2)
    ctx->pc = 0x45ee4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_45ee50:
    // 0x45ee50: 0xc64100bc  lwc1        $f1, 0xBC($s2)
    ctx->pc = 0x45ee50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_45ee54:
    // 0x45ee54: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x45ee54u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_45ee58:
    // 0x45ee58: 0x0  nop
    ctx->pc = 0x45ee58u;
    // NOP
label_45ee5c:
    // 0x45ee5c: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x45ee5cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_45ee60:
    // 0x45ee60: 0x4601abc0  add.s       $f15, $f21, $f1
    ctx->pc = 0x45ee60u;
    ctx->f[15] = FPU_ADD_S(ctx->f[21], ctx->f[1]);
label_45ee64:
    // 0x45ee64: 0x4616a380  add.s       $f14, $f20, $f22
    ctx->pc = 0x45ee64u;
    ctx->f[14] = FPU_ADD_S(ctx->f[20], ctx->f[22]);
label_45ee68:
    // 0x45ee68: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x45ee68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_45ee6c:
    // 0x45ee6c: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x45ee6cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_45ee70:
    // 0x45ee70: 0xc0bc284  jal         func_2F0A10
label_45ee74:
    if (ctx->pc == 0x45EE74u) {
        ctx->pc = 0x45EE74u;
            // 0x45ee74: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x45EE78u;
        goto label_45ee78;
    }
    ctx->pc = 0x45EE70u;
    SET_GPR_U32(ctx, 31, 0x45EE78u);
    ctx->pc = 0x45EE74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45EE70u;
            // 0x45ee74: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45EE78u; }
        if (ctx->pc != 0x45EE78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45EE78u; }
        if (ctx->pc != 0x45EE78u) { return; }
    }
    ctx->pc = 0x45EE78u;
label_45ee78:
    // 0x45ee78: 0x3c033f40  lui         $v1, 0x3F40
    ctx->pc = 0x45ee78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16192 << 16));
label_45ee7c:
    // 0x45ee7c: 0x3c0251eb  lui         $v0, 0x51EB
    ctx->pc = 0x45ee7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20971 << 16));
label_45ee80:
    // 0x45ee80: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x45ee80u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_45ee84:
    // 0x45ee84: 0x3443851f  ori         $v1, $v0, 0x851F
    ctx->pc = 0x45ee84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34079);
label_45ee88:
    // 0x45ee88: 0x7ba200f0  lq          $v0, 0xF0($sp)
    ctx->pc = 0x45ee88u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_45ee8c:
    // 0x45ee8c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x45ee8cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_45ee90:
    // 0x45ee90: 0x0  nop
    ctx->pc = 0x45ee90u;
    // NOP
label_45ee94:
    // 0x45ee94: 0x46140018  adda.s      $f0, $f20
    ctx->pc = 0x45ee94u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_45ee98:
    // 0x45ee98: 0x4601b51c  madd.s      $f20, $f22, $f1
    ctx->pc = 0x45ee98u;
    ctx->f[20] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[22], ctx->f[1]));
label_45ee9c:
    // 0x45ee9c: 0x620019  multu       $v1, $v0
    ctx->pc = 0x45ee9cu;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 3) * (uint64_t)GPR_U32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_45eea0:
    // 0x45eea0: 0x1010  mfhi        $v0
    ctx->pc = 0x45eea0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_45eea4:
    // 0x45eea4: 0x22142  srl         $a0, $v0, 5
    ctx->pc = 0x45eea4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
label_45eea8:
    // 0x45eea8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x45eea8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_45eeac:
    // 0x45eeac: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x45eeacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_45eeb0:
    // 0x45eeb0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x45eeb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_45eeb4:
    // 0x45eeb4: 0x2422821  addu        $a1, $s2, $v0
    ctx->pc = 0x45eeb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_45eeb8:
    // 0x45eeb8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x45eeb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_45eebc:
    // 0x45eebc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x45eebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_45eec0:
    // 0x45eec0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x45eec0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_45eec4:
    // 0x45eec4: 0x7ba200f0  lq          $v0, 0xF0($sp)
    ctx->pc = 0x45eec4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_45eec8:
    // 0x45eec8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x45eec8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_45eecc:
    // 0x45eecc: 0x13c00002  beqz        $fp, . + 4 + (0x2 << 2)
label_45eed0:
    if (ctx->pc == 0x45EED0u) {
        ctx->pc = 0x45EED0u;
            // 0x45eed0: 0x7fa200b0  sq          $v0, 0xB0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
        ctx->pc = 0x45EED4u;
        goto label_45eed4;
    }
    ctx->pc = 0x45EECCu;
    {
        const bool branch_taken_0x45eecc = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x45EED0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45EECCu;
            // 0x45eed0: 0x7fa200b0  sq          $v0, 0xB0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45eecc) {
            ctx->pc = 0x45EED8u;
            goto label_45eed8;
        }
    }
    ctx->pc = 0x45EED4u;
label_45eed4:
    // 0x45eed4: 0x264500c0  addiu       $a1, $s2, 0xC0
    ctx->pc = 0x45eed4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 192));
label_45eed8:
    // 0x45eed8: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x45eed8u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_45eedc:
    // 0x45eedc: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x45eedcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_45eee0:
    // 0x45eee0: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x45eee0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_45eee4:
    // 0x45eee4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x45eee4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_45eee8:
    // 0x45eee8: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x45eee8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_45eeec:
    // 0x45eeec: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x45eeecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_45eef0:
    // 0x45eef0: 0xc4b60008  lwc1        $f22, 0x8($a1)
    ctx->pc = 0x45eef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_45eef4:
    // 0x45eef4: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x45eef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_45eef8:
    // 0x45eef8: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x45eef8u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_45eefc:
    // 0x45eefc: 0x0  nop
    ctx->pc = 0x45eefcu;
    // NOP
label_45ef00:
    // 0x45ef00: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x45ef00u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_45ef04:
    // 0x45ef04: 0x4601abc0  add.s       $f15, $f21, $f1
    ctx->pc = 0x45ef04u;
    ctx->f[15] = FPU_ADD_S(ctx->f[21], ctx->f[1]);
label_45ef08:
    // 0x45ef08: 0x4616a380  add.s       $f14, $f20, $f22
    ctx->pc = 0x45ef08u;
    ctx->f[14] = FPU_ADD_S(ctx->f[20], ctx->f[22]);
label_45ef0c:
    // 0x45ef0c: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x45ef0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_45ef10:
    // 0x45ef10: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x45ef10u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_45ef14:
    // 0x45ef14: 0xc0bc284  jal         func_2F0A10
label_45ef18:
    if (ctx->pc == 0x45EF18u) {
        ctx->pc = 0x45EF18u;
            // 0x45ef18: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x45EF1Cu;
        goto label_45ef1c;
    }
    ctx->pc = 0x45EF14u;
    SET_GPR_U32(ctx, 31, 0x45EF1Cu);
    ctx->pc = 0x45EF18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45EF14u;
            // 0x45ef18: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45EF1Cu; }
        if (ctx->pc != 0x45EF1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45EF1Cu; }
        if (ctx->pc != 0x45EF1Cu) { return; }
    }
    ctx->pc = 0x45EF1Cu;
label_45ef1c:
    // 0x45ef1c: 0x3c033f40  lui         $v1, 0x3F40
    ctx->pc = 0x45ef1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16192 << 16));
label_45ef20:
    // 0x45ef20: 0x3c02cccc  lui         $v0, 0xCCCC
    ctx->pc = 0x45ef20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52428 << 16));
label_45ef24:
    // 0x45ef24: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x45ef24u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_45ef28:
    // 0x45ef28: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x45ef28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_45ef2c:
    // 0x45ef2c: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x45ef2cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_45ef30:
    // 0x45ef30: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x45ef30u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_45ef34:
    // 0x45ef34: 0x0  nop
    ctx->pc = 0x45ef34u;
    // NOP
label_45ef38:
    // 0x45ef38: 0x46140018  adda.s      $f0, $f20
    ctx->pc = 0x45ef38u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_45ef3c:
    // 0x45ef3c: 0x4601b51c  madd.s      $f20, $f22, $f1
    ctx->pc = 0x45ef3cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[22], ctx->f[1]));
label_45ef40:
    // 0x45ef40: 0x620019  multu       $v1, $v0
    ctx->pc = 0x45ef40u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 3) * (uint64_t)GPR_U32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_45ef44:
    // 0x45ef44: 0x1010  mfhi        $v0
    ctx->pc = 0x45ef44u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_45ef48:
    // 0x45ef48: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x45ef48u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
label_45ef4c:
    // 0x45ef4c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x45ef4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_45ef50:
    // 0x45ef50: 0x13c00002  beqz        $fp, . + 4 + (0x2 << 2)
label_45ef54:
    if (ctx->pc == 0x45EF54u) {
        ctx->pc = 0x45EF54u;
            // 0x45ef54: 0x2422821  addu        $a1, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->pc = 0x45EF58u;
        goto label_45ef58;
    }
    ctx->pc = 0x45EF50u;
    {
        const bool branch_taken_0x45ef50 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x45EF54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45EF50u;
            // 0x45ef54: 0x2422821  addu        $a1, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45ef50) {
            ctx->pc = 0x45EF5Cu;
            goto label_45ef5c;
        }
    }
    ctx->pc = 0x45EF58u;
label_45ef58:
    // 0x45ef58: 0x264500c0  addiu       $a1, $s2, 0xC0
    ctx->pc = 0x45ef58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 192));
label_45ef5c:
    // 0x45ef5c: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x45ef5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_45ef60:
    // 0x45ef60: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x45ef60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_45ef64:
    // 0x45ef64: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x45ef64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_45ef68:
    // 0x45ef68: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x45ef68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_45ef6c:
    // 0x45ef6c: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x45ef6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_45ef70:
    // 0x45ef70: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x45ef70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_45ef74:
    // 0x45ef74: 0x4600abc0  add.s       $f15, $f21, $f0
    ctx->pc = 0x45ef74u;
    ctx->f[15] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
label_45ef78:
    // 0x45ef78: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x45ef78u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_45ef7c:
    // 0x45ef7c: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x45ef7cu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_45ef80:
    // 0x45ef80: 0x0  nop
    ctx->pc = 0x45ef80u;
    // NOP
label_45ef84:
    // 0x45ef84: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x45ef84u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_45ef88:
    // 0x45ef88: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x45ef88u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_45ef8c:
    // 0x45ef8c: 0x0  nop
    ctx->pc = 0x45ef8cu;
    // NOP
label_45ef90:
    // 0x45ef90: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x45ef90u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_45ef94:
    // 0x45ef94: 0x4601a380  add.s       $f14, $f20, $f1
    ctx->pc = 0x45ef94u;
    ctx->f[14] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
label_45ef98:
    // 0x45ef98: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x45ef98u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_45ef9c:
    // 0x45ef9c: 0xc0bc284  jal         func_2F0A10
label_45efa0:
    if (ctx->pc == 0x45EFA0u) {
        ctx->pc = 0x45EFA0u;
            // 0x45efa0: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x45EFA4u;
        goto label_45efa4;
    }
    ctx->pc = 0x45EF9Cu;
    SET_GPR_U32(ctx, 31, 0x45EFA4u);
    ctx->pc = 0x45EFA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45EF9Cu;
            // 0x45efa0: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45EFA4u; }
        if (ctx->pc != 0x45EFA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45EFA4u; }
        if (ctx->pc != 0x45EFA4u) { return; }
    }
    ctx->pc = 0x45EFA4u;
label_45efa4:
    // 0x45efa4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x45efa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_45efa8:
    // 0x45efa8: 0x52c30017  beql        $s6, $v1, . + 4 + (0x17 << 2)
label_45efac:
    if (ctx->pc == 0x45EFACu) {
        ctx->pc = 0x45EFACu;
            // 0x45efac: 0x7ba20120  lq          $v0, 0x120($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 288)));
        ctx->pc = 0x45EFB0u;
        goto label_45efb0;
    }
    ctx->pc = 0x45EFA8u;
    {
        const bool branch_taken_0x45efa8 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 3));
        if (branch_taken_0x45efa8) {
            ctx->pc = 0x45EFACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x45EFA8u;
            // 0x45efac: 0x7ba20120  lq          $v0, 0x120($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 288)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x45F008u;
            goto label_45f008;
        }
    }
    ctx->pc = 0x45EFB0u;
label_45efb0:
    // 0x45efb0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x45efb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_45efb4:
    // 0x45efb4: 0x52c20010  beql        $s6, $v0, . + 4 + (0x10 << 2)
label_45efb8:
    if (ctx->pc == 0x45EFB8u) {
        ctx->pc = 0x45EFB8u;
            // 0x45efb8: 0x8e630004  lw          $v1, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->pc = 0x45EFBCu;
        goto label_45efbc;
    }
    ctx->pc = 0x45EFB4u;
    {
        const bool branch_taken_0x45efb4 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 2));
        if (branch_taken_0x45efb4) {
            ctx->pc = 0x45EFB8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x45EFB4u;
            // 0x45efb8: 0x8e630004  lw          $v1, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x45EFF8u;
            goto label_45eff8;
        }
    }
    ctx->pc = 0x45EFBCu;
label_45efbc:
    // 0x45efbc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x45efbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_45efc0:
    // 0x45efc0: 0x52c20009  beql        $s6, $v0, . + 4 + (0x9 << 2)
label_45efc4:
    if (ctx->pc == 0x45EFC4u) {
        ctx->pc = 0x45EFC4u;
            // 0x45efc4: 0x8e630004  lw          $v1, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->pc = 0x45EFC8u;
        goto label_45efc8;
    }
    ctx->pc = 0x45EFC0u;
    {
        const bool branch_taken_0x45efc0 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 2));
        if (branch_taken_0x45efc0) {
            ctx->pc = 0x45EFC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x45EFC0u;
            // 0x45efc4: 0x8e630004  lw          $v1, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x45EFE8u;
            goto label_45efe8;
        }
    }
    ctx->pc = 0x45EFC8u;
label_45efc8:
    // 0x45efc8: 0x52c00003  beql        $s6, $zero, . + 4 + (0x3 << 2)
label_45efcc:
    if (ctx->pc == 0x45EFCCu) {
        ctx->pc = 0x45EFCCu;
            // 0x45efcc: 0x8e630004  lw          $v1, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->pc = 0x45EFD0u;
        goto label_45efd0;
    }
    ctx->pc = 0x45EFC8u;
    {
        const bool branch_taken_0x45efc8 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x45efc8) {
            ctx->pc = 0x45EFCCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x45EFC8u;
            // 0x45efcc: 0x8e630004  lw          $v1, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x45EFD8u;
            goto label_45efd8;
        }
    }
    ctx->pc = 0x45EFD0u;
label_45efd0:
    // 0x45efd0: 0x10000023  b           . + 4 + (0x23 << 2)
label_45efd4:
    if (ctx->pc == 0x45EFD4u) {
        ctx->pc = 0x45EFD4u;
            // 0x45efd4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x45EFD8u;
        goto label_45efd8;
    }
    ctx->pc = 0x45EFD0u;
    {
        const bool branch_taken_0x45efd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x45EFD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45EFD0u;
            // 0x45efd4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45efd0) {
            ctx->pc = 0x45F060u;
            goto label_45f060;
        }
    }
    ctx->pc = 0x45EFD8u;
label_45efd8:
    // 0x45efd8: 0x151080  sll         $v0, $s5, 2
    ctx->pc = 0x45efd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
label_45efdc:
    // 0x45efdc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x45efdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_45efe0:
    // 0x45efe0: 0x1000001e  b           . + 4 + (0x1E << 2)
label_45efe4:
    if (ctx->pc == 0x45EFE4u) {
        ctx->pc = 0x45EFE4u;
            // 0x45efe4: 0x8c5401c8  lw          $s4, 0x1C8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 456)));
        ctx->pc = 0x45EFE8u;
        goto label_45efe8;
    }
    ctx->pc = 0x45EFE0u;
    {
        const bool branch_taken_0x45efe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x45EFE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45EFE0u;
            // 0x45efe4: 0x8c5401c8  lw          $s4, 0x1C8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 456)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45efe0) {
            ctx->pc = 0x45F05Cu;
            goto label_45f05c;
        }
    }
    ctx->pc = 0x45EFE8u;
label_45efe8:
    // 0x45efe8: 0x151080  sll         $v0, $s5, 2
    ctx->pc = 0x45efe8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
label_45efec:
    // 0x45efec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x45efecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_45eff0:
    // 0x45eff0: 0x1000001a  b           . + 4 + (0x1A << 2)
label_45eff4:
    if (ctx->pc == 0x45EFF4u) {
        ctx->pc = 0x45EFF4u;
            // 0x45eff4: 0x8c540148  lw          $s4, 0x148($v0) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 328)));
        ctx->pc = 0x45EFF8u;
        goto label_45eff8;
    }
    ctx->pc = 0x45EFF0u;
    {
        const bool branch_taken_0x45eff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x45EFF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45EFF0u;
            // 0x45eff4: 0x8c540148  lw          $s4, 0x148($v0) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 328)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45eff0) {
            ctx->pc = 0x45F05Cu;
            goto label_45f05c;
        }
    }
    ctx->pc = 0x45EFF8u;
label_45eff8:
    // 0x45eff8: 0x151080  sll         $v0, $s5, 2
    ctx->pc = 0x45eff8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
label_45effc:
    // 0x45effc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x45effcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_45f000:
    // 0x45f000: 0x10000016  b           . + 4 + (0x16 << 2)
label_45f004:
    if (ctx->pc == 0x45F004u) {
        ctx->pc = 0x45F004u;
            // 0x45f004: 0x8c540188  lw          $s4, 0x188($v0) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 392)));
        ctx->pc = 0x45F008u;
        goto label_45f008;
    }
    ctx->pc = 0x45F000u;
    {
        const bool branch_taken_0x45f000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x45F004u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45F000u;
            // 0x45f004: 0x8c540188  lw          $s4, 0x188($v0) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 392)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45f000) {
            ctx->pc = 0x45F05Cu;
            goto label_45f05c;
        }
    }
    ctx->pc = 0x45F008u;
label_45f008:
    // 0x45f008: 0x50430011  beql        $v0, $v1, . + 4 + (0x11 << 2)
label_45f00c:
    if (ctx->pc == 0x45F00Cu) {
        ctx->pc = 0x45F00Cu;
            // 0x45f00c: 0x8e630004  lw          $v1, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->pc = 0x45F010u;
        goto label_45f010;
    }
    ctx->pc = 0x45F008u;
    {
        const bool branch_taken_0x45f008 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x45f008) {
            ctx->pc = 0x45F00Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x45F008u;
            // 0x45f00c: 0x8e630004  lw          $v1, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x45F050u;
            goto label_45f050;
        }
    }
    ctx->pc = 0x45F010u;
label_45f010:
    // 0x45f010: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x45f010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_45f014:
    // 0x45f014: 0x5043000a  beql        $v0, $v1, . + 4 + (0xA << 2)
label_45f018:
    if (ctx->pc == 0x45F018u) {
        ctx->pc = 0x45F018u;
            // 0x45f018: 0x8e630004  lw          $v1, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->pc = 0x45F01Cu;
        goto label_45f01c;
    }
    ctx->pc = 0x45F014u;
    {
        const bool branch_taken_0x45f014 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x45f014) {
            ctx->pc = 0x45F018u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x45F014u;
            // 0x45f018: 0x8e630004  lw          $v1, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x45F040u;
            goto label_45f040;
        }
    }
    ctx->pc = 0x45F01Cu;
label_45f01c:
    // 0x45f01c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x45f01cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_45f020:
    // 0x45f020: 0x50430003  beql        $v0, $v1, . + 4 + (0x3 << 2)
label_45f024:
    if (ctx->pc == 0x45F024u) {
        ctx->pc = 0x45F024u;
            // 0x45f024: 0x8e630004  lw          $v1, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->pc = 0x45F028u;
        goto label_45f028;
    }
    ctx->pc = 0x45F020u;
    {
        const bool branch_taken_0x45f020 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x45f020) {
            ctx->pc = 0x45F024u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x45F020u;
            // 0x45f024: 0x8e630004  lw          $v1, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x45F030u;
            goto label_45f030;
        }
    }
    ctx->pc = 0x45F028u;
label_45f028:
    // 0x45f028: 0x1000000c  b           . + 4 + (0xC << 2)
label_45f02c:
    if (ctx->pc == 0x45F02Cu) {
        ctx->pc = 0x45F030u;
        goto label_45f030;
    }
    ctx->pc = 0x45F028u;
    {
        const bool branch_taken_0x45f028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45f028) {
            ctx->pc = 0x45F05Cu;
            goto label_45f05c;
        }
    }
    ctx->pc = 0x45F030u;
label_45f030:
    // 0x45f030: 0x151080  sll         $v0, $s5, 2
    ctx->pc = 0x45f030u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
label_45f034:
    // 0x45f034: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x45f034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_45f038:
    // 0x45f038: 0x10000008  b           . + 4 + (0x8 << 2)
label_45f03c:
    if (ctx->pc == 0x45F03Cu) {
        ctx->pc = 0x45F03Cu;
            // 0x45f03c: 0x8c5405dc  lw          $s4, 0x5DC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1500)));
        ctx->pc = 0x45F040u;
        goto label_45f040;
    }
    ctx->pc = 0x45F038u;
    {
        const bool branch_taken_0x45f038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x45F03Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45F038u;
            // 0x45f03c: 0x8c5405dc  lw          $s4, 0x5DC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1500)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45f038) {
            ctx->pc = 0x45F05Cu;
            goto label_45f05c;
        }
    }
    ctx->pc = 0x45F040u;
label_45f040:
    // 0x45f040: 0x151080  sll         $v0, $s5, 2
    ctx->pc = 0x45f040u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
label_45f044:
    // 0x45f044: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x45f044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_45f048:
    // 0x45f048: 0x10000004  b           . + 4 + (0x4 << 2)
label_45f04c:
    if (ctx->pc == 0x45F04Cu) {
        ctx->pc = 0x45F04Cu;
            // 0x45f04c: 0x8c54061c  lw          $s4, 0x61C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1564)));
        ctx->pc = 0x45F050u;
        goto label_45f050;
    }
    ctx->pc = 0x45F048u;
    {
        const bool branch_taken_0x45f048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x45F04Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45F048u;
            // 0x45f04c: 0x8c54061c  lw          $s4, 0x61C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1564)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45f048) {
            ctx->pc = 0x45F05Cu;
            goto label_45f05c;
        }
    }
    ctx->pc = 0x45F050u;
label_45f050:
    // 0x45f050: 0x151080  sll         $v0, $s5, 2
    ctx->pc = 0x45f050u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
label_45f054:
    // 0x45f054: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x45f054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_45f058:
    // 0x45f058: 0x8c54065c  lw          $s4, 0x65C($v0)
    ctx->pc = 0x45f058u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1628)));
label_45f05c:
    // 0x45f05c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x45f05cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_45f060:
    // 0x45f060: 0x56800003  bnel        $s4, $zero, . + 4 + (0x3 << 2)
label_45f064:
    if (ctx->pc == 0x45F064u) {
        ctx->pc = 0x45F064u;
            // 0x45f064: 0x3c031062  lui         $v1, 0x1062 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4194 << 16));
        ctx->pc = 0x45F068u;
        goto label_45f068;
    }
    ctx->pc = 0x45F060u;
    {
        const bool branch_taken_0x45f060 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x45f060) {
            ctx->pc = 0x45F064u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x45F060u;
            // 0x45f064: 0x3c031062  lui         $v1, 0x1062 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4194 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x45F070u;
            goto label_45f070;
        }
    }
    ctx->pc = 0x45F068u;
label_45f068:
    // 0x45f068: 0x64130001  daddiu      $s3, $zero, 0x1
    ctx->pc = 0x45f068u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_45f06c:
    // 0x45f06c: 0x3c031062  lui         $v1, 0x1062
    ctx->pc = 0x45f06cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4194 << 16));
label_45f070:
    // 0x45f070: 0x3c028888  lui         $v0, 0x8888
    ctx->pc = 0x45f070u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34952 << 16));
label_45f074:
    // 0x45f074: 0x34634dd3  ori         $v1, $v1, 0x4DD3
    ctx->pc = 0x45f074u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)19923);
label_45f078:
    // 0x45f078: 0x34448889  ori         $a0, $v0, 0x8889
    ctx->pc = 0x45f078u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
label_45f07c:
    // 0x45f07c: 0x740019  multu       $v1, $s4
    ctx->pc = 0x45f07cu;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 3) * (uint64_t)GPR_U32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_45f080:
    // 0x45f080: 0x3c0243cf  lui         $v0, 0x43CF
    ctx->pc = 0x45f080u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17359 << 16));
label_45f084:
    // 0x45f084: 0x34438000  ori         $v1, $v0, 0x8000
    ctx->pc = 0x45f084u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_45f088:
    // 0x45f088: 0x4483a000  mtc1        $v1, $f20
    ctx->pc = 0x45f088u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_45f08c:
    // 0x45f08c: 0x3c02cccc  lui         $v0, 0xCCCC
    ctx->pc = 0x45f08cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52428 << 16));
label_45f090:
    // 0x45f090: 0x1810  mfhi        $v1
    ctx->pc = 0x45f090u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_45f094:
    // 0x45f094: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x45f094u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_45f098:
    // 0x45f098: 0x32982  srl         $a1, $v1, 6
    ctx->pc = 0x45f098u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 6));
label_45f09c:
    // 0x45f09c: 0x51940  sll         $v1, $a1, 5
    ctx->pc = 0x45f09cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_45f0a0:
    // 0x45f0a0: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x45f0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_45f0a4:
    // 0x45f0a4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x45f0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_45f0a8:
    // 0x45f0a8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x45f0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_45f0ac:
    // 0x45f0ac: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x45f0acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_45f0b0:
    // 0x45f0b0: 0x850019  multu       $a0, $a1
    ctx->pc = 0x45f0b0u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 4) * (uint64_t)GPR_U32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_45f0b4:
    // 0x45f0b4: 0x283a023  subu        $s4, $s4, $v1
    ctx->pc = 0x45f0b4u;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
label_45f0b8:
    // 0x45f0b8: 0x0  nop
    ctx->pc = 0x45f0b8u;
    // NOP
label_45f0bc:
    // 0x45f0bc: 0x1810  mfhi        $v1
    ctx->pc = 0x45f0bcu;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_45f0c0:
    // 0x45f0c0: 0x33142  srl         $a2, $v1, 5
    ctx->pc = 0x45f0c0u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
label_45f0c4:
    // 0x45f0c4: 0x460019  multu       $v0, $a2
    ctx->pc = 0x45f0c4u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 2) * (uint64_t)GPR_U32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_45f0c8:
    // 0x45f0c8: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x45f0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_45f0cc:
    // 0x45f0cc: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x45f0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_45f0d0:
    // 0x45f0d0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x45f0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_45f0d4:
    // 0x45f0d4: 0xa2a823  subu        $s5, $a1, $v0
    ctx->pc = 0x45f0d4u;
    SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_45f0d8:
    // 0x45f0d8: 0x1010  mfhi        $v0
    ctx->pc = 0x45f0d8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_45f0dc:
    // 0x45f0dc: 0x220c2  srl         $a0, $v0, 3
    ctx->pc = 0x45f0dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
label_45f0e0:
    // 0x45f0e0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x45f0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_45f0e4:
    // 0x45f0e4: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x45f0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_45f0e8:
    // 0x45f0e8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x45f0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_45f0ec:
    // 0x45f0ec: 0x2422821  addu        $a1, $s2, $v0
    ctx->pc = 0x45f0ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_45f0f0:
    // 0x45f0f0: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x45f0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_45f0f4:
    // 0x45f0f4: 0x12600002  beqz        $s3, . + 4 + (0x2 << 2)
label_45f0f8:
    if (ctx->pc == 0x45F0F8u) {
        ctx->pc = 0x45F0F8u;
            // 0x45f0f8: 0xc2b023  subu        $s6, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->pc = 0x45F0FCu;
        goto label_45f0fc;
    }
    ctx->pc = 0x45F0F4u;
    {
        const bool branch_taken_0x45f0f4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x45F0F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45F0F4u;
            // 0x45f0f8: 0xc2b023  subu        $s6, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45f0f4) {
            ctx->pc = 0x45F100u;
            goto label_45f100;
        }
    }
    ctx->pc = 0x45F0FCu;
label_45f0fc:
    // 0x45f0fc: 0x264500c0  addiu       $a1, $s2, 0xC0
    ctx->pc = 0x45f0fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 192));
label_45f100:
    // 0x45f100: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x45f100u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_45f104:
    // 0x45f104: 0x3c0243cf  lui         $v0, 0x43CF
    ctx->pc = 0x45f104u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17359 << 16));
label_45f108:
    // 0x45f108: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x45f108u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_45f10c:
    // 0x45f10c: 0x34438000  ori         $v1, $v0, 0x8000
    ctx->pc = 0x45f10cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_45f110:
    // 0x45f110: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x45f110u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_45f114:
    // 0x45f114: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x45f114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_45f118:
    // 0x45f118: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x45f118u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_45f11c:
    // 0x45f11c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x45f11cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_45f120:
    // 0x45f120: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x45f120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_45f124:
    // 0x45f124: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x45f124u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_45f128:
    // 0x45f128: 0xc4b60008  lwc1        $f22, 0x8($a1)
    ctx->pc = 0x45f128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_45f12c:
    // 0x45f12c: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x45f12cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_45f130:
    // 0x45f130: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x45f130u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_45f134:
    // 0x45f134: 0x4601abc0  add.s       $f15, $f21, $f1
    ctx->pc = 0x45f134u;
    ctx->f[15] = FPU_ADD_S(ctx->f[21], ctx->f[1]);
label_45f138:
    // 0x45f138: 0x46166380  add.s       $f14, $f12, $f22
    ctx->pc = 0x45f138u;
    ctx->f[14] = FPU_ADD_S(ctx->f[12], ctx->f[22]);
label_45f13c:
    // 0x45f13c: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x45f13cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_45f140:
    // 0x45f140: 0xc0bc284  jal         func_2F0A10
label_45f144:
    if (ctx->pc == 0x45F144u) {
        ctx->pc = 0x45F144u;
            // 0x45f144: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x45F148u;
        goto label_45f148;
    }
    ctx->pc = 0x45F140u;
    SET_GPR_U32(ctx, 31, 0x45F148u);
    ctx->pc = 0x45F144u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45F140u;
            // 0x45f144: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45F148u; }
        if (ctx->pc != 0x45F148u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45F148u; }
        if (ctx->pc != 0x45F148u) { return; }
    }
    ctx->pc = 0x45F148u;
label_45f148:
    // 0x45f148: 0x3c033f40  lui         $v1, 0x3F40
    ctx->pc = 0x45f148u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16192 << 16));
label_45f14c:
    // 0x45f14c: 0x161100  sll         $v0, $s6, 4
    ctx->pc = 0x45f14cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 4));
label_45f150:
    // 0x45f150: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x45f150u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_45f154:
    // 0x45f154: 0x2422821  addu        $a1, $s2, $v0
    ctx->pc = 0x45f154u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_45f158:
    // 0x45f158: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x45f158u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_45f15c:
    // 0x45f15c: 0x0  nop
    ctx->pc = 0x45f15cu;
    // NOP
label_45f160:
    // 0x45f160: 0x46140018  adda.s      $f0, $f20
    ctx->pc = 0x45f160u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_45f164:
    // 0x45f164: 0x12600002  beqz        $s3, . + 4 + (0x2 << 2)
label_45f168:
    if (ctx->pc == 0x45F168u) {
        ctx->pc = 0x45F168u;
            // 0x45f168: 0x4601b51c  madd.s      $f20, $f22, $f1 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[22], ctx->f[1]));
        ctx->pc = 0x45F16Cu;
        goto label_45f16c;
    }
    ctx->pc = 0x45F164u;
    {
        const bool branch_taken_0x45f164 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x45F168u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45F164u;
            // 0x45f168: 0x4601b51c  madd.s      $f20, $f22, $f1 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[22], ctx->f[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45f164) {
            ctx->pc = 0x45F170u;
            goto label_45f170;
        }
    }
    ctx->pc = 0x45F16Cu;
label_45f16c:
    // 0x45f16c: 0x264500c0  addiu       $a1, $s2, 0xC0
    ctx->pc = 0x45f16cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 192));
label_45f170:
    // 0x45f170: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x45f170u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_45f174:
    // 0x45f174: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x45f174u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_45f178:
    // 0x45f178: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x45f178u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_45f17c:
    // 0x45f17c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x45f17cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_45f180:
    // 0x45f180: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x45f180u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_45f184:
    // 0x45f184: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x45f184u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_45f188:
    // 0x45f188: 0xc4b60008  lwc1        $f22, 0x8($a1)
    ctx->pc = 0x45f188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_45f18c:
    // 0x45f18c: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x45f18cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_45f190:
    // 0x45f190: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x45f190u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_45f194:
    // 0x45f194: 0x0  nop
    ctx->pc = 0x45f194u;
    // NOP
label_45f198:
    // 0x45f198: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x45f198u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_45f19c:
    // 0x45f19c: 0x4601abc0  add.s       $f15, $f21, $f1
    ctx->pc = 0x45f19cu;
    ctx->f[15] = FPU_ADD_S(ctx->f[21], ctx->f[1]);
label_45f1a0:
    // 0x45f1a0: 0x4616a380  add.s       $f14, $f20, $f22
    ctx->pc = 0x45f1a0u;
    ctx->f[14] = FPU_ADD_S(ctx->f[20], ctx->f[22]);
label_45f1a4:
    // 0x45f1a4: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x45f1a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_45f1a8:
    // 0x45f1a8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x45f1a8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_45f1ac:
    // 0x45f1ac: 0xc0bc284  jal         func_2F0A10
label_45f1b0:
    if (ctx->pc == 0x45F1B0u) {
        ctx->pc = 0x45F1B0u;
            // 0x45f1b0: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x45F1B4u;
        goto label_45f1b4;
    }
    ctx->pc = 0x45F1ACu;
    SET_GPR_U32(ctx, 31, 0x45F1B4u);
    ctx->pc = 0x45F1B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45F1ACu;
            // 0x45f1b0: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45F1B4u; }
        if (ctx->pc != 0x45F1B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45F1B4u; }
        if (ctx->pc != 0x45F1B4u) { return; }
    }
    ctx->pc = 0x45F1B4u;
label_45f1b4:
    // 0x45f1b4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x45f1b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_45f1b8:
    // 0x45f1b8: 0x3c023f40  lui         $v0, 0x3F40
    ctx->pc = 0x45f1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16192 << 16));
label_45f1bc:
    // 0x45f1bc: 0x46140018  adda.s      $f0, $f20
    ctx->pc = 0x45f1bcu;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_45f1c0:
    // 0x45f1c0: 0x264500a0  addiu       $a1, $s2, 0xA0
    ctx->pc = 0x45f1c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
label_45f1c4:
    // 0x45f1c4: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x45f1c4u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_45f1c8:
    // 0x45f1c8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x45f1c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_45f1cc:
    // 0x45f1cc: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x45f1ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_45f1d0:
    // 0x45f1d0: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x45f1d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_45f1d4:
    // 0x45f1d4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x45f1d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_45f1d8:
    // 0x45f1d8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x45f1d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_45f1dc:
    // 0x45f1dc: 0x0  nop
    ctx->pc = 0x45f1dcu;
    // NOP
label_45f1e0:
    // 0x45f1e0: 0x4601b51c  madd.s      $f20, $f22, $f1
    ctx->pc = 0x45f1e0u;
    ctx->f[20] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[22], ctx->f[1]));
label_45f1e4:
    // 0x45f1e4: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x45f1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_45f1e8:
    // 0x45f1e8: 0xc65600a8  lwc1        $f22, 0xA8($s2)
    ctx->pc = 0x45f1e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_45f1ec:
    // 0x45f1ec: 0xc64100ac  lwc1        $f1, 0xAC($s2)
    ctx->pc = 0x45f1ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_45f1f0:
    // 0x45f1f0: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x45f1f0u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_45f1f4:
    // 0x45f1f4: 0x0  nop
    ctx->pc = 0x45f1f4u;
    // NOP
label_45f1f8:
    // 0x45f1f8: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x45f1f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_45f1fc:
    // 0x45f1fc: 0x4601abc0  add.s       $f15, $f21, $f1
    ctx->pc = 0x45f1fcu;
    ctx->f[15] = FPU_ADD_S(ctx->f[21], ctx->f[1]);
label_45f200:
    // 0x45f200: 0x4616a380  add.s       $f14, $f20, $f22
    ctx->pc = 0x45f200u;
    ctx->f[14] = FPU_ADD_S(ctx->f[20], ctx->f[22]);
label_45f204:
    // 0x45f204: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x45f204u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_45f208:
    // 0x45f208: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x45f208u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_45f20c:
    // 0x45f20c: 0xc0bc284  jal         func_2F0A10
label_45f210:
    if (ctx->pc == 0x45F210u) {
        ctx->pc = 0x45F210u;
            // 0x45f210: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x45F214u;
        goto label_45f214;
    }
    ctx->pc = 0x45F20Cu;
    SET_GPR_U32(ctx, 31, 0x45F214u);
    ctx->pc = 0x45F210u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45F20Cu;
            // 0x45f210: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45F214u; }
        if (ctx->pc != 0x45F214u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45F214u; }
        if (ctx->pc != 0x45F214u) { return; }
    }
    ctx->pc = 0x45F214u;
label_45f214:
    // 0x45f214: 0x3c02cccc  lui         $v0, 0xCCCC
    ctx->pc = 0x45f214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52428 << 16));
label_45f218:
    // 0x45f218: 0x3c033f40  lui         $v1, 0x3F40
    ctx->pc = 0x45f218u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16192 << 16));
label_45f21c:
    // 0x45f21c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x45f21cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_45f220:
    // 0x45f220: 0x550019  multu       $v0, $s5
    ctx->pc = 0x45f220u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 2) * (uint64_t)GPR_U32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_45f224:
    // 0x45f224: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x45f224u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_45f228:
    // 0x45f228: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x45f228u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_45f22c:
    // 0x45f22c: 0x0  nop
    ctx->pc = 0x45f22cu;
    // NOP
label_45f230:
    // 0x45f230: 0x46140018  adda.s      $f0, $f20
    ctx->pc = 0x45f230u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_45f234:
    // 0x45f234: 0x4601b51c  madd.s      $f20, $f22, $f1
    ctx->pc = 0x45f234u;
    ctx->f[20] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[22], ctx->f[1]));
label_45f238:
    // 0x45f238: 0x1010  mfhi        $v0
    ctx->pc = 0x45f238u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_45f23c:
    // 0x45f23c: 0x220c2  srl         $a0, $v0, 3
    ctx->pc = 0x45f23cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
label_45f240:
    // 0x45f240: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x45f240u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_45f244:
    // 0x45f244: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x45f244u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_45f248:
    // 0x45f248: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x45f248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_45f24c:
    // 0x45f24c: 0x2422821  addu        $a1, $s2, $v0
    ctx->pc = 0x45f24cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_45f250:
    // 0x45f250: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x45f250u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_45f254:
    // 0x45f254: 0x12600002  beqz        $s3, . + 4 + (0x2 << 2)
label_45f258:
    if (ctx->pc == 0x45F258u) {
        ctx->pc = 0x45F258u;
            // 0x45f258: 0x2a2a823  subu        $s5, $s5, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
        ctx->pc = 0x45F25Cu;
        goto label_45f25c;
    }
    ctx->pc = 0x45F254u;
    {
        const bool branch_taken_0x45f254 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x45F258u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45F254u;
            // 0x45f258: 0x2a2a823  subu        $s5, $s5, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45f254) {
            ctx->pc = 0x45F260u;
            goto label_45f260;
        }
    }
    ctx->pc = 0x45F25Cu;
label_45f25c:
    // 0x45f25c: 0x264500c0  addiu       $a1, $s2, 0xC0
    ctx->pc = 0x45f25cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 192));
label_45f260:
    // 0x45f260: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x45f260u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_45f264:
    // 0x45f264: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x45f264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_45f268:
    // 0x45f268: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x45f268u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_45f26c:
    // 0x45f26c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x45f26cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_45f270:
    // 0x45f270: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x45f270u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_45f274:
    // 0x45f274: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x45f274u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_45f278:
    // 0x45f278: 0xc4b60008  lwc1        $f22, 0x8($a1)
    ctx->pc = 0x45f278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_45f27c:
    // 0x45f27c: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x45f27cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_45f280:
    // 0x45f280: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x45f280u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_45f284:
    // 0x45f284: 0x0  nop
    ctx->pc = 0x45f284u;
    // NOP
label_45f288:
    // 0x45f288: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x45f288u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_45f28c:
    // 0x45f28c: 0x4601abc0  add.s       $f15, $f21, $f1
    ctx->pc = 0x45f28cu;
    ctx->f[15] = FPU_ADD_S(ctx->f[21], ctx->f[1]);
label_45f290:
    // 0x45f290: 0x4616a380  add.s       $f14, $f20, $f22
    ctx->pc = 0x45f290u;
    ctx->f[14] = FPU_ADD_S(ctx->f[20], ctx->f[22]);
label_45f294:
    // 0x45f294: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x45f294u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_45f298:
    // 0x45f298: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x45f298u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_45f29c:
    // 0x45f29c: 0xc0bc284  jal         func_2F0A10
label_45f2a0:
    if (ctx->pc == 0x45F2A0u) {
        ctx->pc = 0x45F2A0u;
            // 0x45f2a0: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x45F2A4u;
        goto label_45f2a4;
    }
    ctx->pc = 0x45F29Cu;
    SET_GPR_U32(ctx, 31, 0x45F2A4u);
    ctx->pc = 0x45F2A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45F29Cu;
            // 0x45f2a0: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45F2A4u; }
        if (ctx->pc != 0x45F2A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45F2A4u; }
        if (ctx->pc != 0x45F2A4u) { return; }
    }
    ctx->pc = 0x45F2A4u;
label_45f2a4:
    // 0x45f2a4: 0x3c033f40  lui         $v1, 0x3F40
    ctx->pc = 0x45f2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16192 << 16));
label_45f2a8:
    // 0x45f2a8: 0x151100  sll         $v0, $s5, 4
    ctx->pc = 0x45f2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
label_45f2ac:
    // 0x45f2ac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x45f2acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_45f2b0:
    // 0x45f2b0: 0x2422821  addu        $a1, $s2, $v0
    ctx->pc = 0x45f2b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_45f2b4:
    // 0x45f2b4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x45f2b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_45f2b8:
    // 0x45f2b8: 0x0  nop
    ctx->pc = 0x45f2b8u;
    // NOP
label_45f2bc:
    // 0x45f2bc: 0x46140018  adda.s      $f0, $f20
    ctx->pc = 0x45f2bcu;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_45f2c0:
    // 0x45f2c0: 0x12600002  beqz        $s3, . + 4 + (0x2 << 2)
label_45f2c4:
    if (ctx->pc == 0x45F2C4u) {
        ctx->pc = 0x45F2C4u;
            // 0x45f2c4: 0x4601b51c  madd.s      $f20, $f22, $f1 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[22], ctx->f[1]));
        ctx->pc = 0x45F2C8u;
        goto label_45f2c8;
    }
    ctx->pc = 0x45F2C0u;
    {
        const bool branch_taken_0x45f2c0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x45F2C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45F2C0u;
            // 0x45f2c4: 0x4601b51c  madd.s      $f20, $f22, $f1 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[22], ctx->f[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45f2c0) {
            ctx->pc = 0x45F2CCu;
            goto label_45f2cc;
        }
    }
    ctx->pc = 0x45F2C8u;
label_45f2c8:
    // 0x45f2c8: 0x264500c0  addiu       $a1, $s2, 0xC0
    ctx->pc = 0x45f2c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 192));
label_45f2cc:
    // 0x45f2cc: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x45f2ccu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_45f2d0:
    // 0x45f2d0: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x45f2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_45f2d4:
    // 0x45f2d4: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x45f2d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_45f2d8:
    // 0x45f2d8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x45f2d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_45f2dc:
    // 0x45f2dc: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x45f2dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_45f2e0:
    // 0x45f2e0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x45f2e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_45f2e4:
    // 0x45f2e4: 0xc4b60008  lwc1        $f22, 0x8($a1)
    ctx->pc = 0x45f2e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_45f2e8:
    // 0x45f2e8: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x45f2e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_45f2ec:
    // 0x45f2ec: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x45f2ecu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_45f2f0:
    // 0x45f2f0: 0x0  nop
    ctx->pc = 0x45f2f0u;
    // NOP
label_45f2f4:
    // 0x45f2f4: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x45f2f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_45f2f8:
    // 0x45f2f8: 0x4601abc0  add.s       $f15, $f21, $f1
    ctx->pc = 0x45f2f8u;
    ctx->f[15] = FPU_ADD_S(ctx->f[21], ctx->f[1]);
label_45f2fc:
    // 0x45f2fc: 0x4616a380  add.s       $f14, $f20, $f22
    ctx->pc = 0x45f2fcu;
    ctx->f[14] = FPU_ADD_S(ctx->f[20], ctx->f[22]);
label_45f300:
    // 0x45f300: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x45f300u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_45f304:
    // 0x45f304: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x45f304u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_45f308:
    // 0x45f308: 0xc0bc284  jal         func_2F0A10
label_45f30c:
    if (ctx->pc == 0x45F30Cu) {
        ctx->pc = 0x45F30Cu;
            // 0x45f30c: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x45F310u;
        goto label_45f310;
    }
    ctx->pc = 0x45F308u;
    SET_GPR_U32(ctx, 31, 0x45F310u);
    ctx->pc = 0x45F30Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45F308u;
            // 0x45f30c: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45F310u; }
        if (ctx->pc != 0x45F310u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45F310u; }
        if (ctx->pc != 0x45F310u) { return; }
    }
    ctx->pc = 0x45F310u;
label_45f310:
    // 0x45f310: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x45f310u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_45f314:
    // 0x45f314: 0x3c023f40  lui         $v0, 0x3F40
    ctx->pc = 0x45f314u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16192 << 16));
label_45f318:
    // 0x45f318: 0x46140018  adda.s      $f0, $f20
    ctx->pc = 0x45f318u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_45f31c:
    // 0x45f31c: 0x264500b0  addiu       $a1, $s2, 0xB0
    ctx->pc = 0x45f31cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 176));
label_45f320:
    // 0x45f320: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x45f320u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_45f324:
    // 0x45f324: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x45f324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_45f328:
    // 0x45f328: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x45f328u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_45f32c:
    // 0x45f32c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x45f32cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_45f330:
    // 0x45f330: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x45f330u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_45f334:
    // 0x45f334: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x45f334u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_45f338:
    // 0x45f338: 0x0  nop
    ctx->pc = 0x45f338u;
    // NOP
label_45f33c:
    // 0x45f33c: 0x4601b51c  madd.s      $f20, $f22, $f1
    ctx->pc = 0x45f33cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[22], ctx->f[1]));
label_45f340:
    // 0x45f340: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x45f340u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_45f344:
    // 0x45f344: 0xc65600b8  lwc1        $f22, 0xB8($s2)
    ctx->pc = 0x45f344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_45f348:
    // 0x45f348: 0xc64100bc  lwc1        $f1, 0xBC($s2)
    ctx->pc = 0x45f348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_45f34c:
    // 0x45f34c: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x45f34cu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_45f350:
    // 0x45f350: 0x0  nop
    ctx->pc = 0x45f350u;
    // NOP
label_45f354:
    // 0x45f354: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x45f354u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_45f358:
    // 0x45f358: 0x4601abc0  add.s       $f15, $f21, $f1
    ctx->pc = 0x45f358u;
    ctx->f[15] = FPU_ADD_S(ctx->f[21], ctx->f[1]);
label_45f35c:
    // 0x45f35c: 0x4616a380  add.s       $f14, $f20, $f22
    ctx->pc = 0x45f35cu;
    ctx->f[14] = FPU_ADD_S(ctx->f[20], ctx->f[22]);
label_45f360:
    // 0x45f360: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x45f360u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_45f364:
    // 0x45f364: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x45f364u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_45f368:
    // 0x45f368: 0xc0bc284  jal         func_2F0A10
label_45f36c:
    if (ctx->pc == 0x45F36Cu) {
        ctx->pc = 0x45F36Cu;
            // 0x45f36c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x45F370u;
        goto label_45f370;
    }
    ctx->pc = 0x45F368u;
    SET_GPR_U32(ctx, 31, 0x45F370u);
    ctx->pc = 0x45F36Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45F368u;
            // 0x45f36c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45F370u; }
        if (ctx->pc != 0x45F370u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45F370u; }
        if (ctx->pc != 0x45F370u) { return; }
    }
    ctx->pc = 0x45F370u;
label_45f370:
    // 0x45f370: 0x3c0251eb  lui         $v0, 0x51EB
    ctx->pc = 0x45f370u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20971 << 16));
label_45f374:
    // 0x45f374: 0x3c033f40  lui         $v1, 0x3F40
    ctx->pc = 0x45f374u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16192 << 16));
label_45f378:
    // 0x45f378: 0x3442851f  ori         $v0, $v0, 0x851F
    ctx->pc = 0x45f378u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34079);
label_45f37c:
    // 0x45f37c: 0x540019  multu       $v0, $s4
    ctx->pc = 0x45f37cu;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 2) * (uint64_t)GPR_U32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_45f380:
    // 0x45f380: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x45f380u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_45f384:
    // 0x45f384: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x45f384u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_45f388:
    // 0x45f388: 0x0  nop
    ctx->pc = 0x45f388u;
    // NOP
label_45f38c:
    // 0x45f38c: 0x46140018  adda.s      $f0, $f20
    ctx->pc = 0x45f38cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_45f390:
    // 0x45f390: 0x4601b51c  madd.s      $f20, $f22, $f1
    ctx->pc = 0x45f390u;
    ctx->f[20] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[22], ctx->f[1]));
label_45f394:
    // 0x45f394: 0x1010  mfhi        $v0
    ctx->pc = 0x45f394u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_45f398:
    // 0x45f398: 0x22142  srl         $a0, $v0, 5
    ctx->pc = 0x45f398u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
label_45f39c:
    // 0x45f39c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x45f39cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_45f3a0:
    // 0x45f3a0: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x45f3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_45f3a4:
    // 0x45f3a4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x45f3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_45f3a8:
    // 0x45f3a8: 0x2422821  addu        $a1, $s2, $v0
    ctx->pc = 0x45f3a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_45f3ac:
    // 0x45f3ac: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x45f3acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_45f3b0:
    // 0x45f3b0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x45f3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_45f3b4:
    // 0x45f3b4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x45f3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_45f3b8:
    // 0x45f3b8: 0x12600002  beqz        $s3, . + 4 + (0x2 << 2)
label_45f3bc:
    if (ctx->pc == 0x45F3BCu) {
        ctx->pc = 0x45F3BCu;
            // 0x45f3bc: 0x282a023  subu        $s4, $s4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
        ctx->pc = 0x45F3C0u;
        goto label_45f3c0;
    }
    ctx->pc = 0x45F3B8u;
    {
        const bool branch_taken_0x45f3b8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x45F3BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45F3B8u;
            // 0x45f3bc: 0x282a023  subu        $s4, $s4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45f3b8) {
            ctx->pc = 0x45F3C4u;
            goto label_45f3c4;
        }
    }
    ctx->pc = 0x45F3C0u;
label_45f3c0:
    // 0x45f3c0: 0x264500c0  addiu       $a1, $s2, 0xC0
    ctx->pc = 0x45f3c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 192));
label_45f3c4:
    // 0x45f3c4: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x45f3c4u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_45f3c8:
    // 0x45f3c8: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x45f3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_45f3cc:
    // 0x45f3cc: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x45f3ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_45f3d0:
    // 0x45f3d0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x45f3d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_45f3d4:
    // 0x45f3d4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x45f3d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_45f3d8:
    // 0x45f3d8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x45f3d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_45f3dc:
    // 0x45f3dc: 0xc4b60008  lwc1        $f22, 0x8($a1)
    ctx->pc = 0x45f3dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_45f3e0:
    // 0x45f3e0: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x45f3e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_45f3e4:
    // 0x45f3e4: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x45f3e4u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_45f3e8:
    // 0x45f3e8: 0x0  nop
    ctx->pc = 0x45f3e8u;
    // NOP
label_45f3ec:
    // 0x45f3ec: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x45f3ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_45f3f0:
    // 0x45f3f0: 0x4601abc0  add.s       $f15, $f21, $f1
    ctx->pc = 0x45f3f0u;
    ctx->f[15] = FPU_ADD_S(ctx->f[21], ctx->f[1]);
label_45f3f4:
    // 0x45f3f4: 0x4616a380  add.s       $f14, $f20, $f22
    ctx->pc = 0x45f3f4u;
    ctx->f[14] = FPU_ADD_S(ctx->f[20], ctx->f[22]);
label_45f3f8:
    // 0x45f3f8: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x45f3f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_45f3fc:
    // 0x45f3fc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x45f3fcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_45f400:
    // 0x45f400: 0xc0bc284  jal         func_2F0A10
label_45f404:
    if (ctx->pc == 0x45F404u) {
        ctx->pc = 0x45F404u;
            // 0x45f404: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x45F408u;
        goto label_45f408;
    }
    ctx->pc = 0x45F400u;
    SET_GPR_U32(ctx, 31, 0x45F408u);
    ctx->pc = 0x45F404u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45F400u;
            // 0x45f404: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45F408u; }
        if (ctx->pc != 0x45F408u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45F408u; }
        if (ctx->pc != 0x45F408u) { return; }
    }
    ctx->pc = 0x45F408u;
label_45f408:
    // 0x45f408: 0x3c02cccc  lui         $v0, 0xCCCC
    ctx->pc = 0x45f408u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52428 << 16));
label_45f40c:
    // 0x45f40c: 0x3c033f40  lui         $v1, 0x3F40
    ctx->pc = 0x45f40cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16192 << 16));
label_45f410:
    // 0x45f410: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x45f410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_45f414:
    // 0x45f414: 0x540019  multu       $v0, $s4
    ctx->pc = 0x45f414u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 2) * (uint64_t)GPR_U32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_45f418:
    // 0x45f418: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x45f418u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_45f41c:
    // 0x45f41c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x45f41cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_45f420:
    // 0x45f420: 0x0  nop
    ctx->pc = 0x45f420u;
    // NOP
label_45f424:
    // 0x45f424: 0x46140018  adda.s      $f0, $f20
    ctx->pc = 0x45f424u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_45f428:
    // 0x45f428: 0x4601b51c  madd.s      $f20, $f22, $f1
    ctx->pc = 0x45f428u;
    ctx->f[20] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[22], ctx->f[1]));
label_45f42c:
    // 0x45f42c: 0x1010  mfhi        $v0
    ctx->pc = 0x45f42cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_45f430:
    // 0x45f430: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x45f430u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
label_45f434:
    // 0x45f434: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x45f434u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_45f438:
    // 0x45f438: 0x12600002  beqz        $s3, . + 4 + (0x2 << 2)
label_45f43c:
    if (ctx->pc == 0x45F43Cu) {
        ctx->pc = 0x45F43Cu;
            // 0x45f43c: 0x2422821  addu        $a1, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->pc = 0x45F440u;
        goto label_45f440;
    }
    ctx->pc = 0x45F438u;
    {
        const bool branch_taken_0x45f438 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x45F43Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45F438u;
            // 0x45f43c: 0x2422821  addu        $a1, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45f438) {
            ctx->pc = 0x45F444u;
            goto label_45f444;
        }
    }
    ctx->pc = 0x45F440u;
label_45f440:
    // 0x45f440: 0x264500c0  addiu       $a1, $s2, 0xC0
    ctx->pc = 0x45f440u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 192));
label_45f444:
    // 0x45f444: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x45f444u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_45f448:
    // 0x45f448: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x45f448u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_45f44c:
    // 0x45f44c: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x45f44cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_45f450:
    // 0x45f450: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x45f450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_45f454:
    // 0x45f454: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x45f454u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_45f458:
    // 0x45f458: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x45f458u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_45f45c:
    // 0x45f45c: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x45f45cu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_45f460:
    // 0x45f460: 0x0  nop
    ctx->pc = 0x45f460u;
    // NOP
label_45f464:
    // 0x45f464: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x45f464u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_45f468:
    // 0x45f468: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x45f468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_45f46c:
    // 0x45f46c: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x45f46cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_45f470:
    // 0x45f470: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x45f470u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_45f474:
    // 0x45f474: 0x4601a380  add.s       $f14, $f20, $f1
    ctx->pc = 0x45f474u;
    ctx->f[14] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
label_45f478:
    // 0x45f478: 0x4600abc0  add.s       $f15, $f21, $f0
    ctx->pc = 0x45f478u;
    ctx->f[15] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
label_45f47c:
    // 0x45f47c: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x45f47cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_45f480:
    // 0x45f480: 0xc0bc284  jal         func_2F0A10
label_45f484:
    if (ctx->pc == 0x45F484u) {
        ctx->pc = 0x45F484u;
            // 0x45f484: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x45F488u;
        goto label_45f488;
    }
    ctx->pc = 0x45F480u;
    SET_GPR_U32(ctx, 31, 0x45F488u);
    ctx->pc = 0x45F484u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45F480u;
            // 0x45f484: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45F488u; }
        if (ctx->pc != 0x45F488u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45F488u; }
        if (ctx->pc != 0x45F488u) { return; }
    }
    ctx->pc = 0x45F488u;
label_45f488:
    // 0x45f488: 0x8ef90000  lw          $t9, 0x0($s7)
    ctx->pc = 0x45f488u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_45f48c:
    // 0x45f48c: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x45f48cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_45f490:
    // 0x45f490: 0x320f809  jalr        $t9
label_45f494:
    if (ctx->pc == 0x45F494u) {
        ctx->pc = 0x45F494u;
            // 0x45f494: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x45F498u;
        goto label_45f498;
    }
    ctx->pc = 0x45F490u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x45F498u);
        ctx->pc = 0x45F494u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45F490u;
            // 0x45f494: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x45F498u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x45F498u; }
            if (ctx->pc != 0x45F498u) { return; }
        }
        }
    }
    ctx->pc = 0x45F498u;
label_45f498:
    // 0x45f498: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x45f498u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_45f49c:
    // 0x45f49c: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x45f49cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_45f4a0:
    // 0x45f4a0: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x45f4a0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_45f4a4:
    // 0x45f4a4: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x45f4a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_45f4a8:
    // 0x45f4a8: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x45f4a8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_45f4ac:
    // 0x45f4ac: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x45f4acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_45f4b0:
    // 0x45f4b0: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x45f4b0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_45f4b4:
    // 0x45f4b4: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x45f4b4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_45f4b8:
    // 0x45f4b8: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x45f4b8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_45f4bc:
    // 0x45f4bc: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x45f4bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_45f4c0:
    // 0x45f4c0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x45f4c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_45f4c4:
    // 0x45f4c4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x45f4c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_45f4c8:
    // 0x45f4c8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x45f4c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_45f4cc:
    // 0x45f4cc: 0x3e00008  jr          $ra
label_45f4d0:
    if (ctx->pc == 0x45F4D0u) {
        ctx->pc = 0x45F4D0u;
            // 0x45f4d0: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->pc = 0x45F4D4u;
        goto label_45f4d4;
    }
    ctx->pc = 0x45F4CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x45F4D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45F4CCu;
            // 0x45f4d0: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x45F4D4u;
label_45f4d4:
    // 0x45f4d4: 0x0  nop
    ctx->pc = 0x45f4d4u;
    // NOP
label_45f4d8:
    // 0x45f4d8: 0x0  nop
    ctx->pc = 0x45f4d8u;
    // NOP
label_45f4dc:
    // 0x45f4dc: 0x0  nop
    ctx->pc = 0x45f4dcu;
    // NOP
}
