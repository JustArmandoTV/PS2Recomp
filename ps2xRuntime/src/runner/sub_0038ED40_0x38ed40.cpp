#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0038ED40
// Address: 0x38ed40 - 0x38f600
void sub_0038ED40_0x38ed40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038ED40_0x38ed40");
#endif

    switch (ctx->pc) {
        case 0x38ed40u: goto label_38ed40;
        case 0x38ed44u: goto label_38ed44;
        case 0x38ed48u: goto label_38ed48;
        case 0x38ed4cu: goto label_38ed4c;
        case 0x38ed50u: goto label_38ed50;
        case 0x38ed54u: goto label_38ed54;
        case 0x38ed58u: goto label_38ed58;
        case 0x38ed5cu: goto label_38ed5c;
        case 0x38ed60u: goto label_38ed60;
        case 0x38ed64u: goto label_38ed64;
        case 0x38ed68u: goto label_38ed68;
        case 0x38ed6cu: goto label_38ed6c;
        case 0x38ed70u: goto label_38ed70;
        case 0x38ed74u: goto label_38ed74;
        case 0x38ed78u: goto label_38ed78;
        case 0x38ed7cu: goto label_38ed7c;
        case 0x38ed80u: goto label_38ed80;
        case 0x38ed84u: goto label_38ed84;
        case 0x38ed88u: goto label_38ed88;
        case 0x38ed8cu: goto label_38ed8c;
        case 0x38ed90u: goto label_38ed90;
        case 0x38ed94u: goto label_38ed94;
        case 0x38ed98u: goto label_38ed98;
        case 0x38ed9cu: goto label_38ed9c;
        case 0x38eda0u: goto label_38eda0;
        case 0x38eda4u: goto label_38eda4;
        case 0x38eda8u: goto label_38eda8;
        case 0x38edacu: goto label_38edac;
        case 0x38edb0u: goto label_38edb0;
        case 0x38edb4u: goto label_38edb4;
        case 0x38edb8u: goto label_38edb8;
        case 0x38edbcu: goto label_38edbc;
        case 0x38edc0u: goto label_38edc0;
        case 0x38edc4u: goto label_38edc4;
        case 0x38edc8u: goto label_38edc8;
        case 0x38edccu: goto label_38edcc;
        case 0x38edd0u: goto label_38edd0;
        case 0x38edd4u: goto label_38edd4;
        case 0x38edd8u: goto label_38edd8;
        case 0x38eddcu: goto label_38eddc;
        case 0x38ede0u: goto label_38ede0;
        case 0x38ede4u: goto label_38ede4;
        case 0x38ede8u: goto label_38ede8;
        case 0x38edecu: goto label_38edec;
        case 0x38edf0u: goto label_38edf0;
        case 0x38edf4u: goto label_38edf4;
        case 0x38edf8u: goto label_38edf8;
        case 0x38edfcu: goto label_38edfc;
        case 0x38ee00u: goto label_38ee00;
        case 0x38ee04u: goto label_38ee04;
        case 0x38ee08u: goto label_38ee08;
        case 0x38ee0cu: goto label_38ee0c;
        case 0x38ee10u: goto label_38ee10;
        case 0x38ee14u: goto label_38ee14;
        case 0x38ee18u: goto label_38ee18;
        case 0x38ee1cu: goto label_38ee1c;
        case 0x38ee20u: goto label_38ee20;
        case 0x38ee24u: goto label_38ee24;
        case 0x38ee28u: goto label_38ee28;
        case 0x38ee2cu: goto label_38ee2c;
        case 0x38ee30u: goto label_38ee30;
        case 0x38ee34u: goto label_38ee34;
        case 0x38ee38u: goto label_38ee38;
        case 0x38ee3cu: goto label_38ee3c;
        case 0x38ee40u: goto label_38ee40;
        case 0x38ee44u: goto label_38ee44;
        case 0x38ee48u: goto label_38ee48;
        case 0x38ee4cu: goto label_38ee4c;
        case 0x38ee50u: goto label_38ee50;
        case 0x38ee54u: goto label_38ee54;
        case 0x38ee58u: goto label_38ee58;
        case 0x38ee5cu: goto label_38ee5c;
        case 0x38ee60u: goto label_38ee60;
        case 0x38ee64u: goto label_38ee64;
        case 0x38ee68u: goto label_38ee68;
        case 0x38ee6cu: goto label_38ee6c;
        case 0x38ee70u: goto label_38ee70;
        case 0x38ee74u: goto label_38ee74;
        case 0x38ee78u: goto label_38ee78;
        case 0x38ee7cu: goto label_38ee7c;
        case 0x38ee80u: goto label_38ee80;
        case 0x38ee84u: goto label_38ee84;
        case 0x38ee88u: goto label_38ee88;
        case 0x38ee8cu: goto label_38ee8c;
        case 0x38ee90u: goto label_38ee90;
        case 0x38ee94u: goto label_38ee94;
        case 0x38ee98u: goto label_38ee98;
        case 0x38ee9cu: goto label_38ee9c;
        case 0x38eea0u: goto label_38eea0;
        case 0x38eea4u: goto label_38eea4;
        case 0x38eea8u: goto label_38eea8;
        case 0x38eeacu: goto label_38eeac;
        case 0x38eeb0u: goto label_38eeb0;
        case 0x38eeb4u: goto label_38eeb4;
        case 0x38eeb8u: goto label_38eeb8;
        case 0x38eebcu: goto label_38eebc;
        case 0x38eec0u: goto label_38eec0;
        case 0x38eec4u: goto label_38eec4;
        case 0x38eec8u: goto label_38eec8;
        case 0x38eeccu: goto label_38eecc;
        case 0x38eed0u: goto label_38eed0;
        case 0x38eed4u: goto label_38eed4;
        case 0x38eed8u: goto label_38eed8;
        case 0x38eedcu: goto label_38eedc;
        case 0x38eee0u: goto label_38eee0;
        case 0x38eee4u: goto label_38eee4;
        case 0x38eee8u: goto label_38eee8;
        case 0x38eeecu: goto label_38eeec;
        case 0x38eef0u: goto label_38eef0;
        case 0x38eef4u: goto label_38eef4;
        case 0x38eef8u: goto label_38eef8;
        case 0x38eefcu: goto label_38eefc;
        case 0x38ef00u: goto label_38ef00;
        case 0x38ef04u: goto label_38ef04;
        case 0x38ef08u: goto label_38ef08;
        case 0x38ef0cu: goto label_38ef0c;
        case 0x38ef10u: goto label_38ef10;
        case 0x38ef14u: goto label_38ef14;
        case 0x38ef18u: goto label_38ef18;
        case 0x38ef1cu: goto label_38ef1c;
        case 0x38ef20u: goto label_38ef20;
        case 0x38ef24u: goto label_38ef24;
        case 0x38ef28u: goto label_38ef28;
        case 0x38ef2cu: goto label_38ef2c;
        case 0x38ef30u: goto label_38ef30;
        case 0x38ef34u: goto label_38ef34;
        case 0x38ef38u: goto label_38ef38;
        case 0x38ef3cu: goto label_38ef3c;
        case 0x38ef40u: goto label_38ef40;
        case 0x38ef44u: goto label_38ef44;
        case 0x38ef48u: goto label_38ef48;
        case 0x38ef4cu: goto label_38ef4c;
        case 0x38ef50u: goto label_38ef50;
        case 0x38ef54u: goto label_38ef54;
        case 0x38ef58u: goto label_38ef58;
        case 0x38ef5cu: goto label_38ef5c;
        case 0x38ef60u: goto label_38ef60;
        case 0x38ef64u: goto label_38ef64;
        case 0x38ef68u: goto label_38ef68;
        case 0x38ef6cu: goto label_38ef6c;
        case 0x38ef70u: goto label_38ef70;
        case 0x38ef74u: goto label_38ef74;
        case 0x38ef78u: goto label_38ef78;
        case 0x38ef7cu: goto label_38ef7c;
        case 0x38ef80u: goto label_38ef80;
        case 0x38ef84u: goto label_38ef84;
        case 0x38ef88u: goto label_38ef88;
        case 0x38ef8cu: goto label_38ef8c;
        case 0x38ef90u: goto label_38ef90;
        case 0x38ef94u: goto label_38ef94;
        case 0x38ef98u: goto label_38ef98;
        case 0x38ef9cu: goto label_38ef9c;
        case 0x38efa0u: goto label_38efa0;
        case 0x38efa4u: goto label_38efa4;
        case 0x38efa8u: goto label_38efa8;
        case 0x38efacu: goto label_38efac;
        case 0x38efb0u: goto label_38efb0;
        case 0x38efb4u: goto label_38efb4;
        case 0x38efb8u: goto label_38efb8;
        case 0x38efbcu: goto label_38efbc;
        case 0x38efc0u: goto label_38efc0;
        case 0x38efc4u: goto label_38efc4;
        case 0x38efc8u: goto label_38efc8;
        case 0x38efccu: goto label_38efcc;
        case 0x38efd0u: goto label_38efd0;
        case 0x38efd4u: goto label_38efd4;
        case 0x38efd8u: goto label_38efd8;
        case 0x38efdcu: goto label_38efdc;
        case 0x38efe0u: goto label_38efe0;
        case 0x38efe4u: goto label_38efe4;
        case 0x38efe8u: goto label_38efe8;
        case 0x38efecu: goto label_38efec;
        case 0x38eff0u: goto label_38eff0;
        case 0x38eff4u: goto label_38eff4;
        case 0x38eff8u: goto label_38eff8;
        case 0x38effcu: goto label_38effc;
        case 0x38f000u: goto label_38f000;
        case 0x38f004u: goto label_38f004;
        case 0x38f008u: goto label_38f008;
        case 0x38f00cu: goto label_38f00c;
        case 0x38f010u: goto label_38f010;
        case 0x38f014u: goto label_38f014;
        case 0x38f018u: goto label_38f018;
        case 0x38f01cu: goto label_38f01c;
        case 0x38f020u: goto label_38f020;
        case 0x38f024u: goto label_38f024;
        case 0x38f028u: goto label_38f028;
        case 0x38f02cu: goto label_38f02c;
        case 0x38f030u: goto label_38f030;
        case 0x38f034u: goto label_38f034;
        case 0x38f038u: goto label_38f038;
        case 0x38f03cu: goto label_38f03c;
        case 0x38f040u: goto label_38f040;
        case 0x38f044u: goto label_38f044;
        case 0x38f048u: goto label_38f048;
        case 0x38f04cu: goto label_38f04c;
        case 0x38f050u: goto label_38f050;
        case 0x38f054u: goto label_38f054;
        case 0x38f058u: goto label_38f058;
        case 0x38f05cu: goto label_38f05c;
        case 0x38f060u: goto label_38f060;
        case 0x38f064u: goto label_38f064;
        case 0x38f068u: goto label_38f068;
        case 0x38f06cu: goto label_38f06c;
        case 0x38f070u: goto label_38f070;
        case 0x38f074u: goto label_38f074;
        case 0x38f078u: goto label_38f078;
        case 0x38f07cu: goto label_38f07c;
        case 0x38f080u: goto label_38f080;
        case 0x38f084u: goto label_38f084;
        case 0x38f088u: goto label_38f088;
        case 0x38f08cu: goto label_38f08c;
        case 0x38f090u: goto label_38f090;
        case 0x38f094u: goto label_38f094;
        case 0x38f098u: goto label_38f098;
        case 0x38f09cu: goto label_38f09c;
        case 0x38f0a0u: goto label_38f0a0;
        case 0x38f0a4u: goto label_38f0a4;
        case 0x38f0a8u: goto label_38f0a8;
        case 0x38f0acu: goto label_38f0ac;
        case 0x38f0b0u: goto label_38f0b0;
        case 0x38f0b4u: goto label_38f0b4;
        case 0x38f0b8u: goto label_38f0b8;
        case 0x38f0bcu: goto label_38f0bc;
        case 0x38f0c0u: goto label_38f0c0;
        case 0x38f0c4u: goto label_38f0c4;
        case 0x38f0c8u: goto label_38f0c8;
        case 0x38f0ccu: goto label_38f0cc;
        case 0x38f0d0u: goto label_38f0d0;
        case 0x38f0d4u: goto label_38f0d4;
        case 0x38f0d8u: goto label_38f0d8;
        case 0x38f0dcu: goto label_38f0dc;
        case 0x38f0e0u: goto label_38f0e0;
        case 0x38f0e4u: goto label_38f0e4;
        case 0x38f0e8u: goto label_38f0e8;
        case 0x38f0ecu: goto label_38f0ec;
        case 0x38f0f0u: goto label_38f0f0;
        case 0x38f0f4u: goto label_38f0f4;
        case 0x38f0f8u: goto label_38f0f8;
        case 0x38f0fcu: goto label_38f0fc;
        case 0x38f100u: goto label_38f100;
        case 0x38f104u: goto label_38f104;
        case 0x38f108u: goto label_38f108;
        case 0x38f10cu: goto label_38f10c;
        case 0x38f110u: goto label_38f110;
        case 0x38f114u: goto label_38f114;
        case 0x38f118u: goto label_38f118;
        case 0x38f11cu: goto label_38f11c;
        case 0x38f120u: goto label_38f120;
        case 0x38f124u: goto label_38f124;
        case 0x38f128u: goto label_38f128;
        case 0x38f12cu: goto label_38f12c;
        case 0x38f130u: goto label_38f130;
        case 0x38f134u: goto label_38f134;
        case 0x38f138u: goto label_38f138;
        case 0x38f13cu: goto label_38f13c;
        case 0x38f140u: goto label_38f140;
        case 0x38f144u: goto label_38f144;
        case 0x38f148u: goto label_38f148;
        case 0x38f14cu: goto label_38f14c;
        case 0x38f150u: goto label_38f150;
        case 0x38f154u: goto label_38f154;
        case 0x38f158u: goto label_38f158;
        case 0x38f15cu: goto label_38f15c;
        case 0x38f160u: goto label_38f160;
        case 0x38f164u: goto label_38f164;
        case 0x38f168u: goto label_38f168;
        case 0x38f16cu: goto label_38f16c;
        case 0x38f170u: goto label_38f170;
        case 0x38f174u: goto label_38f174;
        case 0x38f178u: goto label_38f178;
        case 0x38f17cu: goto label_38f17c;
        case 0x38f180u: goto label_38f180;
        case 0x38f184u: goto label_38f184;
        case 0x38f188u: goto label_38f188;
        case 0x38f18cu: goto label_38f18c;
        case 0x38f190u: goto label_38f190;
        case 0x38f194u: goto label_38f194;
        case 0x38f198u: goto label_38f198;
        case 0x38f19cu: goto label_38f19c;
        case 0x38f1a0u: goto label_38f1a0;
        case 0x38f1a4u: goto label_38f1a4;
        case 0x38f1a8u: goto label_38f1a8;
        case 0x38f1acu: goto label_38f1ac;
        case 0x38f1b0u: goto label_38f1b0;
        case 0x38f1b4u: goto label_38f1b4;
        case 0x38f1b8u: goto label_38f1b8;
        case 0x38f1bcu: goto label_38f1bc;
        case 0x38f1c0u: goto label_38f1c0;
        case 0x38f1c4u: goto label_38f1c4;
        case 0x38f1c8u: goto label_38f1c8;
        case 0x38f1ccu: goto label_38f1cc;
        case 0x38f1d0u: goto label_38f1d0;
        case 0x38f1d4u: goto label_38f1d4;
        case 0x38f1d8u: goto label_38f1d8;
        case 0x38f1dcu: goto label_38f1dc;
        case 0x38f1e0u: goto label_38f1e0;
        case 0x38f1e4u: goto label_38f1e4;
        case 0x38f1e8u: goto label_38f1e8;
        case 0x38f1ecu: goto label_38f1ec;
        case 0x38f1f0u: goto label_38f1f0;
        case 0x38f1f4u: goto label_38f1f4;
        case 0x38f1f8u: goto label_38f1f8;
        case 0x38f1fcu: goto label_38f1fc;
        case 0x38f200u: goto label_38f200;
        case 0x38f204u: goto label_38f204;
        case 0x38f208u: goto label_38f208;
        case 0x38f20cu: goto label_38f20c;
        case 0x38f210u: goto label_38f210;
        case 0x38f214u: goto label_38f214;
        case 0x38f218u: goto label_38f218;
        case 0x38f21cu: goto label_38f21c;
        case 0x38f220u: goto label_38f220;
        case 0x38f224u: goto label_38f224;
        case 0x38f228u: goto label_38f228;
        case 0x38f22cu: goto label_38f22c;
        case 0x38f230u: goto label_38f230;
        case 0x38f234u: goto label_38f234;
        case 0x38f238u: goto label_38f238;
        case 0x38f23cu: goto label_38f23c;
        case 0x38f240u: goto label_38f240;
        case 0x38f244u: goto label_38f244;
        case 0x38f248u: goto label_38f248;
        case 0x38f24cu: goto label_38f24c;
        case 0x38f250u: goto label_38f250;
        case 0x38f254u: goto label_38f254;
        case 0x38f258u: goto label_38f258;
        case 0x38f25cu: goto label_38f25c;
        case 0x38f260u: goto label_38f260;
        case 0x38f264u: goto label_38f264;
        case 0x38f268u: goto label_38f268;
        case 0x38f26cu: goto label_38f26c;
        case 0x38f270u: goto label_38f270;
        case 0x38f274u: goto label_38f274;
        case 0x38f278u: goto label_38f278;
        case 0x38f27cu: goto label_38f27c;
        case 0x38f280u: goto label_38f280;
        case 0x38f284u: goto label_38f284;
        case 0x38f288u: goto label_38f288;
        case 0x38f28cu: goto label_38f28c;
        case 0x38f290u: goto label_38f290;
        case 0x38f294u: goto label_38f294;
        case 0x38f298u: goto label_38f298;
        case 0x38f29cu: goto label_38f29c;
        case 0x38f2a0u: goto label_38f2a0;
        case 0x38f2a4u: goto label_38f2a4;
        case 0x38f2a8u: goto label_38f2a8;
        case 0x38f2acu: goto label_38f2ac;
        case 0x38f2b0u: goto label_38f2b0;
        case 0x38f2b4u: goto label_38f2b4;
        case 0x38f2b8u: goto label_38f2b8;
        case 0x38f2bcu: goto label_38f2bc;
        case 0x38f2c0u: goto label_38f2c0;
        case 0x38f2c4u: goto label_38f2c4;
        case 0x38f2c8u: goto label_38f2c8;
        case 0x38f2ccu: goto label_38f2cc;
        case 0x38f2d0u: goto label_38f2d0;
        case 0x38f2d4u: goto label_38f2d4;
        case 0x38f2d8u: goto label_38f2d8;
        case 0x38f2dcu: goto label_38f2dc;
        case 0x38f2e0u: goto label_38f2e0;
        case 0x38f2e4u: goto label_38f2e4;
        case 0x38f2e8u: goto label_38f2e8;
        case 0x38f2ecu: goto label_38f2ec;
        case 0x38f2f0u: goto label_38f2f0;
        case 0x38f2f4u: goto label_38f2f4;
        case 0x38f2f8u: goto label_38f2f8;
        case 0x38f2fcu: goto label_38f2fc;
        case 0x38f300u: goto label_38f300;
        case 0x38f304u: goto label_38f304;
        case 0x38f308u: goto label_38f308;
        case 0x38f30cu: goto label_38f30c;
        case 0x38f310u: goto label_38f310;
        case 0x38f314u: goto label_38f314;
        case 0x38f318u: goto label_38f318;
        case 0x38f31cu: goto label_38f31c;
        case 0x38f320u: goto label_38f320;
        case 0x38f324u: goto label_38f324;
        case 0x38f328u: goto label_38f328;
        case 0x38f32cu: goto label_38f32c;
        case 0x38f330u: goto label_38f330;
        case 0x38f334u: goto label_38f334;
        case 0x38f338u: goto label_38f338;
        case 0x38f33cu: goto label_38f33c;
        case 0x38f340u: goto label_38f340;
        case 0x38f344u: goto label_38f344;
        case 0x38f348u: goto label_38f348;
        case 0x38f34cu: goto label_38f34c;
        case 0x38f350u: goto label_38f350;
        case 0x38f354u: goto label_38f354;
        case 0x38f358u: goto label_38f358;
        case 0x38f35cu: goto label_38f35c;
        case 0x38f360u: goto label_38f360;
        case 0x38f364u: goto label_38f364;
        case 0x38f368u: goto label_38f368;
        case 0x38f36cu: goto label_38f36c;
        case 0x38f370u: goto label_38f370;
        case 0x38f374u: goto label_38f374;
        case 0x38f378u: goto label_38f378;
        case 0x38f37cu: goto label_38f37c;
        case 0x38f380u: goto label_38f380;
        case 0x38f384u: goto label_38f384;
        case 0x38f388u: goto label_38f388;
        case 0x38f38cu: goto label_38f38c;
        case 0x38f390u: goto label_38f390;
        case 0x38f394u: goto label_38f394;
        case 0x38f398u: goto label_38f398;
        case 0x38f39cu: goto label_38f39c;
        case 0x38f3a0u: goto label_38f3a0;
        case 0x38f3a4u: goto label_38f3a4;
        case 0x38f3a8u: goto label_38f3a8;
        case 0x38f3acu: goto label_38f3ac;
        case 0x38f3b0u: goto label_38f3b0;
        case 0x38f3b4u: goto label_38f3b4;
        case 0x38f3b8u: goto label_38f3b8;
        case 0x38f3bcu: goto label_38f3bc;
        case 0x38f3c0u: goto label_38f3c0;
        case 0x38f3c4u: goto label_38f3c4;
        case 0x38f3c8u: goto label_38f3c8;
        case 0x38f3ccu: goto label_38f3cc;
        case 0x38f3d0u: goto label_38f3d0;
        case 0x38f3d4u: goto label_38f3d4;
        case 0x38f3d8u: goto label_38f3d8;
        case 0x38f3dcu: goto label_38f3dc;
        case 0x38f3e0u: goto label_38f3e0;
        case 0x38f3e4u: goto label_38f3e4;
        case 0x38f3e8u: goto label_38f3e8;
        case 0x38f3ecu: goto label_38f3ec;
        case 0x38f3f0u: goto label_38f3f0;
        case 0x38f3f4u: goto label_38f3f4;
        case 0x38f3f8u: goto label_38f3f8;
        case 0x38f3fcu: goto label_38f3fc;
        case 0x38f400u: goto label_38f400;
        case 0x38f404u: goto label_38f404;
        case 0x38f408u: goto label_38f408;
        case 0x38f40cu: goto label_38f40c;
        case 0x38f410u: goto label_38f410;
        case 0x38f414u: goto label_38f414;
        case 0x38f418u: goto label_38f418;
        case 0x38f41cu: goto label_38f41c;
        case 0x38f420u: goto label_38f420;
        case 0x38f424u: goto label_38f424;
        case 0x38f428u: goto label_38f428;
        case 0x38f42cu: goto label_38f42c;
        case 0x38f430u: goto label_38f430;
        case 0x38f434u: goto label_38f434;
        case 0x38f438u: goto label_38f438;
        case 0x38f43cu: goto label_38f43c;
        case 0x38f440u: goto label_38f440;
        case 0x38f444u: goto label_38f444;
        case 0x38f448u: goto label_38f448;
        case 0x38f44cu: goto label_38f44c;
        case 0x38f450u: goto label_38f450;
        case 0x38f454u: goto label_38f454;
        case 0x38f458u: goto label_38f458;
        case 0x38f45cu: goto label_38f45c;
        case 0x38f460u: goto label_38f460;
        case 0x38f464u: goto label_38f464;
        case 0x38f468u: goto label_38f468;
        case 0x38f46cu: goto label_38f46c;
        case 0x38f470u: goto label_38f470;
        case 0x38f474u: goto label_38f474;
        case 0x38f478u: goto label_38f478;
        case 0x38f47cu: goto label_38f47c;
        case 0x38f480u: goto label_38f480;
        case 0x38f484u: goto label_38f484;
        case 0x38f488u: goto label_38f488;
        case 0x38f48cu: goto label_38f48c;
        case 0x38f490u: goto label_38f490;
        case 0x38f494u: goto label_38f494;
        case 0x38f498u: goto label_38f498;
        case 0x38f49cu: goto label_38f49c;
        case 0x38f4a0u: goto label_38f4a0;
        case 0x38f4a4u: goto label_38f4a4;
        case 0x38f4a8u: goto label_38f4a8;
        case 0x38f4acu: goto label_38f4ac;
        case 0x38f4b0u: goto label_38f4b0;
        case 0x38f4b4u: goto label_38f4b4;
        case 0x38f4b8u: goto label_38f4b8;
        case 0x38f4bcu: goto label_38f4bc;
        case 0x38f4c0u: goto label_38f4c0;
        case 0x38f4c4u: goto label_38f4c4;
        case 0x38f4c8u: goto label_38f4c8;
        case 0x38f4ccu: goto label_38f4cc;
        case 0x38f4d0u: goto label_38f4d0;
        case 0x38f4d4u: goto label_38f4d4;
        case 0x38f4d8u: goto label_38f4d8;
        case 0x38f4dcu: goto label_38f4dc;
        case 0x38f4e0u: goto label_38f4e0;
        case 0x38f4e4u: goto label_38f4e4;
        case 0x38f4e8u: goto label_38f4e8;
        case 0x38f4ecu: goto label_38f4ec;
        case 0x38f4f0u: goto label_38f4f0;
        case 0x38f4f4u: goto label_38f4f4;
        case 0x38f4f8u: goto label_38f4f8;
        case 0x38f4fcu: goto label_38f4fc;
        case 0x38f500u: goto label_38f500;
        case 0x38f504u: goto label_38f504;
        case 0x38f508u: goto label_38f508;
        case 0x38f50cu: goto label_38f50c;
        case 0x38f510u: goto label_38f510;
        case 0x38f514u: goto label_38f514;
        case 0x38f518u: goto label_38f518;
        case 0x38f51cu: goto label_38f51c;
        case 0x38f520u: goto label_38f520;
        case 0x38f524u: goto label_38f524;
        case 0x38f528u: goto label_38f528;
        case 0x38f52cu: goto label_38f52c;
        case 0x38f530u: goto label_38f530;
        case 0x38f534u: goto label_38f534;
        case 0x38f538u: goto label_38f538;
        case 0x38f53cu: goto label_38f53c;
        case 0x38f540u: goto label_38f540;
        case 0x38f544u: goto label_38f544;
        case 0x38f548u: goto label_38f548;
        case 0x38f54cu: goto label_38f54c;
        case 0x38f550u: goto label_38f550;
        case 0x38f554u: goto label_38f554;
        case 0x38f558u: goto label_38f558;
        case 0x38f55cu: goto label_38f55c;
        case 0x38f560u: goto label_38f560;
        case 0x38f564u: goto label_38f564;
        case 0x38f568u: goto label_38f568;
        case 0x38f56cu: goto label_38f56c;
        case 0x38f570u: goto label_38f570;
        case 0x38f574u: goto label_38f574;
        case 0x38f578u: goto label_38f578;
        case 0x38f57cu: goto label_38f57c;
        case 0x38f580u: goto label_38f580;
        case 0x38f584u: goto label_38f584;
        case 0x38f588u: goto label_38f588;
        case 0x38f58cu: goto label_38f58c;
        case 0x38f590u: goto label_38f590;
        case 0x38f594u: goto label_38f594;
        case 0x38f598u: goto label_38f598;
        case 0x38f59cu: goto label_38f59c;
        case 0x38f5a0u: goto label_38f5a0;
        case 0x38f5a4u: goto label_38f5a4;
        case 0x38f5a8u: goto label_38f5a8;
        case 0x38f5acu: goto label_38f5ac;
        case 0x38f5b0u: goto label_38f5b0;
        case 0x38f5b4u: goto label_38f5b4;
        case 0x38f5b8u: goto label_38f5b8;
        case 0x38f5bcu: goto label_38f5bc;
        case 0x38f5c0u: goto label_38f5c0;
        case 0x38f5c4u: goto label_38f5c4;
        case 0x38f5c8u: goto label_38f5c8;
        case 0x38f5ccu: goto label_38f5cc;
        case 0x38f5d0u: goto label_38f5d0;
        case 0x38f5d4u: goto label_38f5d4;
        case 0x38f5d8u: goto label_38f5d8;
        case 0x38f5dcu: goto label_38f5dc;
        case 0x38f5e0u: goto label_38f5e0;
        case 0x38f5e4u: goto label_38f5e4;
        case 0x38f5e8u: goto label_38f5e8;
        case 0x38f5ecu: goto label_38f5ec;
        case 0x38f5f0u: goto label_38f5f0;
        case 0x38f5f4u: goto label_38f5f4;
        case 0x38f5f8u: goto label_38f5f8;
        case 0x38f5fcu: goto label_38f5fc;
        default: break;
    }

    ctx->pc = 0x38ed40u;

label_38ed40:
    // 0x38ed40: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x38ed40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_38ed44:
    // 0x38ed44: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x38ed44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
label_38ed48:
    // 0x38ed48: 0x3e00008  jr          $ra
label_38ed4c:
    if (ctx->pc == 0x38ED4Cu) {
        ctx->pc = 0x38ED4Cu;
            // 0x38ed4c: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->pc = 0x38ED50u;
        goto label_38ed50;
    }
    ctx->pc = 0x38ED48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38ED4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38ED48u;
            // 0x38ed4c: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x38ED50u;
label_38ed50:
    // 0x38ed50: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x38ed50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_38ed54:
    // 0x38ed54: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x38ed54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_38ed58:
    // 0x38ed58: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x38ed58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_38ed5c:
    // 0x38ed5c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x38ed5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_38ed60:
    // 0x38ed60: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x38ed60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_38ed64:
    // 0x38ed64: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x38ed64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_38ed68:
    // 0x38ed68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x38ed68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_38ed6c:
    // 0x38ed6c: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x38ed6cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_38ed70:
    // 0x38ed70: 0x10a3001f  beq         $a1, $v1, . + 4 + (0x1F << 2)
label_38ed74:
    if (ctx->pc == 0x38ED74u) {
        ctx->pc = 0x38ED74u;
            // 0x38ed74: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38ED78u;
        goto label_38ed78;
    }
    ctx->pc = 0x38ED70u;
    {
        const bool branch_taken_0x38ed70 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x38ED74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38ED70u;
            // 0x38ed74: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ed70) {
            ctx->pc = 0x38EDF0u;
            goto label_38edf0;
        }
    }
    ctx->pc = 0x38ED78u;
label_38ed78:
    // 0x38ed78: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x38ed78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_38ed7c:
    // 0x38ed7c: 0x50a30019  beql        $a1, $v1, . + 4 + (0x19 << 2)
label_38ed80:
    if (ctx->pc == 0x38ED80u) {
        ctx->pc = 0x38ED80u;
            // 0x38ed80: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x38ED84u;
        goto label_38ed84;
    }
    ctx->pc = 0x38ED7Cu;
    {
        const bool branch_taken_0x38ed7c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x38ed7c) {
            ctx->pc = 0x38ED80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x38ED7Cu;
            // 0x38ed80: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x38EDE4u;
            goto label_38ede4;
        }
    }
    ctx->pc = 0x38ED84u;
label_38ed84:
    // 0x38ed84: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x38ed84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_38ed88:
    // 0x38ed88: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_38ed8c:
    if (ctx->pc == 0x38ED8Cu) {
        ctx->pc = 0x38ED90u;
        goto label_38ed90;
    }
    ctx->pc = 0x38ED88u;
    {
        const bool branch_taken_0x38ed88 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x38ed88) {
            ctx->pc = 0x38ED98u;
            goto label_38ed98;
        }
    }
    ctx->pc = 0x38ED90u;
label_38ed90:
    // 0x38ed90: 0x10000025  b           . + 4 + (0x25 << 2)
label_38ed94:
    if (ctx->pc == 0x38ED94u) {
        ctx->pc = 0x38ED98u;
        goto label_38ed98;
    }
    ctx->pc = 0x38ED90u;
    {
        const bool branch_taken_0x38ed90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x38ed90) {
            ctx->pc = 0x38EE28u;
            goto label_38ee28;
        }
    }
    ctx->pc = 0x38ED98u;
label_38ed98:
    // 0x38ed98: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x38ed98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_38ed9c:
    // 0x38ed9c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x38ed9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_38eda0:
    // 0x38eda0: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x38eda0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_38eda4:
    // 0x38eda4: 0x8c630cb4  lw          $v1, 0xCB4($v1)
    ctx->pc = 0x38eda4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3252)));
label_38eda8:
    // 0x38eda8: 0x1064001f  beq         $v1, $a0, . + 4 + (0x1F << 2)
label_38edac:
    if (ctx->pc == 0x38EDACu) {
        ctx->pc = 0x38EDB0u;
        goto label_38edb0;
    }
    ctx->pc = 0x38EDA8u;
    {
        const bool branch_taken_0x38eda8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x38eda8) {
            ctx->pc = 0x38EE28u;
            goto label_38ee28;
        }
    }
    ctx->pc = 0x38EDB0u;
label_38edb0:
    // 0x38edb0: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x38edb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_38edb4:
    // 0x38edb4: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x38edb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_38edb8:
    // 0x38edb8: 0x8c651bc0  lw          $a1, 0x1BC0($v1)
    ctx->pc = 0x38edb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7104)));
label_38edbc:
    // 0x38edbc: 0x8c860030  lw          $a2, 0x30($a0)
    ctx->pc = 0x38edbcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_38edc0:
    // 0x38edc0: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x38edc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_38edc4:
    // 0x38edc4: 0x8cc40090  lw          $a0, 0x90($a2)
    ctx->pc = 0x38edc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 144)));
label_38edc8:
    // 0x38edc8: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x38edc8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_38edcc:
    // 0x38edcc: 0xacc40090  sw          $a0, 0x90($a2)
    ctx->pc = 0x38edccu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 144), GPR_U32(ctx, 4));
label_38edd0:
    // 0x38edd0: 0x8c641bc8  lw          $a0, 0x1BC8($v1)
    ctx->pc = 0x38edd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7112)));
label_38edd4:
    // 0x38edd4: 0x8cc30120  lw          $v1, 0x120($a2)
    ctx->pc = 0x38edd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 288)));
label_38edd8:
    // 0x38edd8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x38edd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_38eddc:
    // 0x38eddc: 0x10000012  b           . + 4 + (0x12 << 2)
label_38ede0:
    if (ctx->pc == 0x38EDE0u) {
        ctx->pc = 0x38EDE0u;
            // 0x38ede0: 0xacc30120  sw          $v1, 0x120($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 288), GPR_U32(ctx, 3));
        ctx->pc = 0x38EDE4u;
        goto label_38ede4;
    }
    ctx->pc = 0x38EDDCu;
    {
        const bool branch_taken_0x38eddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38EDE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38EDDCu;
            // 0x38ede0: 0xacc30120  sw          $v1, 0x120($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 288), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38eddc) {
            ctx->pc = 0x38EE28u;
            goto label_38ee28;
        }
    }
    ctx->pc = 0x38EDE4u;
label_38ede4:
    // 0x38ede4: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x38ede4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_38ede8:
    // 0x38ede8: 0x320f809  jalr        $t9
label_38edec:
    if (ctx->pc == 0x38EDECu) {
        ctx->pc = 0x38EDF0u;
        goto label_38edf0;
    }
    ctx->pc = 0x38EDE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x38EDF0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x38EDF0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x38EDF0u; }
            if (ctx->pc != 0x38EDF0u) { return; }
        }
        }
    }
    ctx->pc = 0x38EDF0u;
label_38edf0:
    // 0x38edf0: 0x8e110070  lw          $s1, 0x70($s0)
    ctx->pc = 0x38edf0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_38edf4:
    // 0x38edf4: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
label_38edf8:
    if (ctx->pc == 0x38EDF8u) {
        ctx->pc = 0x38EDFCu;
        goto label_38edfc;
    }
    ctx->pc = 0x38EDF4u;
    {
        const bool branch_taken_0x38edf4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x38edf4) {
            ctx->pc = 0x38EE28u;
            goto label_38ee28;
        }
    }
    ctx->pc = 0x38EDFCu;
label_38edfc:
    // 0x38edfc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x38edfcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38ee00:
    // 0x38ee00: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x38ee00u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38ee04:
    // 0x38ee04: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x38ee04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_38ee08:
    // 0x38ee08: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x38ee08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_38ee0c:
    // 0x38ee0c: 0xc0e3658  jal         func_38D960
label_38ee10:
    if (ctx->pc == 0x38EE10u) {
        ctx->pc = 0x38EE10u;
            // 0x38ee10: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x38EE14u;
        goto label_38ee14;
    }
    ctx->pc = 0x38EE0Cu;
    SET_GPR_U32(ctx, 31, 0x38EE14u);
    ctx->pc = 0x38EE10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38EE0Cu;
            // 0x38ee10: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38D960u;
    if (runtime->hasFunction(0x38D960u)) {
        auto targetFn = runtime->lookupFunction(0x38D960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38EE14u; }
        if (ctx->pc != 0x38EE14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038D960_0x38d960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38EE14u; }
        if (ctx->pc != 0x38EE14u) { return; }
    }
    ctx->pc = 0x38EE14u;
label_38ee14:
    // 0x38ee14: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x38ee14u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_38ee18:
    // 0x38ee18: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x38ee18u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_38ee1c:
    // 0x38ee1c: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_38ee20:
    if (ctx->pc == 0x38EE20u) {
        ctx->pc = 0x38EE20u;
            // 0x38ee20: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x38EE24u;
        goto label_38ee24;
    }
    ctx->pc = 0x38EE1Cu;
    {
        const bool branch_taken_0x38ee1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x38EE20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38EE1Cu;
            // 0x38ee20: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ee1c) {
            ctx->pc = 0x38EE04u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_38ee04;
        }
    }
    ctx->pc = 0x38EE24u;
label_38ee24:
    // 0x38ee24: 0x0  nop
    ctx->pc = 0x38ee24u;
    // NOP
label_38ee28:
    // 0x38ee28: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x38ee28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_38ee2c:
    // 0x38ee2c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x38ee2cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_38ee30:
    // 0x38ee30: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x38ee30u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_38ee34:
    // 0x38ee34: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x38ee34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_38ee38:
    // 0x38ee38: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x38ee38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_38ee3c:
    // 0x38ee3c: 0x3e00008  jr          $ra
label_38ee40:
    if (ctx->pc == 0x38EE40u) {
        ctx->pc = 0x38EE40u;
            // 0x38ee40: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x38EE44u;
        goto label_38ee44;
    }
    ctx->pc = 0x38EE3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38EE40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38EE3Cu;
            // 0x38ee40: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x38EE44u;
label_38ee44:
    // 0x38ee44: 0x0  nop
    ctx->pc = 0x38ee44u;
    // NOP
label_38ee48:
    // 0x38ee48: 0x0  nop
    ctx->pc = 0x38ee48u;
    // NOP
label_38ee4c:
    // 0x38ee4c: 0x0  nop
    ctx->pc = 0x38ee4cu;
    // NOP
label_38ee50:
    // 0x38ee50: 0x8c860070  lw          $a2, 0x70($a0)
    ctx->pc = 0x38ee50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_38ee54:
    // 0x38ee54: 0x10c0000c  beqz        $a2, . + 4 + (0xC << 2)
label_38ee58:
    if (ctx->pc == 0x38EE58u) {
        ctx->pc = 0x38EE5Cu;
        goto label_38ee5c;
    }
    ctx->pc = 0x38EE54u;
    {
        const bool branch_taken_0x38ee54 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x38ee54) {
            ctx->pc = 0x38EE88u;
            goto label_38ee88;
        }
    }
    ctx->pc = 0x38EE5Cu;
label_38ee5c:
    // 0x38ee5c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x38ee5cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38ee60:
    // 0x38ee60: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x38ee60u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38ee64:
    // 0x38ee64: 0x8c850074  lw          $a1, 0x74($a0)
    ctx->pc = 0x38ee64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_38ee68:
    // 0x38ee68: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x38ee68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_38ee6c:
    // 0x38ee6c: 0x106182b  sltu        $v1, $t0, $a2
    ctx->pc = 0x38ee6cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_38ee70:
    // 0x38ee70: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x38ee70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_38ee74:
    // 0x38ee74: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x38ee74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_38ee78:
    // 0x38ee78: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x38ee78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_38ee7c:
    // 0x38ee7c: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_38ee80:
    if (ctx->pc == 0x38EE80u) {
        ctx->pc = 0x38EE80u;
            // 0x38ee80: 0xaca000d0  sw          $zero, 0xD0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 208), GPR_U32(ctx, 0));
        ctx->pc = 0x38EE84u;
        goto label_38ee84;
    }
    ctx->pc = 0x38EE7Cu;
    {
        const bool branch_taken_0x38ee7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x38EE80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38EE7Cu;
            // 0x38ee80: 0xaca000d0  sw          $zero, 0xD0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 208), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ee7c) {
            ctx->pc = 0x38EE64u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_38ee64;
        }
    }
    ctx->pc = 0x38EE84u;
label_38ee84:
    // 0x38ee84: 0x0  nop
    ctx->pc = 0x38ee84u;
    // NOP
label_38ee88:
    // 0x38ee88: 0x3e00008  jr          $ra
label_38ee8c:
    if (ctx->pc == 0x38EE8Cu) {
        ctx->pc = 0x38EE90u;
        goto label_38ee90;
    }
    ctx->pc = 0x38EE88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x38EE90u;
label_38ee90:
    // 0x38ee90: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x38ee90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_38ee94:
    // 0x38ee94: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x38ee94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
label_38ee98:
    // 0x38ee98: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x38ee98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_38ee9c:
    // 0x38ee9c: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x38ee9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_38eea0:
    // 0x38eea0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x38eea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_38eea4:
    // 0x38eea4: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x38eea4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_38eea8:
    // 0x38eea8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x38eea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_38eeac:
    // 0x38eeac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x38eeacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_38eeb0:
    // 0x38eeb0: 0x8c900050  lw          $s0, 0x50($a0)
    ctx->pc = 0x38eeb0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_38eeb4:
    // 0x38eeb4: 0xc6020188  lwc1        $f2, 0x188($s0)
    ctx->pc = 0x38eeb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_38eeb8:
    // 0x38eeb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38eeb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38eebc:
    // 0x38eebc: 0xc6010184  lwc1        $f1, 0x184($s0)
    ctx->pc = 0x38eebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_38eec0:
    // 0x38eec0: 0xc6000180  lwc1        $f0, 0x180($s0)
    ctx->pc = 0x38eec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_38eec4:
    // 0x38eec4: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x38eec4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_38eec8:
    // 0x38eec8: 0xafa0003c  sw          $zero, 0x3C($sp)
    ctx->pc = 0x38eec8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
label_38eecc:
    // 0x38eecc: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x38eeccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_38eed0:
    // 0x38eed0: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x38eed0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_38eed4:
    // 0x38eed4: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x38eed4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_38eed8:
    // 0x38eed8: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x38eed8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_38eedc:
    // 0x38eedc: 0xc088b74  jal         func_222DD0
label_38eee0:
    if (ctx->pc == 0x38EEE0u) {
        ctx->pc = 0x38EEE0u;
            // 0x38eee0: 0xe7a00030  swc1        $f0, 0x30($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
        ctx->pc = 0x38EEE4u;
        goto label_38eee4;
    }
    ctx->pc = 0x38EEDCu;
    SET_GPR_U32(ctx, 31, 0x38EEE4u);
    ctx->pc = 0x38EEE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38EEDCu;
            // 0x38eee0: 0xe7a00030  swc1        $f0, 0x30($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38EEE4u; }
        if (ctx->pc != 0x38EEE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38EEE4u; }
        if (ctx->pc != 0x38EEE4u) { return; }
    }
    ctx->pc = 0x38EEE4u;
label_38eee4:
    // 0x38eee4: 0x8e1900a0  lw          $t9, 0xA0($s0)
    ctx->pc = 0x38eee4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_38eee8:
    // 0x38eee8: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x38eee8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_38eeec:
    // 0x38eeec: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x38eeecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_38eef0:
    // 0x38eef0: 0x320f809  jalr        $t9
label_38eef4:
    if (ctx->pc == 0x38EEF4u) {
        ctx->pc = 0x38EEF4u;
            // 0x38eef4: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x38EEF8u;
        goto label_38eef8;
    }
    ctx->pc = 0x38EEF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x38EEF8u);
        ctx->pc = 0x38EEF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38EEF0u;
            // 0x38eef4: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x38EEF8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x38EEF8u; }
            if (ctx->pc != 0x38EEF8u) { return; }
        }
        }
    }
    ctx->pc = 0x38EEF8u;
label_38eef8:
    // 0x38eef8: 0x2403003f  addiu       $v1, $zero, 0x3F
    ctx->pc = 0x38eef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_38eefc:
    // 0x38eefc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x38eefcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_38ef00:
    // 0x38ef00: 0xa223004c  sb          $v1, 0x4C($s1)
    ctx->pc = 0x38ef00u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 76), (uint8_t)GPR_U32(ctx, 3));
label_38ef04:
    // 0x38ef04: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x38ef04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_38ef08:
    // 0x38ef08: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x38ef08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_38ef0c:
    // 0x38ef0c: 0x8c440968  lw          $a0, 0x968($v0)
    ctx->pc = 0x38ef0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2408)));
label_38ef10:
    // 0x38ef10: 0x5083000d  beql        $a0, $v1, . + 4 + (0xD << 2)
label_38ef14:
    if (ctx->pc == 0x38EF14u) {
        ctx->pc = 0x38EF14u;
            // 0x38ef14: 0x3c020009  lui         $v0, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9 << 16));
        ctx->pc = 0x38EF18u;
        goto label_38ef18;
    }
    ctx->pc = 0x38EF10u;
    {
        const bool branch_taken_0x38ef10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x38ef10) {
            ctx->pc = 0x38EF14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x38EF10u;
            // 0x38ef14: 0x3c020009  lui         $v0, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x38EF48u;
            goto label_38ef48;
        }
    }
    ctx->pc = 0x38EF18u;
label_38ef18:
    // 0x38ef18: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x38ef18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_38ef1c:
    // 0x38ef1c: 0x50820006  beql        $a0, $v0, . + 4 + (0x6 << 2)
label_38ef20:
    if (ctx->pc == 0x38EF20u) {
        ctx->pc = 0x38EF20u;
            // 0x38ef20: 0x3c02000b  lui         $v0, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)11 << 16));
        ctx->pc = 0x38EF24u;
        goto label_38ef24;
    }
    ctx->pc = 0x38EF1Cu;
    {
        const bool branch_taken_0x38ef1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x38ef1c) {
            ctx->pc = 0x38EF20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x38EF1Cu;
            // 0x38ef20: 0x3c02000b  lui         $v0, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)11 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x38EF38u;
            goto label_38ef38;
        }
    }
    ctx->pc = 0x38EF24u;
label_38ef24:
    // 0x38ef24: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_38ef28:
    if (ctx->pc == 0x38EF28u) {
        ctx->pc = 0x38EF2Cu;
        goto label_38ef2c;
    }
    ctx->pc = 0x38EF24u;
    {
        const bool branch_taken_0x38ef24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x38ef24) {
            ctx->pc = 0x38EF34u;
            goto label_38ef34;
        }
    }
    ctx->pc = 0x38EF2Cu;
label_38ef2c:
    // 0x38ef2c: 0x1000000a  b           . + 4 + (0xA << 2)
label_38ef30:
    if (ctx->pc == 0x38EF30u) {
        ctx->pc = 0x38EF30u;
            // 0x38ef30: 0x3c02000b  lui         $v0, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)11 << 16));
        ctx->pc = 0x38EF34u;
        goto label_38ef34;
    }
    ctx->pc = 0x38EF2Cu;
    {
        const bool branch_taken_0x38ef2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38EF30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38EF2Cu;
            // 0x38ef30: 0x3c02000b  lui         $v0, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)11 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ef2c) {
            ctx->pc = 0x38EF58u;
            goto label_38ef58;
        }
    }
    ctx->pc = 0x38EF34u;
label_38ef34:
    // 0x38ef34: 0x3c02000b  lui         $v0, 0xB
    ctx->pc = 0x38ef34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)11 << 16));
label_38ef38:
    // 0x38ef38: 0xc073234  jal         func_1CC8D0
label_38ef3c:
    if (ctx->pc == 0x38EF3Cu) {
        ctx->pc = 0x38EF3Cu;
            // 0x38ef3c: 0x344401a9  ori         $a0, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->pc = 0x38EF40u;
        goto label_38ef40;
    }
    ctx->pc = 0x38EF38u;
    SET_GPR_U32(ctx, 31, 0x38EF40u);
    ctx->pc = 0x38EF3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38EF38u;
            // 0x38ef3c: 0x344401a9  ori         $a0, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38EF40u; }
        if (ctx->pc != 0x38EF40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38EF40u; }
        if (ctx->pc != 0x38EF40u) { return; }
    }
    ctx->pc = 0x38EF40u;
label_38ef40:
    // 0x38ef40: 0x10000008  b           . + 4 + (0x8 << 2)
label_38ef44:
    if (ctx->pc == 0x38EF44u) {
        ctx->pc = 0x38EF44u;
            // 0x38ef44: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x38EF48u;
        goto label_38ef48;
    }
    ctx->pc = 0x38EF40u;
    {
        const bool branch_taken_0x38ef40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38EF44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38EF40u;
            // 0x38ef44: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ef40) {
            ctx->pc = 0x38EF64u;
            goto label_38ef64;
        }
    }
    ctx->pc = 0x38EF48u;
label_38ef48:
    // 0x38ef48: 0xc073234  jal         func_1CC8D0
label_38ef4c:
    if (ctx->pc == 0x38EF4Cu) {
        ctx->pc = 0x38EF4Cu;
            // 0x38ef4c: 0x34440ba9  ori         $a0, $v0, 0xBA9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2985);
        ctx->pc = 0x38EF50u;
        goto label_38ef50;
    }
    ctx->pc = 0x38EF48u;
    SET_GPR_U32(ctx, 31, 0x38EF50u);
    ctx->pc = 0x38EF4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38EF48u;
            // 0x38ef4c: 0x34440ba9  ori         $a0, $v0, 0xBA9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2985);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38EF50u; }
        if (ctx->pc != 0x38EF50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38EF50u; }
        if (ctx->pc != 0x38EF50u) { return; }
    }
    ctx->pc = 0x38EF50u;
label_38ef50:
    // 0x38ef50: 0x10000003  b           . + 4 + (0x3 << 2)
label_38ef54:
    if (ctx->pc == 0x38EF54u) {
        ctx->pc = 0x38EF58u;
        goto label_38ef58;
    }
    ctx->pc = 0x38EF50u;
    {
        const bool branch_taken_0x38ef50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x38ef50) {
            ctx->pc = 0x38EF60u;
            goto label_38ef60;
        }
    }
    ctx->pc = 0x38EF58u;
label_38ef58:
    // 0x38ef58: 0xc073234  jal         func_1CC8D0
label_38ef5c:
    if (ctx->pc == 0x38EF5Cu) {
        ctx->pc = 0x38EF5Cu;
            // 0x38ef5c: 0x344401a9  ori         $a0, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->pc = 0x38EF60u;
        goto label_38ef60;
    }
    ctx->pc = 0x38EF58u;
    SET_GPR_U32(ctx, 31, 0x38EF60u);
    ctx->pc = 0x38EF5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38EF58u;
            // 0x38ef5c: 0x344401a9  ori         $a0, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38EF60u; }
        if (ctx->pc != 0x38EF60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38EF60u; }
        if (ctx->pc != 0x38EF60u) { return; }
    }
    ctx->pc = 0x38EF60u;
label_38ef60:
    // 0x38ef60: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x38ef60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_38ef64:
    // 0x38ef64: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x38ef64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_38ef68:
    // 0x38ef68: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x38ef68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_38ef6c:
    // 0x38ef6c: 0x3e00008  jr          $ra
label_38ef70:
    if (ctx->pc == 0x38EF70u) {
        ctx->pc = 0x38EF70u;
            // 0x38ef70: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x38EF74u;
        goto label_38ef74;
    }
    ctx->pc = 0x38EF6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38EF70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38EF6Cu;
            // 0x38ef70: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x38EF74u;
label_38ef74:
    // 0x38ef74: 0x0  nop
    ctx->pc = 0x38ef74u;
    // NOP
label_38ef78:
    // 0x38ef78: 0x0  nop
    ctx->pc = 0x38ef78u;
    // NOP
label_38ef7c:
    // 0x38ef7c: 0x0  nop
    ctx->pc = 0x38ef7cu;
    // NOP
label_38ef80:
    // 0x38ef80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x38ef80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_38ef84:
    // 0x38ef84: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x38ef84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_38ef88:
    // 0x38ef88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x38ef88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_38ef8c:
    // 0x38ef8c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x38ef8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_38ef90:
    // 0x38ef90: 0x8c840050  lw          $a0, 0x50($a0)
    ctx->pc = 0x38ef90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_38ef94:
    // 0x38ef94: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_38ef98:
    if (ctx->pc == 0x38EF98u) {
        ctx->pc = 0x38EF98u;
            // 0x38ef98: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x38EF9Cu;
        goto label_38ef9c;
    }
    ctx->pc = 0x38EF94u;
    {
        const bool branch_taken_0x38ef94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x38ef94) {
            ctx->pc = 0x38EF98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x38EF94u;
            // 0x38ef98: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x38EFB0u;
            goto label_38efb0;
        }
    }
    ctx->pc = 0x38EF9Cu;
label_38ef9c:
    // 0x38ef9c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x38ef9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_38efa0:
    // 0x38efa0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x38efa0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_38efa4:
    // 0x38efa4: 0x320f809  jalr        $t9
label_38efa8:
    if (ctx->pc == 0x38EFA8u) {
        ctx->pc = 0x38EFA8u;
            // 0x38efa8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x38EFACu;
        goto label_38efac;
    }
    ctx->pc = 0x38EFA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x38EFACu);
        ctx->pc = 0x38EFA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38EFA4u;
            // 0x38efa8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x38EFACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x38EFACu; }
            if (ctx->pc != 0x38EFACu) { return; }
        }
        }
    }
    ctx->pc = 0x38EFACu;
label_38efac:
    // 0x38efac: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x38efacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
label_38efb0:
    // 0x38efb0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x38efb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_38efb4:
    // 0x38efb4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x38efb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_38efb8:
    // 0x38efb8: 0x3e00008  jr          $ra
label_38efbc:
    if (ctx->pc == 0x38EFBCu) {
        ctx->pc = 0x38EFBCu;
            // 0x38efbc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x38EFC0u;
        goto label_38efc0;
    }
    ctx->pc = 0x38EFB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38EFBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38EFB8u;
            // 0x38efbc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x38EFC0u;
label_38efc0:
    // 0x38efc0: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x38efc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
label_38efc4:
    // 0x38efc4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x38efc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_38efc8:
    // 0x38efc8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x38efc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_38efcc:
    // 0x38efcc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x38efccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_38efd0:
    // 0x38efd0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x38efd0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_38efd4:
    // 0x38efd4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x38efd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_38efd8:
    // 0x38efd8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x38efd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_38efdc:
    // 0x38efdc: 0xc0892d0  jal         func_224B40
label_38efe0:
    if (ctx->pc == 0x38EFE0u) {
        ctx->pc = 0x38EFE0u;
            // 0x38efe0: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x38EFE4u;
        goto label_38efe4;
    }
    ctx->pc = 0x38EFDCu;
    SET_GPR_U32(ctx, 31, 0x38EFE4u);
    ctx->pc = 0x38EFE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38EFDCu;
            // 0x38efe0: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224B40u;
    if (runtime->hasFunction(0x224B40u)) {
        auto targetFn = runtime->lookupFunction(0x224B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38EFE4u; }
        if (ctx->pc != 0x38EFE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224B40_0x224b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38EFE4u; }
        if (ctx->pc != 0x38EFE4u) { return; }
    }
    ctx->pc = 0x38EFE4u;
label_38efe4:
    // 0x38efe4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x38efe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_38efe8:
    // 0x38efe8: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x38efe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_38efec:
    // 0x38efec: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x38efecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_38eff0:
    // 0x38eff0: 0x8c440968  lw          $a0, 0x968($v0)
    ctx->pc = 0x38eff0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2408)));
label_38eff4:
    // 0x38eff4: 0x50830024  beql        $a0, $v1, . + 4 + (0x24 << 2)
label_38eff8:
    if (ctx->pc == 0x38EFF8u) {
        ctx->pc = 0x38EFF8u;
            // 0x38eff8: 0x3c024090  lui         $v0, 0x4090 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16528 << 16));
        ctx->pc = 0x38EFFCu;
        goto label_38effc;
    }
    ctx->pc = 0x38EFF4u;
    {
        const bool branch_taken_0x38eff4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x38eff4) {
            ctx->pc = 0x38EFF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x38EFF4u;
            // 0x38eff8: 0x3c024090  lui         $v0, 0x4090 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16528 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x38F088u;
            goto label_38f088;
        }
    }
    ctx->pc = 0x38EFFCu;
label_38effc:
    // 0x38effc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x38effcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_38f000:
    // 0x38f000: 0x50820013  beql        $a0, $v0, . + 4 + (0x13 << 2)
label_38f004:
    if (ctx->pc == 0x38F004u) {
        ctx->pc = 0x38F004u;
            // 0x38f004: 0x3c0240d0  lui         $v0, 0x40D0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16592 << 16));
        ctx->pc = 0x38F008u;
        goto label_38f008;
    }
    ctx->pc = 0x38F000u;
    {
        const bool branch_taken_0x38f000 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x38f000) {
            ctx->pc = 0x38F004u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x38F000u;
            // 0x38f004: 0x3c0240d0  lui         $v0, 0x40D0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16592 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x38F050u;
            goto label_38f050;
        }
    }
    ctx->pc = 0x38F008u;
label_38f008:
    // 0x38f008: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x38f008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_38f00c:
    // 0x38f00c: 0x50820003  beql        $a0, $v0, . + 4 + (0x3 << 2)
label_38f010:
    if (ctx->pc == 0x38F010u) {
        ctx->pc = 0x38F010u;
            // 0x38f010: 0x3c0240d0  lui         $v0, 0x40D0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16592 << 16));
        ctx->pc = 0x38F014u;
        goto label_38f014;
    }
    ctx->pc = 0x38F00Cu;
    {
        const bool branch_taken_0x38f00c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x38f00c) {
            ctx->pc = 0x38F010u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x38F00Cu;
            // 0x38f010: 0x3c0240d0  lui         $v0, 0x40D0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16592 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x38F01Cu;
            goto label_38f01c;
        }
    }
    ctx->pc = 0x38F014u;
label_38f014:
    // 0x38f014: 0x1000002a  b           . + 4 + (0x2A << 2)
label_38f018:
    if (ctx->pc == 0x38F018u) {
        ctx->pc = 0x38F018u;
            // 0x38f018: 0x3c0240d0  lui         $v0, 0x40D0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16592 << 16));
        ctx->pc = 0x38F01Cu;
        goto label_38f01c;
    }
    ctx->pc = 0x38F014u;
    {
        const bool branch_taken_0x38f014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38F018u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38F014u;
            // 0x38f018: 0x3c0240d0  lui         $v0, 0x40D0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16592 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f014) {
            ctx->pc = 0x38F0C0u;
            goto label_38f0c0;
        }
    }
    ctx->pc = 0x38F01Cu;
label_38f01c:
    // 0x38f01c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x38f01cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_38f020:
    // 0x38f020: 0xc6420034  lwc1        $f2, 0x34($s2)
    ctx->pc = 0x38f020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_38f024:
    // 0x38f024: 0x3c024128  lui         $v0, 0x4128
    ctx->pc = 0x38f024u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16680 << 16));
label_38f028:
    // 0x38f028: 0xc6400030  lwc1        $f0, 0x30($s2)
    ctx->pc = 0x38f028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_38f02c:
    // 0x38f02c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x38f02cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_38f030:
    // 0x38f030: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x38f030u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_38f034:
    // 0x38f034: 0xc6440038  lwc1        $f4, 0x38($s2)
    ctx->pc = 0x38f034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_38f038:
    // 0x38f038: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x38f038u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_38f03c:
    // 0x38f03c: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x38f03cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
label_38f040:
    // 0x38f040: 0xe7a40058  swc1        $f4, 0x58($sp)
    ctx->pc = 0x38f040u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_38f044:
    // 0x38f044: 0xe7a20054  swc1        $f2, 0x54($sp)
    ctx->pc = 0x38f044u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_38f048:
    // 0x38f048: 0x10000029  b           . + 4 + (0x29 << 2)
label_38f04c:
    if (ctx->pc == 0x38F04Cu) {
        ctx->pc = 0x38F04Cu;
            // 0x38f04c: 0xe7a00050  swc1        $f0, 0x50($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
        ctx->pc = 0x38F050u;
        goto label_38f050;
    }
    ctx->pc = 0x38F048u;
    {
        const bool branch_taken_0x38f048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38F04Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38F048u;
            // 0x38f04c: 0xe7a00050  swc1        $f0, 0x50($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f048) {
            ctx->pc = 0x38F0F0u;
            goto label_38f0f0;
        }
    }
    ctx->pc = 0x38F050u;
label_38f050:
    // 0x38f050: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x38f050u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_38f054:
    // 0x38f054: 0x3c024101  lui         $v0, 0x4101
    ctx->pc = 0x38f054u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16641 << 16));
label_38f058:
    // 0x38f058: 0xc6420034  lwc1        $f2, 0x34($s2)
    ctx->pc = 0x38f058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_38f05c:
    // 0x38f05c: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x38f05cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_38f060:
    // 0x38f060: 0xc6400030  lwc1        $f0, 0x30($s2)
    ctx->pc = 0x38f060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_38f064:
    // 0x38f064: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x38f064u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_38f068:
    // 0x38f068: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x38f068u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_38f06c:
    // 0x38f06c: 0xc6440038  lwc1        $f4, 0x38($s2)
    ctx->pc = 0x38f06cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_38f070:
    // 0x38f070: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x38f070u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_38f074:
    // 0x38f074: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x38f074u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
label_38f078:
    // 0x38f078: 0xe7a40058  swc1        $f4, 0x58($sp)
    ctx->pc = 0x38f078u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_38f07c:
    // 0x38f07c: 0xe7a20054  swc1        $f2, 0x54($sp)
    ctx->pc = 0x38f07cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_38f080:
    // 0x38f080: 0x1000001b  b           . + 4 + (0x1B << 2)
label_38f084:
    if (ctx->pc == 0x38F084u) {
        ctx->pc = 0x38F084u;
            // 0x38f084: 0xe7a00050  swc1        $f0, 0x50($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
        ctx->pc = 0x38F088u;
        goto label_38f088;
    }
    ctx->pc = 0x38F080u;
    {
        const bool branch_taken_0x38f080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38F084u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38F080u;
            // 0x38f084: 0xe7a00050  swc1        $f0, 0x50($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f080) {
            ctx->pc = 0x38F0F0u;
            goto label_38f0f0;
        }
    }
    ctx->pc = 0x38F088u;
label_38f088:
    // 0x38f088: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x38f088u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_38f08c:
    // 0x38f08c: 0x3c0240c3  lui         $v0, 0x40C3
    ctx->pc = 0x38f08cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16579 << 16));
label_38f090:
    // 0x38f090: 0xc6420034  lwc1        $f2, 0x34($s2)
    ctx->pc = 0x38f090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_38f094:
    // 0x38f094: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x38f094u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
label_38f098:
    // 0x38f098: 0xc6400030  lwc1        $f0, 0x30($s2)
    ctx->pc = 0x38f098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_38f09c:
    // 0x38f09c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x38f09cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_38f0a0:
    // 0x38f0a0: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x38f0a0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_38f0a4:
    // 0x38f0a4: 0xc6440038  lwc1        $f4, 0x38($s2)
    ctx->pc = 0x38f0a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_38f0a8:
    // 0x38f0a8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x38f0a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_38f0ac:
    // 0x38f0ac: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x38f0acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
label_38f0b0:
    // 0x38f0b0: 0xe7a40058  swc1        $f4, 0x58($sp)
    ctx->pc = 0x38f0b0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_38f0b4:
    // 0x38f0b4: 0xe7a20054  swc1        $f2, 0x54($sp)
    ctx->pc = 0x38f0b4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_38f0b8:
    // 0x38f0b8: 0x1000000d  b           . + 4 + (0xD << 2)
label_38f0bc:
    if (ctx->pc == 0x38F0BCu) {
        ctx->pc = 0x38F0BCu;
            // 0x38f0bc: 0xe7a00050  swc1        $f0, 0x50($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
        ctx->pc = 0x38F0C0u;
        goto label_38f0c0;
    }
    ctx->pc = 0x38F0B8u;
    {
        const bool branch_taken_0x38f0b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38F0BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38F0B8u;
            // 0x38f0bc: 0xe7a00050  swc1        $f0, 0x50($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f0b8) {
            ctx->pc = 0x38F0F0u;
            goto label_38f0f0;
        }
    }
    ctx->pc = 0x38F0C0u;
label_38f0c0:
    // 0x38f0c0: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x38f0c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_38f0c4:
    // 0x38f0c4: 0xc6420034  lwc1        $f2, 0x34($s2)
    ctx->pc = 0x38f0c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_38f0c8:
    // 0x38f0c8: 0x3c024128  lui         $v0, 0x4128
    ctx->pc = 0x38f0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16680 << 16));
label_38f0cc:
    // 0x38f0cc: 0xc6400030  lwc1        $f0, 0x30($s2)
    ctx->pc = 0x38f0ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_38f0d0:
    // 0x38f0d0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x38f0d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_38f0d4:
    // 0x38f0d4: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x38f0d4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_38f0d8:
    // 0x38f0d8: 0xc6440038  lwc1        $f4, 0x38($s2)
    ctx->pc = 0x38f0d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_38f0dc:
    // 0x38f0dc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x38f0dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_38f0e0:
    // 0x38f0e0: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x38f0e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
label_38f0e4:
    // 0x38f0e4: 0xe7a40058  swc1        $f4, 0x58($sp)
    ctx->pc = 0x38f0e4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_38f0e8:
    // 0x38f0e8: 0xe7a20054  swc1        $f2, 0x54($sp)
    ctx->pc = 0x38f0e8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_38f0ec:
    // 0x38f0ec: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x38f0ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_38f0f0:
    // 0x38f0f0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x38f0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_38f0f4:
    // 0x38f0f4: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x38f0f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_38f0f8:
    // 0x38f0f8: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x38f0f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_38f0fc:
    // 0x38f0fc: 0xc0a7a88  jal         func_29EA20
label_38f100:
    if (ctx->pc == 0x38F100u) {
        ctx->pc = 0x38F100u;
            // 0x38f100: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->pc = 0x38F104u;
        goto label_38f104;
    }
    ctx->pc = 0x38F0FCu;
    SET_GPR_U32(ctx, 31, 0x38F104u);
    ctx->pc = 0x38F100u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38F0FCu;
            // 0x38f100: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38F104u; }
        if (ctx->pc != 0x38F104u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38F104u; }
        if (ctx->pc != 0x38F104u) { return; }
    }
    ctx->pc = 0x38F104u;
label_38f104:
    // 0x38f104: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x38f104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_38f108:
    // 0x38f108: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x38f108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_38f10c:
    // 0x38f10c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_38f110:
    if (ctx->pc == 0x38F110u) {
        ctx->pc = 0x38F110u;
            // 0x38f110: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x38F114u;
        goto label_38f114;
    }
    ctx->pc = 0x38F10Cu;
    {
        const bool branch_taken_0x38f10c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x38F110u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38F10Cu;
            // 0x38f110: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f10c) {
            ctx->pc = 0x38F124u;
            goto label_38f124;
        }
    }
    ctx->pc = 0x38F114u;
label_38f114:
    // 0x38f114: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x38f114u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_38f118:
    // 0x38f118: 0xc0804bc  jal         func_2012F0
label_38f11c:
    if (ctx->pc == 0x38F11Cu) {
        ctx->pc = 0x38F11Cu;
            // 0x38f11c: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x38F120u;
        goto label_38f120;
    }
    ctx->pc = 0x38F118u;
    SET_GPR_U32(ctx, 31, 0x38F120u);
    ctx->pc = 0x38F11Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38F118u;
            // 0x38f11c: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38F120u; }
        if (ctx->pc != 0x38F120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38F120u; }
        if (ctx->pc != 0x38F120u) { return; }
    }
    ctx->pc = 0x38F120u;
label_38f120:
    // 0x38f120: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x38f120u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_38f124:
    // 0x38f124: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x38f124u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
label_38f128:
    // 0x38f128: 0xafa40064  sw          $a0, 0x64($sp)
    ctx->pc = 0x38f128u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 4));
label_38f12c:
    // 0x38f12c: 0x3449cccd  ori         $t1, $v0, 0xCCCD
    ctx->pc = 0x38f12cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_38f130:
    // 0x38f130: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x38f130u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_38f134:
    // 0x38f134: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x38f134u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_38f138:
    // 0x38f138: 0x3c083e80  lui         $t0, 0x3E80
    ctx->pc = 0x38f138u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16000 << 16));
label_38f13c:
    // 0x38f13c: 0xc440c910  lwc1        $f0, -0x36F0($v0)
    ctx->pc = 0x38f13cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_38f140:
    // 0x38f140: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x38f140u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_38f144:
    // 0x38f144: 0xc6430018  lwc1        $f3, 0x18($s2)
    ctx->pc = 0x38f144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_38f148:
    // 0x38f148: 0x24050220  addiu       $a1, $zero, 0x220
    ctx->pc = 0x38f148u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_38f14c:
    // 0x38f14c: 0xc6420014  lwc1        $f2, 0x14($s2)
    ctx->pc = 0x38f14cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_38f150:
    // 0x38f150: 0x2406002b  addiu       $a2, $zero, 0x2B
    ctx->pc = 0x38f150u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_38f154:
    // 0x38f154: 0xc6410010  lwc1        $f1, 0x10($s2)
    ctx->pc = 0x38f154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_38f158:
    // 0x38f158: 0x3c0200e0  lui         $v0, 0xE0
    ctx->pc = 0x38f158u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)224 << 16));
label_38f15c:
    // 0x38f15c: 0x34430040  ori         $v1, $v0, 0x40
    ctx->pc = 0x38f15cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
label_38f160:
    // 0x38f160: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x38f160u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_38f164:
    // 0x38f164: 0xe7a10070  swc1        $f1, 0x70($sp)
    ctx->pc = 0x38f164u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_38f168:
    // 0x38f168: 0xafa0007c  sw          $zero, 0x7C($sp)
    ctx->pc = 0x38f168u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
label_38f16c:
    // 0x38f16c: 0xe7a20074  swc1        $f2, 0x74($sp)
    ctx->pc = 0x38f16cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_38f170:
    // 0x38f170: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x38f170u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_38f174:
    // 0x38f174: 0xe7a30078  swc1        $f3, 0x78($sp)
    ctx->pc = 0x38f174u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_38f178:
    // 0x38f178: 0xc644002c  lwc1        $f4, 0x2C($s2)
    ctx->pc = 0x38f178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_38f17c:
    // 0x38f17c: 0xc6430028  lwc1        $f3, 0x28($s2)
    ctx->pc = 0x38f17cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_38f180:
    // 0x38f180: 0xc6420024  lwc1        $f2, 0x24($s2)
    ctx->pc = 0x38f180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_38f184:
    // 0x38f184: 0xc6410020  lwc1        $f1, 0x20($s2)
    ctx->pc = 0x38f184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_38f188:
    // 0x38f188: 0xe7a10080  swc1        $f1, 0x80($sp)
    ctx->pc = 0x38f188u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_38f18c:
    // 0x38f18c: 0xafa900f8  sw          $t1, 0xF8($sp)
    ctx->pc = 0x38f18cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 9));
label_38f190:
    // 0x38f190: 0xe7a20084  swc1        $f2, 0x84($sp)
    ctx->pc = 0x38f190u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_38f194:
    // 0x38f194: 0xafa800fc  sw          $t0, 0xFC($sp)
    ctx->pc = 0x38f194u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 8));
label_38f198:
    // 0x38f198: 0xe7a30088  swc1        $f3, 0x88($sp)
    ctx->pc = 0x38f198u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_38f19c:
    // 0x38f19c: 0xa3a70110  sb          $a3, 0x110($sp)
    ctx->pc = 0x38f19cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 272), (uint8_t)GPR_U32(ctx, 7));
label_38f1a0:
    // 0x38f1a0: 0xe7a4008c  swc1        $f4, 0x8C($sp)
    ctx->pc = 0x38f1a0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
label_38f1a4:
    // 0x38f1a4: 0xafa30060  sw          $v1, 0x60($sp)
    ctx->pc = 0x38f1a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 3));
label_38f1a8:
    // 0x38f1a8: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x38f1a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_38f1ac:
    // 0x38f1ac: 0xc0a7a88  jal         func_29EA20
label_38f1b0:
    if (ctx->pc == 0x38F1B0u) {
        ctx->pc = 0x38F1B0u;
            // 0x38f1b0: 0xafa000f4  sw          $zero, 0xF4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 0));
        ctx->pc = 0x38F1B4u;
        goto label_38f1b4;
    }
    ctx->pc = 0x38F1ACu;
    SET_GPR_U32(ctx, 31, 0x38F1B4u);
    ctx->pc = 0x38F1B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38F1ACu;
            // 0x38f1b0: 0xafa000f4  sw          $zero, 0xF4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38F1B4u; }
        if (ctx->pc != 0x38F1B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38F1B4u; }
        if (ctx->pc != 0x38F1B4u) { return; }
    }
    ctx->pc = 0x38F1B4u;
label_38f1b4:
    // 0x38f1b4: 0x24030220  addiu       $v1, $zero, 0x220
    ctx->pc = 0x38f1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_38f1b8:
    // 0x38f1b8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x38f1b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_38f1bc:
    // 0x38f1bc: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
label_38f1c0:
    if (ctx->pc == 0x38F1C0u) {
        ctx->pc = 0x38F1C0u;
            // 0x38f1c0: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x38F1C4u;
        goto label_38f1c4;
    }
    ctx->pc = 0x38F1BCu;
    {
        const bool branch_taken_0x38f1bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x38F1C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38F1BCu;
            // 0x38f1c0: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f1bc) {
            ctx->pc = 0x38F20Cu;
            goto label_38f20c;
        }
    }
    ctx->pc = 0x38F1C4u;
label_38f1c4:
    // 0x38f1c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38f1c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38f1c8:
    // 0x38f1c8: 0xc088ef4  jal         func_223BD0
label_38f1cc:
    if (ctx->pc == 0x38F1CCu) {
        ctx->pc = 0x38F1CCu;
            // 0x38f1cc: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x38F1D0u;
        goto label_38f1d0;
    }
    ctx->pc = 0x38F1C8u;
    SET_GPR_U32(ctx, 31, 0x38F1D0u);
    ctx->pc = 0x38F1CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38F1C8u;
            // 0x38f1cc: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x223BD0u;
    if (runtime->hasFunction(0x223BD0u)) {
        auto targetFn = runtime->lookupFunction(0x223BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38F1D0u; }
        if (ctx->pc != 0x38F1D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00223BD0_0x223bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38F1D0u; }
        if (ctx->pc != 0x38F1D0u) { return; }
    }
    ctx->pc = 0x38F1D0u;
label_38f1d0:
    // 0x38f1d0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x38f1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_38f1d4:
    // 0x38f1d4: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x38f1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_38f1d8:
    // 0x38f1d8: 0x24422240  addiu       $v0, $v0, 0x2240
    ctx->pc = 0x38f1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8768));
label_38f1dc:
    // 0x38f1dc: 0x24632260  addiu       $v1, $v1, 0x2260
    ctx->pc = 0x38f1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8800));
label_38f1e0:
    // 0x38f1e0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x38f1e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_38f1e4:
    // 0x38f1e4: 0xae000200  sw          $zero, 0x200($s0)
    ctx->pc = 0x38f1e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
label_38f1e8:
    // 0x38f1e8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x38f1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_38f1ec:
    // 0x38f1ec: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x38f1ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_38f1f0:
    // 0x38f1f0: 0xae000210  sw          $zero, 0x210($s0)
    ctx->pc = 0x38f1f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 0));
label_38f1f4:
    // 0x38f1f4: 0xae000214  sw          $zero, 0x214($s0)
    ctx->pc = 0x38f1f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 0));
label_38f1f8:
    // 0x38f1f8: 0xae12000c  sw          $s2, 0xC($s0)
    ctx->pc = 0x38f1f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 18));
label_38f1fc:
    // 0x38f1fc: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x38f1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_38f200:
    // 0x38f200: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x38f200u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_38f204:
    // 0x38f204: 0xc088b38  jal         func_222CE0
label_38f208:
    if (ctx->pc == 0x38F208u) {
        ctx->pc = 0x38F208u;
            // 0x38f208: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38F20Cu;
        goto label_38f20c;
    }
    ctx->pc = 0x38F204u;
    SET_GPR_U32(ctx, 31, 0x38F20Cu);
    ctx->pc = 0x38F208u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38F204u;
            // 0x38f208: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222CE0u;
    if (runtime->hasFunction(0x222CE0u)) {
        auto targetFn = runtime->lookupFunction(0x222CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38F20Cu; }
        if (ctx->pc != 0x38F20Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222CE0_0x222ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38F20Cu; }
        if (ctx->pc != 0x38F20Cu) { return; }
    }
    ctx->pc = 0x38F20Cu;
label_38f20c:
    // 0x38f20c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38f20cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38f210:
    // 0x38f210: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x38f210u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_38f214:
    // 0x38f214: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x38f214u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_38f218:
    // 0x38f218: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x38f218u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38f21c:
    // 0x38f21c: 0xc08914c  jal         func_224530
label_38f220:
    if (ctx->pc == 0x38F220u) {
        ctx->pc = 0x38F220u;
            // 0x38f220: 0xae000200  sw          $zero, 0x200($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
        ctx->pc = 0x38F224u;
        goto label_38f224;
    }
    ctx->pc = 0x38F21Cu;
    SET_GPR_U32(ctx, 31, 0x38F224u);
    ctx->pc = 0x38F220u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38F21Cu;
            // 0x38f220: 0xae000200  sw          $zero, 0x200($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38F224u; }
        if (ctx->pc != 0x38F224u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38F224u; }
        if (ctx->pc != 0x38F224u) { return; }
    }
    ctx->pc = 0x38F224u;
label_38f224:
    // 0x38f224: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x38f224u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_38f228:
    // 0x38f228: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x38f228u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38f22c:
    // 0x38f22c: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x38f22cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_38f230:
    // 0x38f230: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x38f230u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_38f234:
    // 0x38f234: 0xc08c164  jal         func_230590
label_38f238:
    if (ctx->pc == 0x38F238u) {
        ctx->pc = 0x38F238u;
            // 0x38f238: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x38F23Cu;
        goto label_38f23c;
    }
    ctx->pc = 0x38F234u;
    SET_GPR_U32(ctx, 31, 0x38F23Cu);
    ctx->pc = 0x38F238u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38F234u;
            // 0x38f238: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x230590u;
    if (runtime->hasFunction(0x230590u)) {
        auto targetFn = runtime->lookupFunction(0x230590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38F23Cu; }
        if (ctx->pc != 0x38F23Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00230590_0x230590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38F23Cu; }
        if (ctx->pc != 0x38F23Cu) { return; }
    }
    ctx->pc = 0x38F23Cu;
label_38f23c:
    // 0x38f23c: 0xae500050  sw          $s0, 0x50($s2)
    ctx->pc = 0x38f23cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 16));
label_38f240:
    // 0x38f240: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x38f240u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_38f244:
    // 0x38f244: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x38f244u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_38f248:
    // 0x38f248: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x38f248u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_38f24c:
    // 0x38f24c: 0xc0a7a88  jal         func_29EA20
label_38f250:
    if (ctx->pc == 0x38F250u) {
        ctx->pc = 0x38F250u;
            // 0x38f250: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->pc = 0x38F254u;
        goto label_38f254;
    }
    ctx->pc = 0x38F24Cu;
    SET_GPR_U32(ctx, 31, 0x38F254u);
    ctx->pc = 0x38F250u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38F24Cu;
            // 0x38f250: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38F254u; }
        if (ctx->pc != 0x38F254u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38F254u; }
        if (ctx->pc != 0x38F254u) { return; }
    }
    ctx->pc = 0x38F254u;
label_38f254:
    // 0x38f254: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x38f254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_38f258:
    // 0x38f258: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x38f258u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_38f25c:
    // 0x38f25c: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
label_38f260:
    if (ctx->pc == 0x38F260u) {
        ctx->pc = 0x38F260u;
            // 0x38f260: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x38F264u;
        goto label_38f264;
    }
    ctx->pc = 0x38F25Cu;
    {
        const bool branch_taken_0x38f25c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x38F260u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38F25Cu;
            // 0x38f260: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f25c) {
            ctx->pc = 0x38F280u;
            goto label_38f280;
        }
    }
    ctx->pc = 0x38F264u;
label_38f264:
    // 0x38f264: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x38f264u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_38f268:
    // 0x38f268: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x38f268u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38f26c:
    // 0x38f26c: 0xc0869d0  jal         func_21A740
label_38f270:
    if (ctx->pc == 0x38F270u) {
        ctx->pc = 0x38F270u;
            // 0x38f270: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38F274u;
        goto label_38f274;
    }
    ctx->pc = 0x38F26Cu;
    SET_GPR_U32(ctx, 31, 0x38F274u);
    ctx->pc = 0x38F270u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38F26Cu;
            // 0x38f270: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21A740u;
    if (runtime->hasFunction(0x21A740u)) {
        auto targetFn = runtime->lookupFunction(0x21A740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38F274u; }
        if (ctx->pc != 0x38F274u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021A740_0x21a740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38F274u; }
        if (ctx->pc != 0x38F274u) { return; }
    }
    ctx->pc = 0x38F274u;
label_38f274:
    // 0x38f274: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x38f274u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_38f278:
    // 0x38f278: 0x24422210  addiu       $v0, $v0, 0x2210
    ctx->pc = 0x38f278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8720));
label_38f27c:
    // 0x38f27c: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x38f27cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_38f280:
    // 0x38f280: 0xae130210  sw          $s3, 0x210($s0)
    ctx->pc = 0x38f280u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 19));
label_38f284:
    // 0x38f284: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x38f284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_38f288:
    // 0x38f288: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x38f288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_38f28c:
    // 0x38f28c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x38f28cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_38f290:
    // 0x38f290: 0xc08c650  jal         func_231940
label_38f294:
    if (ctx->pc == 0x38F294u) {
        ctx->pc = 0x38F294u;
            // 0x38f294: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38F298u;
        goto label_38f298;
    }
    ctx->pc = 0x38F290u;
    SET_GPR_U32(ctx, 31, 0x38F298u);
    ctx->pc = 0x38F294u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38F290u;
            // 0x38f294: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231940u;
    if (runtime->hasFunction(0x231940u)) {
        auto targetFn = runtime->lookupFunction(0x231940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38F298u; }
        if (ctx->pc != 0x38F298u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231940_0x231940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38F298u; }
        if (ctx->pc != 0x38F298u) { return; }
    }
    ctx->pc = 0x38F298u;
label_38f298:
    // 0x38f298: 0x96230004  lhu         $v1, 0x4($s1)
    ctx->pc = 0x38f298u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
label_38f29c:
    // 0x38f29c: 0x50600010  beql        $v1, $zero, . + 4 + (0x10 << 2)
label_38f2a0:
    if (ctx->pc == 0x38F2A0u) {
        ctx->pc = 0x38F2A0u;
            // 0x38f2a0: 0x8e4700b0  lw          $a3, 0xB0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
        ctx->pc = 0x38F2A4u;
        goto label_38f2a4;
    }
    ctx->pc = 0x38F29Cu;
    {
        const bool branch_taken_0x38f29c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x38f29c) {
            ctx->pc = 0x38F2A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x38F29Cu;
            // 0x38f2a0: 0x8e4700b0  lw          $a3, 0xB0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x38F2E0u;
            goto label_38f2e0;
        }
    }
    ctx->pc = 0x38F2A4u;
label_38f2a4:
    // 0x38f2a4: 0x86230006  lh          $v1, 0x6($s1)
    ctx->pc = 0x38f2a4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
label_38f2a8:
    // 0x38f2a8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x38f2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_38f2ac:
    // 0x38f2ac: 0xa6230006  sh          $v1, 0x6($s1)
    ctx->pc = 0x38f2acu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 6), (uint16_t)GPR_U32(ctx, 3));
label_38f2b0:
    // 0x38f2b0: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x38f2b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_38f2b4:
    // 0x38f2b4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x38f2b4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_38f2b8:
    // 0x38f2b8: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
label_38f2bc:
    if (ctx->pc == 0x38F2BCu) {
        ctx->pc = 0x38F2C0u;
        goto label_38f2c0;
    }
    ctx->pc = 0x38F2B8u;
    {
        const bool branch_taken_0x38f2b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x38f2b8) {
            ctx->pc = 0x38F2DCu;
            goto label_38f2dc;
        }
    }
    ctx->pc = 0x38F2C0u;
label_38f2c0:
    // 0x38f2c0: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_38f2c4:
    if (ctx->pc == 0x38F2C4u) {
        ctx->pc = 0x38F2C8u;
        goto label_38f2c8;
    }
    ctx->pc = 0x38F2C0u;
    {
        const bool branch_taken_0x38f2c0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x38f2c0) {
            ctx->pc = 0x38F2DCu;
            goto label_38f2dc;
        }
    }
    ctx->pc = 0x38F2C8u;
label_38f2c8:
    // 0x38f2c8: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x38f2c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_38f2cc:
    // 0x38f2cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x38f2ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_38f2d0:
    // 0x38f2d0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x38f2d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_38f2d4:
    // 0x38f2d4: 0x320f809  jalr        $t9
label_38f2d8:
    if (ctx->pc == 0x38F2D8u) {
        ctx->pc = 0x38F2D8u;
            // 0x38f2d8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x38F2DCu;
        goto label_38f2dc;
    }
    ctx->pc = 0x38F2D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x38F2DCu);
        ctx->pc = 0x38F2D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38F2D4u;
            // 0x38f2d8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x38F2DCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x38F2DCu; }
            if (ctx->pc != 0x38F2DCu) { return; }
        }
        }
    }
    ctx->pc = 0x38F2DCu;
label_38f2dc:
    // 0x38f2dc: 0x8e4700b0  lw          $a3, 0xB0($s2)
    ctx->pc = 0x38f2dcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
label_38f2e0:
    // 0x38f2e0: 0x2406ffdf  addiu       $a2, $zero, -0x21
    ctx->pc = 0x38f2e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
label_38f2e4:
    // 0x38f2e4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x38f2e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_38f2e8:
    // 0x38f2e8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x38f2e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_38f2ec:
    // 0x38f2ec: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x38f2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_38f2f0:
    // 0x38f2f0: 0xe63024  and         $a2, $a3, $a2
    ctx->pc = 0x38f2f0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & GPR_U64(ctx, 6));
label_38f2f4:
    // 0x38f2f4: 0xae4600b0  sw          $a2, 0xB0($s2)
    ctx->pc = 0x38f2f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 176), GPR_U32(ctx, 6));
label_38f2f8:
    // 0x38f2f8: 0xa2450064  sb          $a1, 0x64($s2)
    ctx->pc = 0x38f2f8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 100), (uint8_t)GPR_U32(ctx, 5));
label_38f2fc:
    // 0x38f2fc: 0xa2440065  sb          $a0, 0x65($s2)
    ctx->pc = 0x38f2fcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 101), (uint8_t)GPR_U32(ctx, 4));
label_38f300:
    // 0x38f300: 0xa2430068  sb          $v1, 0x68($s2)
    ctx->pc = 0x38f300u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 104), (uint8_t)GPR_U32(ctx, 3));
label_38f304:
    // 0x38f304: 0xa2440069  sb          $a0, 0x69($s2)
    ctx->pc = 0x38f304u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 105), (uint8_t)GPR_U32(ctx, 4));
label_38f308:
    // 0x38f308: 0xa243006a  sb          $v1, 0x6A($s2)
    ctx->pc = 0x38f308u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 106), (uint8_t)GPR_U32(ctx, 3));
label_38f30c:
    // 0x38f30c: 0xa243006b  sb          $v1, 0x6B($s2)
    ctx->pc = 0x38f30cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 107), (uint8_t)GPR_U32(ctx, 3));
label_38f310:
    // 0x38f310: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x38f310u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_38f314:
    // 0x38f314: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x38f314u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_38f318:
    // 0x38f318: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x38f318u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_38f31c:
    // 0x38f31c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x38f31cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_38f320:
    // 0x38f320: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x38f320u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_38f324:
    // 0x38f324: 0x3e00008  jr          $ra
label_38f328:
    if (ctx->pc == 0x38F328u) {
        ctx->pc = 0x38F328u;
            // 0x38f328: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->pc = 0x38F32Cu;
        goto label_38f32c;
    }
    ctx->pc = 0x38F324u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38F328u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38F324u;
            // 0x38f328: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x38F32Cu;
label_38f32c:
    // 0x38f32c: 0x0  nop
    ctx->pc = 0x38f32cu;
    // NOP
label_38f330:
    // 0x38f330: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x38f330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_38f334:
    // 0x38f334: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x38f334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_38f338:
    // 0x38f338: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x38f338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_38f33c:
    // 0x38f33c: 0xc0e3580  jal         func_38D600
label_38f340:
    if (ctx->pc == 0x38F340u) {
        ctx->pc = 0x38F340u;
            // 0x38f340: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38F344u;
        goto label_38f344;
    }
    ctx->pc = 0x38F33Cu;
    SET_GPR_U32(ctx, 31, 0x38F344u);
    ctx->pc = 0x38F340u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38F33Cu;
            // 0x38f340: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38D600u;
    if (runtime->hasFunction(0x38D600u)) {
        auto targetFn = runtime->lookupFunction(0x38D600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38F344u; }
        if (ctx->pc != 0x38F344u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038D600_0x38d600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38F344u; }
        if (ctx->pc != 0x38F344u) { return; }
    }
    ctx->pc = 0x38F344u;
label_38f344:
    // 0x38f344: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x38f344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_38f348:
    // 0x38f348: 0x3c054234  lui         $a1, 0x4234
    ctx->pc = 0x38f348u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16948 << 16));
label_38f34c:
    // 0x38f34c: 0xae03008c  sw          $v1, 0x8C($s0)
    ctx->pc = 0x38f34cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 3));
label_38f350:
    // 0x38f350: 0x3c044396  lui         $a0, 0x4396
    ctx->pc = 0x38f350u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17302 << 16));
label_38f354:
    // 0x38f354: 0xae050070  sw          $a1, 0x70($s0)
    ctx->pc = 0x38f354u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 5));
label_38f358:
    // 0x38f358: 0x2403f9df  addiu       $v1, $zero, -0x621
    ctx->pc = 0x38f358u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965727));
label_38f35c:
    // 0x38f35c: 0xae050078  sw          $a1, 0x78($s0)
    ctx->pc = 0x38f35cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 5));
label_38f360:
    // 0x38f360: 0xae040080  sw          $a0, 0x80($s0)
    ctx->pc = 0x38f360u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 4));
label_38f364:
    // 0x38f364: 0x8e0400b0  lw          $a0, 0xB0($s0)
    ctx->pc = 0x38f364u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_38f368:
    // 0x38f368: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x38f368u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_38f36c:
    // 0x38f36c: 0x34630600  ori         $v1, $v1, 0x600
    ctx->pc = 0x38f36cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1536);
label_38f370:
    // 0x38f370: 0xae0300b0  sw          $v1, 0xB0($s0)
    ctx->pc = 0x38f370u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 3));
label_38f374:
    // 0x38f374: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x38f374u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_38f378:
    // 0x38f378: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x38f378u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_38f37c:
    // 0x38f37c: 0x3e00008  jr          $ra
label_38f380:
    if (ctx->pc == 0x38F380u) {
        ctx->pc = 0x38F380u;
            // 0x38f380: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x38F384u;
        goto label_38f384;
    }
    ctx->pc = 0x38F37Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38F380u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38F37Cu;
            // 0x38f380: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x38F384u;
label_38f384:
    // 0x38f384: 0x0  nop
    ctx->pc = 0x38f384u;
    // NOP
label_38f388:
    // 0x38f388: 0x0  nop
    ctx->pc = 0x38f388u;
    // NOP
label_38f38c:
    // 0x38f38c: 0x0  nop
    ctx->pc = 0x38f38cu;
    // NOP
label_38f390:
    // 0x38f390: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x38f390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_38f394:
    // 0x38f394: 0x3c0200e0  lui         $v0, 0xE0
    ctx->pc = 0x38f394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)224 << 16));
label_38f398:
    // 0x38f398: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x38f398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_38f39c:
    // 0x38f39c: 0x34430040  ori         $v1, $v0, 0x40
    ctx->pc = 0x38f39cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
label_38f3a0:
    // 0x38f3a0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x38f3a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_38f3a4:
    // 0x38f3a4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x38f3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_38f3a8:
    // 0x38f3a8: 0x8c850050  lw          $a1, 0x50($a0)
    ctx->pc = 0x38f3a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_38f3ac:
    // 0x38f3ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x38f3acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_38f3b0:
    // 0x38f3b0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x38f3b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38f3b4:
    // 0x38f3b4: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x38f3b4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
label_38f3b8:
    // 0x38f3b8: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x38f3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_38f3bc:
    // 0x38f3bc: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x38f3bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_38f3c0:
    // 0x38f3c0: 0xc08bff0  jal         func_22FFC0
label_38f3c4:
    if (ctx->pc == 0x38F3C4u) {
        ctx->pc = 0x38F3C4u;
            // 0x38f3c4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38F3C8u;
        goto label_38f3c8;
    }
    ctx->pc = 0x38F3C0u;
    SET_GPR_U32(ctx, 31, 0x38F3C8u);
    ctx->pc = 0x38F3C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38F3C0u;
            // 0x38f3c4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38F3C8u; }
        if (ctx->pc != 0x38F3C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38F3C8u; }
        if (ctx->pc != 0x38F3C8u) { return; }
    }
    ctx->pc = 0x38F3C8u;
label_38f3c8:
    // 0x38f3c8: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x38f3c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_38f3cc:
    // 0x38f3cc: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x38f3ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_38f3d0:
    // 0x38f3d0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x38f3d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_38f3d4:
    // 0x38f3d4: 0xc08914c  jal         func_224530
label_38f3d8:
    if (ctx->pc == 0x38F3D8u) {
        ctx->pc = 0x38F3D8u;
            // 0x38f3d8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38F3DCu;
        goto label_38f3dc;
    }
    ctx->pc = 0x38F3D4u;
    SET_GPR_U32(ctx, 31, 0x38F3DCu);
    ctx->pc = 0x38F3D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38F3D4u;
            // 0x38f3d8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38F3DCu; }
        if (ctx->pc != 0x38F3DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38F3DCu; }
        if (ctx->pc != 0x38F3DCu) { return; }
    }
    ctx->pc = 0x38F3DCu;
label_38f3dc:
    // 0x38f3dc: 0xc0e393c  jal         func_38E4F0
label_38f3e0:
    if (ctx->pc == 0x38F3E0u) {
        ctx->pc = 0x38F3E0u;
            // 0x38f3e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38F3E4u;
        goto label_38f3e4;
    }
    ctx->pc = 0x38F3DCu;
    SET_GPR_U32(ctx, 31, 0x38F3E4u);
    ctx->pc = 0x38F3E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38F3DCu;
            // 0x38f3e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38E4F0u;
    if (runtime->hasFunction(0x38E4F0u)) {
        auto targetFn = runtime->lookupFunction(0x38E4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38F3E4u; }
        if (ctx->pc != 0x38F3E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038E4F0_0x38e4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38F3E4u; }
        if (ctx->pc != 0x38F3E4u) { return; }
    }
    ctx->pc = 0x38F3E4u;
label_38f3e4:
    // 0x38f3e4: 0x8e050050  lw          $a1, 0x50($s0)
    ctx->pc = 0x38f3e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_38f3e8:
    // 0x38f3e8: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x38f3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
label_38f3ec:
    // 0x38f3ec: 0x3464cccd  ori         $a0, $v1, 0xCCCD
    ctx->pc = 0x38f3ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_38f3f0:
    // 0x38f3f0: 0xaca0015c  sw          $zero, 0x15C($a1)
    ctx->pc = 0x38f3f0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 348), GPR_U32(ctx, 0));
label_38f3f4:
    // 0x38f3f4: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x38f3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_38f3f8:
    // 0x38f3f8: 0xac640160  sw          $a0, 0x160($v1)
    ctx->pc = 0x38f3f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 352), GPR_U32(ctx, 4));
label_38f3fc:
    // 0x38f3fc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x38f3fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_38f400:
    // 0x38f400: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x38f400u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_38f404:
    // 0x38f404: 0x3e00008  jr          $ra
label_38f408:
    if (ctx->pc == 0x38F408u) {
        ctx->pc = 0x38F408u;
            // 0x38f408: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x38F40Cu;
        goto label_38f40c;
    }
    ctx->pc = 0x38F404u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38F408u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38F404u;
            // 0x38f408: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x38F40Cu;
label_38f40c:
    // 0x38f40c: 0x0  nop
    ctx->pc = 0x38f40cu;
    // NOP
label_38f410:
    // 0x38f410: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x38f410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_38f414:
    // 0x38f414: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x38f414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_38f418:
    // 0x38f418: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x38f418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_38f41c:
    // 0x38f41c: 0xc0aeebc  jal         func_2BBAF0
label_38f420:
    if (ctx->pc == 0x38F420u) {
        ctx->pc = 0x38F420u;
            // 0x38f420: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38F424u;
        goto label_38f424;
    }
    ctx->pc = 0x38F41Cu;
    SET_GPR_U32(ctx, 31, 0x38F424u);
    ctx->pc = 0x38F420u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38F41Cu;
            // 0x38f420: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBAF0u;
    if (runtime->hasFunction(0x2BBAF0u)) {
        auto targetFn = runtime->lookupFunction(0x2BBAF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38F424u; }
        if (ctx->pc != 0x38F424u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBAF0_0x2bbaf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38F424u; }
        if (ctx->pc != 0x38F424u) { return; }
    }
    ctx->pc = 0x38F424u;
label_38f424:
    // 0x38f424: 0xc0aeeb4  jal         func_2BBAD0
label_38f428:
    if (ctx->pc == 0x38F428u) {
        ctx->pc = 0x38F428u;
            // 0x38f428: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->pc = 0x38F42Cu;
        goto label_38f42c;
    }
    ctx->pc = 0x38F424u;
    SET_GPR_U32(ctx, 31, 0x38F42Cu);
    ctx->pc = 0x38F428u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38F424u;
            // 0x38f428: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBAD0u;
    if (runtime->hasFunction(0x2BBAD0u)) {
        auto targetFn = runtime->lookupFunction(0x2BBAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38F42Cu; }
        if (ctx->pc != 0x38F42Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBAD0_0x2bbad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38F42Cu; }
        if (ctx->pc != 0x38F42Cu) { return; }
    }
    ctx->pc = 0x38F42Cu;
label_38f42c:
    // 0x38f42c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x38f42cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_38f430:
    // 0x38f430: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x38f430u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_38f434:
    // 0x38f434: 0x24632290  addiu       $v1, $v1, 0x2290
    ctx->pc = 0x38f434u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8848));
label_38f438:
    // 0x38f438: 0x244222d0  addiu       $v0, $v0, 0x22D0
    ctx->pc = 0x38f438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8912));
label_38f43c:
    // 0x38f43c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x38f43cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_38f440:
    // 0x38f440: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x38f440u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
label_38f444:
    // 0x38f444: 0xc0aeea4  jal         func_2BBA90
label_38f448:
    if (ctx->pc == 0x38F448u) {
        ctx->pc = 0x38F448u;
            // 0x38f448: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->pc = 0x38F44Cu;
        goto label_38f44c;
    }
    ctx->pc = 0x38F444u;
    SET_GPR_U32(ctx, 31, 0x38F44Cu);
    ctx->pc = 0x38F448u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38F444u;
            // 0x38f448: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBA90u;
    if (runtime->hasFunction(0x2BBA90u)) {
        auto targetFn = runtime->lookupFunction(0x2BBA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38F44Cu; }
        if (ctx->pc != 0x38F44Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBA90_0x2bba90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38F44Cu; }
        if (ctx->pc != 0x38F44Cu) { return; }
    }
    ctx->pc = 0x38F44Cu;
label_38f44c:
    // 0x38f44c: 0xc0aee8c  jal         func_2BBA30
label_38f450:
    if (ctx->pc == 0x38F450u) {
        ctx->pc = 0x38F450u;
            // 0x38f450: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->pc = 0x38F454u;
        goto label_38f454;
    }
    ctx->pc = 0x38F44Cu;
    SET_GPR_U32(ctx, 31, 0x38F454u);
    ctx->pc = 0x38F450u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38F44Cu;
            // 0x38f450: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBA30u;
    if (runtime->hasFunction(0x2BBA30u)) {
        auto targetFn = runtime->lookupFunction(0x2BBA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38F454u; }
        if (ctx->pc != 0x38F454u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBA30_0x2bba30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38F454u; }
        if (ctx->pc != 0x38F454u) { return; }
    }
    ctx->pc = 0x38F454u;
label_38f454:
    // 0x38f454: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x38f454u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
label_38f458:
    // 0x38f458: 0x24050073  addiu       $a1, $zero, 0x73
    ctx->pc = 0x38f458u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
label_38f45c:
    // 0x38f45c: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x38f45cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
label_38f460:
    // 0x38f460: 0x3c0442b4  lui         $a0, 0x42B4
    ctx->pc = 0x38f460u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17076 << 16));
label_38f464:
    // 0x38f464: 0xae0000a4  sw          $zero, 0xA4($s0)
    ctx->pc = 0x38f464u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 0));
label_38f468:
    // 0x38f468: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x38f468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_38f46c:
    // 0x38f46c: 0xae0000a8  sw          $zero, 0xA8($s0)
    ctx->pc = 0x38f46cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
label_38f470:
    // 0x38f470: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x38f470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_38f474:
    // 0x38f474: 0xae0000ac  sw          $zero, 0xAC($s0)
    ctx->pc = 0x38f474u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 0));
label_38f478:
    // 0x38f478: 0xae0500b0  sw          $a1, 0xB0($s0)
    ctx->pc = 0x38f478u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 5));
label_38f47c:
    // 0x38f47c: 0xae0000b4  sw          $zero, 0xB4($s0)
    ctx->pc = 0x38f47cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
label_38f480:
    // 0x38f480: 0xae0000b8  sw          $zero, 0xB8($s0)
    ctx->pc = 0x38f480u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 0));
label_38f484:
    // 0x38f484: 0xae0000c0  sw          $zero, 0xC0($s0)
    ctx->pc = 0x38f484u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 0));
label_38f488:
    // 0x38f488: 0xae0400c4  sw          $a0, 0xC4($s0)
    ctx->pc = 0x38f488u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 4));
label_38f48c:
    // 0x38f48c: 0xae0300c8  sw          $v1, 0xC8($s0)
    ctx->pc = 0x38f48cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 3));
label_38f490:
    // 0x38f490: 0xc0775b8  jal         func_1DD6E0
label_38f494:
    if (ctx->pc == 0x38F494u) {
        ctx->pc = 0x38F494u;
            // 0x38f494: 0xa20200cc  sb          $v0, 0xCC($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 204), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x38F498u;
        goto label_38f498;
    }
    ctx->pc = 0x38F490u;
    SET_GPR_U32(ctx, 31, 0x38F498u);
    ctx->pc = 0x38F494u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38F490u;
            // 0x38f494: 0xa20200cc  sb          $v0, 0xCC($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 204), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38F498u; }
        if (ctx->pc != 0x38F498u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38F498u; }
        if (ctx->pc != 0x38F498u) { return; }
    }
    ctx->pc = 0x38F498u;
label_38f498:
    // 0x38f498: 0xc077314  jal         func_1DCC50
label_38f49c:
    if (ctx->pc == 0x38F49Cu) {
        ctx->pc = 0x38F49Cu;
            // 0x38f49c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x38F4A0u;
        goto label_38f4a0;
    }
    ctx->pc = 0x38F498u;
    SET_GPR_U32(ctx, 31, 0x38F4A0u);
    ctx->pc = 0x38F49Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38F498u;
            // 0x38f49c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC50u;
    if (runtime->hasFunction(0x1DCC50u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38F4A0u; }
        if (ctx->pc != 0x38F4A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC50_0x1dcc50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38F4A0u; }
        if (ctx->pc != 0x38F4A0u) { return; }
    }
    ctx->pc = 0x38F4A0u;
label_38f4a0:
    // 0x38f4a0: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x38f4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
label_38f4a4:
    // 0x38f4a4: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x38f4a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
label_38f4a8:
    // 0x38f4a8: 0x24635f60  addiu       $v1, $v1, 0x5F60
    ctx->pc = 0x38f4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24416));
label_38f4ac:
    // 0x38f4ac: 0x8e0500c8  lw          $a1, 0xC8($s0)
    ctx->pc = 0x38f4acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
label_38f4b0:
    // 0x38f4b0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x38f4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_38f4b4:
    // 0x38f4b4: 0x24847c40  addiu       $a0, $a0, 0x7C40
    ctx->pc = 0x38f4b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31808));
label_38f4b8:
    // 0x38f4b8: 0x90460000  lbu         $a2, 0x0($v0)
    ctx->pc = 0x38f4b8u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_38f4bc:
    // 0x38f4bc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x38f4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_38f4c0:
    // 0x38f4c0: 0x24637c80  addiu       $v1, $v1, 0x7C80
    ctx->pc = 0x38f4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31872));
label_38f4c4:
    // 0x38f4c4: 0xa62818  mult        $a1, $a1, $a2
    ctx->pc = 0x38f4c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_38f4c8:
    // 0x38f4c8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x38f4c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38f4cc:
    // 0x38f4cc: 0xae0500c8  sw          $a1, 0xC8($s0)
    ctx->pc = 0x38f4ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 5));
label_38f4d0:
    // 0x38f4d0: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x38f4d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_38f4d4:
    // 0x38f4d4: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x38f4d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
label_38f4d8:
    // 0x38f4d8: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x38f4d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
label_38f4dc:
    // 0x38f4dc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x38f4dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_38f4e0:
    // 0x38f4e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x38f4e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_38f4e4:
    // 0x38f4e4: 0x3e00008  jr          $ra
label_38f4e8:
    if (ctx->pc == 0x38F4E8u) {
        ctx->pc = 0x38F4E8u;
            // 0x38f4e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x38F4ECu;
        goto label_38f4ec;
    }
    ctx->pc = 0x38F4E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38F4E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38F4E4u;
            // 0x38f4e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x38F4ECu;
label_38f4ec:
    // 0x38f4ec: 0x0  nop
    ctx->pc = 0x38f4ecu;
    // NOP
label_38f4f0:
    // 0x38f4f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x38f4f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_38f4f4:
    // 0x38f4f4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x38f4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_38f4f8:
    // 0x38f4f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x38f4f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_38f4fc:
    // 0x38f4fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x38f4fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_38f500:
    // 0x38f500: 0x8c8500d0  lw          $a1, 0xD0($a0)
    ctx->pc = 0x38f500u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 208)));
label_38f504:
    // 0x38f504: 0x10a3000a  beq         $a1, $v1, . + 4 + (0xA << 2)
label_38f508:
    if (ctx->pc == 0x38F508u) {
        ctx->pc = 0x38F508u;
            // 0x38f508: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38F50Cu;
        goto label_38f50c;
    }
    ctx->pc = 0x38F504u;
    {
        const bool branch_taken_0x38f504 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x38F508u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38F504u;
            // 0x38f508: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f504) {
            ctx->pc = 0x38F530u;
            goto label_38f530;
        }
    }
    ctx->pc = 0x38F50Cu;
label_38f50c:
    // 0x38f50c: 0x50a00003  beql        $a1, $zero, . + 4 + (0x3 << 2)
label_38f510:
    if (ctx->pc == 0x38F510u) {
        ctx->pc = 0x38F510u;
            // 0x38f510: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x38F514u;
        goto label_38f514;
    }
    ctx->pc = 0x38F50Cu;
    {
        const bool branch_taken_0x38f50c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x38f50c) {
            ctx->pc = 0x38F510u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x38F50Cu;
            // 0x38f510: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x38F51Cu;
            goto label_38f51c;
        }
    }
    ctx->pc = 0x38F514u;
label_38f514:
    // 0x38f514: 0x10000007  b           . + 4 + (0x7 << 2)
label_38f518:
    if (ctx->pc == 0x38F518u) {
        ctx->pc = 0x38F518u;
            // 0x38f518: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x38F51Cu;
        goto label_38f51c;
    }
    ctx->pc = 0x38F514u;
    {
        const bool branch_taken_0x38f514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38F518u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38F514u;
            // 0x38f518: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f514) {
            ctx->pc = 0x38F534u;
            goto label_38f534;
        }
    }
    ctx->pc = 0x38F51Cu;
label_38f51c:
    // 0x38f51c: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x38f51cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_38f520:
    // 0x38f520: 0x320f809  jalr        $t9
label_38f524:
    if (ctx->pc == 0x38F524u) {
        ctx->pc = 0x38F528u;
        goto label_38f528;
    }
    ctx->pc = 0x38F520u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x38F528u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x38F528u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x38F528u; }
            if (ctx->pc != 0x38F528u) { return; }
        }
        }
    }
    ctx->pc = 0x38F528u;
label_38f528:
    // 0x38f528: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x38f528u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_38f52c:
    // 0x38f52c: 0xae0300d0  sw          $v1, 0xD0($s0)
    ctx->pc = 0x38f52cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 3));
label_38f530:
    // 0x38f530: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x38f530u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_38f534:
    // 0x38f534: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x38f534u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_38f538:
    // 0x38f538: 0x3e00008  jr          $ra
label_38f53c:
    if (ctx->pc == 0x38F53Cu) {
        ctx->pc = 0x38F53Cu;
            // 0x38f53c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x38F540u;
        goto label_38f540;
    }
    ctx->pc = 0x38F538u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38F53Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38F538u;
            // 0x38f53c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x38F540u;
label_38f540:
    // 0x38f540: 0x3e00008  jr          $ra
label_38f544:
    if (ctx->pc == 0x38F544u) {
        ctx->pc = 0x38F544u;
            // 0x38f544: 0x24020821  addiu       $v0, $zero, 0x821 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2081));
        ctx->pc = 0x38F548u;
        goto label_38f548;
    }
    ctx->pc = 0x38F540u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38F544u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38F540u;
            // 0x38f544: 0x24020821  addiu       $v0, $zero, 0x821 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2081));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x38F548u;
label_38f548:
    // 0x38f548: 0x0  nop
    ctx->pc = 0x38f548u;
    // NOP
label_38f54c:
    // 0x38f54c: 0x0  nop
    ctx->pc = 0x38f54cu;
    // NOP
label_38f550:
    // 0x38f550: 0x80b2550  j           func_2C9540
label_38f554:
    if (ctx->pc == 0x38F554u) {
        ctx->pc = 0x38F554u;
            // 0x38f554: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->pc = 0x38F558u;
        goto label_38f558;
    }
    ctx->pc = 0x38F550u;
    ctx->pc = 0x38F554u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38F550u;
            // 0x38f554: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C9540u;
    {
        auto targetFn = runtime->lookupFunction(0x2C9540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x38F558u;
label_38f558:
    // 0x38f558: 0x0  nop
    ctx->pc = 0x38f558u;
    // NOP
label_38f55c:
    // 0x38f55c: 0x0  nop
    ctx->pc = 0x38f55cu;
    // NOP
label_38f560:
    // 0x38f560: 0x80e3a0c  j           func_38E830
label_38f564:
    if (ctx->pc == 0x38F564u) {
        ctx->pc = 0x38F564u;
            // 0x38f564: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x38F568u;
        goto label_38f568;
    }
    ctx->pc = 0x38F560u;
    ctx->pc = 0x38F564u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38F560u;
            // 0x38f564: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38E830u;
    {
        auto targetFn = runtime->lookupFunction(0x38E830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x38F568u;
label_38f568:
    // 0x38f568: 0x0  nop
    ctx->pc = 0x38f568u;
    // NOP
label_38f56c:
    // 0x38f56c: 0x0  nop
    ctx->pc = 0x38f56cu;
    // NOP
label_38f570:
    // 0x38f570: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x38f570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_38f574:
    // 0x38f574: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x38f574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_38f578:
    // 0x38f578: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x38f578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_38f57c:
    // 0x38f57c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x38f57cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_38f580:
    // 0x38f580: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x38f580u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_38f584:
    // 0x38f584: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
label_38f588:
    if (ctx->pc == 0x38F588u) {
        ctx->pc = 0x38F588u;
            // 0x38f588: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38F58Cu;
        goto label_38f58c;
    }
    ctx->pc = 0x38F584u;
    {
        const bool branch_taken_0x38f584 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x38F588u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38F584u;
            // 0x38f588: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f584) {
            ctx->pc = 0x38F5E0u;
            goto label_38f5e0;
        }
    }
    ctx->pc = 0x38F58Cu;
label_38f58c:
    // 0x38f58c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x38f58cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_38f590:
    // 0x38f590: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x38f590u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_38f594:
    // 0x38f594: 0x24637ce0  addiu       $v1, $v1, 0x7CE0
    ctx->pc = 0x38f594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31968));
label_38f598:
    // 0x38f598: 0x24427d18  addiu       $v0, $v0, 0x7D18
    ctx->pc = 0x38f598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32024));
label_38f59c:
    // 0x38f59c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x38f59cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_38f5a0:
    // 0x38f5a0: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_38f5a4:
    if (ctx->pc == 0x38F5A4u) {
        ctx->pc = 0x38F5A4u;
            // 0x38f5a4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x38F5A8u;
        goto label_38f5a8;
    }
    ctx->pc = 0x38F5A0u;
    {
        const bool branch_taken_0x38f5a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x38F5A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38F5A0u;
            // 0x38f5a4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f5a0) {
            ctx->pc = 0x38F5C8u;
            goto label_38f5c8;
        }
    }
    ctx->pc = 0x38F5A8u;
label_38f5a8:
    // 0x38f5a8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x38f5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_38f5ac:
    // 0x38f5ac: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x38f5acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_38f5b0:
    // 0x38f5b0: 0x24637e30  addiu       $v1, $v1, 0x7E30
    ctx->pc = 0x38f5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32304));
label_38f5b4:
    // 0x38f5b4: 0x24427e68  addiu       $v0, $v0, 0x7E68
    ctx->pc = 0x38f5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32360));
label_38f5b8:
    // 0x38f5b8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x38f5b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_38f5bc:
    // 0x38f5bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x38f5bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38f5c0:
    // 0x38f5c0: 0xc0e3d80  jal         func_38F600
label_38f5c4:
    if (ctx->pc == 0x38F5C4u) {
        ctx->pc = 0x38F5C4u;
            // 0x38f5c4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x38F5C8u;
        goto label_38f5c8;
    }
    ctx->pc = 0x38F5C0u;
    SET_GPR_U32(ctx, 31, 0x38F5C8u);
    ctx->pc = 0x38F5C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38F5C0u;
            // 0x38f5c4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38F600u;
    if (runtime->hasFunction(0x38F600u)) {
        auto targetFn = runtime->lookupFunction(0x38F600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38F5C8u; }
        if (ctx->pc != 0x38F5C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038F600_0x38f600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38F5C8u; }
        if (ctx->pc != 0x38F5C8u) { return; }
    }
    ctx->pc = 0x38F5C8u;
label_38f5c8:
    // 0x38f5c8: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x38f5c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_38f5cc:
    // 0x38f5cc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x38f5ccu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_38f5d0:
    // 0x38f5d0: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_38f5d4:
    if (ctx->pc == 0x38F5D4u) {
        ctx->pc = 0x38F5D4u;
            // 0x38f5d4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38F5D8u;
        goto label_38f5d8;
    }
    ctx->pc = 0x38F5D0u;
    {
        const bool branch_taken_0x38f5d0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x38f5d0) {
            ctx->pc = 0x38F5D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x38F5D0u;
            // 0x38f5d4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x38F5E4u;
            goto label_38f5e4;
        }
    }
    ctx->pc = 0x38F5D8u;
label_38f5d8:
    // 0x38f5d8: 0xc0400a8  jal         func_1002A0
label_38f5dc:
    if (ctx->pc == 0x38F5DCu) {
        ctx->pc = 0x38F5DCu;
            // 0x38f5dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38F5E0u;
        goto label_38f5e0;
    }
    ctx->pc = 0x38F5D8u;
    SET_GPR_U32(ctx, 31, 0x38F5E0u);
    ctx->pc = 0x38F5DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38F5D8u;
            // 0x38f5dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38F5E0u; }
        if (ctx->pc != 0x38F5E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38F5E0u; }
        if (ctx->pc != 0x38F5E0u) { return; }
    }
    ctx->pc = 0x38F5E0u;
label_38f5e0:
    // 0x38f5e0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x38f5e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38f5e4:
    // 0x38f5e4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x38f5e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_38f5e8:
    // 0x38f5e8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x38f5e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_38f5ec:
    // 0x38f5ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x38f5ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_38f5f0:
    // 0x38f5f0: 0x3e00008  jr          $ra
label_38f5f4:
    if (ctx->pc == 0x38F5F4u) {
        ctx->pc = 0x38F5F4u;
            // 0x38f5f4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x38F5F8u;
        goto label_38f5f8;
    }
    ctx->pc = 0x38F5F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38F5F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38F5F0u;
            // 0x38f5f4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x38F5F8u;
label_38f5f8:
    // 0x38f5f8: 0x0  nop
    ctx->pc = 0x38f5f8u;
    // NOP
label_38f5fc:
    // 0x38f5fc: 0x0  nop
    ctx->pc = 0x38f5fcu;
    // NOP
}
