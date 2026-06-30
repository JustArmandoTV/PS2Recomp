#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0050EA40
// Address: 0x50ea40 - 0x510430
void sub_0050EA40_0x50ea40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0050EA40_0x50ea40");
#endif

    switch (ctx->pc) {
        case 0x50ea40u: goto label_50ea40;
        case 0x50ea44u: goto label_50ea44;
        case 0x50ea48u: goto label_50ea48;
        case 0x50ea4cu: goto label_50ea4c;
        case 0x50ea50u: goto label_50ea50;
        case 0x50ea54u: goto label_50ea54;
        case 0x50ea58u: goto label_50ea58;
        case 0x50ea5cu: goto label_50ea5c;
        case 0x50ea60u: goto label_50ea60;
        case 0x50ea64u: goto label_50ea64;
        case 0x50ea68u: goto label_50ea68;
        case 0x50ea6cu: goto label_50ea6c;
        case 0x50ea70u: goto label_50ea70;
        case 0x50ea74u: goto label_50ea74;
        case 0x50ea78u: goto label_50ea78;
        case 0x50ea7cu: goto label_50ea7c;
        case 0x50ea80u: goto label_50ea80;
        case 0x50ea84u: goto label_50ea84;
        case 0x50ea88u: goto label_50ea88;
        case 0x50ea8cu: goto label_50ea8c;
        case 0x50ea90u: goto label_50ea90;
        case 0x50ea94u: goto label_50ea94;
        case 0x50ea98u: goto label_50ea98;
        case 0x50ea9cu: goto label_50ea9c;
        case 0x50eaa0u: goto label_50eaa0;
        case 0x50eaa4u: goto label_50eaa4;
        case 0x50eaa8u: goto label_50eaa8;
        case 0x50eaacu: goto label_50eaac;
        case 0x50eab0u: goto label_50eab0;
        case 0x50eab4u: goto label_50eab4;
        case 0x50eab8u: goto label_50eab8;
        case 0x50eabcu: goto label_50eabc;
        case 0x50eac0u: goto label_50eac0;
        case 0x50eac4u: goto label_50eac4;
        case 0x50eac8u: goto label_50eac8;
        case 0x50eaccu: goto label_50eacc;
        case 0x50ead0u: goto label_50ead0;
        case 0x50ead4u: goto label_50ead4;
        case 0x50ead8u: goto label_50ead8;
        case 0x50eadcu: goto label_50eadc;
        case 0x50eae0u: goto label_50eae0;
        case 0x50eae4u: goto label_50eae4;
        case 0x50eae8u: goto label_50eae8;
        case 0x50eaecu: goto label_50eaec;
        case 0x50eaf0u: goto label_50eaf0;
        case 0x50eaf4u: goto label_50eaf4;
        case 0x50eaf8u: goto label_50eaf8;
        case 0x50eafcu: goto label_50eafc;
        case 0x50eb00u: goto label_50eb00;
        case 0x50eb04u: goto label_50eb04;
        case 0x50eb08u: goto label_50eb08;
        case 0x50eb0cu: goto label_50eb0c;
        case 0x50eb10u: goto label_50eb10;
        case 0x50eb14u: goto label_50eb14;
        case 0x50eb18u: goto label_50eb18;
        case 0x50eb1cu: goto label_50eb1c;
        case 0x50eb20u: goto label_50eb20;
        case 0x50eb24u: goto label_50eb24;
        case 0x50eb28u: goto label_50eb28;
        case 0x50eb2cu: goto label_50eb2c;
        case 0x50eb30u: goto label_50eb30;
        case 0x50eb34u: goto label_50eb34;
        case 0x50eb38u: goto label_50eb38;
        case 0x50eb3cu: goto label_50eb3c;
        case 0x50eb40u: goto label_50eb40;
        case 0x50eb44u: goto label_50eb44;
        case 0x50eb48u: goto label_50eb48;
        case 0x50eb4cu: goto label_50eb4c;
        case 0x50eb50u: goto label_50eb50;
        case 0x50eb54u: goto label_50eb54;
        case 0x50eb58u: goto label_50eb58;
        case 0x50eb5cu: goto label_50eb5c;
        case 0x50eb60u: goto label_50eb60;
        case 0x50eb64u: goto label_50eb64;
        case 0x50eb68u: goto label_50eb68;
        case 0x50eb6cu: goto label_50eb6c;
        case 0x50eb70u: goto label_50eb70;
        case 0x50eb74u: goto label_50eb74;
        case 0x50eb78u: goto label_50eb78;
        case 0x50eb7cu: goto label_50eb7c;
        case 0x50eb80u: goto label_50eb80;
        case 0x50eb84u: goto label_50eb84;
        case 0x50eb88u: goto label_50eb88;
        case 0x50eb8cu: goto label_50eb8c;
        case 0x50eb90u: goto label_50eb90;
        case 0x50eb94u: goto label_50eb94;
        case 0x50eb98u: goto label_50eb98;
        case 0x50eb9cu: goto label_50eb9c;
        case 0x50eba0u: goto label_50eba0;
        case 0x50eba4u: goto label_50eba4;
        case 0x50eba8u: goto label_50eba8;
        case 0x50ebacu: goto label_50ebac;
        case 0x50ebb0u: goto label_50ebb0;
        case 0x50ebb4u: goto label_50ebb4;
        case 0x50ebb8u: goto label_50ebb8;
        case 0x50ebbcu: goto label_50ebbc;
        case 0x50ebc0u: goto label_50ebc0;
        case 0x50ebc4u: goto label_50ebc4;
        case 0x50ebc8u: goto label_50ebc8;
        case 0x50ebccu: goto label_50ebcc;
        case 0x50ebd0u: goto label_50ebd0;
        case 0x50ebd4u: goto label_50ebd4;
        case 0x50ebd8u: goto label_50ebd8;
        case 0x50ebdcu: goto label_50ebdc;
        case 0x50ebe0u: goto label_50ebe0;
        case 0x50ebe4u: goto label_50ebe4;
        case 0x50ebe8u: goto label_50ebe8;
        case 0x50ebecu: goto label_50ebec;
        case 0x50ebf0u: goto label_50ebf0;
        case 0x50ebf4u: goto label_50ebf4;
        case 0x50ebf8u: goto label_50ebf8;
        case 0x50ebfcu: goto label_50ebfc;
        case 0x50ec00u: goto label_50ec00;
        case 0x50ec04u: goto label_50ec04;
        case 0x50ec08u: goto label_50ec08;
        case 0x50ec0cu: goto label_50ec0c;
        case 0x50ec10u: goto label_50ec10;
        case 0x50ec14u: goto label_50ec14;
        case 0x50ec18u: goto label_50ec18;
        case 0x50ec1cu: goto label_50ec1c;
        case 0x50ec20u: goto label_50ec20;
        case 0x50ec24u: goto label_50ec24;
        case 0x50ec28u: goto label_50ec28;
        case 0x50ec2cu: goto label_50ec2c;
        case 0x50ec30u: goto label_50ec30;
        case 0x50ec34u: goto label_50ec34;
        case 0x50ec38u: goto label_50ec38;
        case 0x50ec3cu: goto label_50ec3c;
        case 0x50ec40u: goto label_50ec40;
        case 0x50ec44u: goto label_50ec44;
        case 0x50ec48u: goto label_50ec48;
        case 0x50ec4cu: goto label_50ec4c;
        case 0x50ec50u: goto label_50ec50;
        case 0x50ec54u: goto label_50ec54;
        case 0x50ec58u: goto label_50ec58;
        case 0x50ec5cu: goto label_50ec5c;
        case 0x50ec60u: goto label_50ec60;
        case 0x50ec64u: goto label_50ec64;
        case 0x50ec68u: goto label_50ec68;
        case 0x50ec6cu: goto label_50ec6c;
        case 0x50ec70u: goto label_50ec70;
        case 0x50ec74u: goto label_50ec74;
        case 0x50ec78u: goto label_50ec78;
        case 0x50ec7cu: goto label_50ec7c;
        case 0x50ec80u: goto label_50ec80;
        case 0x50ec84u: goto label_50ec84;
        case 0x50ec88u: goto label_50ec88;
        case 0x50ec8cu: goto label_50ec8c;
        case 0x50ec90u: goto label_50ec90;
        case 0x50ec94u: goto label_50ec94;
        case 0x50ec98u: goto label_50ec98;
        case 0x50ec9cu: goto label_50ec9c;
        case 0x50eca0u: goto label_50eca0;
        case 0x50eca4u: goto label_50eca4;
        case 0x50eca8u: goto label_50eca8;
        case 0x50ecacu: goto label_50ecac;
        case 0x50ecb0u: goto label_50ecb0;
        case 0x50ecb4u: goto label_50ecb4;
        case 0x50ecb8u: goto label_50ecb8;
        case 0x50ecbcu: goto label_50ecbc;
        case 0x50ecc0u: goto label_50ecc0;
        case 0x50ecc4u: goto label_50ecc4;
        case 0x50ecc8u: goto label_50ecc8;
        case 0x50ecccu: goto label_50eccc;
        case 0x50ecd0u: goto label_50ecd0;
        case 0x50ecd4u: goto label_50ecd4;
        case 0x50ecd8u: goto label_50ecd8;
        case 0x50ecdcu: goto label_50ecdc;
        case 0x50ece0u: goto label_50ece0;
        case 0x50ece4u: goto label_50ece4;
        case 0x50ece8u: goto label_50ece8;
        case 0x50ececu: goto label_50ecec;
        case 0x50ecf0u: goto label_50ecf0;
        case 0x50ecf4u: goto label_50ecf4;
        case 0x50ecf8u: goto label_50ecf8;
        case 0x50ecfcu: goto label_50ecfc;
        case 0x50ed00u: goto label_50ed00;
        case 0x50ed04u: goto label_50ed04;
        case 0x50ed08u: goto label_50ed08;
        case 0x50ed0cu: goto label_50ed0c;
        case 0x50ed10u: goto label_50ed10;
        case 0x50ed14u: goto label_50ed14;
        case 0x50ed18u: goto label_50ed18;
        case 0x50ed1cu: goto label_50ed1c;
        case 0x50ed20u: goto label_50ed20;
        case 0x50ed24u: goto label_50ed24;
        case 0x50ed28u: goto label_50ed28;
        case 0x50ed2cu: goto label_50ed2c;
        case 0x50ed30u: goto label_50ed30;
        case 0x50ed34u: goto label_50ed34;
        case 0x50ed38u: goto label_50ed38;
        case 0x50ed3cu: goto label_50ed3c;
        case 0x50ed40u: goto label_50ed40;
        case 0x50ed44u: goto label_50ed44;
        case 0x50ed48u: goto label_50ed48;
        case 0x50ed4cu: goto label_50ed4c;
        case 0x50ed50u: goto label_50ed50;
        case 0x50ed54u: goto label_50ed54;
        case 0x50ed58u: goto label_50ed58;
        case 0x50ed5cu: goto label_50ed5c;
        case 0x50ed60u: goto label_50ed60;
        case 0x50ed64u: goto label_50ed64;
        case 0x50ed68u: goto label_50ed68;
        case 0x50ed6cu: goto label_50ed6c;
        case 0x50ed70u: goto label_50ed70;
        case 0x50ed74u: goto label_50ed74;
        case 0x50ed78u: goto label_50ed78;
        case 0x50ed7cu: goto label_50ed7c;
        case 0x50ed80u: goto label_50ed80;
        case 0x50ed84u: goto label_50ed84;
        case 0x50ed88u: goto label_50ed88;
        case 0x50ed8cu: goto label_50ed8c;
        case 0x50ed90u: goto label_50ed90;
        case 0x50ed94u: goto label_50ed94;
        case 0x50ed98u: goto label_50ed98;
        case 0x50ed9cu: goto label_50ed9c;
        case 0x50eda0u: goto label_50eda0;
        case 0x50eda4u: goto label_50eda4;
        case 0x50eda8u: goto label_50eda8;
        case 0x50edacu: goto label_50edac;
        case 0x50edb0u: goto label_50edb0;
        case 0x50edb4u: goto label_50edb4;
        case 0x50edb8u: goto label_50edb8;
        case 0x50edbcu: goto label_50edbc;
        case 0x50edc0u: goto label_50edc0;
        case 0x50edc4u: goto label_50edc4;
        case 0x50edc8u: goto label_50edc8;
        case 0x50edccu: goto label_50edcc;
        case 0x50edd0u: goto label_50edd0;
        case 0x50edd4u: goto label_50edd4;
        case 0x50edd8u: goto label_50edd8;
        case 0x50eddcu: goto label_50eddc;
        case 0x50ede0u: goto label_50ede0;
        case 0x50ede4u: goto label_50ede4;
        case 0x50ede8u: goto label_50ede8;
        case 0x50edecu: goto label_50edec;
        case 0x50edf0u: goto label_50edf0;
        case 0x50edf4u: goto label_50edf4;
        case 0x50edf8u: goto label_50edf8;
        case 0x50edfcu: goto label_50edfc;
        case 0x50ee00u: goto label_50ee00;
        case 0x50ee04u: goto label_50ee04;
        case 0x50ee08u: goto label_50ee08;
        case 0x50ee0cu: goto label_50ee0c;
        case 0x50ee10u: goto label_50ee10;
        case 0x50ee14u: goto label_50ee14;
        case 0x50ee18u: goto label_50ee18;
        case 0x50ee1cu: goto label_50ee1c;
        case 0x50ee20u: goto label_50ee20;
        case 0x50ee24u: goto label_50ee24;
        case 0x50ee28u: goto label_50ee28;
        case 0x50ee2cu: goto label_50ee2c;
        case 0x50ee30u: goto label_50ee30;
        case 0x50ee34u: goto label_50ee34;
        case 0x50ee38u: goto label_50ee38;
        case 0x50ee3cu: goto label_50ee3c;
        case 0x50ee40u: goto label_50ee40;
        case 0x50ee44u: goto label_50ee44;
        case 0x50ee48u: goto label_50ee48;
        case 0x50ee4cu: goto label_50ee4c;
        case 0x50ee50u: goto label_50ee50;
        case 0x50ee54u: goto label_50ee54;
        case 0x50ee58u: goto label_50ee58;
        case 0x50ee5cu: goto label_50ee5c;
        case 0x50ee60u: goto label_50ee60;
        case 0x50ee64u: goto label_50ee64;
        case 0x50ee68u: goto label_50ee68;
        case 0x50ee6cu: goto label_50ee6c;
        case 0x50ee70u: goto label_50ee70;
        case 0x50ee74u: goto label_50ee74;
        case 0x50ee78u: goto label_50ee78;
        case 0x50ee7cu: goto label_50ee7c;
        case 0x50ee80u: goto label_50ee80;
        case 0x50ee84u: goto label_50ee84;
        case 0x50ee88u: goto label_50ee88;
        case 0x50ee8cu: goto label_50ee8c;
        case 0x50ee90u: goto label_50ee90;
        case 0x50ee94u: goto label_50ee94;
        case 0x50ee98u: goto label_50ee98;
        case 0x50ee9cu: goto label_50ee9c;
        case 0x50eea0u: goto label_50eea0;
        case 0x50eea4u: goto label_50eea4;
        case 0x50eea8u: goto label_50eea8;
        case 0x50eeacu: goto label_50eeac;
        case 0x50eeb0u: goto label_50eeb0;
        case 0x50eeb4u: goto label_50eeb4;
        case 0x50eeb8u: goto label_50eeb8;
        case 0x50eebcu: goto label_50eebc;
        case 0x50eec0u: goto label_50eec0;
        case 0x50eec4u: goto label_50eec4;
        case 0x50eec8u: goto label_50eec8;
        case 0x50eeccu: goto label_50eecc;
        case 0x50eed0u: goto label_50eed0;
        case 0x50eed4u: goto label_50eed4;
        case 0x50eed8u: goto label_50eed8;
        case 0x50eedcu: goto label_50eedc;
        case 0x50eee0u: goto label_50eee0;
        case 0x50eee4u: goto label_50eee4;
        case 0x50eee8u: goto label_50eee8;
        case 0x50eeecu: goto label_50eeec;
        case 0x50eef0u: goto label_50eef0;
        case 0x50eef4u: goto label_50eef4;
        case 0x50eef8u: goto label_50eef8;
        case 0x50eefcu: goto label_50eefc;
        case 0x50ef00u: goto label_50ef00;
        case 0x50ef04u: goto label_50ef04;
        case 0x50ef08u: goto label_50ef08;
        case 0x50ef0cu: goto label_50ef0c;
        case 0x50ef10u: goto label_50ef10;
        case 0x50ef14u: goto label_50ef14;
        case 0x50ef18u: goto label_50ef18;
        case 0x50ef1cu: goto label_50ef1c;
        case 0x50ef20u: goto label_50ef20;
        case 0x50ef24u: goto label_50ef24;
        case 0x50ef28u: goto label_50ef28;
        case 0x50ef2cu: goto label_50ef2c;
        case 0x50ef30u: goto label_50ef30;
        case 0x50ef34u: goto label_50ef34;
        case 0x50ef38u: goto label_50ef38;
        case 0x50ef3cu: goto label_50ef3c;
        case 0x50ef40u: goto label_50ef40;
        case 0x50ef44u: goto label_50ef44;
        case 0x50ef48u: goto label_50ef48;
        case 0x50ef4cu: goto label_50ef4c;
        case 0x50ef50u: goto label_50ef50;
        case 0x50ef54u: goto label_50ef54;
        case 0x50ef58u: goto label_50ef58;
        case 0x50ef5cu: goto label_50ef5c;
        case 0x50ef60u: goto label_50ef60;
        case 0x50ef64u: goto label_50ef64;
        case 0x50ef68u: goto label_50ef68;
        case 0x50ef6cu: goto label_50ef6c;
        case 0x50ef70u: goto label_50ef70;
        case 0x50ef74u: goto label_50ef74;
        case 0x50ef78u: goto label_50ef78;
        case 0x50ef7cu: goto label_50ef7c;
        case 0x50ef80u: goto label_50ef80;
        case 0x50ef84u: goto label_50ef84;
        case 0x50ef88u: goto label_50ef88;
        case 0x50ef8cu: goto label_50ef8c;
        case 0x50ef90u: goto label_50ef90;
        case 0x50ef94u: goto label_50ef94;
        case 0x50ef98u: goto label_50ef98;
        case 0x50ef9cu: goto label_50ef9c;
        case 0x50efa0u: goto label_50efa0;
        case 0x50efa4u: goto label_50efa4;
        case 0x50efa8u: goto label_50efa8;
        case 0x50efacu: goto label_50efac;
        case 0x50efb0u: goto label_50efb0;
        case 0x50efb4u: goto label_50efb4;
        case 0x50efb8u: goto label_50efb8;
        case 0x50efbcu: goto label_50efbc;
        case 0x50efc0u: goto label_50efc0;
        case 0x50efc4u: goto label_50efc4;
        case 0x50efc8u: goto label_50efc8;
        case 0x50efccu: goto label_50efcc;
        case 0x50efd0u: goto label_50efd0;
        case 0x50efd4u: goto label_50efd4;
        case 0x50efd8u: goto label_50efd8;
        case 0x50efdcu: goto label_50efdc;
        case 0x50efe0u: goto label_50efe0;
        case 0x50efe4u: goto label_50efe4;
        case 0x50efe8u: goto label_50efe8;
        case 0x50efecu: goto label_50efec;
        case 0x50eff0u: goto label_50eff0;
        case 0x50eff4u: goto label_50eff4;
        case 0x50eff8u: goto label_50eff8;
        case 0x50effcu: goto label_50effc;
        case 0x50f000u: goto label_50f000;
        case 0x50f004u: goto label_50f004;
        case 0x50f008u: goto label_50f008;
        case 0x50f00cu: goto label_50f00c;
        case 0x50f010u: goto label_50f010;
        case 0x50f014u: goto label_50f014;
        case 0x50f018u: goto label_50f018;
        case 0x50f01cu: goto label_50f01c;
        case 0x50f020u: goto label_50f020;
        case 0x50f024u: goto label_50f024;
        case 0x50f028u: goto label_50f028;
        case 0x50f02cu: goto label_50f02c;
        case 0x50f030u: goto label_50f030;
        case 0x50f034u: goto label_50f034;
        case 0x50f038u: goto label_50f038;
        case 0x50f03cu: goto label_50f03c;
        case 0x50f040u: goto label_50f040;
        case 0x50f044u: goto label_50f044;
        case 0x50f048u: goto label_50f048;
        case 0x50f04cu: goto label_50f04c;
        case 0x50f050u: goto label_50f050;
        case 0x50f054u: goto label_50f054;
        case 0x50f058u: goto label_50f058;
        case 0x50f05cu: goto label_50f05c;
        case 0x50f060u: goto label_50f060;
        case 0x50f064u: goto label_50f064;
        case 0x50f068u: goto label_50f068;
        case 0x50f06cu: goto label_50f06c;
        case 0x50f070u: goto label_50f070;
        case 0x50f074u: goto label_50f074;
        case 0x50f078u: goto label_50f078;
        case 0x50f07cu: goto label_50f07c;
        case 0x50f080u: goto label_50f080;
        case 0x50f084u: goto label_50f084;
        case 0x50f088u: goto label_50f088;
        case 0x50f08cu: goto label_50f08c;
        case 0x50f090u: goto label_50f090;
        case 0x50f094u: goto label_50f094;
        case 0x50f098u: goto label_50f098;
        case 0x50f09cu: goto label_50f09c;
        case 0x50f0a0u: goto label_50f0a0;
        case 0x50f0a4u: goto label_50f0a4;
        case 0x50f0a8u: goto label_50f0a8;
        case 0x50f0acu: goto label_50f0ac;
        case 0x50f0b0u: goto label_50f0b0;
        case 0x50f0b4u: goto label_50f0b4;
        case 0x50f0b8u: goto label_50f0b8;
        case 0x50f0bcu: goto label_50f0bc;
        case 0x50f0c0u: goto label_50f0c0;
        case 0x50f0c4u: goto label_50f0c4;
        case 0x50f0c8u: goto label_50f0c8;
        case 0x50f0ccu: goto label_50f0cc;
        case 0x50f0d0u: goto label_50f0d0;
        case 0x50f0d4u: goto label_50f0d4;
        case 0x50f0d8u: goto label_50f0d8;
        case 0x50f0dcu: goto label_50f0dc;
        case 0x50f0e0u: goto label_50f0e0;
        case 0x50f0e4u: goto label_50f0e4;
        case 0x50f0e8u: goto label_50f0e8;
        case 0x50f0ecu: goto label_50f0ec;
        case 0x50f0f0u: goto label_50f0f0;
        case 0x50f0f4u: goto label_50f0f4;
        case 0x50f0f8u: goto label_50f0f8;
        case 0x50f0fcu: goto label_50f0fc;
        case 0x50f100u: goto label_50f100;
        case 0x50f104u: goto label_50f104;
        case 0x50f108u: goto label_50f108;
        case 0x50f10cu: goto label_50f10c;
        case 0x50f110u: goto label_50f110;
        case 0x50f114u: goto label_50f114;
        case 0x50f118u: goto label_50f118;
        case 0x50f11cu: goto label_50f11c;
        case 0x50f120u: goto label_50f120;
        case 0x50f124u: goto label_50f124;
        case 0x50f128u: goto label_50f128;
        case 0x50f12cu: goto label_50f12c;
        case 0x50f130u: goto label_50f130;
        case 0x50f134u: goto label_50f134;
        case 0x50f138u: goto label_50f138;
        case 0x50f13cu: goto label_50f13c;
        case 0x50f140u: goto label_50f140;
        case 0x50f144u: goto label_50f144;
        case 0x50f148u: goto label_50f148;
        case 0x50f14cu: goto label_50f14c;
        case 0x50f150u: goto label_50f150;
        case 0x50f154u: goto label_50f154;
        case 0x50f158u: goto label_50f158;
        case 0x50f15cu: goto label_50f15c;
        case 0x50f160u: goto label_50f160;
        case 0x50f164u: goto label_50f164;
        case 0x50f168u: goto label_50f168;
        case 0x50f16cu: goto label_50f16c;
        case 0x50f170u: goto label_50f170;
        case 0x50f174u: goto label_50f174;
        case 0x50f178u: goto label_50f178;
        case 0x50f17cu: goto label_50f17c;
        case 0x50f180u: goto label_50f180;
        case 0x50f184u: goto label_50f184;
        case 0x50f188u: goto label_50f188;
        case 0x50f18cu: goto label_50f18c;
        case 0x50f190u: goto label_50f190;
        case 0x50f194u: goto label_50f194;
        case 0x50f198u: goto label_50f198;
        case 0x50f19cu: goto label_50f19c;
        case 0x50f1a0u: goto label_50f1a0;
        case 0x50f1a4u: goto label_50f1a4;
        case 0x50f1a8u: goto label_50f1a8;
        case 0x50f1acu: goto label_50f1ac;
        case 0x50f1b0u: goto label_50f1b0;
        case 0x50f1b4u: goto label_50f1b4;
        case 0x50f1b8u: goto label_50f1b8;
        case 0x50f1bcu: goto label_50f1bc;
        case 0x50f1c0u: goto label_50f1c0;
        case 0x50f1c4u: goto label_50f1c4;
        case 0x50f1c8u: goto label_50f1c8;
        case 0x50f1ccu: goto label_50f1cc;
        case 0x50f1d0u: goto label_50f1d0;
        case 0x50f1d4u: goto label_50f1d4;
        case 0x50f1d8u: goto label_50f1d8;
        case 0x50f1dcu: goto label_50f1dc;
        case 0x50f1e0u: goto label_50f1e0;
        case 0x50f1e4u: goto label_50f1e4;
        case 0x50f1e8u: goto label_50f1e8;
        case 0x50f1ecu: goto label_50f1ec;
        case 0x50f1f0u: goto label_50f1f0;
        case 0x50f1f4u: goto label_50f1f4;
        case 0x50f1f8u: goto label_50f1f8;
        case 0x50f1fcu: goto label_50f1fc;
        case 0x50f200u: goto label_50f200;
        case 0x50f204u: goto label_50f204;
        case 0x50f208u: goto label_50f208;
        case 0x50f20cu: goto label_50f20c;
        case 0x50f210u: goto label_50f210;
        case 0x50f214u: goto label_50f214;
        case 0x50f218u: goto label_50f218;
        case 0x50f21cu: goto label_50f21c;
        case 0x50f220u: goto label_50f220;
        case 0x50f224u: goto label_50f224;
        case 0x50f228u: goto label_50f228;
        case 0x50f22cu: goto label_50f22c;
        case 0x50f230u: goto label_50f230;
        case 0x50f234u: goto label_50f234;
        case 0x50f238u: goto label_50f238;
        case 0x50f23cu: goto label_50f23c;
        case 0x50f240u: goto label_50f240;
        case 0x50f244u: goto label_50f244;
        case 0x50f248u: goto label_50f248;
        case 0x50f24cu: goto label_50f24c;
        case 0x50f250u: goto label_50f250;
        case 0x50f254u: goto label_50f254;
        case 0x50f258u: goto label_50f258;
        case 0x50f25cu: goto label_50f25c;
        case 0x50f260u: goto label_50f260;
        case 0x50f264u: goto label_50f264;
        case 0x50f268u: goto label_50f268;
        case 0x50f26cu: goto label_50f26c;
        case 0x50f270u: goto label_50f270;
        case 0x50f274u: goto label_50f274;
        case 0x50f278u: goto label_50f278;
        case 0x50f27cu: goto label_50f27c;
        case 0x50f280u: goto label_50f280;
        case 0x50f284u: goto label_50f284;
        case 0x50f288u: goto label_50f288;
        case 0x50f28cu: goto label_50f28c;
        case 0x50f290u: goto label_50f290;
        case 0x50f294u: goto label_50f294;
        case 0x50f298u: goto label_50f298;
        case 0x50f29cu: goto label_50f29c;
        case 0x50f2a0u: goto label_50f2a0;
        case 0x50f2a4u: goto label_50f2a4;
        case 0x50f2a8u: goto label_50f2a8;
        case 0x50f2acu: goto label_50f2ac;
        case 0x50f2b0u: goto label_50f2b0;
        case 0x50f2b4u: goto label_50f2b4;
        case 0x50f2b8u: goto label_50f2b8;
        case 0x50f2bcu: goto label_50f2bc;
        case 0x50f2c0u: goto label_50f2c0;
        case 0x50f2c4u: goto label_50f2c4;
        case 0x50f2c8u: goto label_50f2c8;
        case 0x50f2ccu: goto label_50f2cc;
        case 0x50f2d0u: goto label_50f2d0;
        case 0x50f2d4u: goto label_50f2d4;
        case 0x50f2d8u: goto label_50f2d8;
        case 0x50f2dcu: goto label_50f2dc;
        case 0x50f2e0u: goto label_50f2e0;
        case 0x50f2e4u: goto label_50f2e4;
        case 0x50f2e8u: goto label_50f2e8;
        case 0x50f2ecu: goto label_50f2ec;
        case 0x50f2f0u: goto label_50f2f0;
        case 0x50f2f4u: goto label_50f2f4;
        case 0x50f2f8u: goto label_50f2f8;
        case 0x50f2fcu: goto label_50f2fc;
        case 0x50f300u: goto label_50f300;
        case 0x50f304u: goto label_50f304;
        case 0x50f308u: goto label_50f308;
        case 0x50f30cu: goto label_50f30c;
        case 0x50f310u: goto label_50f310;
        case 0x50f314u: goto label_50f314;
        case 0x50f318u: goto label_50f318;
        case 0x50f31cu: goto label_50f31c;
        case 0x50f320u: goto label_50f320;
        case 0x50f324u: goto label_50f324;
        case 0x50f328u: goto label_50f328;
        case 0x50f32cu: goto label_50f32c;
        case 0x50f330u: goto label_50f330;
        case 0x50f334u: goto label_50f334;
        case 0x50f338u: goto label_50f338;
        case 0x50f33cu: goto label_50f33c;
        case 0x50f340u: goto label_50f340;
        case 0x50f344u: goto label_50f344;
        case 0x50f348u: goto label_50f348;
        case 0x50f34cu: goto label_50f34c;
        case 0x50f350u: goto label_50f350;
        case 0x50f354u: goto label_50f354;
        case 0x50f358u: goto label_50f358;
        case 0x50f35cu: goto label_50f35c;
        case 0x50f360u: goto label_50f360;
        case 0x50f364u: goto label_50f364;
        case 0x50f368u: goto label_50f368;
        case 0x50f36cu: goto label_50f36c;
        case 0x50f370u: goto label_50f370;
        case 0x50f374u: goto label_50f374;
        case 0x50f378u: goto label_50f378;
        case 0x50f37cu: goto label_50f37c;
        case 0x50f380u: goto label_50f380;
        case 0x50f384u: goto label_50f384;
        case 0x50f388u: goto label_50f388;
        case 0x50f38cu: goto label_50f38c;
        case 0x50f390u: goto label_50f390;
        case 0x50f394u: goto label_50f394;
        case 0x50f398u: goto label_50f398;
        case 0x50f39cu: goto label_50f39c;
        case 0x50f3a0u: goto label_50f3a0;
        case 0x50f3a4u: goto label_50f3a4;
        case 0x50f3a8u: goto label_50f3a8;
        case 0x50f3acu: goto label_50f3ac;
        case 0x50f3b0u: goto label_50f3b0;
        case 0x50f3b4u: goto label_50f3b4;
        case 0x50f3b8u: goto label_50f3b8;
        case 0x50f3bcu: goto label_50f3bc;
        case 0x50f3c0u: goto label_50f3c0;
        case 0x50f3c4u: goto label_50f3c4;
        case 0x50f3c8u: goto label_50f3c8;
        case 0x50f3ccu: goto label_50f3cc;
        case 0x50f3d0u: goto label_50f3d0;
        case 0x50f3d4u: goto label_50f3d4;
        case 0x50f3d8u: goto label_50f3d8;
        case 0x50f3dcu: goto label_50f3dc;
        case 0x50f3e0u: goto label_50f3e0;
        case 0x50f3e4u: goto label_50f3e4;
        case 0x50f3e8u: goto label_50f3e8;
        case 0x50f3ecu: goto label_50f3ec;
        case 0x50f3f0u: goto label_50f3f0;
        case 0x50f3f4u: goto label_50f3f4;
        case 0x50f3f8u: goto label_50f3f8;
        case 0x50f3fcu: goto label_50f3fc;
        case 0x50f400u: goto label_50f400;
        case 0x50f404u: goto label_50f404;
        case 0x50f408u: goto label_50f408;
        case 0x50f40cu: goto label_50f40c;
        case 0x50f410u: goto label_50f410;
        case 0x50f414u: goto label_50f414;
        case 0x50f418u: goto label_50f418;
        case 0x50f41cu: goto label_50f41c;
        case 0x50f420u: goto label_50f420;
        case 0x50f424u: goto label_50f424;
        case 0x50f428u: goto label_50f428;
        case 0x50f42cu: goto label_50f42c;
        case 0x50f430u: goto label_50f430;
        case 0x50f434u: goto label_50f434;
        case 0x50f438u: goto label_50f438;
        case 0x50f43cu: goto label_50f43c;
        case 0x50f440u: goto label_50f440;
        case 0x50f444u: goto label_50f444;
        case 0x50f448u: goto label_50f448;
        case 0x50f44cu: goto label_50f44c;
        case 0x50f450u: goto label_50f450;
        case 0x50f454u: goto label_50f454;
        case 0x50f458u: goto label_50f458;
        case 0x50f45cu: goto label_50f45c;
        case 0x50f460u: goto label_50f460;
        case 0x50f464u: goto label_50f464;
        case 0x50f468u: goto label_50f468;
        case 0x50f46cu: goto label_50f46c;
        case 0x50f470u: goto label_50f470;
        case 0x50f474u: goto label_50f474;
        case 0x50f478u: goto label_50f478;
        case 0x50f47cu: goto label_50f47c;
        case 0x50f480u: goto label_50f480;
        case 0x50f484u: goto label_50f484;
        case 0x50f488u: goto label_50f488;
        case 0x50f48cu: goto label_50f48c;
        case 0x50f490u: goto label_50f490;
        case 0x50f494u: goto label_50f494;
        case 0x50f498u: goto label_50f498;
        case 0x50f49cu: goto label_50f49c;
        case 0x50f4a0u: goto label_50f4a0;
        case 0x50f4a4u: goto label_50f4a4;
        case 0x50f4a8u: goto label_50f4a8;
        case 0x50f4acu: goto label_50f4ac;
        case 0x50f4b0u: goto label_50f4b0;
        case 0x50f4b4u: goto label_50f4b4;
        case 0x50f4b8u: goto label_50f4b8;
        case 0x50f4bcu: goto label_50f4bc;
        case 0x50f4c0u: goto label_50f4c0;
        case 0x50f4c4u: goto label_50f4c4;
        case 0x50f4c8u: goto label_50f4c8;
        case 0x50f4ccu: goto label_50f4cc;
        case 0x50f4d0u: goto label_50f4d0;
        case 0x50f4d4u: goto label_50f4d4;
        case 0x50f4d8u: goto label_50f4d8;
        case 0x50f4dcu: goto label_50f4dc;
        case 0x50f4e0u: goto label_50f4e0;
        case 0x50f4e4u: goto label_50f4e4;
        case 0x50f4e8u: goto label_50f4e8;
        case 0x50f4ecu: goto label_50f4ec;
        case 0x50f4f0u: goto label_50f4f0;
        case 0x50f4f4u: goto label_50f4f4;
        case 0x50f4f8u: goto label_50f4f8;
        case 0x50f4fcu: goto label_50f4fc;
        case 0x50f500u: goto label_50f500;
        case 0x50f504u: goto label_50f504;
        case 0x50f508u: goto label_50f508;
        case 0x50f50cu: goto label_50f50c;
        case 0x50f510u: goto label_50f510;
        case 0x50f514u: goto label_50f514;
        case 0x50f518u: goto label_50f518;
        case 0x50f51cu: goto label_50f51c;
        case 0x50f520u: goto label_50f520;
        case 0x50f524u: goto label_50f524;
        case 0x50f528u: goto label_50f528;
        case 0x50f52cu: goto label_50f52c;
        case 0x50f530u: goto label_50f530;
        case 0x50f534u: goto label_50f534;
        case 0x50f538u: goto label_50f538;
        case 0x50f53cu: goto label_50f53c;
        case 0x50f540u: goto label_50f540;
        case 0x50f544u: goto label_50f544;
        case 0x50f548u: goto label_50f548;
        case 0x50f54cu: goto label_50f54c;
        case 0x50f550u: goto label_50f550;
        case 0x50f554u: goto label_50f554;
        case 0x50f558u: goto label_50f558;
        case 0x50f55cu: goto label_50f55c;
        case 0x50f560u: goto label_50f560;
        case 0x50f564u: goto label_50f564;
        case 0x50f568u: goto label_50f568;
        case 0x50f56cu: goto label_50f56c;
        case 0x50f570u: goto label_50f570;
        case 0x50f574u: goto label_50f574;
        case 0x50f578u: goto label_50f578;
        case 0x50f57cu: goto label_50f57c;
        case 0x50f580u: goto label_50f580;
        case 0x50f584u: goto label_50f584;
        case 0x50f588u: goto label_50f588;
        case 0x50f58cu: goto label_50f58c;
        case 0x50f590u: goto label_50f590;
        case 0x50f594u: goto label_50f594;
        case 0x50f598u: goto label_50f598;
        case 0x50f59cu: goto label_50f59c;
        case 0x50f5a0u: goto label_50f5a0;
        case 0x50f5a4u: goto label_50f5a4;
        case 0x50f5a8u: goto label_50f5a8;
        case 0x50f5acu: goto label_50f5ac;
        case 0x50f5b0u: goto label_50f5b0;
        case 0x50f5b4u: goto label_50f5b4;
        case 0x50f5b8u: goto label_50f5b8;
        case 0x50f5bcu: goto label_50f5bc;
        case 0x50f5c0u: goto label_50f5c0;
        case 0x50f5c4u: goto label_50f5c4;
        case 0x50f5c8u: goto label_50f5c8;
        case 0x50f5ccu: goto label_50f5cc;
        case 0x50f5d0u: goto label_50f5d0;
        case 0x50f5d4u: goto label_50f5d4;
        case 0x50f5d8u: goto label_50f5d8;
        case 0x50f5dcu: goto label_50f5dc;
        case 0x50f5e0u: goto label_50f5e0;
        case 0x50f5e4u: goto label_50f5e4;
        case 0x50f5e8u: goto label_50f5e8;
        case 0x50f5ecu: goto label_50f5ec;
        case 0x50f5f0u: goto label_50f5f0;
        case 0x50f5f4u: goto label_50f5f4;
        case 0x50f5f8u: goto label_50f5f8;
        case 0x50f5fcu: goto label_50f5fc;
        case 0x50f600u: goto label_50f600;
        case 0x50f604u: goto label_50f604;
        case 0x50f608u: goto label_50f608;
        case 0x50f60cu: goto label_50f60c;
        case 0x50f610u: goto label_50f610;
        case 0x50f614u: goto label_50f614;
        case 0x50f618u: goto label_50f618;
        case 0x50f61cu: goto label_50f61c;
        case 0x50f620u: goto label_50f620;
        case 0x50f624u: goto label_50f624;
        case 0x50f628u: goto label_50f628;
        case 0x50f62cu: goto label_50f62c;
        case 0x50f630u: goto label_50f630;
        case 0x50f634u: goto label_50f634;
        case 0x50f638u: goto label_50f638;
        case 0x50f63cu: goto label_50f63c;
        case 0x50f640u: goto label_50f640;
        case 0x50f644u: goto label_50f644;
        case 0x50f648u: goto label_50f648;
        case 0x50f64cu: goto label_50f64c;
        case 0x50f650u: goto label_50f650;
        case 0x50f654u: goto label_50f654;
        case 0x50f658u: goto label_50f658;
        case 0x50f65cu: goto label_50f65c;
        case 0x50f660u: goto label_50f660;
        case 0x50f664u: goto label_50f664;
        case 0x50f668u: goto label_50f668;
        case 0x50f66cu: goto label_50f66c;
        case 0x50f670u: goto label_50f670;
        case 0x50f674u: goto label_50f674;
        case 0x50f678u: goto label_50f678;
        case 0x50f67cu: goto label_50f67c;
        case 0x50f680u: goto label_50f680;
        case 0x50f684u: goto label_50f684;
        case 0x50f688u: goto label_50f688;
        case 0x50f68cu: goto label_50f68c;
        case 0x50f690u: goto label_50f690;
        case 0x50f694u: goto label_50f694;
        case 0x50f698u: goto label_50f698;
        case 0x50f69cu: goto label_50f69c;
        case 0x50f6a0u: goto label_50f6a0;
        case 0x50f6a4u: goto label_50f6a4;
        case 0x50f6a8u: goto label_50f6a8;
        case 0x50f6acu: goto label_50f6ac;
        case 0x50f6b0u: goto label_50f6b0;
        case 0x50f6b4u: goto label_50f6b4;
        case 0x50f6b8u: goto label_50f6b8;
        case 0x50f6bcu: goto label_50f6bc;
        case 0x50f6c0u: goto label_50f6c0;
        case 0x50f6c4u: goto label_50f6c4;
        case 0x50f6c8u: goto label_50f6c8;
        case 0x50f6ccu: goto label_50f6cc;
        case 0x50f6d0u: goto label_50f6d0;
        case 0x50f6d4u: goto label_50f6d4;
        case 0x50f6d8u: goto label_50f6d8;
        case 0x50f6dcu: goto label_50f6dc;
        case 0x50f6e0u: goto label_50f6e0;
        case 0x50f6e4u: goto label_50f6e4;
        case 0x50f6e8u: goto label_50f6e8;
        case 0x50f6ecu: goto label_50f6ec;
        case 0x50f6f0u: goto label_50f6f0;
        case 0x50f6f4u: goto label_50f6f4;
        case 0x50f6f8u: goto label_50f6f8;
        case 0x50f6fcu: goto label_50f6fc;
        case 0x50f700u: goto label_50f700;
        case 0x50f704u: goto label_50f704;
        case 0x50f708u: goto label_50f708;
        case 0x50f70cu: goto label_50f70c;
        case 0x50f710u: goto label_50f710;
        case 0x50f714u: goto label_50f714;
        case 0x50f718u: goto label_50f718;
        case 0x50f71cu: goto label_50f71c;
        case 0x50f720u: goto label_50f720;
        case 0x50f724u: goto label_50f724;
        case 0x50f728u: goto label_50f728;
        case 0x50f72cu: goto label_50f72c;
        case 0x50f730u: goto label_50f730;
        case 0x50f734u: goto label_50f734;
        case 0x50f738u: goto label_50f738;
        case 0x50f73cu: goto label_50f73c;
        case 0x50f740u: goto label_50f740;
        case 0x50f744u: goto label_50f744;
        case 0x50f748u: goto label_50f748;
        case 0x50f74cu: goto label_50f74c;
        case 0x50f750u: goto label_50f750;
        case 0x50f754u: goto label_50f754;
        case 0x50f758u: goto label_50f758;
        case 0x50f75cu: goto label_50f75c;
        case 0x50f760u: goto label_50f760;
        case 0x50f764u: goto label_50f764;
        case 0x50f768u: goto label_50f768;
        case 0x50f76cu: goto label_50f76c;
        case 0x50f770u: goto label_50f770;
        case 0x50f774u: goto label_50f774;
        case 0x50f778u: goto label_50f778;
        case 0x50f77cu: goto label_50f77c;
        case 0x50f780u: goto label_50f780;
        case 0x50f784u: goto label_50f784;
        case 0x50f788u: goto label_50f788;
        case 0x50f78cu: goto label_50f78c;
        case 0x50f790u: goto label_50f790;
        case 0x50f794u: goto label_50f794;
        case 0x50f798u: goto label_50f798;
        case 0x50f79cu: goto label_50f79c;
        case 0x50f7a0u: goto label_50f7a0;
        case 0x50f7a4u: goto label_50f7a4;
        case 0x50f7a8u: goto label_50f7a8;
        case 0x50f7acu: goto label_50f7ac;
        case 0x50f7b0u: goto label_50f7b0;
        case 0x50f7b4u: goto label_50f7b4;
        case 0x50f7b8u: goto label_50f7b8;
        case 0x50f7bcu: goto label_50f7bc;
        case 0x50f7c0u: goto label_50f7c0;
        case 0x50f7c4u: goto label_50f7c4;
        case 0x50f7c8u: goto label_50f7c8;
        case 0x50f7ccu: goto label_50f7cc;
        case 0x50f7d0u: goto label_50f7d0;
        case 0x50f7d4u: goto label_50f7d4;
        case 0x50f7d8u: goto label_50f7d8;
        case 0x50f7dcu: goto label_50f7dc;
        case 0x50f7e0u: goto label_50f7e0;
        case 0x50f7e4u: goto label_50f7e4;
        case 0x50f7e8u: goto label_50f7e8;
        case 0x50f7ecu: goto label_50f7ec;
        case 0x50f7f0u: goto label_50f7f0;
        case 0x50f7f4u: goto label_50f7f4;
        case 0x50f7f8u: goto label_50f7f8;
        case 0x50f7fcu: goto label_50f7fc;
        case 0x50f800u: goto label_50f800;
        case 0x50f804u: goto label_50f804;
        case 0x50f808u: goto label_50f808;
        case 0x50f80cu: goto label_50f80c;
        case 0x50f810u: goto label_50f810;
        case 0x50f814u: goto label_50f814;
        case 0x50f818u: goto label_50f818;
        case 0x50f81cu: goto label_50f81c;
        case 0x50f820u: goto label_50f820;
        case 0x50f824u: goto label_50f824;
        case 0x50f828u: goto label_50f828;
        case 0x50f82cu: goto label_50f82c;
        case 0x50f830u: goto label_50f830;
        case 0x50f834u: goto label_50f834;
        case 0x50f838u: goto label_50f838;
        case 0x50f83cu: goto label_50f83c;
        case 0x50f840u: goto label_50f840;
        case 0x50f844u: goto label_50f844;
        case 0x50f848u: goto label_50f848;
        case 0x50f84cu: goto label_50f84c;
        case 0x50f850u: goto label_50f850;
        case 0x50f854u: goto label_50f854;
        case 0x50f858u: goto label_50f858;
        case 0x50f85cu: goto label_50f85c;
        case 0x50f860u: goto label_50f860;
        case 0x50f864u: goto label_50f864;
        case 0x50f868u: goto label_50f868;
        case 0x50f86cu: goto label_50f86c;
        case 0x50f870u: goto label_50f870;
        case 0x50f874u: goto label_50f874;
        case 0x50f878u: goto label_50f878;
        case 0x50f87cu: goto label_50f87c;
        case 0x50f880u: goto label_50f880;
        case 0x50f884u: goto label_50f884;
        case 0x50f888u: goto label_50f888;
        case 0x50f88cu: goto label_50f88c;
        case 0x50f890u: goto label_50f890;
        case 0x50f894u: goto label_50f894;
        case 0x50f898u: goto label_50f898;
        case 0x50f89cu: goto label_50f89c;
        case 0x50f8a0u: goto label_50f8a0;
        case 0x50f8a4u: goto label_50f8a4;
        case 0x50f8a8u: goto label_50f8a8;
        case 0x50f8acu: goto label_50f8ac;
        case 0x50f8b0u: goto label_50f8b0;
        case 0x50f8b4u: goto label_50f8b4;
        case 0x50f8b8u: goto label_50f8b8;
        case 0x50f8bcu: goto label_50f8bc;
        case 0x50f8c0u: goto label_50f8c0;
        case 0x50f8c4u: goto label_50f8c4;
        case 0x50f8c8u: goto label_50f8c8;
        case 0x50f8ccu: goto label_50f8cc;
        case 0x50f8d0u: goto label_50f8d0;
        case 0x50f8d4u: goto label_50f8d4;
        case 0x50f8d8u: goto label_50f8d8;
        case 0x50f8dcu: goto label_50f8dc;
        case 0x50f8e0u: goto label_50f8e0;
        case 0x50f8e4u: goto label_50f8e4;
        case 0x50f8e8u: goto label_50f8e8;
        case 0x50f8ecu: goto label_50f8ec;
        case 0x50f8f0u: goto label_50f8f0;
        case 0x50f8f4u: goto label_50f8f4;
        case 0x50f8f8u: goto label_50f8f8;
        case 0x50f8fcu: goto label_50f8fc;
        case 0x50f900u: goto label_50f900;
        case 0x50f904u: goto label_50f904;
        case 0x50f908u: goto label_50f908;
        case 0x50f90cu: goto label_50f90c;
        case 0x50f910u: goto label_50f910;
        case 0x50f914u: goto label_50f914;
        case 0x50f918u: goto label_50f918;
        case 0x50f91cu: goto label_50f91c;
        case 0x50f920u: goto label_50f920;
        case 0x50f924u: goto label_50f924;
        case 0x50f928u: goto label_50f928;
        case 0x50f92cu: goto label_50f92c;
        case 0x50f930u: goto label_50f930;
        case 0x50f934u: goto label_50f934;
        case 0x50f938u: goto label_50f938;
        case 0x50f93cu: goto label_50f93c;
        case 0x50f940u: goto label_50f940;
        case 0x50f944u: goto label_50f944;
        case 0x50f948u: goto label_50f948;
        case 0x50f94cu: goto label_50f94c;
        case 0x50f950u: goto label_50f950;
        case 0x50f954u: goto label_50f954;
        case 0x50f958u: goto label_50f958;
        case 0x50f95cu: goto label_50f95c;
        case 0x50f960u: goto label_50f960;
        case 0x50f964u: goto label_50f964;
        case 0x50f968u: goto label_50f968;
        case 0x50f96cu: goto label_50f96c;
        case 0x50f970u: goto label_50f970;
        case 0x50f974u: goto label_50f974;
        case 0x50f978u: goto label_50f978;
        case 0x50f97cu: goto label_50f97c;
        case 0x50f980u: goto label_50f980;
        case 0x50f984u: goto label_50f984;
        case 0x50f988u: goto label_50f988;
        case 0x50f98cu: goto label_50f98c;
        case 0x50f990u: goto label_50f990;
        case 0x50f994u: goto label_50f994;
        case 0x50f998u: goto label_50f998;
        case 0x50f99cu: goto label_50f99c;
        case 0x50f9a0u: goto label_50f9a0;
        case 0x50f9a4u: goto label_50f9a4;
        case 0x50f9a8u: goto label_50f9a8;
        case 0x50f9acu: goto label_50f9ac;
        case 0x50f9b0u: goto label_50f9b0;
        case 0x50f9b4u: goto label_50f9b4;
        case 0x50f9b8u: goto label_50f9b8;
        case 0x50f9bcu: goto label_50f9bc;
        case 0x50f9c0u: goto label_50f9c0;
        case 0x50f9c4u: goto label_50f9c4;
        case 0x50f9c8u: goto label_50f9c8;
        case 0x50f9ccu: goto label_50f9cc;
        case 0x50f9d0u: goto label_50f9d0;
        case 0x50f9d4u: goto label_50f9d4;
        case 0x50f9d8u: goto label_50f9d8;
        case 0x50f9dcu: goto label_50f9dc;
        case 0x50f9e0u: goto label_50f9e0;
        case 0x50f9e4u: goto label_50f9e4;
        case 0x50f9e8u: goto label_50f9e8;
        case 0x50f9ecu: goto label_50f9ec;
        case 0x50f9f0u: goto label_50f9f0;
        case 0x50f9f4u: goto label_50f9f4;
        case 0x50f9f8u: goto label_50f9f8;
        case 0x50f9fcu: goto label_50f9fc;
        case 0x50fa00u: goto label_50fa00;
        case 0x50fa04u: goto label_50fa04;
        case 0x50fa08u: goto label_50fa08;
        case 0x50fa0cu: goto label_50fa0c;
        case 0x50fa10u: goto label_50fa10;
        case 0x50fa14u: goto label_50fa14;
        case 0x50fa18u: goto label_50fa18;
        case 0x50fa1cu: goto label_50fa1c;
        case 0x50fa20u: goto label_50fa20;
        case 0x50fa24u: goto label_50fa24;
        case 0x50fa28u: goto label_50fa28;
        case 0x50fa2cu: goto label_50fa2c;
        case 0x50fa30u: goto label_50fa30;
        case 0x50fa34u: goto label_50fa34;
        case 0x50fa38u: goto label_50fa38;
        case 0x50fa3cu: goto label_50fa3c;
        case 0x50fa40u: goto label_50fa40;
        case 0x50fa44u: goto label_50fa44;
        case 0x50fa48u: goto label_50fa48;
        case 0x50fa4cu: goto label_50fa4c;
        case 0x50fa50u: goto label_50fa50;
        case 0x50fa54u: goto label_50fa54;
        case 0x50fa58u: goto label_50fa58;
        case 0x50fa5cu: goto label_50fa5c;
        case 0x50fa60u: goto label_50fa60;
        case 0x50fa64u: goto label_50fa64;
        case 0x50fa68u: goto label_50fa68;
        case 0x50fa6cu: goto label_50fa6c;
        case 0x50fa70u: goto label_50fa70;
        case 0x50fa74u: goto label_50fa74;
        case 0x50fa78u: goto label_50fa78;
        case 0x50fa7cu: goto label_50fa7c;
        case 0x50fa80u: goto label_50fa80;
        case 0x50fa84u: goto label_50fa84;
        case 0x50fa88u: goto label_50fa88;
        case 0x50fa8cu: goto label_50fa8c;
        case 0x50fa90u: goto label_50fa90;
        case 0x50fa94u: goto label_50fa94;
        case 0x50fa98u: goto label_50fa98;
        case 0x50fa9cu: goto label_50fa9c;
        case 0x50faa0u: goto label_50faa0;
        case 0x50faa4u: goto label_50faa4;
        case 0x50faa8u: goto label_50faa8;
        case 0x50faacu: goto label_50faac;
        case 0x50fab0u: goto label_50fab0;
        case 0x50fab4u: goto label_50fab4;
        case 0x50fab8u: goto label_50fab8;
        case 0x50fabcu: goto label_50fabc;
        case 0x50fac0u: goto label_50fac0;
        case 0x50fac4u: goto label_50fac4;
        case 0x50fac8u: goto label_50fac8;
        case 0x50faccu: goto label_50facc;
        case 0x50fad0u: goto label_50fad0;
        case 0x50fad4u: goto label_50fad4;
        case 0x50fad8u: goto label_50fad8;
        case 0x50fadcu: goto label_50fadc;
        case 0x50fae0u: goto label_50fae0;
        case 0x50fae4u: goto label_50fae4;
        case 0x50fae8u: goto label_50fae8;
        case 0x50faecu: goto label_50faec;
        case 0x50faf0u: goto label_50faf0;
        case 0x50faf4u: goto label_50faf4;
        case 0x50faf8u: goto label_50faf8;
        case 0x50fafcu: goto label_50fafc;
        case 0x50fb00u: goto label_50fb00;
        case 0x50fb04u: goto label_50fb04;
        case 0x50fb08u: goto label_50fb08;
        case 0x50fb0cu: goto label_50fb0c;
        case 0x50fb10u: goto label_50fb10;
        case 0x50fb14u: goto label_50fb14;
        case 0x50fb18u: goto label_50fb18;
        case 0x50fb1cu: goto label_50fb1c;
        case 0x50fb20u: goto label_50fb20;
        case 0x50fb24u: goto label_50fb24;
        case 0x50fb28u: goto label_50fb28;
        case 0x50fb2cu: goto label_50fb2c;
        case 0x50fb30u: goto label_50fb30;
        case 0x50fb34u: goto label_50fb34;
        case 0x50fb38u: goto label_50fb38;
        case 0x50fb3cu: goto label_50fb3c;
        case 0x50fb40u: goto label_50fb40;
        case 0x50fb44u: goto label_50fb44;
        case 0x50fb48u: goto label_50fb48;
        case 0x50fb4cu: goto label_50fb4c;
        case 0x50fb50u: goto label_50fb50;
        case 0x50fb54u: goto label_50fb54;
        case 0x50fb58u: goto label_50fb58;
        case 0x50fb5cu: goto label_50fb5c;
        case 0x50fb60u: goto label_50fb60;
        case 0x50fb64u: goto label_50fb64;
        case 0x50fb68u: goto label_50fb68;
        case 0x50fb6cu: goto label_50fb6c;
        case 0x50fb70u: goto label_50fb70;
        case 0x50fb74u: goto label_50fb74;
        case 0x50fb78u: goto label_50fb78;
        case 0x50fb7cu: goto label_50fb7c;
        case 0x50fb80u: goto label_50fb80;
        case 0x50fb84u: goto label_50fb84;
        case 0x50fb88u: goto label_50fb88;
        case 0x50fb8cu: goto label_50fb8c;
        case 0x50fb90u: goto label_50fb90;
        case 0x50fb94u: goto label_50fb94;
        case 0x50fb98u: goto label_50fb98;
        case 0x50fb9cu: goto label_50fb9c;
        case 0x50fba0u: goto label_50fba0;
        case 0x50fba4u: goto label_50fba4;
        case 0x50fba8u: goto label_50fba8;
        case 0x50fbacu: goto label_50fbac;
        case 0x50fbb0u: goto label_50fbb0;
        case 0x50fbb4u: goto label_50fbb4;
        case 0x50fbb8u: goto label_50fbb8;
        case 0x50fbbcu: goto label_50fbbc;
        case 0x50fbc0u: goto label_50fbc0;
        case 0x50fbc4u: goto label_50fbc4;
        case 0x50fbc8u: goto label_50fbc8;
        case 0x50fbccu: goto label_50fbcc;
        case 0x50fbd0u: goto label_50fbd0;
        case 0x50fbd4u: goto label_50fbd4;
        case 0x50fbd8u: goto label_50fbd8;
        case 0x50fbdcu: goto label_50fbdc;
        case 0x50fbe0u: goto label_50fbe0;
        case 0x50fbe4u: goto label_50fbe4;
        case 0x50fbe8u: goto label_50fbe8;
        case 0x50fbecu: goto label_50fbec;
        case 0x50fbf0u: goto label_50fbf0;
        case 0x50fbf4u: goto label_50fbf4;
        case 0x50fbf8u: goto label_50fbf8;
        case 0x50fbfcu: goto label_50fbfc;
        case 0x50fc00u: goto label_50fc00;
        case 0x50fc04u: goto label_50fc04;
        case 0x50fc08u: goto label_50fc08;
        case 0x50fc0cu: goto label_50fc0c;
        case 0x50fc10u: goto label_50fc10;
        case 0x50fc14u: goto label_50fc14;
        case 0x50fc18u: goto label_50fc18;
        case 0x50fc1cu: goto label_50fc1c;
        case 0x50fc20u: goto label_50fc20;
        case 0x50fc24u: goto label_50fc24;
        case 0x50fc28u: goto label_50fc28;
        case 0x50fc2cu: goto label_50fc2c;
        case 0x50fc30u: goto label_50fc30;
        case 0x50fc34u: goto label_50fc34;
        case 0x50fc38u: goto label_50fc38;
        case 0x50fc3cu: goto label_50fc3c;
        case 0x50fc40u: goto label_50fc40;
        case 0x50fc44u: goto label_50fc44;
        case 0x50fc48u: goto label_50fc48;
        case 0x50fc4cu: goto label_50fc4c;
        case 0x50fc50u: goto label_50fc50;
        case 0x50fc54u: goto label_50fc54;
        case 0x50fc58u: goto label_50fc58;
        case 0x50fc5cu: goto label_50fc5c;
        case 0x50fc60u: goto label_50fc60;
        case 0x50fc64u: goto label_50fc64;
        case 0x50fc68u: goto label_50fc68;
        case 0x50fc6cu: goto label_50fc6c;
        case 0x50fc70u: goto label_50fc70;
        case 0x50fc74u: goto label_50fc74;
        case 0x50fc78u: goto label_50fc78;
        case 0x50fc7cu: goto label_50fc7c;
        case 0x50fc80u: goto label_50fc80;
        case 0x50fc84u: goto label_50fc84;
        case 0x50fc88u: goto label_50fc88;
        case 0x50fc8cu: goto label_50fc8c;
        case 0x50fc90u: goto label_50fc90;
        case 0x50fc94u: goto label_50fc94;
        case 0x50fc98u: goto label_50fc98;
        case 0x50fc9cu: goto label_50fc9c;
        case 0x50fca0u: goto label_50fca0;
        case 0x50fca4u: goto label_50fca4;
        case 0x50fca8u: goto label_50fca8;
        case 0x50fcacu: goto label_50fcac;
        case 0x50fcb0u: goto label_50fcb0;
        case 0x50fcb4u: goto label_50fcb4;
        case 0x50fcb8u: goto label_50fcb8;
        case 0x50fcbcu: goto label_50fcbc;
        case 0x50fcc0u: goto label_50fcc0;
        case 0x50fcc4u: goto label_50fcc4;
        case 0x50fcc8u: goto label_50fcc8;
        case 0x50fcccu: goto label_50fccc;
        case 0x50fcd0u: goto label_50fcd0;
        case 0x50fcd4u: goto label_50fcd4;
        case 0x50fcd8u: goto label_50fcd8;
        case 0x50fcdcu: goto label_50fcdc;
        case 0x50fce0u: goto label_50fce0;
        case 0x50fce4u: goto label_50fce4;
        case 0x50fce8u: goto label_50fce8;
        case 0x50fcecu: goto label_50fcec;
        case 0x50fcf0u: goto label_50fcf0;
        case 0x50fcf4u: goto label_50fcf4;
        case 0x50fcf8u: goto label_50fcf8;
        case 0x50fcfcu: goto label_50fcfc;
        case 0x50fd00u: goto label_50fd00;
        case 0x50fd04u: goto label_50fd04;
        case 0x50fd08u: goto label_50fd08;
        case 0x50fd0cu: goto label_50fd0c;
        case 0x50fd10u: goto label_50fd10;
        case 0x50fd14u: goto label_50fd14;
        case 0x50fd18u: goto label_50fd18;
        case 0x50fd1cu: goto label_50fd1c;
        case 0x50fd20u: goto label_50fd20;
        case 0x50fd24u: goto label_50fd24;
        case 0x50fd28u: goto label_50fd28;
        case 0x50fd2cu: goto label_50fd2c;
        case 0x50fd30u: goto label_50fd30;
        case 0x50fd34u: goto label_50fd34;
        case 0x50fd38u: goto label_50fd38;
        case 0x50fd3cu: goto label_50fd3c;
        case 0x50fd40u: goto label_50fd40;
        case 0x50fd44u: goto label_50fd44;
        case 0x50fd48u: goto label_50fd48;
        case 0x50fd4cu: goto label_50fd4c;
        case 0x50fd50u: goto label_50fd50;
        case 0x50fd54u: goto label_50fd54;
        case 0x50fd58u: goto label_50fd58;
        case 0x50fd5cu: goto label_50fd5c;
        case 0x50fd60u: goto label_50fd60;
        case 0x50fd64u: goto label_50fd64;
        case 0x50fd68u: goto label_50fd68;
        case 0x50fd6cu: goto label_50fd6c;
        case 0x50fd70u: goto label_50fd70;
        case 0x50fd74u: goto label_50fd74;
        case 0x50fd78u: goto label_50fd78;
        case 0x50fd7cu: goto label_50fd7c;
        case 0x50fd80u: goto label_50fd80;
        case 0x50fd84u: goto label_50fd84;
        case 0x50fd88u: goto label_50fd88;
        case 0x50fd8cu: goto label_50fd8c;
        case 0x50fd90u: goto label_50fd90;
        case 0x50fd94u: goto label_50fd94;
        case 0x50fd98u: goto label_50fd98;
        case 0x50fd9cu: goto label_50fd9c;
        case 0x50fda0u: goto label_50fda0;
        case 0x50fda4u: goto label_50fda4;
        case 0x50fda8u: goto label_50fda8;
        case 0x50fdacu: goto label_50fdac;
        case 0x50fdb0u: goto label_50fdb0;
        case 0x50fdb4u: goto label_50fdb4;
        case 0x50fdb8u: goto label_50fdb8;
        case 0x50fdbcu: goto label_50fdbc;
        case 0x50fdc0u: goto label_50fdc0;
        case 0x50fdc4u: goto label_50fdc4;
        case 0x50fdc8u: goto label_50fdc8;
        case 0x50fdccu: goto label_50fdcc;
        case 0x50fdd0u: goto label_50fdd0;
        case 0x50fdd4u: goto label_50fdd4;
        case 0x50fdd8u: goto label_50fdd8;
        case 0x50fddcu: goto label_50fddc;
        case 0x50fde0u: goto label_50fde0;
        case 0x50fde4u: goto label_50fde4;
        case 0x50fde8u: goto label_50fde8;
        case 0x50fdecu: goto label_50fdec;
        case 0x50fdf0u: goto label_50fdf0;
        case 0x50fdf4u: goto label_50fdf4;
        case 0x50fdf8u: goto label_50fdf8;
        case 0x50fdfcu: goto label_50fdfc;
        case 0x50fe00u: goto label_50fe00;
        case 0x50fe04u: goto label_50fe04;
        case 0x50fe08u: goto label_50fe08;
        case 0x50fe0cu: goto label_50fe0c;
        case 0x50fe10u: goto label_50fe10;
        case 0x50fe14u: goto label_50fe14;
        case 0x50fe18u: goto label_50fe18;
        case 0x50fe1cu: goto label_50fe1c;
        case 0x50fe20u: goto label_50fe20;
        case 0x50fe24u: goto label_50fe24;
        case 0x50fe28u: goto label_50fe28;
        case 0x50fe2cu: goto label_50fe2c;
        case 0x50fe30u: goto label_50fe30;
        case 0x50fe34u: goto label_50fe34;
        case 0x50fe38u: goto label_50fe38;
        case 0x50fe3cu: goto label_50fe3c;
        case 0x50fe40u: goto label_50fe40;
        case 0x50fe44u: goto label_50fe44;
        case 0x50fe48u: goto label_50fe48;
        case 0x50fe4cu: goto label_50fe4c;
        case 0x50fe50u: goto label_50fe50;
        case 0x50fe54u: goto label_50fe54;
        case 0x50fe58u: goto label_50fe58;
        case 0x50fe5cu: goto label_50fe5c;
        case 0x50fe60u: goto label_50fe60;
        case 0x50fe64u: goto label_50fe64;
        case 0x50fe68u: goto label_50fe68;
        case 0x50fe6cu: goto label_50fe6c;
        case 0x50fe70u: goto label_50fe70;
        case 0x50fe74u: goto label_50fe74;
        case 0x50fe78u: goto label_50fe78;
        case 0x50fe7cu: goto label_50fe7c;
        case 0x50fe80u: goto label_50fe80;
        case 0x50fe84u: goto label_50fe84;
        case 0x50fe88u: goto label_50fe88;
        case 0x50fe8cu: goto label_50fe8c;
        case 0x50fe90u: goto label_50fe90;
        case 0x50fe94u: goto label_50fe94;
        case 0x50fe98u: goto label_50fe98;
        case 0x50fe9cu: goto label_50fe9c;
        case 0x50fea0u: goto label_50fea0;
        case 0x50fea4u: goto label_50fea4;
        case 0x50fea8u: goto label_50fea8;
        case 0x50feacu: goto label_50feac;
        case 0x50feb0u: goto label_50feb0;
        case 0x50feb4u: goto label_50feb4;
        case 0x50feb8u: goto label_50feb8;
        case 0x50febcu: goto label_50febc;
        case 0x50fec0u: goto label_50fec0;
        case 0x50fec4u: goto label_50fec4;
        case 0x50fec8u: goto label_50fec8;
        case 0x50feccu: goto label_50fecc;
        case 0x50fed0u: goto label_50fed0;
        case 0x50fed4u: goto label_50fed4;
        case 0x50fed8u: goto label_50fed8;
        case 0x50fedcu: goto label_50fedc;
        case 0x50fee0u: goto label_50fee0;
        case 0x50fee4u: goto label_50fee4;
        case 0x50fee8u: goto label_50fee8;
        case 0x50feecu: goto label_50feec;
        case 0x50fef0u: goto label_50fef0;
        case 0x50fef4u: goto label_50fef4;
        case 0x50fef8u: goto label_50fef8;
        case 0x50fefcu: goto label_50fefc;
        case 0x50ff00u: goto label_50ff00;
        case 0x50ff04u: goto label_50ff04;
        case 0x50ff08u: goto label_50ff08;
        case 0x50ff0cu: goto label_50ff0c;
        case 0x50ff10u: goto label_50ff10;
        case 0x50ff14u: goto label_50ff14;
        case 0x50ff18u: goto label_50ff18;
        case 0x50ff1cu: goto label_50ff1c;
        case 0x50ff20u: goto label_50ff20;
        case 0x50ff24u: goto label_50ff24;
        case 0x50ff28u: goto label_50ff28;
        case 0x50ff2cu: goto label_50ff2c;
        case 0x50ff30u: goto label_50ff30;
        case 0x50ff34u: goto label_50ff34;
        case 0x50ff38u: goto label_50ff38;
        case 0x50ff3cu: goto label_50ff3c;
        case 0x50ff40u: goto label_50ff40;
        case 0x50ff44u: goto label_50ff44;
        case 0x50ff48u: goto label_50ff48;
        case 0x50ff4cu: goto label_50ff4c;
        case 0x50ff50u: goto label_50ff50;
        case 0x50ff54u: goto label_50ff54;
        case 0x50ff58u: goto label_50ff58;
        case 0x50ff5cu: goto label_50ff5c;
        case 0x50ff60u: goto label_50ff60;
        case 0x50ff64u: goto label_50ff64;
        case 0x50ff68u: goto label_50ff68;
        case 0x50ff6cu: goto label_50ff6c;
        case 0x50ff70u: goto label_50ff70;
        case 0x50ff74u: goto label_50ff74;
        case 0x50ff78u: goto label_50ff78;
        case 0x50ff7cu: goto label_50ff7c;
        case 0x50ff80u: goto label_50ff80;
        case 0x50ff84u: goto label_50ff84;
        case 0x50ff88u: goto label_50ff88;
        case 0x50ff8cu: goto label_50ff8c;
        case 0x50ff90u: goto label_50ff90;
        case 0x50ff94u: goto label_50ff94;
        case 0x50ff98u: goto label_50ff98;
        case 0x50ff9cu: goto label_50ff9c;
        case 0x50ffa0u: goto label_50ffa0;
        case 0x50ffa4u: goto label_50ffa4;
        case 0x50ffa8u: goto label_50ffa8;
        case 0x50ffacu: goto label_50ffac;
        case 0x50ffb0u: goto label_50ffb0;
        case 0x50ffb4u: goto label_50ffb4;
        case 0x50ffb8u: goto label_50ffb8;
        case 0x50ffbcu: goto label_50ffbc;
        case 0x50ffc0u: goto label_50ffc0;
        case 0x50ffc4u: goto label_50ffc4;
        case 0x50ffc8u: goto label_50ffc8;
        case 0x50ffccu: goto label_50ffcc;
        case 0x50ffd0u: goto label_50ffd0;
        case 0x50ffd4u: goto label_50ffd4;
        case 0x50ffd8u: goto label_50ffd8;
        case 0x50ffdcu: goto label_50ffdc;
        case 0x50ffe0u: goto label_50ffe0;
        case 0x50ffe4u: goto label_50ffe4;
        case 0x50ffe8u: goto label_50ffe8;
        case 0x50ffecu: goto label_50ffec;
        case 0x50fff0u: goto label_50fff0;
        case 0x50fff4u: goto label_50fff4;
        case 0x50fff8u: goto label_50fff8;
        case 0x50fffcu: goto label_50fffc;
        case 0x510000u: goto label_510000;
        case 0x510004u: goto label_510004;
        case 0x510008u: goto label_510008;
        case 0x51000cu: goto label_51000c;
        case 0x510010u: goto label_510010;
        case 0x510014u: goto label_510014;
        case 0x510018u: goto label_510018;
        case 0x51001cu: goto label_51001c;
        case 0x510020u: goto label_510020;
        case 0x510024u: goto label_510024;
        case 0x510028u: goto label_510028;
        case 0x51002cu: goto label_51002c;
        case 0x510030u: goto label_510030;
        case 0x510034u: goto label_510034;
        case 0x510038u: goto label_510038;
        case 0x51003cu: goto label_51003c;
        case 0x510040u: goto label_510040;
        case 0x510044u: goto label_510044;
        case 0x510048u: goto label_510048;
        case 0x51004cu: goto label_51004c;
        case 0x510050u: goto label_510050;
        case 0x510054u: goto label_510054;
        case 0x510058u: goto label_510058;
        case 0x51005cu: goto label_51005c;
        case 0x510060u: goto label_510060;
        case 0x510064u: goto label_510064;
        case 0x510068u: goto label_510068;
        case 0x51006cu: goto label_51006c;
        case 0x510070u: goto label_510070;
        case 0x510074u: goto label_510074;
        case 0x510078u: goto label_510078;
        case 0x51007cu: goto label_51007c;
        case 0x510080u: goto label_510080;
        case 0x510084u: goto label_510084;
        case 0x510088u: goto label_510088;
        case 0x51008cu: goto label_51008c;
        case 0x510090u: goto label_510090;
        case 0x510094u: goto label_510094;
        case 0x510098u: goto label_510098;
        case 0x51009cu: goto label_51009c;
        case 0x5100a0u: goto label_5100a0;
        case 0x5100a4u: goto label_5100a4;
        case 0x5100a8u: goto label_5100a8;
        case 0x5100acu: goto label_5100ac;
        case 0x5100b0u: goto label_5100b0;
        case 0x5100b4u: goto label_5100b4;
        case 0x5100b8u: goto label_5100b8;
        case 0x5100bcu: goto label_5100bc;
        case 0x5100c0u: goto label_5100c0;
        case 0x5100c4u: goto label_5100c4;
        case 0x5100c8u: goto label_5100c8;
        case 0x5100ccu: goto label_5100cc;
        case 0x5100d0u: goto label_5100d0;
        case 0x5100d4u: goto label_5100d4;
        case 0x5100d8u: goto label_5100d8;
        case 0x5100dcu: goto label_5100dc;
        case 0x5100e0u: goto label_5100e0;
        case 0x5100e4u: goto label_5100e4;
        case 0x5100e8u: goto label_5100e8;
        case 0x5100ecu: goto label_5100ec;
        case 0x5100f0u: goto label_5100f0;
        case 0x5100f4u: goto label_5100f4;
        case 0x5100f8u: goto label_5100f8;
        case 0x5100fcu: goto label_5100fc;
        case 0x510100u: goto label_510100;
        case 0x510104u: goto label_510104;
        case 0x510108u: goto label_510108;
        case 0x51010cu: goto label_51010c;
        case 0x510110u: goto label_510110;
        case 0x510114u: goto label_510114;
        case 0x510118u: goto label_510118;
        case 0x51011cu: goto label_51011c;
        case 0x510120u: goto label_510120;
        case 0x510124u: goto label_510124;
        case 0x510128u: goto label_510128;
        case 0x51012cu: goto label_51012c;
        case 0x510130u: goto label_510130;
        case 0x510134u: goto label_510134;
        case 0x510138u: goto label_510138;
        case 0x51013cu: goto label_51013c;
        case 0x510140u: goto label_510140;
        case 0x510144u: goto label_510144;
        case 0x510148u: goto label_510148;
        case 0x51014cu: goto label_51014c;
        case 0x510150u: goto label_510150;
        case 0x510154u: goto label_510154;
        case 0x510158u: goto label_510158;
        case 0x51015cu: goto label_51015c;
        case 0x510160u: goto label_510160;
        case 0x510164u: goto label_510164;
        case 0x510168u: goto label_510168;
        case 0x51016cu: goto label_51016c;
        case 0x510170u: goto label_510170;
        case 0x510174u: goto label_510174;
        case 0x510178u: goto label_510178;
        case 0x51017cu: goto label_51017c;
        case 0x510180u: goto label_510180;
        case 0x510184u: goto label_510184;
        case 0x510188u: goto label_510188;
        case 0x51018cu: goto label_51018c;
        case 0x510190u: goto label_510190;
        case 0x510194u: goto label_510194;
        case 0x510198u: goto label_510198;
        case 0x51019cu: goto label_51019c;
        case 0x5101a0u: goto label_5101a0;
        case 0x5101a4u: goto label_5101a4;
        case 0x5101a8u: goto label_5101a8;
        case 0x5101acu: goto label_5101ac;
        case 0x5101b0u: goto label_5101b0;
        case 0x5101b4u: goto label_5101b4;
        case 0x5101b8u: goto label_5101b8;
        case 0x5101bcu: goto label_5101bc;
        case 0x5101c0u: goto label_5101c0;
        case 0x5101c4u: goto label_5101c4;
        case 0x5101c8u: goto label_5101c8;
        case 0x5101ccu: goto label_5101cc;
        case 0x5101d0u: goto label_5101d0;
        case 0x5101d4u: goto label_5101d4;
        case 0x5101d8u: goto label_5101d8;
        case 0x5101dcu: goto label_5101dc;
        case 0x5101e0u: goto label_5101e0;
        case 0x5101e4u: goto label_5101e4;
        case 0x5101e8u: goto label_5101e8;
        case 0x5101ecu: goto label_5101ec;
        case 0x5101f0u: goto label_5101f0;
        case 0x5101f4u: goto label_5101f4;
        case 0x5101f8u: goto label_5101f8;
        case 0x5101fcu: goto label_5101fc;
        case 0x510200u: goto label_510200;
        case 0x510204u: goto label_510204;
        case 0x510208u: goto label_510208;
        case 0x51020cu: goto label_51020c;
        case 0x510210u: goto label_510210;
        case 0x510214u: goto label_510214;
        case 0x510218u: goto label_510218;
        case 0x51021cu: goto label_51021c;
        case 0x510220u: goto label_510220;
        case 0x510224u: goto label_510224;
        case 0x510228u: goto label_510228;
        case 0x51022cu: goto label_51022c;
        case 0x510230u: goto label_510230;
        case 0x510234u: goto label_510234;
        case 0x510238u: goto label_510238;
        case 0x51023cu: goto label_51023c;
        case 0x510240u: goto label_510240;
        case 0x510244u: goto label_510244;
        case 0x510248u: goto label_510248;
        case 0x51024cu: goto label_51024c;
        case 0x510250u: goto label_510250;
        case 0x510254u: goto label_510254;
        case 0x510258u: goto label_510258;
        case 0x51025cu: goto label_51025c;
        case 0x510260u: goto label_510260;
        case 0x510264u: goto label_510264;
        case 0x510268u: goto label_510268;
        case 0x51026cu: goto label_51026c;
        case 0x510270u: goto label_510270;
        case 0x510274u: goto label_510274;
        case 0x510278u: goto label_510278;
        case 0x51027cu: goto label_51027c;
        case 0x510280u: goto label_510280;
        case 0x510284u: goto label_510284;
        case 0x510288u: goto label_510288;
        case 0x51028cu: goto label_51028c;
        case 0x510290u: goto label_510290;
        case 0x510294u: goto label_510294;
        case 0x510298u: goto label_510298;
        case 0x51029cu: goto label_51029c;
        case 0x5102a0u: goto label_5102a0;
        case 0x5102a4u: goto label_5102a4;
        case 0x5102a8u: goto label_5102a8;
        case 0x5102acu: goto label_5102ac;
        case 0x5102b0u: goto label_5102b0;
        case 0x5102b4u: goto label_5102b4;
        case 0x5102b8u: goto label_5102b8;
        case 0x5102bcu: goto label_5102bc;
        case 0x5102c0u: goto label_5102c0;
        case 0x5102c4u: goto label_5102c4;
        case 0x5102c8u: goto label_5102c8;
        case 0x5102ccu: goto label_5102cc;
        case 0x5102d0u: goto label_5102d0;
        case 0x5102d4u: goto label_5102d4;
        case 0x5102d8u: goto label_5102d8;
        case 0x5102dcu: goto label_5102dc;
        case 0x5102e0u: goto label_5102e0;
        case 0x5102e4u: goto label_5102e4;
        case 0x5102e8u: goto label_5102e8;
        case 0x5102ecu: goto label_5102ec;
        case 0x5102f0u: goto label_5102f0;
        case 0x5102f4u: goto label_5102f4;
        case 0x5102f8u: goto label_5102f8;
        case 0x5102fcu: goto label_5102fc;
        case 0x510300u: goto label_510300;
        case 0x510304u: goto label_510304;
        case 0x510308u: goto label_510308;
        case 0x51030cu: goto label_51030c;
        case 0x510310u: goto label_510310;
        case 0x510314u: goto label_510314;
        case 0x510318u: goto label_510318;
        case 0x51031cu: goto label_51031c;
        case 0x510320u: goto label_510320;
        case 0x510324u: goto label_510324;
        case 0x510328u: goto label_510328;
        case 0x51032cu: goto label_51032c;
        case 0x510330u: goto label_510330;
        case 0x510334u: goto label_510334;
        case 0x510338u: goto label_510338;
        case 0x51033cu: goto label_51033c;
        case 0x510340u: goto label_510340;
        case 0x510344u: goto label_510344;
        case 0x510348u: goto label_510348;
        case 0x51034cu: goto label_51034c;
        case 0x510350u: goto label_510350;
        case 0x510354u: goto label_510354;
        case 0x510358u: goto label_510358;
        case 0x51035cu: goto label_51035c;
        case 0x510360u: goto label_510360;
        case 0x510364u: goto label_510364;
        case 0x510368u: goto label_510368;
        case 0x51036cu: goto label_51036c;
        case 0x510370u: goto label_510370;
        case 0x510374u: goto label_510374;
        case 0x510378u: goto label_510378;
        case 0x51037cu: goto label_51037c;
        case 0x510380u: goto label_510380;
        case 0x510384u: goto label_510384;
        case 0x510388u: goto label_510388;
        case 0x51038cu: goto label_51038c;
        case 0x510390u: goto label_510390;
        case 0x510394u: goto label_510394;
        case 0x510398u: goto label_510398;
        case 0x51039cu: goto label_51039c;
        case 0x5103a0u: goto label_5103a0;
        case 0x5103a4u: goto label_5103a4;
        case 0x5103a8u: goto label_5103a8;
        case 0x5103acu: goto label_5103ac;
        case 0x5103b0u: goto label_5103b0;
        case 0x5103b4u: goto label_5103b4;
        case 0x5103b8u: goto label_5103b8;
        case 0x5103bcu: goto label_5103bc;
        case 0x5103c0u: goto label_5103c0;
        case 0x5103c4u: goto label_5103c4;
        case 0x5103c8u: goto label_5103c8;
        case 0x5103ccu: goto label_5103cc;
        case 0x5103d0u: goto label_5103d0;
        case 0x5103d4u: goto label_5103d4;
        case 0x5103d8u: goto label_5103d8;
        case 0x5103dcu: goto label_5103dc;
        case 0x5103e0u: goto label_5103e0;
        case 0x5103e4u: goto label_5103e4;
        case 0x5103e8u: goto label_5103e8;
        case 0x5103ecu: goto label_5103ec;
        case 0x5103f0u: goto label_5103f0;
        case 0x5103f4u: goto label_5103f4;
        case 0x5103f8u: goto label_5103f8;
        case 0x5103fcu: goto label_5103fc;
        case 0x510400u: goto label_510400;
        case 0x510404u: goto label_510404;
        case 0x510408u: goto label_510408;
        case 0x51040cu: goto label_51040c;
        case 0x510410u: goto label_510410;
        case 0x510414u: goto label_510414;
        case 0x510418u: goto label_510418;
        case 0x51041cu: goto label_51041c;
        case 0x510420u: goto label_510420;
        case 0x510424u: goto label_510424;
        case 0x510428u: goto label_510428;
        case 0x51042cu: goto label_51042c;
        default: break;
    }

    ctx->pc = 0x50ea40u;

label_50ea40:
    // 0x50ea40: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x50ea40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_50ea44:
    // 0x50ea44: 0xac830124  sw          $v1, 0x124($a0)
    ctx->pc = 0x50ea44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 292), GPR_U32(ctx, 3));
label_50ea48:
    // 0x50ea48: 0xac850128  sw          $a1, 0x128($a0)
    ctx->pc = 0x50ea48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 296), GPR_U32(ctx, 5));
label_50ea4c:
    // 0x50ea4c: 0xac860130  sw          $a2, 0x130($a0)
    ctx->pc = 0x50ea4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 304), GPR_U32(ctx, 6));
label_50ea50:
    // 0x50ea50: 0x3e00008  jr          $ra
label_50ea54:
    if (ctx->pc == 0x50EA54u) {
        ctx->pc = 0x50EA54u;
            // 0x50ea54: 0xac800134  sw          $zero, 0x134($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 308), GPR_U32(ctx, 0));
        ctx->pc = 0x50EA58u;
        goto label_50ea58;
    }
    ctx->pc = 0x50EA50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x50EA54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50EA50u;
            // 0x50ea54: 0xac800134  sw          $zero, 0x134($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 308), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x50EA58u;
label_50ea58:
    // 0x50ea58: 0x0  nop
    ctx->pc = 0x50ea58u;
    // NOP
label_50ea5c:
    // 0x50ea5c: 0x0  nop
    ctx->pc = 0x50ea5cu;
    // NOP
label_50ea60:
    // 0x50ea60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x50ea60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_50ea64:
    // 0x50ea64: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x50ea64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_50ea68:
    // 0x50ea68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x50ea68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_50ea6c:
    // 0x50ea6c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x50ea6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_50ea70:
    // 0x50ea70: 0xc072aaa  jal         func_1CAAA8
label_50ea74:
    if (ctx->pc == 0x50EA74u) {
        ctx->pc = 0x50EA74u;
            // 0x50ea74: 0x90840144  lbu         $a0, 0x144($a0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 324)));
        ctx->pc = 0x50EA78u;
        goto label_50ea78;
    }
    ctx->pc = 0x50EA70u;
    SET_GPR_U32(ctx, 31, 0x50EA78u);
    ctx->pc = 0x50EA74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50EA70u;
            // 0x50ea74: 0x90840144  lbu         $a0, 0x144($a0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 324)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CAAA8u;
    if (runtime->hasFunction(0x1CAAA8u)) {
        auto targetFn = runtime->lookupFunction(0x1CAAA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50EA78u; }
        if (ctx->pc != 0x50EA78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CAAA8_0x1caaa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50EA78u; }
        if (ctx->pc != 0x50EA78u) { return; }
    }
    ctx->pc = 0x50EA78u;
label_50ea78:
    // 0x50ea78: 0xae000148  sw          $zero, 0x148($s0)
    ctx->pc = 0x50ea78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 0));
label_50ea7c:
    // 0x50ea7c: 0x8e02012c  lw          $v0, 0x12C($s0)
    ctx->pc = 0x50ea7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
label_50ea80:
    // 0x50ea80: 0x440000b  bltz        $v0, . + 4 + (0xB << 2)
label_50ea84:
    if (ctx->pc == 0x50EA84u) {
        ctx->pc = 0x50EA88u;
        goto label_50ea88;
    }
    ctx->pc = 0x50EA80u;
    {
        const bool branch_taken_0x50ea80 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x50ea80) {
            ctx->pc = 0x50EAB0u;
            goto label_50eab0;
        }
    }
    ctx->pc = 0x50EA88u;
label_50ea88:
    // 0x50ea88: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x50ea88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_50ea8c:
    // 0x50ea8c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x50ea8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_50ea90:
    // 0x50ea90: 0x24420e84  addiu       $v0, $v0, 0xE84
    ctx->pc = 0x50ea90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3716));
label_50ea94:
    // 0x50ea94: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x50ea94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_50ea98:
    // 0x50ea98: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x50ea98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_50ea9c:
    // 0x50ea9c: 0x8c440d60  lw          $a0, 0xD60($v0)
    ctx->pc = 0x50ea9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3424)));
label_50eaa0:
    // 0x50eaa0: 0x8c990030  lw          $t9, 0x30($a0)
    ctx->pc = 0x50eaa0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_50eaa4:
    // 0x50eaa4: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x50eaa4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_50eaa8:
    // 0x50eaa8: 0x320f809  jalr        $t9
label_50eaac:
    if (ctx->pc == 0x50EAACu) {
        ctx->pc = 0x50EAACu;
            // 0x50eaac: 0x8c4500b0  lw          $a1, 0xB0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
        ctx->pc = 0x50EAB0u;
        goto label_50eab0;
    }
    ctx->pc = 0x50EAA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x50EAB0u);
        ctx->pc = 0x50EAACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50EAA8u;
            // 0x50eaac: 0x8c4500b0  lw          $a1, 0xB0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x50EAB0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x50EAB0u; }
            if (ctx->pc != 0x50EAB0u) { return; }
        }
        }
    }
    ctx->pc = 0x50EAB0u;
label_50eab0:
    // 0x50eab0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x50eab0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_50eab4:
    // 0x50eab4: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x50eab4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_50eab8:
    // 0x50eab8: 0x8c4489e8  lw          $a0, -0x7618($v0)
    ctx->pc = 0x50eab8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937064)));
label_50eabc:
    // 0x50eabc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x50eabcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_50eac0:
    // 0x50eac0: 0x8f39006c  lw          $t9, 0x6C($t9)
    ctx->pc = 0x50eac0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 108)));
label_50eac4:
    // 0x50eac4: 0x320f809  jalr        $t9
label_50eac8:
    if (ctx->pc == 0x50EAC8u) {
        ctx->pc = 0x50EAC8u;
            // 0x50eac8: 0x346501ae  ori         $a1, $v1, 0x1AE (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)430);
        ctx->pc = 0x50EACCu;
        goto label_50eacc;
    }
    ctx->pc = 0x50EAC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x50EACCu);
        ctx->pc = 0x50EAC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50EAC4u;
            // 0x50eac8: 0x346501ae  ori         $a1, $v1, 0x1AE (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)430);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x50EACCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x50EACCu; }
            if (ctx->pc != 0x50EACCu) { return; }
        }
        }
    }
    ctx->pc = 0x50EACCu;
label_50eacc:
    // 0x50eacc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x50eaccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_50ead0:
    // 0x50ead0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x50ead0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_50ead4:
    // 0x50ead4: 0x3e00008  jr          $ra
label_50ead8:
    if (ctx->pc == 0x50EAD8u) {
        ctx->pc = 0x50EAD8u;
            // 0x50ead8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x50EADCu;
        goto label_50eadc;
    }
    ctx->pc = 0x50EAD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x50EAD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50EAD4u;
            // 0x50ead8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x50EADCu;
label_50eadc:
    // 0x50eadc: 0x0  nop
    ctx->pc = 0x50eadcu;
    // NOP
label_50eae0:
    // 0x50eae0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x50eae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_50eae4:
    // 0x50eae4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x50eae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_50eae8:
    // 0x50eae8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x50eae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_50eaec:
    // 0x50eaec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x50eaecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_50eaf0:
    // 0x50eaf0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x50eaf0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_50eaf4:
    // 0x50eaf4: 0x8c8300ac  lw          $v1, 0xAC($a0)
    ctx->pc = 0x50eaf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 172)));
label_50eaf8:
    // 0x50eaf8: 0x28610003  slti        $at, $v1, 0x3
    ctx->pc = 0x50eaf8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_50eafc:
    // 0x50eafc: 0x10200066  beqz        $at, . + 4 + (0x66 << 2)
label_50eb00:
    if (ctx->pc == 0x50EB00u) {
        ctx->pc = 0x50EB00u;
            // 0x50eb00: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50EB04u;
        goto label_50eb04;
    }
    ctx->pc = 0x50EAFCu;
    {
        const bool branch_taken_0x50eafc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x50EB00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50EAFCu;
            // 0x50eb00: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50eafc) {
            ctx->pc = 0x50EC98u;
            goto label_50ec98;
        }
    }
    ctx->pc = 0x50EB04u;
label_50eb04:
    // 0x50eb04: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x50eb04u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_50eb08:
    // 0x50eb08: 0x8f390094  lw          $t9, 0x94($t9)
    ctx->pc = 0x50eb08u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 148)));
label_50eb0c:
    // 0x50eb0c: 0x320f809  jalr        $t9
label_50eb10:
    if (ctx->pc == 0x50EB10u) {
        ctx->pc = 0x50EB14u;
        goto label_50eb14;
    }
    ctx->pc = 0x50EB0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x50EB14u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x50EB14u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x50EB14u; }
            if (ctx->pc != 0x50EB14u) { return; }
        }
        }
    }
    ctx->pc = 0x50EB14u;
label_50eb14:
    // 0x50eb14: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x50eb14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_50eb18:
    // 0x50eb18: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x50eb18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_50eb1c:
    // 0x50eb1c: 0x80830018  lb          $v1, 0x18($a0)
    ctx->pc = 0x50eb1cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 24)));
label_50eb20:
    // 0x50eb20: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
label_50eb24:
    if (ctx->pc == 0x50EB24u) {
        ctx->pc = 0x50EB24u;
            // 0x50eb24: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50EB28u;
        goto label_50eb28;
    }
    ctx->pc = 0x50EB20u;
    {
        const bool branch_taken_0x50eb20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x50eb20) {
            ctx->pc = 0x50EB24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x50EB20u;
            // 0x50eb24: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x50EB30u;
            goto label_50eb30;
        }
    }
    ctx->pc = 0x50EB28u;
label_50eb28:
    // 0x50eb28: 0x80820010  lb          $v0, 0x10($a0)
    ctx->pc = 0x50eb28u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_50eb2c:
    // 0x50eb2c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x50eb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_50eb30:
    // 0x50eb30: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x50eb30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_50eb34:
    // 0x50eb34: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x50eb34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
label_50eb38:
    // 0x50eb38: 0x3c0600af  lui         $a2, 0xAF
    ctx->pc = 0x50eb38u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)175 << 16));
label_50eb3c:
    // 0x50eb3c: 0x26250010  addiu       $a1, $s1, 0x10
    ctx->pc = 0x50eb3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_50eb40:
    // 0x50eb40: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x50eb40u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_50eb44:
    // 0x50eb44: 0x24c60e84  addiu       $a2, $a2, 0xE84
    ctx->pc = 0x50eb44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3716));
label_50eb48:
    // 0x50eb48: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x50eb48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_50eb4c:
    // 0x50eb4c: 0xae2400a8  sw          $a0, 0xA8($s1)
    ctx->pc = 0x50eb4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 168), GPR_U32(ctx, 4));
label_50eb50:
    // 0x50eb50: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x50eb50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_50eb54:
    // 0x50eb54: 0x8e230128  lw          $v1, 0x128($s1)
    ctx->pc = 0x50eb54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 296)));
label_50eb58:
    // 0x50eb58: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x50eb58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
label_50eb5c:
    // 0x50eb5c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x50eb5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_50eb60:
    // 0x50eb60: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x50eb60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_50eb64:
    // 0x50eb64: 0x8c44ab08  lw          $a0, -0x54F8($v0)
    ctx->pc = 0x50eb64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945544)));
label_50eb68:
    // 0x50eb68: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x50eb68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_50eb6c:
    // 0x50eb6c: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x50eb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_50eb70:
    // 0x50eb70: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x50eb70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_50eb74:
    // 0x50eb74: 0xc14bb88  jal         func_52EE20
label_50eb78:
    if (ctx->pc == 0x50EB78u) {
        ctx->pc = 0x50EB78u;
            // 0x50eb78: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x50EB7Cu;
        goto label_50eb7c;
    }
    ctx->pc = 0x50EB74u;
    SET_GPR_U32(ctx, 31, 0x50EB7Cu);
    ctx->pc = 0x50EB78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50EB74u;
            // 0x50eb78: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x52EE20u;
    if (runtime->hasFunction(0x52EE20u)) {
        auto targetFn = runtime->lookupFunction(0x52EE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50EB7Cu; }
        if (ctx->pc != 0x50EB7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0052EE20_0x52ee20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50EB7Cu; }
        if (ctx->pc != 0x50EB7Cu) { return; }
    }
    ctx->pc = 0x50EB7Cu;
label_50eb7c:
    // 0x50eb7c: 0x8e2200b0  lw          $v0, 0xB0($s1)
    ctx->pc = 0x50eb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_50eb80:
    // 0x50eb80: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x50eb80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_50eb84:
    // 0x50eb84: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
label_50eb88:
    if (ctx->pc == 0x50EB88u) {
        ctx->pc = 0x50EB88u;
            // 0x50eb88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50EB8Cu;
        goto label_50eb8c;
    }
    ctx->pc = 0x50EB84u;
    {
        const bool branch_taken_0x50eb84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x50eb84) {
            ctx->pc = 0x50EB88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x50EB84u;
            // 0x50eb88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x50EBC4u;
            goto label_50ebc4;
        }
    }
    ctx->pc = 0x50EB8Cu;
label_50eb8c:
    // 0x50eb8c: 0x8e220060  lw          $v0, 0x60($s1)
    ctx->pc = 0x50eb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_50eb90:
    // 0x50eb90: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x50eb90u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_50eb94:
    // 0x50eb94: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
label_50eb98:
    if (ctx->pc == 0x50EB98u) {
        ctx->pc = 0x50EB9Cu;
        goto label_50eb9c;
    }
    ctx->pc = 0x50EB94u;
    {
        const bool branch_taken_0x50eb94 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x50eb94) {
            ctx->pc = 0x50EBC0u;
            goto label_50ebc0;
        }
    }
    ctx->pc = 0x50EB9Cu;
label_50eb9c:
    // 0x50eb9c: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x50eb9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_50eba0:
    // 0x50eba0: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x50eba0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_50eba4:
    // 0x50eba4: 0x8f390068  lw          $t9, 0x68($t9)
    ctx->pc = 0x50eba4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 104)));
label_50eba8:
    // 0x50eba8: 0x320f809  jalr        $t9
label_50ebac:
    if (ctx->pc == 0x50EBACu) {
        ctx->pc = 0x50EBACu;
            // 0x50ebac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50EBB0u;
        goto label_50ebb0;
    }
    ctx->pc = 0x50EBA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x50EBB0u);
        ctx->pc = 0x50EBACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50EBA8u;
            // 0x50ebac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x50EBB0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x50EBB0u; }
            if (ctx->pc != 0x50EBB0u) { return; }
        }
        }
    }
    ctx->pc = 0x50EBB0u;
label_50ebb0:
    // 0x50ebb0: 0xc62000c4  lwc1        $f0, 0xC4($s1)
    ctx->pc = 0x50ebb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_50ebb4:
    // 0x50ebb4: 0xe62000b8  swc1        $f0, 0xB8($s1)
    ctx->pc = 0x50ebb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 184), bits); }
label_50ebb8:
    // 0x50ebb8: 0x822200cc  lb          $v0, 0xCC($s1)
    ctx->pc = 0x50ebb8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 204)));
label_50ebbc:
    // 0x50ebbc: 0xae2200bc  sw          $v0, 0xBC($s1)
    ctx->pc = 0x50ebbcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 188), GPR_U32(ctx, 2));
label_50ebc0:
    // 0x50ebc0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x50ebc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_50ebc4:
    // 0x50ebc4: 0xc0e32a4  jal         func_38CA90
label_50ebc8:
    if (ctx->pc == 0x50EBC8u) {
        ctx->pc = 0x50EBC8u;
            // 0x50ebc8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x50EBCCu;
        goto label_50ebcc;
    }
    ctx->pc = 0x50EBC4u;
    SET_GPR_U32(ctx, 31, 0x50EBCCu);
    ctx->pc = 0x50EBC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50EBC4u;
            // 0x50ebc8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38CA90u;
    if (runtime->hasFunction(0x38CA90u)) {
        auto targetFn = runtime->lookupFunction(0x38CA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50EBCCu; }
        if (ctx->pc != 0x50EBCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038CA90_0x38ca90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50EBCCu; }
        if (ctx->pc != 0x50EBCCu) { return; }
    }
    ctx->pc = 0x50EBCCu;
label_50ebcc:
    // 0x50ebcc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x50ebccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_50ebd0:
    // 0x50ebd0: 0x2624006c  addiu       $a0, $s1, 0x6C
    ctx->pc = 0x50ebd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_50ebd4:
    // 0x50ebd4: 0xc0e082c  jal         func_3820B0
label_50ebd8:
    if (ctx->pc == 0x50EBD8u) {
        ctx->pc = 0x50EBD8u;
            // 0x50ebd8: 0xae2200b4  sw          $v0, 0xB4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 2));
        ctx->pc = 0x50EBDCu;
        goto label_50ebdc;
    }
    ctx->pc = 0x50EBD4u;
    SET_GPR_U32(ctx, 31, 0x50EBDCu);
    ctx->pc = 0x50EBD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50EBD4u;
            // 0x50ebd8: 0xae2200b4  sw          $v0, 0xB4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3820B0u;
    if (runtime->hasFunction(0x3820B0u)) {
        auto targetFn = runtime->lookupFunction(0x3820B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50EBDCu; }
        if (ctx->pc != 0x50EBDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003820B0_0x3820b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50EBDCu; }
        if (ctx->pc != 0x50EBDCu) { return; }
    }
    ctx->pc = 0x50EBDCu;
label_50ebdc:
    // 0x50ebdc: 0xc0e0828  jal         func_3820A0
label_50ebe0:
    if (ctx->pc == 0x50EBE0u) {
        ctx->pc = 0x50EBE0u;
            // 0x50ebe0: 0x2624006c  addiu       $a0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x50EBE4u;
        goto label_50ebe4;
    }
    ctx->pc = 0x50EBDCu;
    SET_GPR_U32(ctx, 31, 0x50EBE4u);
    ctx->pc = 0x50EBE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50EBDCu;
            // 0x50ebe0: 0x2624006c  addiu       $a0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3820A0u;
    if (runtime->hasFunction(0x3820A0u)) {
        auto targetFn = runtime->lookupFunction(0x3820A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50EBE4u; }
        if (ctx->pc != 0x50EBE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003820A0_0x3820a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50EBE4u; }
        if (ctx->pc != 0x50EBE4u) { return; }
    }
    ctx->pc = 0x50EBE4u;
label_50ebe4:
    // 0x50ebe4: 0x8e22009c  lw          $v0, 0x9C($s1)
    ctx->pc = 0x50ebe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_50ebe8:
    // 0x50ebe8: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
label_50ebec:
    if (ctx->pc == 0x50EBECu) {
        ctx->pc = 0x50EBECu;
            // 0x50ebec: 0x8e240050  lw          $a0, 0x50($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
        ctx->pc = 0x50EBF0u;
        goto label_50ebf0;
    }
    ctx->pc = 0x50EBE8u;
    {
        const bool branch_taken_0x50ebe8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x50ebe8) {
            ctx->pc = 0x50EBECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x50EBE8u;
            // 0x50ebec: 0x8e240050  lw          $a0, 0x50($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x50EC20u;
            goto label_50ec20;
        }
    }
    ctx->pc = 0x50EBF0u;
label_50ebf0:
    // 0x50ebf0: 0x8e2200b0  lw          $v0, 0xB0($s1)
    ctx->pc = 0x50ebf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_50ebf4:
    // 0x50ebf4: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x50ebf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_50ebf8:
    // 0x50ebf8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_50ebfc:
    if (ctx->pc == 0x50EBFCu) {
        ctx->pc = 0x50EC00u;
        goto label_50ec00;
    }
    ctx->pc = 0x50EBF8u;
    {
        const bool branch_taken_0x50ebf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x50ebf8) {
            ctx->pc = 0x50EC1Cu;
            goto label_50ec1c;
        }
    }
    ctx->pc = 0x50EC00u;
label_50ec00:
    // 0x50ec00: 0xc0dc408  jal         func_371020
label_50ec04:
    if (ctx->pc == 0x50EC04u) {
        ctx->pc = 0x50EC04u;
            // 0x50ec04: 0x26240050  addiu       $a0, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->pc = 0x50EC08u;
        goto label_50ec08;
    }
    ctx->pc = 0x50EC00u;
    SET_GPR_U32(ctx, 31, 0x50EC08u);
    ctx->pc = 0x50EC04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50EC00u;
            // 0x50ec04: 0x26240050  addiu       $a0, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x371020u;
    if (runtime->hasFunction(0x371020u)) {
        auto targetFn = runtime->lookupFunction(0x371020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50EC08u; }
        if (ctx->pc != 0x50EC08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00371020_0x371020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50EC08u; }
        if (ctx->pc != 0x50EC08u) { return; }
    }
    ctx->pc = 0x50EC08u;
label_50ec08:
    // 0x50ec08: 0xc0e0824  jal         func_382090
label_50ec0c:
    if (ctx->pc == 0x50EC0Cu) {
        ctx->pc = 0x50EC0Cu;
            // 0x50ec0c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50EC10u;
        goto label_50ec10;
    }
    ctx->pc = 0x50EC08u;
    SET_GPR_U32(ctx, 31, 0x50EC10u);
    ctx->pc = 0x50EC0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50EC08u;
            // 0x50ec0c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x382090u;
    if (runtime->hasFunction(0x382090u)) {
        auto targetFn = runtime->lookupFunction(0x382090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50EC10u; }
        if (ctx->pc != 0x50EC10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00382090_0x382090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50EC10u; }
        if (ctx->pc != 0x50EC10u) { return; }
    }
    ctx->pc = 0x50EC10u;
label_50ec10:
    // 0x50ec10: 0x8e24009c  lw          $a0, 0x9C($s1)
    ctx->pc = 0x50ec10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_50ec14:
    // 0x50ec14: 0xc0e081c  jal         func_382070
label_50ec18:
    if (ctx->pc == 0x50EC18u) {
        ctx->pc = 0x50EC18u;
            // 0x50ec18: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50EC1Cu;
        goto label_50ec1c;
    }
    ctx->pc = 0x50EC14u;
    SET_GPR_U32(ctx, 31, 0x50EC1Cu);
    ctx->pc = 0x50EC18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50EC14u;
            // 0x50ec18: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x382070u;
    if (runtime->hasFunction(0x382070u)) {
        auto targetFn = runtime->lookupFunction(0x382070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50EC1Cu; }
        if (ctx->pc != 0x50EC1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00382070_0x382070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50EC1Cu; }
        if (ctx->pc != 0x50EC1Cu) { return; }
    }
    ctx->pc = 0x50EC1Cu;
label_50ec1c:
    // 0x50ec1c: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x50ec1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_50ec20:
    // 0x50ec20: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x50ec20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_50ec24:
    // 0x50ec24: 0xc0e080c  jal         func_382030
label_50ec28:
    if (ctx->pc == 0x50EC28u) {
        ctx->pc = 0x50EC28u;
            // 0x50ec28: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x50EC2Cu;
        goto label_50ec2c;
    }
    ctx->pc = 0x50EC24u;
    SET_GPR_U32(ctx, 31, 0x50EC2Cu);
    ctx->pc = 0x50EC28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50EC24u;
            // 0x50ec28: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x382030u;
    if (runtime->hasFunction(0x382030u)) {
        auto targetFn = runtime->lookupFunction(0x382030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50EC2Cu; }
        if (ctx->pc != 0x50EC2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00382030_0x382030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50EC2Cu; }
        if (ctx->pc != 0x50EC2Cu) { return; }
    }
    ctx->pc = 0x50EC2Cu;
label_50ec2c:
    // 0x50ec2c: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x50ec2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_50ec30:
    // 0x50ec30: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x50ec30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_50ec34:
    // 0x50ec34: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x50ec34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_50ec38:
    // 0x50ec38: 0xc08914c  jal         func_224530
label_50ec3c:
    if (ctx->pc == 0x50EC3Cu) {
        ctx->pc = 0x50EC3Cu;
            // 0x50ec3c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50EC40u;
        goto label_50ec40;
    }
    ctx->pc = 0x50EC38u;
    SET_GPR_U32(ctx, 31, 0x50EC40u);
    ctx->pc = 0x50EC3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50EC38u;
            // 0x50ec3c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50EC40u; }
        if (ctx->pc != 0x50EC40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50EC40u; }
        if (ctx->pc != 0x50EC40u) { return; }
    }
    ctx->pc = 0x50EC40u;
label_50ec40:
    // 0x50ec40: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x50ec40u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_50ec44:
    // 0x50ec44: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x50ec44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_50ec48:
    // 0x50ec48: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x50ec48u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_50ec4c:
    // 0x50ec4c: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x50ec4cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_50ec50:
    // 0x50ec50: 0xc0b6df0  jal         func_2DB7C0
label_50ec54:
    if (ctx->pc == 0x50EC54u) {
        ctx->pc = 0x50EC54u;
            // 0x50ec54: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x50EC58u;
        goto label_50ec58;
    }
    ctx->pc = 0x50EC50u;
    SET_GPR_U32(ctx, 31, 0x50EC58u);
    ctx->pc = 0x50EC54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50EC50u;
            // 0x50ec54: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB7C0u;
    if (runtime->hasFunction(0x2DB7C0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB7C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50EC58u; }
        if (ctx->pc != 0x50EC58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB7C0_0x2db7c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50EC58u; }
        if (ctx->pc != 0x50EC58u) { return; }
    }
    ctx->pc = 0x50EC58u;
label_50ec58:
    // 0x50ec58: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x50ec58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_50ec5c:
    // 0x50ec5c: 0xc0e07f8  jal         func_381FE0
label_50ec60:
    if (ctx->pc == 0x50EC60u) {
        ctx->pc = 0x50EC60u;
            // 0x50ec60: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x50EC64u;
        goto label_50ec64;
    }
    ctx->pc = 0x50EC5Cu;
    SET_GPR_U32(ctx, 31, 0x50EC64u);
    ctx->pc = 0x50EC60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50EC5Cu;
            // 0x50ec60: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x381FE0u;
    if (runtime->hasFunction(0x381FE0u)) {
        auto targetFn = runtime->lookupFunction(0x381FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50EC64u; }
        if (ctx->pc != 0x50EC64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00381FE0_0x381fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50EC64u; }
        if (ctx->pc != 0x50EC64u) { return; }
    }
    ctx->pc = 0x50EC64u;
label_50ec64:
    // 0x50ec64: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x50ec64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_50ec68:
    // 0x50ec68: 0xc0dc3f4  jal         func_370FD0
label_50ec6c:
    if (ctx->pc == 0x50EC6Cu) {
        ctx->pc = 0x50EC6Cu;
            // 0x50ec6c: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x50EC70u;
        goto label_50ec70;
    }
    ctx->pc = 0x50EC68u;
    SET_GPR_U32(ctx, 31, 0x50EC70u);
    ctx->pc = 0x50EC6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50EC68u;
            // 0x50ec6c: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x370FD0u;
    if (runtime->hasFunction(0x370FD0u)) {
        auto targetFn = runtime->lookupFunction(0x370FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50EC70u; }
        if (ctx->pc != 0x50EC70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00370FD0_0x370fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50EC70u; }
        if (ctx->pc != 0x50EC70u) { return; }
    }
    ctx->pc = 0x50EC70u;
label_50ec70:
    // 0x50ec70: 0x8e2300b0  lw          $v1, 0xB0($s1)
    ctx->pc = 0x50ec70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_50ec74:
    // 0x50ec74: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x50ec74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
label_50ec78:
    // 0x50ec78: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
label_50ec7c:
    if (ctx->pc == 0x50EC7Cu) {
        ctx->pc = 0x50EC7Cu;
            // 0x50ec7c: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x50EC80u;
        goto label_50ec80;
    }
    ctx->pc = 0x50EC78u;
    {
        const bool branch_taken_0x50ec78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x50ec78) {
            ctx->pc = 0x50EC7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x50EC78u;
            // 0x50ec7c: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
            ctx->pc = 0x50EC94u;
            goto label_50ec94;
        }
    }
    ctx->pc = 0x50EC80u;
label_50ec80:
    // 0x50ec80: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x50ec80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_50ec84:
    // 0x50ec84: 0x8f390070  lw          $t9, 0x70($t9)
    ctx->pc = 0x50ec84u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 112)));
label_50ec88:
    // 0x50ec88: 0x320f809  jalr        $t9
label_50ec8c:
    if (ctx->pc == 0x50EC8Cu) {
        ctx->pc = 0x50EC8Cu;
            // 0x50ec8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50EC90u;
        goto label_50ec90;
    }
    ctx->pc = 0x50EC88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x50EC90u);
        ctx->pc = 0x50EC8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50EC88u;
            // 0x50ec8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x50EC90u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x50EC90u; }
            if (ctx->pc != 0x50EC90u) { return; }
        }
        }
    }
    ctx->pc = 0x50EC90u;
label_50ec90:
    // 0x50ec90: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x50ec90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_50ec94:
    // 0x50ec94: 0xae230124  sw          $v1, 0x124($s1)
    ctx->pc = 0x50ec94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 292), GPR_U32(ctx, 3));
label_50ec98:
    // 0x50ec98: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x50ec98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_50ec9c:
    // 0x50ec9c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x50ec9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_50eca0:
    // 0x50eca0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x50eca0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_50eca4:
    // 0x50eca4: 0x3e00008  jr          $ra
label_50eca8:
    if (ctx->pc == 0x50ECA8u) {
        ctx->pc = 0x50ECA8u;
            // 0x50eca8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x50ECACu;
        goto label_50ecac;
    }
    ctx->pc = 0x50ECA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x50ECA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50ECA4u;
            // 0x50eca8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x50ECACu;
label_50ecac:
    // 0x50ecac: 0x0  nop
    ctx->pc = 0x50ecacu;
    // NOP
label_50ecb0:
    // 0x50ecb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x50ecb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_50ecb4:
    // 0x50ecb4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x50ecb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_50ecb8:
    // 0x50ecb8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x50ecb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_50ecbc:
    // 0x50ecbc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x50ecbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_50ecc0:
    // 0x50ecc0: 0x8c840050  lw          $a0, 0x50($a0)
    ctx->pc = 0x50ecc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_50ecc4:
    // 0x50ecc4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_50ecc8:
    if (ctx->pc == 0x50ECC8u) {
        ctx->pc = 0x50ECC8u;
            // 0x50ecc8: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x50ECCCu;
        goto label_50eccc;
    }
    ctx->pc = 0x50ECC4u;
    {
        const bool branch_taken_0x50ecc4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x50ecc4) {
            ctx->pc = 0x50ECC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x50ECC4u;
            // 0x50ecc8: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x50ECE0u;
            goto label_50ece0;
        }
    }
    ctx->pc = 0x50ECCCu;
label_50eccc:
    // 0x50eccc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x50ecccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_50ecd0:
    // 0x50ecd0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x50ecd0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_50ecd4:
    // 0x50ecd4: 0x320f809  jalr        $t9
label_50ecd8:
    if (ctx->pc == 0x50ECD8u) {
        ctx->pc = 0x50ECD8u;
            // 0x50ecd8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x50ECDCu;
        goto label_50ecdc;
    }
    ctx->pc = 0x50ECD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x50ECDCu);
        ctx->pc = 0x50ECD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50ECD4u;
            // 0x50ecd8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x50ECDCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x50ECDCu; }
            if (ctx->pc != 0x50ECDCu) { return; }
        }
        }
    }
    ctx->pc = 0x50ECDCu;
label_50ecdc:
    // 0x50ecdc: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x50ecdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
label_50ece0:
    // 0x50ece0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x50ece0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_50ece4:
    // 0x50ece4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x50ece4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_50ece8:
    // 0x50ece8: 0x3e00008  jr          $ra
label_50ecec:
    if (ctx->pc == 0x50ECECu) {
        ctx->pc = 0x50ECECu;
            // 0x50ecec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x50ECF0u;
        goto label_50ecf0;
    }
    ctx->pc = 0x50ECE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x50ECECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50ECE8u;
            // 0x50ecec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x50ECF0u;
label_50ecf0:
    // 0x50ecf0: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x50ecf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
label_50ecf4:
    // 0x50ecf4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x50ecf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_50ecf8:
    // 0x50ecf8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x50ecf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_50ecfc:
    // 0x50ecfc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x50ecfcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_50ed00:
    // 0x50ed00: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x50ed00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_50ed04:
    // 0x50ed04: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x50ed04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_50ed08:
    // 0x50ed08: 0xc0892d0  jal         func_224B40
label_50ed0c:
    if (ctx->pc == 0x50ED0Cu) {
        ctx->pc = 0x50ED0Cu;
            // 0x50ed0c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x50ED10u;
        goto label_50ed10;
    }
    ctx->pc = 0x50ED08u;
    SET_GPR_U32(ctx, 31, 0x50ED10u);
    ctx->pc = 0x50ED0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50ED08u;
            // 0x50ed0c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224B40u;
    if (runtime->hasFunction(0x224B40u)) {
        auto targetFn = runtime->lookupFunction(0x224B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50ED10u; }
        if (ctx->pc != 0x50ED10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224B40_0x224b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50ED10u; }
        if (ctx->pc != 0x50ED10u) { return; }
    }
    ctx->pc = 0x50ED10u;
label_50ed10:
    // 0x50ed10: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x50ed10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_50ed14:
    // 0x50ed14: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x50ed14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_50ed18:
    // 0x50ed18: 0x8c420cc8  lw          $v0, 0xCC8($v0)
    ctx->pc = 0x50ed18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3272)));
label_50ed1c:
    // 0x50ed1c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x50ed1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_50ed20:
    // 0x50ed20: 0x8c70e3e0  lw          $s0, -0x1C20($v1)
    ctx->pc = 0x50ed20u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960096)));
label_50ed24:
    // 0x50ed24: 0x8c510060  lw          $s1, 0x60($v0)
    ctx->pc = 0x50ed24u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_50ed28:
    // 0x50ed28: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x50ed28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
label_50ed2c:
    // 0x50ed2c: 0xc0b6e68  jal         func_2DB9A0
label_50ed30:
    if (ctx->pc == 0x50ED30u) {
        ctx->pc = 0x50ED30u;
            // 0x50ed30: 0xafa00064  sw          $zero, 0x64($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
        ctx->pc = 0x50ED34u;
        goto label_50ed34;
    }
    ctx->pc = 0x50ED2Cu;
    SET_GPR_U32(ctx, 31, 0x50ED34u);
    ctx->pc = 0x50ED30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50ED2Cu;
            // 0x50ed30: 0xafa00064  sw          $zero, 0x64($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB9A0u;
    if (runtime->hasFunction(0x2DB9A0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50ED34u; }
        if (ctx->pc != 0x50ED34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB9A0_0x2db9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50ED34u; }
        if (ctx->pc != 0x50ED34u) { return; }
    }
    ctx->pc = 0x50ED34u;
label_50ed34:
    // 0x50ed34: 0xc0b6dac  jal         func_2DB6B0
label_50ed38:
    if (ctx->pc == 0x50ED38u) {
        ctx->pc = 0x50ED38u;
            // 0x50ed38: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x50ED3Cu;
        goto label_50ed3c;
    }
    ctx->pc = 0x50ED34u;
    SET_GPR_U32(ctx, 31, 0x50ED3Cu);
    ctx->pc = 0x50ED38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50ED34u;
            // 0x50ed38: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (runtime->hasFunction(0x2DB6B0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50ED3Cu; }
        if (ctx->pc != 0x50ED3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB6B0_0x2db6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50ED3Cu; }
        if (ctx->pc != 0x50ED3Cu) { return; }
    }
    ctx->pc = 0x50ED3Cu;
label_50ed3c:
    // 0x50ed3c: 0xc0cac94  jal         func_32B250
label_50ed40:
    if (ctx->pc == 0x50ED40u) {
        ctx->pc = 0x50ED40u;
            // 0x50ed40: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x50ED44u;
        goto label_50ed44;
    }
    ctx->pc = 0x50ED3Cu;
    SET_GPR_U32(ctx, 31, 0x50ED44u);
    ctx->pc = 0x50ED40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50ED3Cu;
            // 0x50ed40: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B250u;
    if (runtime->hasFunction(0x32B250u)) {
        auto targetFn = runtime->lookupFunction(0x32B250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50ED44u; }
        if (ctx->pc != 0x50ED44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B250_0x32b250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50ED44u; }
        if (ctx->pc != 0x50ED44u) { return; }
    }
    ctx->pc = 0x50ED44u;
label_50ed44:
    // 0x50ed44: 0xc0cac84  jal         func_32B210
label_50ed48:
    if (ctx->pc == 0x50ED48u) {
        ctx->pc = 0x50ED48u;
            // 0x50ed48: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x50ED4Cu;
        goto label_50ed4c;
    }
    ctx->pc = 0x50ED44u;
    SET_GPR_U32(ctx, 31, 0x50ED4Cu);
    ctx->pc = 0x50ED48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50ED44u;
            // 0x50ed48: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B210u;
    if (runtime->hasFunction(0x32B210u)) {
        auto targetFn = runtime->lookupFunction(0x32B210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50ED4Cu; }
        if (ctx->pc != 0x50ED4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B210_0x32b210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50ED4Cu; }
        if (ctx->pc != 0x50ED4Cu) { return; }
    }
    ctx->pc = 0x50ED4Cu;
label_50ed4c:
    // 0x50ed4c: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x50ed4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_50ed50:
    // 0x50ed50: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x50ed50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_50ed54:
    // 0x50ed54: 0xc44cc910  lwc1        $f12, -0x36F0($v0)
    ctx->pc = 0x50ed54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_50ed58:
    // 0x50ed58: 0xc0a5a68  jal         func_2969A0
label_50ed5c:
    if (ctx->pc == 0x50ED5Cu) {
        ctx->pc = 0x50ED5Cu;
            // 0x50ed5c: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x50ED60u;
        goto label_50ed60;
    }
    ctx->pc = 0x50ED58u;
    SET_GPR_U32(ctx, 31, 0x50ED60u);
    ctx->pc = 0x50ED5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50ED58u;
            // 0x50ed5c: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2969A0u;
    if (runtime->hasFunction(0x2969A0u)) {
        auto targetFn = runtime->lookupFunction(0x2969A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50ED60u; }
        if (ctx->pc != 0x50ED60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002969A0_0x2969a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50ED60u; }
        if (ctx->pc != 0x50ED60u) { return; }
    }
    ctx->pc = 0x50ED60u;
label_50ed60:
    // 0x50ed60: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x50ed60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_50ed64:
    // 0x50ed64: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x50ed64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_50ed68:
    // 0x50ed68: 0x8c460cc8  lw          $a2, 0xCC8($v0)
    ctx->pc = 0x50ed68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3272)));
label_50ed6c:
    // 0x50ed6c: 0xc7a20094  lwc1        $f2, 0x94($sp)
    ctx->pc = 0x50ed6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_50ed70:
    // 0x50ed70: 0xc7a10098  lwc1        $f1, 0x98($sp)
    ctx->pc = 0x50ed70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_50ed74:
    // 0x50ed74: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x50ed74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_50ed78:
    // 0x50ed78: 0xc7a0009c  lwc1        $f0, 0x9C($sp)
    ctx->pc = 0x50ed78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_50ed7c:
    // 0x50ed7c: 0x24050220  addiu       $a1, $zero, 0x220
    ctx->pc = 0x50ed7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_50ed80:
    // 0x50ed80: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x50ed80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_50ed84:
    // 0x50ed84: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x50ed84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_50ed88:
    // 0x50ed88: 0xc7a70080  lwc1        $f7, 0x80($sp)
    ctx->pc = 0x50ed88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_50ed8c:
    // 0x50ed8c: 0xc7a60084  lwc1        $f6, 0x84($sp)
    ctx->pc = 0x50ed8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_50ed90:
    // 0x50ed90: 0xc7a50088  lwc1        $f5, 0x88($sp)
    ctx->pc = 0x50ed90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_50ed94:
    // 0x50ed94: 0x8cc20060  lw          $v0, 0x60($a2)
    ctx->pc = 0x50ed94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 96)));
label_50ed98:
    // 0x50ed98: 0xc7a4008c  lwc1        $f4, 0x8C($sp)
    ctx->pc = 0x50ed98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_50ed9c:
    // 0x50ed9c: 0xc7a30090  lwc1        $f3, 0x90($sp)
    ctx->pc = 0x50ed9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_50eda0:
    // 0x50eda0: 0xafa200b4  sw          $v0, 0xB4($sp)
    ctx->pc = 0x50eda0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 2));
label_50eda4:
    // 0x50eda4: 0x2406002b  addiu       $a2, $zero, 0x2B
    ctx->pc = 0x50eda4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_50eda8:
    // 0x50eda8: 0xc64a0018  lwc1        $f10, 0x18($s2)
    ctx->pc = 0x50eda8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_50edac:
    // 0x50edac: 0xc6490014  lwc1        $f9, 0x14($s2)
    ctx->pc = 0x50edacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_50edb0:
    // 0x50edb0: 0xc6480010  lwc1        $f8, 0x10($s2)
    ctx->pc = 0x50edb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_50edb4:
    // 0x50edb4: 0xe7a20114  swc1        $f2, 0x114($sp)
    ctx->pc = 0x50edb4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
label_50edb8:
    // 0x50edb8: 0xa3a70160  sb          $a3, 0x160($sp)
    ctx->pc = 0x50edb8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 352), (uint8_t)GPR_U32(ctx, 7));
label_50edbc:
    // 0x50edbc: 0xe7a10118  swc1        $f1, 0x118($sp)
    ctx->pc = 0x50edbcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_50edc0:
    // 0x50edc0: 0xafa3015c  sw          $v1, 0x15C($sp)
    ctx->pc = 0x50edc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 3));
label_50edc4:
    // 0x50edc4: 0xe7a0011c  swc1        $f0, 0x11C($sp)
    ctx->pc = 0x50edc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
label_50edc8:
    // 0x50edc8: 0xafa000cc  sw          $zero, 0xCC($sp)
    ctx->pc = 0x50edc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 0));
label_50edcc:
    // 0x50edcc: 0xc7a200a0  lwc1        $f2, 0xA0($sp)
    ctx->pc = 0x50edccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_50edd0:
    // 0x50edd0: 0xafa000b0  sw          $zero, 0xB0($sp)
    ctx->pc = 0x50edd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
label_50edd4:
    // 0x50edd4: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x50edd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_50edd8:
    // 0x50edd8: 0xafa00150  sw          $zero, 0x150($sp)
    ctx->pc = 0x50edd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 0));
label_50eddc:
    // 0x50eddc: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x50eddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_50ede0:
    // 0x50ede0: 0xe7a20120  swc1        $f2, 0x120($sp)
    ctx->pc = 0x50ede0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_50ede4:
    // 0x50ede4: 0xe7a10124  swc1        $f1, 0x124($sp)
    ctx->pc = 0x50ede4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
label_50ede8:
    // 0x50ede8: 0xe7a00128  swc1        $f0, 0x128($sp)
    ctx->pc = 0x50ede8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_50edec:
    // 0x50edec: 0xc7a200ac  lwc1        $f2, 0xAC($sp)
    ctx->pc = 0x50edecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_50edf0:
    // 0x50edf0: 0xc7a10070  lwc1        $f1, 0x70($sp)
    ctx->pc = 0x50edf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_50edf4:
    // 0x50edf4: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x50edf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_50edf8:
    // 0x50edf8: 0xe7a2012c  swc1        $f2, 0x12C($sp)
    ctx->pc = 0x50edf8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
label_50edfc:
    // 0x50edfc: 0xe7a10130  swc1        $f1, 0x130($sp)
    ctx->pc = 0x50edfcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_50ee00:
    // 0x50ee00: 0xe7a00134  swc1        $f0, 0x134($sp)
    ctx->pc = 0x50ee00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
label_50ee04:
    // 0x50ee04: 0xc7a20078  lwc1        $f2, 0x78($sp)
    ctx->pc = 0x50ee04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_50ee08:
    // 0x50ee08: 0xc7a1007c  lwc1        $f1, 0x7C($sp)
    ctx->pc = 0x50ee08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_50ee0c:
    // 0x50ee0c: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x50ee0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_50ee10:
    // 0x50ee10: 0xe7a800c0  swc1        $f8, 0xC0($sp)
    ctx->pc = 0x50ee10u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_50ee14:
    // 0x50ee14: 0xe7a900c4  swc1        $f9, 0xC4($sp)
    ctx->pc = 0x50ee14u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_50ee18:
    // 0x50ee18: 0xe7aa00c8  swc1        $f10, 0xC8($sp)
    ctx->pc = 0x50ee18u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_50ee1c:
    // 0x50ee1c: 0xe7a70100  swc1        $f7, 0x100($sp)
    ctx->pc = 0x50ee1cu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_50ee20:
    // 0x50ee20: 0xe7a60104  swc1        $f6, 0x104($sp)
    ctx->pc = 0x50ee20u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
label_50ee24:
    // 0x50ee24: 0xe7a50108  swc1        $f5, 0x108($sp)
    ctx->pc = 0x50ee24u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
label_50ee28:
    // 0x50ee28: 0xe7a4010c  swc1        $f4, 0x10C($sp)
    ctx->pc = 0x50ee28u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
label_50ee2c:
    // 0x50ee2c: 0xe7a30110  swc1        $f3, 0x110($sp)
    ctx->pc = 0x50ee2cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_50ee30:
    // 0x50ee30: 0xe7a20138  swc1        $f2, 0x138($sp)
    ctx->pc = 0x50ee30u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_50ee34:
    // 0x50ee34: 0xe7a1013c  swc1        $f1, 0x13C($sp)
    ctx->pc = 0x50ee34u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
label_50ee38:
    // 0x50ee38: 0xc0a7a88  jal         func_29EA20
label_50ee3c:
    if (ctx->pc == 0x50EE3Cu) {
        ctx->pc = 0x50EE3Cu;
            // 0x50ee3c: 0xe7a00140  swc1        $f0, 0x140($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
        ctx->pc = 0x50EE40u;
        goto label_50ee40;
    }
    ctx->pc = 0x50EE38u;
    SET_GPR_U32(ctx, 31, 0x50EE40u);
    ctx->pc = 0x50EE3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50EE38u;
            // 0x50ee3c: 0xe7a00140  swc1        $f0, 0x140($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50EE40u; }
        if (ctx->pc != 0x50EE40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50EE40u; }
        if (ctx->pc != 0x50EE40u) { return; }
    }
    ctx->pc = 0x50EE40u;
label_50ee40:
    // 0x50ee40: 0x24030220  addiu       $v1, $zero, 0x220
    ctx->pc = 0x50ee40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_50ee44:
    // 0x50ee44: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x50ee44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_50ee48:
    // 0x50ee48: 0x12200013  beqz        $s1, . + 4 + (0x13 << 2)
label_50ee4c:
    if (ctx->pc == 0x50EE4Cu) {
        ctx->pc = 0x50EE4Cu;
            // 0x50ee4c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x50EE50u;
        goto label_50ee50;
    }
    ctx->pc = 0x50EE48u;
    {
        const bool branch_taken_0x50ee48 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x50EE4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50EE48u;
            // 0x50ee4c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50ee48) {
            ctx->pc = 0x50EE98u;
            goto label_50ee98;
        }
    }
    ctx->pc = 0x50EE50u;
label_50ee50:
    // 0x50ee50: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x50ee50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_50ee54:
    // 0x50ee54: 0xc088ef4  jal         func_223BD0
label_50ee58:
    if (ctx->pc == 0x50EE58u) {
        ctx->pc = 0x50EE58u;
            // 0x50ee58: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x50EE5Cu;
        goto label_50ee5c;
    }
    ctx->pc = 0x50EE54u;
    SET_GPR_U32(ctx, 31, 0x50EE5Cu);
    ctx->pc = 0x50EE58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50EE54u;
            // 0x50ee58: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x223BD0u;
    if (runtime->hasFunction(0x223BD0u)) {
        auto targetFn = runtime->lookupFunction(0x223BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50EE5Cu; }
        if (ctx->pc != 0x50EE5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00223BD0_0x223bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50EE5Cu; }
        if (ctx->pc != 0x50EE5Cu) { return; }
    }
    ctx->pc = 0x50EE5Cu;
label_50ee5c:
    // 0x50ee5c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x50ee5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_50ee60:
    // 0x50ee60: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x50ee60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_50ee64:
    // 0x50ee64: 0x24422240  addiu       $v0, $v0, 0x2240
    ctx->pc = 0x50ee64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8768));
label_50ee68:
    // 0x50ee68: 0x24632260  addiu       $v1, $v1, 0x2260
    ctx->pc = 0x50ee68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8800));
label_50ee6c:
    // 0x50ee6c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x50ee6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_50ee70:
    // 0x50ee70: 0xae200200  sw          $zero, 0x200($s1)
    ctx->pc = 0x50ee70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 512), GPR_U32(ctx, 0));
label_50ee74:
    // 0x50ee74: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x50ee74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_50ee78:
    // 0x50ee78: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x50ee78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_50ee7c:
    // 0x50ee7c: 0xae200210  sw          $zero, 0x210($s1)
    ctx->pc = 0x50ee7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 528), GPR_U32(ctx, 0));
label_50ee80:
    // 0x50ee80: 0xae200214  sw          $zero, 0x214($s1)
    ctx->pc = 0x50ee80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 532), GPR_U32(ctx, 0));
label_50ee84:
    // 0x50ee84: 0xae32000c  sw          $s2, 0xC($s1)
    ctx->pc = 0x50ee84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 18));
label_50ee88:
    // 0x50ee88: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x50ee88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_50ee8c:
    // 0x50ee8c: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x50ee8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_50ee90:
    // 0x50ee90: 0xc088b38  jal         func_222CE0
label_50ee94:
    if (ctx->pc == 0x50EE94u) {
        ctx->pc = 0x50EE94u;
            // 0x50ee94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50EE98u;
        goto label_50ee98;
    }
    ctx->pc = 0x50EE90u;
    SET_GPR_U32(ctx, 31, 0x50EE98u);
    ctx->pc = 0x50EE94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50EE90u;
            // 0x50ee94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222CE0u;
    if (runtime->hasFunction(0x222CE0u)) {
        auto targetFn = runtime->lookupFunction(0x222CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50EE98u; }
        if (ctx->pc != 0x50EE98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222CE0_0x222ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50EE98u; }
        if (ctx->pc != 0x50EE98u) { return; }
    }
    ctx->pc = 0x50EE98u;
label_50ee98:
    // 0x50ee98: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x50ee98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_50ee9c:
    // 0x50ee9c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x50ee9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_50eea0:
    // 0x50eea0: 0xc08c164  jal         func_230590
label_50eea4:
    if (ctx->pc == 0x50EEA4u) {
        ctx->pc = 0x50EEA4u;
            // 0x50eea4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x50EEA8u;
        goto label_50eea8;
    }
    ctx->pc = 0x50EEA0u;
    SET_GPR_U32(ctx, 31, 0x50EEA8u);
    ctx->pc = 0x50EEA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50EEA0u;
            // 0x50eea4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x230590u;
    if (runtime->hasFunction(0x230590u)) {
        auto targetFn = runtime->lookupFunction(0x230590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50EEA8u; }
        if (ctx->pc != 0x50EEA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00230590_0x230590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50EEA8u; }
        if (ctx->pc != 0x50EEA8u) { return; }
    }
    ctx->pc = 0x50EEA8u;
label_50eea8:
    // 0x50eea8: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x50eea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_50eeac:
    // 0x50eeac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x50eeacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_50eeb0:
    // 0x50eeb0: 0x24425f20  addiu       $v0, $v0, 0x5F20
    ctx->pc = 0x50eeb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24352));
label_50eeb4:
    // 0x50eeb4: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x50eeb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_50eeb8:
    // 0x50eeb8: 0xae220200  sw          $v0, 0x200($s1)
    ctx->pc = 0x50eeb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 512), GPR_U32(ctx, 2));
label_50eebc:
    // 0x50eebc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x50eebcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_50eec0:
    // 0x50eec0: 0xc08914c  jal         func_224530
label_50eec4:
    if (ctx->pc == 0x50EEC4u) {
        ctx->pc = 0x50EEC4u;
            // 0x50eec4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50EEC8u;
        goto label_50eec8;
    }
    ctx->pc = 0x50EEC0u;
    SET_GPR_U32(ctx, 31, 0x50EEC8u);
    ctx->pc = 0x50EEC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50EEC0u;
            // 0x50eec4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50EEC8u; }
        if (ctx->pc != 0x50EEC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50EEC8u; }
        if (ctx->pc != 0x50EEC8u) { return; }
    }
    ctx->pc = 0x50EEC8u;
label_50eec8:
    // 0x50eec8: 0x3c0342de  lui         $v1, 0x42DE
    ctx->pc = 0x50eec8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17118 << 16));
label_50eecc:
    // 0x50eecc: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x50eeccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_50eed0:
    // 0x50eed0: 0x346338e3  ori         $v1, $v1, 0x38E3
    ctx->pc = 0x50eed0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)14563);
label_50eed4:
    // 0x50eed4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x50eed4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_50eed8:
    // 0x50eed8: 0xae230154  sw          $v1, 0x154($s1)
    ctx->pc = 0x50eed8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 340), GPR_U32(ctx, 3));
label_50eedc:
    // 0x50eedc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x50eedcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_50eee0:
    // 0x50eee0: 0xae220158  sw          $v0, 0x158($s1)
    ctx->pc = 0x50eee0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 344), GPR_U32(ctx, 2));
label_50eee4:
    // 0x50eee4: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x50eee4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_50eee8:
    // 0x50eee8: 0xc6420018  lwc1        $f2, 0x18($s2)
    ctx->pc = 0x50eee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_50eeec:
    // 0x50eeec: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x50eeecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_50eef0:
    // 0x50eef0: 0xc6410014  lwc1        $f1, 0x14($s2)
    ctx->pc = 0x50eef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_50eef4:
    // 0x50eef4: 0xc6400010  lwc1        $f0, 0x10($s2)
    ctx->pc = 0x50eef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_50eef8:
    // 0x50eef8: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x50eef8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_50eefc:
    // 0x50eefc: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x50eefcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
label_50ef00:
    // 0x50ef00: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x50ef00u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_50ef04:
    // 0x50ef04: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x50ef04u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_50ef08:
    // 0x50ef08: 0xc643002c  lwc1        $f3, 0x2C($s2)
    ctx->pc = 0x50ef08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_50ef0c:
    // 0x50ef0c: 0xc6420028  lwc1        $f2, 0x28($s2)
    ctx->pc = 0x50ef0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_50ef10:
    // 0x50ef10: 0xc6410024  lwc1        $f1, 0x24($s2)
    ctx->pc = 0x50ef10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_50ef14:
    // 0x50ef14: 0xc6400020  lwc1        $f0, 0x20($s2)
    ctx->pc = 0x50ef14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_50ef18:
    // 0x50ef18: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x50ef18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_50ef1c:
    // 0x50ef1c: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x50ef1cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_50ef20:
    // 0x50ef20: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x50ef20u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_50ef24:
    // 0x50ef24: 0xc0892b0  jal         func_224AC0
label_50ef28:
    if (ctx->pc == 0x50EF28u) {
        ctx->pc = 0x50EF28u;
            // 0x50ef28: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->pc = 0x50EF2Cu;
        goto label_50ef2c;
    }
    ctx->pc = 0x50EF24u;
    SET_GPR_U32(ctx, 31, 0x50EF2Cu);
    ctx->pc = 0x50EF28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50EF24u;
            // 0x50ef28: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224AC0u;
    if (runtime->hasFunction(0x224AC0u)) {
        auto targetFn = runtime->lookupFunction(0x224AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50EF2Cu; }
        if (ctx->pc != 0x50EF2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224AC0_0x224ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50EF2Cu; }
        if (ctx->pc != 0x50EF2Cu) { return; }
    }
    ctx->pc = 0x50EF2Cu;
label_50ef2c:
    // 0x50ef2c: 0x8e240214  lw          $a0, 0x214($s1)
    ctx->pc = 0x50ef2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
label_50ef30:
    // 0x50ef30: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x50ef30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_50ef34:
    // 0x50ef34: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x50ef34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_50ef38:
    // 0x50ef38: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x50ef38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_50ef3c:
    // 0x50ef3c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x50ef3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_50ef40:
    // 0x50ef40: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x50ef40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
label_50ef44:
    // 0x50ef44: 0xae230214  sw          $v1, 0x214($s1)
    ctx->pc = 0x50ef44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 532), GPR_U32(ctx, 3));
label_50ef48:
    // 0x50ef48: 0xae510050  sw          $s1, 0x50($s2)
    ctx->pc = 0x50ef48u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 17));
label_50ef4c:
    // 0x50ef4c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x50ef4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_50ef50:
    // 0x50ef50: 0xc0a7a88  jal         func_29EA20
label_50ef54:
    if (ctx->pc == 0x50EF54u) {
        ctx->pc = 0x50EF54u;
            // 0x50ef54: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->pc = 0x50EF58u;
        goto label_50ef58;
    }
    ctx->pc = 0x50EF50u;
    SET_GPR_U32(ctx, 31, 0x50EF58u);
    ctx->pc = 0x50EF54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50EF50u;
            // 0x50ef54: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50EF58u; }
        if (ctx->pc != 0x50EF58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50EF58u; }
        if (ctx->pc != 0x50EF58u) { return; }
    }
    ctx->pc = 0x50EF58u;
label_50ef58:
    // 0x50ef58: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x50ef58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_50ef5c:
    // 0x50ef5c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x50ef5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_50ef60:
    // 0x50ef60: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_50ef64:
    if (ctx->pc == 0x50EF64u) {
        ctx->pc = 0x50EF64u;
            // 0x50ef64: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x50EF68u;
        goto label_50ef68;
    }
    ctx->pc = 0x50EF60u;
    {
        const bool branch_taken_0x50ef60 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x50EF64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50EF60u;
            // 0x50ef64: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50ef60) {
            ctx->pc = 0x50EF84u;
            goto label_50ef84;
        }
    }
    ctx->pc = 0x50EF68u;
label_50ef68:
    // 0x50ef68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x50ef68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_50ef6c:
    // 0x50ef6c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x50ef6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_50ef70:
    // 0x50ef70: 0xc0869d0  jal         func_21A740
label_50ef74:
    if (ctx->pc == 0x50EF74u) {
        ctx->pc = 0x50EF74u;
            // 0x50ef74: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50EF78u;
        goto label_50ef78;
    }
    ctx->pc = 0x50EF70u;
    SET_GPR_U32(ctx, 31, 0x50EF78u);
    ctx->pc = 0x50EF74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50EF70u;
            // 0x50ef74: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21A740u;
    if (runtime->hasFunction(0x21A740u)) {
        auto targetFn = runtime->lookupFunction(0x21A740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50EF78u; }
        if (ctx->pc != 0x50EF78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021A740_0x21a740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50EF78u; }
        if (ctx->pc != 0x50EF78u) { return; }
    }
    ctx->pc = 0x50EF78u;
label_50ef78:
    // 0x50ef78: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x50ef78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_50ef7c:
    // 0x50ef7c: 0x24422210  addiu       $v0, $v0, 0x2210
    ctx->pc = 0x50ef7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8720));
label_50ef80:
    // 0x50ef80: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x50ef80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_50ef84:
    // 0x50ef84: 0xae300210  sw          $s0, 0x210($s1)
    ctx->pc = 0x50ef84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 528), GPR_U32(ctx, 16));
label_50ef88:
    // 0x50ef88: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x50ef88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_50ef8c:
    // 0x50ef8c: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x50ef8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_50ef90:
    // 0x50ef90: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x50ef90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_50ef94:
    // 0x50ef94: 0xc08c650  jal         func_231940
label_50ef98:
    if (ctx->pc == 0x50EF98u) {
        ctx->pc = 0x50EF98u;
            // 0x50ef98: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50EF9Cu;
        goto label_50ef9c;
    }
    ctx->pc = 0x50EF94u;
    SET_GPR_U32(ctx, 31, 0x50EF9Cu);
    ctx->pc = 0x50EF98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50EF94u;
            // 0x50ef98: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231940u;
    if (runtime->hasFunction(0x231940u)) {
        auto targetFn = runtime->lookupFunction(0x231940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50EF9Cu; }
        if (ctx->pc != 0x50EF9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231940_0x231940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50EF9Cu; }
        if (ctx->pc != 0x50EF9Cu) { return; }
    }
    ctx->pc = 0x50EF9Cu;
label_50ef9c:
    // 0x50ef9c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x50ef9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_50efa0:
    // 0x50efa0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x50efa0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_50efa4:
    // 0x50efa4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x50efa4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_50efa8:
    // 0x50efa8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x50efa8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_50efac:
    // 0x50efac: 0x3e00008  jr          $ra
label_50efb0:
    if (ctx->pc == 0x50EFB0u) {
        ctx->pc = 0x50EFB0u;
            // 0x50efb0: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->pc = 0x50EFB4u;
        goto label_50efb4;
    }
    ctx->pc = 0x50EFACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x50EFB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50EFACu;
            // 0x50efb0: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x50EFB4u;
label_50efb4:
    // 0x50efb4: 0x0  nop
    ctx->pc = 0x50efb4u;
    // NOP
label_50efb8:
    // 0x50efb8: 0x0  nop
    ctx->pc = 0x50efb8u;
    // NOP
label_50efbc:
    // 0x50efbc: 0x0  nop
    ctx->pc = 0x50efbcu;
    // NOP
label_50efc0:
    // 0x50efc0: 0x3e00008  jr          $ra
label_50efc4:
    if (ctx->pc == 0x50EFC4u) {
        ctx->pc = 0x50EFC8u;
        goto label_50efc8;
    }
    ctx->pc = 0x50EFC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x50EFC8u;
label_50efc8:
    // 0x50efc8: 0x0  nop
    ctx->pc = 0x50efc8u;
    // NOP
label_50efcc:
    // 0x50efcc: 0x0  nop
    ctx->pc = 0x50efccu;
    // NOP
label_50efd0:
    // 0x50efd0: 0x27bdfad0  addiu       $sp, $sp, -0x530
    ctx->pc = 0x50efd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965968));
label_50efd4:
    // 0x50efd4: 0x3c0500af  lui         $a1, 0xAF
    ctx->pc = 0x50efd4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)175 << 16));
label_50efd8:
    // 0x50efd8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x50efd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_50efdc:
    // 0x50efdc: 0x24a50e84  addiu       $a1, $a1, 0xE84
    ctx->pc = 0x50efdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3716));
label_50efe0:
    // 0x50efe0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x50efe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_50efe4:
    // 0x50efe4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x50efe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_50efe8:
    // 0x50efe8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x50efe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_50efec:
    // 0x50efec: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x50efecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_50eff0:
    // 0x50eff0: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x50eff0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_50eff4:
    // 0x50eff4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x50eff4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_50eff8:
    // 0x50eff8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x50eff8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_50effc:
    // 0x50effc: 0x8c830124  lw          $v1, 0x124($a0)
    ctx->pc = 0x50effcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 292)));
label_50f000:
    // 0x50f000: 0x8c920050  lw          $s2, 0x50($a0)
    ctx->pc = 0x50f000u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_50f004:
    // 0x50f004: 0x8c860128  lw          $a2, 0x128($a0)
    ctx->pc = 0x50f004u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 296)));
label_50f008:
    // 0x50f008: 0x2c610007  sltiu       $at, $v1, 0x7
    ctx->pc = 0x50f008u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_50f00c:
    // 0x50f00c: 0x62080  sll         $a0, $a2, 2
    ctx->pc = 0x50f00cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_50f010:
    // 0x50f010: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x50f010u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_50f014:
    // 0x50f014: 0x102004fd  beqz        $at, . + 4 + (0x4FD << 2)
label_50f018:
    if (ctx->pc == 0x50F018u) {
        ctx->pc = 0x50F018u;
            // 0x50f018: 0x8c910000  lw          $s1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x50F01Cu;
        goto label_50f01c;
    }
    ctx->pc = 0x50F014u;
    {
        const bool branch_taken_0x50f014 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x50F018u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50F014u;
            // 0x50f018: 0x8c910000  lw          $s1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50f014) {
            ctx->pc = 0x51040Cu;
            goto label_51040c;
        }
    }
    ctx->pc = 0x50F01Cu;
label_50f01c:
    // 0x50f01c: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x50f01cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_50f020:
    // 0x50f020: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x50f020u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_50f024:
    // 0x50f024: 0x2484bc80  addiu       $a0, $a0, -0x4380
    ctx->pc = 0x50f024u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950016));
label_50f028:
    // 0x50f028: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x50f028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_50f02c:
    // 0x50f02c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x50f02cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_50f030:
    // 0x50f030: 0x600008  jr          $v1
label_50f034:
    if (ctx->pc == 0x50F034u) {
        ctx->pc = 0x50F038u;
        goto label_50f038;
    }
    ctx->pc = 0x50F030u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x50F038u: goto label_50f038;
            case 0x50F12Cu: goto label_50f12c;
            case 0x50F260u: goto label_50f260;
            case 0x50F648u: goto label_50f648;
            case 0x50FCC8u: goto label_50fcc8;
            case 0x51040Cu: goto label_51040c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x50F038u;
label_50f038:
    // 0x50f038: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x50f038u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_50f03c:
    // 0x50f03c: 0x3c033d56  lui         $v1, 0x3D56
    ctx->pc = 0x50f03cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15702 << 16));
label_50f040:
    // 0x50f040: 0x8c448a08  lw          $a0, -0x75F8($v0)
    ctx->pc = 0x50f040u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_50f044:
    // 0x50f044: 0xc6010134  lwc1        $f1, 0x134($s0)
    ctx->pc = 0x50f044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_50f048:
    // 0x50f048: 0xc4820018  lwc1        $f2, 0x18($a0)
    ctx->pc = 0x50f048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_50f04c:
    // 0x50f04c: 0x34627750  ori         $v0, $v1, 0x7750
    ctx->pc = 0x50f04cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)30544);
label_50f050:
    // 0x50f050: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x50f050u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_50f054:
    // 0x50f054: 0x0  nop
    ctx->pc = 0x50f054u;
    // NOP
label_50f058:
    // 0x50f058: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x50f058u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_50f05c:
    // 0x50f05c: 0x46010302  mul.s       $f12, $f0, $f1
    ctx->pc = 0x50f05cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_50f060:
    // 0x50f060: 0xc0477a8  jal         func_11DEA0
label_50f064:
    if (ctx->pc == 0x50F064u) {
        ctx->pc = 0x50F064u;
            // 0x50f064: 0xe6010134  swc1        $f1, 0x134($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 308), bits); }
        ctx->pc = 0x50F068u;
        goto label_50f068;
    }
    ctx->pc = 0x50F060u;
    SET_GPR_U32(ctx, 31, 0x50F068u);
    ctx->pc = 0x50F064u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50F060u;
            // 0x50f064: 0xe6010134  swc1        $f1, 0x134($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 308), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DEA0u;
    if (runtime->hasFunction(0x11DEA0u)) {
        auto targetFn = runtime->lookupFunction(0x11DEA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50F068u; }
        if (ctx->pc != 0x50F068u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DEA0_0x11dea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50F068u; }
        if (ctx->pc != 0x50F068u) { return; }
    }
    ctx->pc = 0x50F068u;
label_50f068:
    // 0x50f068: 0x3c023e19  lui         $v0, 0x3E19
    ctx->pc = 0x50f068u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15897 << 16));
label_50f06c:
    // 0x50f06c: 0x27a404e0  addiu       $a0, $sp, 0x4E0
    ctx->pc = 0x50f06cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1248));
label_50f070:
    // 0x50f070: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x50f070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_50f074:
    // 0x50f074: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x50f074u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_50f078:
    // 0x50f078: 0x0  nop
    ctx->pc = 0x50f078u;
    // NOP
label_50f07c:
    // 0x50f07c: 0x46000b42  mul.s       $f13, $f1, $f0
    ctx->pc = 0x50f07cu;
    ctx->f[13] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_50f080:
    // 0x50f080: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x50f080u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_50f084:
    // 0x50f084: 0xc04cbd8  jal         func_132F60
label_50f088:
    if (ctx->pc == 0x50F088u) {
        ctx->pc = 0x50F088u;
            // 0x50f088: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x50F08Cu;
        goto label_50f08c;
    }
    ctx->pc = 0x50F084u;
    SET_GPR_U32(ctx, 31, 0x50F08Cu);
    ctx->pc = 0x50F088u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50F084u;
            // 0x50f088: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50F08Cu; }
        if (ctx->pc != 0x50F08Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50F08Cu; }
        if (ctx->pc != 0x50F08Cu) { return; }
    }
    ctx->pc = 0x50F08Cu;
label_50f08c:
    // 0x50f08c: 0x8e040128  lw          $a0, 0x128($s0)
    ctx->pc = 0x50f08cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 296)));
label_50f090:
    // 0x50f090: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x50f090u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_50f094:
    // 0x50f094: 0x24630e84  addiu       $v1, $v1, 0xE84
    ctx->pc = 0x50f094u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3716));
label_50f098:
    // 0x50f098: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x50f098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_50f09c:
    // 0x50f09c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x50f09cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_50f0a0:
    // 0x50f0a0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x50f0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_50f0a4:
    // 0x50f0a4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x50f0a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_50f0a8:
    // 0x50f0a8: 0x8c830a6c  lw          $v1, 0xA6C($a0)
    ctx->pc = 0x50f0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2668)));
label_50f0ac:
    // 0x50f0ac: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
label_50f0b0:
    if (ctx->pc == 0x50F0B0u) {
        ctx->pc = 0x50F0B0u;
            // 0x50f0b0: 0x24850830  addiu       $a1, $a0, 0x830 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 2096));
        ctx->pc = 0x50F0B4u;
        goto label_50f0b4;
    }
    ctx->pc = 0x50F0ACu;
    {
        const bool branch_taken_0x50f0ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x50f0ac) {
            ctx->pc = 0x50F0B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x50F0ACu;
            // 0x50f0b0: 0x24850830  addiu       $a1, $a0, 0x830 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 2096));
        ctx->in_delay_slot = false;
            ctx->pc = 0x50F0C8u;
            goto label_50f0c8;
        }
    }
    ctx->pc = 0x50F0B4u;
label_50f0b4:
    // 0x50f0b4: 0x8c840a60  lw          $a0, 0xA60($a0)
    ctx->pc = 0x50f0b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2656)));
label_50f0b8:
    // 0x50f0b8: 0xc0eecc8  jal         func_3BB320
label_50f0bc:
    if (ctx->pc == 0x50F0BCu) {
        ctx->pc = 0x50F0BCu;
            // 0x50f0bc: 0x27a503f0  addiu       $a1, $sp, 0x3F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1008));
        ctx->pc = 0x50F0C0u;
        goto label_50f0c0;
    }
    ctx->pc = 0x50F0B8u;
    SET_GPR_U32(ctx, 31, 0x50F0C0u);
    ctx->pc = 0x50F0BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50F0B8u;
            // 0x50f0bc: 0x27a503f0  addiu       $a1, $sp, 0x3F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1008));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BB320u;
    if (runtime->hasFunction(0x3BB320u)) {
        auto targetFn = runtime->lookupFunction(0x3BB320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50F0C0u; }
        if (ctx->pc != 0x50F0C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BB320_0x3bb320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50F0C0u; }
        if (ctx->pc != 0x50F0C0u) { return; }
    }
    ctx->pc = 0x50F0C0u;
label_50f0c0:
    // 0x50f0c0: 0x10000004  b           . + 4 + (0x4 << 2)
label_50f0c4:
    if (ctx->pc == 0x50F0C4u) {
        ctx->pc = 0x50F0C4u;
            // 0x50f0c4: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->pc = 0x50F0C8u;
        goto label_50f0c8;
    }
    ctx->pc = 0x50F0C0u;
    {
        const bool branch_taken_0x50f0c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x50F0C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50F0C0u;
            // 0x50f0c4: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50f0c0) {
            ctx->pc = 0x50F0D4u;
            goto label_50f0d4;
        }
    }
    ctx->pc = 0x50F0C8u;
label_50f0c8:
    // 0x50f0c8: 0xc04c720  jal         func_131C80
label_50f0cc:
    if (ctx->pc == 0x50F0CCu) {
        ctx->pc = 0x50F0CCu;
            // 0x50f0cc: 0x27a403f0  addiu       $a0, $sp, 0x3F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1008));
        ctx->pc = 0x50F0D0u;
        goto label_50f0d0;
    }
    ctx->pc = 0x50F0C8u;
    SET_GPR_U32(ctx, 31, 0x50F0D0u);
    ctx->pc = 0x50F0CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50F0C8u;
            // 0x50f0cc: 0x27a403f0  addiu       $a0, $sp, 0x3F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1008));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131C80u;
    if (runtime->hasFunction(0x131C80u)) {
        auto targetFn = runtime->lookupFunction(0x131C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50F0D0u; }
        if (ctx->pc != 0x50F0D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131C80_0x131c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50F0D0u; }
        if (ctx->pc != 0x50F0D0u) { return; }
    }
    ctx->pc = 0x50F0D0u;
label_50f0d0:
    // 0x50f0d0: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x50f0d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_50f0d4:
    // 0x50f0d4: 0xc04c720  jal         func_131C80
label_50f0d8:
    if (ctx->pc == 0x50F0D8u) {
        ctx->pc = 0x50F0D8u;
            // 0x50f0d8: 0x27a503f0  addiu       $a1, $sp, 0x3F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1008));
        ctx->pc = 0x50F0DCu;
        goto label_50f0dc;
    }
    ctx->pc = 0x50F0D4u;
    SET_GPR_U32(ctx, 31, 0x50F0DCu);
    ctx->pc = 0x50F0D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50F0D4u;
            // 0x50f0d8: 0x27a503f0  addiu       $a1, $sp, 0x3F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1008));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131C80u;
    if (runtime->hasFunction(0x131C80u)) {
        auto targetFn = runtime->lookupFunction(0x131C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50F0DCu; }
        if (ctx->pc != 0x50F0DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131C80_0x131c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50F0DCu; }
        if (ctx->pc != 0x50F0DCu) { return; }
    }
    ctx->pc = 0x50F0DCu;
label_50f0dc:
    // 0x50f0dc: 0x27a404f0  addiu       $a0, $sp, 0x4F0
    ctx->pc = 0x50f0dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1264));
label_50f0e0:
    // 0x50f0e0: 0xc04f278  jal         func_13C9E0
label_50f0e4:
    if (ctx->pc == 0x50F0E4u) {
        ctx->pc = 0x50F0E4u;
            // 0x50f0e4: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->pc = 0x50F0E8u;
        goto label_50f0e8;
    }
    ctx->pc = 0x50F0E0u;
    SET_GPR_U32(ctx, 31, 0x50F0E8u);
    ctx->pc = 0x50F0E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50F0E0u;
            // 0x50f0e4: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50F0E8u; }
        if (ctx->pc != 0x50F0E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50F0E8u; }
        if (ctx->pc != 0x50F0E8u) { return; }
    }
    ctx->pc = 0x50F0E8u;
label_50f0e8:
    // 0x50f0e8: 0x262502c0  addiu       $a1, $s1, 0x2C0
    ctx->pc = 0x50f0e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 704));
label_50f0ec:
    // 0x50f0ec: 0xc04ce80  jal         func_133A00
label_50f0f0:
    if (ctx->pc == 0x50F0F0u) {
        ctx->pc = 0x50F0F0u;
            // 0x50f0f0: 0x27a404f0  addiu       $a0, $sp, 0x4F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1264));
        ctx->pc = 0x50F0F4u;
        goto label_50f0f4;
    }
    ctx->pc = 0x50F0ECu;
    SET_GPR_U32(ctx, 31, 0x50F0F4u);
    ctx->pc = 0x50F0F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50F0ECu;
            // 0x50f0f0: 0x27a404f0  addiu       $a0, $sp, 0x4F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1264));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50F0F4u; }
        if (ctx->pc != 0x50F0F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50F0F4u; }
        if (ctx->pc != 0x50F0F4u) { return; }
    }
    ctx->pc = 0x50F0F4u;
label_50f0f4:
    // 0x50f0f4: 0x8e030130  lw          $v1, 0x130($s0)
    ctx->pc = 0x50f0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
label_50f0f8:
    // 0x50f0f8: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x50f0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_50f0fc:
    // 0x50f0fc: 0x2442bcd0  addiu       $v0, $v0, -0x4330
    ctx->pc = 0x50f0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950096));
label_50f100:
    // 0x50f100: 0x27a404d0  addiu       $a0, $sp, 0x4D0
    ctx->pc = 0x50f100u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1232));
label_50f104:
    // 0x50f104: 0x27a504e0  addiu       $a1, $sp, 0x4E0
    ctx->pc = 0x50f104u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1248));
label_50f108:
    // 0x50f108: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x50f108u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_50f10c:
    // 0x50f10c: 0xc04cbe0  jal         func_132F80
label_50f110:
    if (ctx->pc == 0x50F110u) {
        ctx->pc = 0x50F110u;
            // 0x50f110: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x50F114u;
        goto label_50f114;
    }
    ctx->pc = 0x50F10Cu;
    SET_GPR_U32(ctx, 31, 0x50F114u);
    ctx->pc = 0x50F110u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50F10Cu;
            // 0x50f110: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F80u;
    if (runtime->hasFunction(0x132F80u)) {
        auto targetFn = runtime->lookupFunction(0x132F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50F114u; }
        if (ctx->pc != 0x50F114u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F80_0x132f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50F114u; }
        if (ctx->pc != 0x50F114u) { return; }
    }
    ctx->pc = 0x50F114u;
label_50f114:
    // 0x50f114: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x50f114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_50f118:
    // 0x50f118: 0x27a504f0  addiu       $a1, $sp, 0x4F0
    ctx->pc = 0x50f118u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1264));
label_50f11c:
    // 0x50f11c: 0xc04cca0  jal         func_133280
label_50f120:
    if (ctx->pc == 0x50F120u) {
        ctx->pc = 0x50F120u;
            // 0x50f120: 0x27a604d0  addiu       $a2, $sp, 0x4D0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1232));
        ctx->pc = 0x50F124u;
        goto label_50f124;
    }
    ctx->pc = 0x50F11Cu;
    SET_GPR_U32(ctx, 31, 0x50F124u);
    ctx->pc = 0x50F120u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50F11Cu;
            // 0x50f120: 0x27a604d0  addiu       $a2, $sp, 0x4D0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1232));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50F124u; }
        if (ctx->pc != 0x50F124u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50F124u; }
        if (ctx->pc != 0x50F124u) { return; }
    }
    ctx->pc = 0x50F124u;
label_50f124:
    // 0x50f124: 0x100004ba  b           . + 4 + (0x4BA << 2)
label_50f128:
    if (ctx->pc == 0x50F128u) {
        ctx->pc = 0x50F128u;
            // 0x50f128: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x50F12Cu;
        goto label_50f12c;
    }
    ctx->pc = 0x50F124u;
    {
        const bool branch_taken_0x50f124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x50F128u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50F124u;
            // 0x50f128: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50f124) {
            ctx->pc = 0x510410u;
            goto label_510410;
        }
    }
    ctx->pc = 0x50F12Cu;
label_50f12c:
    // 0x50f12c: 0x8e230a6c  lw          $v1, 0xA6C($s1)
    ctx->pc = 0x50f12cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2668)));
label_50f130:
    // 0x50f130: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x50f130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_50f134:
    // 0x50f134: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
label_50f138:
    if (ctx->pc == 0x50F138u) {
        ctx->pc = 0x50F138u;
            // 0x50f138: 0x27a403e0  addiu       $a0, $sp, 0x3E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 992));
        ctx->pc = 0x50F13Cu;
        goto label_50f13c;
    }
    ctx->pc = 0x50F134u;
    {
        const bool branch_taken_0x50f134 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x50f134) {
            ctx->pc = 0x50F138u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x50F134u;
            // 0x50f138: 0x27a403e0  addiu       $a0, $sp, 0x3E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 992));
        ctx->in_delay_slot = false;
            ctx->pc = 0x50F150u;
            goto label_50f150;
        }
    }
    ctx->pc = 0x50F13Cu;
label_50f13c:
    // 0x50f13c: 0x8e240a60  lw          $a0, 0xA60($s1)
    ctx->pc = 0x50f13cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2656)));
label_50f140:
    // 0x50f140: 0xc0eecc8  jal         func_3BB320
label_50f144:
    if (ctx->pc == 0x50F144u) {
        ctx->pc = 0x50F144u;
            // 0x50f144: 0x27a503e0  addiu       $a1, $sp, 0x3E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 992));
        ctx->pc = 0x50F148u;
        goto label_50f148;
    }
    ctx->pc = 0x50F140u;
    SET_GPR_U32(ctx, 31, 0x50F148u);
    ctx->pc = 0x50F144u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50F140u;
            // 0x50f144: 0x27a503e0  addiu       $a1, $sp, 0x3E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 992));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BB320u;
    if (runtime->hasFunction(0x3BB320u)) {
        auto targetFn = runtime->lookupFunction(0x3BB320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50F148u; }
        if (ctx->pc != 0x50F148u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BB320_0x3bb320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50F148u; }
        if (ctx->pc != 0x50F148u) { return; }
    }
    ctx->pc = 0x50F148u;
label_50f148:
    // 0x50f148: 0x10000004  b           . + 4 + (0x4 << 2)
label_50f14c:
    if (ctx->pc == 0x50F14Cu) {
        ctx->pc = 0x50F14Cu;
            // 0x50f14c: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->pc = 0x50F150u;
        goto label_50f150;
    }
    ctx->pc = 0x50F148u;
    {
        const bool branch_taken_0x50f148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x50F14Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50F148u;
            // 0x50f14c: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50f148) {
            ctx->pc = 0x50F15Cu;
            goto label_50f15c;
        }
    }
    ctx->pc = 0x50F150u;
label_50f150:
    // 0x50f150: 0xc04c720  jal         func_131C80
label_50f154:
    if (ctx->pc == 0x50F154u) {
        ctx->pc = 0x50F154u;
            // 0x50f154: 0x26250830  addiu       $a1, $s1, 0x830 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 2096));
        ctx->pc = 0x50F158u;
        goto label_50f158;
    }
    ctx->pc = 0x50F150u;
    SET_GPR_U32(ctx, 31, 0x50F158u);
    ctx->pc = 0x50F154u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50F150u;
            // 0x50f154: 0x26250830  addiu       $a1, $s1, 0x830 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 2096));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131C80u;
    if (runtime->hasFunction(0x131C80u)) {
        auto targetFn = runtime->lookupFunction(0x131C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50F158u; }
        if (ctx->pc != 0x50F158u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131C80_0x131c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50F158u; }
        if (ctx->pc != 0x50F158u) { return; }
    }
    ctx->pc = 0x50F158u;
label_50f158:
    // 0x50f158: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x50f158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_50f15c:
    // 0x50f15c: 0xc04c720  jal         func_131C80
label_50f160:
    if (ctx->pc == 0x50F160u) {
        ctx->pc = 0x50F160u;
            // 0x50f160: 0x27a503e0  addiu       $a1, $sp, 0x3E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 992));
        ctx->pc = 0x50F164u;
        goto label_50f164;
    }
    ctx->pc = 0x50F15Cu;
    SET_GPR_U32(ctx, 31, 0x50F164u);
    ctx->pc = 0x50F160u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50F15Cu;
            // 0x50f160: 0x27a503e0  addiu       $a1, $sp, 0x3E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 992));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131C80u;
    if (runtime->hasFunction(0x131C80u)) {
        auto targetFn = runtime->lookupFunction(0x131C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50F164u; }
        if (ctx->pc != 0x50F164u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131C80_0x131c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50F164u; }
        if (ctx->pc != 0x50F164u) { return; }
    }
    ctx->pc = 0x50F164u;
label_50f164:
    // 0x50f164: 0x8e220e34  lw          $v0, 0xE34($s1)
    ctx->pc = 0x50f164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3636)));
label_50f168:
    // 0x50f168: 0x64120001  daddiu      $s2, $zero, 0x1
    ctx->pc = 0x50f168u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_50f16c:
    // 0x50f16c: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
label_50f170:
    if (ctx->pc == 0x50F170u) {
        ctx->pc = 0x50F170u;
            // 0x50f170: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50F174u;
        goto label_50f174;
    }
    ctx->pc = 0x50F16Cu;
    {
        const bool branch_taken_0x50f16c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x50F170u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50F16Cu;
            // 0x50f170: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50f16c) {
            ctx->pc = 0x50F184u;
            goto label_50f184;
        }
    }
    ctx->pc = 0x50F174u;
label_50f174:
    // 0x50f174: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x50f174u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_50f178:
    // 0x50f178: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_50f17c:
    if (ctx->pc == 0x50F17Cu) {
        ctx->pc = 0x50F180u;
        goto label_50f180;
    }
    ctx->pc = 0x50F178u;
    {
        const bool branch_taken_0x50f178 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x50f178) {
            ctx->pc = 0x50F184u;
            goto label_50f184;
        }
    }
    ctx->pc = 0x50F180u;
label_50f180:
    // 0x50f180: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x50f180u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_50f184:
    // 0x50f184: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_50f188:
    if (ctx->pc == 0x50F188u) {
        ctx->pc = 0x50F18Cu;
        goto label_50f18c;
    }
    ctx->pc = 0x50F184u;
    {
        const bool branch_taken_0x50f184 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x50f184) {
            ctx->pc = 0x50F1A0u;
            goto label_50f1a0;
        }
    }
    ctx->pc = 0x50F18Cu;
label_50f18c:
    // 0x50f18c: 0xc075eb4  jal         func_1D7AD0
label_50f190:
    if (ctx->pc == 0x50F190u) {
        ctx->pc = 0x50F190u;
            // 0x50f190: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50F194u;
        goto label_50f194;
    }
    ctx->pc = 0x50F18Cu;
    SET_GPR_U32(ctx, 31, 0x50F194u);
    ctx->pc = 0x50F190u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50F18Cu;
            // 0x50f190: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50F194u; }
        if (ctx->pc != 0x50F194u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50F194u; }
        if (ctx->pc != 0x50F194u) { return; }
    }
    ctx->pc = 0x50F194u;
label_50f194:
    // 0x50f194: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_50f198:
    if (ctx->pc == 0x50F198u) {
        ctx->pc = 0x50F19Cu;
        goto label_50f19c;
    }
    ctx->pc = 0x50F194u;
    {
        const bool branch_taken_0x50f194 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x50f194) {
            ctx->pc = 0x50F1A0u;
            goto label_50f1a0;
        }
    }
    ctx->pc = 0x50F19Cu;
label_50f19c:
    // 0x50f19c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x50f19cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_50f1a0:
    // 0x50f1a0: 0x16400005  bnez        $s2, . + 4 + (0x5 << 2)
label_50f1a4:
    if (ctx->pc == 0x50F1A4u) {
        ctx->pc = 0x50F1A8u;
        goto label_50f1a8;
    }
    ctx->pc = 0x50F1A0u;
    {
        const bool branch_taken_0x50f1a0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x50f1a0) {
            ctx->pc = 0x50F1B8u;
            goto label_50f1b8;
        }
    }
    ctx->pc = 0x50F1A8u;
label_50f1a8:
    // 0x50f1a8: 0x8e230e34  lw          $v1, 0xE34($s1)
    ctx->pc = 0x50f1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3636)));
label_50f1ac:
    // 0x50f1ac: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x50f1acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_50f1b0:
    // 0x50f1b0: 0x54620014  bnel        $v1, $v0, . + 4 + (0x14 << 2)
label_50f1b4:
    if (ctx->pc == 0x50F1B4u) {
        ctx->pc = 0x50F1B4u;
            // 0x50f1b4: 0x27a40490  addiu       $a0, $sp, 0x490 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1168));
        ctx->pc = 0x50F1B8u;
        goto label_50f1b8;
    }
    ctx->pc = 0x50F1B0u;
    {
        const bool branch_taken_0x50f1b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x50f1b0) {
            ctx->pc = 0x50F1B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x50F1B0u;
            // 0x50f1b4: 0x27a40490  addiu       $a0, $sp, 0x490 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1168));
        ctx->in_delay_slot = false;
            ctx->pc = 0x50F204u;
            goto label_50f204;
        }
    }
    ctx->pc = 0x50F1B8u;
label_50f1b8:
    // 0x50f1b8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x50f1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_50f1bc:
    // 0x50f1bc: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x50f1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_50f1c0:
    // 0x50f1c0: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x50f1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_50f1c4:
    // 0x50f1c4: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x50f1c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_50f1c8:
    // 0x50f1c8: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_50f1cc:
    if (ctx->pc == 0x50F1CCu) {
        ctx->pc = 0x50F1D0u;
        goto label_50f1d0;
    }
    ctx->pc = 0x50F1C8u;
    {
        const bool branch_taken_0x50f1c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x50f1c8) {
            ctx->pc = 0x50F200u;
            goto label_50f200;
        }
    }
    ctx->pc = 0x50F1D0u;
label_50f1d0:
    // 0x50f1d0: 0x823211aa  lb          $s2, 0x11AA($s1)
    ctx->pc = 0x50f1d0u;
    SET_GPR_S32(ctx, 18, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 4522)));
label_50f1d4:
    // 0x50f1d4: 0xc0ba364  jal         func_2E8D90
label_50f1d8:
    if (ctx->pc == 0x50F1D8u) {
        ctx->pc = 0x50F1D8u;
            // 0x50f1d8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x50F1DCu;
        goto label_50f1dc;
    }
    ctx->pc = 0x50F1D4u;
    SET_GPR_U32(ctx, 31, 0x50F1DCu);
    ctx->pc = 0x50F1D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50F1D4u;
            // 0x50f1d8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E8D90u;
    if (runtime->hasFunction(0x2E8D90u)) {
        auto targetFn = runtime->lookupFunction(0x2E8D90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50F1DCu; }
        if (ctx->pc != 0x50F1DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E8D90_0x2e8d90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50F1DCu; }
        if (ctx->pc != 0x50F1DCu) { return; }
    }
    ctx->pc = 0x50F1DCu;
label_50f1dc:
    // 0x50f1dc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x50f1dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_50f1e0:
    // 0x50f1e0: 0x324400ff  andi        $a0, $s2, 0xFF
    ctx->pc = 0x50f1e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
label_50f1e4:
    // 0x50f1e4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x50f1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_50f1e8:
    // 0x50f1e8: 0x260600d0  addiu       $a2, $s0, 0xD0
    ctx->pc = 0x50f1e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
label_50f1ec:
    // 0x50f1ec: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x50f1ecu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
label_50f1f0:
    // 0x50f1f0: 0x26070010  addiu       $a3, $s0, 0x10
    ctx->pc = 0x50f1f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_50f1f4:
    // 0x50f1f4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x50f1f4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_50f1f8:
    // 0x50f1f8: 0xc0bb404  jal         func_2ED010
label_50f1fc:
    if (ctx->pc == 0x50F1FCu) {
        ctx->pc = 0x50F1FCu;
            // 0x50f1fc: 0x240a0003  addiu       $t2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x50F200u;
        goto label_50f200;
    }
    ctx->pc = 0x50F1F8u;
    SET_GPR_U32(ctx, 31, 0x50F200u);
    ctx->pc = 0x50F1FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50F1F8u;
            // 0x50f1fc: 0x240a0003  addiu       $t2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50F200u; }
        if (ctx->pc != 0x50F200u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50F200u; }
        if (ctx->pc != 0x50F200u) { return; }
    }
    ctx->pc = 0x50F200u;
label_50f200:
    // 0x50f200: 0x27a40490  addiu       $a0, $sp, 0x490
    ctx->pc = 0x50f200u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1168));
label_50f204:
    // 0x50f204: 0xc04f278  jal         func_13C9E0
label_50f208:
    if (ctx->pc == 0x50F208u) {
        ctx->pc = 0x50F208u;
            // 0x50f208: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->pc = 0x50F20Cu;
        goto label_50f20c;
    }
    ctx->pc = 0x50F204u;
    SET_GPR_U32(ctx, 31, 0x50F20Cu);
    ctx->pc = 0x50F208u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50F204u;
            // 0x50f208: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50F20Cu; }
        if (ctx->pc != 0x50F20Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50F20Cu; }
        if (ctx->pc != 0x50F20Cu) { return; }
    }
    ctx->pc = 0x50F20Cu;
label_50f20c:
    // 0x50f20c: 0x27a40490  addiu       $a0, $sp, 0x490
    ctx->pc = 0x50f20cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1168));
label_50f210:
    // 0x50f210: 0xc04ce80  jal         func_133A00
label_50f214:
    if (ctx->pc == 0x50F214u) {
        ctx->pc = 0x50F214u;
            // 0x50f214: 0x262502c0  addiu       $a1, $s1, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 704));
        ctx->pc = 0x50F218u;
        goto label_50f218;
    }
    ctx->pc = 0x50F210u;
    SET_GPR_U32(ctx, 31, 0x50F218u);
    ctx->pc = 0x50F214u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50F210u;
            // 0x50f214: 0x262502c0  addiu       $a1, $s1, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50F218u; }
        if (ctx->pc != 0x50F218u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50F218u; }
        if (ctx->pc != 0x50F218u) { return; }
    }
    ctx->pc = 0x50F218u;
label_50f218:
    // 0x50f218: 0x8e030130  lw          $v1, 0x130($s0)
    ctx->pc = 0x50f218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
label_50f21c:
    // 0x50f21c: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x50f21cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_50f220:
    // 0x50f220: 0x2442bcd0  addiu       $v0, $v0, -0x4330
    ctx->pc = 0x50f220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950096));
label_50f224:
    // 0x50f224: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x50f224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_50f228:
    // 0x50f228: 0x27a50490  addiu       $a1, $sp, 0x490
    ctx->pc = 0x50f228u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1168));
label_50f22c:
    // 0x50f22c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x50f22cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_50f230:
    // 0x50f230: 0xc04cca0  jal         func_133280
label_50f234:
    if (ctx->pc == 0x50F234u) {
        ctx->pc = 0x50F234u;
            // 0x50f234: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x50F238u;
        goto label_50f238;
    }
    ctx->pc = 0x50F230u;
    SET_GPR_U32(ctx, 31, 0x50F238u);
    ctx->pc = 0x50F234u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50F230u;
            // 0x50f234: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50F238u; }
        if (ctx->pc != 0x50F238u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50F238u; }
        if (ctx->pc != 0x50F238u) { return; }
    }
    ctx->pc = 0x50F238u;
label_50f238:
    // 0x50f238: 0x8e230a68  lw          $v1, 0xA68($s1)
    ctx->pc = 0x50f238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2664)));
label_50f23c:
    // 0x50f23c: 0x14600473  bnez        $v1, . + 4 + (0x473 << 2)
label_50f240:
    if (ctx->pc == 0x50F240u) {
        ctx->pc = 0x50F244u;
        goto label_50f244;
    }
    ctx->pc = 0x50F23Cu;
    {
        const bool branch_taken_0x50f23c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x50f23c) {
            ctx->pc = 0x51040Cu;
            goto label_51040c;
        }
    }
    ctx->pc = 0x50F244u;
label_50f244:
    // 0x50f244: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x50f244u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_50f248:
    // 0x50f248: 0x8c440cc8  lw          $a0, 0xCC8($v0)
    ctx->pc = 0x50f248u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3272)));
label_50f24c:
    // 0x50f24c: 0xc1443ac  jal         func_510EB0
label_50f250:
    if (ctx->pc == 0x50F250u) {
        ctx->pc = 0x50F250u;
            // 0x50f250: 0x8e050128  lw          $a1, 0x128($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 296)));
        ctx->pc = 0x50F254u;
        goto label_50f254;
    }
    ctx->pc = 0x50F24Cu;
    SET_GPR_U32(ctx, 31, 0x50F254u);
    ctx->pc = 0x50F250u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50F24Cu;
            // 0x50f250: 0x8e050128  lw          $a1, 0x128($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 296)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x510EB0u;
    if (runtime->hasFunction(0x510EB0u)) {
        auto targetFn = runtime->lookupFunction(0x510EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50F254u; }
        if (ctx->pc != 0x50F254u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00510EB0_0x510eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50F254u; }
        if (ctx->pc != 0x50F254u) { return; }
    }
    ctx->pc = 0x50F254u;
label_50f254:
    // 0x50f254: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x50f254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_50f258:
    // 0x50f258: 0x1000046c  b           . + 4 + (0x46C << 2)
label_50f25c:
    if (ctx->pc == 0x50F25Cu) {
        ctx->pc = 0x50F25Cu;
            // 0x50f25c: 0xae030124  sw          $v1, 0x124($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 3));
        ctx->pc = 0x50F260u;
        goto label_50f260;
    }
    ctx->pc = 0x50F258u;
    {
        const bool branch_taken_0x50f258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x50F25Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50F258u;
            // 0x50f25c: 0xae030124  sw          $v1, 0x124($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50f258) {
            ctx->pc = 0x51040Cu;
            goto label_51040c;
        }
    }
    ctx->pc = 0x50F260u;
label_50f260:
    // 0x50f260: 0x8e230e34  lw          $v1, 0xE34($s1)
    ctx->pc = 0x50f260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3636)));
label_50f264:
    // 0x50f264: 0x64120001  daddiu      $s2, $zero, 0x1
    ctx->pc = 0x50f264u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_50f268:
    // 0x50f268: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
label_50f26c:
    if (ctx->pc == 0x50F26Cu) {
        ctx->pc = 0x50F26Cu;
            // 0x50f26c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50F270u;
        goto label_50f270;
    }
    ctx->pc = 0x50F268u;
    {
        const bool branch_taken_0x50f268 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x50F26Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50F268u;
            // 0x50f26c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50f268) {
            ctx->pc = 0x50F280u;
            goto label_50f280;
        }
    }
    ctx->pc = 0x50F270u;
label_50f270:
    // 0x50f270: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x50f270u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_50f274:
    // 0x50f274: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_50f278:
    if (ctx->pc == 0x50F278u) {
        ctx->pc = 0x50F27Cu;
        goto label_50f27c;
    }
    ctx->pc = 0x50F274u;
    {
        const bool branch_taken_0x50f274 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x50f274) {
            ctx->pc = 0x50F280u;
            goto label_50f280;
        }
    }
    ctx->pc = 0x50F27Cu;
label_50f27c:
    // 0x50f27c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x50f27cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_50f280:
    // 0x50f280: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_50f284:
    if (ctx->pc == 0x50F284u) {
        ctx->pc = 0x50F288u;
        goto label_50f288;
    }
    ctx->pc = 0x50F280u;
    {
        const bool branch_taken_0x50f280 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x50f280) {
            ctx->pc = 0x50F29Cu;
            goto label_50f29c;
        }
    }
    ctx->pc = 0x50F288u;
label_50f288:
    // 0x50f288: 0xc075eb4  jal         func_1D7AD0
label_50f28c:
    if (ctx->pc == 0x50F28Cu) {
        ctx->pc = 0x50F28Cu;
            // 0x50f28c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50F290u;
        goto label_50f290;
    }
    ctx->pc = 0x50F288u;
    SET_GPR_U32(ctx, 31, 0x50F290u);
    ctx->pc = 0x50F28Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50F288u;
            // 0x50f28c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50F290u; }
        if (ctx->pc != 0x50F290u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50F290u; }
        if (ctx->pc != 0x50F290u) { return; }
    }
    ctx->pc = 0x50F290u;
label_50f290:
    // 0x50f290: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_50f294:
    if (ctx->pc == 0x50F294u) {
        ctx->pc = 0x50F298u;
        goto label_50f298;
    }
    ctx->pc = 0x50F290u;
    {
        const bool branch_taken_0x50f290 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x50f290) {
            ctx->pc = 0x50F29Cu;
            goto label_50f29c;
        }
    }
    ctx->pc = 0x50F298u;
label_50f298:
    // 0x50f298: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x50f298u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_50f29c:
    // 0x50f29c: 0x16400005  bnez        $s2, . + 4 + (0x5 << 2)
label_50f2a0:
    if (ctx->pc == 0x50F2A0u) {
        ctx->pc = 0x50F2A4u;
        goto label_50f2a4;
    }
    ctx->pc = 0x50F29Cu;
    {
        const bool branch_taken_0x50f29c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x50f29c) {
            ctx->pc = 0x50F2B4u;
            goto label_50f2b4;
        }
    }
    ctx->pc = 0x50F2A4u;
label_50f2a4:
    // 0x50f2a4: 0x8e240e34  lw          $a0, 0xE34($s1)
    ctx->pc = 0x50f2a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3636)));
label_50f2a8:
    // 0x50f2a8: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x50f2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_50f2ac:
    // 0x50f2ac: 0x14830013  bne         $a0, $v1, . + 4 + (0x13 << 2)
label_50f2b0:
    if (ctx->pc == 0x50F2B0u) {
        ctx->pc = 0x50F2B4u;
        goto label_50f2b4;
    }
    ctx->pc = 0x50F2ACu;
    {
        const bool branch_taken_0x50f2ac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x50f2ac) {
            ctx->pc = 0x50F2FCu;
            goto label_50f2fc;
        }
    }
    ctx->pc = 0x50F2B4u;
label_50f2b4:
    // 0x50f2b4: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x50f2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_50f2b8:
    // 0x50f2b8: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x50f2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_50f2bc:
    // 0x50f2bc: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x50f2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_50f2c0:
    // 0x50f2c0: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x50f2c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
label_50f2c4:
    // 0x50f2c4: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
label_50f2c8:
    if (ctx->pc == 0x50F2C8u) {
        ctx->pc = 0x50F2CCu;
        goto label_50f2cc;
    }
    ctx->pc = 0x50F2C4u;
    {
        const bool branch_taken_0x50f2c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x50f2c4) {
            ctx->pc = 0x50F2FCu;
            goto label_50f2fc;
        }
    }
    ctx->pc = 0x50F2CCu;
label_50f2cc:
    // 0x50f2cc: 0x823111aa  lb          $s1, 0x11AA($s1)
    ctx->pc = 0x50f2ccu;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 4522)));
label_50f2d0:
    // 0x50f2d0: 0xc0ba364  jal         func_2E8D90
label_50f2d4:
    if (ctx->pc == 0x50F2D4u) {
        ctx->pc = 0x50F2D4u;
            // 0x50f2d4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x50F2D8u;
        goto label_50f2d8;
    }
    ctx->pc = 0x50F2D0u;
    SET_GPR_U32(ctx, 31, 0x50F2D8u);
    ctx->pc = 0x50F2D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50F2D0u;
            // 0x50f2d4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E8D90u;
    if (runtime->hasFunction(0x2E8D90u)) {
        auto targetFn = runtime->lookupFunction(0x2E8D90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50F2D8u; }
        if (ctx->pc != 0x50F2D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E8D90_0x2e8d90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50F2D8u; }
        if (ctx->pc != 0x50F2D8u) { return; }
    }
    ctx->pc = 0x50F2D8u;
label_50f2d8:
    // 0x50f2d8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x50f2d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_50f2dc:
    // 0x50f2dc: 0x322400ff  andi        $a0, $s1, 0xFF
    ctx->pc = 0x50f2dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_50f2e0:
    // 0x50f2e0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x50f2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_50f2e4:
    // 0x50f2e4: 0x260600d0  addiu       $a2, $s0, 0xD0
    ctx->pc = 0x50f2e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
label_50f2e8:
    // 0x50f2e8: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x50f2e8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
label_50f2ec:
    // 0x50f2ec: 0x26070010  addiu       $a3, $s0, 0x10
    ctx->pc = 0x50f2ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_50f2f0:
    // 0x50f2f0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x50f2f0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_50f2f4:
    // 0x50f2f4: 0xc0bb404  jal         func_2ED010
label_50f2f8:
    if (ctx->pc == 0x50F2F8u) {
        ctx->pc = 0x50F2F8u;
            // 0x50f2f8: 0x240a0003  addiu       $t2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x50F2FCu;
        goto label_50f2fc;
    }
    ctx->pc = 0x50F2F4u;
    SET_GPR_U32(ctx, 31, 0x50F2FCu);
    ctx->pc = 0x50F2F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50F2F4u;
            // 0x50f2f8: 0x240a0003  addiu       $t2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50F2FCu; }
        if (ctx->pc != 0x50F2FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50F2FCu; }
        if (ctx->pc != 0x50F2FCu) { return; }
    }
    ctx->pc = 0x50F2FCu;
label_50f2fc:
    // 0x50f2fc: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x50f2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_50f300:
    // 0x50f300: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x50f300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_50f304:
    // 0x50f304: 0xc6010134  lwc1        $f1, 0x134($s0)
    ctx->pc = 0x50f304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_50f308:
    // 0x50f308: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x50f308u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_50f30c:
    // 0x50f30c: 0xc4620018  lwc1        $f2, 0x18($v1)
    ctx->pc = 0x50f30cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_50f310:
    // 0x50f310: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x50f310u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_50f314:
    // 0x50f314: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x50f314u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_50f318:
    // 0x50f318: 0x4500043c  bc1f        . + 4 + (0x43C << 2)
label_50f31c:
    if (ctx->pc == 0x50F31Cu) {
        ctx->pc = 0x50F31Cu;
            // 0x50f31c: 0xe6010134  swc1        $f1, 0x134($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 308), bits); }
        ctx->pc = 0x50F320u;
        goto label_50f320;
    }
    ctx->pc = 0x50F318u;
    {
        const bool branch_taken_0x50f318 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x50F31Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50F318u;
            // 0x50f31c: 0xe6010134  swc1        $f1, 0x134($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 308), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x50f318) {
            ctx->pc = 0x51040Cu;
            goto label_51040c;
        }
    }
    ctx->pc = 0x50F320u;
label_50f320:
    // 0x50f320: 0xe7a00460  swc1        $f0, 0x460($sp)
    ctx->pc = 0x50f320u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1120), bits); }
label_50f324:
    // 0x50f324: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x50f324u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_50f328:
    // 0x50f328: 0xe7a00464  swc1        $f0, 0x464($sp)
    ctx->pc = 0x50f328u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1124), bits); }
label_50f32c:
    // 0x50f32c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x50f32cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_50f330:
    // 0x50f330: 0xe7a00468  swc1        $f0, 0x468($sp)
    ctx->pc = 0x50f330u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1128), bits); }
label_50f334:
    // 0x50f334: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x50f334u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_50f338:
    // 0x50f338: 0xe7a0046c  swc1        $f0, 0x46C($sp)
    ctx->pc = 0x50f338u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1132), bits); }
label_50f33c:
    // 0x50f33c: 0x8e110050  lw          $s1, 0x50($s0)
    ctx->pc = 0x50f33cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_50f340:
    // 0x50f340: 0xc08914c  jal         func_224530
label_50f344:
    if (ctx->pc == 0x50F344u) {
        ctx->pc = 0x50F344u;
            // 0x50f344: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50F348u;
        goto label_50f348;
    }
    ctx->pc = 0x50F340u;
    SET_GPR_U32(ctx, 31, 0x50F348u);
    ctx->pc = 0x50F344u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50F340u;
            // 0x50f344: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50F348u; }
        if (ctx->pc != 0x50F348u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50F348u; }
        if (ctx->pc != 0x50F348u) { return; }
    }
    ctx->pc = 0x50F348u;
label_50f348:
    // 0x50f348: 0xc6020018  lwc1        $f2, 0x18($s0)
    ctx->pc = 0x50f348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_50f34c:
    // 0x50f34c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x50f34cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_50f350:
    // 0x50f350: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x50f350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_50f354:
    // 0x50f354: 0x27a503d0  addiu       $a1, $sp, 0x3D0
    ctx->pc = 0x50f354u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 976));
label_50f358:
    // 0x50f358: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x50f358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_50f35c:
    // 0x50f35c: 0x27a603c0  addiu       $a2, $sp, 0x3C0
    ctx->pc = 0x50f35cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 960));
label_50f360:
    // 0x50f360: 0xe7a003d0  swc1        $f0, 0x3D0($sp)
    ctx->pc = 0x50f360u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 976), bits); }
label_50f364:
    // 0x50f364: 0xafa003dc  sw          $zero, 0x3DC($sp)
    ctx->pc = 0x50f364u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 988), GPR_U32(ctx, 0));
label_50f368:
    // 0x50f368: 0xe7a103d4  swc1        $f1, 0x3D4($sp)
    ctx->pc = 0x50f368u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 980), bits); }
label_50f36c:
    // 0x50f36c: 0xe7a203d8  swc1        $f2, 0x3D8($sp)
    ctx->pc = 0x50f36cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 984), bits); }
label_50f370:
    // 0x50f370: 0xc603002c  lwc1        $f3, 0x2C($s0)
    ctx->pc = 0x50f370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_50f374:
    // 0x50f374: 0xc6020028  lwc1        $f2, 0x28($s0)
    ctx->pc = 0x50f374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_50f378:
    // 0x50f378: 0xc6010024  lwc1        $f1, 0x24($s0)
    ctx->pc = 0x50f378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_50f37c:
    // 0x50f37c: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x50f37cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_50f380:
    // 0x50f380: 0xe7a003c0  swc1        $f0, 0x3C0($sp)
    ctx->pc = 0x50f380u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 960), bits); }
label_50f384:
    // 0x50f384: 0xe7a103c4  swc1        $f1, 0x3C4($sp)
    ctx->pc = 0x50f384u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 964), bits); }
label_50f388:
    // 0x50f388: 0xe7a203c8  swc1        $f2, 0x3C8($sp)
    ctx->pc = 0x50f388u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 968), bits); }
label_50f38c:
    // 0x50f38c: 0xc0892b0  jal         func_224AC0
label_50f390:
    if (ctx->pc == 0x50F390u) {
        ctx->pc = 0x50F390u;
            // 0x50f390: 0xe7a303cc  swc1        $f3, 0x3CC($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 972), bits); }
        ctx->pc = 0x50F394u;
        goto label_50f394;
    }
    ctx->pc = 0x50F38Cu;
    SET_GPR_U32(ctx, 31, 0x50F394u);
    ctx->pc = 0x50F390u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50F38Cu;
            // 0x50f390: 0xe7a303cc  swc1        $f3, 0x3CC($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 972), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224AC0u;
    if (runtime->hasFunction(0x224AC0u)) {
        auto targetFn = runtime->lookupFunction(0x224AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50F394u; }
        if (ctx->pc != 0x50F394u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224AC0_0x224ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50F394u; }
        if (ctx->pc != 0x50F394u) { return; }
    }
    ctx->pc = 0x50F394u;
label_50f394:
    // 0x50f394: 0x3c030081  lui         $v1, 0x81
    ctx->pc = 0x50f394u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)129 << 16));
label_50f398:
    // 0x50f398: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x50f398u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_50f39c:
    // 0x50f39c: 0xae23002c  sw          $v1, 0x2C($s1)
    ctx->pc = 0x50f39cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 3));
label_50f3a0:
    // 0x50f3a0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x50f3a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_50f3a4:
    // 0x50f3a4: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x50f3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_50f3a8:
    // 0x50f3a8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x50f3a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_50f3ac:
    // 0x50f3ac: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x50f3acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_50f3b0:
    // 0x50f3b0: 0xc08bff0  jal         func_22FFC0
label_50f3b4:
    if (ctx->pc == 0x50F3B4u) {
        ctx->pc = 0x50F3B4u;
            // 0x50f3b4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50F3B8u;
        goto label_50f3b8;
    }
    ctx->pc = 0x50F3B0u;
    SET_GPR_U32(ctx, 31, 0x50F3B8u);
    ctx->pc = 0x50F3B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50F3B0u;
            // 0x50f3b4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50F3B8u; }
        if (ctx->pc != 0x50F3B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50F3B8u; }
        if (ctx->pc != 0x50F3B8u) { return; }
    }
    ctx->pc = 0x50F3B8u;
label_50f3b8:
    // 0x50f3b8: 0xc088b74  jal         func_222DD0
label_50f3bc:
    if (ctx->pc == 0x50F3BCu) {
        ctx->pc = 0x50F3BCu;
            // 0x50f3bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50F3C0u;
        goto label_50f3c0;
    }
    ctx->pc = 0x50F3B8u;
    SET_GPR_U32(ctx, 31, 0x50F3C0u);
    ctx->pc = 0x50F3BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50F3B8u;
            // 0x50f3bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50F3C0u; }
        if (ctx->pc != 0x50F3C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50F3C0u; }
        if (ctx->pc != 0x50F3C0u) { return; }
    }
    ctx->pc = 0x50F3C0u;
label_50f3c0:
    // 0x50f3c0: 0x8e3900a0  lw          $t9, 0xA0($s1)
    ctx->pc = 0x50f3c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_50f3c4:
    // 0x50f3c4: 0x262400a0  addiu       $a0, $s1, 0xA0
    ctx->pc = 0x50f3c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
label_50f3c8:
    // 0x50f3c8: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x50f3c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_50f3cc:
    // 0x50f3cc: 0x320f809  jalr        $t9
label_50f3d0:
    if (ctx->pc == 0x50F3D0u) {
        ctx->pc = 0x50F3D0u;
            // 0x50f3d0: 0x27a50460  addiu       $a1, $sp, 0x460 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1120));
        ctx->pc = 0x50F3D4u;
        goto label_50f3d4;
    }
    ctx->pc = 0x50F3CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x50F3D4u);
        ctx->pc = 0x50F3D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50F3CCu;
            // 0x50f3d0: 0x27a50460  addiu       $a1, $sp, 0x460 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1120));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x50F3D4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x50F3D4u; }
            if (ctx->pc != 0x50F3D4u) { return; }
        }
        }
    }
    ctx->pc = 0x50F3D4u;
label_50f3d4:
    // 0x50f3d4: 0xc088b74  jal         func_222DD0
label_50f3d8:
    if (ctx->pc == 0x50F3D8u) {
        ctx->pc = 0x50F3D8u;
            // 0x50f3d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50F3DCu;
        goto label_50f3dc;
    }
    ctx->pc = 0x50F3D4u;
    SET_GPR_U32(ctx, 31, 0x50F3DCu);
    ctx->pc = 0x50F3D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50F3D4u;
            // 0x50f3d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50F3DCu; }
        if (ctx->pc != 0x50F3DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50F3DCu; }
        if (ctx->pc != 0x50F3DCu) { return; }
    }
    ctx->pc = 0x50F3DCu;
label_50f3dc:
    // 0x50f3dc: 0x8e3900a0  lw          $t9, 0xA0($s1)
    ctx->pc = 0x50f3dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_50f3e0:
    // 0x50f3e0: 0x262400a0  addiu       $a0, $s1, 0xA0
    ctx->pc = 0x50f3e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
label_50f3e4:
    // 0x50f3e4: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x50f3e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_50f3e8:
    // 0x50f3e8: 0x320f809  jalr        $t9
label_50f3ec:
    if (ctx->pc == 0x50F3ECu) {
        ctx->pc = 0x50F3ECu;
            // 0x50f3ec: 0x27a50460  addiu       $a1, $sp, 0x460 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1120));
        ctx->pc = 0x50F3F0u;
        goto label_50f3f0;
    }
    ctx->pc = 0x50F3E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x50F3F0u);
        ctx->pc = 0x50F3ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50F3E8u;
            // 0x50f3ec: 0x27a50460  addiu       $a1, $sp, 0x460 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1120));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x50F3F0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x50F3F0u; }
            if (ctx->pc != 0x50F3F0u) { return; }
        }
        }
    }
    ctx->pc = 0x50F3F0u;
label_50f3f0:
    // 0x50f3f0: 0x3c023fed  lui         $v0, 0x3FED
    ctx->pc = 0x50f3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16365 << 16));
label_50f3f4:
    // 0x50f3f4: 0x27a40480  addiu       $a0, $sp, 0x480
    ctx->pc = 0x50f3f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1152));
label_50f3f8:
    // 0x50f3f8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x50f3f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_50f3fc:
    // 0x50f3fc: 0x3442097b  ori         $v0, $v0, 0x97B
    ctx->pc = 0x50f3fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2427);
label_50f400:
    // 0x50f400: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x50f400u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_50f404:
    // 0x50f404: 0xc04cbd8  jal         func_132F60
label_50f408:
    if (ctx->pc == 0x50F408u) {
        ctx->pc = 0x50F408u;
            // 0x50f408: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x50F40Cu;
        goto label_50f40c;
    }
    ctx->pc = 0x50F404u;
    SET_GPR_U32(ctx, 31, 0x50F40Cu);
    ctx->pc = 0x50F408u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50F404u;
            // 0x50f408: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50F40Cu; }
        if (ctx->pc != 0x50F40Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50F40Cu; }
        if (ctx->pc != 0x50F40Cu) { return; }
    }
    ctx->pc = 0x50F40Cu;
label_50f40c:
    // 0x50f40c: 0x27a40380  addiu       $a0, $sp, 0x380
    ctx->pc = 0x50f40cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 896));
label_50f410:
    // 0x50f410: 0xc04f278  jal         func_13C9E0
label_50f414:
    if (ctx->pc == 0x50F414u) {
        ctx->pc = 0x50F414u;
            // 0x50f414: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->pc = 0x50F418u;
        goto label_50f418;
    }
    ctx->pc = 0x50F410u;
    SET_GPR_U32(ctx, 31, 0x50F418u);
    ctx->pc = 0x50F414u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50F410u;
            // 0x50f414: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50F418u; }
        if (ctx->pc != 0x50F418u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50F418u; }
        if (ctx->pc != 0x50F418u) { return; }
    }
    ctx->pc = 0x50F418u;
label_50f418:
    // 0x50f418: 0x27a40470  addiu       $a0, $sp, 0x470
    ctx->pc = 0x50f418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
label_50f41c:
    // 0x50f41c: 0x27a50380  addiu       $a1, $sp, 0x380
    ctx->pc = 0x50f41cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 896));
label_50f420:
    // 0x50f420: 0xc04cca0  jal         func_133280
label_50f424:
    if (ctx->pc == 0x50F424u) {
        ctx->pc = 0x50F424u;
            // 0x50f424: 0x27a60480  addiu       $a2, $sp, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1152));
        ctx->pc = 0x50F428u;
        goto label_50f428;
    }
    ctx->pc = 0x50F420u;
    SET_GPR_U32(ctx, 31, 0x50F428u);
    ctx->pc = 0x50F424u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50F420u;
            // 0x50f424: 0x27a60480  addiu       $a2, $sp, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50F428u; }
        if (ctx->pc != 0x50F428u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50F428u; }
        if (ctx->pc != 0x50F428u) { return; }
    }
    ctx->pc = 0x50F428u;
label_50f428:
    // 0x50f428: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x50f428u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_50f42c:
    // 0x50f42c: 0xafa0037c  sw          $zero, 0x37C($sp)
    ctx->pc = 0x50f42cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 892), GPR_U32(ctx, 0));
label_50f430:
    // 0x50f430: 0xc7a20470  lwc1        $f2, 0x470($sp)
    ctx->pc = 0x50f430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_50f434:
    // 0x50f434: 0x8c52e3e0  lw          $s2, -0x1C20($v0)
    ctx->pc = 0x50f434u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_50f438:
    // 0x50f438: 0xc7a10474  lwc1        $f1, 0x474($sp)
    ctx->pc = 0x50f438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_50f43c:
    // 0x50f43c: 0xc7a00478  lwc1        $f0, 0x478($sp)
    ctx->pc = 0x50f43cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_50f440:
    // 0x50f440: 0xe7a20370  swc1        $f2, 0x370($sp)
    ctx->pc = 0x50f440u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 880), bits); }
label_50f444:
    // 0x50f444: 0xe7a10374  swc1        $f1, 0x374($sp)
    ctx->pc = 0x50f444u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 884), bits); }
label_50f448:
    // 0x50f448: 0xe7a00378  swc1        $f0, 0x378($sp)
    ctx->pc = 0x50f448u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 888), bits); }
label_50f44c:
    // 0x50f44c: 0xc6540020  lwc1        $f20, 0x20($s2)
    ctx->pc = 0x50f44cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_50f450:
    // 0x50f450: 0xc089638  jal         func_2258E0
label_50f454:
    if (ctx->pc == 0x50F454u) {
        ctx->pc = 0x50F454u;
            // 0x50f454: 0x262400a0  addiu       $a0, $s1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
        ctx->pc = 0x50F458u;
        goto label_50f458;
    }
    ctx->pc = 0x50F450u;
    SET_GPR_U32(ctx, 31, 0x50F458u);
    ctx->pc = 0x50F454u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50F450u;
            // 0x50f454: 0x262400a0  addiu       $a0, $s1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2258E0u;
    if (runtime->hasFunction(0x2258E0u)) {
        auto targetFn = runtime->lookupFunction(0x2258E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50F458u; }
        if (ctx->pc != 0x50F458u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002258E0_0x2258e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50F458u; }
        if (ctx->pc != 0x50F458u) { return; }
    }
    ctx->pc = 0x50F458u;
label_50f458:
    // 0x50f458: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x50f458u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_50f45c:
    // 0x50f45c: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x50f45cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_50f460:
    // 0x50f460: 0x46140102  mul.s       $f4, $f0, $f20
    ctx->pc = 0x50f460u;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_50f464:
    // 0x50f464: 0xc4450018  lwc1        $f5, 0x18($v0)
    ctx->pc = 0x50f464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_50f468:
    // 0x50f468: 0xc7a30370  lwc1        $f3, 0x370($sp)
    ctx->pc = 0x50f468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_50f46c:
    // 0x50f46c: 0xc7a20374  lwc1        $f2, 0x374($sp)
    ctx->pc = 0x50f46cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 884)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_50f470:
    // 0x50f470: 0x46042902  mul.s       $f4, $f5, $f4
    ctx->pc = 0x50f470u;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
label_50f474:
    // 0x50f474: 0xc7a10378  lwc1        $f1, 0x378($sp)
    ctx->pc = 0x50f474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 888)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_50f478:
    // 0x50f478: 0xc7a0037c  lwc1        $f0, 0x37C($sp)
    ctx->pc = 0x50f478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 892)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_50f47c:
    // 0x50f47c: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x50f47cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
label_50f480:
    // 0x50f480: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x50f480u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
label_50f484:
    // 0x50f484: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x50f484u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
label_50f488:
    // 0x50f488: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x50f488u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_50f48c:
    // 0x50f48c: 0xe7a30370  swc1        $f3, 0x370($sp)
    ctx->pc = 0x50f48cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 880), bits); }
label_50f490:
    // 0x50f490: 0xe7a20374  swc1        $f2, 0x374($sp)
    ctx->pc = 0x50f490u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 884), bits); }
label_50f494:
    // 0x50f494: 0xe7a10378  swc1        $f1, 0x378($sp)
    ctx->pc = 0x50f494u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 888), bits); }
label_50f498:
    // 0x50f498: 0xe7a0037c  swc1        $f0, 0x37C($sp)
    ctx->pc = 0x50f498u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 892), bits); }
label_50f49c:
    // 0x50f49c: 0xc6540018  lwc1        $f20, 0x18($s2)
    ctx->pc = 0x50f49cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_50f4a0:
    // 0x50f4a0: 0xc088b74  jal         func_222DD0
label_50f4a4:
    if (ctx->pc == 0x50F4A4u) {
        ctx->pc = 0x50F4A4u;
            // 0x50f4a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50F4A8u;
        goto label_50f4a8;
    }
    ctx->pc = 0x50F4A0u;
    SET_GPR_U32(ctx, 31, 0x50F4A8u);
    ctx->pc = 0x50F4A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50F4A0u;
            // 0x50f4a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50F4A8u; }
        if (ctx->pc != 0x50F4A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50F4A8u; }
        if (ctx->pc != 0x50F4A8u) { return; }
    }
    ctx->pc = 0x50F4A8u;
label_50f4a8:
    // 0x50f4a8: 0x8e3900a0  lw          $t9, 0xA0($s1)
    ctx->pc = 0x50f4a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_50f4ac:
    // 0x50f4ac: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x50f4acu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_50f4b0:
    // 0x50f4b0: 0x262400a0  addiu       $a0, $s1, 0xA0
    ctx->pc = 0x50f4b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
label_50f4b4:
    // 0x50f4b4: 0x8f390058  lw          $t9, 0x58($t9)
    ctx->pc = 0x50f4b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 88)));
label_50f4b8:
    // 0x50f4b8: 0x320f809  jalr        $t9
label_50f4bc:
    if (ctx->pc == 0x50F4BCu) {
        ctx->pc = 0x50F4BCu;
            // 0x50f4bc: 0x27a50370  addiu       $a1, $sp, 0x370 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 880));
        ctx->pc = 0x50F4C0u;
        goto label_50f4c0;
    }
    ctx->pc = 0x50F4B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x50F4C0u);
        ctx->pc = 0x50F4BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50F4B8u;
            // 0x50f4bc: 0x27a50370  addiu       $a1, $sp, 0x370 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 880));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x50F4C0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x50F4C0u; }
            if (ctx->pc != 0x50F4C0u) { return; }
        }
        }
    }
    ctx->pc = 0x50F4C0u;
label_50f4c0:
    // 0x50f4c0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x50f4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_50f4c4:
    // 0x50f4c4: 0xc074740  jal         func_1D1D00
label_50f4c8:
    if (ctx->pc == 0x50F4C8u) {
        ctx->pc = 0x50F4C8u;
            // 0x50f4c8: 0x8c44a2e0  lw          $a0, -0x5D20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943456)));
        ctx->pc = 0x50F4CCu;
        goto label_50f4cc;
    }
    ctx->pc = 0x50F4C4u;
    SET_GPR_U32(ctx, 31, 0x50F4CCu);
    ctx->pc = 0x50F4C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50F4C4u;
            // 0x50f4c8: 0x8c44a2e0  lw          $a0, -0x5D20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943456)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D1D00u;
    if (runtime->hasFunction(0x1D1D00u)) {
        auto targetFn = runtime->lookupFunction(0x1D1D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50F4CCu; }
        if (ctx->pc != 0x50F4CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1D00_0x1d1d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50F4CCu; }
        if (ctx->pc != 0x50F4CCu) { return; }
    }
    ctx->pc = 0x50F4CCu;
label_50f4cc:
    // 0x50f4cc: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_50f4d0:
    if (ctx->pc == 0x50F4D0u) {
        ctx->pc = 0x50F4D0u;
            // 0x50f4d0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x50F4D4u;
        goto label_50f4d4;
    }
    ctx->pc = 0x50F4CCu;
    {
        const bool branch_taken_0x50f4cc = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x50f4cc) {
            ctx->pc = 0x50F4D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x50F4CCu;
            // 0x50f4d0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x50F4E0u;
            goto label_50f4e0;
        }
    }
    ctx->pc = 0x50F4D4u;
label_50f4d4:
    // 0x50f4d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x50f4d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_50f4d8:
    // 0x50f4d8: 0x10000007  b           . + 4 + (0x7 << 2)
label_50f4dc:
    if (ctx->pc == 0x50F4DCu) {
        ctx->pc = 0x50F4DCu;
            // 0x50f4dc: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x50F4E0u;
        goto label_50f4e0;
    }
    ctx->pc = 0x50F4D8u;
    {
        const bool branch_taken_0x50f4d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x50F4DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50F4D8u;
            // 0x50f4dc: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x50f4d8) {
            ctx->pc = 0x50F4F8u;
            goto label_50f4f8;
        }
    }
    ctx->pc = 0x50F4E0u;
label_50f4e0:
    // 0x50f4e0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x50f4e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_50f4e4:
    // 0x50f4e4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x50f4e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_50f4e8:
    // 0x50f4e8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x50f4e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_50f4ec:
    // 0x50f4ec: 0x0  nop
    ctx->pc = 0x50f4ecu;
    // NOP
label_50f4f0:
    // 0x50f4f0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x50f4f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_50f4f4:
    // 0x50f4f4: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x50f4f4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_50f4f8:
    // 0x50f4f8: 0x3c022f80  lui         $v0, 0x2F80
    ctx->pc = 0x50f4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12160 << 16));
label_50f4fc:
    // 0x50f4fc: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x50f4fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_50f500:
    // 0x50f500: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x50f500u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_50f504:
    // 0x50f504: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x50f504u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
label_50f508:
    // 0x50f508: 0x460100c2  mul.s       $f3, $f0, $f1
    ctx->pc = 0x50f508u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_50f50c:
    // 0x50f50c: 0x3c064000  lui         $a2, 0x4000
    ctx->pc = 0x50f50cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16384 << 16));
label_50f510:
    // 0x50f510: 0x3c0238d1  lui         $v0, 0x38D1
    ctx->pc = 0x50f510u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14545 << 16));
label_50f514:
    // 0x50f514: 0x3445b717  ori         $a1, $v0, 0xB717
    ctx->pc = 0x50f514u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46871);
label_50f518:
    // 0x50f518: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x50f518u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_50f51c:
    // 0x50f51c: 0xc482b728  lwc1        $f2, -0x48D8($a0)
    ctx->pc = 0x50f51cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294948648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_50f520:
    // 0x50f520: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x50f520u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_50f524:
    // 0x50f524: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x50f524u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_50f528:
    // 0x50f528: 0x0  nop
    ctx->pc = 0x50f528u;
    // NOP
label_50f52c:
    // 0x50f52c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x50f52cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_50f530:
    // 0x50f530: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x50f530u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_50f534:
    // 0x50f534: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x50f534u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_50f538:
    // 0x50f538: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x50f538u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_50f53c:
    // 0x50f53c: 0xe6000110  swc1        $f0, 0x110($s0)
    ctx->pc = 0x50f53cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 272), bits); }
label_50f540:
    // 0x50f540: 0x8c44a2e0  lw          $a0, -0x5D20($v0)
    ctx->pc = 0x50f540u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943456)));
label_50f544:
    // 0x50f544: 0xc074740  jal         func_1D1D00
label_50f548:
    if (ctx->pc == 0x50F548u) {
        ctx->pc = 0x50F548u;
            // 0x50f548: 0xc474b72c  lwc1        $f20, -0x48D4($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294948652)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->pc = 0x50F54Cu;
        goto label_50f54c;
    }
    ctx->pc = 0x50F544u;
    SET_GPR_U32(ctx, 31, 0x50F54Cu);
    ctx->pc = 0x50F548u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50F544u;
            // 0x50f548: 0xc474b72c  lwc1        $f20, -0x48D4($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294948652)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D1D00u;
    if (runtime->hasFunction(0x1D1D00u)) {
        auto targetFn = runtime->lookupFunction(0x1D1D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50F54Cu; }
        if (ctx->pc != 0x50F54Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1D00_0x1d1d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50F54Cu; }
        if (ctx->pc != 0x50F54Cu) { return; }
    }
    ctx->pc = 0x50F54Cu;
label_50f54c:
    // 0x50f54c: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_50f550:
    if (ctx->pc == 0x50F550u) {
        ctx->pc = 0x50F550u;
            // 0x50f550: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x50F554u;
        goto label_50f554;
    }
    ctx->pc = 0x50F54Cu;
    {
        const bool branch_taken_0x50f54c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x50f54c) {
            ctx->pc = 0x50F550u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x50F54Cu;
            // 0x50f550: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x50F560u;
            goto label_50f560;
        }
    }
    ctx->pc = 0x50F554u;
label_50f554:
    // 0x50f554: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x50f554u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_50f558:
    // 0x50f558: 0x10000007  b           . + 4 + (0x7 << 2)
label_50f55c:
    if (ctx->pc == 0x50F55Cu) {
        ctx->pc = 0x50F55Cu;
            // 0x50f55c: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x50F560u;
        goto label_50f560;
    }
    ctx->pc = 0x50F558u;
    {
        const bool branch_taken_0x50f558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x50F55Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50F558u;
            // 0x50f55c: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x50f558) {
            ctx->pc = 0x50F578u;
            goto label_50f578;
        }
    }
    ctx->pc = 0x50F560u;
label_50f560:
    // 0x50f560: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x50f560u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_50f564:
    // 0x50f564: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x50f564u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_50f568:
    // 0x50f568: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x50f568u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_50f56c:
    // 0x50f56c: 0x0  nop
    ctx->pc = 0x50f56cu;
    // NOP
label_50f570:
    // 0x50f570: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x50f570u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_50f574:
    // 0x50f574: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x50f574u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_50f578:
    // 0x50f578: 0x3c022f80  lui         $v0, 0x2F80
    ctx->pc = 0x50f578u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12160 << 16));
label_50f57c:
    // 0x50f57c: 0x3c054000  lui         $a1, 0x4000
    ctx->pc = 0x50f57cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
label_50f580:
    // 0x50f580: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x50f580u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_50f584:
    // 0x50f584: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x50f584u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
label_50f588:
    // 0x50f588: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x50f588u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_50f58c:
    // 0x50f58c: 0x3c0238d1  lui         $v0, 0x38D1
    ctx->pc = 0x50f58cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14545 << 16));
label_50f590:
    // 0x50f590: 0x3444b717  ori         $a0, $v0, 0xB717
    ctx->pc = 0x50f590u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46871);
label_50f594:
    // 0x50f594: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x50f594u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_50f598:
    // 0x50f598: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x50f598u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_50f59c:
    // 0x50f59c: 0x0  nop
    ctx->pc = 0x50f59cu;
    // NOP
label_50f5a0:
    // 0x50f5a0: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x50f5a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_50f5a4:
    // 0x50f5a4: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x50f5a4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_50f5a8:
    // 0x50f5a8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x50f5a8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_50f5ac:
    // 0x50f5ac: 0x0  nop
    ctx->pc = 0x50f5acu;
    // NOP
label_50f5b0:
    // 0x50f5b0: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x50f5b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_50f5b4:
    // 0x50f5b4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x50f5b4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_50f5b8:
    // 0x50f5b8: 0xe6000114  swc1        $f0, 0x114($s0)
    ctx->pc = 0x50f5b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 276), bits); }
label_50f5bc:
    // 0x50f5bc: 0x8c44a2e0  lw          $a0, -0x5D20($v0)
    ctx->pc = 0x50f5bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943456)));
label_50f5c0:
    // 0x50f5c0: 0xc074740  jal         func_1D1D00
label_50f5c4:
    if (ctx->pc == 0x50F5C4u) {
        ctx->pc = 0x50F5C4u;
            // 0x50f5c4: 0xc474b730  lwc1        $f20, -0x48D0($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294948656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->pc = 0x50F5C8u;
        goto label_50f5c8;
    }
    ctx->pc = 0x50F5C0u;
    SET_GPR_U32(ctx, 31, 0x50F5C8u);
    ctx->pc = 0x50F5C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50F5C0u;
            // 0x50f5c4: 0xc474b730  lwc1        $f20, -0x48D0($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294948656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D1D00u;
    if (runtime->hasFunction(0x1D1D00u)) {
        auto targetFn = runtime->lookupFunction(0x1D1D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50F5C8u; }
        if (ctx->pc != 0x50F5C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1D00_0x1d1d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50F5C8u; }
        if (ctx->pc != 0x50F5C8u) { return; }
    }
    ctx->pc = 0x50F5C8u;
label_50f5c8:
    // 0x50f5c8: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_50f5cc:
    if (ctx->pc == 0x50F5CCu) {
        ctx->pc = 0x50F5CCu;
            // 0x50f5cc: 0x22042  srl         $a0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x50F5D0u;
        goto label_50f5d0;
    }
    ctx->pc = 0x50F5C8u;
    {
        const bool branch_taken_0x50f5c8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x50f5c8) {
            ctx->pc = 0x50F5CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x50F5C8u;
            // 0x50f5cc: 0x22042  srl         $a0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x50F5DCu;
            goto label_50f5dc;
        }
    }
    ctx->pc = 0x50F5D0u;
label_50f5d0:
    // 0x50f5d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x50f5d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_50f5d4:
    // 0x50f5d4: 0x10000007  b           . + 4 + (0x7 << 2)
label_50f5d8:
    if (ctx->pc == 0x50F5D8u) {
        ctx->pc = 0x50F5D8u;
            // 0x50f5d8: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x50F5DCu;
        goto label_50f5dc;
    }
    ctx->pc = 0x50F5D4u;
    {
        const bool branch_taken_0x50f5d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x50F5D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50F5D4u;
            // 0x50f5d8: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x50f5d4) {
            ctx->pc = 0x50F5F4u;
            goto label_50f5f4;
        }
    }
    ctx->pc = 0x50F5DCu;
label_50f5dc:
    // 0x50f5dc: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x50f5dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_50f5e0:
    // 0x50f5e0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x50f5e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_50f5e4:
    // 0x50f5e4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x50f5e4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_50f5e8:
    // 0x50f5e8: 0x0  nop
    ctx->pc = 0x50f5e8u;
    // NOP
label_50f5ec:
    // 0x50f5ec: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x50f5ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_50f5f0:
    // 0x50f5f0: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x50f5f0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_50f5f4:
    // 0x50f5f4: 0x3c032f80  lui         $v1, 0x2F80
    ctx->pc = 0x50f5f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12160 << 16));
label_50f5f8:
    // 0x50f5f8: 0x3c064000  lui         $a2, 0x4000
    ctx->pc = 0x50f5f8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16384 << 16));
label_50f5fc:
    // 0x50f5fc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x50f5fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_50f600:
    // 0x50f600: 0x3c044270  lui         $a0, 0x4270
    ctx->pc = 0x50f600u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17008 << 16));
label_50f604:
    // 0x50f604: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x50f604u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_50f608:
    // 0x50f608: 0x3c0338d1  lui         $v1, 0x38D1
    ctx->pc = 0x50f608u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)14545 << 16));
label_50f60c:
    // 0x50f60c: 0x3465b717  ori         $a1, $v1, 0xB717
    ctx->pc = 0x50f60cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46871);
label_50f610:
    // 0x50f610: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x50f610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_50f614:
    // 0x50f614: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x50f614u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_50f618:
    // 0x50f618: 0x0  nop
    ctx->pc = 0x50f618u;
    // NOP
label_50f61c:
    // 0x50f61c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x50f61cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_50f620:
    // 0x50f620: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x50f620u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_50f624:
    // 0x50f624: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x50f624u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_50f628:
    // 0x50f628: 0x0  nop
    ctx->pc = 0x50f628u;
    // NOP
label_50f62c:
    // 0x50f62c: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x50f62cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_50f630:
    // 0x50f630: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x50f630u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_50f634:
    // 0x50f634: 0xe6000118  swc1        $f0, 0x118($s0)
    ctx->pc = 0x50f634u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 280), bits); }
label_50f638:
    // 0x50f638: 0xae000140  sw          $zero, 0x140($s0)
    ctx->pc = 0x50f638u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 320), GPR_U32(ctx, 0));
label_50f63c:
    // 0x50f63c: 0xae040134  sw          $a0, 0x134($s0)
    ctx->pc = 0x50f63cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 308), GPR_U32(ctx, 4));
label_50f640:
    // 0x50f640: 0x10000372  b           . + 4 + (0x372 << 2)
label_50f644:
    if (ctx->pc == 0x50F644u) {
        ctx->pc = 0x50F644u;
            // 0x50f644: 0xae030124  sw          $v1, 0x124($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 3));
        ctx->pc = 0x50F648u;
        goto label_50f648;
    }
    ctx->pc = 0x50F640u;
    {
        const bool branch_taken_0x50f640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x50F644u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50F640u;
            // 0x50f644: 0xae030124  sw          $v1, 0x124($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50f640) {
            ctx->pc = 0x51040Cu;
            goto label_51040c;
        }
    }
    ctx->pc = 0x50F648u;
label_50f648:
    // 0x50f648: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x50f648u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_50f64c:
    // 0x50f64c: 0xc0dc9bc  jal         func_3726F0
label_50f650:
    if (ctx->pc == 0x50F650u) {
        ctx->pc = 0x50F650u;
            // 0x50f650: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x50F654u;
        goto label_50f654;
    }
    ctx->pc = 0x50F64Cu;
    SET_GPR_U32(ctx, 31, 0x50F654u);
    ctx->pc = 0x50F650u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50F64Cu;
            // 0x50f650: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3726F0u;
    if (runtime->hasFunction(0x3726F0u)) {
        auto targetFn = runtime->lookupFunction(0x3726F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50F654u; }
        if (ctx->pc != 0x50F654u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003726F0_0x3726f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50F654u; }
        if (ctx->pc != 0x50F654u) { return; }
    }
    ctx->pc = 0x50F654u;
label_50f654:
    // 0x50f654: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x50f654u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_50f658:
    // 0x50f658: 0xc0dc9a0  jal         func_372680
label_50f65c:
    if (ctx->pc == 0x50F65Cu) {
        ctx->pc = 0x50F65Cu;
            // 0x50f65c: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->pc = 0x50F660u;
        goto label_50f660;
    }
    ctx->pc = 0x50F658u;
    SET_GPR_U32(ctx, 31, 0x50F660u);
    ctx->pc = 0x50F65Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50F658u;
            // 0x50f65c: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x372680u;
    if (runtime->hasFunction(0x372680u)) {
        auto targetFn = runtime->lookupFunction(0x372680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50F660u; }
        if (ctx->pc != 0x50F660u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00372680_0x372680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50F660u; }
        if (ctx->pc != 0x50F660u) { return; }
    }
    ctx->pc = 0x50F660u;
label_50f660:
    // 0x50f660: 0x8e02012c  lw          $v0, 0x12C($s0)
    ctx->pc = 0x50f660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
label_50f664:
    // 0x50f664: 0x442013a  bltzl       $v0, . + 4 + (0x13A << 2)
label_50f668:
    if (ctx->pc == 0x50F668u) {
        ctx->pc = 0x50F668u;
            // 0x50f668: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50F66Cu;
        goto label_50f66c;
    }
    ctx->pc = 0x50F664u;
    {
        const bool branch_taken_0x50f664 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x50f664) {
            ctx->pc = 0x50F668u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x50F664u;
            // 0x50f668: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x50FB50u;
            goto label_50fb50;
        }
    }
    ctx->pc = 0x50F66Cu;
label_50f66c:
    // 0x50f66c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x50f66cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_50f670:
    // 0x50f670: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x50f670u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_50f674:
    // 0x50f674: 0x24420e84  addiu       $v0, $v0, 0xE84
    ctx->pc = 0x50f674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3716));
label_50f678:
    // 0x50f678: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x50f678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_50f67c:
    // 0x50f67c: 0x8e020148  lw          $v0, 0x148($s0)
    ctx->pc = 0x50f67cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
label_50f680:
    // 0x50f680: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
label_50f684:
    if (ctx->pc == 0x50F684u) {
        ctx->pc = 0x50F684u;
            // 0x50f684: 0x8c710000  lw          $s1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->pc = 0x50F688u;
        goto label_50f688;
    }
    ctx->pc = 0x50F680u;
    {
        const bool branch_taken_0x50f680 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x50F684u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50F680u;
            // 0x50f684: 0x8c710000  lw          $s1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50f680) {
            ctx->pc = 0x50F6F0u;
            goto label_50f6f0;
        }
    }
    ctx->pc = 0x50F688u;
label_50f688:
    // 0x50f688: 0xc077330  jal         func_1DCCC0
label_50f68c:
    if (ctx->pc == 0x50F68Cu) {
        ctx->pc = 0x50F68Cu;
            // 0x50f68c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50F690u;
        goto label_50f690;
    }
    ctx->pc = 0x50F688u;
    SET_GPR_U32(ctx, 31, 0x50F690u);
    ctx->pc = 0x50F68Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50F688u;
            // 0x50f68c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCCC0u;
    if (runtime->hasFunction(0x1DCCC0u)) {
        auto targetFn = runtime->lookupFunction(0x1DCCC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50F690u; }
        if (ctx->pc != 0x50F690u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCCC0_0x1dccc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50F690u; }
        if (ctx->pc != 0x50F690u) { return; }
    }
    ctx->pc = 0x50F690u;
label_50f690:
    // 0x50f690: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_50f694:
    if (ctx->pc == 0x50F694u) {
        ctx->pc = 0x50F698u;
        goto label_50f698;
    }
    ctx->pc = 0x50F690u;
    {
        const bool branch_taken_0x50f690 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x50f690) {
            ctx->pc = 0x50F6A8u;
            goto label_50f6a8;
        }
    }
    ctx->pc = 0x50F698u;
label_50f698:
    // 0x50f698: 0xc07732c  jal         func_1DCCB0
label_50f69c:
    if (ctx->pc == 0x50F69Cu) {
        ctx->pc = 0x50F69Cu;
            // 0x50f69c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50F6A0u;
        goto label_50f6a0;
    }
    ctx->pc = 0x50F698u;
    SET_GPR_U32(ctx, 31, 0x50F6A0u);
    ctx->pc = 0x50F69Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50F698u;
            // 0x50f69c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCCB0u;
    if (runtime->hasFunction(0x1DCCB0u)) {
        auto targetFn = runtime->lookupFunction(0x1DCCB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50F6A0u; }
        if (ctx->pc != 0x50F6A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCCB0_0x1dccb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50F6A0u; }
        if (ctx->pc != 0x50F6A0u) { return; }
    }
    ctx->pc = 0x50F6A0u;
label_50f6a0:
    // 0x50f6a0: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
label_50f6a4:
    if (ctx->pc == 0x50F6A4u) {
        ctx->pc = 0x50F6A4u;
            // 0x50f6a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50F6A8u;
        goto label_50f6a8;
    }
    ctx->pc = 0x50F6A0u;
    {
        const bool branch_taken_0x50f6a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x50f6a0) {
            ctx->pc = 0x50F6A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x50F6A0u;
            // 0x50f6a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x50F6F4u;
            goto label_50f6f4;
        }
    }
    ctx->pc = 0x50F6A8u;
label_50f6a8:
    // 0x50f6a8: 0xc0c05c4  jal         func_301710
label_50f6ac:
    if (ctx->pc == 0x50F6ACu) {
        ctx->pc = 0x50F6B0u;
        goto label_50f6b0;
    }
    ctx->pc = 0x50F6A8u;
    SET_GPR_U32(ctx, 31, 0x50F6B0u);
    ctx->pc = 0x301710u;
    if (runtime->hasFunction(0x301710u)) {
        auto targetFn = runtime->lookupFunction(0x301710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50F6B0u; }
        if (ctx->pc != 0x50F6B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00301710_0x301710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50F6B0u; }
        if (ctx->pc != 0x50F6B0u) { return; }
    }
    ctx->pc = 0x50F6B0u;
label_50f6b0:
    // 0x50f6b0: 0x8e050144  lw          $a1, 0x144($s0)
    ctx->pc = 0x50f6b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 324)));
label_50f6b4:
    // 0x50f6b4: 0xc0de630  jal         func_3798C0
label_50f6b8:
    if (ctx->pc == 0x50F6B8u) {
        ctx->pc = 0x50F6B8u;
            // 0x50f6b8: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x50F6BCu;
        goto label_50f6bc;
    }
    ctx->pc = 0x50F6B4u;
    SET_GPR_U32(ctx, 31, 0x50F6BCu);
    ctx->pc = 0x50F6B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50F6B4u;
            // 0x50f6b8: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3798C0u;
    if (runtime->hasFunction(0x3798C0u)) {
        auto targetFn = runtime->lookupFunction(0x3798C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50F6BCu; }
        if (ctx->pc != 0x50F6BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003798C0_0x3798c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50F6BCu; }
        if (ctx->pc != 0x50F6BCu) { return; }
    }
    ctx->pc = 0x50F6BCu;
label_50f6bc:
    // 0x50f6bc: 0xc07731c  jal         func_1DCC70
label_50f6c0:
    if (ctx->pc == 0x50F6C0u) {
        ctx->pc = 0x50F6C0u;
            // 0x50f6c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50F6C4u;
        goto label_50f6c4;
    }
    ctx->pc = 0x50F6BCu;
    SET_GPR_U32(ctx, 31, 0x50F6C4u);
    ctx->pc = 0x50F6C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50F6BCu;
            // 0x50f6c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC70u;
    if (runtime->hasFunction(0x1DCC70u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50F6C4u; }
        if (ctx->pc != 0x50F6C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC70_0x1dcc70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50F6C4u; }
        if (ctx->pc != 0x50F6C4u) { return; }
    }
    ctx->pc = 0x50F6C4u;
label_50f6c4:
    // 0x50f6c4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x50f6c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_50f6c8:
    // 0x50f6c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x50f6c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_50f6cc:
    // 0x50f6cc: 0xc0770e0  jal         func_1DC380
label_50f6d0:
    if (ctx->pc == 0x50F6D0u) {
        ctx->pc = 0x50F6D0u;
            // 0x50f6d0: 0x24050016  addiu       $a1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->pc = 0x50F6D4u;
        goto label_50f6d4;
    }
    ctx->pc = 0x50F6CCu;
    SET_GPR_U32(ctx, 31, 0x50F6D4u);
    ctx->pc = 0x50F6D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50F6CCu;
            // 0x50f6d0: 0x24050016  addiu       $a1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC380u;
    if (runtime->hasFunction(0x1DC380u)) {
        auto targetFn = runtime->lookupFunction(0x1DC380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50F6D4u; }
        if (ctx->pc != 0x50F6D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC380_0x1dc380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50F6D4u; }
        if (ctx->pc != 0x50F6D4u) { return; }
    }
    ctx->pc = 0x50F6D4u;
label_50f6d4:
    // 0x50f6d4: 0x8e790030  lw          $t9, 0x30($s3)
    ctx->pc = 0x50f6d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
label_50f6d8:
    // 0x50f6d8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x50f6d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_50f6dc:
    // 0x50f6dc: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x50f6dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_50f6e0:
    // 0x50f6e0: 0x320f809  jalr        $t9
label_50f6e4:
    if (ctx->pc == 0x50F6E4u) {
        ctx->pc = 0x50F6E4u;
            // 0x50f6e4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50F6E8u;
        goto label_50f6e8;
    }
    ctx->pc = 0x50F6E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x50F6E8u);
        ctx->pc = 0x50F6E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50F6E0u;
            // 0x50f6e4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x50F6E8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x50F6E8u; }
            if (ctx->pc != 0x50F6E8u) { return; }
        }
        }
    }
    ctx->pc = 0x50F6E8u;
label_50f6e8:
    // 0x50f6e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x50f6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_50f6ec:
    // 0x50f6ec: 0xae020148  sw          $v0, 0x148($s0)
    ctx->pc = 0x50f6ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 2));
label_50f6f0:
    // 0x50f6f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x50f6f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_50f6f4:
    // 0x50f6f4: 0xc077570  jal         func_1DD5C0
label_50f6f8:
    if (ctx->pc == 0x50F6F8u) {
        ctx->pc = 0x50F6FCu;
        goto label_50f6fc;
    }
    ctx->pc = 0x50F6F4u;
    SET_GPR_U32(ctx, 31, 0x50F6FCu);
    ctx->pc = 0x1DD5C0u;
    if (runtime->hasFunction(0x1DD5C0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD5C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50F6FCu; }
        if (ctx->pc != 0x50F6FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD5C0_0x1dd5c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50F6FCu; }
        if (ctx->pc != 0x50F6FCu) { return; }
    }
    ctx->pc = 0x50F6FCu;
label_50f6fc:
    // 0x50f6fc: 0xc0bd738  jal         func_2F5CE0
label_50f700:
    if (ctx->pc == 0x50F700u) {
        ctx->pc = 0x50F700u;
            // 0x50f700: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50F704u;
        goto label_50f704;
    }
    ctx->pc = 0x50F6FCu;
    SET_GPR_U32(ctx, 31, 0x50F704u);
    ctx->pc = 0x50F700u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50F6FCu;
            // 0x50f700: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F5CE0u;
    if (runtime->hasFunction(0x2F5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x2F5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50F704u; }
        if (ctx->pc != 0x50F704u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F5CE0_0x2f5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50F704u; }
        if (ctx->pc != 0x50F704u) { return; }
    }
    ctx->pc = 0x50F704u;
label_50f704:
    // 0x50f704: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x50f704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_50f708:
    // 0x50f708: 0x5443000b  bnel        $v0, $v1, . + 4 + (0xB << 2)
label_50f70c:
    if (ctx->pc == 0x50F70Cu) {
        ctx->pc = 0x50F70Cu;
            // 0x50f70c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50F710u;
        goto label_50f710;
    }
    ctx->pc = 0x50F708u;
    {
        const bool branch_taken_0x50f708 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x50f708) {
            ctx->pc = 0x50F70Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x50F708u;
            // 0x50f70c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x50F738u;
            goto label_50f738;
        }
    }
    ctx->pc = 0x50F710u;
label_50f710:
    // 0x50f710: 0xc077570  jal         func_1DD5C0
label_50f714:
    if (ctx->pc == 0x50F714u) {
        ctx->pc = 0x50F714u;
            // 0x50f714: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50F718u;
        goto label_50f718;
    }
    ctx->pc = 0x50F710u;
    SET_GPR_U32(ctx, 31, 0x50F718u);
    ctx->pc = 0x50F714u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50F710u;
            // 0x50f714: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD5C0u;
    if (runtime->hasFunction(0x1DD5C0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD5C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50F718u; }
        if (ctx->pc != 0x50F718u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD5C0_0x1dd5c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50F718u; }
        if (ctx->pc != 0x50F718u) { return; }
    }
    ctx->pc = 0x50F718u;
label_50f718:
    // 0x50f718: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x50f718u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_50f71c:
    // 0x50f71c: 0xc0e7aec  jal         func_39EBB0
label_50f720:
    if (ctx->pc == 0x50F720u) {
        ctx->pc = 0x50F720u;
            // 0x50f720: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x50F724u;
        goto label_50f724;
    }
    ctx->pc = 0x50F71Cu;
    SET_GPR_U32(ctx, 31, 0x50F724u);
    ctx->pc = 0x50F720u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50F71Cu;
            // 0x50f720: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x39EBB0u;
    if (runtime->hasFunction(0x39EBB0u)) {
        auto targetFn = runtime->lookupFunction(0x39EBB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50F724u; }
        if (ctx->pc != 0x50F724u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0039EBB0_0x39ebb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50F724u; }
        if (ctx->pc != 0x50F724u) { return; }
    }
    ctx->pc = 0x50F724u;
label_50f724:
    // 0x50f724: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x50f724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_50f728:
    // 0x50f728: 0xc0eece8  jal         func_3BB3A0
label_50f72c:
    if (ctx->pc == 0x50F72Cu) {
        ctx->pc = 0x50F72Cu;
            // 0x50f72c: 0x27a501e0  addiu       $a1, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->pc = 0x50F730u;
        goto label_50f730;
    }
    ctx->pc = 0x50F728u;
    SET_GPR_U32(ctx, 31, 0x50F730u);
    ctx->pc = 0x50F72Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50F728u;
            // 0x50f72c: 0x27a501e0  addiu       $a1, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BB3A0u;
    if (runtime->hasFunction(0x3BB3A0u)) {
        auto targetFn = runtime->lookupFunction(0x3BB3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50F730u; }
        if (ctx->pc != 0x50F730u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BB3A0_0x3bb3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50F730u; }
        if (ctx->pc != 0x50F730u) { return; }
    }
    ctx->pc = 0x50F730u;
label_50f730:
    // 0x50f730: 0x10000009  b           . + 4 + (0x9 << 2)
label_50f734:
    if (ctx->pc == 0x50F734u) {
        ctx->pc = 0x50F734u;
            // 0x50f734: 0x8e03013c  lw          $v1, 0x13C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 316)));
        ctx->pc = 0x50F738u;
        goto label_50f738;
    }
    ctx->pc = 0x50F730u;
    {
        const bool branch_taken_0x50f730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x50F734u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50F730u;
            // 0x50f734: 0x8e03013c  lw          $v1, 0x13C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 316)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50f730) {
            ctx->pc = 0x50F758u;
            goto label_50f758;
        }
    }
    ctx->pc = 0x50F738u;
label_50f738:
    // 0x50f738: 0xc0b6cec  jal         func_2DB3B0
label_50f73c:
    if (ctx->pc == 0x50F73Cu) {
        ctx->pc = 0x50F740u;
        goto label_50f740;
    }
    ctx->pc = 0x50F738u;
    SET_GPR_U32(ctx, 31, 0x50F740u);
    ctx->pc = 0x2DB3B0u;
    if (runtime->hasFunction(0x2DB3B0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB3B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50F740u; }
        if (ctx->pc != 0x50F740u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB3B0_0x2db3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50F740u; }
        if (ctx->pc != 0x50F740u) { return; }
    }
    ctx->pc = 0x50F740u;
label_50f740:
    // 0x50f740: 0xc0b6ce8  jal         func_2DB3A0
label_50f744:
    if (ctx->pc == 0x50F744u) {
        ctx->pc = 0x50F744u;
            // 0x50f744: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50F748u;
        goto label_50f748;
    }
    ctx->pc = 0x50F740u;
    SET_GPR_U32(ctx, 31, 0x50F748u);
    ctx->pc = 0x50F744u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50F740u;
            // 0x50f744: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB3A0u;
    if (runtime->hasFunction(0x2DB3A0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50F748u; }
        if (ctx->pc != 0x50F748u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB3A0_0x2db3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50F748u; }
        if (ctx->pc != 0x50F748u) { return; }
    }
    ctx->pc = 0x50F748u;
label_50f748:
    // 0x50f748: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x50f748u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_50f74c:
    // 0x50f74c: 0xc04cce8  jal         func_1333A0
label_50f750:
    if (ctx->pc == 0x50F750u) {
        ctx->pc = 0x50F750u;
            // 0x50f750: 0x27a401e0  addiu       $a0, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->pc = 0x50F754u;
        goto label_50f754;
    }
    ctx->pc = 0x50F74Cu;
    SET_GPR_U32(ctx, 31, 0x50F754u);
    ctx->pc = 0x50F750u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50F74Cu;
            // 0x50f750: 0x27a401e0  addiu       $a0, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50F754u; }
        if (ctx->pc != 0x50F754u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50F754u; }
        if (ctx->pc != 0x50F754u) { return; }
    }
    ctx->pc = 0x50F754u;
label_50f754:
    // 0x50f754: 0x8e03013c  lw          $v1, 0x13C($s0)
    ctx->pc = 0x50f754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 316)));
label_50f758:
    // 0x50f758: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x50f758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_50f75c:
    // 0x50f75c: 0x50620063  beql        $v1, $v0, . + 4 + (0x63 << 2)
label_50f760:
    if (ctx->pc == 0x50F760u) {
        ctx->pc = 0x50F760u;
            // 0x50f760: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50F764u;
        goto label_50f764;
    }
    ctx->pc = 0x50F75Cu;
    {
        const bool branch_taken_0x50f75c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x50f75c) {
            ctx->pc = 0x50F760u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x50F75Cu;
            // 0x50f760: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x50F8ECu;
            goto label_50f8ec;
        }
    }
    ctx->pc = 0x50F764u;
label_50f764:
    // 0x50f764: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_50f768:
    if (ctx->pc == 0x50F768u) {
        ctx->pc = 0x50F76Cu;
        goto label_50f76c;
    }
    ctx->pc = 0x50F764u;
    {
        const bool branch_taken_0x50f764 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x50f764) {
            ctx->pc = 0x50F774u;
            goto label_50f774;
        }
    }
    ctx->pc = 0x50F76Cu;
label_50f76c:
    // 0x50f76c: 0x100000cb  b           . + 4 + (0xCB << 2)
label_50f770:
    if (ctx->pc == 0x50F770u) {
        ctx->pc = 0x50F770u;
            // 0x50f770: 0xc60c0020  lwc1        $f12, 0x20($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x50F774u;
        goto label_50f774;
    }
    ctx->pc = 0x50F76Cu;
    {
        const bool branch_taken_0x50f76c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x50F770u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50F76Cu;
            // 0x50f770: 0xc60c0020  lwc1        $f12, 0x20($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x50f76c) {
            ctx->pc = 0x50FA9Cu;
            goto label_50fa9c;
        }
    }
    ctx->pc = 0x50F774u;
label_50f774:
    // 0x50f774: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x50f774u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_50f778:
    // 0x50f778: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x50f778u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
label_50f77c:
    // 0x50f77c: 0xc455b720  lwc1        $f21, -0x48E0($v0)
    ctx->pc = 0x50f77cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_50f780:
    // 0x50f780: 0x27a40220  addiu       $a0, $sp, 0x220
    ctx->pc = 0x50f780u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
label_50f784:
    // 0x50f784: 0xc6000118  lwc1        $f0, 0x118($s0)
    ctx->pc = 0x50f784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_50f788:
    // 0x50f788: 0xc474b71c  lwc1        $f20, -0x48E4($v1)
    ctx->pc = 0x50f788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294948636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_50f78c:
    // 0x50f78c: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x50f78cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_50f790:
    // 0x50f790: 0xc6010114  lwc1        $f1, 0x114($s0)
    ctx->pc = 0x50f790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_50f794:
    // 0x50f794: 0xc442b718  lwc1        $f2, -0x48E8($v0)
    ctx->pc = 0x50f794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_50f798:
    // 0x50f798: 0xc6030110  lwc1        $f3, 0x110($s0)
    ctx->pc = 0x50f798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_50f79c:
    // 0x50f79c: 0x4601a340  add.s       $f13, $f20, $f1
    ctx->pc = 0x50f79cu;
    ctx->f[13] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
label_50f7a0:
    // 0x50f7a0: 0x46031300  add.s       $f12, $f2, $f3
    ctx->pc = 0x50f7a0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_50f7a4:
    // 0x50f7a4: 0xc04cbd8  jal         func_132F60
label_50f7a8:
    if (ctx->pc == 0x50F7A8u) {
        ctx->pc = 0x50F7A8u;
            // 0x50f7a8: 0x4600ab80  add.s       $f14, $f21, $f0 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
        ctx->pc = 0x50F7ACu;
        goto label_50f7ac;
    }
    ctx->pc = 0x50F7A4u;
    SET_GPR_U32(ctx, 31, 0x50F7ACu);
    ctx->pc = 0x50F7A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50F7A4u;
            // 0x50f7a8: 0x4600ab80  add.s       $f14, $f21, $f0 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50F7ACu; }
        if (ctx->pc != 0x50F7ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50F7ACu; }
        if (ctx->pc != 0x50F7ACu) { return; }
    }
    ctx->pc = 0x50F7ACu;
label_50f7ac:
    // 0x50f7ac: 0x27a401d0  addiu       $a0, $sp, 0x1D0
    ctx->pc = 0x50f7acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
label_50f7b0:
    // 0x50f7b0: 0x27a501e0  addiu       $a1, $sp, 0x1E0
    ctx->pc = 0x50f7b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
label_50f7b4:
    // 0x50f7b4: 0xc04cca0  jal         func_133280
label_50f7b8:
    if (ctx->pc == 0x50F7B8u) {
        ctx->pc = 0x50F7B8u;
            // 0x50f7b8: 0x27a60220  addiu       $a2, $sp, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
        ctx->pc = 0x50F7BCu;
        goto label_50f7bc;
    }
    ctx->pc = 0x50F7B4u;
    SET_GPR_U32(ctx, 31, 0x50F7BCu);
    ctx->pc = 0x50F7B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50F7B4u;
            // 0x50f7b8: 0x27a60220  addiu       $a2, $sp, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50F7BCu; }
        if (ctx->pc != 0x50F7BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50F7BCu; }
        if (ctx->pc != 0x50F7BCu) { return; }
    }
    ctx->pc = 0x50F7BCu;
label_50f7bc:
    // 0x50f7bc: 0xc077264  jal         func_1DC990
label_50f7c0:
    if (ctx->pc == 0x50F7C0u) {
        ctx->pc = 0x50F7C0u;
            // 0x50f7c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50F7C4u;
        goto label_50f7c4;
    }
    ctx->pc = 0x50F7BCu;
    SET_GPR_U32(ctx, 31, 0x50F7C4u);
    ctx->pc = 0x50F7C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50F7BCu;
            // 0x50f7c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC990u;
    if (runtime->hasFunction(0x1DC990u)) {
        auto targetFn = runtime->lookupFunction(0x1DC990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50F7C4u; }
        if (ctx->pc != 0x50F7C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC990_0x1dc990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50F7C4u; }
        if (ctx->pc != 0x50F7C4u) { return; }
    }
    ctx->pc = 0x50F7C4u;
label_50f7c4:
    // 0x50f7c4: 0x27a401d0  addiu       $a0, $sp, 0x1D0
    ctx->pc = 0x50f7c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
label_50f7c8:
    // 0x50f7c8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x50f7c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_50f7cc:
    // 0x50f7cc: 0xc04cbe0  jal         func_132F80
label_50f7d0:
    if (ctx->pc == 0x50F7D0u) {
        ctx->pc = 0x50F7D0u;
            // 0x50f7d0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50F7D4u;
        goto label_50f7d4;
    }
    ctx->pc = 0x50F7CCu;
    SET_GPR_U32(ctx, 31, 0x50F7D4u);
    ctx->pc = 0x50F7D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50F7CCu;
            // 0x50f7d0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F80u;
    if (runtime->hasFunction(0x132F80u)) {
        auto targetFn = runtime->lookupFunction(0x132F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50F7D4u; }
        if (ctx->pc != 0x50F7D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F80_0x132f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50F7D4u; }
        if (ctx->pc != 0x50F7D4u) { return; }
    }
    ctx->pc = 0x50F7D4u;
label_50f7d4:
    // 0x50f7d4: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x50f7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
label_50f7d8:
    // 0x50f7d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x50f7d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_50f7dc:
    // 0x50f7dc: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x50f7dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_50f7e0:
    // 0x50f7e0: 0x27a501d0  addiu       $a1, $sp, 0x1D0
    ctx->pc = 0x50f7e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
label_50f7e4:
    // 0x50f7e4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x50f7e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_50f7e8:
    // 0x50f7e8: 0xc144120  jal         func_510480
label_50f7ec:
    if (ctx->pc == 0x50F7ECu) {
        ctx->pc = 0x50F7ECu;
            // 0x50f7ec: 0x27a602c0  addiu       $a2, $sp, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
        ctx->pc = 0x50F7F0u;
        goto label_50f7f0;
    }
    ctx->pc = 0x50F7E8u;
    SET_GPR_U32(ctx, 31, 0x50F7F0u);
    ctx->pc = 0x50F7ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50F7E8u;
            // 0x50f7ec: 0x27a602c0  addiu       $a2, $sp, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x510480u;
    if (runtime->hasFunction(0x510480u)) {
        auto targetFn = runtime->lookupFunction(0x510480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50F7F0u; }
        if (ctx->pc != 0x50F7F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00510480_0x510480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50F7F0u; }
        if (ctx->pc != 0x50F7F0u) { return; }
    }
    ctx->pc = 0x50F7F0u;
label_50f7f0:
    // 0x50f7f0: 0x27a40280  addiu       $a0, $sp, 0x280
    ctx->pc = 0x50f7f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
label_50f7f4:
    // 0x50f7f4: 0xc04cce8  jal         func_1333A0
label_50f7f8:
    if (ctx->pc == 0x50F7F8u) {
        ctx->pc = 0x50F7F8u;
            // 0x50f7f8: 0x27a501e0  addiu       $a1, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->pc = 0x50F7FCu;
        goto label_50f7fc;
    }
    ctx->pc = 0x50F7F4u;
    SET_GPR_U32(ctx, 31, 0x50F7FCu);
    ctx->pc = 0x50F7F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50F7F4u;
            // 0x50f7f8: 0x27a501e0  addiu       $a1, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50F7FCu; }
        if (ctx->pc != 0x50F7FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50F7FCu; }
        if (ctx->pc != 0x50F7FCu) { return; }
    }
    ctx->pc = 0x50F7FCu;
label_50f7fc:
    // 0x50f7fc: 0xc077264  jal         func_1DC990
label_50f800:
    if (ctx->pc == 0x50F800u) {
        ctx->pc = 0x50F800u;
            // 0x50f800: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50F804u;
        goto label_50f804;
    }
    ctx->pc = 0x50F7FCu;
    SET_GPR_U32(ctx, 31, 0x50F804u);
    ctx->pc = 0x50F800u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50F7FCu;
            // 0x50f800: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC990u;
    if (runtime->hasFunction(0x1DC990u)) {
        auto targetFn = runtime->lookupFunction(0x1DC990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50F804u; }
        if (ctx->pc != 0x50F804u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC990_0x1dc990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50F804u; }
        if (ctx->pc != 0x50F804u) { return; }
    }
    ctx->pc = 0x50F804u;
label_50f804:
    // 0x50f804: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x50f804u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_50f808:
    // 0x50f808: 0xc04ce80  jal         func_133A00
label_50f80c:
    if (ctx->pc == 0x50F80Cu) {
        ctx->pc = 0x50F80Cu;
            // 0x50f80c: 0x27a40280  addiu       $a0, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->pc = 0x50F810u;
        goto label_50f810;
    }
    ctx->pc = 0x50F808u;
    SET_GPR_U32(ctx, 31, 0x50F810u);
    ctx->pc = 0x50F80Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50F808u;
            // 0x50f80c: 0x27a40280  addiu       $a0, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50F810u; }
        if (ctx->pc != 0x50F810u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50F810u; }
        if (ctx->pc != 0x50F810u) { return; }
    }
    ctx->pc = 0x50F810u;
label_50f810:
    // 0x50f810: 0x27a40240  addiu       $a0, $sp, 0x240
    ctx->pc = 0x50f810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
label_50f814:
    // 0x50f814: 0xc04ccf4  jal         func_1333D0
label_50f818:
    if (ctx->pc == 0x50F818u) {
        ctx->pc = 0x50F818u;
            // 0x50f818: 0x27a50280  addiu       $a1, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->pc = 0x50F81Cu;
        goto label_50f81c;
    }
    ctx->pc = 0x50F814u;
    SET_GPR_U32(ctx, 31, 0x50F81Cu);
    ctx->pc = 0x50F818u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50F814u;
            // 0x50f818: 0x27a50280  addiu       $a1, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333D0u;
    if (runtime->hasFunction(0x1333D0u)) {
        auto targetFn = runtime->lookupFunction(0x1333D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50F81Cu; }
        if (ctx->pc != 0x50F81Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333D0_0x1333d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50F81Cu; }
        if (ctx->pc != 0x50F81Cu) { return; }
    }
    ctx->pc = 0x50F81Cu;
label_50f81c:
    // 0x50f81c: 0x27a40220  addiu       $a0, $sp, 0x220
    ctx->pc = 0x50f81cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
label_50f820:
    // 0x50f820: 0x27a50240  addiu       $a1, $sp, 0x240
    ctx->pc = 0x50f820u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
label_50f824:
    // 0x50f824: 0xc04cca0  jal         func_133280
label_50f828:
    if (ctx->pc == 0x50F828u) {
        ctx->pc = 0x50F828u;
            // 0x50f828: 0x26060010  addiu       $a2, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x50F82Cu;
        goto label_50f82c;
    }
    ctx->pc = 0x50F824u;
    SET_GPR_U32(ctx, 31, 0x50F82Cu);
    ctx->pc = 0x50F828u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50F824u;
            // 0x50f828: 0x26060010  addiu       $a2, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50F82Cu; }
        if (ctx->pc != 0x50F82Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50F82Cu; }
        if (ctx->pc != 0x50F82Cu) { return; }
    }
    ctx->pc = 0x50F82Cu;
label_50f82c:
    // 0x50f82c: 0x27a40230  addiu       $a0, $sp, 0x230
    ctx->pc = 0x50f82cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
label_50f830:
    // 0x50f830: 0xc04cc44  jal         func_133110
label_50f834:
    if (ctx->pc == 0x50F834u) {
        ctx->pc = 0x50F834u;
            // 0x50f834: 0x27a50220  addiu       $a1, $sp, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
        ctx->pc = 0x50F838u;
        goto label_50f838;
    }
    ctx->pc = 0x50F830u;
    SET_GPR_U32(ctx, 31, 0x50F838u);
    ctx->pc = 0x50F834u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50F830u;
            // 0x50f834: 0x27a50220  addiu       $a1, $sp, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50F838u; }
        if (ctx->pc != 0x50F838u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50F838u; }
        if (ctx->pc != 0x50F838u) { return; }
    }
    ctx->pc = 0x50F838u;
label_50f838:
    // 0x50f838: 0xc04cc14  jal         func_133050
label_50f83c:
    if (ctx->pc == 0x50F83Cu) {
        ctx->pc = 0x50F83Cu;
            // 0x50f83c: 0x27a40220  addiu       $a0, $sp, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
        ctx->pc = 0x50F840u;
        goto label_50f840;
    }
    ctx->pc = 0x50F838u;
    SET_GPR_U32(ctx, 31, 0x50F840u);
    ctx->pc = 0x50F83Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50F838u;
            // 0x50f83c: 0x27a40220  addiu       $a0, $sp, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133050u;
    if (runtime->hasFunction(0x133050u)) {
        auto targetFn = runtime->lookupFunction(0x133050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50F840u; }
        if (ctx->pc != 0x50F840u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133050_0x133050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50F840u; }
        if (ctx->pc != 0x50F840u) { return; }
    }
    ctx->pc = 0x50F840u;
label_50f840:
    // 0x50f840: 0xc6010118  lwc1        $f1, 0x118($s0)
    ctx->pc = 0x50f840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_50f844:
    // 0x50f844: 0x4601a840  add.s       $f1, $f21, $f1
    ctx->pc = 0x50f844u;
    ctx->f[1] = FPU_ADD_S(ctx->f[21], ctx->f[1]);
label_50f848:
    // 0x50f848: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x50f848u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_50f84c:
    // 0x50f84c: 0x45010092  bc1t        . + 4 + (0x92 << 2)
label_50f850:
    if (ctx->pc == 0x50F850u) {
        ctx->pc = 0x50F854u;
        goto label_50f854;
    }
    ctx->pc = 0x50F84Cu;
    {
        const bool branch_taken_0x50f84c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x50f84c) {
            ctx->pc = 0x50FA98u;
            goto label_50fa98;
        }
    }
    ctx->pc = 0x50F854u;
label_50f854:
    // 0x50f854: 0xc6010114  lwc1        $f1, 0x114($s0)
    ctx->pc = 0x50f854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_50f858:
    // 0x50f858: 0xc7a00224  lwc1        $f0, 0x224($sp)
    ctx->pc = 0x50f858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_50f85c:
    // 0x50f85c: 0x4601a040  add.s       $f1, $f20, $f1
    ctx->pc = 0x50f85cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
label_50f860:
    // 0x50f860: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x50f860u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_50f864:
    // 0x50f864: 0x4501008c  bc1t        . + 4 + (0x8C << 2)
label_50f868:
    if (ctx->pc == 0x50F868u) {
        ctx->pc = 0x50F86Cu;
        goto label_50f86c;
    }
    ctx->pc = 0x50F864u;
    {
        const bool branch_taken_0x50f864 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x50f864) {
            ctx->pc = 0x50FA98u;
            goto label_50fa98;
        }
    }
    ctx->pc = 0x50F86Cu;
label_50f86c:
    // 0x50f86c: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x50f86cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_50f870:
    // 0x50f870: 0x27a40230  addiu       $a0, $sp, 0x230
    ctx->pc = 0x50f870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
label_50f874:
    // 0x50f874: 0xc04cc08  jal         func_133020
label_50f878:
    if (ctx->pc == 0x50F878u) {
        ctx->pc = 0x50F878u;
            // 0x50f878: 0x24a5bcc0  addiu       $a1, $a1, -0x4340 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950080));
        ctx->pc = 0x50F87Cu;
        goto label_50f87c;
    }
    ctx->pc = 0x50F874u;
    SET_GPR_U32(ctx, 31, 0x50F87Cu);
    ctx->pc = 0x50F878u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50F874u;
            // 0x50f878: 0x24a5bcc0  addiu       $a1, $a1, -0x4340 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950080));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133020u;
    if (runtime->hasFunction(0x133020u)) {
        auto targetFn = runtime->lookupFunction(0x133020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50F87Cu; }
        if (ctx->pc != 0x50F87Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133020_0x133020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50F87Cu; }
        if (ctx->pc != 0x50F87Cu) { return; }
    }
    ctx->pc = 0x50F87Cu;
label_50f87c:
    // 0x50f87c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x50f87cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_50f880:
    // 0x50f880: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x50f880u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_50f884:
    // 0x50f884: 0x0  nop
    ctx->pc = 0x50f884u;
    // NOP
label_50f888:
    // 0x50f888: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x50f888u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_50f88c:
    // 0x50f88c: 0x45010082  bc1t        . + 4 + (0x82 << 2)
label_50f890:
    if (ctx->pc == 0x50F890u) {
        ctx->pc = 0x50F894u;
        goto label_50f894;
    }
    ctx->pc = 0x50F88Cu;
    {
        const bool branch_taken_0x50f88c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x50f88c) {
            ctx->pc = 0x50FA98u;
            goto label_50fa98;
        }
    }
    ctx->pc = 0x50F894u;
label_50f894:
    // 0x50f894: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x50f894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_50f898:
    // 0x50f898: 0xc0b9ffc  jal         func_2E7FF0
label_50f89c:
    if (ctx->pc == 0x50F89Cu) {
        ctx->pc = 0x50F89Cu;
            // 0x50f89c: 0xae02013c  sw          $v0, 0x13C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 316), GPR_U32(ctx, 2));
        ctx->pc = 0x50F8A0u;
        goto label_50f8a0;
    }
    ctx->pc = 0x50F898u;
    SET_GPR_U32(ctx, 31, 0x50F8A0u);
    ctx->pc = 0x50F89Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50F898u;
            // 0x50f89c: 0xae02013c  sw          $v0, 0x13C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 316), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E7FF0u;
    if (runtime->hasFunction(0x2E7FF0u)) {
        auto targetFn = runtime->lookupFunction(0x2E7FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50F8A0u; }
        if (ctx->pc != 0x50F8A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E7FF0_0x2e7ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50F8A0u; }
        if (ctx->pc != 0x50F8A0u) { return; }
    }
    ctx->pc = 0x50F8A0u;
label_50f8a0:
    // 0x50f8a0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x50f8a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_50f8a4:
    // 0x50f8a4: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x50f8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_50f8a8:
    // 0x50f8a8: 0xc13d584  jal         func_4F5610
label_50f8ac:
    if (ctx->pc == 0x50F8ACu) {
        ctx->pc = 0x50F8ACu;
            // 0x50f8ac: 0xc44cb748  lwc1        $f12, -0x48B8($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948680)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x50F8B0u;
        goto label_50f8b0;
    }
    ctx->pc = 0x50F8A8u;
    SET_GPR_U32(ctx, 31, 0x50F8B0u);
    ctx->pc = 0x50F8ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50F8A8u;
            // 0x50f8ac: 0xc44cb748  lwc1        $f12, -0x48B8($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948680)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x4F5610u;
    if (runtime->hasFunction(0x4F5610u)) {
        auto targetFn = runtime->lookupFunction(0x4F5610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50F8B0u; }
        if (ctx->pc != 0x50F8B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004F5610_0x4f5610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50F8B0u; }
        if (ctx->pc != 0x50F8B0u) { return; }
    }
    ctx->pc = 0x50F8B0u;
label_50f8b0:
    // 0x50f8b0: 0xc0b9ffc  jal         func_2E7FF0
label_50f8b4:
    if (ctx->pc == 0x50F8B4u) {
        ctx->pc = 0x50F8B4u;
            // 0x50f8b4: 0xe6000110  swc1        $f0, 0x110($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 272), bits); }
        ctx->pc = 0x50F8B8u;
        goto label_50f8b8;
    }
    ctx->pc = 0x50F8B0u;
    SET_GPR_U32(ctx, 31, 0x50F8B8u);
    ctx->pc = 0x50F8B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50F8B0u;
            // 0x50f8b4: 0xe6000110  swc1        $f0, 0x110($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 272), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E7FF0u;
    if (runtime->hasFunction(0x2E7FF0u)) {
        auto targetFn = runtime->lookupFunction(0x2E7FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50F8B8u; }
        if (ctx->pc != 0x50F8B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E7FF0_0x2e7ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50F8B8u; }
        if (ctx->pc != 0x50F8B8u) { return; }
    }
    ctx->pc = 0x50F8B8u;
label_50f8b8:
    // 0x50f8b8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x50f8b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_50f8bc:
    // 0x50f8bc: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x50f8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_50f8c0:
    // 0x50f8c0: 0xc13d584  jal         func_4F5610
label_50f8c4:
    if (ctx->pc == 0x50F8C4u) {
        ctx->pc = 0x50F8C4u;
            // 0x50f8c4: 0xc44cb74c  lwc1        $f12, -0x48B4($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x50F8C8u;
        goto label_50f8c8;
    }
    ctx->pc = 0x50F8C0u;
    SET_GPR_U32(ctx, 31, 0x50F8C8u);
    ctx->pc = 0x50F8C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50F8C0u;
            // 0x50f8c4: 0xc44cb74c  lwc1        $f12, -0x48B4($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x4F5610u;
    if (runtime->hasFunction(0x4F5610u)) {
        auto targetFn = runtime->lookupFunction(0x4F5610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50F8C8u; }
        if (ctx->pc != 0x50F8C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004F5610_0x4f5610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50F8C8u; }
        if (ctx->pc != 0x50F8C8u) { return; }
    }
    ctx->pc = 0x50F8C8u;
label_50f8c8:
    // 0x50f8c8: 0xc0b9ffc  jal         func_2E7FF0
label_50f8cc:
    if (ctx->pc == 0x50F8CCu) {
        ctx->pc = 0x50F8CCu;
            // 0x50f8cc: 0xe6000114  swc1        $f0, 0x114($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 276), bits); }
        ctx->pc = 0x50F8D0u;
        goto label_50f8d0;
    }
    ctx->pc = 0x50F8C8u;
    SET_GPR_U32(ctx, 31, 0x50F8D0u);
    ctx->pc = 0x50F8CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50F8C8u;
            // 0x50f8cc: 0xe6000114  swc1        $f0, 0x114($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 276), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E7FF0u;
    if (runtime->hasFunction(0x2E7FF0u)) {
        auto targetFn = runtime->lookupFunction(0x2E7FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50F8D0u; }
        if (ctx->pc != 0x50F8D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E7FF0_0x2e7ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50F8D0u; }
        if (ctx->pc != 0x50F8D0u) { return; }
    }
    ctx->pc = 0x50F8D0u;
label_50f8d0:
    // 0x50f8d0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x50f8d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_50f8d4:
    // 0x50f8d4: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x50f8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_50f8d8:
    // 0x50f8d8: 0xc13d584  jal         func_4F5610
label_50f8dc:
    if (ctx->pc == 0x50F8DCu) {
        ctx->pc = 0x50F8DCu;
            // 0x50f8dc: 0xc44cb750  lwc1        $f12, -0x48B0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x50F8E0u;
        goto label_50f8e0;
    }
    ctx->pc = 0x50F8D8u;
    SET_GPR_U32(ctx, 31, 0x50F8E0u);
    ctx->pc = 0x50F8DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50F8D8u;
            // 0x50f8dc: 0xc44cb750  lwc1        $f12, -0x48B0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x4F5610u;
    if (runtime->hasFunction(0x4F5610u)) {
        auto targetFn = runtime->lookupFunction(0x4F5610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50F8E0u; }
        if (ctx->pc != 0x50F8E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004F5610_0x4f5610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50F8E0u; }
        if (ctx->pc != 0x50F8E0u) { return; }
    }
    ctx->pc = 0x50F8E0u;
label_50f8e0:
    // 0x50f8e0: 0xe6000118  swc1        $f0, 0x118($s0)
    ctx->pc = 0x50f8e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 280), bits); }
label_50f8e4:
    // 0x50f8e4: 0x1000006c  b           . + 4 + (0x6C << 2)
label_50f8e8:
    if (ctx->pc == 0x50F8E8u) {
        ctx->pc = 0x50F8E8u;
            // 0x50f8e8: 0xae000140  sw          $zero, 0x140($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 320), GPR_U32(ctx, 0));
        ctx->pc = 0x50F8ECu;
        goto label_50f8ec;
    }
    ctx->pc = 0x50F8E4u;
    {
        const bool branch_taken_0x50f8e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x50F8E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50F8E4u;
            // 0x50f8e8: 0xae000140  sw          $zero, 0x140($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 320), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50f8e4) {
            ctx->pc = 0x50FA98u;
            goto label_50fa98;
        }
    }
    ctx->pc = 0x50F8ECu;
label_50f8ec:
    // 0x50f8ec: 0xc14411c  jal         func_510470
label_50f8f0:
    if (ctx->pc == 0x50F8F0u) {
        ctx->pc = 0x50F8F4u;
        goto label_50f8f4;
    }
    ctx->pc = 0x50F8ECu;
    SET_GPR_U32(ctx, 31, 0x50F8F4u);
    ctx->pc = 0x510470u;
    if (runtime->hasFunction(0x510470u)) {
        auto targetFn = runtime->lookupFunction(0x510470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50F8F4u; }
        if (ctx->pc != 0x50F8F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00510470_0x510470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50F8F4u; }
        if (ctx->pc != 0x50F8F4u) { return; }
    }
    ctx->pc = 0x50F8F4u;
label_50f8f4:
    // 0x50f8f4: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x50f8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_50f8f8:
    // 0x50f8f8: 0x27a40220  addiu       $a0, $sp, 0x220
    ctx->pc = 0x50f8f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
label_50f8fc:
    // 0x50f8fc: 0xc443b740  lwc1        $f3, -0x48C0($v0)
    ctx->pc = 0x50f8fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_50f900:
    // 0x50f900: 0xc6040118  lwc1        $f4, 0x118($s0)
    ctx->pc = 0x50f900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_50f904:
    // 0x50f904: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x50f904u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_50f908:
    // 0x50f908: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x50f908u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
label_50f90c:
    // 0x50f90c: 0x46001b82  mul.s       $f14, $f3, $f0
    ctx->pc = 0x50f90cu;
    ctx->f[14] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_50f910:
    // 0x50f910: 0xc442b738  lwc1        $f2, -0x48C8($v0)
    ctx->pc = 0x50f910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948664)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_50f914:
    // 0x50f914: 0xc6030110  lwc1        $f3, 0x110($s0)
    ctx->pc = 0x50f914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_50f918:
    // 0x50f918: 0xc6000114  lwc1        $f0, 0x114($s0)
    ctx->pc = 0x50f918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_50f91c:
    // 0x50f91c: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x50f91cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_50f920:
    // 0x50f920: 0xc441b73c  lwc1        $f1, -0x48C4($v0)
    ctx->pc = 0x50f920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948668)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_50f924:
    // 0x50f924: 0x46031300  add.s       $f12, $f2, $f3
    ctx->pc = 0x50f924u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_50f928:
    // 0x50f928: 0xc04cbd8  jal         func_132F60
label_50f92c:
    if (ctx->pc == 0x50F92Cu) {
        ctx->pc = 0x50F92Cu;
            // 0x50f92c: 0x46000b40  add.s       $f13, $f1, $f0 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x50F930u;
        goto label_50f930;
    }
    ctx->pc = 0x50F928u;
    SET_GPR_U32(ctx, 31, 0x50F930u);
    ctx->pc = 0x50F92Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50F928u;
            // 0x50f92c: 0x46000b40  add.s       $f13, $f1, $f0 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50F930u; }
        if (ctx->pc != 0x50F930u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50F930u; }
        if (ctx->pc != 0x50F930u) { return; }
    }
    ctx->pc = 0x50F930u;
label_50f930:
    // 0x50f930: 0x27a401d0  addiu       $a0, $sp, 0x1D0
    ctx->pc = 0x50f930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
label_50f934:
    // 0x50f934: 0x27a501e0  addiu       $a1, $sp, 0x1E0
    ctx->pc = 0x50f934u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
label_50f938:
    // 0x50f938: 0xc04cca0  jal         func_133280
label_50f93c:
    if (ctx->pc == 0x50F93Cu) {
        ctx->pc = 0x50F93Cu;
            // 0x50f93c: 0x27a60220  addiu       $a2, $sp, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
        ctx->pc = 0x50F940u;
        goto label_50f940;
    }
    ctx->pc = 0x50F938u;
    SET_GPR_U32(ctx, 31, 0x50F940u);
    ctx->pc = 0x50F93Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50F938u;
            // 0x50f93c: 0x27a60220  addiu       $a2, $sp, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50F940u; }
        if (ctx->pc != 0x50F940u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50F940u; }
        if (ctx->pc != 0x50F940u) { return; }
    }
    ctx->pc = 0x50F940u;
label_50f940:
    // 0x50f940: 0xc077264  jal         func_1DC990
label_50f944:
    if (ctx->pc == 0x50F944u) {
        ctx->pc = 0x50F944u;
            // 0x50f944: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50F948u;
        goto label_50f948;
    }
    ctx->pc = 0x50F940u;
    SET_GPR_U32(ctx, 31, 0x50F948u);
    ctx->pc = 0x50F944u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50F940u;
            // 0x50f944: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC990u;
    if (runtime->hasFunction(0x1DC990u)) {
        auto targetFn = runtime->lookupFunction(0x1DC990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50F948u; }
        if (ctx->pc != 0x50F948u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC990_0x1dc990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50F948u; }
        if (ctx->pc != 0x50F948u) { return; }
    }
    ctx->pc = 0x50F948u;
label_50f948:
    // 0x50f948: 0x27a401d0  addiu       $a0, $sp, 0x1D0
    ctx->pc = 0x50f948u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
label_50f94c:
    // 0x50f94c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x50f94cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_50f950:
    // 0x50f950: 0xc04cbe0  jal         func_132F80
label_50f954:
    if (ctx->pc == 0x50F954u) {
        ctx->pc = 0x50F954u;
            // 0x50f954: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50F958u;
        goto label_50f958;
    }
    ctx->pc = 0x50F950u;
    SET_GPR_U32(ctx, 31, 0x50F958u);
    ctx->pc = 0x50F954u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50F950u;
            // 0x50f954: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F80u;
    if (runtime->hasFunction(0x132F80u)) {
        auto targetFn = runtime->lookupFunction(0x132F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50F958u; }
        if (ctx->pc != 0x50F958u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F80_0x132f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50F958u; }
        if (ctx->pc != 0x50F958u) { return; }
    }
    ctx->pc = 0x50F958u;
label_50f958:
    // 0x50f958: 0xc6010140  lwc1        $f1, 0x140($s0)
    ctx->pc = 0x50f958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_50f95c:
    // 0x50f95c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x50f95cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_50f960:
    // 0x50f960: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x50f960u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_50f964:
    // 0x50f964: 0x0  nop
    ctx->pc = 0x50f964u;
    // NOP
label_50f968:
    // 0x50f968: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x50f968u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_50f96c:
    // 0x50f96c: 0x45020014  bc1fl       . + 4 + (0x14 << 2)
label_50f970:
    if (ctx->pc == 0x50F970u) {
        ctx->pc = 0x50F970u;
            // 0x50f970: 0x3c023f19  lui         $v0, 0x3F19 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
        ctx->pc = 0x50F974u;
        goto label_50f974;
    }
    ctx->pc = 0x50F96Cu;
    {
        const bool branch_taken_0x50f96c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x50f96c) {
            ctx->pc = 0x50F970u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x50F96Cu;
            // 0x50f970: 0x3c023f19  lui         $v0, 0x3F19 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x50F9C0u;
            goto label_50f9c0;
        }
    }
    ctx->pc = 0x50F974u;
label_50f974:
    // 0x50f974: 0xc0775b8  jal         func_1DD6E0
label_50f978:
    if (ctx->pc == 0x50F978u) {
        ctx->pc = 0x50F97Cu;
        goto label_50f97c;
    }
    ctx->pc = 0x50F974u;
    SET_GPR_U32(ctx, 31, 0x50F97Cu);
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50F97Cu; }
        if (ctx->pc != 0x50F97Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50F97Cu; }
        if (ctx->pc != 0x50F97Cu) { return; }
    }
    ctx->pc = 0x50F97Cu;
label_50f97c:
    // 0x50f97c: 0xc0775b4  jal         func_1DD6D0
label_50f980:
    if (ctx->pc == 0x50F980u) {
        ctx->pc = 0x50F980u;
            // 0x50f980: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x50F984u;
        goto label_50f984;
    }
    ctx->pc = 0x50F97Cu;
    SET_GPR_U32(ctx, 31, 0x50F984u);
    ctx->pc = 0x50F980u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50F97Cu;
            // 0x50f980: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6D0u;
    if (runtime->hasFunction(0x1DD6D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50F984u; }
        if (ctx->pc != 0x50F984u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6D0_0x1dd6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50F984u; }
        if (ctx->pc != 0x50F984u) { return; }
    }
    ctx->pc = 0x50F984u;
label_50f984:
    // 0x50f984: 0xc6030140  lwc1        $f3, 0x140($s0)
    ctx->pc = 0x50f984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_50f988:
    // 0x50f988: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x50f988u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
label_50f98c:
    // 0x50f98c: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x50f98cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_50f990:
    // 0x50f990: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x50f990u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_50f994:
    // 0x50f994: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x50f994u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_50f998:
    // 0x50f998: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x50f998u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_50f99c:
    // 0x50f99c: 0x46031018  adda.s      $f2, $f3
    ctx->pc = 0x50f99cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_50f9a0:
    // 0x50f9a0: 0x4600201c  madd.s      $f0, $f4, $f0
    ctx->pc = 0x50f9a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[0]));
label_50f9a4:
    // 0x50f9a4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x50f9a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_50f9a8:
    // 0x50f9a8: 0x0  nop
    ctx->pc = 0x50f9a8u;
    // NOP
label_50f9ac:
    // 0x50f9ac: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x50f9acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_50f9b0:
    // 0x50f9b0: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_50f9b4:
    if (ctx->pc == 0x50F9B4u) {
        ctx->pc = 0x50F9B4u;
            // 0x50f9b4: 0xe6000140  swc1        $f0, 0x140($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 320), bits); }
        ctx->pc = 0x50F9B8u;
        goto label_50f9b8;
    }
    ctx->pc = 0x50F9B0u;
    {
        const bool branch_taken_0x50f9b0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x50F9B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50F9B0u;
            // 0x50f9b4: 0xe6000140  swc1        $f0, 0x140($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 320), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x50f9b0) {
            ctx->pc = 0x50F9BCu;
            goto label_50f9bc;
        }
    }
    ctx->pc = 0x50F9B8u;
label_50f9b8:
    // 0x50f9b8: 0xe6010140  swc1        $f1, 0x140($s0)
    ctx->pc = 0x50f9b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 320), bits); }
label_50f9bc:
    // 0x50f9bc: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x50f9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
label_50f9c0:
    // 0x50f9c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x50f9c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_50f9c4:
    // 0x50f9c4: 0x3443999a  ori         $v1, $v0, 0x999A
    ctx->pc = 0x50f9c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_50f9c8:
    // 0x50f9c8: 0x27a501d0  addiu       $a1, $sp, 0x1D0
    ctx->pc = 0x50f9c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
label_50f9cc:
    // 0x50f9cc: 0x3c023ecc  lui         $v0, 0x3ECC
    ctx->pc = 0x50f9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
label_50f9d0:
    // 0x50f9d0: 0x27a602c0  addiu       $a2, $sp, 0x2C0
    ctx->pc = 0x50f9d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
label_50f9d4:
    // 0x50f9d4: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x50f9d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_50f9d8:
    // 0x50f9d8: 0xc6030140  lwc1        $f3, 0x140($s0)
    ctx->pc = 0x50f9d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_50f9dc:
    // 0x50f9dc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x50f9dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_50f9e0:
    // 0x50f9e0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x50f9e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_50f9e4:
    // 0x50f9e4: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x50f9e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_50f9e8:
    // 0x50f9e8: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x50f9e8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_50f9ec:
    // 0x50f9ec: 0xc144120  jal         func_510480
label_50f9f0:
    if (ctx->pc == 0x50F9F0u) {
        ctx->pc = 0x50F9F0u;
            // 0x50f9f0: 0x4603131c  madd.s      $f12, $f2, $f3 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
        ctx->pc = 0x50F9F4u;
        goto label_50f9f4;
    }
    ctx->pc = 0x50F9ECu;
    SET_GPR_U32(ctx, 31, 0x50F9F4u);
    ctx->pc = 0x50F9F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50F9ECu;
            // 0x50f9f0: 0x4603131c  madd.s      $f12, $f2, $f3 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x510480u;
    if (runtime->hasFunction(0x510480u)) {
        auto targetFn = runtime->lookupFunction(0x510480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50F9F4u; }
        if (ctx->pc != 0x50F9F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00510480_0x510480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50F9F4u; }
        if (ctx->pc != 0x50F9F4u) { return; }
    }
    ctx->pc = 0x50F9F4u;
label_50f9f4:
    // 0x50f9f4: 0x27a40280  addiu       $a0, $sp, 0x280
    ctx->pc = 0x50f9f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
label_50f9f8:
    // 0x50f9f8: 0xc04cce8  jal         func_1333A0
label_50f9fc:
    if (ctx->pc == 0x50F9FCu) {
        ctx->pc = 0x50F9FCu;
            // 0x50f9fc: 0x27a501e0  addiu       $a1, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->pc = 0x50FA00u;
        goto label_50fa00;
    }
    ctx->pc = 0x50F9F8u;
    SET_GPR_U32(ctx, 31, 0x50FA00u);
    ctx->pc = 0x50F9FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50F9F8u;
            // 0x50f9fc: 0x27a501e0  addiu       $a1, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50FA00u; }
        if (ctx->pc != 0x50FA00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50FA00u; }
        if (ctx->pc != 0x50FA00u) { return; }
    }
    ctx->pc = 0x50FA00u;
label_50fa00:
    // 0x50fa00: 0x27a40280  addiu       $a0, $sp, 0x280
    ctx->pc = 0x50fa00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
label_50fa04:
    // 0x50fa04: 0xc04ce80  jal         func_133A00
label_50fa08:
    if (ctx->pc == 0x50FA08u) {
        ctx->pc = 0x50FA08u;
            // 0x50fa08: 0x27a501d0  addiu       $a1, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->pc = 0x50FA0Cu;
        goto label_50fa0c;
    }
    ctx->pc = 0x50FA04u;
    SET_GPR_U32(ctx, 31, 0x50FA0Cu);
    ctx->pc = 0x50FA08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50FA04u;
            // 0x50fa08: 0x27a501d0  addiu       $a1, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50FA0Cu; }
        if (ctx->pc != 0x50FA0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50FA0Cu; }
        if (ctx->pc != 0x50FA0Cu) { return; }
    }
    ctx->pc = 0x50FA0Cu;
label_50fa0c:
    // 0x50fa0c: 0x27a40240  addiu       $a0, $sp, 0x240
    ctx->pc = 0x50fa0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
label_50fa10:
    // 0x50fa10: 0xc04ccf4  jal         func_1333D0
label_50fa14:
    if (ctx->pc == 0x50FA14u) {
        ctx->pc = 0x50FA14u;
            // 0x50fa14: 0x27a50280  addiu       $a1, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->pc = 0x50FA18u;
        goto label_50fa18;
    }
    ctx->pc = 0x50FA10u;
    SET_GPR_U32(ctx, 31, 0x50FA18u);
    ctx->pc = 0x50FA14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50FA10u;
            // 0x50fa14: 0x27a50280  addiu       $a1, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333D0u;
    if (runtime->hasFunction(0x1333D0u)) {
        auto targetFn = runtime->lookupFunction(0x1333D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50FA18u; }
        if (ctx->pc != 0x50FA18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333D0_0x1333d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50FA18u; }
        if (ctx->pc != 0x50FA18u) { return; }
    }
    ctx->pc = 0x50FA18u;
label_50fa18:
    // 0x50fa18: 0x27a40220  addiu       $a0, $sp, 0x220
    ctx->pc = 0x50fa18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
label_50fa1c:
    // 0x50fa1c: 0x27a50240  addiu       $a1, $sp, 0x240
    ctx->pc = 0x50fa1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
label_50fa20:
    // 0x50fa20: 0xc04cca0  jal         func_133280
label_50fa24:
    if (ctx->pc == 0x50FA24u) {
        ctx->pc = 0x50FA24u;
            // 0x50fa24: 0x26060010  addiu       $a2, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x50FA28u;
        goto label_50fa28;
    }
    ctx->pc = 0x50FA20u;
    SET_GPR_U32(ctx, 31, 0x50FA28u);
    ctx->pc = 0x50FA24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50FA20u;
            // 0x50fa24: 0x26060010  addiu       $a2, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50FA28u; }
        if (ctx->pc != 0x50FA28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50FA28u; }
        if (ctx->pc != 0x50FA28u) { return; }
    }
    ctx->pc = 0x50FA28u;
label_50fa28:
    // 0x50fa28: 0xc6000138  lwc1        $f0, 0x138($s0)
    ctx->pc = 0x50fa28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_50fa2c:
    // 0x50fa2c: 0x27a40220  addiu       $a0, $sp, 0x220
    ctx->pc = 0x50fa2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
label_50fa30:
    // 0x50fa30: 0xc04cc2c  jal         func_1330B0
label_50fa34:
    if (ctx->pc == 0x50FA34u) {
        ctx->pc = 0x50FA34u;
            // 0x50fa34: 0x46000502  mul.s       $f20, $f0, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
        ctx->pc = 0x50FA38u;
        goto label_50fa38;
    }
    ctx->pc = 0x50FA30u;
    SET_GPR_U32(ctx, 31, 0x50FA38u);
    ctx->pc = 0x50FA34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50FA30u;
            // 0x50fa34: 0x46000502  mul.s       $f20, $f0, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330B0u;
    if (runtime->hasFunction(0x1330B0u)) {
        auto targetFn = runtime->lookupFunction(0x1330B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50FA38u; }
        if (ctx->pc != 0x50FA38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330B0_0x1330b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50FA38u; }
        if (ctx->pc != 0x50FA38u) { return; }
    }
    ctx->pc = 0x50FA38u;
label_50fa38:
    // 0x50fa38: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x50fa38u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_50fa3c:
    // 0x50fa3c: 0x45000016  bc1f        . + 4 + (0x16 << 2)
label_50fa40:
    if (ctx->pc == 0x50FA40u) {
        ctx->pc = 0x50FA44u;
        goto label_50fa44;
    }
    ctx->pc = 0x50FA3Cu;
    {
        const bool branch_taken_0x50fa3c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x50fa3c) {
            ctx->pc = 0x50FA98u;
            goto label_50fa98;
        }
    }
    ctx->pc = 0x50FA44u;
label_50fa44:
    // 0x50fa44: 0xc144118  jal         func_510460
label_50fa48:
    if (ctx->pc == 0x50FA48u) {
        ctx->pc = 0x50FA4Cu;
        goto label_50fa4c;
    }
    ctx->pc = 0x50FA44u;
    SET_GPR_U32(ctx, 31, 0x50FA4Cu);
    ctx->pc = 0x510460u;
    if (runtime->hasFunction(0x510460u)) {
        auto targetFn = runtime->lookupFunction(0x510460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50FA4Cu; }
        if (ctx->pc != 0x50FA4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00510460_0x510460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50FA4Cu; }
        if (ctx->pc != 0x50FA4Cu) { return; }
    }
    ctx->pc = 0x50FA4Cu;
label_50fa4c:
    // 0x50fa4c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x50fa4cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_50fa50:
    // 0x50fa50: 0xc144110  jal         func_510440
label_50fa54:
    if (ctx->pc == 0x50FA54u) {
        ctx->pc = 0x50FA54u;
            // 0x50fa54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50FA58u;
        goto label_50fa58;
    }
    ctx->pc = 0x50FA50u;
    SET_GPR_U32(ctx, 31, 0x50FA58u);
    ctx->pc = 0x50FA54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50FA50u;
            // 0x50fa54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x510440u;
    if (runtime->hasFunction(0x510440u)) {
        auto targetFn = runtime->lookupFunction(0x510440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50FA58u; }
        if (ctx->pc != 0x50FA58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00510440_0x510440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50FA58u; }
        if (ctx->pc != 0x50FA58u) { return; }
    }
    ctx->pc = 0x50FA58u;
label_50fa58:
    // 0x50fa58: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x50fa58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_50fa5c:
    // 0x50fa5c: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x50fa5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
label_50fa60:
    // 0x50fa60: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x50fa60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_50fa64:
    // 0x50fa64: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x50fa64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_50fa68:
    // 0x50fa68: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x50fa68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_50fa6c:
    // 0x50fa6c: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x50fa6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_50fa70:
    // 0x50fa70: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x50fa70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
label_50fa74:
    // 0x50fa74: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x50fa74u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_50fa78:
    // 0x50fa78: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x50fa78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_50fa7c:
    // 0x50fa7c: 0xc14bb88  jal         func_52EE20
label_50fa80:
    if (ctx->pc == 0x50FA80u) {
        ctx->pc = 0x50FA80u;
            // 0x50fa80: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x50FA84u;
        goto label_50fa84;
    }
    ctx->pc = 0x50FA7Cu;
    SET_GPR_U32(ctx, 31, 0x50FA84u);
    ctx->pc = 0x50FA80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50FA7Cu;
            // 0x50fa80: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x52EE20u;
    if (runtime->hasFunction(0x52EE20u)) {
        auto targetFn = runtime->lookupFunction(0x52EE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50FA84u; }
        if (ctx->pc != 0x50FA84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0052EE20_0x52ee20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50FA84u; }
        if (ctx->pc != 0x50FA84u) { return; }
    }
    ctx->pc = 0x50FA84u;
label_50fa84:
    // 0x50fa84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x50fa84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_50fa88:
    // 0x50fa88: 0xc0e38ec  jal         func_38E3B0
label_50fa8c:
    if (ctx->pc == 0x50FA8Cu) {
        ctx->pc = 0x50FA8Cu;
            // 0x50fa8c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x50FA90u;
        goto label_50fa90;
    }
    ctx->pc = 0x50FA88u;
    SET_GPR_U32(ctx, 31, 0x50FA90u);
    ctx->pc = 0x50FA8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50FA88u;
            // 0x50fa8c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38E3B0u;
    if (runtime->hasFunction(0x38E3B0u)) {
        auto targetFn = runtime->lookupFunction(0x38E3B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50FA90u; }
        if (ctx->pc != 0x50FA90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038E3B0_0x38e3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50FA90u; }
        if (ctx->pc != 0x50FA90u) { return; }
    }
    ctx->pc = 0x50FA90u;
label_50fa90:
    // 0x50fa90: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x50fa90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_50fa94:
    // 0x50fa94: 0xae020124  sw          $v0, 0x124($s0)
    ctx->pc = 0x50fa94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 2));
label_50fa98:
    // 0x50fa98: 0xc60c0020  lwc1        $f12, 0x20($s0)
    ctx->pc = 0x50fa98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_50fa9c:
    // 0x50fa9c: 0xc60d0024  lwc1        $f13, 0x24($s0)
    ctx->pc = 0x50fa9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_50faa0:
    // 0x50faa0: 0xc60e0028  lwc1        $f14, 0x28($s0)
    ctx->pc = 0x50faa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_50faa4:
    // 0x50faa4: 0xc60f002c  lwc1        $f15, 0x2C($s0)
    ctx->pc = 0x50faa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_50faa8:
    // 0x50faa8: 0xc12dfc8  jal         func_4B7F20
label_50faac:
    if (ctx->pc == 0x50FAACu) {
        ctx->pc = 0x50FAACu;
            // 0x50faac: 0x27a401c0  addiu       $a0, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->pc = 0x50FAB0u;
        goto label_50fab0;
    }
    ctx->pc = 0x50FAA8u;
    SET_GPR_U32(ctx, 31, 0x50FAB0u);
    ctx->pc = 0x50FAACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50FAA8u;
            // 0x50faac: 0x27a401c0  addiu       $a0, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B7F20u;
    if (runtime->hasFunction(0x4B7F20u)) {
        auto targetFn = runtime->lookupFunction(0x4B7F20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50FAB0u; }
        if (ctx->pc != 0x50FAB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004B7F20_0x4b7f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50FAB0u; }
        if (ctx->pc != 0x50FAB0u) { return; }
    }
    ctx->pc = 0x50FAB0u;
label_50fab0:
    // 0x50fab0: 0xc7ac02c0  lwc1        $f12, 0x2C0($sp)
    ctx->pc = 0x50fab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_50fab4:
    // 0x50fab4: 0xc7ad02c4  lwc1        $f13, 0x2C4($sp)
    ctx->pc = 0x50fab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_50fab8:
    // 0x50fab8: 0xc7ae02c8  lwc1        $f14, 0x2C8($sp)
    ctx->pc = 0x50fab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_50fabc:
    // 0x50fabc: 0xc7af02cc  lwc1        $f15, 0x2CC($sp)
    ctx->pc = 0x50fabcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 716)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_50fac0:
    // 0x50fac0: 0xc12dfc8  jal         func_4B7F20
label_50fac4:
    if (ctx->pc == 0x50FAC4u) {
        ctx->pc = 0x50FAC4u;
            // 0x50fac4: 0x27a401b0  addiu       $a0, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->pc = 0x50FAC8u;
        goto label_50fac8;
    }
    ctx->pc = 0x50FAC0u;
    SET_GPR_U32(ctx, 31, 0x50FAC8u);
    ctx->pc = 0x50FAC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50FAC0u;
            // 0x50fac4: 0x27a401b0  addiu       $a0, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B7F20u;
    if (runtime->hasFunction(0x4B7F20u)) {
        auto targetFn = runtime->lookupFunction(0x4B7F20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50FAC8u; }
        if (ctx->pc != 0x50FAC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004B7F20_0x4b7f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50FAC8u; }
        if (ctx->pc != 0x50FAC8u) { return; }
    }
    ctx->pc = 0x50FAC8u;
label_50fac8:
    // 0x50fac8: 0xc0b6e68  jal         func_2DB9A0
label_50facc:
    if (ctx->pc == 0x50FACCu) {
        ctx->pc = 0x50FACCu;
            // 0x50facc: 0x27a401a0  addiu       $a0, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->pc = 0x50FAD0u;
        goto label_50fad0;
    }
    ctx->pc = 0x50FAC8u;
    SET_GPR_U32(ctx, 31, 0x50FAD0u);
    ctx->pc = 0x50FACCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50FAC8u;
            // 0x50facc: 0x27a401a0  addiu       $a0, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB9A0u;
    if (runtime->hasFunction(0x2DB9A0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50FAD0u; }
        if (ctx->pc != 0x50FAD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB9A0_0x2db9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50FAD0u; }
        if (ctx->pc != 0x50FAD0u) { return; }
    }
    ctx->pc = 0x50FAD0u;
label_50fad0:
    // 0x50fad0: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x50fad0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_50fad4:
    // 0x50fad4: 0x27a501b0  addiu       $a1, $sp, 0x1B0
    ctx->pc = 0x50fad4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_50fad8:
    // 0x50fad8: 0xc12df58  jal         func_4B7D60
label_50fadc:
    if (ctx->pc == 0x50FADCu) {
        ctx->pc = 0x50FADCu;
            // 0x50fadc: 0x27a601a0  addiu       $a2, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->pc = 0x50FAE0u;
        goto label_50fae0;
    }
    ctx->pc = 0x50FAD8u;
    SET_GPR_U32(ctx, 31, 0x50FAE0u);
    ctx->pc = 0x50FADCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50FAD8u;
            // 0x50fadc: 0x27a601a0  addiu       $a2, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B7D60u;
    if (runtime->hasFunction(0x4B7D60u)) {
        auto targetFn = runtime->lookupFunction(0x4B7D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50FAE0u; }
        if (ctx->pc != 0x50FAE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004B7D60_0x4b7d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50FAE0u; }
        if (ctx->pc != 0x50FAE0u) { return; }
    }
    ctx->pc = 0x50FAE0u;
label_50fae0:
    // 0x50fae0: 0xc0b6e84  jal         func_2DBA10
label_50fae4:
    if (ctx->pc == 0x50FAE4u) {
        ctx->pc = 0x50FAE8u;
        goto label_50fae8;
    }
    ctx->pc = 0x50FAE0u;
    SET_GPR_U32(ctx, 31, 0x50FAE8u);
    ctx->pc = 0x2DBA10u;
    if (runtime->hasFunction(0x2DBA10u)) {
        auto targetFn = runtime->lookupFunction(0x2DBA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50FAE8u; }
        if (ctx->pc != 0x50FAE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DBA10_0x2dba10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50FAE8u; }
        if (ctx->pc != 0x50FAE8u) { return; }
    }
    ctx->pc = 0x50FAE8u;
label_50fae8:
    // 0x50fae8: 0xc0b6e60  jal         func_2DB980
label_50faec:
    if (ctx->pc == 0x50FAECu) {
        ctx->pc = 0x50FAECu;
            // 0x50faec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50FAF0u;
        goto label_50faf0;
    }
    ctx->pc = 0x50FAE8u;
    SET_GPR_U32(ctx, 31, 0x50FAF0u);
    ctx->pc = 0x50FAECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50FAE8u;
            // 0x50faec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB980u;
    if (runtime->hasFunction(0x2DB980u)) {
        auto targetFn = runtime->lookupFunction(0x2DB980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50FAF0u; }
        if (ctx->pc != 0x50FAF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB980_0x2db980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50FAF0u; }
        if (ctx->pc != 0x50FAF0u) { return; }
    }
    ctx->pc = 0x50FAF0u;
label_50faf0:
    // 0x50faf0: 0xc0b6e38  jal         func_2DB8E0
label_50faf4:
    if (ctx->pc == 0x50FAF4u) {
        ctx->pc = 0x50FAF4u;
            // 0x50faf4: 0x2444000c  addiu       $a0, $v0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
        ctx->pc = 0x50FAF8u;
        goto label_50faf8;
    }
    ctx->pc = 0x50FAF0u;
    SET_GPR_U32(ctx, 31, 0x50FAF8u);
    ctx->pc = 0x50FAF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50FAF0u;
            // 0x50faf4: 0x2444000c  addiu       $a0, $v0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB8E0u;
    if (runtime->hasFunction(0x2DB8E0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB8E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50FAF8u; }
        if (ctx->pc != 0x50FAF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB8E0_0x2db8e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50FAF8u; }
        if (ctx->pc != 0x50FAF8u) { return; }
    }
    ctx->pc = 0x50FAF8u;
label_50faf8:
    // 0x50faf8: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x50faf8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_50fafc:
    // 0x50fafc: 0xc0b6e28  jal         func_2DB8A0
label_50fb00:
    if (ctx->pc == 0x50FB00u) {
        ctx->pc = 0x50FB00u;
            // 0x50fb00: 0x27a401a0  addiu       $a0, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->pc = 0x50FB04u;
        goto label_50fb04;
    }
    ctx->pc = 0x50FAFCu;
    SET_GPR_U32(ctx, 31, 0x50FB04u);
    ctx->pc = 0x50FB00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50FAFCu;
            // 0x50fb00: 0x27a401a0  addiu       $a0, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB8A0u;
    if (runtime->hasFunction(0x2DB8A0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50FB04u; }
        if (ctx->pc != 0x50FB04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB8A0_0x2db8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50FB04u; }
        if (ctx->pc != 0x50FB04u) { return; }
    }
    ctx->pc = 0x50FB04u;
label_50fb04:
    // 0x50fb04: 0xc0dc408  jal         func_371020
label_50fb08:
    if (ctx->pc == 0x50FB08u) {
        ctx->pc = 0x50FB08u;
            // 0x50fb08: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->pc = 0x50FB0Cu;
        goto label_50fb0c;
    }
    ctx->pc = 0x50FB04u;
    SET_GPR_U32(ctx, 31, 0x50FB0Cu);
    ctx->pc = 0x50FB08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50FB04u;
            // 0x50fb08: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x371020u;
    if (runtime->hasFunction(0x371020u)) {
        auto targetFn = runtime->lookupFunction(0x371020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50FB0Cu; }
        if (ctx->pc != 0x50FB0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00371020_0x371020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50FB0Cu; }
        if (ctx->pc != 0x50FB0Cu) { return; }
    }
    ctx->pc = 0x50FB0Cu;
label_50fb0c:
    // 0x50fb0c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x50fb0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_50fb10:
    // 0x50fb10: 0xc0dc3f4  jal         func_370FD0
label_50fb14:
    if (ctx->pc == 0x50FB14u) {
        ctx->pc = 0x50FB14u;
            // 0x50fb14: 0x27a501a0  addiu       $a1, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->pc = 0x50FB18u;
        goto label_50fb18;
    }
    ctx->pc = 0x50FB10u;
    SET_GPR_U32(ctx, 31, 0x50FB18u);
    ctx->pc = 0x50FB14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50FB10u;
            // 0x50fb14: 0x27a501a0  addiu       $a1, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
    ctx->pc = 0x370FD0u;
    if (runtime->hasFunction(0x370FD0u)) {
        auto targetFn = runtime->lookupFunction(0x370FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50FB18u; }
        if (ctx->pc != 0x50FB18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00370FD0_0x370fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50FB18u; }
        if (ctx->pc != 0x50FB18u) { return; }
    }
    ctx->pc = 0x50FB18u;
label_50fb18:
    // 0x50fb18: 0xc077264  jal         func_1DC990
label_50fb1c:
    if (ctx->pc == 0x50FB1Cu) {
        ctx->pc = 0x50FB1Cu;
            // 0x50fb1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50FB20u;
        goto label_50fb20;
    }
    ctx->pc = 0x50FB18u;
    SET_GPR_U32(ctx, 31, 0x50FB20u);
    ctx->pc = 0x50FB1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50FB18u;
            // 0x50fb1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC990u;
    if (runtime->hasFunction(0x1DC990u)) {
        auto targetFn = runtime->lookupFunction(0x1DC990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50FB20u; }
        if (ctx->pc != 0x50FB20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC990_0x1dc990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50FB20u; }
        if (ctx->pc != 0x50FB20u) { return; }
    }
    ctx->pc = 0x50FB20u;
label_50fb20:
    // 0x50fb20: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x50fb20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_50fb24:
    // 0x50fb24: 0xc04cc34  jal         func_1330D0
label_50fb28:
    if (ctx->pc == 0x50FB28u) {
        ctx->pc = 0x50FB28u;
            // 0x50fb28: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x50FB2Cu;
        goto label_50fb2c;
    }
    ctx->pc = 0x50FB24u;
    SET_GPR_U32(ctx, 31, 0x50FB2Cu);
    ctx->pc = 0x50FB28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50FB24u;
            // 0x50fb28: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330D0u;
    if (runtime->hasFunction(0x1330D0u)) {
        auto targetFn = runtime->lookupFunction(0x1330D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50FB2Cu; }
        if (ctx->pc != 0x50FB2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330D0_0x1330d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50FB2Cu; }
        if (ctx->pc != 0x50FB2Cu) { return; }
    }
    ctx->pc = 0x50FB2Cu;
label_50fb2c:
    // 0x50fb2c: 0xc14410c  jal         func_510430
label_50fb30:
    if (ctx->pc == 0x50FB30u) {
        ctx->pc = 0x50FB30u;
            // 0x50fb30: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x50FB34u;
        goto label_50fb34;
    }
    ctx->pc = 0x50FB2Cu;
    SET_GPR_U32(ctx, 31, 0x50FB34u);
    ctx->pc = 0x50FB30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50FB2Cu;
            // 0x50fb30: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x510430u;
    if (runtime->hasFunction(0x510430u)) {
        auto targetFn = runtime->lookupFunction(0x510430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50FB34u; }
        if (ctx->pc != 0x50FB34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00510430_0x510430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50FB34u; }
        if (ctx->pc != 0x50FB34u) { return; }
    }
    ctx->pc = 0x50FB34u;
label_50fb34:
    // 0x50fb34: 0x8e050128  lw          $a1, 0x128($s0)
    ctx->pc = 0x50fb34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 296)));
label_50fb38:
    // 0x50fb38: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x50fb38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_50fb3c:
    // 0x50fb3c: 0x8e06012c  lw          $a2, 0x12C($s0)
    ctx->pc = 0x50fb3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
label_50fb40:
    // 0x50fb40: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x50fb40u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_50fb44:
    // 0x50fb44: 0xc1443cc  jal         func_510F30
label_50fb48:
    if (ctx->pc == 0x50FB48u) {
        ctx->pc = 0x50FB48u;
            // 0x50fb48: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x50FB4Cu;
        goto label_50fb4c;
    }
    ctx->pc = 0x50FB44u;
    SET_GPR_U32(ctx, 31, 0x50FB4Cu);
    ctx->pc = 0x50FB48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50FB44u;
            // 0x50fb48: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x510F30u;
    if (runtime->hasFunction(0x510F30u)) {
        auto targetFn = runtime->lookupFunction(0x510F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50FB4Cu; }
        if (ctx->pc != 0x50FB4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00510F30_0x510f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50FB4Cu; }
        if (ctx->pc != 0x50FB4Cu) { return; }
    }
    ctx->pc = 0x50FB4Cu;
label_50fb4c:
    // 0x50fb4c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x50fb4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_50fb50:
    // 0x50fb50: 0xafa00450  sw          $zero, 0x450($sp)
    ctx->pc = 0x50fb50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1104), GPR_U32(ctx, 0));
label_50fb54:
    // 0x50fb54: 0xafa00454  sw          $zero, 0x454($sp)
    ctx->pc = 0x50fb54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1108), GPR_U32(ctx, 0));
label_50fb58:
    // 0x50fb58: 0xafa00458  sw          $zero, 0x458($sp)
    ctx->pc = 0x50fb58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1112), GPR_U32(ctx, 0));
label_50fb5c:
    // 0x50fb5c: 0xc088b74  jal         func_222DD0
label_50fb60:
    if (ctx->pc == 0x50FB60u) {
        ctx->pc = 0x50FB60u;
            // 0x50fb60: 0xafa0045c  sw          $zero, 0x45C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1116), GPR_U32(ctx, 0));
        ctx->pc = 0x50FB64u;
        goto label_50fb64;
    }
    ctx->pc = 0x50FB5Cu;
    SET_GPR_U32(ctx, 31, 0x50FB64u);
    ctx->pc = 0x50FB60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50FB5Cu;
            // 0x50fb60: 0xafa0045c  sw          $zero, 0x45C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1116), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50FB64u; }
        if (ctx->pc != 0x50FB64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50FB64u; }
        if (ctx->pc != 0x50FB64u) { return; }
    }
    ctx->pc = 0x50FB64u;
label_50fb64:
    // 0x50fb64: 0x8e5900a0  lw          $t9, 0xA0($s2)
    ctx->pc = 0x50fb64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
label_50fb68:
    // 0x50fb68: 0x264400a0  addiu       $a0, $s2, 0xA0
    ctx->pc = 0x50fb68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
label_50fb6c:
    // 0x50fb6c: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x50fb6cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_50fb70:
    // 0x50fb70: 0x320f809  jalr        $t9
label_50fb74:
    if (ctx->pc == 0x50FB74u) {
        ctx->pc = 0x50FB74u;
            // 0x50fb74: 0x27a50450  addiu       $a1, $sp, 0x450 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1104));
        ctx->pc = 0x50FB78u;
        goto label_50fb78;
    }
    ctx->pc = 0x50FB70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x50FB78u);
        ctx->pc = 0x50FB74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50FB70u;
            // 0x50fb74: 0x27a50450  addiu       $a1, $sp, 0x450 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1104));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x50FB78u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x50FB78u; }
            if (ctx->pc != 0x50FB78u) { return; }
        }
        }
    }
    ctx->pc = 0x50FB78u;
label_50fb78:
    // 0x50fb78: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x50fb78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
label_50fb7c:
    // 0x50fb7c: 0x27a40440  addiu       $a0, $sp, 0x440
    ctx->pc = 0x50fb7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
label_50fb80:
    // 0x50fb80: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x50fb80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_50fb84:
    // 0x50fb84: 0x3c023eed  lui         $v0, 0x3EED
    ctx->pc = 0x50fb84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16109 << 16));
label_50fb88:
    // 0x50fb88: 0x3443097c  ori         $v1, $v0, 0x97C
    ctx->pc = 0x50fb88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2428);
label_50fb8c:
    // 0x50fb8c: 0x3c023fb1  lui         $v0, 0x3FB1
    ctx->pc = 0x50fb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16305 << 16));
label_50fb90:
    // 0x50fb90: 0x3442c71c  ori         $v0, $v0, 0xC71C
    ctx->pc = 0x50fb90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)50972);
label_50fb94:
    // 0x50fb94: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x50fb94u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_50fb98:
    // 0x50fb98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x50fb98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_50fb9c:
    // 0x50fb9c: 0x0  nop
    ctx->pc = 0x50fb9cu;
    // NOP
label_50fba0:
    // 0x50fba0: 0x46006018  adda.s      $f12, $f0
    ctx->pc = 0x50fba0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
label_50fba4:
    // 0x50fba4: 0xc6000134  lwc1        $f0, 0x134($s0)
    ctx->pc = 0x50fba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_50fba8:
    // 0x50fba8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x50fba8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_50fbac:
    // 0x50fbac: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x50fbacu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_50fbb0:
    // 0x50fbb0: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x50fbb0u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
label_50fbb4:
    // 0x50fbb4: 0x0  nop
    ctx->pc = 0x50fbb4u;
    // NOP
label_50fbb8:
    // 0x50fbb8: 0x0  nop
    ctx->pc = 0x50fbb8u;
    // NOP
label_50fbbc:
    // 0x50fbbc: 0xc04cbd8  jal         func_132F60
label_50fbc0:
    if (ctx->pc == 0x50FBC0u) {
        ctx->pc = 0x50FBC0u;
            // 0x50fbc0: 0x46000b9c  madd.s      $f14, $f1, $f0 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[0]));
        ctx->pc = 0x50FBC4u;
        goto label_50fbc4;
    }
    ctx->pc = 0x50FBBCu;
    SET_GPR_U32(ctx, 31, 0x50FBC4u);
    ctx->pc = 0x50FBC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50FBBCu;
            // 0x50fbc0: 0x46000b9c  madd.s      $f14, $f1, $f0 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[0]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50FBC4u; }
        if (ctx->pc != 0x50FBC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50FBC4u; }
        if (ctx->pc != 0x50FBC4u) { return; }
    }
    ctx->pc = 0x50FBC4u;
label_50fbc4:
    // 0x50fbc4: 0x27a40330  addiu       $a0, $sp, 0x330
    ctx->pc = 0x50fbc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 816));
label_50fbc8:
    // 0x50fbc8: 0xc04f278  jal         func_13C9E0
label_50fbcc:
    if (ctx->pc == 0x50FBCCu) {
        ctx->pc = 0x50FBCCu;
            // 0x50fbcc: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->pc = 0x50FBD0u;
        goto label_50fbd0;
    }
    ctx->pc = 0x50FBC8u;
    SET_GPR_U32(ctx, 31, 0x50FBD0u);
    ctx->pc = 0x50FBCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50FBC8u;
            // 0x50fbcc: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50FBD0u; }
        if (ctx->pc != 0x50FBD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50FBD0u; }
        if (ctx->pc != 0x50FBD0u) { return; }
    }
    ctx->pc = 0x50FBD0u;
label_50fbd0:
    // 0x50fbd0: 0x27a40430  addiu       $a0, $sp, 0x430
    ctx->pc = 0x50fbd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1072));
label_50fbd4:
    // 0x50fbd4: 0x27a50330  addiu       $a1, $sp, 0x330
    ctx->pc = 0x50fbd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 816));
label_50fbd8:
    // 0x50fbd8: 0xc04cca0  jal         func_133280
label_50fbdc:
    if (ctx->pc == 0x50FBDCu) {
        ctx->pc = 0x50FBDCu;
            // 0x50fbdc: 0x27a60440  addiu       $a2, $sp, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
        ctx->pc = 0x50FBE0u;
        goto label_50fbe0;
    }
    ctx->pc = 0x50FBD8u;
    SET_GPR_U32(ctx, 31, 0x50FBE0u);
    ctx->pc = 0x50FBDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50FBD8u;
            // 0x50fbdc: 0x27a60440  addiu       $a2, $sp, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50FBE0u; }
        if (ctx->pc != 0x50FBE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50FBE0u; }
        if (ctx->pc != 0x50FBE0u) { return; }
    }
    ctx->pc = 0x50FBE0u;
label_50fbe0:
    // 0x50fbe0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x50fbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_50fbe4:
    // 0x50fbe4: 0xafa0032c  sw          $zero, 0x32C($sp)
    ctx->pc = 0x50fbe4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 812), GPR_U32(ctx, 0));
label_50fbe8:
    // 0x50fbe8: 0xc7a20430  lwc1        $f2, 0x430($sp)
    ctx->pc = 0x50fbe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1072)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_50fbec:
    // 0x50fbec: 0x8c51e3e0  lw          $s1, -0x1C20($v0)
    ctx->pc = 0x50fbecu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_50fbf0:
    // 0x50fbf0: 0xc7a10434  lwc1        $f1, 0x434($sp)
    ctx->pc = 0x50fbf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1076)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_50fbf4:
    // 0x50fbf4: 0xc7a00438  lwc1        $f0, 0x438($sp)
    ctx->pc = 0x50fbf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1080)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_50fbf8:
    // 0x50fbf8: 0xe7a20320  swc1        $f2, 0x320($sp)
    ctx->pc = 0x50fbf8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 800), bits); }
label_50fbfc:
    // 0x50fbfc: 0xe7a10324  swc1        $f1, 0x324($sp)
    ctx->pc = 0x50fbfcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 804), bits); }
label_50fc00:
    // 0x50fc00: 0xe7a00328  swc1        $f0, 0x328($sp)
    ctx->pc = 0x50fc00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 808), bits); }
label_50fc04:
    // 0x50fc04: 0xc6340020  lwc1        $f20, 0x20($s1)
    ctx->pc = 0x50fc04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_50fc08:
    // 0x50fc08: 0xc089638  jal         func_2258E0
label_50fc0c:
    if (ctx->pc == 0x50FC0Cu) {
        ctx->pc = 0x50FC0Cu;
            // 0x50fc0c: 0x264400a0  addiu       $a0, $s2, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
        ctx->pc = 0x50FC10u;
        goto label_50fc10;
    }
    ctx->pc = 0x50FC08u;
    SET_GPR_U32(ctx, 31, 0x50FC10u);
    ctx->pc = 0x50FC0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50FC08u;
            // 0x50fc0c: 0x264400a0  addiu       $a0, $s2, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2258E0u;
    if (runtime->hasFunction(0x2258E0u)) {
        auto targetFn = runtime->lookupFunction(0x2258E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50FC10u; }
        if (ctx->pc != 0x50FC10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002258E0_0x2258e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50FC10u; }
        if (ctx->pc != 0x50FC10u) { return; }
    }
    ctx->pc = 0x50FC10u;
label_50fc10:
    // 0x50fc10: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x50fc10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_50fc14:
    // 0x50fc14: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x50fc14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_50fc18:
    // 0x50fc18: 0x46140102  mul.s       $f4, $f0, $f20
    ctx->pc = 0x50fc18u;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_50fc1c:
    // 0x50fc1c: 0xc4450018  lwc1        $f5, 0x18($v0)
    ctx->pc = 0x50fc1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_50fc20:
    // 0x50fc20: 0xc7a30320  lwc1        $f3, 0x320($sp)
    ctx->pc = 0x50fc20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 800)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_50fc24:
    // 0x50fc24: 0xc7a20324  lwc1        $f2, 0x324($sp)
    ctx->pc = 0x50fc24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 804)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_50fc28:
    // 0x50fc28: 0x46042902  mul.s       $f4, $f5, $f4
    ctx->pc = 0x50fc28u;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
label_50fc2c:
    // 0x50fc2c: 0xc7a10328  lwc1        $f1, 0x328($sp)
    ctx->pc = 0x50fc2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 808)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_50fc30:
    // 0x50fc30: 0xc7a0032c  lwc1        $f0, 0x32C($sp)
    ctx->pc = 0x50fc30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_50fc34:
    // 0x50fc34: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x50fc34u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
label_50fc38:
    // 0x50fc38: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x50fc38u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
label_50fc3c:
    // 0x50fc3c: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x50fc3cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
label_50fc40:
    // 0x50fc40: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x50fc40u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_50fc44:
    // 0x50fc44: 0xe7a30320  swc1        $f3, 0x320($sp)
    ctx->pc = 0x50fc44u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 800), bits); }
label_50fc48:
    // 0x50fc48: 0xe7a20324  swc1        $f2, 0x324($sp)
    ctx->pc = 0x50fc48u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 804), bits); }
label_50fc4c:
    // 0x50fc4c: 0xe7a10328  swc1        $f1, 0x328($sp)
    ctx->pc = 0x50fc4cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 808), bits); }
label_50fc50:
    // 0x50fc50: 0xe7a0032c  swc1        $f0, 0x32C($sp)
    ctx->pc = 0x50fc50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 812), bits); }
label_50fc54:
    // 0x50fc54: 0xc6340018  lwc1        $f20, 0x18($s1)
    ctx->pc = 0x50fc54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_50fc58:
    // 0x50fc58: 0xc088b74  jal         func_222DD0
label_50fc5c:
    if (ctx->pc == 0x50FC5Cu) {
        ctx->pc = 0x50FC5Cu;
            // 0x50fc5c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50FC60u;
        goto label_50fc60;
    }
    ctx->pc = 0x50FC58u;
    SET_GPR_U32(ctx, 31, 0x50FC60u);
    ctx->pc = 0x50FC5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50FC58u;
            // 0x50fc5c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50FC60u; }
        if (ctx->pc != 0x50FC60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50FC60u; }
        if (ctx->pc != 0x50FC60u) { return; }
    }
    ctx->pc = 0x50FC60u;
label_50fc60:
    // 0x50fc60: 0x8e5900a0  lw          $t9, 0xA0($s2)
    ctx->pc = 0x50fc60u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
label_50fc64:
    // 0x50fc64: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x50fc64u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_50fc68:
    // 0x50fc68: 0x264400a0  addiu       $a0, $s2, 0xA0
    ctx->pc = 0x50fc68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
label_50fc6c:
    // 0x50fc6c: 0x8f390058  lw          $t9, 0x58($t9)
    ctx->pc = 0x50fc6cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 88)));
label_50fc70:
    // 0x50fc70: 0x320f809  jalr        $t9
label_50fc74:
    if (ctx->pc == 0x50FC74u) {
        ctx->pc = 0x50FC74u;
            // 0x50fc74: 0x27a50320  addiu       $a1, $sp, 0x320 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
        ctx->pc = 0x50FC78u;
        goto label_50fc78;
    }
    ctx->pc = 0x50FC70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x50FC78u);
        ctx->pc = 0x50FC74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50FC70u;
            // 0x50fc74: 0x27a50320  addiu       $a1, $sp, 0x320 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x50FC78u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x50FC78u; }
            if (ctx->pc != 0x50FC78u) { return; }
        }
        }
    }
    ctx->pc = 0x50FC78u;
label_50fc78:
    // 0x50fc78: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x50fc78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_50fc7c:
    // 0x50fc7c: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x50fc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_50fc80:
    // 0x50fc80: 0xc6010134  lwc1        $f1, 0x134($s0)
    ctx->pc = 0x50fc80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_50fc84:
    // 0x50fc84: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x50fc84u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_50fc88:
    // 0x50fc88: 0xc4420018  lwc1        $f2, 0x18($v0)
    ctx->pc = 0x50fc88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_50fc8c:
    // 0x50fc8c: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x50fc8cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_50fc90:
    // 0x50fc90: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x50fc90u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_50fc94:
    // 0x50fc94: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_50fc98:
    if (ctx->pc == 0x50FC98u) {
        ctx->pc = 0x50FC98u;
            // 0x50fc98: 0xe6010134  swc1        $f1, 0x134($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 308), bits); }
        ctx->pc = 0x50FC9Cu;
        goto label_50fc9c;
    }
    ctx->pc = 0x50FC94u;
    {
        const bool branch_taken_0x50fc94 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x50FC98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50FC94u;
            // 0x50fc98: 0xe6010134  swc1        $f1, 0x134($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 308), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x50fc94) {
            ctx->pc = 0x50FCB8u;
            goto label_50fcb8;
        }
    }
    ctx->pc = 0x50FC9Cu;
label_50fc9c:
    // 0x50fc9c: 0x3c0242a6  lui         $v0, 0x42A6
    ctx->pc = 0x50fc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17062 << 16));
label_50fca0:
    // 0x50fca0: 0x3c034334  lui         $v1, 0x4334
    ctx->pc = 0x50fca0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17204 << 16));
label_50fca4:
    // 0x50fca4: 0x3444aaaa  ori         $a0, $v0, 0xAAAA
    ctx->pc = 0x50fca4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43690);
label_50fca8:
    // 0x50fca8: 0xae440154  sw          $a0, 0x154($s2)
    ctx->pc = 0x50fca8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 340), GPR_U32(ctx, 4));
label_50fcac:
    // 0x50fcac: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x50fcacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_50fcb0:
    // 0x50fcb0: 0xae030134  sw          $v1, 0x134($s0)
    ctx->pc = 0x50fcb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 308), GPR_U32(ctx, 3));
label_50fcb4:
    // 0x50fcb4: 0xae020124  sw          $v0, 0x124($s0)
    ctx->pc = 0x50fcb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 2));
label_50fcb8:
    // 0x50fcb8: 0xc1439ec  jal         func_50E7B0
label_50fcbc:
    if (ctx->pc == 0x50FCBCu) {
        ctx->pc = 0x50FCBCu;
            // 0x50fcbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50FCC0u;
        goto label_50fcc0;
    }
    ctx->pc = 0x50FCB8u;
    SET_GPR_U32(ctx, 31, 0x50FCC0u);
    ctx->pc = 0x50FCBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50FCB8u;
            // 0x50fcbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x50E7B0u;
    if (runtime->hasFunction(0x50E7B0u)) {
        auto targetFn = runtime->lookupFunction(0x50E7B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50FCC0u; }
        if (ctx->pc != 0x50FCC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0050E7B0_0x50e7b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50FCC0u; }
        if (ctx->pc != 0x50FCC0u) { return; }
    }
    ctx->pc = 0x50FCC0u;
label_50fcc0:
    // 0x50fcc0: 0x100001d2  b           . + 4 + (0x1D2 << 2)
label_50fcc4:
    if (ctx->pc == 0x50FCC4u) {
        ctx->pc = 0x50FCC8u;
        goto label_50fcc8;
    }
    ctx->pc = 0x50FCC0u;
    {
        const bool branch_taken_0x50fcc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x50fcc0) {
            ctx->pc = 0x51040Cu;
            goto label_51040c;
        }
    }
    ctx->pc = 0x50FCC8u;
label_50fcc8:
    // 0x50fcc8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x50fcc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_50fccc:
    // 0x50fccc: 0xc0dc9bc  jal         func_3726F0
label_50fcd0:
    if (ctx->pc == 0x50FCD0u) {
        ctx->pc = 0x50FCD0u;
            // 0x50fcd0: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x50FCD4u;
        goto label_50fcd4;
    }
    ctx->pc = 0x50FCCCu;
    SET_GPR_U32(ctx, 31, 0x50FCD4u);
    ctx->pc = 0x50FCD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50FCCCu;
            // 0x50fcd0: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3726F0u;
    if (runtime->hasFunction(0x3726F0u)) {
        auto targetFn = runtime->lookupFunction(0x3726F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50FCD4u; }
        if (ctx->pc != 0x50FCD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003726F0_0x3726f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50FCD4u; }
        if (ctx->pc != 0x50FCD4u) { return; }
    }
    ctx->pc = 0x50FCD4u;
label_50fcd4:
    // 0x50fcd4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x50fcd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_50fcd8:
    // 0x50fcd8: 0xc0dc9a0  jal         func_372680
label_50fcdc:
    if (ctx->pc == 0x50FCDCu) {
        ctx->pc = 0x50FCDCu;
            // 0x50fcdc: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->pc = 0x50FCE0u;
        goto label_50fce0;
    }
    ctx->pc = 0x50FCD8u;
    SET_GPR_U32(ctx, 31, 0x50FCE0u);
    ctx->pc = 0x50FCDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50FCD8u;
            // 0x50fcdc: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x372680u;
    if (runtime->hasFunction(0x372680u)) {
        auto targetFn = runtime->lookupFunction(0x372680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50FCE0u; }
        if (ctx->pc != 0x50FCE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00372680_0x372680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50FCE0u; }
        if (ctx->pc != 0x50FCE0u) { return; }
    }
    ctx->pc = 0x50FCE0u;
label_50fce0:
    // 0x50fce0: 0x8e02012c  lw          $v0, 0x12C($s0)
    ctx->pc = 0x50fce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
label_50fce4:
    // 0x50fce4: 0x442013a  bltzl       $v0, . + 4 + (0x13A << 2)
label_50fce8:
    if (ctx->pc == 0x50FCE8u) {
        ctx->pc = 0x50FCE8u;
            // 0x50fce8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50FCECu;
        goto label_50fcec;
    }
    ctx->pc = 0x50FCE4u;
    {
        const bool branch_taken_0x50fce4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x50fce4) {
            ctx->pc = 0x50FCE8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x50FCE4u;
            // 0x50fce8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5101D0u;
            goto label_5101d0;
        }
    }
    ctx->pc = 0x50FCECu;
label_50fcec:
    // 0x50fcec: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x50fcecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_50fcf0:
    // 0x50fcf0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x50fcf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_50fcf4:
    // 0x50fcf4: 0x24420e84  addiu       $v0, $v0, 0xE84
    ctx->pc = 0x50fcf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3716));
label_50fcf8:
    // 0x50fcf8: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x50fcf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_50fcfc:
    // 0x50fcfc: 0x8e020148  lw          $v0, 0x148($s0)
    ctx->pc = 0x50fcfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
label_50fd00:
    // 0x50fd00: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
label_50fd04:
    if (ctx->pc == 0x50FD04u) {
        ctx->pc = 0x50FD04u;
            // 0x50fd04: 0x8c710000  lw          $s1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->pc = 0x50FD08u;
        goto label_50fd08;
    }
    ctx->pc = 0x50FD00u;
    {
        const bool branch_taken_0x50fd00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x50FD04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50FD00u;
            // 0x50fd04: 0x8c710000  lw          $s1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50fd00) {
            ctx->pc = 0x50FD70u;
            goto label_50fd70;
        }
    }
    ctx->pc = 0x50FD08u;
label_50fd08:
    // 0x50fd08: 0xc077330  jal         func_1DCCC0
label_50fd0c:
    if (ctx->pc == 0x50FD0Cu) {
        ctx->pc = 0x50FD0Cu;
            // 0x50fd0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50FD10u;
        goto label_50fd10;
    }
    ctx->pc = 0x50FD08u;
    SET_GPR_U32(ctx, 31, 0x50FD10u);
    ctx->pc = 0x50FD0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50FD08u;
            // 0x50fd0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCCC0u;
    if (runtime->hasFunction(0x1DCCC0u)) {
        auto targetFn = runtime->lookupFunction(0x1DCCC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50FD10u; }
        if (ctx->pc != 0x50FD10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCCC0_0x1dccc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50FD10u; }
        if (ctx->pc != 0x50FD10u) { return; }
    }
    ctx->pc = 0x50FD10u;
label_50fd10:
    // 0x50fd10: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_50fd14:
    if (ctx->pc == 0x50FD14u) {
        ctx->pc = 0x50FD18u;
        goto label_50fd18;
    }
    ctx->pc = 0x50FD10u;
    {
        const bool branch_taken_0x50fd10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x50fd10) {
            ctx->pc = 0x50FD28u;
            goto label_50fd28;
        }
    }
    ctx->pc = 0x50FD18u;
label_50fd18:
    // 0x50fd18: 0xc07732c  jal         func_1DCCB0
label_50fd1c:
    if (ctx->pc == 0x50FD1Cu) {
        ctx->pc = 0x50FD1Cu;
            // 0x50fd1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50FD20u;
        goto label_50fd20;
    }
    ctx->pc = 0x50FD18u;
    SET_GPR_U32(ctx, 31, 0x50FD20u);
    ctx->pc = 0x50FD1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50FD18u;
            // 0x50fd1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCCB0u;
    if (runtime->hasFunction(0x1DCCB0u)) {
        auto targetFn = runtime->lookupFunction(0x1DCCB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50FD20u; }
        if (ctx->pc != 0x50FD20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCCB0_0x1dccb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50FD20u; }
        if (ctx->pc != 0x50FD20u) { return; }
    }
    ctx->pc = 0x50FD20u;
label_50fd20:
    // 0x50fd20: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
label_50fd24:
    if (ctx->pc == 0x50FD24u) {
        ctx->pc = 0x50FD24u;
            // 0x50fd24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50FD28u;
        goto label_50fd28;
    }
    ctx->pc = 0x50FD20u;
    {
        const bool branch_taken_0x50fd20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x50fd20) {
            ctx->pc = 0x50FD24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x50FD20u;
            // 0x50fd24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x50FD74u;
            goto label_50fd74;
        }
    }
    ctx->pc = 0x50FD28u;
label_50fd28:
    // 0x50fd28: 0xc0c05c4  jal         func_301710
label_50fd2c:
    if (ctx->pc == 0x50FD2Cu) {
        ctx->pc = 0x50FD30u;
        goto label_50fd30;
    }
    ctx->pc = 0x50FD28u;
    SET_GPR_U32(ctx, 31, 0x50FD30u);
    ctx->pc = 0x301710u;
    if (runtime->hasFunction(0x301710u)) {
        auto targetFn = runtime->lookupFunction(0x301710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50FD30u; }
        if (ctx->pc != 0x50FD30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00301710_0x301710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50FD30u; }
        if (ctx->pc != 0x50FD30u) { return; }
    }
    ctx->pc = 0x50FD30u;
label_50fd30:
    // 0x50fd30: 0x8e050144  lw          $a1, 0x144($s0)
    ctx->pc = 0x50fd30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 324)));
label_50fd34:
    // 0x50fd34: 0xc0de630  jal         func_3798C0
label_50fd38:
    if (ctx->pc == 0x50FD38u) {
        ctx->pc = 0x50FD38u;
            // 0x50fd38: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x50FD3Cu;
        goto label_50fd3c;
    }
    ctx->pc = 0x50FD34u;
    SET_GPR_U32(ctx, 31, 0x50FD3Cu);
    ctx->pc = 0x50FD38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50FD34u;
            // 0x50fd38: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3798C0u;
    if (runtime->hasFunction(0x3798C0u)) {
        auto targetFn = runtime->lookupFunction(0x3798C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50FD3Cu; }
        if (ctx->pc != 0x50FD3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003798C0_0x3798c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50FD3Cu; }
        if (ctx->pc != 0x50FD3Cu) { return; }
    }
    ctx->pc = 0x50FD3Cu;
label_50fd3c:
    // 0x50fd3c: 0xc07731c  jal         func_1DCC70
label_50fd40:
    if (ctx->pc == 0x50FD40u) {
        ctx->pc = 0x50FD40u;
            // 0x50fd40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50FD44u;
        goto label_50fd44;
    }
    ctx->pc = 0x50FD3Cu;
    SET_GPR_U32(ctx, 31, 0x50FD44u);
    ctx->pc = 0x50FD40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50FD3Cu;
            // 0x50fd40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC70u;
    if (runtime->hasFunction(0x1DCC70u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50FD44u; }
        if (ctx->pc != 0x50FD44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC70_0x1dcc70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50FD44u; }
        if (ctx->pc != 0x50FD44u) { return; }
    }
    ctx->pc = 0x50FD44u;
label_50fd44:
    // 0x50fd44: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x50fd44u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_50fd48:
    // 0x50fd48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x50fd48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_50fd4c:
    // 0x50fd4c: 0xc0770e0  jal         func_1DC380
label_50fd50:
    if (ctx->pc == 0x50FD50u) {
        ctx->pc = 0x50FD50u;
            // 0x50fd50: 0x24050016  addiu       $a1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->pc = 0x50FD54u;
        goto label_50fd54;
    }
    ctx->pc = 0x50FD4Cu;
    SET_GPR_U32(ctx, 31, 0x50FD54u);
    ctx->pc = 0x50FD50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50FD4Cu;
            // 0x50fd50: 0x24050016  addiu       $a1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC380u;
    if (runtime->hasFunction(0x1DC380u)) {
        auto targetFn = runtime->lookupFunction(0x1DC380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50FD54u; }
        if (ctx->pc != 0x50FD54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC380_0x1dc380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50FD54u; }
        if (ctx->pc != 0x50FD54u) { return; }
    }
    ctx->pc = 0x50FD54u;
label_50fd54:
    // 0x50fd54: 0x8e790030  lw          $t9, 0x30($s3)
    ctx->pc = 0x50fd54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
label_50fd58:
    // 0x50fd58: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x50fd58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_50fd5c:
    // 0x50fd5c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x50fd5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_50fd60:
    // 0x50fd60: 0x320f809  jalr        $t9
label_50fd64:
    if (ctx->pc == 0x50FD64u) {
        ctx->pc = 0x50FD64u;
            // 0x50fd64: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50FD68u;
        goto label_50fd68;
    }
    ctx->pc = 0x50FD60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x50FD68u);
        ctx->pc = 0x50FD64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50FD60u;
            // 0x50fd64: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x50FD68u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x50FD68u; }
            if (ctx->pc != 0x50FD68u) { return; }
        }
        }
    }
    ctx->pc = 0x50FD68u;
label_50fd68:
    // 0x50fd68: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x50fd68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_50fd6c:
    // 0x50fd6c: 0xae020148  sw          $v0, 0x148($s0)
    ctx->pc = 0x50fd6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 2));
label_50fd70:
    // 0x50fd70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x50fd70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_50fd74:
    // 0x50fd74: 0xc077570  jal         func_1DD5C0
label_50fd78:
    if (ctx->pc == 0x50FD78u) {
        ctx->pc = 0x50FD7Cu;
        goto label_50fd7c;
    }
    ctx->pc = 0x50FD74u;
    SET_GPR_U32(ctx, 31, 0x50FD7Cu);
    ctx->pc = 0x1DD5C0u;
    if (runtime->hasFunction(0x1DD5C0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD5C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50FD7Cu; }
        if (ctx->pc != 0x50FD7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD5C0_0x1dd5c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50FD7Cu; }
        if (ctx->pc != 0x50FD7Cu) { return; }
    }
    ctx->pc = 0x50FD7Cu;
label_50fd7c:
    // 0x50fd7c: 0xc0bd738  jal         func_2F5CE0
label_50fd80:
    if (ctx->pc == 0x50FD80u) {
        ctx->pc = 0x50FD80u;
            // 0x50fd80: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50FD84u;
        goto label_50fd84;
    }
    ctx->pc = 0x50FD7Cu;
    SET_GPR_U32(ctx, 31, 0x50FD84u);
    ctx->pc = 0x50FD80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50FD7Cu;
            // 0x50fd80: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F5CE0u;
    if (runtime->hasFunction(0x2F5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x2F5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50FD84u; }
        if (ctx->pc != 0x50FD84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F5CE0_0x2f5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50FD84u; }
        if (ctx->pc != 0x50FD84u) { return; }
    }
    ctx->pc = 0x50FD84u;
label_50fd84:
    // 0x50fd84: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x50fd84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_50fd88:
    // 0x50fd88: 0x5443000b  bnel        $v0, $v1, . + 4 + (0xB << 2)
label_50fd8c:
    if (ctx->pc == 0x50FD8Cu) {
        ctx->pc = 0x50FD8Cu;
            // 0x50fd8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50FD90u;
        goto label_50fd90;
    }
    ctx->pc = 0x50FD88u;
    {
        const bool branch_taken_0x50fd88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x50fd88) {
            ctx->pc = 0x50FD8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x50FD88u;
            // 0x50fd8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x50FDB8u;
            goto label_50fdb8;
        }
    }
    ctx->pc = 0x50FD90u;
label_50fd90:
    // 0x50fd90: 0xc077570  jal         func_1DD5C0
label_50fd94:
    if (ctx->pc == 0x50FD94u) {
        ctx->pc = 0x50FD94u;
            // 0x50fd94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50FD98u;
        goto label_50fd98;
    }
    ctx->pc = 0x50FD90u;
    SET_GPR_U32(ctx, 31, 0x50FD98u);
    ctx->pc = 0x50FD94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50FD90u;
            // 0x50fd94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD5C0u;
    if (runtime->hasFunction(0x1DD5C0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD5C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50FD98u; }
        if (ctx->pc != 0x50FD98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD5C0_0x1dd5c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50FD98u; }
        if (ctx->pc != 0x50FD98u) { return; }
    }
    ctx->pc = 0x50FD98u;
label_50fd98:
    // 0x50fd98: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x50fd98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_50fd9c:
    // 0x50fd9c: 0xc0e7aec  jal         func_39EBB0
label_50fda0:
    if (ctx->pc == 0x50FDA0u) {
        ctx->pc = 0x50FDA0u;
            // 0x50fda0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x50FDA4u;
        goto label_50fda4;
    }
    ctx->pc = 0x50FD9Cu;
    SET_GPR_U32(ctx, 31, 0x50FDA4u);
    ctx->pc = 0x50FDA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50FD9Cu;
            // 0x50fda0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x39EBB0u;
    if (runtime->hasFunction(0x39EBB0u)) {
        auto targetFn = runtime->lookupFunction(0x39EBB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50FDA4u; }
        if (ctx->pc != 0x50FDA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0039EBB0_0x39ebb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50FDA4u; }
        if (ctx->pc != 0x50FDA4u) { return; }
    }
    ctx->pc = 0x50FDA4u;
label_50fda4:
    // 0x50fda4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x50fda4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_50fda8:
    // 0x50fda8: 0xc0eece8  jal         func_3BB3A0
label_50fdac:
    if (ctx->pc == 0x50FDACu) {
        ctx->pc = 0x50FDACu;
            // 0x50fdac: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x50FDB0u;
        goto label_50fdb0;
    }
    ctx->pc = 0x50FDA8u;
    SET_GPR_U32(ctx, 31, 0x50FDB0u);
    ctx->pc = 0x50FDACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50FDA8u;
            // 0x50fdac: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BB3A0u;
    if (runtime->hasFunction(0x3BB3A0u)) {
        auto targetFn = runtime->lookupFunction(0x3BB3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50FDB0u; }
        if (ctx->pc != 0x50FDB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BB3A0_0x3bb3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50FDB0u; }
        if (ctx->pc != 0x50FDB0u) { return; }
    }
    ctx->pc = 0x50FDB0u;
label_50fdb0:
    // 0x50fdb0: 0x10000009  b           . + 4 + (0x9 << 2)
label_50fdb4:
    if (ctx->pc == 0x50FDB4u) {
        ctx->pc = 0x50FDB4u;
            // 0x50fdb4: 0x8e03013c  lw          $v1, 0x13C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 316)));
        ctx->pc = 0x50FDB8u;
        goto label_50fdb8;
    }
    ctx->pc = 0x50FDB0u;
    {
        const bool branch_taken_0x50fdb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x50FDB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50FDB0u;
            // 0x50fdb4: 0x8e03013c  lw          $v1, 0x13C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 316)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50fdb0) {
            ctx->pc = 0x50FDD8u;
            goto label_50fdd8;
        }
    }
    ctx->pc = 0x50FDB8u;
label_50fdb8:
    // 0x50fdb8: 0xc0b6cec  jal         func_2DB3B0
label_50fdbc:
    if (ctx->pc == 0x50FDBCu) {
        ctx->pc = 0x50FDC0u;
        goto label_50fdc0;
    }
    ctx->pc = 0x50FDB8u;
    SET_GPR_U32(ctx, 31, 0x50FDC0u);
    ctx->pc = 0x2DB3B0u;
    if (runtime->hasFunction(0x2DB3B0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB3B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50FDC0u; }
        if (ctx->pc != 0x50FDC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB3B0_0x2db3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50FDC0u; }
        if (ctx->pc != 0x50FDC0u) { return; }
    }
    ctx->pc = 0x50FDC0u;
label_50fdc0:
    // 0x50fdc0: 0xc0b6ce8  jal         func_2DB3A0
label_50fdc4:
    if (ctx->pc == 0x50FDC4u) {
        ctx->pc = 0x50FDC4u;
            // 0x50fdc4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50FDC8u;
        goto label_50fdc8;
    }
    ctx->pc = 0x50FDC0u;
    SET_GPR_U32(ctx, 31, 0x50FDC8u);
    ctx->pc = 0x50FDC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50FDC0u;
            // 0x50fdc4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB3A0u;
    if (runtime->hasFunction(0x2DB3A0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50FDC8u; }
        if (ctx->pc != 0x50FDC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB3A0_0x2db3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50FDC8u; }
        if (ctx->pc != 0x50FDC8u) { return; }
    }
    ctx->pc = 0x50FDC8u;
label_50fdc8:
    // 0x50fdc8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x50fdc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_50fdcc:
    // 0x50fdcc: 0xc04cce8  jal         func_1333A0
label_50fdd0:
    if (ctx->pc == 0x50FDD0u) {
        ctx->pc = 0x50FDD0u;
            // 0x50fdd0: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x50FDD4u;
        goto label_50fdd4;
    }
    ctx->pc = 0x50FDCCu;
    SET_GPR_U32(ctx, 31, 0x50FDD4u);
    ctx->pc = 0x50FDD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50FDCCu;
            // 0x50fdd0: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50FDD4u; }
        if (ctx->pc != 0x50FDD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50FDD4u; }
        if (ctx->pc != 0x50FDD4u) { return; }
    }
    ctx->pc = 0x50FDD4u;
label_50fdd4:
    // 0x50fdd4: 0x8e03013c  lw          $v1, 0x13C($s0)
    ctx->pc = 0x50fdd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 316)));
label_50fdd8:
    // 0x50fdd8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x50fdd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_50fddc:
    // 0x50fddc: 0x50620063  beql        $v1, $v0, . + 4 + (0x63 << 2)
label_50fde0:
    if (ctx->pc == 0x50FDE0u) {
        ctx->pc = 0x50FDE0u;
            // 0x50fde0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50FDE4u;
        goto label_50fde4;
    }
    ctx->pc = 0x50FDDCu;
    {
        const bool branch_taken_0x50fddc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x50fddc) {
            ctx->pc = 0x50FDE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x50FDDCu;
            // 0x50fde0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x50FF6Cu;
            goto label_50ff6c;
        }
    }
    ctx->pc = 0x50FDE4u;
label_50fde4:
    // 0x50fde4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_50fde8:
    if (ctx->pc == 0x50FDE8u) {
        ctx->pc = 0x50FDECu;
        goto label_50fdec;
    }
    ctx->pc = 0x50FDE4u;
    {
        const bool branch_taken_0x50fde4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x50fde4) {
            ctx->pc = 0x50FDF4u;
            goto label_50fdf4;
        }
    }
    ctx->pc = 0x50FDECu;
label_50fdec:
    // 0x50fdec: 0x100000cb  b           . + 4 + (0xCB << 2)
label_50fdf0:
    if (ctx->pc == 0x50FDF0u) {
        ctx->pc = 0x50FDF0u;
            // 0x50fdf0: 0xc60c0020  lwc1        $f12, 0x20($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x50FDF4u;
        goto label_50fdf4;
    }
    ctx->pc = 0x50FDECu;
    {
        const bool branch_taken_0x50fdec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x50FDF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50FDECu;
            // 0x50fdf0: 0xc60c0020  lwc1        $f12, 0x20($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x50fdec) {
            ctx->pc = 0x51011Cu;
            goto label_51011c;
        }
    }
    ctx->pc = 0x50FDF4u;
label_50fdf4:
    // 0x50fdf4: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x50fdf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_50fdf8:
    // 0x50fdf8: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x50fdf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
label_50fdfc:
    // 0x50fdfc: 0xc455b720  lwc1        $f21, -0x48E0($v0)
    ctx->pc = 0x50fdfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_50fe00:
    // 0x50fe00: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x50fe00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_50fe04:
    // 0x50fe04: 0xc6000118  lwc1        $f0, 0x118($s0)
    ctx->pc = 0x50fe04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_50fe08:
    // 0x50fe08: 0xc474b71c  lwc1        $f20, -0x48E4($v1)
    ctx->pc = 0x50fe08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294948636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_50fe0c:
    // 0x50fe0c: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x50fe0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_50fe10:
    // 0x50fe10: 0xc6010114  lwc1        $f1, 0x114($s0)
    ctx->pc = 0x50fe10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_50fe14:
    // 0x50fe14: 0xc442b718  lwc1        $f2, -0x48E8($v0)
    ctx->pc = 0x50fe14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_50fe18:
    // 0x50fe18: 0xc6030110  lwc1        $f3, 0x110($s0)
    ctx->pc = 0x50fe18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_50fe1c:
    // 0x50fe1c: 0x4601a340  add.s       $f13, $f20, $f1
    ctx->pc = 0x50fe1cu;
    ctx->f[13] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
label_50fe20:
    // 0x50fe20: 0x46031300  add.s       $f12, $f2, $f3
    ctx->pc = 0x50fe20u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_50fe24:
    // 0x50fe24: 0xc04cbd8  jal         func_132F60
label_50fe28:
    if (ctx->pc == 0x50FE28u) {
        ctx->pc = 0x50FE28u;
            // 0x50fe28: 0x4600ab80  add.s       $f14, $f21, $f0 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
        ctx->pc = 0x50FE2Cu;
        goto label_50fe2c;
    }
    ctx->pc = 0x50FE24u;
    SET_GPR_U32(ctx, 31, 0x50FE2Cu);
    ctx->pc = 0x50FE28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50FE24u;
            // 0x50fe28: 0x4600ab80  add.s       $f14, $f21, $f0 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50FE2Cu; }
        if (ctx->pc != 0x50FE2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50FE2Cu; }
        if (ctx->pc != 0x50FE2Cu) { return; }
    }
    ctx->pc = 0x50FE2Cu;
label_50fe2c:
    // 0x50fe2c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x50fe2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_50fe30:
    // 0x50fe30: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x50fe30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_50fe34:
    // 0x50fe34: 0xc04cca0  jal         func_133280
label_50fe38:
    if (ctx->pc == 0x50FE38u) {
        ctx->pc = 0x50FE38u;
            // 0x50fe38: 0x27a600f0  addiu       $a2, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x50FE3Cu;
        goto label_50fe3c;
    }
    ctx->pc = 0x50FE34u;
    SET_GPR_U32(ctx, 31, 0x50FE3Cu);
    ctx->pc = 0x50FE38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50FE34u;
            // 0x50fe38: 0x27a600f0  addiu       $a2, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50FE3Cu; }
        if (ctx->pc != 0x50FE3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50FE3Cu; }
        if (ctx->pc != 0x50FE3Cu) { return; }
    }
    ctx->pc = 0x50FE3Cu;
label_50fe3c:
    // 0x50fe3c: 0xc077264  jal         func_1DC990
label_50fe40:
    if (ctx->pc == 0x50FE40u) {
        ctx->pc = 0x50FE40u;
            // 0x50fe40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50FE44u;
        goto label_50fe44;
    }
    ctx->pc = 0x50FE3Cu;
    SET_GPR_U32(ctx, 31, 0x50FE44u);
    ctx->pc = 0x50FE40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50FE3Cu;
            // 0x50fe40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC990u;
    if (runtime->hasFunction(0x1DC990u)) {
        auto targetFn = runtime->lookupFunction(0x1DC990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50FE44u; }
        if (ctx->pc != 0x50FE44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC990_0x1dc990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50FE44u; }
        if (ctx->pc != 0x50FE44u) { return; }
    }
    ctx->pc = 0x50FE44u;
label_50fe44:
    // 0x50fe44: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x50fe44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_50fe48:
    // 0x50fe48: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x50fe48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_50fe4c:
    // 0x50fe4c: 0xc04cbe0  jal         func_132F80
label_50fe50:
    if (ctx->pc == 0x50FE50u) {
        ctx->pc = 0x50FE50u;
            // 0x50fe50: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50FE54u;
        goto label_50fe54;
    }
    ctx->pc = 0x50FE4Cu;
    SET_GPR_U32(ctx, 31, 0x50FE54u);
    ctx->pc = 0x50FE50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50FE4Cu;
            // 0x50fe50: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F80u;
    if (runtime->hasFunction(0x132F80u)) {
        auto targetFn = runtime->lookupFunction(0x132F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50FE54u; }
        if (ctx->pc != 0x50FE54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F80_0x132f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50FE54u; }
        if (ctx->pc != 0x50FE54u) { return; }
    }
    ctx->pc = 0x50FE54u;
label_50fe54:
    // 0x50fe54: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x50fe54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
label_50fe58:
    // 0x50fe58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x50fe58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_50fe5c:
    // 0x50fe5c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x50fe5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_50fe60:
    // 0x50fe60: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x50fe60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_50fe64:
    // 0x50fe64: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x50fe64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_50fe68:
    // 0x50fe68: 0xc144120  jal         func_510480
label_50fe6c:
    if (ctx->pc == 0x50FE6Cu) {
        ctx->pc = 0x50FE6Cu;
            // 0x50fe6c: 0x27a60190  addiu       $a2, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->pc = 0x50FE70u;
        goto label_50fe70;
    }
    ctx->pc = 0x50FE68u;
    SET_GPR_U32(ctx, 31, 0x50FE70u);
    ctx->pc = 0x50FE6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50FE68u;
            // 0x50fe6c: 0x27a60190  addiu       $a2, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x510480u;
    if (runtime->hasFunction(0x510480u)) {
        auto targetFn = runtime->lookupFunction(0x510480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50FE70u; }
        if (ctx->pc != 0x50FE70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00510480_0x510480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50FE70u; }
        if (ctx->pc != 0x50FE70u) { return; }
    }
    ctx->pc = 0x50FE70u;
label_50fe70:
    // 0x50fe70: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x50fe70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_50fe74:
    // 0x50fe74: 0xc04cce8  jal         func_1333A0
label_50fe78:
    if (ctx->pc == 0x50FE78u) {
        ctx->pc = 0x50FE78u;
            // 0x50fe78: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x50FE7Cu;
        goto label_50fe7c;
    }
    ctx->pc = 0x50FE74u;
    SET_GPR_U32(ctx, 31, 0x50FE7Cu);
    ctx->pc = 0x50FE78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50FE74u;
            // 0x50fe78: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50FE7Cu; }
        if (ctx->pc != 0x50FE7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50FE7Cu; }
        if (ctx->pc != 0x50FE7Cu) { return; }
    }
    ctx->pc = 0x50FE7Cu;
label_50fe7c:
    // 0x50fe7c: 0xc077264  jal         func_1DC990
label_50fe80:
    if (ctx->pc == 0x50FE80u) {
        ctx->pc = 0x50FE80u;
            // 0x50fe80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50FE84u;
        goto label_50fe84;
    }
    ctx->pc = 0x50FE7Cu;
    SET_GPR_U32(ctx, 31, 0x50FE84u);
    ctx->pc = 0x50FE80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50FE7Cu;
            // 0x50fe80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC990u;
    if (runtime->hasFunction(0x1DC990u)) {
        auto targetFn = runtime->lookupFunction(0x1DC990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50FE84u; }
        if (ctx->pc != 0x50FE84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC990_0x1dc990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50FE84u; }
        if (ctx->pc != 0x50FE84u) { return; }
    }
    ctx->pc = 0x50FE84u;
label_50fe84:
    // 0x50fe84: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x50fe84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_50fe88:
    // 0x50fe88: 0xc04ce80  jal         func_133A00
label_50fe8c:
    if (ctx->pc == 0x50FE8Cu) {
        ctx->pc = 0x50FE8Cu;
            // 0x50fe8c: 0x27a40150  addiu       $a0, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->pc = 0x50FE90u;
        goto label_50fe90;
    }
    ctx->pc = 0x50FE88u;
    SET_GPR_U32(ctx, 31, 0x50FE90u);
    ctx->pc = 0x50FE8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50FE88u;
            // 0x50fe8c: 0x27a40150  addiu       $a0, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50FE90u; }
        if (ctx->pc != 0x50FE90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50FE90u; }
        if (ctx->pc != 0x50FE90u) { return; }
    }
    ctx->pc = 0x50FE90u;
label_50fe90:
    // 0x50fe90: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x50fe90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_50fe94:
    // 0x50fe94: 0xc04ccf4  jal         func_1333D0
label_50fe98:
    if (ctx->pc == 0x50FE98u) {
        ctx->pc = 0x50FE98u;
            // 0x50fe98: 0x27a50150  addiu       $a1, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->pc = 0x50FE9Cu;
        goto label_50fe9c;
    }
    ctx->pc = 0x50FE94u;
    SET_GPR_U32(ctx, 31, 0x50FE9Cu);
    ctx->pc = 0x50FE98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50FE94u;
            // 0x50fe98: 0x27a50150  addiu       $a1, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333D0u;
    if (runtime->hasFunction(0x1333D0u)) {
        auto targetFn = runtime->lookupFunction(0x1333D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50FE9Cu; }
        if (ctx->pc != 0x50FE9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333D0_0x1333d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50FE9Cu; }
        if (ctx->pc != 0x50FE9Cu) { return; }
    }
    ctx->pc = 0x50FE9Cu;
label_50fe9c:
    // 0x50fe9c: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x50fe9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_50fea0:
    // 0x50fea0: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x50fea0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_50fea4:
    // 0x50fea4: 0xc04cca0  jal         func_133280
label_50fea8:
    if (ctx->pc == 0x50FEA8u) {
        ctx->pc = 0x50FEA8u;
            // 0x50fea8: 0x26060010  addiu       $a2, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x50FEACu;
        goto label_50feac;
    }
    ctx->pc = 0x50FEA4u;
    SET_GPR_U32(ctx, 31, 0x50FEACu);
    ctx->pc = 0x50FEA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50FEA4u;
            // 0x50fea8: 0x26060010  addiu       $a2, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50FEACu; }
        if (ctx->pc != 0x50FEACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50FEACu; }
        if (ctx->pc != 0x50FEACu) { return; }
    }
    ctx->pc = 0x50FEACu;
label_50feac:
    // 0x50feac: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x50feacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_50feb0:
    // 0x50feb0: 0xc04cc44  jal         func_133110
label_50feb4:
    if (ctx->pc == 0x50FEB4u) {
        ctx->pc = 0x50FEB4u;
            // 0x50feb4: 0x27a500f0  addiu       $a1, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x50FEB8u;
        goto label_50feb8;
    }
    ctx->pc = 0x50FEB0u;
    SET_GPR_U32(ctx, 31, 0x50FEB8u);
    ctx->pc = 0x50FEB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50FEB0u;
            // 0x50feb4: 0x27a500f0  addiu       $a1, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50FEB8u; }
        if (ctx->pc != 0x50FEB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50FEB8u; }
        if (ctx->pc != 0x50FEB8u) { return; }
    }
    ctx->pc = 0x50FEB8u;
label_50feb8:
    // 0x50feb8: 0xc04cc14  jal         func_133050
label_50febc:
    if (ctx->pc == 0x50FEBCu) {
        ctx->pc = 0x50FEBCu;
            // 0x50febc: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x50FEC0u;
        goto label_50fec0;
    }
    ctx->pc = 0x50FEB8u;
    SET_GPR_U32(ctx, 31, 0x50FEC0u);
    ctx->pc = 0x50FEBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50FEB8u;
            // 0x50febc: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133050u;
    if (runtime->hasFunction(0x133050u)) {
        auto targetFn = runtime->lookupFunction(0x133050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50FEC0u; }
        if (ctx->pc != 0x50FEC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133050_0x133050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50FEC0u; }
        if (ctx->pc != 0x50FEC0u) { return; }
    }
    ctx->pc = 0x50FEC0u;
label_50fec0:
    // 0x50fec0: 0xc6010118  lwc1        $f1, 0x118($s0)
    ctx->pc = 0x50fec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_50fec4:
    // 0x50fec4: 0x4601a840  add.s       $f1, $f21, $f1
    ctx->pc = 0x50fec4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[21], ctx->f[1]);
label_50fec8:
    // 0x50fec8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x50fec8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_50fecc:
    // 0x50fecc: 0x45010092  bc1t        . + 4 + (0x92 << 2)
label_50fed0:
    if (ctx->pc == 0x50FED0u) {
        ctx->pc = 0x50FED4u;
        goto label_50fed4;
    }
    ctx->pc = 0x50FECCu;
    {
        const bool branch_taken_0x50fecc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x50fecc) {
            ctx->pc = 0x510118u;
            goto label_510118;
        }
    }
    ctx->pc = 0x50FED4u;
label_50fed4:
    // 0x50fed4: 0xc6010114  lwc1        $f1, 0x114($s0)
    ctx->pc = 0x50fed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_50fed8:
    // 0x50fed8: 0xc7a000f4  lwc1        $f0, 0xF4($sp)
    ctx->pc = 0x50fed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_50fedc:
    // 0x50fedc: 0x4601a040  add.s       $f1, $f20, $f1
    ctx->pc = 0x50fedcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
label_50fee0:
    // 0x50fee0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x50fee0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_50fee4:
    // 0x50fee4: 0x4501008c  bc1t        . + 4 + (0x8C << 2)
label_50fee8:
    if (ctx->pc == 0x50FEE8u) {
        ctx->pc = 0x50FEECu;
        goto label_50feec;
    }
    ctx->pc = 0x50FEE4u;
    {
        const bool branch_taken_0x50fee4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x50fee4) {
            ctx->pc = 0x510118u;
            goto label_510118;
        }
    }
    ctx->pc = 0x50FEECu;
label_50feec:
    // 0x50feec: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x50feecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_50fef0:
    // 0x50fef0: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x50fef0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_50fef4:
    // 0x50fef4: 0xc04cc08  jal         func_133020
label_50fef8:
    if (ctx->pc == 0x50FEF8u) {
        ctx->pc = 0x50FEF8u;
            // 0x50fef8: 0x24a5bcc0  addiu       $a1, $a1, -0x4340 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950080));
        ctx->pc = 0x50FEFCu;
        goto label_50fefc;
    }
    ctx->pc = 0x50FEF4u;
    SET_GPR_U32(ctx, 31, 0x50FEFCu);
    ctx->pc = 0x50FEF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50FEF4u;
            // 0x50fef8: 0x24a5bcc0  addiu       $a1, $a1, -0x4340 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950080));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133020u;
    if (runtime->hasFunction(0x133020u)) {
        auto targetFn = runtime->lookupFunction(0x133020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50FEFCu; }
        if (ctx->pc != 0x50FEFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133020_0x133020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50FEFCu; }
        if (ctx->pc != 0x50FEFCu) { return; }
    }
    ctx->pc = 0x50FEFCu;
label_50fefc:
    // 0x50fefc: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x50fefcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_50ff00:
    // 0x50ff00: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x50ff00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_50ff04:
    // 0x50ff04: 0x0  nop
    ctx->pc = 0x50ff04u;
    // NOP
label_50ff08:
    // 0x50ff08: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x50ff08u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_50ff0c:
    // 0x50ff0c: 0x45010082  bc1t        . + 4 + (0x82 << 2)
label_50ff10:
    if (ctx->pc == 0x50FF10u) {
        ctx->pc = 0x50FF14u;
        goto label_50ff14;
    }
    ctx->pc = 0x50FF0Cu;
    {
        const bool branch_taken_0x50ff0c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x50ff0c) {
            ctx->pc = 0x510118u;
            goto label_510118;
        }
    }
    ctx->pc = 0x50FF14u;
label_50ff14:
    // 0x50ff14: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x50ff14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_50ff18:
    // 0x50ff18: 0xc0b9ffc  jal         func_2E7FF0
label_50ff1c:
    if (ctx->pc == 0x50FF1Cu) {
        ctx->pc = 0x50FF1Cu;
            // 0x50ff1c: 0xae02013c  sw          $v0, 0x13C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 316), GPR_U32(ctx, 2));
        ctx->pc = 0x50FF20u;
        goto label_50ff20;
    }
    ctx->pc = 0x50FF18u;
    SET_GPR_U32(ctx, 31, 0x50FF20u);
    ctx->pc = 0x50FF1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50FF18u;
            // 0x50ff1c: 0xae02013c  sw          $v0, 0x13C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 316), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E7FF0u;
    if (runtime->hasFunction(0x2E7FF0u)) {
        auto targetFn = runtime->lookupFunction(0x2E7FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50FF20u; }
        if (ctx->pc != 0x50FF20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E7FF0_0x2e7ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50FF20u; }
        if (ctx->pc != 0x50FF20u) { return; }
    }
    ctx->pc = 0x50FF20u;
label_50ff20:
    // 0x50ff20: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x50ff20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_50ff24:
    // 0x50ff24: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x50ff24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_50ff28:
    // 0x50ff28: 0xc13d584  jal         func_4F5610
label_50ff2c:
    if (ctx->pc == 0x50FF2Cu) {
        ctx->pc = 0x50FF2Cu;
            // 0x50ff2c: 0xc44cb748  lwc1        $f12, -0x48B8($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948680)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x50FF30u;
        goto label_50ff30;
    }
    ctx->pc = 0x50FF28u;
    SET_GPR_U32(ctx, 31, 0x50FF30u);
    ctx->pc = 0x50FF2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50FF28u;
            // 0x50ff2c: 0xc44cb748  lwc1        $f12, -0x48B8($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948680)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x4F5610u;
    if (runtime->hasFunction(0x4F5610u)) {
        auto targetFn = runtime->lookupFunction(0x4F5610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50FF30u; }
        if (ctx->pc != 0x50FF30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004F5610_0x4f5610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50FF30u; }
        if (ctx->pc != 0x50FF30u) { return; }
    }
    ctx->pc = 0x50FF30u;
label_50ff30:
    // 0x50ff30: 0xc0b9ffc  jal         func_2E7FF0
label_50ff34:
    if (ctx->pc == 0x50FF34u) {
        ctx->pc = 0x50FF34u;
            // 0x50ff34: 0xe6000110  swc1        $f0, 0x110($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 272), bits); }
        ctx->pc = 0x50FF38u;
        goto label_50ff38;
    }
    ctx->pc = 0x50FF30u;
    SET_GPR_U32(ctx, 31, 0x50FF38u);
    ctx->pc = 0x50FF34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50FF30u;
            // 0x50ff34: 0xe6000110  swc1        $f0, 0x110($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 272), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E7FF0u;
    if (runtime->hasFunction(0x2E7FF0u)) {
        auto targetFn = runtime->lookupFunction(0x2E7FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50FF38u; }
        if (ctx->pc != 0x50FF38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E7FF0_0x2e7ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50FF38u; }
        if (ctx->pc != 0x50FF38u) { return; }
    }
    ctx->pc = 0x50FF38u;
label_50ff38:
    // 0x50ff38: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x50ff38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_50ff3c:
    // 0x50ff3c: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x50ff3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_50ff40:
    // 0x50ff40: 0xc13d584  jal         func_4F5610
label_50ff44:
    if (ctx->pc == 0x50FF44u) {
        ctx->pc = 0x50FF44u;
            // 0x50ff44: 0xc44cb74c  lwc1        $f12, -0x48B4($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x50FF48u;
        goto label_50ff48;
    }
    ctx->pc = 0x50FF40u;
    SET_GPR_U32(ctx, 31, 0x50FF48u);
    ctx->pc = 0x50FF44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50FF40u;
            // 0x50ff44: 0xc44cb74c  lwc1        $f12, -0x48B4($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x4F5610u;
    if (runtime->hasFunction(0x4F5610u)) {
        auto targetFn = runtime->lookupFunction(0x4F5610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50FF48u; }
        if (ctx->pc != 0x50FF48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004F5610_0x4f5610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50FF48u; }
        if (ctx->pc != 0x50FF48u) { return; }
    }
    ctx->pc = 0x50FF48u;
label_50ff48:
    // 0x50ff48: 0xc0b9ffc  jal         func_2E7FF0
label_50ff4c:
    if (ctx->pc == 0x50FF4Cu) {
        ctx->pc = 0x50FF4Cu;
            // 0x50ff4c: 0xe6000114  swc1        $f0, 0x114($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 276), bits); }
        ctx->pc = 0x50FF50u;
        goto label_50ff50;
    }
    ctx->pc = 0x50FF48u;
    SET_GPR_U32(ctx, 31, 0x50FF50u);
    ctx->pc = 0x50FF4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50FF48u;
            // 0x50ff4c: 0xe6000114  swc1        $f0, 0x114($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 276), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E7FF0u;
    if (runtime->hasFunction(0x2E7FF0u)) {
        auto targetFn = runtime->lookupFunction(0x2E7FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50FF50u; }
        if (ctx->pc != 0x50FF50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E7FF0_0x2e7ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50FF50u; }
        if (ctx->pc != 0x50FF50u) { return; }
    }
    ctx->pc = 0x50FF50u;
label_50ff50:
    // 0x50ff50: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x50ff50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_50ff54:
    // 0x50ff54: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x50ff54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_50ff58:
    // 0x50ff58: 0xc13d584  jal         func_4F5610
label_50ff5c:
    if (ctx->pc == 0x50FF5Cu) {
        ctx->pc = 0x50FF5Cu;
            // 0x50ff5c: 0xc44cb750  lwc1        $f12, -0x48B0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x50FF60u;
        goto label_50ff60;
    }
    ctx->pc = 0x50FF58u;
    SET_GPR_U32(ctx, 31, 0x50FF60u);
    ctx->pc = 0x50FF5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50FF58u;
            // 0x50ff5c: 0xc44cb750  lwc1        $f12, -0x48B0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x4F5610u;
    if (runtime->hasFunction(0x4F5610u)) {
        auto targetFn = runtime->lookupFunction(0x4F5610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50FF60u; }
        if (ctx->pc != 0x50FF60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004F5610_0x4f5610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50FF60u; }
        if (ctx->pc != 0x50FF60u) { return; }
    }
    ctx->pc = 0x50FF60u;
label_50ff60:
    // 0x50ff60: 0xe6000118  swc1        $f0, 0x118($s0)
    ctx->pc = 0x50ff60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 280), bits); }
label_50ff64:
    // 0x50ff64: 0x1000006c  b           . + 4 + (0x6C << 2)
label_50ff68:
    if (ctx->pc == 0x50FF68u) {
        ctx->pc = 0x50FF68u;
            // 0x50ff68: 0xae000140  sw          $zero, 0x140($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 320), GPR_U32(ctx, 0));
        ctx->pc = 0x50FF6Cu;
        goto label_50ff6c;
    }
    ctx->pc = 0x50FF64u;
    {
        const bool branch_taken_0x50ff64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x50FF68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50FF64u;
            // 0x50ff68: 0xae000140  sw          $zero, 0x140($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 320), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50ff64) {
            ctx->pc = 0x510118u;
            goto label_510118;
        }
    }
    ctx->pc = 0x50FF6Cu;
label_50ff6c:
    // 0x50ff6c: 0xc14411c  jal         func_510470
label_50ff70:
    if (ctx->pc == 0x50FF70u) {
        ctx->pc = 0x50FF74u;
        goto label_50ff74;
    }
    ctx->pc = 0x50FF6Cu;
    SET_GPR_U32(ctx, 31, 0x50FF74u);
    ctx->pc = 0x510470u;
    if (runtime->hasFunction(0x510470u)) {
        auto targetFn = runtime->lookupFunction(0x510470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50FF74u; }
        if (ctx->pc != 0x50FF74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00510470_0x510470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50FF74u; }
        if (ctx->pc != 0x50FF74u) { return; }
    }
    ctx->pc = 0x50FF74u;
label_50ff74:
    // 0x50ff74: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x50ff74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_50ff78:
    // 0x50ff78: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x50ff78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_50ff7c:
    // 0x50ff7c: 0xc443b740  lwc1        $f3, -0x48C0($v0)
    ctx->pc = 0x50ff7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_50ff80:
    // 0x50ff80: 0xc6040118  lwc1        $f4, 0x118($s0)
    ctx->pc = 0x50ff80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_50ff84:
    // 0x50ff84: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x50ff84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_50ff88:
    // 0x50ff88: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x50ff88u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
label_50ff8c:
    // 0x50ff8c: 0x46001b82  mul.s       $f14, $f3, $f0
    ctx->pc = 0x50ff8cu;
    ctx->f[14] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_50ff90:
    // 0x50ff90: 0xc442b738  lwc1        $f2, -0x48C8($v0)
    ctx->pc = 0x50ff90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948664)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_50ff94:
    // 0x50ff94: 0xc6030110  lwc1        $f3, 0x110($s0)
    ctx->pc = 0x50ff94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_50ff98:
    // 0x50ff98: 0xc6000114  lwc1        $f0, 0x114($s0)
    ctx->pc = 0x50ff98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_50ff9c:
    // 0x50ff9c: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x50ff9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_50ffa0:
    // 0x50ffa0: 0xc441b73c  lwc1        $f1, -0x48C4($v0)
    ctx->pc = 0x50ffa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948668)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_50ffa4:
    // 0x50ffa4: 0x46031300  add.s       $f12, $f2, $f3
    ctx->pc = 0x50ffa4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_50ffa8:
    // 0x50ffa8: 0xc04cbd8  jal         func_132F60
label_50ffac:
    if (ctx->pc == 0x50FFACu) {
        ctx->pc = 0x50FFACu;
            // 0x50ffac: 0x46000b40  add.s       $f13, $f1, $f0 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x50FFB0u;
        goto label_50ffb0;
    }
    ctx->pc = 0x50FFA8u;
    SET_GPR_U32(ctx, 31, 0x50FFB0u);
    ctx->pc = 0x50FFACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50FFA8u;
            // 0x50ffac: 0x46000b40  add.s       $f13, $f1, $f0 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50FFB0u; }
        if (ctx->pc != 0x50FFB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50FFB0u; }
        if (ctx->pc != 0x50FFB0u) { return; }
    }
    ctx->pc = 0x50FFB0u;
label_50ffb0:
    // 0x50ffb0: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x50ffb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_50ffb4:
    // 0x50ffb4: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x50ffb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_50ffb8:
    // 0x50ffb8: 0xc04cca0  jal         func_133280
label_50ffbc:
    if (ctx->pc == 0x50FFBCu) {
        ctx->pc = 0x50FFBCu;
            // 0x50ffbc: 0x27a600f0  addiu       $a2, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x50FFC0u;
        goto label_50ffc0;
    }
    ctx->pc = 0x50FFB8u;
    SET_GPR_U32(ctx, 31, 0x50FFC0u);
    ctx->pc = 0x50FFBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50FFB8u;
            // 0x50ffbc: 0x27a600f0  addiu       $a2, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50FFC0u; }
        if (ctx->pc != 0x50FFC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50FFC0u; }
        if (ctx->pc != 0x50FFC0u) { return; }
    }
    ctx->pc = 0x50FFC0u;
label_50ffc0:
    // 0x50ffc0: 0xc077264  jal         func_1DC990
label_50ffc4:
    if (ctx->pc == 0x50FFC4u) {
        ctx->pc = 0x50FFC4u;
            // 0x50ffc4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50FFC8u;
        goto label_50ffc8;
    }
    ctx->pc = 0x50FFC0u;
    SET_GPR_U32(ctx, 31, 0x50FFC8u);
    ctx->pc = 0x50FFC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50FFC0u;
            // 0x50ffc4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC990u;
    if (runtime->hasFunction(0x1DC990u)) {
        auto targetFn = runtime->lookupFunction(0x1DC990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50FFC8u; }
        if (ctx->pc != 0x50FFC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC990_0x1dc990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50FFC8u; }
        if (ctx->pc != 0x50FFC8u) { return; }
    }
    ctx->pc = 0x50FFC8u;
label_50ffc8:
    // 0x50ffc8: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x50ffc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_50ffcc:
    // 0x50ffcc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x50ffccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_50ffd0:
    // 0x50ffd0: 0xc04cbe0  jal         func_132F80
label_50ffd4:
    if (ctx->pc == 0x50FFD4u) {
        ctx->pc = 0x50FFD4u;
            // 0x50ffd4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50FFD8u;
        goto label_50ffd8;
    }
    ctx->pc = 0x50FFD0u;
    SET_GPR_U32(ctx, 31, 0x50FFD8u);
    ctx->pc = 0x50FFD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50FFD0u;
            // 0x50ffd4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F80u;
    if (runtime->hasFunction(0x132F80u)) {
        auto targetFn = runtime->lookupFunction(0x132F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50FFD8u; }
        if (ctx->pc != 0x50FFD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F80_0x132f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50FFD8u; }
        if (ctx->pc != 0x50FFD8u) { return; }
    }
    ctx->pc = 0x50FFD8u;
label_50ffd8:
    // 0x50ffd8: 0xc6010140  lwc1        $f1, 0x140($s0)
    ctx->pc = 0x50ffd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_50ffdc:
    // 0x50ffdc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x50ffdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_50ffe0:
    // 0x50ffe0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x50ffe0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_50ffe4:
    // 0x50ffe4: 0x0  nop
    ctx->pc = 0x50ffe4u;
    // NOP
label_50ffe8:
    // 0x50ffe8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x50ffe8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_50ffec:
    // 0x50ffec: 0x45020014  bc1fl       . + 4 + (0x14 << 2)
label_50fff0:
    if (ctx->pc == 0x50FFF0u) {
        ctx->pc = 0x50FFF0u;
            // 0x50fff0: 0x3c023f19  lui         $v0, 0x3F19 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
        ctx->pc = 0x50FFF4u;
        goto label_50fff4;
    }
    ctx->pc = 0x50FFECu;
    {
        const bool branch_taken_0x50ffec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x50ffec) {
            ctx->pc = 0x50FFF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x50FFECu;
            // 0x50fff0: 0x3c023f19  lui         $v0, 0x3F19 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x510040u;
            goto label_510040;
        }
    }
    ctx->pc = 0x50FFF4u;
label_50fff4:
    // 0x50fff4: 0xc0775b8  jal         func_1DD6E0
label_50fff8:
    if (ctx->pc == 0x50FFF8u) {
        ctx->pc = 0x50FFFCu;
        goto label_50fffc;
    }
    ctx->pc = 0x50FFF4u;
    SET_GPR_U32(ctx, 31, 0x50FFFCu);
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50FFFCu; }
        if (ctx->pc != 0x50FFFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50FFFCu; }
        if (ctx->pc != 0x50FFFCu) { return; }
    }
    ctx->pc = 0x50FFFCu;
label_50fffc:
    // 0x50fffc: 0xc0775b4  jal         func_1DD6D0
label_510000:
    if (ctx->pc == 0x510000u) {
        ctx->pc = 0x510000u;
            // 0x510000: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x510004u;
        goto label_510004;
    }
    ctx->pc = 0x50FFFCu;
    SET_GPR_U32(ctx, 31, 0x510004u);
    ctx->pc = 0x510000u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50FFFCu;
            // 0x510000: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6D0u;
    if (runtime->hasFunction(0x1DD6D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x510004u; }
        if (ctx->pc != 0x510004u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6D0_0x1dd6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x510004u; }
        if (ctx->pc != 0x510004u) { return; }
    }
    ctx->pc = 0x510004u;
label_510004:
    // 0x510004: 0xc6030140  lwc1        $f3, 0x140($s0)
    ctx->pc = 0x510004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_510008:
    // 0x510008: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x510008u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
label_51000c:
    // 0x51000c: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x51000cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_510010:
    // 0x510010: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x510010u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_510014:
    // 0x510014: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x510014u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_510018:
    // 0x510018: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x510018u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_51001c:
    // 0x51001c: 0x46031018  adda.s      $f2, $f3
    ctx->pc = 0x51001cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_510020:
    // 0x510020: 0x4600201c  madd.s      $f0, $f4, $f0
    ctx->pc = 0x510020u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[0]));
label_510024:
    // 0x510024: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x510024u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_510028:
    // 0x510028: 0x0  nop
    ctx->pc = 0x510028u;
    // NOP
label_51002c:
    // 0x51002c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x51002cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_510030:
    // 0x510030: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_510034:
    if (ctx->pc == 0x510034u) {
        ctx->pc = 0x510034u;
            // 0x510034: 0xe6000140  swc1        $f0, 0x140($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 320), bits); }
        ctx->pc = 0x510038u;
        goto label_510038;
    }
    ctx->pc = 0x510030u;
    {
        const bool branch_taken_0x510030 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x510034u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x510030u;
            // 0x510034: 0xe6000140  swc1        $f0, 0x140($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 320), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x510030) {
            ctx->pc = 0x51003Cu;
            goto label_51003c;
        }
    }
    ctx->pc = 0x510038u;
label_510038:
    // 0x510038: 0xe6010140  swc1        $f1, 0x140($s0)
    ctx->pc = 0x510038u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 320), bits); }
label_51003c:
    // 0x51003c: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x51003cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
label_510040:
    // 0x510040: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x510040u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_510044:
    // 0x510044: 0x3443999a  ori         $v1, $v0, 0x999A
    ctx->pc = 0x510044u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_510048:
    // 0x510048: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x510048u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_51004c:
    // 0x51004c: 0x3c023ecc  lui         $v0, 0x3ECC
    ctx->pc = 0x51004cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
label_510050:
    // 0x510050: 0x27a60190  addiu       $a2, $sp, 0x190
    ctx->pc = 0x510050u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_510054:
    // 0x510054: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x510054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_510058:
    // 0x510058: 0xc6030140  lwc1        $f3, 0x140($s0)
    ctx->pc = 0x510058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_51005c:
    // 0x51005c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x51005cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_510060:
    // 0x510060: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x510060u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_510064:
    // 0x510064: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x510064u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_510068:
    // 0x510068: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x510068u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_51006c:
    // 0x51006c: 0xc144120  jal         func_510480
label_510070:
    if (ctx->pc == 0x510070u) {
        ctx->pc = 0x510070u;
            // 0x510070: 0x4603131c  madd.s      $f12, $f2, $f3 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
        ctx->pc = 0x510074u;
        goto label_510074;
    }
    ctx->pc = 0x51006Cu;
    SET_GPR_U32(ctx, 31, 0x510074u);
    ctx->pc = 0x510070u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51006Cu;
            // 0x510070: 0x4603131c  madd.s      $f12, $f2, $f3 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x510480u;
    if (runtime->hasFunction(0x510480u)) {
        auto targetFn = runtime->lookupFunction(0x510480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x510074u; }
        if (ctx->pc != 0x510074u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00510480_0x510480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x510074u; }
        if (ctx->pc != 0x510074u) { return; }
    }
    ctx->pc = 0x510074u;
label_510074:
    // 0x510074: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x510074u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_510078:
    // 0x510078: 0xc04cce8  jal         func_1333A0
label_51007c:
    if (ctx->pc == 0x51007Cu) {
        ctx->pc = 0x51007Cu;
            // 0x51007c: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x510080u;
        goto label_510080;
    }
    ctx->pc = 0x510078u;
    SET_GPR_U32(ctx, 31, 0x510080u);
    ctx->pc = 0x51007Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x510078u;
            // 0x51007c: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x510080u; }
        if (ctx->pc != 0x510080u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x510080u; }
        if (ctx->pc != 0x510080u) { return; }
    }
    ctx->pc = 0x510080u;
label_510080:
    // 0x510080: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x510080u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_510084:
    // 0x510084: 0xc04ce80  jal         func_133A00
label_510088:
    if (ctx->pc == 0x510088u) {
        ctx->pc = 0x510088u;
            // 0x510088: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x51008Cu;
        goto label_51008c;
    }
    ctx->pc = 0x510084u;
    SET_GPR_U32(ctx, 31, 0x51008Cu);
    ctx->pc = 0x510088u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x510084u;
            // 0x510088: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51008Cu; }
        if (ctx->pc != 0x51008Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51008Cu; }
        if (ctx->pc != 0x51008Cu) { return; }
    }
    ctx->pc = 0x51008Cu;
label_51008c:
    // 0x51008c: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x51008cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_510090:
    // 0x510090: 0xc04ccf4  jal         func_1333D0
label_510094:
    if (ctx->pc == 0x510094u) {
        ctx->pc = 0x510094u;
            // 0x510094: 0x27a50150  addiu       $a1, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->pc = 0x510098u;
        goto label_510098;
    }
    ctx->pc = 0x510090u;
    SET_GPR_U32(ctx, 31, 0x510098u);
    ctx->pc = 0x510094u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x510090u;
            // 0x510094: 0x27a50150  addiu       $a1, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333D0u;
    if (runtime->hasFunction(0x1333D0u)) {
        auto targetFn = runtime->lookupFunction(0x1333D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x510098u; }
        if (ctx->pc != 0x510098u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333D0_0x1333d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x510098u; }
        if (ctx->pc != 0x510098u) { return; }
    }
    ctx->pc = 0x510098u;
label_510098:
    // 0x510098: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x510098u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_51009c:
    // 0x51009c: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x51009cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_5100a0:
    // 0x5100a0: 0xc04cca0  jal         func_133280
label_5100a4:
    if (ctx->pc == 0x5100A4u) {
        ctx->pc = 0x5100A4u;
            // 0x5100a4: 0x26060010  addiu       $a2, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x5100A8u;
        goto label_5100a8;
    }
    ctx->pc = 0x5100A0u;
    SET_GPR_U32(ctx, 31, 0x5100A8u);
    ctx->pc = 0x5100A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5100A0u;
            // 0x5100a4: 0x26060010  addiu       $a2, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5100A8u; }
        if (ctx->pc != 0x5100A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5100A8u; }
        if (ctx->pc != 0x5100A8u) { return; }
    }
    ctx->pc = 0x5100A8u;
label_5100a8:
    // 0x5100a8: 0xc6000138  lwc1        $f0, 0x138($s0)
    ctx->pc = 0x5100a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_5100ac:
    // 0x5100ac: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x5100acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_5100b0:
    // 0x5100b0: 0xc04cc2c  jal         func_1330B0
label_5100b4:
    if (ctx->pc == 0x5100B4u) {
        ctx->pc = 0x5100B4u;
            // 0x5100b4: 0x46000502  mul.s       $f20, $f0, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
        ctx->pc = 0x5100B8u;
        goto label_5100b8;
    }
    ctx->pc = 0x5100B0u;
    SET_GPR_U32(ctx, 31, 0x5100B8u);
    ctx->pc = 0x5100B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5100B0u;
            // 0x5100b4: 0x46000502  mul.s       $f20, $f0, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330B0u;
    if (runtime->hasFunction(0x1330B0u)) {
        auto targetFn = runtime->lookupFunction(0x1330B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5100B8u; }
        if (ctx->pc != 0x5100B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330B0_0x1330b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5100B8u; }
        if (ctx->pc != 0x5100B8u) { return; }
    }
    ctx->pc = 0x5100B8u;
label_5100b8:
    // 0x5100b8: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x5100b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_5100bc:
    // 0x5100bc: 0x45000016  bc1f        . + 4 + (0x16 << 2)
label_5100c0:
    if (ctx->pc == 0x5100C0u) {
        ctx->pc = 0x5100C4u;
        goto label_5100c4;
    }
    ctx->pc = 0x5100BCu;
    {
        const bool branch_taken_0x5100bc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x5100bc) {
            ctx->pc = 0x510118u;
            goto label_510118;
        }
    }
    ctx->pc = 0x5100C4u;
label_5100c4:
    // 0x5100c4: 0xc144118  jal         func_510460
label_5100c8:
    if (ctx->pc == 0x5100C8u) {
        ctx->pc = 0x5100CCu;
        goto label_5100cc;
    }
    ctx->pc = 0x5100C4u;
    SET_GPR_U32(ctx, 31, 0x5100CCu);
    ctx->pc = 0x510460u;
    if (runtime->hasFunction(0x510460u)) {
        auto targetFn = runtime->lookupFunction(0x510460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5100CCu; }
        if (ctx->pc != 0x5100CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00510460_0x510460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5100CCu; }
        if (ctx->pc != 0x5100CCu) { return; }
    }
    ctx->pc = 0x5100CCu;
label_5100cc:
    // 0x5100cc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x5100ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_5100d0:
    // 0x5100d0: 0xc144110  jal         func_510440
label_5100d4:
    if (ctx->pc == 0x5100D4u) {
        ctx->pc = 0x5100D4u;
            // 0x5100d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5100D8u;
        goto label_5100d8;
    }
    ctx->pc = 0x5100D0u;
    SET_GPR_U32(ctx, 31, 0x5100D8u);
    ctx->pc = 0x5100D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5100D0u;
            // 0x5100d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x510440u;
    if (runtime->hasFunction(0x510440u)) {
        auto targetFn = runtime->lookupFunction(0x510440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5100D8u; }
        if (ctx->pc != 0x5100D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00510440_0x510440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5100D8u; }
        if (ctx->pc != 0x5100D8u) { return; }
    }
    ctx->pc = 0x5100D8u;
label_5100d8:
    // 0x5100d8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x5100d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_5100dc:
    // 0x5100dc: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x5100dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
label_5100e0:
    // 0x5100e0: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x5100e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_5100e4:
    // 0x5100e4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x5100e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_5100e8:
    // 0x5100e8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x5100e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_5100ec:
    // 0x5100ec: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x5100ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_5100f0:
    // 0x5100f0: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x5100f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
label_5100f4:
    // 0x5100f4: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x5100f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_5100f8:
    // 0x5100f8: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x5100f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_5100fc:
    // 0x5100fc: 0xc14bb88  jal         func_52EE20
label_510100:
    if (ctx->pc == 0x510100u) {
        ctx->pc = 0x510100u;
            // 0x510100: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x510104u;
        goto label_510104;
    }
    ctx->pc = 0x5100FCu;
    SET_GPR_U32(ctx, 31, 0x510104u);
    ctx->pc = 0x510100u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5100FCu;
            // 0x510100: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x52EE20u;
    if (runtime->hasFunction(0x52EE20u)) {
        auto targetFn = runtime->lookupFunction(0x52EE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x510104u; }
        if (ctx->pc != 0x510104u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0052EE20_0x52ee20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x510104u; }
        if (ctx->pc != 0x510104u) { return; }
    }
    ctx->pc = 0x510104u;
label_510104:
    // 0x510104: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x510104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_510108:
    // 0x510108: 0xc0e38ec  jal         func_38E3B0
label_51010c:
    if (ctx->pc == 0x51010Cu) {
        ctx->pc = 0x51010Cu;
            // 0x51010c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x510110u;
        goto label_510110;
    }
    ctx->pc = 0x510108u;
    SET_GPR_U32(ctx, 31, 0x510110u);
    ctx->pc = 0x51010Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x510108u;
            // 0x51010c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38E3B0u;
    if (runtime->hasFunction(0x38E3B0u)) {
        auto targetFn = runtime->lookupFunction(0x38E3B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x510110u; }
        if (ctx->pc != 0x510110u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038E3B0_0x38e3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x510110u; }
        if (ctx->pc != 0x510110u) { return; }
    }
    ctx->pc = 0x510110u;
label_510110:
    // 0x510110: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x510110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_510114:
    // 0x510114: 0xae020124  sw          $v0, 0x124($s0)
    ctx->pc = 0x510114u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 2));
label_510118:
    // 0x510118: 0xc60c0020  lwc1        $f12, 0x20($s0)
    ctx->pc = 0x510118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_51011c:
    // 0x51011c: 0xc60d0024  lwc1        $f13, 0x24($s0)
    ctx->pc = 0x51011cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_510120:
    // 0x510120: 0xc60e0028  lwc1        $f14, 0x28($s0)
    ctx->pc = 0x510120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_510124:
    // 0x510124: 0xc60f002c  lwc1        $f15, 0x2C($s0)
    ctx->pc = 0x510124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_510128:
    // 0x510128: 0xc12dfc8  jal         func_4B7F20
label_51012c:
    if (ctx->pc == 0x51012Cu) {
        ctx->pc = 0x51012Cu;
            // 0x51012c: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x510130u;
        goto label_510130;
    }
    ctx->pc = 0x510128u;
    SET_GPR_U32(ctx, 31, 0x510130u);
    ctx->pc = 0x51012Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x510128u;
            // 0x51012c: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B7F20u;
    if (runtime->hasFunction(0x4B7F20u)) {
        auto targetFn = runtime->lookupFunction(0x4B7F20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x510130u; }
        if (ctx->pc != 0x510130u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004B7F20_0x4b7f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x510130u; }
        if (ctx->pc != 0x510130u) { return; }
    }
    ctx->pc = 0x510130u;
label_510130:
    // 0x510130: 0xc7ac0190  lwc1        $f12, 0x190($sp)
    ctx->pc = 0x510130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_510134:
    // 0x510134: 0xc7ad0194  lwc1        $f13, 0x194($sp)
    ctx->pc = 0x510134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_510138:
    // 0x510138: 0xc7ae0198  lwc1        $f14, 0x198($sp)
    ctx->pc = 0x510138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_51013c:
    // 0x51013c: 0xc7af019c  lwc1        $f15, 0x19C($sp)
    ctx->pc = 0x51013cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 412)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_510140:
    // 0x510140: 0xc12dfc8  jal         func_4B7F20
label_510144:
    if (ctx->pc == 0x510144u) {
        ctx->pc = 0x510144u;
            // 0x510144: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x510148u;
        goto label_510148;
    }
    ctx->pc = 0x510140u;
    SET_GPR_U32(ctx, 31, 0x510148u);
    ctx->pc = 0x510144u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x510140u;
            // 0x510144: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B7F20u;
    if (runtime->hasFunction(0x4B7F20u)) {
        auto targetFn = runtime->lookupFunction(0x4B7F20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x510148u; }
        if (ctx->pc != 0x510148u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004B7F20_0x4b7f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x510148u; }
        if (ctx->pc != 0x510148u) { return; }
    }
    ctx->pc = 0x510148u;
label_510148:
    // 0x510148: 0xc0b6e68  jal         func_2DB9A0
label_51014c:
    if (ctx->pc == 0x51014Cu) {
        ctx->pc = 0x51014Cu;
            // 0x51014c: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x510150u;
        goto label_510150;
    }
    ctx->pc = 0x510148u;
    SET_GPR_U32(ctx, 31, 0x510150u);
    ctx->pc = 0x51014Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x510148u;
            // 0x51014c: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB9A0u;
    if (runtime->hasFunction(0x2DB9A0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x510150u; }
        if (ctx->pc != 0x510150u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB9A0_0x2db9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x510150u; }
        if (ctx->pc != 0x510150u) { return; }
    }
    ctx->pc = 0x510150u;
label_510150:
    // 0x510150: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x510150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_510154:
    // 0x510154: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x510154u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_510158:
    // 0x510158: 0xc12df58  jal         func_4B7D60
label_51015c:
    if (ctx->pc == 0x51015Cu) {
        ctx->pc = 0x51015Cu;
            // 0x51015c: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x510160u;
        goto label_510160;
    }
    ctx->pc = 0x510158u;
    SET_GPR_U32(ctx, 31, 0x510160u);
    ctx->pc = 0x51015Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x510158u;
            // 0x51015c: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B7D60u;
    if (runtime->hasFunction(0x4B7D60u)) {
        auto targetFn = runtime->lookupFunction(0x4B7D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x510160u; }
        if (ctx->pc != 0x510160u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004B7D60_0x4b7d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x510160u; }
        if (ctx->pc != 0x510160u) { return; }
    }
    ctx->pc = 0x510160u;
label_510160:
    // 0x510160: 0xc0b6e84  jal         func_2DBA10
label_510164:
    if (ctx->pc == 0x510164u) {
        ctx->pc = 0x510168u;
        goto label_510168;
    }
    ctx->pc = 0x510160u;
    SET_GPR_U32(ctx, 31, 0x510168u);
    ctx->pc = 0x2DBA10u;
    if (runtime->hasFunction(0x2DBA10u)) {
        auto targetFn = runtime->lookupFunction(0x2DBA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x510168u; }
        if (ctx->pc != 0x510168u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DBA10_0x2dba10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x510168u; }
        if (ctx->pc != 0x510168u) { return; }
    }
    ctx->pc = 0x510168u;
label_510168:
    // 0x510168: 0xc0b6e60  jal         func_2DB980
label_51016c:
    if (ctx->pc == 0x51016Cu) {
        ctx->pc = 0x51016Cu;
            // 0x51016c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x510170u;
        goto label_510170;
    }
    ctx->pc = 0x510168u;
    SET_GPR_U32(ctx, 31, 0x510170u);
    ctx->pc = 0x51016Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x510168u;
            // 0x51016c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB980u;
    if (runtime->hasFunction(0x2DB980u)) {
        auto targetFn = runtime->lookupFunction(0x2DB980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x510170u; }
        if (ctx->pc != 0x510170u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB980_0x2db980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x510170u; }
        if (ctx->pc != 0x510170u) { return; }
    }
    ctx->pc = 0x510170u;
label_510170:
    // 0x510170: 0xc0b6e38  jal         func_2DB8E0
label_510174:
    if (ctx->pc == 0x510174u) {
        ctx->pc = 0x510174u;
            // 0x510174: 0x2444000c  addiu       $a0, $v0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
        ctx->pc = 0x510178u;
        goto label_510178;
    }
    ctx->pc = 0x510170u;
    SET_GPR_U32(ctx, 31, 0x510178u);
    ctx->pc = 0x510174u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x510170u;
            // 0x510174: 0x2444000c  addiu       $a0, $v0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB8E0u;
    if (runtime->hasFunction(0x2DB8E0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB8E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x510178u; }
        if (ctx->pc != 0x510178u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB8E0_0x2db8e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x510178u; }
        if (ctx->pc != 0x510178u) { return; }
    }
    ctx->pc = 0x510178u;
label_510178:
    // 0x510178: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x510178u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_51017c:
    // 0x51017c: 0xc0b6e28  jal         func_2DB8A0
label_510180:
    if (ctx->pc == 0x510180u) {
        ctx->pc = 0x510180u;
            // 0x510180: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x510184u;
        goto label_510184;
    }
    ctx->pc = 0x51017Cu;
    SET_GPR_U32(ctx, 31, 0x510184u);
    ctx->pc = 0x510180u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51017Cu;
            // 0x510180: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB8A0u;
    if (runtime->hasFunction(0x2DB8A0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x510184u; }
        if (ctx->pc != 0x510184u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB8A0_0x2db8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x510184u; }
        if (ctx->pc != 0x510184u) { return; }
    }
    ctx->pc = 0x510184u;
label_510184:
    // 0x510184: 0xc0dc408  jal         func_371020
label_510188:
    if (ctx->pc == 0x510188u) {
        ctx->pc = 0x510188u;
            // 0x510188: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->pc = 0x51018Cu;
        goto label_51018c;
    }
    ctx->pc = 0x510184u;
    SET_GPR_U32(ctx, 31, 0x51018Cu);
    ctx->pc = 0x510188u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x510184u;
            // 0x510188: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x371020u;
    if (runtime->hasFunction(0x371020u)) {
        auto targetFn = runtime->lookupFunction(0x371020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51018Cu; }
        if (ctx->pc != 0x51018Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00371020_0x371020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51018Cu; }
        if (ctx->pc != 0x51018Cu) { return; }
    }
    ctx->pc = 0x51018Cu;
label_51018c:
    // 0x51018c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x51018cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_510190:
    // 0x510190: 0xc0dc3f4  jal         func_370FD0
label_510194:
    if (ctx->pc == 0x510194u) {
        ctx->pc = 0x510194u;
            // 0x510194: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x510198u;
        goto label_510198;
    }
    ctx->pc = 0x510190u;
    SET_GPR_U32(ctx, 31, 0x510198u);
    ctx->pc = 0x510194u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x510190u;
            // 0x510194: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x370FD0u;
    if (runtime->hasFunction(0x370FD0u)) {
        auto targetFn = runtime->lookupFunction(0x370FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x510198u; }
        if (ctx->pc != 0x510198u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00370FD0_0x370fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x510198u; }
        if (ctx->pc != 0x510198u) { return; }
    }
    ctx->pc = 0x510198u;
label_510198:
    // 0x510198: 0xc077264  jal         func_1DC990
label_51019c:
    if (ctx->pc == 0x51019Cu) {
        ctx->pc = 0x51019Cu;
            // 0x51019c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5101A0u;
        goto label_5101a0;
    }
    ctx->pc = 0x510198u;
    SET_GPR_U32(ctx, 31, 0x5101A0u);
    ctx->pc = 0x51019Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x510198u;
            // 0x51019c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC990u;
    if (runtime->hasFunction(0x1DC990u)) {
        auto targetFn = runtime->lookupFunction(0x1DC990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5101A0u; }
        if (ctx->pc != 0x5101A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC990_0x1dc990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5101A0u; }
        if (ctx->pc != 0x5101A0u) { return; }
    }
    ctx->pc = 0x5101A0u;
label_5101a0:
    // 0x5101a0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x5101a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_5101a4:
    // 0x5101a4: 0xc04cc34  jal         func_1330D0
label_5101a8:
    if (ctx->pc == 0x5101A8u) {
        ctx->pc = 0x5101A8u;
            // 0x5101a8: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x5101ACu;
        goto label_5101ac;
    }
    ctx->pc = 0x5101A4u;
    SET_GPR_U32(ctx, 31, 0x5101ACu);
    ctx->pc = 0x5101A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5101A4u;
            // 0x5101a8: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330D0u;
    if (runtime->hasFunction(0x1330D0u)) {
        auto targetFn = runtime->lookupFunction(0x1330D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5101ACu; }
        if (ctx->pc != 0x5101ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330D0_0x1330d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5101ACu; }
        if (ctx->pc != 0x5101ACu) { return; }
    }
    ctx->pc = 0x5101ACu;
label_5101ac:
    // 0x5101ac: 0xc14410c  jal         func_510430
label_5101b0:
    if (ctx->pc == 0x5101B0u) {
        ctx->pc = 0x5101B0u;
            // 0x5101b0: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x5101B4u;
        goto label_5101b4;
    }
    ctx->pc = 0x5101ACu;
    SET_GPR_U32(ctx, 31, 0x5101B4u);
    ctx->pc = 0x5101B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5101ACu;
            // 0x5101b0: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x510430u;
    if (runtime->hasFunction(0x510430u)) {
        auto targetFn = runtime->lookupFunction(0x510430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5101B4u; }
        if (ctx->pc != 0x5101B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00510430_0x510430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5101B4u; }
        if (ctx->pc != 0x5101B4u) { return; }
    }
    ctx->pc = 0x5101B4u;
label_5101b4:
    // 0x5101b4: 0x8e050128  lw          $a1, 0x128($s0)
    ctx->pc = 0x5101b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 296)));
label_5101b8:
    // 0x5101b8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x5101b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_5101bc:
    // 0x5101bc: 0x8e06012c  lw          $a2, 0x12C($s0)
    ctx->pc = 0x5101bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
label_5101c0:
    // 0x5101c0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x5101c0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_5101c4:
    // 0x5101c4: 0xc1443cc  jal         func_510F30
label_5101c8:
    if (ctx->pc == 0x5101C8u) {
        ctx->pc = 0x5101C8u;
            // 0x5101c8: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x5101CCu;
        goto label_5101cc;
    }
    ctx->pc = 0x5101C4u;
    SET_GPR_U32(ctx, 31, 0x5101CCu);
    ctx->pc = 0x5101C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5101C4u;
            // 0x5101c8: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x510F30u;
    if (runtime->hasFunction(0x510F30u)) {
        auto targetFn = runtime->lookupFunction(0x510F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5101CCu; }
        if (ctx->pc != 0x5101CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00510F30_0x510f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5101CCu; }
        if (ctx->pc != 0x5101CCu) { return; }
    }
    ctx->pc = 0x5101CCu;
label_5101cc:
    // 0x5101cc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x5101ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_5101d0:
    // 0x5101d0: 0xafa00420  sw          $zero, 0x420($sp)
    ctx->pc = 0x5101d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1056), GPR_U32(ctx, 0));
label_5101d4:
    // 0x5101d4: 0xafa00424  sw          $zero, 0x424($sp)
    ctx->pc = 0x5101d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1060), GPR_U32(ctx, 0));
label_5101d8:
    // 0x5101d8: 0xafa00428  sw          $zero, 0x428($sp)
    ctx->pc = 0x5101d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1064), GPR_U32(ctx, 0));
label_5101dc:
    // 0x5101dc: 0xc088b74  jal         func_222DD0
label_5101e0:
    if (ctx->pc == 0x5101E0u) {
        ctx->pc = 0x5101E0u;
            // 0x5101e0: 0xafa0042c  sw          $zero, 0x42C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1068), GPR_U32(ctx, 0));
        ctx->pc = 0x5101E4u;
        goto label_5101e4;
    }
    ctx->pc = 0x5101DCu;
    SET_GPR_U32(ctx, 31, 0x5101E4u);
    ctx->pc = 0x5101E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5101DCu;
            // 0x5101e0: 0xafa0042c  sw          $zero, 0x42C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1068), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5101E4u; }
        if (ctx->pc != 0x5101E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5101E4u; }
        if (ctx->pc != 0x5101E4u) { return; }
    }
    ctx->pc = 0x5101E4u;
label_5101e4:
    // 0x5101e4: 0x8e5900a0  lw          $t9, 0xA0($s2)
    ctx->pc = 0x5101e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
label_5101e8:
    // 0x5101e8: 0x264400a0  addiu       $a0, $s2, 0xA0
    ctx->pc = 0x5101e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
label_5101ec:
    // 0x5101ec: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x5101ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_5101f0:
    // 0x5101f0: 0x320f809  jalr        $t9
label_5101f4:
    if (ctx->pc == 0x5101F4u) {
        ctx->pc = 0x5101F4u;
            // 0x5101f4: 0x27a50420  addiu       $a1, $sp, 0x420 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
        ctx->pc = 0x5101F8u;
        goto label_5101f8;
    }
    ctx->pc = 0x5101F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x5101F8u);
        ctx->pc = 0x5101F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5101F0u;
            // 0x5101f4: 0x27a50420  addiu       $a1, $sp, 0x420 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x5101F8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x5101F8u; }
            if (ctx->pc != 0x5101F8u) { return; }
        }
        }
    }
    ctx->pc = 0x5101F8u;
label_5101f8:
    // 0x5101f8: 0x3c023fb1  lui         $v0, 0x3FB1
    ctx->pc = 0x5101f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16305 << 16));
label_5101fc:
    // 0x5101fc: 0x27a40410  addiu       $a0, $sp, 0x410
    ctx->pc = 0x5101fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
label_510200:
    // 0x510200: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x510200u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_510204:
    // 0x510204: 0x3442c71c  ori         $v0, $v0, 0xC71C
    ctx->pc = 0x510204u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)50972);
label_510208:
    // 0x510208: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x510208u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_51020c:
    // 0x51020c: 0xc04cbd8  jal         func_132F60
label_510210:
    if (ctx->pc == 0x510210u) {
        ctx->pc = 0x510210u;
            // 0x510210: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x510214u;
        goto label_510214;
    }
    ctx->pc = 0x51020Cu;
    SET_GPR_U32(ctx, 31, 0x510214u);
    ctx->pc = 0x510210u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51020Cu;
            // 0x510210: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x510214u; }
        if (ctx->pc != 0x510214u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x510214u; }
        if (ctx->pc != 0x510214u) { return; }
    }
    ctx->pc = 0x510214u;
label_510214:
    // 0x510214: 0x27a402e0  addiu       $a0, $sp, 0x2E0
    ctx->pc = 0x510214u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
label_510218:
    // 0x510218: 0xc04f278  jal         func_13C9E0
label_51021c:
    if (ctx->pc == 0x51021Cu) {
        ctx->pc = 0x51021Cu;
            // 0x51021c: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->pc = 0x510220u;
        goto label_510220;
    }
    ctx->pc = 0x510218u;
    SET_GPR_U32(ctx, 31, 0x510220u);
    ctx->pc = 0x51021Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x510218u;
            // 0x51021c: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x510220u; }
        if (ctx->pc != 0x510220u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x510220u; }
        if (ctx->pc != 0x510220u) { return; }
    }
    ctx->pc = 0x510220u;
label_510220:
    // 0x510220: 0x27a40400  addiu       $a0, $sp, 0x400
    ctx->pc = 0x510220u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1024));
label_510224:
    // 0x510224: 0x27a502e0  addiu       $a1, $sp, 0x2E0
    ctx->pc = 0x510224u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
label_510228:
    // 0x510228: 0xc04cca0  jal         func_133280
label_51022c:
    if (ctx->pc == 0x51022Cu) {
        ctx->pc = 0x51022Cu;
            // 0x51022c: 0x27a60410  addiu       $a2, $sp, 0x410 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
        ctx->pc = 0x510230u;
        goto label_510230;
    }
    ctx->pc = 0x510228u;
    SET_GPR_U32(ctx, 31, 0x510230u);
    ctx->pc = 0x51022Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x510228u;
            // 0x51022c: 0x27a60410  addiu       $a2, $sp, 0x410 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x510230u; }
        if (ctx->pc != 0x510230u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x510230u; }
        if (ctx->pc != 0x510230u) { return; }
    }
    ctx->pc = 0x510230u;
label_510230:
    // 0x510230: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x510230u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_510234:
    // 0x510234: 0xafa002dc  sw          $zero, 0x2DC($sp)
    ctx->pc = 0x510234u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 732), GPR_U32(ctx, 0));
label_510238:
    // 0x510238: 0xc7a20400  lwc1        $f2, 0x400($sp)
    ctx->pc = 0x510238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1024)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_51023c:
    // 0x51023c: 0x8c51e3e0  lw          $s1, -0x1C20($v0)
    ctx->pc = 0x51023cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_510240:
    // 0x510240: 0xc7a10404  lwc1        $f1, 0x404($sp)
    ctx->pc = 0x510240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1028)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_510244:
    // 0x510244: 0xc7a00408  lwc1        $f0, 0x408($sp)
    ctx->pc = 0x510244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1032)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_510248:
    // 0x510248: 0xe7a202d0  swc1        $f2, 0x2D0($sp)
    ctx->pc = 0x510248u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 720), bits); }
label_51024c:
    // 0x51024c: 0xe7a102d4  swc1        $f1, 0x2D4($sp)
    ctx->pc = 0x51024cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 724), bits); }
label_510250:
    // 0x510250: 0xe7a002d8  swc1        $f0, 0x2D8($sp)
    ctx->pc = 0x510250u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 728), bits); }
label_510254:
    // 0x510254: 0xc6340020  lwc1        $f20, 0x20($s1)
    ctx->pc = 0x510254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_510258:
    // 0x510258: 0xc089638  jal         func_2258E0
label_51025c:
    if (ctx->pc == 0x51025Cu) {
        ctx->pc = 0x51025Cu;
            // 0x51025c: 0x264400a0  addiu       $a0, $s2, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
        ctx->pc = 0x510260u;
        goto label_510260;
    }
    ctx->pc = 0x510258u;
    SET_GPR_U32(ctx, 31, 0x510260u);
    ctx->pc = 0x51025Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x510258u;
            // 0x51025c: 0x264400a0  addiu       $a0, $s2, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2258E0u;
    if (runtime->hasFunction(0x2258E0u)) {
        auto targetFn = runtime->lookupFunction(0x2258E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x510260u; }
        if (ctx->pc != 0x510260u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002258E0_0x2258e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x510260u; }
        if (ctx->pc != 0x510260u) { return; }
    }
    ctx->pc = 0x510260u;
label_510260:
    // 0x510260: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x510260u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_510264:
    // 0x510264: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x510264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_510268:
    // 0x510268: 0x46140102  mul.s       $f4, $f0, $f20
    ctx->pc = 0x510268u;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_51026c:
    // 0x51026c: 0xc4450018  lwc1        $f5, 0x18($v0)
    ctx->pc = 0x51026cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_510270:
    // 0x510270: 0xc7a302d0  lwc1        $f3, 0x2D0($sp)
    ctx->pc = 0x510270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_510274:
    // 0x510274: 0xc7a202d4  lwc1        $f2, 0x2D4($sp)
    ctx->pc = 0x510274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 724)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_510278:
    // 0x510278: 0x46042902  mul.s       $f4, $f5, $f4
    ctx->pc = 0x510278u;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
label_51027c:
    // 0x51027c: 0xc7a102d8  lwc1        $f1, 0x2D8($sp)
    ctx->pc = 0x51027cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_510280:
    // 0x510280: 0xc7a002dc  lwc1        $f0, 0x2DC($sp)
    ctx->pc = 0x510280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 732)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_510284:
    // 0x510284: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x510284u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
label_510288:
    // 0x510288: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x510288u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
label_51028c:
    // 0x51028c: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x51028cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
label_510290:
    // 0x510290: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x510290u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_510294:
    // 0x510294: 0xe7a302d0  swc1        $f3, 0x2D0($sp)
    ctx->pc = 0x510294u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 720), bits); }
label_510298:
    // 0x510298: 0xe7a202d4  swc1        $f2, 0x2D4($sp)
    ctx->pc = 0x510298u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 724), bits); }
label_51029c:
    // 0x51029c: 0xe7a102d8  swc1        $f1, 0x2D8($sp)
    ctx->pc = 0x51029cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 728), bits); }
label_5102a0:
    // 0x5102a0: 0xe7a002dc  swc1        $f0, 0x2DC($sp)
    ctx->pc = 0x5102a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 732), bits); }
label_5102a4:
    // 0x5102a4: 0xc6340018  lwc1        $f20, 0x18($s1)
    ctx->pc = 0x5102a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_5102a8:
    // 0x5102a8: 0xc088b74  jal         func_222DD0
label_5102ac:
    if (ctx->pc == 0x5102ACu) {
        ctx->pc = 0x5102ACu;
            // 0x5102ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5102B0u;
        goto label_5102b0;
    }
    ctx->pc = 0x5102A8u;
    SET_GPR_U32(ctx, 31, 0x5102B0u);
    ctx->pc = 0x5102ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5102A8u;
            // 0x5102ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5102B0u; }
        if (ctx->pc != 0x5102B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5102B0u; }
        if (ctx->pc != 0x5102B0u) { return; }
    }
    ctx->pc = 0x5102B0u;
label_5102b0:
    // 0x5102b0: 0x8e5900a0  lw          $t9, 0xA0($s2)
    ctx->pc = 0x5102b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
label_5102b4:
    // 0x5102b4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x5102b4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_5102b8:
    // 0x5102b8: 0x264400a0  addiu       $a0, $s2, 0xA0
    ctx->pc = 0x5102b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
label_5102bc:
    // 0x5102bc: 0x8f390058  lw          $t9, 0x58($t9)
    ctx->pc = 0x5102bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 88)));
label_5102c0:
    // 0x5102c0: 0x320f809  jalr        $t9
label_5102c4:
    if (ctx->pc == 0x5102C4u) {
        ctx->pc = 0x5102C4u;
            // 0x5102c4: 0x27a502d0  addiu       $a1, $sp, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
        ctx->pc = 0x5102C8u;
        goto label_5102c8;
    }
    ctx->pc = 0x5102C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x5102C8u);
        ctx->pc = 0x5102C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5102C0u;
            // 0x5102c4: 0x27a502d0  addiu       $a1, $sp, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x5102C8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x5102C8u; }
            if (ctx->pc != 0x5102C8u) { return; }
        }
        }
    }
    ctx->pc = 0x5102C8u;
label_5102c8:
    // 0x5102c8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x5102c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_5102cc:
    // 0x5102cc: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x5102ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_5102d0:
    // 0x5102d0: 0xc6010134  lwc1        $f1, 0x134($s0)
    ctx->pc = 0x5102d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_5102d4:
    // 0x5102d4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x5102d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5102d8:
    // 0x5102d8: 0xc4420018  lwc1        $f2, 0x18($v0)
    ctx->pc = 0x5102d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_5102dc:
    // 0x5102dc: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x5102dcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_5102e0:
    // 0x5102e0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x5102e0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_5102e4:
    // 0x5102e4: 0x45000047  bc1f        . + 4 + (0x47 << 2)
label_5102e8:
    if (ctx->pc == 0x5102E8u) {
        ctx->pc = 0x5102E8u;
            // 0x5102e8: 0xe6010134  swc1        $f1, 0x134($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 308), bits); }
        ctx->pc = 0x5102ECu;
        goto label_5102ec;
    }
    ctx->pc = 0x5102E4u;
    {
        const bool branch_taken_0x5102e4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x5102E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5102E4u;
            // 0x5102e8: 0xe6010134  swc1        $f1, 0x134($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 308), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x5102e4) {
            ctx->pc = 0x510404u;
            goto label_510404;
        }
    }
    ctx->pc = 0x5102ECu;
label_5102ec:
    // 0x5102ec: 0x8e060128  lw          $a2, 0x128($s0)
    ctx->pc = 0x5102ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 296)));
label_5102f0:
    // 0x5102f0: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x5102f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_5102f4:
    // 0x5102f4: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x5102f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_5102f8:
    // 0x5102f8: 0x3c054100  lui         $a1, 0x4100
    ctx->pc = 0x5102f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16640 << 16));
label_5102fc:
    // 0x5102fc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x5102fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_510300:
    // 0x510300: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x510300u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
label_510304:
    // 0x510304: 0x24840e84  addiu       $a0, $a0, 0xE84
    ctx->pc = 0x510304u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3716));
label_510308:
    // 0x510308: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x510308u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_51030c:
    // 0x51030c: 0x863021  addu        $a2, $a0, $a2
    ctx->pc = 0x51030cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_510310:
    // 0x510310: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x510310u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_510314:
    // 0x510314: 0x8c44ab08  lw          $a0, -0x54F8($v0)
    ctx->pc = 0x510314u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945544)));
label_510318:
    // 0x510318: 0x44856800  mtc1        $a1, $f13
    ctx->pc = 0x510318u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_51031c:
    // 0x51031c: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x51031cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_510320:
    // 0x510320: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x510320u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_510324:
    // 0x510324: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x510324u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_510328:
    // 0x510328: 0xc14bb88  jal         func_52EE20
label_51032c:
    if (ctx->pc == 0x51032Cu) {
        ctx->pc = 0x51032Cu;
            // 0x51032c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x510330u;
        goto label_510330;
    }
    ctx->pc = 0x510328u;
    SET_GPR_U32(ctx, 31, 0x510330u);
    ctx->pc = 0x51032Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x510328u;
            // 0x51032c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x52EE20u;
    if (runtime->hasFunction(0x52EE20u)) {
        auto targetFn = runtime->lookupFunction(0x52EE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x510330u; }
        if (ctx->pc != 0x510330u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0052EE20_0x52ee20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x510330u; }
        if (ctx->pc != 0x510330u) { return; }
    }
    ctx->pc = 0x510330u;
label_510330:
    // 0x510330: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x510330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_510334:
    // 0x510334: 0xc0e32a4  jal         func_38CA90
label_510338:
    if (ctx->pc == 0x510338u) {
        ctx->pc = 0x510338u;
            // 0x510338: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x51033Cu;
        goto label_51033c;
    }
    ctx->pc = 0x510334u;
    SET_GPR_U32(ctx, 31, 0x51033Cu);
    ctx->pc = 0x510338u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x510334u;
            // 0x510338: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38CA90u;
    if (runtime->hasFunction(0x38CA90u)) {
        auto targetFn = runtime->lookupFunction(0x38CA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51033Cu; }
        if (ctx->pc != 0x51033Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038CA90_0x38ca90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51033Cu; }
        if (ctx->pc != 0x51033Cu) { return; }
    }
    ctx->pc = 0x51033Cu;
label_51033c:
    // 0x51033c: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x51033cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
label_510340:
    // 0x510340: 0xc0e082c  jal         func_3820B0
label_510344:
    if (ctx->pc == 0x510344u) {
        ctx->pc = 0x510344u;
            // 0x510344: 0xae0000b4  sw          $zero, 0xB4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
        ctx->pc = 0x510348u;
        goto label_510348;
    }
    ctx->pc = 0x510340u;
    SET_GPR_U32(ctx, 31, 0x510348u);
    ctx->pc = 0x510344u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x510340u;
            // 0x510344: 0xae0000b4  sw          $zero, 0xB4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3820B0u;
    if (runtime->hasFunction(0x3820B0u)) {
        auto targetFn = runtime->lookupFunction(0x3820B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x510348u; }
        if (ctx->pc != 0x510348u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003820B0_0x3820b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x510348u; }
        if (ctx->pc != 0x510348u) { return; }
    }
    ctx->pc = 0x510348u;
label_510348:
    // 0x510348: 0xc0e0828  jal         func_3820A0
label_51034c:
    if (ctx->pc == 0x51034Cu) {
        ctx->pc = 0x51034Cu;
            // 0x51034c: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->pc = 0x510350u;
        goto label_510350;
    }
    ctx->pc = 0x510348u;
    SET_GPR_U32(ctx, 31, 0x510350u);
    ctx->pc = 0x51034Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x510348u;
            // 0x51034c: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3820A0u;
    if (runtime->hasFunction(0x3820A0u)) {
        auto targetFn = runtime->lookupFunction(0x3820A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x510350u; }
        if (ctx->pc != 0x510350u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003820A0_0x3820a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x510350u; }
        if (ctx->pc != 0x510350u) { return; }
    }
    ctx->pc = 0x510350u;
label_510350:
    // 0x510350: 0x8e02009c  lw          $v0, 0x9C($s0)
    ctx->pc = 0x510350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
label_510354:
    // 0x510354: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
label_510358:
    if (ctx->pc == 0x510358u) {
        ctx->pc = 0x510358u;
            // 0x510358: 0x8e040050  lw          $a0, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->pc = 0x51035Cu;
        goto label_51035c;
    }
    ctx->pc = 0x510354u;
    {
        const bool branch_taken_0x510354 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x510354) {
            ctx->pc = 0x510358u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x510354u;
            // 0x510358: 0x8e040050  lw          $a0, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x51038Cu;
            goto label_51038c;
        }
    }
    ctx->pc = 0x51035Cu;
label_51035c:
    // 0x51035c: 0x8e0200b0  lw          $v0, 0xB0($s0)
    ctx->pc = 0x51035cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_510360:
    // 0x510360: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x510360u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_510364:
    // 0x510364: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_510368:
    if (ctx->pc == 0x510368u) {
        ctx->pc = 0x51036Cu;
        goto label_51036c;
    }
    ctx->pc = 0x510364u;
    {
        const bool branch_taken_0x510364 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x510364) {
            ctx->pc = 0x510388u;
            goto label_510388;
        }
    }
    ctx->pc = 0x51036Cu;
label_51036c:
    // 0x51036c: 0xc0dc408  jal         func_371020
label_510370:
    if (ctx->pc == 0x510370u) {
        ctx->pc = 0x510370u;
            // 0x510370: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->pc = 0x510374u;
        goto label_510374;
    }
    ctx->pc = 0x51036Cu;
    SET_GPR_U32(ctx, 31, 0x510374u);
    ctx->pc = 0x510370u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51036Cu;
            // 0x510370: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x371020u;
    if (runtime->hasFunction(0x371020u)) {
        auto targetFn = runtime->lookupFunction(0x371020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x510374u; }
        if (ctx->pc != 0x510374u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00371020_0x371020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x510374u; }
        if (ctx->pc != 0x510374u) { return; }
    }
    ctx->pc = 0x510374u;
label_510374:
    // 0x510374: 0xc0e0824  jal         func_382090
label_510378:
    if (ctx->pc == 0x510378u) {
        ctx->pc = 0x510378u;
            // 0x510378: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x51037Cu;
        goto label_51037c;
    }
    ctx->pc = 0x510374u;
    SET_GPR_U32(ctx, 31, 0x51037Cu);
    ctx->pc = 0x510378u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x510374u;
            // 0x510378: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x382090u;
    if (runtime->hasFunction(0x382090u)) {
        auto targetFn = runtime->lookupFunction(0x382090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51037Cu; }
        if (ctx->pc != 0x51037Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00382090_0x382090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51037Cu; }
        if (ctx->pc != 0x51037Cu) { return; }
    }
    ctx->pc = 0x51037Cu;
label_51037c:
    // 0x51037c: 0x8e04009c  lw          $a0, 0x9C($s0)
    ctx->pc = 0x51037cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
label_510380:
    // 0x510380: 0xc0e081c  jal         func_382070
label_510384:
    if (ctx->pc == 0x510384u) {
        ctx->pc = 0x510384u;
            // 0x510384: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x510388u;
        goto label_510388;
    }
    ctx->pc = 0x510380u;
    SET_GPR_U32(ctx, 31, 0x510388u);
    ctx->pc = 0x510384u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x510380u;
            // 0x510384: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x382070u;
    if (runtime->hasFunction(0x382070u)) {
        auto targetFn = runtime->lookupFunction(0x382070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x510388u; }
        if (ctx->pc != 0x510388u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00382070_0x382070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x510388u; }
        if (ctx->pc != 0x510388u) { return; }
    }
    ctx->pc = 0x510388u;
label_510388:
    // 0x510388: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x510388u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_51038c:
    // 0x51038c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x51038cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_510390:
    // 0x510390: 0xc0e080c  jal         func_382030
label_510394:
    if (ctx->pc == 0x510394u) {
        ctx->pc = 0x510394u;
            // 0x510394: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x510398u;
        goto label_510398;
    }
    ctx->pc = 0x510390u;
    SET_GPR_U32(ctx, 31, 0x510398u);
    ctx->pc = 0x510394u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x510390u;
            // 0x510394: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x382030u;
    if (runtime->hasFunction(0x382030u)) {
        auto targetFn = runtime->lookupFunction(0x382030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x510398u; }
        if (ctx->pc != 0x510398u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00382030_0x382030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x510398u; }
        if (ctx->pc != 0x510398u) { return; }
    }
    ctx->pc = 0x510398u;
label_510398:
    // 0x510398: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x510398u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_51039c:
    // 0x51039c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x51039cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_5103a0:
    // 0x5103a0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x5103a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_5103a4:
    // 0x5103a4: 0xc08914c  jal         func_224530
label_5103a8:
    if (ctx->pc == 0x5103A8u) {
        ctx->pc = 0x5103A8u;
            // 0x5103a8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5103ACu;
        goto label_5103ac;
    }
    ctx->pc = 0x5103A4u;
    SET_GPR_U32(ctx, 31, 0x5103ACu);
    ctx->pc = 0x5103A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5103A4u;
            // 0x5103a8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5103ACu; }
        if (ctx->pc != 0x5103ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5103ACu; }
        if (ctx->pc != 0x5103ACu) { return; }
    }
    ctx->pc = 0x5103ACu;
label_5103ac:
    // 0x5103ac: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x5103acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_5103b0:
    // 0x5103b0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x5103b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_5103b4:
    // 0x5103b4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x5103b4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_5103b8:
    // 0x5103b8: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x5103b8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_5103bc:
    // 0x5103bc: 0xc0b6df0  jal         func_2DB7C0
label_5103c0:
    if (ctx->pc == 0x5103C0u) {
        ctx->pc = 0x5103C0u;
            // 0x5103c0: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x5103C4u;
        goto label_5103c4;
    }
    ctx->pc = 0x5103BCu;
    SET_GPR_U32(ctx, 31, 0x5103C4u);
    ctx->pc = 0x5103C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5103BCu;
            // 0x5103c0: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB7C0u;
    if (runtime->hasFunction(0x2DB7C0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB7C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5103C4u; }
        if (ctx->pc != 0x5103C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB7C0_0x2db7c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5103C4u; }
        if (ctx->pc != 0x5103C4u) { return; }
    }
    ctx->pc = 0x5103C4u;
label_5103c4:
    // 0x5103c4: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x5103c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_5103c8:
    // 0x5103c8: 0xc0e07f8  jal         func_381FE0
label_5103cc:
    if (ctx->pc == 0x5103CCu) {
        ctx->pc = 0x5103CCu;
            // 0x5103cc: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x5103D0u;
        goto label_5103d0;
    }
    ctx->pc = 0x5103C8u;
    SET_GPR_U32(ctx, 31, 0x5103D0u);
    ctx->pc = 0x5103CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5103C8u;
            // 0x5103cc: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x381FE0u;
    if (runtime->hasFunction(0x381FE0u)) {
        auto targetFn = runtime->lookupFunction(0x381FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5103D0u; }
        if (ctx->pc != 0x5103D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00381FE0_0x381fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5103D0u; }
        if (ctx->pc != 0x5103D0u) { return; }
    }
    ctx->pc = 0x5103D0u;
label_5103d0:
    // 0x5103d0: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x5103d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_5103d4:
    // 0x5103d4: 0xc0dc3f4  jal         func_370FD0
label_5103d8:
    if (ctx->pc == 0x5103D8u) {
        ctx->pc = 0x5103D8u;
            // 0x5103d8: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x5103DCu;
        goto label_5103dc;
    }
    ctx->pc = 0x5103D4u;
    SET_GPR_U32(ctx, 31, 0x5103DCu);
    ctx->pc = 0x5103D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5103D4u;
            // 0x5103d8: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x370FD0u;
    if (runtime->hasFunction(0x370FD0u)) {
        auto targetFn = runtime->lookupFunction(0x370FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5103DCu; }
        if (ctx->pc != 0x5103DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00370FD0_0x370fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5103DCu; }
        if (ctx->pc != 0x5103DCu) { return; }
    }
    ctx->pc = 0x5103DCu;
label_5103dc:
    // 0x5103dc: 0x8e0200b0  lw          $v0, 0xB0($s0)
    ctx->pc = 0x5103dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_5103e0:
    // 0x5103e0: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x5103e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
label_5103e4:
    // 0x5103e4: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_5103e8:
    if (ctx->pc == 0x5103E8u) {
        ctx->pc = 0x5103E8u;
            // 0x5103e8: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x5103ECu;
        goto label_5103ec;
    }
    ctx->pc = 0x5103E4u;
    {
        const bool branch_taken_0x5103e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x5103e4) {
            ctx->pc = 0x5103E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5103E4u;
            // 0x5103e8: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
            ctx->pc = 0x510400u;
            goto label_510400;
        }
    }
    ctx->pc = 0x5103ECu;
label_5103ec:
    // 0x5103ec: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x5103ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_5103f0:
    // 0x5103f0: 0x8f390070  lw          $t9, 0x70($t9)
    ctx->pc = 0x5103f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 112)));
label_5103f4:
    // 0x5103f4: 0x320f809  jalr        $t9
label_5103f8:
    if (ctx->pc == 0x5103F8u) {
        ctx->pc = 0x5103F8u;
            // 0x5103f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5103FCu;
        goto label_5103fc;
    }
    ctx->pc = 0x5103F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x5103FCu);
        ctx->pc = 0x5103F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5103F4u;
            // 0x5103f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x5103FCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x5103FCu; }
            if (ctx->pc != 0x5103FCu) { return; }
        }
        }
    }
    ctx->pc = 0x5103FCu;
label_5103fc:
    // 0x5103fc: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x5103fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_510400:
    // 0x510400: 0xae020124  sw          $v0, 0x124($s0)
    ctx->pc = 0x510400u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 2));
label_510404:
    // 0x510404: 0xc1439ec  jal         func_50E7B0
label_510408:
    if (ctx->pc == 0x510408u) {
        ctx->pc = 0x510408u;
            // 0x510408: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x51040Cu;
        goto label_51040c;
    }
    ctx->pc = 0x510404u;
    SET_GPR_U32(ctx, 31, 0x51040Cu);
    ctx->pc = 0x510408u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x510404u;
            // 0x510408: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x50E7B0u;
    if (runtime->hasFunction(0x50E7B0u)) {
        auto targetFn = runtime->lookupFunction(0x50E7B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51040Cu; }
        if (ctx->pc != 0x51040Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0050E7B0_0x50e7b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51040Cu; }
        if (ctx->pc != 0x51040Cu) { return; }
    }
    ctx->pc = 0x51040Cu;
label_51040c:
    // 0x51040c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x51040cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_510410:
    // 0x510410: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x510410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_510414:
    // 0x510414: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x510414u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_510418:
    // 0x510418: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x510418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_51041c:
    // 0x51041c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x51041cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_510420:
    // 0x510420: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x510420u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_510424:
    // 0x510424: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x510424u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_510428:
    // 0x510428: 0x3e00008  jr          $ra
label_51042c:
    if (ctx->pc == 0x51042Cu) {
        ctx->pc = 0x51042Cu;
            // 0x51042c: 0x27bd0530  addiu       $sp, $sp, 0x530 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1328));
        ctx->pc = 0x510430u;
        goto label_fallthrough_0x510428;
    }
    ctx->pc = 0x510428u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x51042Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x510428u;
            // 0x51042c: 0x27bd0530  addiu       $sp, $sp, 0x530 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1328));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x510428:
    ctx->pc = 0x510430u;
}
