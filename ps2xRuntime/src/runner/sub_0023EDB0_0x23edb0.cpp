#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0023EDB0
// Address: 0x23edb0 - 0x2403b0
void sub_0023EDB0_0x23edb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023EDB0_0x23edb0");
#endif

    switch (ctx->pc) {
        case 0x23edb0u: goto label_23edb0;
        case 0x23edb4u: goto label_23edb4;
        case 0x23edb8u: goto label_23edb8;
        case 0x23edbcu: goto label_23edbc;
        case 0x23edc0u: goto label_23edc0;
        case 0x23edc4u: goto label_23edc4;
        case 0x23edc8u: goto label_23edc8;
        case 0x23edccu: goto label_23edcc;
        case 0x23edd0u: goto label_23edd0;
        case 0x23edd4u: goto label_23edd4;
        case 0x23edd8u: goto label_23edd8;
        case 0x23eddcu: goto label_23eddc;
        case 0x23ede0u: goto label_23ede0;
        case 0x23ede4u: goto label_23ede4;
        case 0x23ede8u: goto label_23ede8;
        case 0x23edecu: goto label_23edec;
        case 0x23edf0u: goto label_23edf0;
        case 0x23edf4u: goto label_23edf4;
        case 0x23edf8u: goto label_23edf8;
        case 0x23edfcu: goto label_23edfc;
        case 0x23ee00u: goto label_23ee00;
        case 0x23ee04u: goto label_23ee04;
        case 0x23ee08u: goto label_23ee08;
        case 0x23ee0cu: goto label_23ee0c;
        case 0x23ee10u: goto label_23ee10;
        case 0x23ee14u: goto label_23ee14;
        case 0x23ee18u: goto label_23ee18;
        case 0x23ee1cu: goto label_23ee1c;
        case 0x23ee20u: goto label_23ee20;
        case 0x23ee24u: goto label_23ee24;
        case 0x23ee28u: goto label_23ee28;
        case 0x23ee2cu: goto label_23ee2c;
        case 0x23ee30u: goto label_23ee30;
        case 0x23ee34u: goto label_23ee34;
        case 0x23ee38u: goto label_23ee38;
        case 0x23ee3cu: goto label_23ee3c;
        case 0x23ee40u: goto label_23ee40;
        case 0x23ee44u: goto label_23ee44;
        case 0x23ee48u: goto label_23ee48;
        case 0x23ee4cu: goto label_23ee4c;
        case 0x23ee50u: goto label_23ee50;
        case 0x23ee54u: goto label_23ee54;
        case 0x23ee58u: goto label_23ee58;
        case 0x23ee5cu: goto label_23ee5c;
        case 0x23ee60u: goto label_23ee60;
        case 0x23ee64u: goto label_23ee64;
        case 0x23ee68u: goto label_23ee68;
        case 0x23ee6cu: goto label_23ee6c;
        case 0x23ee70u: goto label_23ee70;
        case 0x23ee74u: goto label_23ee74;
        case 0x23ee78u: goto label_23ee78;
        case 0x23ee7cu: goto label_23ee7c;
        case 0x23ee80u: goto label_23ee80;
        case 0x23ee84u: goto label_23ee84;
        case 0x23ee88u: goto label_23ee88;
        case 0x23ee8cu: goto label_23ee8c;
        case 0x23ee90u: goto label_23ee90;
        case 0x23ee94u: goto label_23ee94;
        case 0x23ee98u: goto label_23ee98;
        case 0x23ee9cu: goto label_23ee9c;
        case 0x23eea0u: goto label_23eea0;
        case 0x23eea4u: goto label_23eea4;
        case 0x23eea8u: goto label_23eea8;
        case 0x23eeacu: goto label_23eeac;
        case 0x23eeb0u: goto label_23eeb0;
        case 0x23eeb4u: goto label_23eeb4;
        case 0x23eeb8u: goto label_23eeb8;
        case 0x23eebcu: goto label_23eebc;
        case 0x23eec0u: goto label_23eec0;
        case 0x23eec4u: goto label_23eec4;
        case 0x23eec8u: goto label_23eec8;
        case 0x23eeccu: goto label_23eecc;
        case 0x23eed0u: goto label_23eed0;
        case 0x23eed4u: goto label_23eed4;
        case 0x23eed8u: goto label_23eed8;
        case 0x23eedcu: goto label_23eedc;
        case 0x23eee0u: goto label_23eee0;
        case 0x23eee4u: goto label_23eee4;
        case 0x23eee8u: goto label_23eee8;
        case 0x23eeecu: goto label_23eeec;
        case 0x23eef0u: goto label_23eef0;
        case 0x23eef4u: goto label_23eef4;
        case 0x23eef8u: goto label_23eef8;
        case 0x23eefcu: goto label_23eefc;
        case 0x23ef00u: goto label_23ef00;
        case 0x23ef04u: goto label_23ef04;
        case 0x23ef08u: goto label_23ef08;
        case 0x23ef0cu: goto label_23ef0c;
        case 0x23ef10u: goto label_23ef10;
        case 0x23ef14u: goto label_23ef14;
        case 0x23ef18u: goto label_23ef18;
        case 0x23ef1cu: goto label_23ef1c;
        case 0x23ef20u: goto label_23ef20;
        case 0x23ef24u: goto label_23ef24;
        case 0x23ef28u: goto label_23ef28;
        case 0x23ef2cu: goto label_23ef2c;
        case 0x23ef30u: goto label_23ef30;
        case 0x23ef34u: goto label_23ef34;
        case 0x23ef38u: goto label_23ef38;
        case 0x23ef3cu: goto label_23ef3c;
        case 0x23ef40u: goto label_23ef40;
        case 0x23ef44u: goto label_23ef44;
        case 0x23ef48u: goto label_23ef48;
        case 0x23ef4cu: goto label_23ef4c;
        case 0x23ef50u: goto label_23ef50;
        case 0x23ef54u: goto label_23ef54;
        case 0x23ef58u: goto label_23ef58;
        case 0x23ef5cu: goto label_23ef5c;
        case 0x23ef60u: goto label_23ef60;
        case 0x23ef64u: goto label_23ef64;
        case 0x23ef68u: goto label_23ef68;
        case 0x23ef6cu: goto label_23ef6c;
        case 0x23ef70u: goto label_23ef70;
        case 0x23ef74u: goto label_23ef74;
        case 0x23ef78u: goto label_23ef78;
        case 0x23ef7cu: goto label_23ef7c;
        case 0x23ef80u: goto label_23ef80;
        case 0x23ef84u: goto label_23ef84;
        case 0x23ef88u: goto label_23ef88;
        case 0x23ef8cu: goto label_23ef8c;
        case 0x23ef90u: goto label_23ef90;
        case 0x23ef94u: goto label_23ef94;
        case 0x23ef98u: goto label_23ef98;
        case 0x23ef9cu: goto label_23ef9c;
        case 0x23efa0u: goto label_23efa0;
        case 0x23efa4u: goto label_23efa4;
        case 0x23efa8u: goto label_23efa8;
        case 0x23efacu: goto label_23efac;
        case 0x23efb0u: goto label_23efb0;
        case 0x23efb4u: goto label_23efb4;
        case 0x23efb8u: goto label_23efb8;
        case 0x23efbcu: goto label_23efbc;
        case 0x23efc0u: goto label_23efc0;
        case 0x23efc4u: goto label_23efc4;
        case 0x23efc8u: goto label_23efc8;
        case 0x23efccu: goto label_23efcc;
        case 0x23efd0u: goto label_23efd0;
        case 0x23efd4u: goto label_23efd4;
        case 0x23efd8u: goto label_23efd8;
        case 0x23efdcu: goto label_23efdc;
        case 0x23efe0u: goto label_23efe0;
        case 0x23efe4u: goto label_23efe4;
        case 0x23efe8u: goto label_23efe8;
        case 0x23efecu: goto label_23efec;
        case 0x23eff0u: goto label_23eff0;
        case 0x23eff4u: goto label_23eff4;
        case 0x23eff8u: goto label_23eff8;
        case 0x23effcu: goto label_23effc;
        case 0x23f000u: goto label_23f000;
        case 0x23f004u: goto label_23f004;
        case 0x23f008u: goto label_23f008;
        case 0x23f00cu: goto label_23f00c;
        case 0x23f010u: goto label_23f010;
        case 0x23f014u: goto label_23f014;
        case 0x23f018u: goto label_23f018;
        case 0x23f01cu: goto label_23f01c;
        case 0x23f020u: goto label_23f020;
        case 0x23f024u: goto label_23f024;
        case 0x23f028u: goto label_23f028;
        case 0x23f02cu: goto label_23f02c;
        case 0x23f030u: goto label_23f030;
        case 0x23f034u: goto label_23f034;
        case 0x23f038u: goto label_23f038;
        case 0x23f03cu: goto label_23f03c;
        case 0x23f040u: goto label_23f040;
        case 0x23f044u: goto label_23f044;
        case 0x23f048u: goto label_23f048;
        case 0x23f04cu: goto label_23f04c;
        case 0x23f050u: goto label_23f050;
        case 0x23f054u: goto label_23f054;
        case 0x23f058u: goto label_23f058;
        case 0x23f05cu: goto label_23f05c;
        case 0x23f060u: goto label_23f060;
        case 0x23f064u: goto label_23f064;
        case 0x23f068u: goto label_23f068;
        case 0x23f06cu: goto label_23f06c;
        case 0x23f070u: goto label_23f070;
        case 0x23f074u: goto label_23f074;
        case 0x23f078u: goto label_23f078;
        case 0x23f07cu: goto label_23f07c;
        case 0x23f080u: goto label_23f080;
        case 0x23f084u: goto label_23f084;
        case 0x23f088u: goto label_23f088;
        case 0x23f08cu: goto label_23f08c;
        case 0x23f090u: goto label_23f090;
        case 0x23f094u: goto label_23f094;
        case 0x23f098u: goto label_23f098;
        case 0x23f09cu: goto label_23f09c;
        case 0x23f0a0u: goto label_23f0a0;
        case 0x23f0a4u: goto label_23f0a4;
        case 0x23f0a8u: goto label_23f0a8;
        case 0x23f0acu: goto label_23f0ac;
        case 0x23f0b0u: goto label_23f0b0;
        case 0x23f0b4u: goto label_23f0b4;
        case 0x23f0b8u: goto label_23f0b8;
        case 0x23f0bcu: goto label_23f0bc;
        case 0x23f0c0u: goto label_23f0c0;
        case 0x23f0c4u: goto label_23f0c4;
        case 0x23f0c8u: goto label_23f0c8;
        case 0x23f0ccu: goto label_23f0cc;
        case 0x23f0d0u: goto label_23f0d0;
        case 0x23f0d4u: goto label_23f0d4;
        case 0x23f0d8u: goto label_23f0d8;
        case 0x23f0dcu: goto label_23f0dc;
        case 0x23f0e0u: goto label_23f0e0;
        case 0x23f0e4u: goto label_23f0e4;
        case 0x23f0e8u: goto label_23f0e8;
        case 0x23f0ecu: goto label_23f0ec;
        case 0x23f0f0u: goto label_23f0f0;
        case 0x23f0f4u: goto label_23f0f4;
        case 0x23f0f8u: goto label_23f0f8;
        case 0x23f0fcu: goto label_23f0fc;
        case 0x23f100u: goto label_23f100;
        case 0x23f104u: goto label_23f104;
        case 0x23f108u: goto label_23f108;
        case 0x23f10cu: goto label_23f10c;
        case 0x23f110u: goto label_23f110;
        case 0x23f114u: goto label_23f114;
        case 0x23f118u: goto label_23f118;
        case 0x23f11cu: goto label_23f11c;
        case 0x23f120u: goto label_23f120;
        case 0x23f124u: goto label_23f124;
        case 0x23f128u: goto label_23f128;
        case 0x23f12cu: goto label_23f12c;
        case 0x23f130u: goto label_23f130;
        case 0x23f134u: goto label_23f134;
        case 0x23f138u: goto label_23f138;
        case 0x23f13cu: goto label_23f13c;
        case 0x23f140u: goto label_23f140;
        case 0x23f144u: goto label_23f144;
        case 0x23f148u: goto label_23f148;
        case 0x23f14cu: goto label_23f14c;
        case 0x23f150u: goto label_23f150;
        case 0x23f154u: goto label_23f154;
        case 0x23f158u: goto label_23f158;
        case 0x23f15cu: goto label_23f15c;
        case 0x23f160u: goto label_23f160;
        case 0x23f164u: goto label_23f164;
        case 0x23f168u: goto label_23f168;
        case 0x23f16cu: goto label_23f16c;
        case 0x23f170u: goto label_23f170;
        case 0x23f174u: goto label_23f174;
        case 0x23f178u: goto label_23f178;
        case 0x23f17cu: goto label_23f17c;
        case 0x23f180u: goto label_23f180;
        case 0x23f184u: goto label_23f184;
        case 0x23f188u: goto label_23f188;
        case 0x23f18cu: goto label_23f18c;
        case 0x23f190u: goto label_23f190;
        case 0x23f194u: goto label_23f194;
        case 0x23f198u: goto label_23f198;
        case 0x23f19cu: goto label_23f19c;
        case 0x23f1a0u: goto label_23f1a0;
        case 0x23f1a4u: goto label_23f1a4;
        case 0x23f1a8u: goto label_23f1a8;
        case 0x23f1acu: goto label_23f1ac;
        case 0x23f1b0u: goto label_23f1b0;
        case 0x23f1b4u: goto label_23f1b4;
        case 0x23f1b8u: goto label_23f1b8;
        case 0x23f1bcu: goto label_23f1bc;
        case 0x23f1c0u: goto label_23f1c0;
        case 0x23f1c4u: goto label_23f1c4;
        case 0x23f1c8u: goto label_23f1c8;
        case 0x23f1ccu: goto label_23f1cc;
        case 0x23f1d0u: goto label_23f1d0;
        case 0x23f1d4u: goto label_23f1d4;
        case 0x23f1d8u: goto label_23f1d8;
        case 0x23f1dcu: goto label_23f1dc;
        case 0x23f1e0u: goto label_23f1e0;
        case 0x23f1e4u: goto label_23f1e4;
        case 0x23f1e8u: goto label_23f1e8;
        case 0x23f1ecu: goto label_23f1ec;
        case 0x23f1f0u: goto label_23f1f0;
        case 0x23f1f4u: goto label_23f1f4;
        case 0x23f1f8u: goto label_23f1f8;
        case 0x23f1fcu: goto label_23f1fc;
        case 0x23f200u: goto label_23f200;
        case 0x23f204u: goto label_23f204;
        case 0x23f208u: goto label_23f208;
        case 0x23f20cu: goto label_23f20c;
        case 0x23f210u: goto label_23f210;
        case 0x23f214u: goto label_23f214;
        case 0x23f218u: goto label_23f218;
        case 0x23f21cu: goto label_23f21c;
        case 0x23f220u: goto label_23f220;
        case 0x23f224u: goto label_23f224;
        case 0x23f228u: goto label_23f228;
        case 0x23f22cu: goto label_23f22c;
        case 0x23f230u: goto label_23f230;
        case 0x23f234u: goto label_23f234;
        case 0x23f238u: goto label_23f238;
        case 0x23f23cu: goto label_23f23c;
        case 0x23f240u: goto label_23f240;
        case 0x23f244u: goto label_23f244;
        case 0x23f248u: goto label_23f248;
        case 0x23f24cu: goto label_23f24c;
        case 0x23f250u: goto label_23f250;
        case 0x23f254u: goto label_23f254;
        case 0x23f258u: goto label_23f258;
        case 0x23f25cu: goto label_23f25c;
        case 0x23f260u: goto label_23f260;
        case 0x23f264u: goto label_23f264;
        case 0x23f268u: goto label_23f268;
        case 0x23f26cu: goto label_23f26c;
        case 0x23f270u: goto label_23f270;
        case 0x23f274u: goto label_23f274;
        case 0x23f278u: goto label_23f278;
        case 0x23f27cu: goto label_23f27c;
        case 0x23f280u: goto label_23f280;
        case 0x23f284u: goto label_23f284;
        case 0x23f288u: goto label_23f288;
        case 0x23f28cu: goto label_23f28c;
        case 0x23f290u: goto label_23f290;
        case 0x23f294u: goto label_23f294;
        case 0x23f298u: goto label_23f298;
        case 0x23f29cu: goto label_23f29c;
        case 0x23f2a0u: goto label_23f2a0;
        case 0x23f2a4u: goto label_23f2a4;
        case 0x23f2a8u: goto label_23f2a8;
        case 0x23f2acu: goto label_23f2ac;
        case 0x23f2b0u: goto label_23f2b0;
        case 0x23f2b4u: goto label_23f2b4;
        case 0x23f2b8u: goto label_23f2b8;
        case 0x23f2bcu: goto label_23f2bc;
        case 0x23f2c0u: goto label_23f2c0;
        case 0x23f2c4u: goto label_23f2c4;
        case 0x23f2c8u: goto label_23f2c8;
        case 0x23f2ccu: goto label_23f2cc;
        case 0x23f2d0u: goto label_23f2d0;
        case 0x23f2d4u: goto label_23f2d4;
        case 0x23f2d8u: goto label_23f2d8;
        case 0x23f2dcu: goto label_23f2dc;
        case 0x23f2e0u: goto label_23f2e0;
        case 0x23f2e4u: goto label_23f2e4;
        case 0x23f2e8u: goto label_23f2e8;
        case 0x23f2ecu: goto label_23f2ec;
        case 0x23f2f0u: goto label_23f2f0;
        case 0x23f2f4u: goto label_23f2f4;
        case 0x23f2f8u: goto label_23f2f8;
        case 0x23f2fcu: goto label_23f2fc;
        case 0x23f300u: goto label_23f300;
        case 0x23f304u: goto label_23f304;
        case 0x23f308u: goto label_23f308;
        case 0x23f30cu: goto label_23f30c;
        case 0x23f310u: goto label_23f310;
        case 0x23f314u: goto label_23f314;
        case 0x23f318u: goto label_23f318;
        case 0x23f31cu: goto label_23f31c;
        case 0x23f320u: goto label_23f320;
        case 0x23f324u: goto label_23f324;
        case 0x23f328u: goto label_23f328;
        case 0x23f32cu: goto label_23f32c;
        case 0x23f330u: goto label_23f330;
        case 0x23f334u: goto label_23f334;
        case 0x23f338u: goto label_23f338;
        case 0x23f33cu: goto label_23f33c;
        case 0x23f340u: goto label_23f340;
        case 0x23f344u: goto label_23f344;
        case 0x23f348u: goto label_23f348;
        case 0x23f34cu: goto label_23f34c;
        case 0x23f350u: goto label_23f350;
        case 0x23f354u: goto label_23f354;
        case 0x23f358u: goto label_23f358;
        case 0x23f35cu: goto label_23f35c;
        case 0x23f360u: goto label_23f360;
        case 0x23f364u: goto label_23f364;
        case 0x23f368u: goto label_23f368;
        case 0x23f36cu: goto label_23f36c;
        case 0x23f370u: goto label_23f370;
        case 0x23f374u: goto label_23f374;
        case 0x23f378u: goto label_23f378;
        case 0x23f37cu: goto label_23f37c;
        case 0x23f380u: goto label_23f380;
        case 0x23f384u: goto label_23f384;
        case 0x23f388u: goto label_23f388;
        case 0x23f38cu: goto label_23f38c;
        case 0x23f390u: goto label_23f390;
        case 0x23f394u: goto label_23f394;
        case 0x23f398u: goto label_23f398;
        case 0x23f39cu: goto label_23f39c;
        case 0x23f3a0u: goto label_23f3a0;
        case 0x23f3a4u: goto label_23f3a4;
        case 0x23f3a8u: goto label_23f3a8;
        case 0x23f3acu: goto label_23f3ac;
        case 0x23f3b0u: goto label_23f3b0;
        case 0x23f3b4u: goto label_23f3b4;
        case 0x23f3b8u: goto label_23f3b8;
        case 0x23f3bcu: goto label_23f3bc;
        case 0x23f3c0u: goto label_23f3c0;
        case 0x23f3c4u: goto label_23f3c4;
        case 0x23f3c8u: goto label_23f3c8;
        case 0x23f3ccu: goto label_23f3cc;
        case 0x23f3d0u: goto label_23f3d0;
        case 0x23f3d4u: goto label_23f3d4;
        case 0x23f3d8u: goto label_23f3d8;
        case 0x23f3dcu: goto label_23f3dc;
        case 0x23f3e0u: goto label_23f3e0;
        case 0x23f3e4u: goto label_23f3e4;
        case 0x23f3e8u: goto label_23f3e8;
        case 0x23f3ecu: goto label_23f3ec;
        case 0x23f3f0u: goto label_23f3f0;
        case 0x23f3f4u: goto label_23f3f4;
        case 0x23f3f8u: goto label_23f3f8;
        case 0x23f3fcu: goto label_23f3fc;
        case 0x23f400u: goto label_23f400;
        case 0x23f404u: goto label_23f404;
        case 0x23f408u: goto label_23f408;
        case 0x23f40cu: goto label_23f40c;
        case 0x23f410u: goto label_23f410;
        case 0x23f414u: goto label_23f414;
        case 0x23f418u: goto label_23f418;
        case 0x23f41cu: goto label_23f41c;
        case 0x23f420u: goto label_23f420;
        case 0x23f424u: goto label_23f424;
        case 0x23f428u: goto label_23f428;
        case 0x23f42cu: goto label_23f42c;
        case 0x23f430u: goto label_23f430;
        case 0x23f434u: goto label_23f434;
        case 0x23f438u: goto label_23f438;
        case 0x23f43cu: goto label_23f43c;
        case 0x23f440u: goto label_23f440;
        case 0x23f444u: goto label_23f444;
        case 0x23f448u: goto label_23f448;
        case 0x23f44cu: goto label_23f44c;
        case 0x23f450u: goto label_23f450;
        case 0x23f454u: goto label_23f454;
        case 0x23f458u: goto label_23f458;
        case 0x23f45cu: goto label_23f45c;
        case 0x23f460u: goto label_23f460;
        case 0x23f464u: goto label_23f464;
        case 0x23f468u: goto label_23f468;
        case 0x23f46cu: goto label_23f46c;
        case 0x23f470u: goto label_23f470;
        case 0x23f474u: goto label_23f474;
        case 0x23f478u: goto label_23f478;
        case 0x23f47cu: goto label_23f47c;
        case 0x23f480u: goto label_23f480;
        case 0x23f484u: goto label_23f484;
        case 0x23f488u: goto label_23f488;
        case 0x23f48cu: goto label_23f48c;
        case 0x23f490u: goto label_23f490;
        case 0x23f494u: goto label_23f494;
        case 0x23f498u: goto label_23f498;
        case 0x23f49cu: goto label_23f49c;
        case 0x23f4a0u: goto label_23f4a0;
        case 0x23f4a4u: goto label_23f4a4;
        case 0x23f4a8u: goto label_23f4a8;
        case 0x23f4acu: goto label_23f4ac;
        case 0x23f4b0u: goto label_23f4b0;
        case 0x23f4b4u: goto label_23f4b4;
        case 0x23f4b8u: goto label_23f4b8;
        case 0x23f4bcu: goto label_23f4bc;
        case 0x23f4c0u: goto label_23f4c0;
        case 0x23f4c4u: goto label_23f4c4;
        case 0x23f4c8u: goto label_23f4c8;
        case 0x23f4ccu: goto label_23f4cc;
        case 0x23f4d0u: goto label_23f4d0;
        case 0x23f4d4u: goto label_23f4d4;
        case 0x23f4d8u: goto label_23f4d8;
        case 0x23f4dcu: goto label_23f4dc;
        case 0x23f4e0u: goto label_23f4e0;
        case 0x23f4e4u: goto label_23f4e4;
        case 0x23f4e8u: goto label_23f4e8;
        case 0x23f4ecu: goto label_23f4ec;
        case 0x23f4f0u: goto label_23f4f0;
        case 0x23f4f4u: goto label_23f4f4;
        case 0x23f4f8u: goto label_23f4f8;
        case 0x23f4fcu: goto label_23f4fc;
        case 0x23f500u: goto label_23f500;
        case 0x23f504u: goto label_23f504;
        case 0x23f508u: goto label_23f508;
        case 0x23f50cu: goto label_23f50c;
        case 0x23f510u: goto label_23f510;
        case 0x23f514u: goto label_23f514;
        case 0x23f518u: goto label_23f518;
        case 0x23f51cu: goto label_23f51c;
        case 0x23f520u: goto label_23f520;
        case 0x23f524u: goto label_23f524;
        case 0x23f528u: goto label_23f528;
        case 0x23f52cu: goto label_23f52c;
        case 0x23f530u: goto label_23f530;
        case 0x23f534u: goto label_23f534;
        case 0x23f538u: goto label_23f538;
        case 0x23f53cu: goto label_23f53c;
        case 0x23f540u: goto label_23f540;
        case 0x23f544u: goto label_23f544;
        case 0x23f548u: goto label_23f548;
        case 0x23f54cu: goto label_23f54c;
        case 0x23f550u: goto label_23f550;
        case 0x23f554u: goto label_23f554;
        case 0x23f558u: goto label_23f558;
        case 0x23f55cu: goto label_23f55c;
        case 0x23f560u: goto label_23f560;
        case 0x23f564u: goto label_23f564;
        case 0x23f568u: goto label_23f568;
        case 0x23f56cu: goto label_23f56c;
        case 0x23f570u: goto label_23f570;
        case 0x23f574u: goto label_23f574;
        case 0x23f578u: goto label_23f578;
        case 0x23f57cu: goto label_23f57c;
        case 0x23f580u: goto label_23f580;
        case 0x23f584u: goto label_23f584;
        case 0x23f588u: goto label_23f588;
        case 0x23f58cu: goto label_23f58c;
        case 0x23f590u: goto label_23f590;
        case 0x23f594u: goto label_23f594;
        case 0x23f598u: goto label_23f598;
        case 0x23f59cu: goto label_23f59c;
        case 0x23f5a0u: goto label_23f5a0;
        case 0x23f5a4u: goto label_23f5a4;
        case 0x23f5a8u: goto label_23f5a8;
        case 0x23f5acu: goto label_23f5ac;
        case 0x23f5b0u: goto label_23f5b0;
        case 0x23f5b4u: goto label_23f5b4;
        case 0x23f5b8u: goto label_23f5b8;
        case 0x23f5bcu: goto label_23f5bc;
        case 0x23f5c0u: goto label_23f5c0;
        case 0x23f5c4u: goto label_23f5c4;
        case 0x23f5c8u: goto label_23f5c8;
        case 0x23f5ccu: goto label_23f5cc;
        case 0x23f5d0u: goto label_23f5d0;
        case 0x23f5d4u: goto label_23f5d4;
        case 0x23f5d8u: goto label_23f5d8;
        case 0x23f5dcu: goto label_23f5dc;
        case 0x23f5e0u: goto label_23f5e0;
        case 0x23f5e4u: goto label_23f5e4;
        case 0x23f5e8u: goto label_23f5e8;
        case 0x23f5ecu: goto label_23f5ec;
        case 0x23f5f0u: goto label_23f5f0;
        case 0x23f5f4u: goto label_23f5f4;
        case 0x23f5f8u: goto label_23f5f8;
        case 0x23f5fcu: goto label_23f5fc;
        case 0x23f600u: goto label_23f600;
        case 0x23f604u: goto label_23f604;
        case 0x23f608u: goto label_23f608;
        case 0x23f60cu: goto label_23f60c;
        case 0x23f610u: goto label_23f610;
        case 0x23f614u: goto label_23f614;
        case 0x23f618u: goto label_23f618;
        case 0x23f61cu: goto label_23f61c;
        case 0x23f620u: goto label_23f620;
        case 0x23f624u: goto label_23f624;
        case 0x23f628u: goto label_23f628;
        case 0x23f62cu: goto label_23f62c;
        case 0x23f630u: goto label_23f630;
        case 0x23f634u: goto label_23f634;
        case 0x23f638u: goto label_23f638;
        case 0x23f63cu: goto label_23f63c;
        case 0x23f640u: goto label_23f640;
        case 0x23f644u: goto label_23f644;
        case 0x23f648u: goto label_23f648;
        case 0x23f64cu: goto label_23f64c;
        case 0x23f650u: goto label_23f650;
        case 0x23f654u: goto label_23f654;
        case 0x23f658u: goto label_23f658;
        case 0x23f65cu: goto label_23f65c;
        case 0x23f660u: goto label_23f660;
        case 0x23f664u: goto label_23f664;
        case 0x23f668u: goto label_23f668;
        case 0x23f66cu: goto label_23f66c;
        case 0x23f670u: goto label_23f670;
        case 0x23f674u: goto label_23f674;
        case 0x23f678u: goto label_23f678;
        case 0x23f67cu: goto label_23f67c;
        case 0x23f680u: goto label_23f680;
        case 0x23f684u: goto label_23f684;
        case 0x23f688u: goto label_23f688;
        case 0x23f68cu: goto label_23f68c;
        case 0x23f690u: goto label_23f690;
        case 0x23f694u: goto label_23f694;
        case 0x23f698u: goto label_23f698;
        case 0x23f69cu: goto label_23f69c;
        case 0x23f6a0u: goto label_23f6a0;
        case 0x23f6a4u: goto label_23f6a4;
        case 0x23f6a8u: goto label_23f6a8;
        case 0x23f6acu: goto label_23f6ac;
        case 0x23f6b0u: goto label_23f6b0;
        case 0x23f6b4u: goto label_23f6b4;
        case 0x23f6b8u: goto label_23f6b8;
        case 0x23f6bcu: goto label_23f6bc;
        case 0x23f6c0u: goto label_23f6c0;
        case 0x23f6c4u: goto label_23f6c4;
        case 0x23f6c8u: goto label_23f6c8;
        case 0x23f6ccu: goto label_23f6cc;
        case 0x23f6d0u: goto label_23f6d0;
        case 0x23f6d4u: goto label_23f6d4;
        case 0x23f6d8u: goto label_23f6d8;
        case 0x23f6dcu: goto label_23f6dc;
        case 0x23f6e0u: goto label_23f6e0;
        case 0x23f6e4u: goto label_23f6e4;
        case 0x23f6e8u: goto label_23f6e8;
        case 0x23f6ecu: goto label_23f6ec;
        case 0x23f6f0u: goto label_23f6f0;
        case 0x23f6f4u: goto label_23f6f4;
        case 0x23f6f8u: goto label_23f6f8;
        case 0x23f6fcu: goto label_23f6fc;
        case 0x23f700u: goto label_23f700;
        case 0x23f704u: goto label_23f704;
        case 0x23f708u: goto label_23f708;
        case 0x23f70cu: goto label_23f70c;
        case 0x23f710u: goto label_23f710;
        case 0x23f714u: goto label_23f714;
        case 0x23f718u: goto label_23f718;
        case 0x23f71cu: goto label_23f71c;
        case 0x23f720u: goto label_23f720;
        case 0x23f724u: goto label_23f724;
        case 0x23f728u: goto label_23f728;
        case 0x23f72cu: goto label_23f72c;
        case 0x23f730u: goto label_23f730;
        case 0x23f734u: goto label_23f734;
        case 0x23f738u: goto label_23f738;
        case 0x23f73cu: goto label_23f73c;
        case 0x23f740u: goto label_23f740;
        case 0x23f744u: goto label_23f744;
        case 0x23f748u: goto label_23f748;
        case 0x23f74cu: goto label_23f74c;
        case 0x23f750u: goto label_23f750;
        case 0x23f754u: goto label_23f754;
        case 0x23f758u: goto label_23f758;
        case 0x23f75cu: goto label_23f75c;
        case 0x23f760u: goto label_23f760;
        case 0x23f764u: goto label_23f764;
        case 0x23f768u: goto label_23f768;
        case 0x23f76cu: goto label_23f76c;
        case 0x23f770u: goto label_23f770;
        case 0x23f774u: goto label_23f774;
        case 0x23f778u: goto label_23f778;
        case 0x23f77cu: goto label_23f77c;
        case 0x23f780u: goto label_23f780;
        case 0x23f784u: goto label_23f784;
        case 0x23f788u: goto label_23f788;
        case 0x23f78cu: goto label_23f78c;
        case 0x23f790u: goto label_23f790;
        case 0x23f794u: goto label_23f794;
        case 0x23f798u: goto label_23f798;
        case 0x23f79cu: goto label_23f79c;
        case 0x23f7a0u: goto label_23f7a0;
        case 0x23f7a4u: goto label_23f7a4;
        case 0x23f7a8u: goto label_23f7a8;
        case 0x23f7acu: goto label_23f7ac;
        case 0x23f7b0u: goto label_23f7b0;
        case 0x23f7b4u: goto label_23f7b4;
        case 0x23f7b8u: goto label_23f7b8;
        case 0x23f7bcu: goto label_23f7bc;
        case 0x23f7c0u: goto label_23f7c0;
        case 0x23f7c4u: goto label_23f7c4;
        case 0x23f7c8u: goto label_23f7c8;
        case 0x23f7ccu: goto label_23f7cc;
        case 0x23f7d0u: goto label_23f7d0;
        case 0x23f7d4u: goto label_23f7d4;
        case 0x23f7d8u: goto label_23f7d8;
        case 0x23f7dcu: goto label_23f7dc;
        case 0x23f7e0u: goto label_23f7e0;
        case 0x23f7e4u: goto label_23f7e4;
        case 0x23f7e8u: goto label_23f7e8;
        case 0x23f7ecu: goto label_23f7ec;
        case 0x23f7f0u: goto label_23f7f0;
        case 0x23f7f4u: goto label_23f7f4;
        case 0x23f7f8u: goto label_23f7f8;
        case 0x23f7fcu: goto label_23f7fc;
        case 0x23f800u: goto label_23f800;
        case 0x23f804u: goto label_23f804;
        case 0x23f808u: goto label_23f808;
        case 0x23f80cu: goto label_23f80c;
        case 0x23f810u: goto label_23f810;
        case 0x23f814u: goto label_23f814;
        case 0x23f818u: goto label_23f818;
        case 0x23f81cu: goto label_23f81c;
        case 0x23f820u: goto label_23f820;
        case 0x23f824u: goto label_23f824;
        case 0x23f828u: goto label_23f828;
        case 0x23f82cu: goto label_23f82c;
        case 0x23f830u: goto label_23f830;
        case 0x23f834u: goto label_23f834;
        case 0x23f838u: goto label_23f838;
        case 0x23f83cu: goto label_23f83c;
        case 0x23f840u: goto label_23f840;
        case 0x23f844u: goto label_23f844;
        case 0x23f848u: goto label_23f848;
        case 0x23f84cu: goto label_23f84c;
        case 0x23f850u: goto label_23f850;
        case 0x23f854u: goto label_23f854;
        case 0x23f858u: goto label_23f858;
        case 0x23f85cu: goto label_23f85c;
        case 0x23f860u: goto label_23f860;
        case 0x23f864u: goto label_23f864;
        case 0x23f868u: goto label_23f868;
        case 0x23f86cu: goto label_23f86c;
        case 0x23f870u: goto label_23f870;
        case 0x23f874u: goto label_23f874;
        case 0x23f878u: goto label_23f878;
        case 0x23f87cu: goto label_23f87c;
        case 0x23f880u: goto label_23f880;
        case 0x23f884u: goto label_23f884;
        case 0x23f888u: goto label_23f888;
        case 0x23f88cu: goto label_23f88c;
        case 0x23f890u: goto label_23f890;
        case 0x23f894u: goto label_23f894;
        case 0x23f898u: goto label_23f898;
        case 0x23f89cu: goto label_23f89c;
        case 0x23f8a0u: goto label_23f8a0;
        case 0x23f8a4u: goto label_23f8a4;
        case 0x23f8a8u: goto label_23f8a8;
        case 0x23f8acu: goto label_23f8ac;
        case 0x23f8b0u: goto label_23f8b0;
        case 0x23f8b4u: goto label_23f8b4;
        case 0x23f8b8u: goto label_23f8b8;
        case 0x23f8bcu: goto label_23f8bc;
        case 0x23f8c0u: goto label_23f8c0;
        case 0x23f8c4u: goto label_23f8c4;
        case 0x23f8c8u: goto label_23f8c8;
        case 0x23f8ccu: goto label_23f8cc;
        case 0x23f8d0u: goto label_23f8d0;
        case 0x23f8d4u: goto label_23f8d4;
        case 0x23f8d8u: goto label_23f8d8;
        case 0x23f8dcu: goto label_23f8dc;
        case 0x23f8e0u: goto label_23f8e0;
        case 0x23f8e4u: goto label_23f8e4;
        case 0x23f8e8u: goto label_23f8e8;
        case 0x23f8ecu: goto label_23f8ec;
        case 0x23f8f0u: goto label_23f8f0;
        case 0x23f8f4u: goto label_23f8f4;
        case 0x23f8f8u: goto label_23f8f8;
        case 0x23f8fcu: goto label_23f8fc;
        case 0x23f900u: goto label_23f900;
        case 0x23f904u: goto label_23f904;
        case 0x23f908u: goto label_23f908;
        case 0x23f90cu: goto label_23f90c;
        case 0x23f910u: goto label_23f910;
        case 0x23f914u: goto label_23f914;
        case 0x23f918u: goto label_23f918;
        case 0x23f91cu: goto label_23f91c;
        case 0x23f920u: goto label_23f920;
        case 0x23f924u: goto label_23f924;
        case 0x23f928u: goto label_23f928;
        case 0x23f92cu: goto label_23f92c;
        case 0x23f930u: goto label_23f930;
        case 0x23f934u: goto label_23f934;
        case 0x23f938u: goto label_23f938;
        case 0x23f93cu: goto label_23f93c;
        case 0x23f940u: goto label_23f940;
        case 0x23f944u: goto label_23f944;
        case 0x23f948u: goto label_23f948;
        case 0x23f94cu: goto label_23f94c;
        case 0x23f950u: goto label_23f950;
        case 0x23f954u: goto label_23f954;
        case 0x23f958u: goto label_23f958;
        case 0x23f95cu: goto label_23f95c;
        case 0x23f960u: goto label_23f960;
        case 0x23f964u: goto label_23f964;
        case 0x23f968u: goto label_23f968;
        case 0x23f96cu: goto label_23f96c;
        case 0x23f970u: goto label_23f970;
        case 0x23f974u: goto label_23f974;
        case 0x23f978u: goto label_23f978;
        case 0x23f97cu: goto label_23f97c;
        case 0x23f980u: goto label_23f980;
        case 0x23f984u: goto label_23f984;
        case 0x23f988u: goto label_23f988;
        case 0x23f98cu: goto label_23f98c;
        case 0x23f990u: goto label_23f990;
        case 0x23f994u: goto label_23f994;
        case 0x23f998u: goto label_23f998;
        case 0x23f99cu: goto label_23f99c;
        case 0x23f9a0u: goto label_23f9a0;
        case 0x23f9a4u: goto label_23f9a4;
        case 0x23f9a8u: goto label_23f9a8;
        case 0x23f9acu: goto label_23f9ac;
        case 0x23f9b0u: goto label_23f9b0;
        case 0x23f9b4u: goto label_23f9b4;
        case 0x23f9b8u: goto label_23f9b8;
        case 0x23f9bcu: goto label_23f9bc;
        case 0x23f9c0u: goto label_23f9c0;
        case 0x23f9c4u: goto label_23f9c4;
        case 0x23f9c8u: goto label_23f9c8;
        case 0x23f9ccu: goto label_23f9cc;
        case 0x23f9d0u: goto label_23f9d0;
        case 0x23f9d4u: goto label_23f9d4;
        case 0x23f9d8u: goto label_23f9d8;
        case 0x23f9dcu: goto label_23f9dc;
        case 0x23f9e0u: goto label_23f9e0;
        case 0x23f9e4u: goto label_23f9e4;
        case 0x23f9e8u: goto label_23f9e8;
        case 0x23f9ecu: goto label_23f9ec;
        case 0x23f9f0u: goto label_23f9f0;
        case 0x23f9f4u: goto label_23f9f4;
        case 0x23f9f8u: goto label_23f9f8;
        case 0x23f9fcu: goto label_23f9fc;
        case 0x23fa00u: goto label_23fa00;
        case 0x23fa04u: goto label_23fa04;
        case 0x23fa08u: goto label_23fa08;
        case 0x23fa0cu: goto label_23fa0c;
        case 0x23fa10u: goto label_23fa10;
        case 0x23fa14u: goto label_23fa14;
        case 0x23fa18u: goto label_23fa18;
        case 0x23fa1cu: goto label_23fa1c;
        case 0x23fa20u: goto label_23fa20;
        case 0x23fa24u: goto label_23fa24;
        case 0x23fa28u: goto label_23fa28;
        case 0x23fa2cu: goto label_23fa2c;
        case 0x23fa30u: goto label_23fa30;
        case 0x23fa34u: goto label_23fa34;
        case 0x23fa38u: goto label_23fa38;
        case 0x23fa3cu: goto label_23fa3c;
        case 0x23fa40u: goto label_23fa40;
        case 0x23fa44u: goto label_23fa44;
        case 0x23fa48u: goto label_23fa48;
        case 0x23fa4cu: goto label_23fa4c;
        case 0x23fa50u: goto label_23fa50;
        case 0x23fa54u: goto label_23fa54;
        case 0x23fa58u: goto label_23fa58;
        case 0x23fa5cu: goto label_23fa5c;
        case 0x23fa60u: goto label_23fa60;
        case 0x23fa64u: goto label_23fa64;
        case 0x23fa68u: goto label_23fa68;
        case 0x23fa6cu: goto label_23fa6c;
        case 0x23fa70u: goto label_23fa70;
        case 0x23fa74u: goto label_23fa74;
        case 0x23fa78u: goto label_23fa78;
        case 0x23fa7cu: goto label_23fa7c;
        case 0x23fa80u: goto label_23fa80;
        case 0x23fa84u: goto label_23fa84;
        case 0x23fa88u: goto label_23fa88;
        case 0x23fa8cu: goto label_23fa8c;
        case 0x23fa90u: goto label_23fa90;
        case 0x23fa94u: goto label_23fa94;
        case 0x23fa98u: goto label_23fa98;
        case 0x23fa9cu: goto label_23fa9c;
        case 0x23faa0u: goto label_23faa0;
        case 0x23faa4u: goto label_23faa4;
        case 0x23faa8u: goto label_23faa8;
        case 0x23faacu: goto label_23faac;
        case 0x23fab0u: goto label_23fab0;
        case 0x23fab4u: goto label_23fab4;
        case 0x23fab8u: goto label_23fab8;
        case 0x23fabcu: goto label_23fabc;
        case 0x23fac0u: goto label_23fac0;
        case 0x23fac4u: goto label_23fac4;
        case 0x23fac8u: goto label_23fac8;
        case 0x23faccu: goto label_23facc;
        case 0x23fad0u: goto label_23fad0;
        case 0x23fad4u: goto label_23fad4;
        case 0x23fad8u: goto label_23fad8;
        case 0x23fadcu: goto label_23fadc;
        case 0x23fae0u: goto label_23fae0;
        case 0x23fae4u: goto label_23fae4;
        case 0x23fae8u: goto label_23fae8;
        case 0x23faecu: goto label_23faec;
        case 0x23faf0u: goto label_23faf0;
        case 0x23faf4u: goto label_23faf4;
        case 0x23faf8u: goto label_23faf8;
        case 0x23fafcu: goto label_23fafc;
        case 0x23fb00u: goto label_23fb00;
        case 0x23fb04u: goto label_23fb04;
        case 0x23fb08u: goto label_23fb08;
        case 0x23fb0cu: goto label_23fb0c;
        case 0x23fb10u: goto label_23fb10;
        case 0x23fb14u: goto label_23fb14;
        case 0x23fb18u: goto label_23fb18;
        case 0x23fb1cu: goto label_23fb1c;
        case 0x23fb20u: goto label_23fb20;
        case 0x23fb24u: goto label_23fb24;
        case 0x23fb28u: goto label_23fb28;
        case 0x23fb2cu: goto label_23fb2c;
        case 0x23fb30u: goto label_23fb30;
        case 0x23fb34u: goto label_23fb34;
        case 0x23fb38u: goto label_23fb38;
        case 0x23fb3cu: goto label_23fb3c;
        case 0x23fb40u: goto label_23fb40;
        case 0x23fb44u: goto label_23fb44;
        case 0x23fb48u: goto label_23fb48;
        case 0x23fb4cu: goto label_23fb4c;
        case 0x23fb50u: goto label_23fb50;
        case 0x23fb54u: goto label_23fb54;
        case 0x23fb58u: goto label_23fb58;
        case 0x23fb5cu: goto label_23fb5c;
        case 0x23fb60u: goto label_23fb60;
        case 0x23fb64u: goto label_23fb64;
        case 0x23fb68u: goto label_23fb68;
        case 0x23fb6cu: goto label_23fb6c;
        case 0x23fb70u: goto label_23fb70;
        case 0x23fb74u: goto label_23fb74;
        case 0x23fb78u: goto label_23fb78;
        case 0x23fb7cu: goto label_23fb7c;
        case 0x23fb80u: goto label_23fb80;
        case 0x23fb84u: goto label_23fb84;
        case 0x23fb88u: goto label_23fb88;
        case 0x23fb8cu: goto label_23fb8c;
        case 0x23fb90u: goto label_23fb90;
        case 0x23fb94u: goto label_23fb94;
        case 0x23fb98u: goto label_23fb98;
        case 0x23fb9cu: goto label_23fb9c;
        case 0x23fba0u: goto label_23fba0;
        case 0x23fba4u: goto label_23fba4;
        case 0x23fba8u: goto label_23fba8;
        case 0x23fbacu: goto label_23fbac;
        case 0x23fbb0u: goto label_23fbb0;
        case 0x23fbb4u: goto label_23fbb4;
        case 0x23fbb8u: goto label_23fbb8;
        case 0x23fbbcu: goto label_23fbbc;
        case 0x23fbc0u: goto label_23fbc0;
        case 0x23fbc4u: goto label_23fbc4;
        case 0x23fbc8u: goto label_23fbc8;
        case 0x23fbccu: goto label_23fbcc;
        case 0x23fbd0u: goto label_23fbd0;
        case 0x23fbd4u: goto label_23fbd4;
        case 0x23fbd8u: goto label_23fbd8;
        case 0x23fbdcu: goto label_23fbdc;
        case 0x23fbe0u: goto label_23fbe0;
        case 0x23fbe4u: goto label_23fbe4;
        case 0x23fbe8u: goto label_23fbe8;
        case 0x23fbecu: goto label_23fbec;
        case 0x23fbf0u: goto label_23fbf0;
        case 0x23fbf4u: goto label_23fbf4;
        case 0x23fbf8u: goto label_23fbf8;
        case 0x23fbfcu: goto label_23fbfc;
        case 0x23fc00u: goto label_23fc00;
        case 0x23fc04u: goto label_23fc04;
        case 0x23fc08u: goto label_23fc08;
        case 0x23fc0cu: goto label_23fc0c;
        case 0x23fc10u: goto label_23fc10;
        case 0x23fc14u: goto label_23fc14;
        case 0x23fc18u: goto label_23fc18;
        case 0x23fc1cu: goto label_23fc1c;
        case 0x23fc20u: goto label_23fc20;
        case 0x23fc24u: goto label_23fc24;
        case 0x23fc28u: goto label_23fc28;
        case 0x23fc2cu: goto label_23fc2c;
        case 0x23fc30u: goto label_23fc30;
        case 0x23fc34u: goto label_23fc34;
        case 0x23fc38u: goto label_23fc38;
        case 0x23fc3cu: goto label_23fc3c;
        case 0x23fc40u: goto label_23fc40;
        case 0x23fc44u: goto label_23fc44;
        case 0x23fc48u: goto label_23fc48;
        case 0x23fc4cu: goto label_23fc4c;
        case 0x23fc50u: goto label_23fc50;
        case 0x23fc54u: goto label_23fc54;
        case 0x23fc58u: goto label_23fc58;
        case 0x23fc5cu: goto label_23fc5c;
        case 0x23fc60u: goto label_23fc60;
        case 0x23fc64u: goto label_23fc64;
        case 0x23fc68u: goto label_23fc68;
        case 0x23fc6cu: goto label_23fc6c;
        case 0x23fc70u: goto label_23fc70;
        case 0x23fc74u: goto label_23fc74;
        case 0x23fc78u: goto label_23fc78;
        case 0x23fc7cu: goto label_23fc7c;
        case 0x23fc80u: goto label_23fc80;
        case 0x23fc84u: goto label_23fc84;
        case 0x23fc88u: goto label_23fc88;
        case 0x23fc8cu: goto label_23fc8c;
        case 0x23fc90u: goto label_23fc90;
        case 0x23fc94u: goto label_23fc94;
        case 0x23fc98u: goto label_23fc98;
        case 0x23fc9cu: goto label_23fc9c;
        case 0x23fca0u: goto label_23fca0;
        case 0x23fca4u: goto label_23fca4;
        case 0x23fca8u: goto label_23fca8;
        case 0x23fcacu: goto label_23fcac;
        case 0x23fcb0u: goto label_23fcb0;
        case 0x23fcb4u: goto label_23fcb4;
        case 0x23fcb8u: goto label_23fcb8;
        case 0x23fcbcu: goto label_23fcbc;
        case 0x23fcc0u: goto label_23fcc0;
        case 0x23fcc4u: goto label_23fcc4;
        case 0x23fcc8u: goto label_23fcc8;
        case 0x23fcccu: goto label_23fccc;
        case 0x23fcd0u: goto label_23fcd0;
        case 0x23fcd4u: goto label_23fcd4;
        case 0x23fcd8u: goto label_23fcd8;
        case 0x23fcdcu: goto label_23fcdc;
        case 0x23fce0u: goto label_23fce0;
        case 0x23fce4u: goto label_23fce4;
        case 0x23fce8u: goto label_23fce8;
        case 0x23fcecu: goto label_23fcec;
        case 0x23fcf0u: goto label_23fcf0;
        case 0x23fcf4u: goto label_23fcf4;
        case 0x23fcf8u: goto label_23fcf8;
        case 0x23fcfcu: goto label_23fcfc;
        case 0x23fd00u: goto label_23fd00;
        case 0x23fd04u: goto label_23fd04;
        case 0x23fd08u: goto label_23fd08;
        case 0x23fd0cu: goto label_23fd0c;
        case 0x23fd10u: goto label_23fd10;
        case 0x23fd14u: goto label_23fd14;
        case 0x23fd18u: goto label_23fd18;
        case 0x23fd1cu: goto label_23fd1c;
        case 0x23fd20u: goto label_23fd20;
        case 0x23fd24u: goto label_23fd24;
        case 0x23fd28u: goto label_23fd28;
        case 0x23fd2cu: goto label_23fd2c;
        case 0x23fd30u: goto label_23fd30;
        case 0x23fd34u: goto label_23fd34;
        case 0x23fd38u: goto label_23fd38;
        case 0x23fd3cu: goto label_23fd3c;
        case 0x23fd40u: goto label_23fd40;
        case 0x23fd44u: goto label_23fd44;
        case 0x23fd48u: goto label_23fd48;
        case 0x23fd4cu: goto label_23fd4c;
        case 0x23fd50u: goto label_23fd50;
        case 0x23fd54u: goto label_23fd54;
        case 0x23fd58u: goto label_23fd58;
        case 0x23fd5cu: goto label_23fd5c;
        case 0x23fd60u: goto label_23fd60;
        case 0x23fd64u: goto label_23fd64;
        case 0x23fd68u: goto label_23fd68;
        case 0x23fd6cu: goto label_23fd6c;
        case 0x23fd70u: goto label_23fd70;
        case 0x23fd74u: goto label_23fd74;
        case 0x23fd78u: goto label_23fd78;
        case 0x23fd7cu: goto label_23fd7c;
        case 0x23fd80u: goto label_23fd80;
        case 0x23fd84u: goto label_23fd84;
        case 0x23fd88u: goto label_23fd88;
        case 0x23fd8cu: goto label_23fd8c;
        case 0x23fd90u: goto label_23fd90;
        case 0x23fd94u: goto label_23fd94;
        case 0x23fd98u: goto label_23fd98;
        case 0x23fd9cu: goto label_23fd9c;
        case 0x23fda0u: goto label_23fda0;
        case 0x23fda4u: goto label_23fda4;
        case 0x23fda8u: goto label_23fda8;
        case 0x23fdacu: goto label_23fdac;
        case 0x23fdb0u: goto label_23fdb0;
        case 0x23fdb4u: goto label_23fdb4;
        case 0x23fdb8u: goto label_23fdb8;
        case 0x23fdbcu: goto label_23fdbc;
        case 0x23fdc0u: goto label_23fdc0;
        case 0x23fdc4u: goto label_23fdc4;
        case 0x23fdc8u: goto label_23fdc8;
        case 0x23fdccu: goto label_23fdcc;
        case 0x23fdd0u: goto label_23fdd0;
        case 0x23fdd4u: goto label_23fdd4;
        case 0x23fdd8u: goto label_23fdd8;
        case 0x23fddcu: goto label_23fddc;
        case 0x23fde0u: goto label_23fde0;
        case 0x23fde4u: goto label_23fde4;
        case 0x23fde8u: goto label_23fde8;
        case 0x23fdecu: goto label_23fdec;
        case 0x23fdf0u: goto label_23fdf0;
        case 0x23fdf4u: goto label_23fdf4;
        case 0x23fdf8u: goto label_23fdf8;
        case 0x23fdfcu: goto label_23fdfc;
        case 0x23fe00u: goto label_23fe00;
        case 0x23fe04u: goto label_23fe04;
        case 0x23fe08u: goto label_23fe08;
        case 0x23fe0cu: goto label_23fe0c;
        case 0x23fe10u: goto label_23fe10;
        case 0x23fe14u: goto label_23fe14;
        case 0x23fe18u: goto label_23fe18;
        case 0x23fe1cu: goto label_23fe1c;
        case 0x23fe20u: goto label_23fe20;
        case 0x23fe24u: goto label_23fe24;
        case 0x23fe28u: goto label_23fe28;
        case 0x23fe2cu: goto label_23fe2c;
        case 0x23fe30u: goto label_23fe30;
        case 0x23fe34u: goto label_23fe34;
        case 0x23fe38u: goto label_23fe38;
        case 0x23fe3cu: goto label_23fe3c;
        case 0x23fe40u: goto label_23fe40;
        case 0x23fe44u: goto label_23fe44;
        case 0x23fe48u: goto label_23fe48;
        case 0x23fe4cu: goto label_23fe4c;
        case 0x23fe50u: goto label_23fe50;
        case 0x23fe54u: goto label_23fe54;
        case 0x23fe58u: goto label_23fe58;
        case 0x23fe5cu: goto label_23fe5c;
        case 0x23fe60u: goto label_23fe60;
        case 0x23fe64u: goto label_23fe64;
        case 0x23fe68u: goto label_23fe68;
        case 0x23fe6cu: goto label_23fe6c;
        case 0x23fe70u: goto label_23fe70;
        case 0x23fe74u: goto label_23fe74;
        case 0x23fe78u: goto label_23fe78;
        case 0x23fe7cu: goto label_23fe7c;
        case 0x23fe80u: goto label_23fe80;
        case 0x23fe84u: goto label_23fe84;
        case 0x23fe88u: goto label_23fe88;
        case 0x23fe8cu: goto label_23fe8c;
        case 0x23fe90u: goto label_23fe90;
        case 0x23fe94u: goto label_23fe94;
        case 0x23fe98u: goto label_23fe98;
        case 0x23fe9cu: goto label_23fe9c;
        case 0x23fea0u: goto label_23fea0;
        case 0x23fea4u: goto label_23fea4;
        case 0x23fea8u: goto label_23fea8;
        case 0x23feacu: goto label_23feac;
        case 0x23feb0u: goto label_23feb0;
        case 0x23feb4u: goto label_23feb4;
        case 0x23feb8u: goto label_23feb8;
        case 0x23febcu: goto label_23febc;
        case 0x23fec0u: goto label_23fec0;
        case 0x23fec4u: goto label_23fec4;
        case 0x23fec8u: goto label_23fec8;
        case 0x23feccu: goto label_23fecc;
        case 0x23fed0u: goto label_23fed0;
        case 0x23fed4u: goto label_23fed4;
        case 0x23fed8u: goto label_23fed8;
        case 0x23fedcu: goto label_23fedc;
        case 0x23fee0u: goto label_23fee0;
        case 0x23fee4u: goto label_23fee4;
        case 0x23fee8u: goto label_23fee8;
        case 0x23feecu: goto label_23feec;
        case 0x23fef0u: goto label_23fef0;
        case 0x23fef4u: goto label_23fef4;
        case 0x23fef8u: goto label_23fef8;
        case 0x23fefcu: goto label_23fefc;
        case 0x23ff00u: goto label_23ff00;
        case 0x23ff04u: goto label_23ff04;
        case 0x23ff08u: goto label_23ff08;
        case 0x23ff0cu: goto label_23ff0c;
        case 0x23ff10u: goto label_23ff10;
        case 0x23ff14u: goto label_23ff14;
        case 0x23ff18u: goto label_23ff18;
        case 0x23ff1cu: goto label_23ff1c;
        case 0x23ff20u: goto label_23ff20;
        case 0x23ff24u: goto label_23ff24;
        case 0x23ff28u: goto label_23ff28;
        case 0x23ff2cu: goto label_23ff2c;
        case 0x23ff30u: goto label_23ff30;
        case 0x23ff34u: goto label_23ff34;
        case 0x23ff38u: goto label_23ff38;
        case 0x23ff3cu: goto label_23ff3c;
        case 0x23ff40u: goto label_23ff40;
        case 0x23ff44u: goto label_23ff44;
        case 0x23ff48u: goto label_23ff48;
        case 0x23ff4cu: goto label_23ff4c;
        case 0x23ff50u: goto label_23ff50;
        case 0x23ff54u: goto label_23ff54;
        case 0x23ff58u: goto label_23ff58;
        case 0x23ff5cu: goto label_23ff5c;
        case 0x23ff60u: goto label_23ff60;
        case 0x23ff64u: goto label_23ff64;
        case 0x23ff68u: goto label_23ff68;
        case 0x23ff6cu: goto label_23ff6c;
        case 0x23ff70u: goto label_23ff70;
        case 0x23ff74u: goto label_23ff74;
        case 0x23ff78u: goto label_23ff78;
        case 0x23ff7cu: goto label_23ff7c;
        case 0x23ff80u: goto label_23ff80;
        case 0x23ff84u: goto label_23ff84;
        case 0x23ff88u: goto label_23ff88;
        case 0x23ff8cu: goto label_23ff8c;
        case 0x23ff90u: goto label_23ff90;
        case 0x23ff94u: goto label_23ff94;
        case 0x23ff98u: goto label_23ff98;
        case 0x23ff9cu: goto label_23ff9c;
        case 0x23ffa0u: goto label_23ffa0;
        case 0x23ffa4u: goto label_23ffa4;
        case 0x23ffa8u: goto label_23ffa8;
        case 0x23ffacu: goto label_23ffac;
        case 0x23ffb0u: goto label_23ffb0;
        case 0x23ffb4u: goto label_23ffb4;
        case 0x23ffb8u: goto label_23ffb8;
        case 0x23ffbcu: goto label_23ffbc;
        case 0x23ffc0u: goto label_23ffc0;
        case 0x23ffc4u: goto label_23ffc4;
        case 0x23ffc8u: goto label_23ffc8;
        case 0x23ffccu: goto label_23ffcc;
        case 0x23ffd0u: goto label_23ffd0;
        case 0x23ffd4u: goto label_23ffd4;
        case 0x23ffd8u: goto label_23ffd8;
        case 0x23ffdcu: goto label_23ffdc;
        case 0x23ffe0u: goto label_23ffe0;
        case 0x23ffe4u: goto label_23ffe4;
        case 0x23ffe8u: goto label_23ffe8;
        case 0x23ffecu: goto label_23ffec;
        case 0x23fff0u: goto label_23fff0;
        case 0x23fff4u: goto label_23fff4;
        case 0x23fff8u: goto label_23fff8;
        case 0x23fffcu: goto label_23fffc;
        case 0x240000u: goto label_240000;
        case 0x240004u: goto label_240004;
        case 0x240008u: goto label_240008;
        case 0x24000cu: goto label_24000c;
        case 0x240010u: goto label_240010;
        case 0x240014u: goto label_240014;
        case 0x240018u: goto label_240018;
        case 0x24001cu: goto label_24001c;
        case 0x240020u: goto label_240020;
        case 0x240024u: goto label_240024;
        case 0x240028u: goto label_240028;
        case 0x24002cu: goto label_24002c;
        case 0x240030u: goto label_240030;
        case 0x240034u: goto label_240034;
        case 0x240038u: goto label_240038;
        case 0x24003cu: goto label_24003c;
        case 0x240040u: goto label_240040;
        case 0x240044u: goto label_240044;
        case 0x240048u: goto label_240048;
        case 0x24004cu: goto label_24004c;
        case 0x240050u: goto label_240050;
        case 0x240054u: goto label_240054;
        case 0x240058u: goto label_240058;
        case 0x24005cu: goto label_24005c;
        case 0x240060u: goto label_240060;
        case 0x240064u: goto label_240064;
        case 0x240068u: goto label_240068;
        case 0x24006cu: goto label_24006c;
        case 0x240070u: goto label_240070;
        case 0x240074u: goto label_240074;
        case 0x240078u: goto label_240078;
        case 0x24007cu: goto label_24007c;
        case 0x240080u: goto label_240080;
        case 0x240084u: goto label_240084;
        case 0x240088u: goto label_240088;
        case 0x24008cu: goto label_24008c;
        case 0x240090u: goto label_240090;
        case 0x240094u: goto label_240094;
        case 0x240098u: goto label_240098;
        case 0x24009cu: goto label_24009c;
        case 0x2400a0u: goto label_2400a0;
        case 0x2400a4u: goto label_2400a4;
        case 0x2400a8u: goto label_2400a8;
        case 0x2400acu: goto label_2400ac;
        case 0x2400b0u: goto label_2400b0;
        case 0x2400b4u: goto label_2400b4;
        case 0x2400b8u: goto label_2400b8;
        case 0x2400bcu: goto label_2400bc;
        case 0x2400c0u: goto label_2400c0;
        case 0x2400c4u: goto label_2400c4;
        case 0x2400c8u: goto label_2400c8;
        case 0x2400ccu: goto label_2400cc;
        case 0x2400d0u: goto label_2400d0;
        case 0x2400d4u: goto label_2400d4;
        case 0x2400d8u: goto label_2400d8;
        case 0x2400dcu: goto label_2400dc;
        case 0x2400e0u: goto label_2400e0;
        case 0x2400e4u: goto label_2400e4;
        case 0x2400e8u: goto label_2400e8;
        case 0x2400ecu: goto label_2400ec;
        case 0x2400f0u: goto label_2400f0;
        case 0x2400f4u: goto label_2400f4;
        case 0x2400f8u: goto label_2400f8;
        case 0x2400fcu: goto label_2400fc;
        case 0x240100u: goto label_240100;
        case 0x240104u: goto label_240104;
        case 0x240108u: goto label_240108;
        case 0x24010cu: goto label_24010c;
        case 0x240110u: goto label_240110;
        case 0x240114u: goto label_240114;
        case 0x240118u: goto label_240118;
        case 0x24011cu: goto label_24011c;
        case 0x240120u: goto label_240120;
        case 0x240124u: goto label_240124;
        case 0x240128u: goto label_240128;
        case 0x24012cu: goto label_24012c;
        case 0x240130u: goto label_240130;
        case 0x240134u: goto label_240134;
        case 0x240138u: goto label_240138;
        case 0x24013cu: goto label_24013c;
        case 0x240140u: goto label_240140;
        case 0x240144u: goto label_240144;
        case 0x240148u: goto label_240148;
        case 0x24014cu: goto label_24014c;
        case 0x240150u: goto label_240150;
        case 0x240154u: goto label_240154;
        case 0x240158u: goto label_240158;
        case 0x24015cu: goto label_24015c;
        case 0x240160u: goto label_240160;
        case 0x240164u: goto label_240164;
        case 0x240168u: goto label_240168;
        case 0x24016cu: goto label_24016c;
        case 0x240170u: goto label_240170;
        case 0x240174u: goto label_240174;
        case 0x240178u: goto label_240178;
        case 0x24017cu: goto label_24017c;
        case 0x240180u: goto label_240180;
        case 0x240184u: goto label_240184;
        case 0x240188u: goto label_240188;
        case 0x24018cu: goto label_24018c;
        case 0x240190u: goto label_240190;
        case 0x240194u: goto label_240194;
        case 0x240198u: goto label_240198;
        case 0x24019cu: goto label_24019c;
        case 0x2401a0u: goto label_2401a0;
        case 0x2401a4u: goto label_2401a4;
        case 0x2401a8u: goto label_2401a8;
        case 0x2401acu: goto label_2401ac;
        case 0x2401b0u: goto label_2401b0;
        case 0x2401b4u: goto label_2401b4;
        case 0x2401b8u: goto label_2401b8;
        case 0x2401bcu: goto label_2401bc;
        case 0x2401c0u: goto label_2401c0;
        case 0x2401c4u: goto label_2401c4;
        case 0x2401c8u: goto label_2401c8;
        case 0x2401ccu: goto label_2401cc;
        case 0x2401d0u: goto label_2401d0;
        case 0x2401d4u: goto label_2401d4;
        case 0x2401d8u: goto label_2401d8;
        case 0x2401dcu: goto label_2401dc;
        case 0x2401e0u: goto label_2401e0;
        case 0x2401e4u: goto label_2401e4;
        case 0x2401e8u: goto label_2401e8;
        case 0x2401ecu: goto label_2401ec;
        case 0x2401f0u: goto label_2401f0;
        case 0x2401f4u: goto label_2401f4;
        case 0x2401f8u: goto label_2401f8;
        case 0x2401fcu: goto label_2401fc;
        case 0x240200u: goto label_240200;
        case 0x240204u: goto label_240204;
        case 0x240208u: goto label_240208;
        case 0x24020cu: goto label_24020c;
        case 0x240210u: goto label_240210;
        case 0x240214u: goto label_240214;
        case 0x240218u: goto label_240218;
        case 0x24021cu: goto label_24021c;
        case 0x240220u: goto label_240220;
        case 0x240224u: goto label_240224;
        case 0x240228u: goto label_240228;
        case 0x24022cu: goto label_24022c;
        case 0x240230u: goto label_240230;
        case 0x240234u: goto label_240234;
        case 0x240238u: goto label_240238;
        case 0x24023cu: goto label_24023c;
        case 0x240240u: goto label_240240;
        case 0x240244u: goto label_240244;
        case 0x240248u: goto label_240248;
        case 0x24024cu: goto label_24024c;
        case 0x240250u: goto label_240250;
        case 0x240254u: goto label_240254;
        case 0x240258u: goto label_240258;
        case 0x24025cu: goto label_24025c;
        case 0x240260u: goto label_240260;
        case 0x240264u: goto label_240264;
        case 0x240268u: goto label_240268;
        case 0x24026cu: goto label_24026c;
        case 0x240270u: goto label_240270;
        case 0x240274u: goto label_240274;
        case 0x240278u: goto label_240278;
        case 0x24027cu: goto label_24027c;
        case 0x240280u: goto label_240280;
        case 0x240284u: goto label_240284;
        case 0x240288u: goto label_240288;
        case 0x24028cu: goto label_24028c;
        case 0x240290u: goto label_240290;
        case 0x240294u: goto label_240294;
        case 0x240298u: goto label_240298;
        case 0x24029cu: goto label_24029c;
        case 0x2402a0u: goto label_2402a0;
        case 0x2402a4u: goto label_2402a4;
        case 0x2402a8u: goto label_2402a8;
        case 0x2402acu: goto label_2402ac;
        case 0x2402b0u: goto label_2402b0;
        case 0x2402b4u: goto label_2402b4;
        case 0x2402b8u: goto label_2402b8;
        case 0x2402bcu: goto label_2402bc;
        case 0x2402c0u: goto label_2402c0;
        case 0x2402c4u: goto label_2402c4;
        case 0x2402c8u: goto label_2402c8;
        case 0x2402ccu: goto label_2402cc;
        case 0x2402d0u: goto label_2402d0;
        case 0x2402d4u: goto label_2402d4;
        case 0x2402d8u: goto label_2402d8;
        case 0x2402dcu: goto label_2402dc;
        case 0x2402e0u: goto label_2402e0;
        case 0x2402e4u: goto label_2402e4;
        case 0x2402e8u: goto label_2402e8;
        case 0x2402ecu: goto label_2402ec;
        case 0x2402f0u: goto label_2402f0;
        case 0x2402f4u: goto label_2402f4;
        case 0x2402f8u: goto label_2402f8;
        case 0x2402fcu: goto label_2402fc;
        case 0x240300u: goto label_240300;
        case 0x240304u: goto label_240304;
        case 0x240308u: goto label_240308;
        case 0x24030cu: goto label_24030c;
        case 0x240310u: goto label_240310;
        case 0x240314u: goto label_240314;
        case 0x240318u: goto label_240318;
        case 0x24031cu: goto label_24031c;
        case 0x240320u: goto label_240320;
        case 0x240324u: goto label_240324;
        case 0x240328u: goto label_240328;
        case 0x24032cu: goto label_24032c;
        case 0x240330u: goto label_240330;
        case 0x240334u: goto label_240334;
        case 0x240338u: goto label_240338;
        case 0x24033cu: goto label_24033c;
        case 0x240340u: goto label_240340;
        case 0x240344u: goto label_240344;
        case 0x240348u: goto label_240348;
        case 0x24034cu: goto label_24034c;
        case 0x240350u: goto label_240350;
        case 0x240354u: goto label_240354;
        case 0x240358u: goto label_240358;
        case 0x24035cu: goto label_24035c;
        case 0x240360u: goto label_240360;
        case 0x240364u: goto label_240364;
        case 0x240368u: goto label_240368;
        case 0x24036cu: goto label_24036c;
        case 0x240370u: goto label_240370;
        case 0x240374u: goto label_240374;
        case 0x240378u: goto label_240378;
        case 0x24037cu: goto label_24037c;
        case 0x240380u: goto label_240380;
        case 0x240384u: goto label_240384;
        case 0x240388u: goto label_240388;
        case 0x24038cu: goto label_24038c;
        case 0x240390u: goto label_240390;
        case 0x240394u: goto label_240394;
        case 0x240398u: goto label_240398;
        case 0x24039cu: goto label_24039c;
        case 0x2403a0u: goto label_2403a0;
        case 0x2403a4u: goto label_2403a4;
        case 0x2403a8u: goto label_2403a8;
        case 0x2403acu: goto label_2403ac;
        default: break;
    }

    ctx->pc = 0x23edb0u;

label_23edb0:
    // 0x23edb0: 0x27bdfe10  addiu       $sp, $sp, -0x1F0
    ctx->pc = 0x23edb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966800));
label_23edb4:
    // 0x23edb4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x23edb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_23edb8:
    // 0x23edb8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x23edb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_23edbc:
    // 0x23edbc: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x23edbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
label_23edc0:
    // 0x23edc0: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x23edc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_23edc4:
    // 0x23edc4: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x23edc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_23edc8:
    // 0x23edc8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x23edc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_23edcc:
    // 0x23edcc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x23edccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_23edd0:
    // 0x23edd0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x23edd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_23edd4:
    // 0x23edd4: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x23edd4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23edd8:
    // 0x23edd8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x23edd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_23eddc:
    // 0x23eddc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x23eddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_23ede0:
    // 0x23ede0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x23ede0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_23ede4:
    // 0x23ede4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x23ede4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_23ede8:
    // 0x23ede8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x23ede8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_23edec:
    // 0x23edec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x23edecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_23edf0:
    // 0x23edf0: 0x8c860050  lw          $a2, 0x50($a0)
    ctx->pc = 0x23edf0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_23edf4:
    // 0x23edf4: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x23edf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_23edf8:
    // 0x23edf8: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x23edf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_23edfc:
    // 0x23edfc: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x23edfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_23ee00:
    // 0x23ee00: 0x432824  and         $a1, $v0, $v1
    ctx->pc = 0x23ee00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_23ee04:
    // 0x23ee04: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x23ee04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_23ee08:
    // 0x23ee08: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x23ee08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_23ee0c:
    // 0x23ee0c: 0x453021  addu        $a2, $v0, $a1
    ctx->pc = 0x23ee0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_23ee10:
    // 0x23ee10: 0x66082b  sltu        $at, $v1, $a2
    ctx->pc = 0x23ee10u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_23ee14:
    // 0x23ee14: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_23ee18:
    if (ctx->pc == 0x23EE18u) {
        ctx->pc = 0x23EE18u;
            // 0x23ee18: 0xe0f02d  daddu       $fp, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23EE1Cu;
        goto label_23ee1c;
    }
    ctx->pc = 0x23EE14u;
    {
        const bool branch_taken_0x23ee14 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x23EE18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23EE14u;
            // 0x23ee18: 0xe0f02d  daddu       $fp, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ee14) {
            ctx->pc = 0x23EE24u;
            goto label_23ee24;
        }
    }
    ctx->pc = 0x23EE1Cu;
label_23ee1c:
    // 0x23ee1c: 0x10000005  b           . + 4 + (0x5 << 2)
label_23ee20:
    if (ctx->pc == 0x23EE20u) {
        ctx->pc = 0x23EE20u;
            // 0x23ee20: 0xac86000c  sw          $a2, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
        ctx->pc = 0x23EE24u;
        goto label_23ee24;
    }
    ctx->pc = 0x23EE1Cu;
    {
        const bool branch_taken_0x23ee1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23EE20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23EE1Cu;
            // 0x23ee20: 0xac86000c  sw          $a2, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ee1c) {
            ctx->pc = 0x23EE34u;
            goto label_23ee34;
        }
    }
    ctx->pc = 0x23EE24u;
label_23ee24:
    // 0x23ee24: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x23ee24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_23ee28:
    // 0x23ee28: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x23ee28u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_23ee2c:
    // 0x23ee2c: 0x320f809  jalr        $t9
label_23ee30:
    if (ctx->pc == 0x23EE30u) {
        ctx->pc = 0x23EE34u;
        goto label_23ee34;
    }
    ctx->pc = 0x23EE2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x23EE34u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x23EE34u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23EE34u; }
            if (ctx->pc != 0x23EE34u) { return; }
        }
        }
    }
    ctx->pc = 0x23EE34u;
label_23ee34:
    // 0x23ee34: 0xafa201e0  sw          $v0, 0x1E0($sp)
    ctx->pc = 0x23ee34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 480), GPR_U32(ctx, 2));
label_23ee38:
    // 0x23ee38: 0x27a401d8  addiu       $a0, $sp, 0x1D8
    ctx->pc = 0x23ee38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 472));
label_23ee3c:
    // 0x23ee3c: 0x8ea60050  lw          $a2, 0x50($s5)
    ctx->pc = 0x23ee3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
label_23ee40:
    // 0x23ee40: 0xc0a7bb8  jal         func_29EEE0
label_23ee44:
    if (ctx->pc == 0x23EE44u) {
        ctx->pc = 0x23EE44u;
            // 0x23ee44: 0x27a501e0  addiu       $a1, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->pc = 0x23EE48u;
        goto label_23ee48;
    }
    ctx->pc = 0x23EE40u;
    SET_GPR_U32(ctx, 31, 0x23EE48u);
    ctx->pc = 0x23EE44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23EE40u;
            // 0x23ee44: 0x27a501e0  addiu       $a1, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EEE0u;
    if (runtime->hasFunction(0x29EEE0u)) {
        auto targetFn = runtime->lookupFunction(0x29EEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23EE48u; }
        if (ctx->pc != 0x23EE48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EEE0_0x29eee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23EE48u; }
        if (ctx->pc != 0x23EE48u) { return; }
    }
    ctx->pc = 0x23EE48u;
label_23ee48:
    // 0x23ee48: 0x27a401ec  addiu       $a0, $sp, 0x1EC
    ctx->pc = 0x23ee48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 492));
label_23ee4c:
    // 0x23ee4c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x23ee4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_23ee50:
    // 0x23ee50: 0xc08b7c8  jal         func_22DF20
label_23ee54:
    if (ctx->pc == 0x23EE54u) {
        ctx->pc = 0x23EE54u;
            // 0x23ee54: 0x27a601d8  addiu       $a2, $sp, 0x1D8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 472));
        ctx->pc = 0x23EE58u;
        goto label_23ee58;
    }
    ctx->pc = 0x23EE50u;
    SET_GPR_U32(ctx, 31, 0x23EE58u);
    ctx->pc = 0x23EE54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23EE50u;
            // 0x23ee54: 0x27a601d8  addiu       $a2, $sp, 0x1D8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 472));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22DF20u;
    if (runtime->hasFunction(0x22DF20u)) {
        auto targetFn = runtime->lookupFunction(0x22DF20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23EE58u; }
        if (ctx->pc != 0x23EE58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022DF20_0x22df20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23EE58u; }
        if (ctx->pc != 0x23EE58u) { return; }
    }
    ctx->pc = 0x23EE58u;
label_23ee58:
    // 0x23ee58: 0x83a301ec  lb          $v1, 0x1EC($sp)
    ctx->pc = 0x23ee58u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 492)));
label_23ee5c:
    // 0x23ee5c: 0x50600016  beql        $v1, $zero, . + 4 + (0x16 << 2)
label_23ee60:
    if (ctx->pc == 0x23EE60u) {
        ctx->pc = 0x23EE60u;
            // 0x23ee60: 0x27a2012c  addiu       $v0, $sp, 0x12C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 300));
        ctx->pc = 0x23EE64u;
        goto label_23ee64;
    }
    ctx->pc = 0x23EE5Cu;
    {
        const bool branch_taken_0x23ee5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23ee5c) {
            ctx->pc = 0x23EE60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23EE5Cu;
            // 0x23ee60: 0x27a2012c  addiu       $v0, $sp, 0x12C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 300));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23EEB8u;
            goto label_23eeb8;
        }
    }
    ctx->pc = 0x23EE64u;
label_23ee64:
    // 0x23ee64: 0x92a60027  lbu         $a2, 0x27($s5)
    ctx->pc = 0x23ee64u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 39)));
label_23ee68:
    // 0x23ee68: 0x30030003  andi        $v1, $zero, 0x3
    ctx->pc = 0x23ee68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)3);
label_23ee6c:
    // 0x23ee6c: 0x2404fff3  addiu       $a0, $zero, -0xD
    ctx->pc = 0x23ee6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
label_23ee70:
    // 0x23ee70: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x23ee70u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_23ee74:
    // 0x23ee74: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x23ee74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_23ee78:
    // 0x23ee78: 0xc42024  and         $a0, $a2, $a0
    ctx->pc = 0x23ee78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
label_23ee7c:
    // 0x23ee7c: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x23ee7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_23ee80:
    // 0x23ee80: 0xa2a40027  sb          $a0, 0x27($s5)
    ctx->pc = 0x23ee80u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 39), (uint8_t)GPR_U32(ctx, 4));
label_23ee84:
    // 0x23ee84: 0x8c64ea40  lw          $a0, -0x15C0($v1)
    ctx->pc = 0x23ee84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961728)));
label_23ee88:
    // 0x23ee88: 0x8fa501e0  lw          $a1, 0x1E0($sp)
    ctx->pc = 0x23ee88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
label_23ee8c:
    // 0x23ee8c: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x23ee8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
label_23ee90:
    // 0x23ee90: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x23ee90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_23ee94:
    // 0x23ee94: 0x54a3053a  bnel        $a1, $v1, . + 4 + (0x53A << 2)
label_23ee98:
    if (ctx->pc == 0x23EE98u) {
        ctx->pc = 0x23EE98u;
            // 0x23ee98: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->pc = 0x23EE9Cu;
        goto label_23ee9c;
    }
    ctx->pc = 0x23EE94u;
    {
        const bool branch_taken_0x23ee94 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x23ee94) {
            ctx->pc = 0x23EE98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23EE94u;
            // 0x23ee98: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x240380u;
            goto label_240380;
        }
    }
    ctx->pc = 0x23EE9Cu;
label_23ee9c:
    // 0x23ee9c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x23ee9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_23eea0:
    // 0x23eea0: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x23eea0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_23eea4:
    // 0x23eea4: 0x320f809  jalr        $t9
label_23eea8:
    if (ctx->pc == 0x23EEA8u) {
        ctx->pc = 0x23EEACu;
        goto label_23eeac;
    }
    ctx->pc = 0x23EEA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x23EEACu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x23EEACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23EEACu; }
            if (ctx->pc != 0x23EEACu) { return; }
        }
        }
    }
    ctx->pc = 0x23EEACu;
label_23eeac:
    // 0x23eeac: 0x10000533  b           . + 4 + (0x533 << 2)
label_23eeb0:
    if (ctx->pc == 0x23EEB0u) {
        ctx->pc = 0x23EEB4u;
        goto label_23eeb4;
    }
    ctx->pc = 0x23EEACu;
    {
        const bool branch_taken_0x23eeac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23eeac) {
            ctx->pc = 0x24037Cu;
            goto label_24037c;
        }
    }
    ctx->pc = 0x23EEB4u;
label_23eeb4:
    // 0x23eeb4: 0x27a2012c  addiu       $v0, $sp, 0x12C
    ctx->pc = 0x23eeb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 300));
label_23eeb8:
    // 0x23eeb8: 0x27a401d8  addiu       $a0, $sp, 0x1D8
    ctx->pc = 0x23eeb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 472));
label_23eebc:
    // 0x23eebc: 0xafa20120  sw          $v0, 0x120($sp)
    ctx->pc = 0x23eebcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 2));
label_23eec0:
    // 0x23eec0: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x23eec0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_23eec4:
    // 0x23eec4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x23eec4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_23eec8:
    // 0x23eec8: 0xafa00124  sw          $zero, 0x124($sp)
    ctx->pc = 0x23eec8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 0));
label_23eecc:
    // 0x23eecc: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x23eeccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
label_23eed0:
    // 0x23eed0: 0xc0a7c78  jal         func_29F1E0
label_23eed4:
    if (ctx->pc == 0x23EED4u) {
        ctx->pc = 0x23EED4u;
            // 0x23eed4: 0xafa20128  sw          $v0, 0x128($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 2));
        ctx->pc = 0x23EED8u;
        goto label_23eed8;
    }
    ctx->pc = 0x23EED0u;
    SET_GPR_U32(ctx, 31, 0x23EED8u);
    ctx->pc = 0x23EED4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23EED0u;
            // 0x23eed4: 0xafa20128  sw          $v0, 0x128($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29F1E0u;
    if (runtime->hasFunction(0x29F1E0u)) {
        auto targetFn = runtime->lookupFunction(0x29F1E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23EED8u; }
        if (ctx->pc != 0x23EED8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029F1E0_0x29f1e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23EED8u; }
        if (ctx->pc != 0x23EED8u) { return; }
    }
    ctx->pc = 0x23EED8u;
label_23eed8:
    // 0x23eed8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x23eed8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_23eedc:
    // 0x23eedc: 0x8fa50124  lw          $a1, 0x124($sp)
    ctx->pc = 0x23eedcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
label_23eee0:
    // 0x23eee0: 0x8c64ea40  lw          $a0, -0x15C0($v1)
    ctx->pc = 0x23eee0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961728)));
label_23eee4:
    // 0x23eee4: 0x24a50011  addiu       $a1, $a1, 0x11
    ctx->pc = 0x23eee4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17));
label_23eee8:
    // 0x23eee8: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x23eee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
label_23eeec:
    // 0x23eeec: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x23eeecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_23eef0:
    // 0x23eef0: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x23eef0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_23eef4:
    // 0x23eef4: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x23eef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_23eef8:
    // 0x23eef8: 0xe53021  addu        $a2, $a3, $a1
    ctx->pc = 0x23eef8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_23eefc:
    // 0x23eefc: 0x66082b  sltu        $at, $v1, $a2
    ctx->pc = 0x23eefcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_23ef00:
    // 0x23ef00: 0x54200004  bnel        $at, $zero, . + 4 + (0x4 << 2)
label_23ef04:
    if (ctx->pc == 0x23EF04u) {
        ctx->pc = 0x23EF04u;
            // 0x23ef04: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x23EF08u;
        goto label_23ef08;
    }
    ctx->pc = 0x23EF00u;
    {
        const bool branch_taken_0x23ef00 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x23ef00) {
            ctx->pc = 0x23EF04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23EF00u;
            // 0x23ef04: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23EF14u;
            goto label_23ef14;
        }
    }
    ctx->pc = 0x23EF08u;
label_23ef08:
    // 0x23ef08: 0x10000006  b           . + 4 + (0x6 << 2)
label_23ef0c:
    if (ctx->pc == 0x23EF0Cu) {
        ctx->pc = 0x23EF0Cu;
            // 0x23ef0c: 0xac86000c  sw          $a2, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
        ctx->pc = 0x23EF10u;
        goto label_23ef10;
    }
    ctx->pc = 0x23EF08u;
    {
        const bool branch_taken_0x23ef08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23EF0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23EF08u;
            // 0x23ef0c: 0xac86000c  sw          $a2, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ef08) {
            ctx->pc = 0x23EF24u;
            goto label_23ef24;
        }
    }
    ctx->pc = 0x23EF10u;
label_23ef10:
    // 0x23ef10: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x23ef10u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_23ef14:
    // 0x23ef14: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x23ef14u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_23ef18:
    // 0x23ef18: 0x320f809  jalr        $t9
label_23ef1c:
    if (ctx->pc == 0x23EF1Cu) {
        ctx->pc = 0x23EF20u;
        goto label_23ef20;
    }
    ctx->pc = 0x23EF18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x23EF20u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x23EF20u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23EF20u; }
            if (ctx->pc != 0x23EF20u) { return; }
        }
        }
    }
    ctx->pc = 0x23EF20u;
label_23ef20:
    // 0x23ef20: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x23ef20u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23ef24:
    // 0x23ef24: 0x92a30027  lbu         $v1, 0x27($s5)
    ctx->pc = 0x23ef24u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 39)));
label_23ef28:
    // 0x23ef28: 0x31f3c  dsll32      $v1, $v1, 28
    ctx->pc = 0x23ef28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 28));
label_23ef2c:
    // 0x23ef2c: 0x31fbe  dsrl32      $v1, $v1, 30
    ctx->pc = 0x23ef2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 30));
label_23ef30:
    // 0x23ef30: 0x1060010d  beqz        $v1, . + 4 + (0x10D << 2)
label_23ef34:
    if (ctx->pc == 0x23EF34u) {
        ctx->pc = 0x23EF34u;
            // 0x23ef34: 0xafa701d0  sw          $a3, 0x1D0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 464), GPR_U32(ctx, 7));
        ctx->pc = 0x23EF38u;
        goto label_23ef38;
    }
    ctx->pc = 0x23EF30u;
    {
        const bool branch_taken_0x23ef30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23EF34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23EF30u;
            // 0x23ef34: 0xafa701d0  sw          $a3, 0x1D0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 464), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ef30) {
            ctx->pc = 0x23F368u;
            goto label_23f368;
        }
    }
    ctx->pc = 0x23EF38u;
label_23ef38:
    // 0x23ef38: 0x826300d1  lb          $v1, 0xD1($s3)
    ctx->pc = 0x23ef38u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 209)));
label_23ef3c:
    // 0x23ef3c: 0x106000e5  beqz        $v1, . + 4 + (0xE5 << 2)
label_23ef40:
    if (ctx->pc == 0x23EF40u) {
        ctx->pc = 0x23EF44u;
        goto label_23ef44;
    }
    ctx->pc = 0x23EF3Cu;
    {
        const bool branch_taken_0x23ef3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23ef3c) {
            ctx->pc = 0x23F2D4u;
            goto label_23f2d4;
        }
    }
    ctx->pc = 0x23EF44u;
label_23ef44:
    // 0x23ef44: 0x8fb00124  lw          $s0, 0x124($sp)
    ctx->pc = 0x23ef44u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
label_23ef48:
    // 0x23ef48: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x23ef48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_23ef4c:
    // 0x23ef4c: 0x8c64ea40  lw          $a0, -0x15C0($v1)
    ctx->pc = 0x23ef4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961728)));
label_23ef50:
    // 0x23ef50: 0x102880  sll         $a1, $s0, 2
    ctx->pc = 0x23ef50u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_23ef54:
    // 0x23ef54: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x23ef54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
label_23ef58:
    // 0x23ef58: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x23ef58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_23ef5c:
    // 0x23ef5c: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x23ef5cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_23ef60:
    // 0x23ef60: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x23ef60u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_23ef64:
    // 0x23ef64: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x23ef64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_23ef68:
    // 0x23ef68: 0xe53021  addu        $a2, $a3, $a1
    ctx->pc = 0x23ef68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_23ef6c:
    // 0x23ef6c: 0x66082b  sltu        $at, $v1, $a2
    ctx->pc = 0x23ef6cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_23ef70:
    // 0x23ef70: 0x54200004  bnel        $at, $zero, . + 4 + (0x4 << 2)
label_23ef74:
    if (ctx->pc == 0x23EF74u) {
        ctx->pc = 0x23EF74u;
            // 0x23ef74: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x23EF78u;
        goto label_23ef78;
    }
    ctx->pc = 0x23EF70u;
    {
        const bool branch_taken_0x23ef70 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x23ef70) {
            ctx->pc = 0x23EF74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23EF70u;
            // 0x23ef74: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23EF84u;
            goto label_23ef84;
        }
    }
    ctx->pc = 0x23EF78u;
label_23ef78:
    // 0x23ef78: 0x10000006  b           . + 4 + (0x6 << 2)
label_23ef7c:
    if (ctx->pc == 0x23EF7Cu) {
        ctx->pc = 0x23EF7Cu;
            // 0x23ef7c: 0xac86000c  sw          $a2, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
        ctx->pc = 0x23EF80u;
        goto label_23ef80;
    }
    ctx->pc = 0x23EF78u;
    {
        const bool branch_taken_0x23ef78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23EF7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23EF78u;
            // 0x23ef7c: 0xac86000c  sw          $a2, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ef78) {
            ctx->pc = 0x23EF94u;
            goto label_23ef94;
        }
    }
    ctx->pc = 0x23EF80u;
label_23ef80:
    // 0x23ef80: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x23ef80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_23ef84:
    // 0x23ef84: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x23ef84u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_23ef88:
    // 0x23ef88: 0x320f809  jalr        $t9
label_23ef8c:
    if (ctx->pc == 0x23EF8Cu) {
        ctx->pc = 0x23EF90u;
        goto label_23ef90;
    }
    ctx->pc = 0x23EF88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x23EF90u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x23EF90u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23EF90u; }
            if (ctx->pc != 0x23EF90u) { return; }
        }
        }
    }
    ctx->pc = 0x23EF90u;
label_23ef90:
    // 0x23ef90: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x23ef90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23ef94:
    // 0x23ef94: 0xafa701c0  sw          $a3, 0x1C0($sp)
    ctx->pc = 0x23ef94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 448), GPR_U32(ctx, 7));
label_23ef98:
    // 0x23ef98: 0x1a000037  blez        $s0, . + 4 + (0x37 << 2)
label_23ef9c:
    if (ctx->pc == 0x23EF9Cu) {
        ctx->pc = 0x23EF9Cu;
            // 0x23ef9c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23EFA0u;
        goto label_23efa0;
    }
    ctx->pc = 0x23EF98u;
    {
        const bool branch_taken_0x23ef98 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x23EF9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23EF98u;
            // 0x23ef9c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ef98) {
            ctx->pc = 0x23F078u;
            goto label_23f078;
        }
    }
    ctx->pc = 0x23EFA0u;
label_23efa0:
    // 0x23efa0: 0x2a010009  slti        $at, $s0, 0x9
    ctx->pc = 0x23efa0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)9) ? 1 : 0);
label_23efa4:
    // 0x23efa4: 0x14200028  bnez        $at, . + 4 + (0x28 << 2)
label_23efa8:
    if (ctx->pc == 0x23EFA8u) {
        ctx->pc = 0x23EFA8u;
            // 0x23efa8: 0x2603fff8  addiu       $v1, $s0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
        ctx->pc = 0x23EFACu;
        goto label_23efac;
    }
    ctx->pc = 0x23EFA4u;
    {
        const bool branch_taken_0x23efa4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x23EFA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23EFA4u;
            // 0x23efa8: 0x2603fff8  addiu       $v1, $s0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23efa4) {
            ctx->pc = 0x23F048u;
            goto label_23f048;
        }
    }
    ctx->pc = 0x23EFACu;
label_23efac:
    // 0x23efac: 0x6000007  bltz        $s0, . + 4 + (0x7 << 2)
label_23efb0:
    if (ctx->pc == 0x23EFB0u) {
        ctx->pc = 0x23EFB0u;
            // 0x23efb0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23EFB4u;
        goto label_23efb4;
    }
    ctx->pc = 0x23EFACu;
    {
        const bool branch_taken_0x23efac = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x23EFB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23EFACu;
            // 0x23efb0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23efac) {
            ctx->pc = 0x23EFCCu;
            goto label_23efcc;
        }
    }
    ctx->pc = 0x23EFB4u;
label_23efb4:
    // 0x23efb4: 0x3c017fff  lui         $at, 0x7FFF
    ctx->pc = 0x23efb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)32767 << 16));
label_23efb8:
    // 0x23efb8: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x23efb8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
label_23efbc:
    // 0x23efbc: 0x201082a  slt         $at, $s0, $at
    ctx->pc = 0x23efbcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_23efc0:
    // 0x23efc0: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_23efc4:
    if (ctx->pc == 0x23EFC4u) {
        ctx->pc = 0x23EFC8u;
        goto label_23efc8;
    }
    ctx->pc = 0x23EFC0u;
    {
        const bool branch_taken_0x23efc0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x23efc0) {
            ctx->pc = 0x23EFCCu;
            goto label_23efcc;
        }
    }
    ctx->pc = 0x23EFC8u;
label_23efc8:
    // 0x23efc8: 0x64040001  daddiu      $a0, $zero, 0x1
    ctx->pc = 0x23efc8u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_23efcc:
    // 0x23efcc: 0x1080001e  beqz        $a0, . + 4 + (0x1E << 2)
label_23efd0:
    if (ctx->pc == 0x23EFD0u) {
        ctx->pc = 0x23EFD4u;
        goto label_23efd4;
    }
    ctx->pc = 0x23EFCCu;
    {
        const bool branch_taken_0x23efcc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x23efcc) {
            ctx->pc = 0x23F048u;
            goto label_23f048;
        }
    }
    ctx->pc = 0x23EFD4u;
label_23efd4:
    // 0x23efd4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x23efd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23efd8:
    // 0x23efd8: 0x8fa701c0  lw          $a3, 0x1C0($sp)
    ctx->pc = 0x23efd8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
label_23efdc:
    // 0x23efdc: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x23efdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
label_23efe0:
    // 0x23efe0: 0xa3302a  slt         $a2, $a1, $v1
    ctx->pc = 0x23efe0u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_23efe4:
    // 0x23efe4: 0xe43821  addu        $a3, $a3, $a0
    ctx->pc = 0x23efe4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
label_23efe8:
    // 0x23efe8: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x23efe8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
label_23efec:
    // 0x23efec: 0x8fa701c0  lw          $a3, 0x1C0($sp)
    ctx->pc = 0x23efecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
label_23eff0:
    // 0x23eff0: 0xe43821  addu        $a3, $a3, $a0
    ctx->pc = 0x23eff0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
label_23eff4:
    // 0x23eff4: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x23eff4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
label_23eff8:
    // 0x23eff8: 0x8fa701c0  lw          $a3, 0x1C0($sp)
    ctx->pc = 0x23eff8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
label_23effc:
    // 0x23effc: 0xe43821  addu        $a3, $a3, $a0
    ctx->pc = 0x23effcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
label_23f000:
    // 0x23f000: 0xace00008  sw          $zero, 0x8($a3)
    ctx->pc = 0x23f000u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 0));
label_23f004:
    // 0x23f004: 0x8fa701c0  lw          $a3, 0x1C0($sp)
    ctx->pc = 0x23f004u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
label_23f008:
    // 0x23f008: 0xe43821  addu        $a3, $a3, $a0
    ctx->pc = 0x23f008u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
label_23f00c:
    // 0x23f00c: 0xace0000c  sw          $zero, 0xC($a3)
    ctx->pc = 0x23f00cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 0));
label_23f010:
    // 0x23f010: 0x8fa701c0  lw          $a3, 0x1C0($sp)
    ctx->pc = 0x23f010u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
label_23f014:
    // 0x23f014: 0xe43821  addu        $a3, $a3, $a0
    ctx->pc = 0x23f014u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
label_23f018:
    // 0x23f018: 0xace00010  sw          $zero, 0x10($a3)
    ctx->pc = 0x23f018u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 0));
label_23f01c:
    // 0x23f01c: 0x8fa701c0  lw          $a3, 0x1C0($sp)
    ctx->pc = 0x23f01cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
label_23f020:
    // 0x23f020: 0xe43821  addu        $a3, $a3, $a0
    ctx->pc = 0x23f020u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
label_23f024:
    // 0x23f024: 0xace00014  sw          $zero, 0x14($a3)
    ctx->pc = 0x23f024u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 0));
label_23f028:
    // 0x23f028: 0x8fa701c0  lw          $a3, 0x1C0($sp)
    ctx->pc = 0x23f028u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
label_23f02c:
    // 0x23f02c: 0xe43821  addu        $a3, $a3, $a0
    ctx->pc = 0x23f02cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
label_23f030:
    // 0x23f030: 0xace00018  sw          $zero, 0x18($a3)
    ctx->pc = 0x23f030u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 0));
label_23f034:
    // 0x23f034: 0x8fa701c0  lw          $a3, 0x1C0($sp)
    ctx->pc = 0x23f034u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
label_23f038:
    // 0x23f038: 0xe43821  addu        $a3, $a3, $a0
    ctx->pc = 0x23f038u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
label_23f03c:
    // 0x23f03c: 0xace0001c  sw          $zero, 0x1C($a3)
    ctx->pc = 0x23f03cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 0));
label_23f040:
    // 0x23f040: 0x14c0ffe5  bnez        $a2, . + 4 + (-0x1B << 2)
label_23f044:
    if (ctx->pc == 0x23F044u) {
        ctx->pc = 0x23F044u;
            // 0x23f044: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->pc = 0x23F048u;
        goto label_23f048;
    }
    ctx->pc = 0x23F040u;
    {
        const bool branch_taken_0x23f040 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x23F044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23F040u;
            // 0x23f044: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f040) {
            ctx->pc = 0x23EFD8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_23efd8;
        }
    }
    ctx->pc = 0x23F048u;
label_23f048:
    // 0x23f048: 0xb0082a  slt         $at, $a1, $s0
    ctx->pc = 0x23f048u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_23f04c:
    // 0x23f04c: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
label_23f050:
    if (ctx->pc == 0x23F050u) {
        ctx->pc = 0x23F054u;
        goto label_23f054;
    }
    ctx->pc = 0x23F04Cu;
    {
        const bool branch_taken_0x23f04c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x23f04c) {
            ctx->pc = 0x23F078u;
            goto label_23f078;
        }
    }
    ctx->pc = 0x23F054u;
label_23f054:
    // 0x23f054: 0x53080  sll         $a2, $a1, 2
    ctx->pc = 0x23f054u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_23f058:
    // 0x23f058: 0x8fa401c0  lw          $a0, 0x1C0($sp)
    ctx->pc = 0x23f058u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
label_23f05c:
    // 0x23f05c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x23f05cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_23f060:
    // 0x23f060: 0xb0182a  slt         $v1, $a1, $s0
    ctx->pc = 0x23f060u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_23f064:
    // 0x23f064: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x23f064u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_23f068:
    // 0x23f068: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x23f068u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_23f06c:
    // 0x23f06c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_23f070:
    if (ctx->pc == 0x23F070u) {
        ctx->pc = 0x23F070u;
            // 0x23f070: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->pc = 0x23F074u;
        goto label_23f074;
    }
    ctx->pc = 0x23F06Cu;
    {
        const bool branch_taken_0x23f06c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x23F070u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23F06Cu;
            // 0x23f070: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f06c) {
            ctx->pc = 0x23F058u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_23f058;
        }
    }
    ctx->pc = 0x23F074u;
label_23f074:
    // 0x23f074: 0x0  nop
    ctx->pc = 0x23f074u;
    // NOP
label_23f078:
    // 0x23f078: 0x8ea30050  lw          $v1, 0x50($s5)
    ctx->pc = 0x23f078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
label_23f07c:
    // 0x23f07c: 0x266502ed  addiu       $a1, $s3, 0x2ED
    ctx->pc = 0x23f07cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 749));
label_23f080:
    // 0x23f080: 0x18600031  blez        $v1, . + 4 + (0x31 << 2)
label_23f084:
    if (ctx->pc == 0x23F084u) {
        ctx->pc = 0x23F084u;
            // 0x23f084: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23F088u;
        goto label_23f088;
    }
    ctx->pc = 0x23F080u;
    {
        const bool branch_taken_0x23f080 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x23F084u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23F080u;
            // 0x23f084: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f080) {
            ctx->pc = 0x23F148u;
            goto label_23f148;
        }
    }
    ctx->pc = 0x23F088u;
label_23f088:
    // 0x23f088: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x23f088u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23f08c:
    // 0x23f08c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x23f08cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23f090:
    // 0x23f090: 0x8ea6004c  lw          $a2, 0x4C($s5)
    ctx->pc = 0x23f090u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
label_23f094:
    // 0x23f094: 0x90a70001  lbu         $a3, 0x1($a1)
    ctx->pc = 0x23f094u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
label_23f098:
    // 0x23f098: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x23f098u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_23f09c:
    // 0x23f09c: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x23f09cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_23f0a0:
    // 0x23f0a0: 0x94cb00aa  lhu         $t3, 0xAA($a2)
    ctx->pc = 0x23f0a0u;
    SET_GPR_U32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 170)));
label_23f0a4:
    // 0x23f0a4: 0x94c900ac  lhu         $t1, 0xAC($a2)
    ctx->pc = 0x23f0a4u;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 172)));
label_23f0a8:
    // 0x23f0a8: 0x93383  sra         $a2, $t1, 14
    ctx->pc = 0x23f0a8u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 9), 14));
label_23f0ac:
    // 0x23f0ac: 0x10e60003  beq         $a3, $a2, . + 4 + (0x3 << 2)
label_23f0b0:
    if (ctx->pc == 0x23F0B0u) {
        ctx->pc = 0x23F0B0u;
            // 0x23f0b0: 0x90aa0000  lbu         $t2, 0x0($a1) (Delay Slot)
        SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->pc = 0x23F0B4u;
        goto label_23f0b4;
    }
    ctx->pc = 0x23F0ACu;
    {
        const bool branch_taken_0x23f0ac = (GPR_U64(ctx, 7) == GPR_U64(ctx, 6));
        ctx->pc = 0x23F0B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23F0ACu;
            // 0x23f0b0: 0x90aa0000  lbu         $t2, 0x0($a1) (Delay Slot)
        SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f0ac) {
            ctx->pc = 0x23F0BCu;
            goto label_23f0bc;
        }
    }
    ctx->pc = 0x23F0B4u;
label_23f0b4:
    // 0x23f0b4: 0x10000003  b           . + 4 + (0x3 << 2)
label_23f0b8:
    if (ctx->pc == 0x23F0B8u) {
        ctx->pc = 0x23F0B8u;
            // 0x23f0b8: 0x3126007f  andi        $a2, $t1, 0x7F (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)127);
        ctx->pc = 0x23F0BCu;
        goto label_23f0bc;
    }
    ctx->pc = 0x23F0B4u;
    {
        const bool branch_taken_0x23f0b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F0B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23F0B4u;
            // 0x23f0b8: 0x3126007f  andi        $a2, $t1, 0x7F (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)127);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f0b4) {
            ctx->pc = 0x23F0C4u;
            goto label_23f0c4;
        }
    }
    ctx->pc = 0x23F0BCu;
label_23f0bc:
    // 0x23f0bc: 0x931c3  sra         $a2, $t1, 7
    ctx->pc = 0x23f0bcu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 9), 7));
label_23f0c0:
    // 0x23f0c0: 0x30c6007f  andi        $a2, $a2, 0x7F
    ctx->pc = 0x23f0c0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)127);
label_23f0c4:
    // 0x23f0c4: 0x30c7007f  andi        $a3, $a2, 0x7F
    ctx->pc = 0x23f0c4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)127);
label_23f0c8:
    // 0x23f0c8: 0xb3383  sra         $a2, $t3, 14
    ctx->pc = 0x23f0c8u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 11), 14));
label_23f0cc:
    // 0x23f0cc: 0x51460004  beql        $t2, $a2, . + 4 + (0x4 << 2)
label_23f0d0:
    if (ctx->pc == 0x23F0D0u) {
        ctx->pc = 0x23F0D0u;
            // 0x23f0d0: 0xb31c3  sra         $a2, $t3, 7 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 11), 7));
        ctx->pc = 0x23F0D4u;
        goto label_23f0d4;
    }
    ctx->pc = 0x23F0CCu;
    {
        const bool branch_taken_0x23f0cc = (GPR_U64(ctx, 10) == GPR_U64(ctx, 6));
        if (branch_taken_0x23f0cc) {
            ctx->pc = 0x23F0D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23F0CCu;
            // 0x23f0d0: 0xb31c3  sra         $a2, $t3, 7 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 11), 7));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23F0E0u;
            goto label_23f0e0;
        }
    }
    ctx->pc = 0x23F0D4u;
label_23f0d4:
    // 0x23f0d4: 0x10000003  b           . + 4 + (0x3 << 2)
label_23f0d8:
    if (ctx->pc == 0x23F0D8u) {
        ctx->pc = 0x23F0D8u;
            // 0x23f0d8: 0x3166007f  andi        $a2, $t3, 0x7F (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)127);
        ctx->pc = 0x23F0DCu;
        goto label_23f0dc;
    }
    ctx->pc = 0x23F0D4u;
    {
        const bool branch_taken_0x23f0d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F0D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23F0D4u;
            // 0x23f0d8: 0x3166007f  andi        $a2, $t3, 0x7F (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)127);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f0d4) {
            ctx->pc = 0x23F0E4u;
            goto label_23f0e4;
        }
    }
    ctx->pc = 0x23F0DCu;
label_23f0dc:
    // 0x23f0dc: 0xb31c3  sra         $a2, $t3, 7
    ctx->pc = 0x23f0dcu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 11), 7));
label_23f0e0:
    // 0x23f0e0: 0x30c6007f  andi        $a2, $a2, 0x7F
    ctx->pc = 0x23f0e0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)127);
label_23f0e4:
    // 0x23f0e4: 0x30c6007f  andi        $a2, $a2, 0x7F
    ctx->pc = 0x23f0e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)127);
label_23f0e8:
    // 0x23f0e8: 0xe6082a  slt         $at, $a3, $a2
    ctx->pc = 0x23f0e8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_23f0ec:
    // 0x23f0ec: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_23f0f0:
    if (ctx->pc == 0x23F0F0u) {
        ctx->pc = 0x23F0F0u;
            // 0x23f0f0: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23F0F4u;
        goto label_23f0f4;
    }
    ctx->pc = 0x23F0ECu;
    {
        const bool branch_taken_0x23f0ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x23f0ec) {
            ctx->pc = 0x23F0F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23F0ECu;
            // 0x23f0f0: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23F100u;
            goto label_23f100;
        }
    }
    ctx->pc = 0x23F0F4u;
label_23f0f4:
    // 0x23f0f4: 0x10000003  b           . + 4 + (0x3 << 2)
label_23f0f8:
    if (ctx->pc == 0x23F0F8u) {
        ctx->pc = 0x23F0F8u;
            // 0x23f0f8: 0x28c10006  slti        $at, $a2, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)6) ? 1 : 0);
        ctx->pc = 0x23F0FCu;
        goto label_23f0fc;
    }
    ctx->pc = 0x23F0F4u;
    {
        const bool branch_taken_0x23f0f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F0F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23F0F4u;
            // 0x23f0f8: 0x28c10006  slti        $at, $a2, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f0f4) {
            ctx->pc = 0x23F104u;
            goto label_23f104;
        }
    }
    ctx->pc = 0x23F0FCu;
label_23f0fc:
    // 0x23f0fc: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x23f0fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_23f100:
    // 0x23f100: 0x28c10006  slti        $at, $a2, 0x6
    ctx->pc = 0x23f100u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)6) ? 1 : 0);
label_23f104:
    // 0x23f104: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
label_23f108:
    if (ctx->pc == 0x23F108u) {
        ctx->pc = 0x23F10Cu;
        goto label_23f10c;
    }
    ctx->pc = 0x23F104u;
    {
        const bool branch_taken_0x23f104 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x23f104) {
            ctx->pc = 0x23F130u;
            goto label_23f130;
        }
    }
    ctx->pc = 0x23F10Cu;
label_23f10c:
    // 0x23f10c: 0x8fa701d8  lw          $a3, 0x1D8($sp)
    ctx->pc = 0x23f10cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
label_23f110:
    // 0x23f110: 0x8fa601c0  lw          $a2, 0x1C0($sp)
    ctx->pc = 0x23f110u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
label_23f114:
    // 0x23f114: 0x8ce70000  lw          $a3, 0x0($a3)
    ctx->pc = 0x23f114u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_23f118:
    // 0x23f118: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x23f118u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
label_23f11c:
    // 0x23f11c: 0x8ce70000  lw          $a3, 0x0($a3)
    ctx->pc = 0x23f11cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_23f120:
    // 0x23f120: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x23f120u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_23f124:
    // 0x23f124: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x23f124u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_23f128:
    // 0x23f128: 0xacc80000  sw          $t0, 0x0($a2)
    ctx->pc = 0x23f128u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 8));
label_23f12c:
    // 0x23f12c: 0x0  nop
    ctx->pc = 0x23f12cu;
    // NOP
label_23f130:
    // 0x23f130: 0x8ea60050  lw          $a2, 0x50($s5)
    ctx->pc = 0x23f130u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
label_23f134:
    // 0x23f134: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x23f134u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_23f138:
    // 0x23f138: 0x86302a  slt         $a2, $a0, $a2
    ctx->pc = 0x23f138u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_23f13c:
    // 0x23f13c: 0x14c0ffd4  bnez        $a2, . + 4 + (-0x2C << 2)
label_23f140:
    if (ctx->pc == 0x23F140u) {
        ctx->pc = 0x23F140u;
            // 0x23f140: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->pc = 0x23F144u;
        goto label_23f144;
    }
    ctx->pc = 0x23F13Cu;
    {
        const bool branch_taken_0x23f13c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x23F140u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23F13Cu;
            // 0x23f140: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f13c) {
            ctx->pc = 0x23F090u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_23f090;
        }
    }
    ctx->pc = 0x23F144u;
label_23f144:
    // 0x23f144: 0x0  nop
    ctx->pc = 0x23f144u;
    // NOP
label_23f148:
    // 0x23f148: 0x8fa501c0  lw          $a1, 0x1C0($sp)
    ctx->pc = 0x23f148u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
label_23f14c:
    // 0x23f14c: 0x8fa401d0  lw          $a0, 0x1D0($sp)
    ctx->pc = 0x23f14cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
label_23f150:
    // 0x23f150: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x23f150u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23f154:
    // 0x23f154: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x23f154u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23f158:
    // 0x23f158: 0x1a000013  blez        $s0, . + 4 + (0x13 << 2)
label_23f15c:
    if (ctx->pc == 0x23F15Cu) {
        ctx->pc = 0x23F15Cu;
            // 0x23f15c: 0xa0860000  sb          $a2, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 6));
        ctx->pc = 0x23F160u;
        goto label_23f160;
    }
    ctx->pc = 0x23F158u;
    {
        const bool branch_taken_0x23f158 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x23F15Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23F158u;
            // 0x23f15c: 0xa0860000  sb          $a2, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f158) {
            ctx->pc = 0x23F1A8u;
            goto label_23f1a8;
        }
    }
    ctx->pc = 0x23F160u;
label_23f160:
    // 0x23f160: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x23f160u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23f164:
    // 0x23f164: 0x8fa301c0  lw          $v1, 0x1C0($sp)
    ctx->pc = 0x23f164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
label_23f168:
    // 0x23f168: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x23f168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_23f16c:
    // 0x23f16c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x23f16cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_23f170:
    // 0x23f170: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_23f174:
    if (ctx->pc == 0x23F174u) {
        ctx->pc = 0x23F178u;
        goto label_23f178;
    }
    ctx->pc = 0x23F170u;
    {
        const bool branch_taken_0x23f170 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23f170) {
            ctx->pc = 0x23F180u;
            goto label_23f180;
        }
    }
    ctx->pc = 0x23F178u;
label_23f178:
    // 0x23f178: 0x10000005  b           . + 4 + (0x5 << 2)
label_23f17c:
    if (ctx->pc == 0x23F17Cu) {
        ctx->pc = 0x23F17Cu;
            // 0x23f17c: 0xaca00000  sw          $zero, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
        ctx->pc = 0x23F180u;
        goto label_23f180;
    }
    ctx->pc = 0x23F178u;
    {
        const bool branch_taken_0x23f178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F17Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23F178u;
            // 0x23f17c: 0xaca00000  sw          $zero, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f178) {
            ctx->pc = 0x23F190u;
            goto label_23f190;
        }
    }
    ctx->pc = 0x23F180u;
label_23f180:
    // 0x23f180: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x23f180u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
label_23f184:
    // 0x23f184: 0x861821  addu        $v1, $a0, $a2
    ctx->pc = 0x23f184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_23f188:
    // 0x23f188: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x23f188u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_23f18c:
    // 0x23f18c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x23f18cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_23f190:
    // 0x23f190: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x23f190u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_23f194:
    // 0x23f194: 0x110182a  slt         $v1, $t0, $s0
    ctx->pc = 0x23f194u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_23f198:
    // 0x23f198: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x23f198u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_23f19c:
    // 0x23f19c: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
label_23f1a0:
    if (ctx->pc == 0x23F1A0u) {
        ctx->pc = 0x23F1A0u;
            // 0x23f1a0: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x23F1A4u;
        goto label_23f1a4;
    }
    ctx->pc = 0x23F19Cu;
    {
        const bool branch_taken_0x23f19c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x23F1A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23F19Cu;
            // 0x23f1a0: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f19c) {
            ctx->pc = 0x23F164u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_23f164;
        }
    }
    ctx->pc = 0x23F1A4u;
label_23f1a4:
    // 0x23f1a4: 0x0  nop
    ctx->pc = 0x23f1a4u;
    // NOP
label_23f1a8:
    // 0x23f1a8: 0x206082a  slt         $at, $s0, $a2
    ctx->pc = 0x23f1a8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_23f1ac:
    // 0x23f1ac: 0x50200011  beql        $at, $zero, . + 4 + (0x11 << 2)
label_23f1b0:
    if (ctx->pc == 0x23F1B0u) {
        ctx->pc = 0x23F1B0u;
            // 0x23f1b0: 0x27a401d8  addiu       $a0, $sp, 0x1D8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 472));
        ctx->pc = 0x23F1B4u;
        goto label_23f1b4;
    }
    ctx->pc = 0x23F1ACu;
    {
        const bool branch_taken_0x23f1ac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x23f1ac) {
            ctx->pc = 0x23F1B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23F1ACu;
            // 0x23f1b0: 0x27a401d8  addiu       $a0, $sp, 0x1D8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 472));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23F1F4u;
            goto label_23f1f4;
        }
    }
    ctx->pc = 0x23F1B4u;
label_23f1b4:
    // 0x23f1b4: 0x8fa401d0  lw          $a0, 0x1D0($sp)
    ctx->pc = 0x23f1b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
label_23f1b8:
    // 0x23f1b8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x23f1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_23f1bc:
    // 0x23f1bc: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x23f1bcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
label_23f1c0:
    // 0x23f1c0: 0x8c64ea40  lw          $a0, -0x15C0($v1)
    ctx->pc = 0x23f1c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961728)));
label_23f1c4:
    // 0x23f1c4: 0x8fa501c0  lw          $a1, 0x1C0($sp)
    ctx->pc = 0x23f1c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
label_23f1c8:
    // 0x23f1c8: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x23f1c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
label_23f1cc:
    // 0x23f1cc: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x23f1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_23f1d0:
    // 0x23f1d0: 0x54a30017  bnel        $a1, $v1, . + 4 + (0x17 << 2)
label_23f1d4:
    if (ctx->pc == 0x23F1D4u) {
        ctx->pc = 0x23F1D4u;
            // 0x23f1d4: 0x8fa40124  lw          $a0, 0x124($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
        ctx->pc = 0x23F1D8u;
        goto label_23f1d8;
    }
    ctx->pc = 0x23F1D0u;
    {
        const bool branch_taken_0x23f1d0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x23f1d0) {
            ctx->pc = 0x23F1D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23F1D0u;
            // 0x23f1d4: 0x8fa40124  lw          $a0, 0x124($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23F230u;
            goto label_23f230;
        }
    }
    ctx->pc = 0x23F1D8u;
label_23f1d8:
    // 0x23f1d8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x23f1d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_23f1dc:
    // 0x23f1dc: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x23f1dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_23f1e0:
    // 0x23f1e0: 0x320f809  jalr        $t9
label_23f1e4:
    if (ctx->pc == 0x23F1E4u) {
        ctx->pc = 0x23F1E8u;
        goto label_23f1e8;
    }
    ctx->pc = 0x23F1E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x23F1E8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x23F1E8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23F1E8u; }
            if (ctx->pc != 0x23F1E8u) { return; }
        }
        }
    }
    ctx->pc = 0x23F1E8u;
label_23f1e8:
    // 0x23f1e8: 0x10000010  b           . + 4 + (0x10 << 2)
label_23f1ec:
    if (ctx->pc == 0x23F1ECu) {
        ctx->pc = 0x23F1F0u;
        goto label_23f1f0;
    }
    ctx->pc = 0x23F1E8u;
    {
        const bool branch_taken_0x23f1e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23f1e8) {
            ctx->pc = 0x23F22Cu;
            goto label_23f22c;
        }
    }
    ctx->pc = 0x23F1F0u;
label_23f1f0:
    // 0x23f1f0: 0x27a401d8  addiu       $a0, $sp, 0x1D8
    ctx->pc = 0x23f1f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 472));
label_23f1f4:
    // 0x23f1f4: 0x27a501c0  addiu       $a1, $sp, 0x1C0
    ctx->pc = 0x23f1f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_23f1f8:
    // 0x23f1f8: 0xc0a7d54  jal         func_29F550
label_23f1fc:
    if (ctx->pc == 0x23F1FCu) {
        ctx->pc = 0x23F1FCu;
            // 0x23f1fc: 0x27a70120  addiu       $a3, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->pc = 0x23F200u;
        goto label_23f200;
    }
    ctx->pc = 0x23F1F8u;
    SET_GPR_U32(ctx, 31, 0x23F200u);
    ctx->pc = 0x23F1FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23F1F8u;
            // 0x23f1fc: 0x27a70120  addiu       $a3, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29F550u;
    if (runtime->hasFunction(0x29F550u)) {
        auto targetFn = runtime->lookupFunction(0x29F550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F200u; }
        if (ctx->pc != 0x23F200u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029F550_0x29f550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F200u; }
        if (ctx->pc != 0x23F200u) { return; }
    }
    ctx->pc = 0x23F200u;
label_23f200:
    // 0x23f200: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x23f200u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_23f204:
    // 0x23f204: 0x8fa501c0  lw          $a1, 0x1C0($sp)
    ctx->pc = 0x23f204u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
label_23f208:
    // 0x23f208: 0x8c64ea40  lw          $a0, -0x15C0($v1)
    ctx->pc = 0x23f208u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961728)));
label_23f20c:
    // 0x23f20c: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x23f20cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
label_23f210:
    // 0x23f210: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x23f210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_23f214:
    // 0x23f214: 0x14a30005  bne         $a1, $v1, . + 4 + (0x5 << 2)
label_23f218:
    if (ctx->pc == 0x23F218u) {
        ctx->pc = 0x23F21Cu;
        goto label_23f21c;
    }
    ctx->pc = 0x23F214u;
    {
        const bool branch_taken_0x23f214 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x23f214) {
            ctx->pc = 0x23F22Cu;
            goto label_23f22c;
        }
    }
    ctx->pc = 0x23F21Cu;
label_23f21c:
    // 0x23f21c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x23f21cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_23f220:
    // 0x23f220: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x23f220u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_23f224:
    // 0x23f224: 0x320f809  jalr        $t9
label_23f228:
    if (ctx->pc == 0x23F228u) {
        ctx->pc = 0x23F22Cu;
        goto label_23f22c;
    }
    ctx->pc = 0x23F224u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x23F22Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x23F22Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23F22Cu; }
            if (ctx->pc != 0x23F22Cu) { return; }
        }
        }
    }
    ctx->pc = 0x23F22Cu;
label_23f22c:
    // 0x23f22c: 0x8fa40124  lw          $a0, 0x124($sp)
    ctx->pc = 0x23f22cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
label_23f230:
    // 0x23f230: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23f230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23f234:
    // 0x23f234: 0x54830182  bnel        $a0, $v1, . + 4 + (0x182 << 2)
label_23f238:
    if (ctx->pc == 0x23F238u) {
        ctx->pc = 0x23F238u;
            // 0x23f238: 0x27a401d8  addiu       $a0, $sp, 0x1D8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 472));
        ctx->pc = 0x23F23Cu;
        goto label_23f23c;
    }
    ctx->pc = 0x23F234u;
    {
        const bool branch_taken_0x23f234 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x23f234) {
            ctx->pc = 0x23F238u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23F234u;
            // 0x23f238: 0x27a401d8  addiu       $a0, $sp, 0x1D8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 472));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23F840u;
            goto label_23f840;
        }
    }
    ctx->pc = 0x23F23Cu;
label_23f23c:
    // 0x23f23c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x23f23cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_23f240:
    // 0x23f240: 0x8fa501d0  lw          $a1, 0x1D0($sp)
    ctx->pc = 0x23f240u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
label_23f244:
    // 0x23f244: 0x8c64ea40  lw          $a0, -0x15C0($v1)
    ctx->pc = 0x23f244u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961728)));
label_23f248:
    // 0x23f248: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x23f248u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
label_23f24c:
    // 0x23f24c: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x23f24cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_23f250:
    // 0x23f250: 0x54a30006  bnel        $a1, $v1, . + 4 + (0x6 << 2)
label_23f254:
    if (ctx->pc == 0x23F254u) {
        ctx->pc = 0x23F254u;
            // 0x23f254: 0x8fa40128  lw          $a0, 0x128($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
        ctx->pc = 0x23F258u;
        goto label_23f258;
    }
    ctx->pc = 0x23F250u;
    {
        const bool branch_taken_0x23f250 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x23f250) {
            ctx->pc = 0x23F254u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23F250u;
            // 0x23f254: 0x8fa40128  lw          $a0, 0x128($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23F26Cu;
            goto label_23f26c;
        }
    }
    ctx->pc = 0x23F258u;
label_23f258:
    // 0x23f258: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x23f258u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_23f25c:
    // 0x23f25c: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x23f25cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_23f260:
    // 0x23f260: 0x320f809  jalr        $t9
label_23f264:
    if (ctx->pc == 0x23F264u) {
        ctx->pc = 0x23F268u;
        goto label_23f268;
    }
    ctx->pc = 0x23F260u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x23F268u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x23F268u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23F268u; }
            if (ctx->pc != 0x23F268u) { return; }
        }
        }
    }
    ctx->pc = 0x23F268u;
label_23f268:
    // 0x23f268: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x23f268u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
label_23f26c:
    // 0x23f26c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x23f26cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_23f270:
    // 0x23f270: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x23f270u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_23f274:
    // 0x23f274: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
label_23f278:
    if (ctx->pc == 0x23F278u) {
        ctx->pc = 0x23F27Cu;
        goto label_23f27c;
    }
    ctx->pc = 0x23F274u;
    {
        const bool branch_taken_0x23f274 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x23f274) {
            ctx->pc = 0x23F2A0u;
            goto label_23f2a0;
        }
    }
    ctx->pc = 0x23F27Cu;
label_23f27c:
    // 0x23f27c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x23f27cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_23f280:
    // 0x23f280: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x23f280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
label_23f284:
    // 0x23f284: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x23f284u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_23f288:
    // 0x23f288: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x23f288u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_23f28c:
    // 0x23f28c: 0x8fa50120  lw          $a1, 0x120($sp)
    ctx->pc = 0x23f28cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_23f290:
    // 0x23f290: 0x310bc  dsll32      $v0, $v1, 2
    ctx->pc = 0x23f290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 2));
label_23f294:
    // 0x23f294: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x23f294u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_23f298:
    // 0x23f298: 0xc0a7ab4  jal         func_29EAD0
label_23f29c:
    if (ctx->pc == 0x23F29Cu) {
        ctx->pc = 0x23F29Cu;
            // 0x23f29c: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x23F2A0u;
        goto label_23f2a0;
    }
    ctx->pc = 0x23F298u;
    SET_GPR_U32(ctx, 31, 0x23F2A0u);
    ctx->pc = 0x23F29Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23F298u;
            // 0x23f29c: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F2A0u; }
        if (ctx->pc != 0x23F2A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F2A0u; }
        if (ctx->pc != 0x23F2A0u) { return; }
    }
    ctx->pc = 0x23F2A0u;
label_23f2a0:
    // 0x23f2a0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x23f2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_23f2a4:
    // 0x23f2a4: 0x8fa501e0  lw          $a1, 0x1E0($sp)
    ctx->pc = 0x23f2a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
label_23f2a8:
    // 0x23f2a8: 0x8c64ea40  lw          $a0, -0x15C0($v1)
    ctx->pc = 0x23f2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961728)));
label_23f2ac:
    // 0x23f2ac: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x23f2acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
label_23f2b0:
    // 0x23f2b0: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x23f2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_23f2b4:
    // 0x23f2b4: 0x14a30431  bne         $a1, $v1, . + 4 + (0x431 << 2)
label_23f2b8:
    if (ctx->pc == 0x23F2B8u) {
        ctx->pc = 0x23F2BCu;
        goto label_23f2bc;
    }
    ctx->pc = 0x23F2B4u;
    {
        const bool branch_taken_0x23f2b4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x23f2b4) {
            ctx->pc = 0x24037Cu;
            goto label_24037c;
        }
    }
    ctx->pc = 0x23F2BCu;
label_23f2bc:
    // 0x23f2bc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x23f2bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_23f2c0:
    // 0x23f2c0: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x23f2c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_23f2c4:
    // 0x23f2c4: 0x320f809  jalr        $t9
label_23f2c8:
    if (ctx->pc == 0x23F2C8u) {
        ctx->pc = 0x23F2CCu;
        goto label_23f2cc;
    }
    ctx->pc = 0x23F2C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x23F2CCu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x23F2CCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23F2CCu; }
            if (ctx->pc != 0x23F2CCu) { return; }
        }
        }
    }
    ctx->pc = 0x23F2CCu;
label_23f2cc:
    // 0x23f2cc: 0x1000042b  b           . + 4 + (0x42B << 2)
label_23f2d0:
    if (ctx->pc == 0x23F2D0u) {
        ctx->pc = 0x23F2D4u;
        goto label_23f2d4;
    }
    ctx->pc = 0x23F2CCu;
    {
        const bool branch_taken_0x23f2cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23f2cc) {
            ctx->pc = 0x24037Cu;
            goto label_24037c;
        }
    }
    ctx->pc = 0x23F2D4u;
label_23f2d4:
    // 0x23f2d4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x23f2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_23f2d8:
    // 0x23f2d8: 0x8c64ea40  lw          $a0, -0x15C0($v1)
    ctx->pc = 0x23f2d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961728)));
label_23f2dc:
    // 0x23f2dc: 0xac87000c  sw          $a3, 0xC($a0)
    ctx->pc = 0x23f2dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 7));
label_23f2e0:
    // 0x23f2e0: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x23f2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_23f2e4:
    // 0x23f2e4: 0x54e30006  bnel        $a3, $v1, . + 4 + (0x6 << 2)
label_23f2e8:
    if (ctx->pc == 0x23F2E8u) {
        ctx->pc = 0x23F2E8u;
            // 0x23f2e8: 0x8fa40128  lw          $a0, 0x128($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
        ctx->pc = 0x23F2ECu;
        goto label_23f2ec;
    }
    ctx->pc = 0x23F2E4u;
    {
        const bool branch_taken_0x23f2e4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        if (branch_taken_0x23f2e4) {
            ctx->pc = 0x23F2E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23F2E4u;
            // 0x23f2e8: 0x8fa40128  lw          $a0, 0x128($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23F300u;
            goto label_23f300;
        }
    }
    ctx->pc = 0x23F2ECu;
label_23f2ec:
    // 0x23f2ec: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x23f2ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_23f2f0:
    // 0x23f2f0: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x23f2f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_23f2f4:
    // 0x23f2f4: 0x320f809  jalr        $t9
label_23f2f8:
    if (ctx->pc == 0x23F2F8u) {
        ctx->pc = 0x23F2F8u;
            // 0x23f2f8: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23F2FCu;
        goto label_23f2fc;
    }
    ctx->pc = 0x23F2F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x23F2FCu);
        ctx->pc = 0x23F2F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23F2F4u;
            // 0x23f2f8: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x23F2FCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23F2FCu; }
            if (ctx->pc != 0x23F2FCu) { return; }
        }
        }
    }
    ctx->pc = 0x23F2FCu;
label_23f2fc:
    // 0x23f2fc: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x23f2fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
label_23f300:
    // 0x23f300: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x23f300u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_23f304:
    // 0x23f304: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x23f304u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_23f308:
    // 0x23f308: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
label_23f30c:
    if (ctx->pc == 0x23F30Cu) {
        ctx->pc = 0x23F310u;
        goto label_23f310;
    }
    ctx->pc = 0x23F308u;
    {
        const bool branch_taken_0x23f308 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x23f308) {
            ctx->pc = 0x23F334u;
            goto label_23f334;
        }
    }
    ctx->pc = 0x23F310u;
label_23f310:
    // 0x23f310: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x23f310u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_23f314:
    // 0x23f314: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x23f314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
label_23f318:
    // 0x23f318: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x23f318u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_23f31c:
    // 0x23f31c: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x23f31cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_23f320:
    // 0x23f320: 0x8fa50120  lw          $a1, 0x120($sp)
    ctx->pc = 0x23f320u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_23f324:
    // 0x23f324: 0x310bc  dsll32      $v0, $v1, 2
    ctx->pc = 0x23f324u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 2));
label_23f328:
    // 0x23f328: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x23f328u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_23f32c:
    // 0x23f32c: 0xc0a7ab4  jal         func_29EAD0
label_23f330:
    if (ctx->pc == 0x23F330u) {
        ctx->pc = 0x23F330u;
            // 0x23f330: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x23F334u;
        goto label_23f334;
    }
    ctx->pc = 0x23F32Cu;
    SET_GPR_U32(ctx, 31, 0x23F334u);
    ctx->pc = 0x23F330u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23F32Cu;
            // 0x23f330: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F334u; }
        if (ctx->pc != 0x23F334u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F334u; }
        if (ctx->pc != 0x23F334u) { return; }
    }
    ctx->pc = 0x23F334u;
label_23f334:
    // 0x23f334: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x23f334u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_23f338:
    // 0x23f338: 0x8fa501e0  lw          $a1, 0x1E0($sp)
    ctx->pc = 0x23f338u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
label_23f33c:
    // 0x23f33c: 0x8c64ea40  lw          $a0, -0x15C0($v1)
    ctx->pc = 0x23f33cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961728)));
label_23f340:
    // 0x23f340: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x23f340u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
label_23f344:
    // 0x23f344: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x23f344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_23f348:
    // 0x23f348: 0x14a3040c  bne         $a1, $v1, . + 4 + (0x40C << 2)
label_23f34c:
    if (ctx->pc == 0x23F34Cu) {
        ctx->pc = 0x23F350u;
        goto label_23f350;
    }
    ctx->pc = 0x23F348u;
    {
        const bool branch_taken_0x23f348 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x23f348) {
            ctx->pc = 0x24037Cu;
            goto label_24037c;
        }
    }
    ctx->pc = 0x23F350u;
label_23f350:
    // 0x23f350: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x23f350u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_23f354:
    // 0x23f354: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x23f354u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_23f358:
    // 0x23f358: 0x320f809  jalr        $t9
label_23f35c:
    if (ctx->pc == 0x23F35Cu) {
        ctx->pc = 0x23F360u;
        goto label_23f360;
    }
    ctx->pc = 0x23F358u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x23F360u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x23F360u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23F360u; }
            if (ctx->pc != 0x23F360u) { return; }
        }
        }
    }
    ctx->pc = 0x23F360u;
label_23f360:
    // 0x23f360: 0x10000406  b           . + 4 + (0x406 << 2)
label_23f364:
    if (ctx->pc == 0x23F364u) {
        ctx->pc = 0x23F368u;
        goto label_23f368;
    }
    ctx->pc = 0x23F360u;
    {
        const bool branch_taken_0x23f360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23f360) {
            ctx->pc = 0x24037Cu;
            goto label_24037c;
        }
    }
    ctx->pc = 0x23F368u;
label_23f368:
    // 0x23f368: 0x8e6200a4  lw          $v0, 0xA4($s3)
    ctx->pc = 0x23f368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 164)));
label_23f36c:
    // 0x23f36c: 0x5040012f  beql        $v0, $zero, . + 4 + (0x12F << 2)
label_23f370:
    if (ctx->pc == 0x23F370u) {
        ctx->pc = 0x23F370u;
            // 0x23f370: 0x8fa20124  lw          $v0, 0x124($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
        ctx->pc = 0x23F374u;
        goto label_23f374;
    }
    ctx->pc = 0x23F36Cu;
    {
        const bool branch_taken_0x23f36c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23f36c) {
            ctx->pc = 0x23F370u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23F36Cu;
            // 0x23f370: 0x8fa20124  lw          $v0, 0x124($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23F82Cu;
            goto label_23f82c;
        }
    }
    ctx->pc = 0x23F374u;
label_23f374:
    // 0x23f374: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x23f374u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_23f378:
    // 0x23f378: 0x8fb00124  lw          $s0, 0x124($sp)
    ctx->pc = 0x23f378u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
label_23f37c:
    // 0x23f37c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x23f37cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_23f380:
    // 0x23f380: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x23f380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
label_23f384:
    // 0x23f384: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x23f384u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_23f388:
    // 0x23f388: 0x24450010  addiu       $a1, $v0, 0x10
    ctx->pc = 0x23f388u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_23f38c:
    // 0x23f38c: 0xa38824  and         $s1, $a1, $v1
    ctx->pc = 0x23f38cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_23f390:
    // 0x23f390: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x23f390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_23f394:
    // 0x23f394: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x23f394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_23f398:
    // 0x23f398: 0x512821  addu        $a1, $v0, $s1
    ctx->pc = 0x23f398u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_23f39c:
    // 0x23f39c: 0x65082b  sltu        $at, $v1, $a1
    ctx->pc = 0x23f39cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_23f3a0:
    // 0x23f3a0: 0x54200004  bnel        $at, $zero, . + 4 + (0x4 << 2)
label_23f3a4:
    if (ctx->pc == 0x23F3A4u) {
        ctx->pc = 0x23F3A4u;
            // 0x23f3a4: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x23F3A8u;
        goto label_23f3a8;
    }
    ctx->pc = 0x23F3A0u;
    {
        const bool branch_taken_0x23f3a0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x23f3a0) {
            ctx->pc = 0x23F3A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23F3A0u;
            // 0x23f3a4: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23F3B4u;
            goto label_23f3b4;
        }
    }
    ctx->pc = 0x23F3A8u;
label_23f3a8:
    // 0x23f3a8: 0x10000005  b           . + 4 + (0x5 << 2)
label_23f3ac:
    if (ctx->pc == 0x23F3ACu) {
        ctx->pc = 0x23F3ACu;
            // 0x23f3ac: 0xac85000c  sw          $a1, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
        ctx->pc = 0x23F3B0u;
        goto label_23f3b0;
    }
    ctx->pc = 0x23F3A8u;
    {
        const bool branch_taken_0x23f3a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F3ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23F3A8u;
            // 0x23f3ac: 0xac85000c  sw          $a1, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f3a8) {
            ctx->pc = 0x23F3C0u;
            goto label_23f3c0;
        }
    }
    ctx->pc = 0x23F3B0u;
label_23f3b0:
    // 0x23f3b0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x23f3b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_23f3b4:
    // 0x23f3b4: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x23f3b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_23f3b8:
    // 0x23f3b8: 0x320f809  jalr        $t9
label_23f3bc:
    if (ctx->pc == 0x23F3BCu) {
        ctx->pc = 0x23F3BCu;
            // 0x23f3bc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23F3C0u;
        goto label_23f3c0;
    }
    ctx->pc = 0x23F3B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x23F3C0u);
        ctx->pc = 0x23F3BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23F3B8u;
            // 0x23f3bc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x23F3C0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23F3C0u; }
            if (ctx->pc != 0x23F3C0u) { return; }
        }
        }
    }
    ctx->pc = 0x23F3C0u;
label_23f3c0:
    // 0x23f3c0: 0xafa201b8  sw          $v0, 0x1B8($sp)
    ctx->pc = 0x23f3c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 440), GPR_U32(ctx, 2));
label_23f3c4:
    // 0x23f3c4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x23f3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_23f3c8:
    // 0x23f3c8: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x23f3c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_23f3cc:
    // 0x23f3cc: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x23f3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_23f3d0:
    // 0x23f3d0: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x23f3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_23f3d4:
    // 0x23f3d4: 0x512821  addu        $a1, $v0, $s1
    ctx->pc = 0x23f3d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_23f3d8:
    // 0x23f3d8: 0x65082b  sltu        $at, $v1, $a1
    ctx->pc = 0x23f3d8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_23f3dc:
    // 0x23f3dc: 0x54200004  bnel        $at, $zero, . + 4 + (0x4 << 2)
label_23f3e0:
    if (ctx->pc == 0x23F3E0u) {
        ctx->pc = 0x23F3E0u;
            // 0x23f3e0: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x23F3E4u;
        goto label_23f3e4;
    }
    ctx->pc = 0x23F3DCu;
    {
        const bool branch_taken_0x23f3dc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x23f3dc) {
            ctx->pc = 0x23F3E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23F3DCu;
            // 0x23f3e0: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23F3F0u;
            goto label_23f3f0;
        }
    }
    ctx->pc = 0x23F3E4u;
label_23f3e4:
    // 0x23f3e4: 0x10000005  b           . + 4 + (0x5 << 2)
label_23f3e8:
    if (ctx->pc == 0x23F3E8u) {
        ctx->pc = 0x23F3E8u;
            // 0x23f3e8: 0xac85000c  sw          $a1, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
        ctx->pc = 0x23F3ECu;
        goto label_23f3ec;
    }
    ctx->pc = 0x23F3E4u;
    {
        const bool branch_taken_0x23f3e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F3E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23F3E4u;
            // 0x23f3e8: 0xac85000c  sw          $a1, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f3e4) {
            ctx->pc = 0x23F3FCu;
            goto label_23f3fc;
        }
    }
    ctx->pc = 0x23F3ECu;
label_23f3ec:
    // 0x23f3ec: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x23f3ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_23f3f0:
    // 0x23f3f0: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x23f3f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_23f3f4:
    // 0x23f3f4: 0x320f809  jalr        $t9
label_23f3f8:
    if (ctx->pc == 0x23F3F8u) {
        ctx->pc = 0x23F3F8u;
            // 0x23f3f8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23F3FCu;
        goto label_23f3fc;
    }
    ctx->pc = 0x23F3F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x23F3FCu);
        ctx->pc = 0x23F3F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23F3F4u;
            // 0x23f3f8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x23F3FCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23F3FCu; }
            if (ctx->pc != 0x23F3FCu) { return; }
        }
        }
    }
    ctx->pc = 0x23F3FCu;
label_23f3fc:
    // 0x23f3fc: 0xafa201b0  sw          $v0, 0x1B0($sp)
    ctx->pc = 0x23f3fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 2));
label_23f400:
    // 0x23f400: 0x1a000043  blez        $s0, . + 4 + (0x43 << 2)
label_23f404:
    if (ctx->pc == 0x23F404u) {
        ctx->pc = 0x23F404u;
            // 0x23f404: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23F408u;
        goto label_23f408;
    }
    ctx->pc = 0x23F400u;
    {
        const bool branch_taken_0x23f400 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x23F404u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23F400u;
            // 0x23f404: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f400) {
            ctx->pc = 0x23F510u;
            goto label_23f510;
        }
    }
    ctx->pc = 0x23F408u;
label_23f408:
    // 0x23f408: 0x2a010009  slti        $at, $s0, 0x9
    ctx->pc = 0x23f408u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)9) ? 1 : 0);
label_23f40c:
    // 0x23f40c: 0x14200032  bnez        $at, . + 4 + (0x32 << 2)
label_23f410:
    if (ctx->pc == 0x23F410u) {
        ctx->pc = 0x23F410u;
            // 0x23f410: 0x2604fff8  addiu       $a0, $s0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
        ctx->pc = 0x23F414u;
        goto label_23f414;
    }
    ctx->pc = 0x23F40Cu;
    {
        const bool branch_taken_0x23f40c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x23F410u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23F40Cu;
            // 0x23f410: 0x2604fff8  addiu       $a0, $s0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f40c) {
            ctx->pc = 0x23F4D8u;
            goto label_23f4d8;
        }
    }
    ctx->pc = 0x23F414u;
label_23f414:
    // 0x23f414: 0x6000007  bltz        $s0, . + 4 + (0x7 << 2)
label_23f418:
    if (ctx->pc == 0x23F418u) {
        ctx->pc = 0x23F418u;
            // 0x23f418: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23F41Cu;
        goto label_23f41c;
    }
    ctx->pc = 0x23F414u;
    {
        const bool branch_taken_0x23f414 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x23F418u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23F414u;
            // 0x23f418: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f414) {
            ctx->pc = 0x23F434u;
            goto label_23f434;
        }
    }
    ctx->pc = 0x23F41Cu;
label_23f41c:
    // 0x23f41c: 0x3c017fff  lui         $at, 0x7FFF
    ctx->pc = 0x23f41cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)32767 << 16));
label_23f420:
    // 0x23f420: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x23f420u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
label_23f424:
    // 0x23f424: 0x201082a  slt         $at, $s0, $at
    ctx->pc = 0x23f424u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_23f428:
    // 0x23f428: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_23f42c:
    if (ctx->pc == 0x23F42Cu) {
        ctx->pc = 0x23F430u;
        goto label_23f430;
    }
    ctx->pc = 0x23F428u;
    {
        const bool branch_taken_0x23f428 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x23f428) {
            ctx->pc = 0x23F434u;
            goto label_23f434;
        }
    }
    ctx->pc = 0x23F430u;
label_23f430:
    // 0x23f430: 0x64020001  daddiu      $v0, $zero, 0x1
    ctx->pc = 0x23f430u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_23f434:
    // 0x23f434: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_23f438:
    if (ctx->pc == 0x23F438u) {
        ctx->pc = 0x23F43Cu;
        goto label_23f43c;
    }
    ctx->pc = 0x23F434u;
    {
        const bool branch_taken_0x23f434 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23f434) {
            ctx->pc = 0x23F4D8u;
            goto label_23f4d8;
        }
    }
    ctx->pc = 0x23F43Cu;
label_23f43c:
    // 0x23f43c: 0x8fa301b8  lw          $v1, 0x1B8($sp)
    ctx->pc = 0x23f43cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 440)));
label_23f440:
    // 0x23f440: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23f440u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23f444:
    // 0x23f444: 0x8fa801b0  lw          $t0, 0x1B0($sp)
    ctx->pc = 0x23f444u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
label_23f448:
    // 0x23f448: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x23f448u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_23f44c:
    // 0x23f44c: 0x651021  addu        $v0, $v1, $a1
    ctx->pc = 0x23f44cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_23f450:
    // 0x23f450: 0xc4382a  slt         $a3, $a2, $a0
    ctx->pc = 0x23f450u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_23f454:
    // 0x23f454: 0x1054021  addu        $t0, $t0, $a1
    ctx->pc = 0x23f454u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
label_23f458:
    // 0x23f458: 0xad000000  sw          $zero, 0x0($t0)
    ctx->pc = 0x23f458u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
label_23f45c:
    // 0x23f45c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x23f45cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_23f460:
    // 0x23f460: 0x8fa801b0  lw          $t0, 0x1B0($sp)
    ctx->pc = 0x23f460u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
label_23f464:
    // 0x23f464: 0x1054021  addu        $t0, $t0, $a1
    ctx->pc = 0x23f464u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
label_23f468:
    // 0x23f468: 0xad000004  sw          $zero, 0x4($t0)
    ctx->pc = 0x23f468u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 0));
label_23f46c:
    // 0x23f46c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x23f46cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_23f470:
    // 0x23f470: 0x8fa801b0  lw          $t0, 0x1B0($sp)
    ctx->pc = 0x23f470u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
label_23f474:
    // 0x23f474: 0x1054021  addu        $t0, $t0, $a1
    ctx->pc = 0x23f474u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
label_23f478:
    // 0x23f478: 0xad000008  sw          $zero, 0x8($t0)
    ctx->pc = 0x23f478u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 0));
label_23f47c:
    // 0x23f47c: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x23f47cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
label_23f480:
    // 0x23f480: 0x8fa801b0  lw          $t0, 0x1B0($sp)
    ctx->pc = 0x23f480u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
label_23f484:
    // 0x23f484: 0x1054021  addu        $t0, $t0, $a1
    ctx->pc = 0x23f484u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
label_23f488:
    // 0x23f488: 0xad00000c  sw          $zero, 0xC($t0)
    ctx->pc = 0x23f488u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 0));
label_23f48c:
    // 0x23f48c: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x23f48cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
label_23f490:
    // 0x23f490: 0x8fa801b0  lw          $t0, 0x1B0($sp)
    ctx->pc = 0x23f490u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
label_23f494:
    // 0x23f494: 0x1054021  addu        $t0, $t0, $a1
    ctx->pc = 0x23f494u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
label_23f498:
    // 0x23f498: 0xad000010  sw          $zero, 0x10($t0)
    ctx->pc = 0x23f498u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 0));
label_23f49c:
    // 0x23f49c: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x23f49cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
label_23f4a0:
    // 0x23f4a0: 0x8fa801b0  lw          $t0, 0x1B0($sp)
    ctx->pc = 0x23f4a0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
label_23f4a4:
    // 0x23f4a4: 0x1054021  addu        $t0, $t0, $a1
    ctx->pc = 0x23f4a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
label_23f4a8:
    // 0x23f4a8: 0xad000014  sw          $zero, 0x14($t0)
    ctx->pc = 0x23f4a8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 20), GPR_U32(ctx, 0));
label_23f4ac:
    // 0x23f4ac: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x23f4acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
label_23f4b0:
    // 0x23f4b0: 0x8fa801b0  lw          $t0, 0x1B0($sp)
    ctx->pc = 0x23f4b0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
label_23f4b4:
    // 0x23f4b4: 0x1054021  addu        $t0, $t0, $a1
    ctx->pc = 0x23f4b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
label_23f4b8:
    // 0x23f4b8: 0xad000018  sw          $zero, 0x18($t0)
    ctx->pc = 0x23f4b8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 24), GPR_U32(ctx, 0));
label_23f4bc:
    // 0x23f4bc: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x23f4bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
label_23f4c0:
    // 0x23f4c0: 0x8fa801b0  lw          $t0, 0x1B0($sp)
    ctx->pc = 0x23f4c0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
label_23f4c4:
    // 0x23f4c4: 0x1054021  addu        $t0, $t0, $a1
    ctx->pc = 0x23f4c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
label_23f4c8:
    // 0x23f4c8: 0xad00001c  sw          $zero, 0x1C($t0)
    ctx->pc = 0x23f4c8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 28), GPR_U32(ctx, 0));
label_23f4cc:
    // 0x23f4cc: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x23f4ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
label_23f4d0:
    // 0x23f4d0: 0x14e0ffdc  bnez        $a3, . + 4 + (-0x24 << 2)
label_23f4d4:
    if (ctx->pc == 0x23F4D4u) {
        ctx->pc = 0x23F4D4u;
            // 0x23f4d4: 0xac40001c  sw          $zero, 0x1C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
        ctx->pc = 0x23F4D8u;
        goto label_23f4d8;
    }
    ctx->pc = 0x23F4D0u;
    {
        const bool branch_taken_0x23f4d0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x23F4D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23F4D0u;
            // 0x23f4d4: 0xac40001c  sw          $zero, 0x1C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f4d0) {
            ctx->pc = 0x23F444u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_23f444;
        }
    }
    ctx->pc = 0x23F4D8u;
label_23f4d8:
    // 0x23f4d8: 0xd0082a  slt         $at, $a2, $s0
    ctx->pc = 0x23f4d8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_23f4dc:
    // 0x23f4dc: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
label_23f4e0:
    if (ctx->pc == 0x23F4E0u) {
        ctx->pc = 0x23F4E4u;
        goto label_23f4e4;
    }
    ctx->pc = 0x23F4DCu;
    {
        const bool branch_taken_0x23f4dc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x23f4dc) {
            ctx->pc = 0x23F510u;
            goto label_23f510;
        }
    }
    ctx->pc = 0x23F4E4u;
label_23f4e4:
    // 0x23f4e4: 0x8fa401b8  lw          $a0, 0x1B8($sp)
    ctx->pc = 0x23f4e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 440)));
label_23f4e8:
    // 0x23f4e8: 0x63880  sll         $a3, $a2, 2
    ctx->pc = 0x23f4e8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_23f4ec:
    // 0x23f4ec: 0x8fa501b0  lw          $a1, 0x1B0($sp)
    ctx->pc = 0x23f4ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
label_23f4f0:
    // 0x23f4f0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x23f4f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_23f4f4:
    // 0x23f4f4: 0x871821  addu        $v1, $a0, $a3
    ctx->pc = 0x23f4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_23f4f8:
    // 0x23f4f8: 0xd0102a  slt         $v0, $a2, $s0
    ctx->pc = 0x23f4f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_23f4fc:
    // 0x23f4fc: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x23f4fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_23f500:
    // 0x23f500: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x23f500u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_23f504:
    // 0x23f504: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x23f504u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_23f508:
    // 0x23f508: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
label_23f50c:
    if (ctx->pc == 0x23F50Cu) {
        ctx->pc = 0x23F50Cu;
            // 0x23f50c: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->pc = 0x23F510u;
        goto label_23f510;
    }
    ctx->pc = 0x23F508u;
    {
        const bool branch_taken_0x23f508 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23F50Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23F508u;
            // 0x23f50c: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f508) {
            ctx->pc = 0x23F4ECu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_23f4ec;
        }
    }
    ctx->pc = 0x23F510u;
label_23f510:
    // 0x23f510: 0x826200d1  lb          $v0, 0xD1($s3)
    ctx->pc = 0x23f510u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 209)));
label_23f514:
    // 0x23f514: 0x50400041  beql        $v0, $zero, . + 4 + (0x41 << 2)
label_23f518:
    if (ctx->pc == 0x23F518u) {
        ctx->pc = 0x23F518u;
            // 0x23f518: 0x8ea20050  lw          $v0, 0x50($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
        ctx->pc = 0x23F51Cu;
        goto label_23f51c;
    }
    ctx->pc = 0x23F514u;
    {
        const bool branch_taken_0x23f514 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23f514) {
            ctx->pc = 0x23F518u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23F514u;
            // 0x23f518: 0x8ea20050  lw          $v0, 0x50($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23F61Cu;
            goto label_23f61c;
        }
    }
    ctx->pc = 0x23F51Cu;
label_23f51c:
    // 0x23f51c: 0x8ea20050  lw          $v0, 0x50($s5)
    ctx->pc = 0x23f51cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
label_23f520:
    // 0x23f520: 0x1840005d  blez        $v0, . + 4 + (0x5D << 2)
label_23f524:
    if (ctx->pc == 0x23F524u) {
        ctx->pc = 0x23F524u;
            // 0x23f524: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23F528u;
        goto label_23f528;
    }
    ctx->pc = 0x23F520u;
    {
        const bool branch_taken_0x23f520 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x23F524u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23F520u;
            // 0x23f524: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f520) {
            ctx->pc = 0x23F698u;
            goto label_23f698;
        }
    }
    ctx->pc = 0x23F528u;
label_23f528:
    // 0x23f528: 0x8fa601b8  lw          $a2, 0x1B8($sp)
    ctx->pc = 0x23f528u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 440)));
label_23f52c:
    // 0x23f52c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x23f52cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23f530:
    // 0x23f530: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x23f530u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23f534:
    // 0x23f534: 0x8ea3004c  lw          $v1, 0x4C($s5)
    ctx->pc = 0x23f534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
label_23f538:
    // 0x23f538: 0x8fa201d8  lw          $v0, 0x1D8($sp)
    ctx->pc = 0x23f538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
label_23f53c:
    // 0x23f53c: 0x926802ee  lbu         $t0, 0x2EE($s3)
    ctx->pc = 0x23f53cu;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 750)));
label_23f540:
    // 0x23f540: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x23f540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_23f544:
    // 0x23f544: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x23f544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_23f548:
    // 0x23f548: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x23f548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_23f54c:
    // 0x23f54c: 0x946a00ac  lhu         $t2, 0xAC($v1)
    ctx->pc = 0x23f54cu;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 172)));
label_23f550:
    // 0x23f550: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x23f550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_23f554:
    // 0x23f554: 0xa3b83  sra         $a3, $t2, 14
    ctx->pc = 0x23f554u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 10), 14));
label_23f558:
    // 0x23f558: 0x11070003  beq         $t0, $a3, . + 4 + (0x3 << 2)
label_23f55c:
    if (ctx->pc == 0x23F55Cu) {
        ctx->pc = 0x23F55Cu;
            // 0x23f55c: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x23F560u;
        goto label_23f560;
    }
    ctx->pc = 0x23F558u;
    {
        const bool branch_taken_0x23f558 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 7));
        ctx->pc = 0x23F55Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23F558u;
            // 0x23f55c: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f558) {
            ctx->pc = 0x23F568u;
            goto label_23f568;
        }
    }
    ctx->pc = 0x23F560u;
label_23f560:
    // 0x23f560: 0x10000003  b           . + 4 + (0x3 << 2)
label_23f564:
    if (ctx->pc == 0x23F564u) {
        ctx->pc = 0x23F564u;
            // 0x23f564: 0x3147007f  andi        $a3, $t2, 0x7F (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)127);
        ctx->pc = 0x23F568u;
        goto label_23f568;
    }
    ctx->pc = 0x23F560u;
    {
        const bool branch_taken_0x23f560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23F560u;
            // 0x23f564: 0x3147007f  andi        $a3, $t2, 0x7F (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)127);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f560) {
            ctx->pc = 0x23F570u;
            goto label_23f570;
        }
    }
    ctx->pc = 0x23F568u;
label_23f568:
    // 0x23f568: 0xa39c3  sra         $a3, $t2, 7
    ctx->pc = 0x23f568u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 10), 7));
label_23f56c:
    // 0x23f56c: 0x30e7007f  andi        $a3, $a3, 0x7F
    ctx->pc = 0x23f56cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)127);
label_23f570:
    // 0x23f570: 0x946a00aa  lhu         $t2, 0xAA($v1)
    ctx->pc = 0x23f570u;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 170)));
label_23f574:
    // 0x23f574: 0x30eb007f  andi        $t3, $a3, 0x7F
    ctx->pc = 0x23f574u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)127);
label_23f578:
    // 0x23f578: 0x926802ed  lbu         $t0, 0x2ED($s3)
    ctx->pc = 0x23f578u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 749)));
label_23f57c:
    // 0x23f57c: 0xa3b83  sra         $a3, $t2, 14
    ctx->pc = 0x23f57cu;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 10), 14));
label_23f580:
    // 0x23f580: 0x51070004  beql        $t0, $a3, . + 4 + (0x4 << 2)
label_23f584:
    if (ctx->pc == 0x23F584u) {
        ctx->pc = 0x23F584u;
            // 0x23f584: 0xa39c3  sra         $a3, $t2, 7 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 10), 7));
        ctx->pc = 0x23F588u;
        goto label_23f588;
    }
    ctx->pc = 0x23F580u;
    {
        const bool branch_taken_0x23f580 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 7));
        if (branch_taken_0x23f580) {
            ctx->pc = 0x23F584u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23F580u;
            // 0x23f584: 0xa39c3  sra         $a3, $t2, 7 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 10), 7));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23F594u;
            goto label_23f594;
        }
    }
    ctx->pc = 0x23F588u;
label_23f588:
    // 0x23f588: 0x10000003  b           . + 4 + (0x3 << 2)
label_23f58c:
    if (ctx->pc == 0x23F58Cu) {
        ctx->pc = 0x23F58Cu;
            // 0x23f58c: 0x3147007f  andi        $a3, $t2, 0x7F (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)127);
        ctx->pc = 0x23F590u;
        goto label_23f590;
    }
    ctx->pc = 0x23F588u;
    {
        const bool branch_taken_0x23f588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F58Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23F588u;
            // 0x23f58c: 0x3147007f  andi        $a3, $t2, 0x7F (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)127);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f588) {
            ctx->pc = 0x23F598u;
            goto label_23f598;
        }
    }
    ctx->pc = 0x23F590u;
label_23f590:
    // 0x23f590: 0xa39c3  sra         $a3, $t2, 7
    ctx->pc = 0x23f590u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 10), 7));
label_23f594:
    // 0x23f594: 0x30e7007f  andi        $a3, $a3, 0x7F
    ctx->pc = 0x23f594u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)127);
label_23f598:
    // 0x23f598: 0x30e7007f  andi        $a3, $a3, 0x7F
    ctx->pc = 0x23f598u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)127);
label_23f59c:
    // 0x23f59c: 0x167082a  slt         $at, $t3, $a3
    ctx->pc = 0x23f59cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
label_23f5a0:
    // 0x23f5a0: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_23f5a4:
    if (ctx->pc == 0x23F5A4u) {
        ctx->pc = 0x23F5A4u;
            // 0x23f5a4: 0x160382d  daddu       $a3, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23F5A8u;
        goto label_23f5a8;
    }
    ctx->pc = 0x23F5A0u;
    {
        const bool branch_taken_0x23f5a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x23f5a0) {
            ctx->pc = 0x23F5A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23F5A0u;
            // 0x23f5a4: 0x160382d  daddu       $a3, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23F5B4u;
            goto label_23f5b4;
        }
    }
    ctx->pc = 0x23F5A8u;
label_23f5a8:
    // 0x23f5a8: 0x10000003  b           . + 4 + (0x3 << 2)
label_23f5ac:
    if (ctx->pc == 0x23F5ACu) {
        ctx->pc = 0x23F5ACu;
            // 0x23f5ac: 0x28e10006  slti        $at, $a3, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)6) ? 1 : 0);
        ctx->pc = 0x23F5B0u;
        goto label_23f5b0;
    }
    ctx->pc = 0x23F5A8u;
    {
        const bool branch_taken_0x23f5a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F5ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23F5A8u;
            // 0x23f5ac: 0x28e10006  slti        $at, $a3, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f5a8) {
            ctx->pc = 0x23F5B8u;
            goto label_23f5b8;
        }
    }
    ctx->pc = 0x23F5B0u;
label_23f5b0:
    // 0x23f5b0: 0x160382d  daddu       $a3, $t3, $zero
    ctx->pc = 0x23f5b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_23f5b4:
    // 0x23f5b4: 0x28e10006  slti        $at, $a3, 0x6
    ctx->pc = 0x23f5b4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)6) ? 1 : 0);
label_23f5b8:
    // 0x23f5b8: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
label_23f5bc:
    if (ctx->pc == 0x23F5BCu) {
        ctx->pc = 0x23F5C0u;
        goto label_23f5c0;
    }
    ctx->pc = 0x23F5B8u;
    {
        const bool branch_taken_0x23f5b8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x23f5b8) {
            ctx->pc = 0x23F5D0u;
            goto label_23f5d0;
        }
    }
    ctx->pc = 0x23F5C0u;
label_23f5c0:
    // 0x23f5c0: 0x8fa701b0  lw          $a3, 0x1B0($sp)
    ctx->pc = 0x23f5c0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
label_23f5c4:
    // 0x23f5c4: 0x24080  sll         $t0, $v0, 2
    ctx->pc = 0x23f5c4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_23f5c8:
    // 0x23f5c8: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x23f5c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_23f5cc:
    // 0x23f5cc: 0xace90000  sw          $t1, 0x0($a3)
    ctx->pc = 0x23f5ccu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 9));
label_23f5d0:
    // 0x23f5d0: 0x94670074  lhu         $a3, 0x74($v1)
    ctx->pc = 0x23f5d0u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 116)));
label_23f5d4:
    // 0x23f5d4: 0x1ce00004  bgtz        $a3, . + 4 + (0x4 << 2)
label_23f5d8:
    if (ctx->pc == 0x23F5D8u) {
        ctx->pc = 0x23F5DCu;
        goto label_23f5dc;
    }
    ctx->pc = 0x23F5D4u;
    {
        const bool branch_taken_0x23f5d4 = (GPR_S32(ctx, 7) > 0);
        if (branch_taken_0x23f5d4) {
            ctx->pc = 0x23F5E8u;
            goto label_23f5e8;
        }
    }
    ctx->pc = 0x23F5DCu;
label_23f5dc:
    // 0x23f5dc: 0x10000002  b           . + 4 + (0x2 << 2)
label_23f5e0:
    if (ctx->pc == 0x23F5E0u) {
        ctx->pc = 0x23F5E0u;
            // 0x23f5e0: 0x120382d  daddu       $a3, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23F5E4u;
        goto label_23f5e4;
    }
    ctx->pc = 0x23F5DCu;
    {
        const bool branch_taken_0x23f5dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F5E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23F5DCu;
            // 0x23f5e0: 0x120382d  daddu       $a3, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f5dc) {
            ctx->pc = 0x23F5E8u;
            goto label_23f5e8;
        }
    }
    ctx->pc = 0x23F5E4u;
label_23f5e4:
    // 0x23f5e4: 0x0  nop
    ctx->pc = 0x23f5e4u;
    // NOP
label_23f5e8:
    // 0x23f5e8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23f5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_23f5ec:
    // 0x23f5ec: 0xc21821  addu        $v1, $a2, $v0
    ctx->pc = 0x23f5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_23f5f0:
    // 0x23f5f0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x23f5f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_23f5f4:
    // 0x23f5f4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x23f5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_23f5f8:
    // 0x23f5f8: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x23f5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_23f5fc:
    // 0x23f5fc: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x23f5fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_23f600:
    // 0x23f600: 0x8ea20050  lw          $v0, 0x50($s5)
    ctx->pc = 0x23f600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
label_23f604:
    // 0x23f604: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x23f604u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_23f608:
    // 0x23f608: 0x1440ffca  bnez        $v0, . + 4 + (-0x36 << 2)
label_23f60c:
    if (ctx->pc == 0x23F60Cu) {
        ctx->pc = 0x23F60Cu;
            // 0x23f60c: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->pc = 0x23F610u;
        goto label_23f610;
    }
    ctx->pc = 0x23F608u;
    {
        const bool branch_taken_0x23f608 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23F60Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23F608u;
            // 0x23f60c: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f608) {
            ctx->pc = 0x23F534u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_23f534;
        }
    }
    ctx->pc = 0x23F610u;
label_23f610:
    // 0x23f610: 0x10000021  b           . + 4 + (0x21 << 2)
label_23f614:
    if (ctx->pc == 0x23F614u) {
        ctx->pc = 0x23F618u;
        goto label_23f618;
    }
    ctx->pc = 0x23F610u;
    {
        const bool branch_taken_0x23f610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23f610) {
            ctx->pc = 0x23F698u;
            goto label_23f698;
        }
    }
    ctx->pc = 0x23F618u;
label_23f618:
    // 0x23f618: 0x8ea20050  lw          $v0, 0x50($s5)
    ctx->pc = 0x23f618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
label_23f61c:
    // 0x23f61c: 0x1840001e  blez        $v0, . + 4 + (0x1E << 2)
label_23f620:
    if (ctx->pc == 0x23F620u) {
        ctx->pc = 0x23F620u;
            // 0x23f620: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23F624u;
        goto label_23f624;
    }
    ctx->pc = 0x23F61Cu;
    {
        const bool branch_taken_0x23f61c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x23F620u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23F61Cu;
            // 0x23f620: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f61c) {
            ctx->pc = 0x23F698u;
            goto label_23f698;
        }
    }
    ctx->pc = 0x23F624u;
label_23f624:
    // 0x23f624: 0x8fa601b8  lw          $a2, 0x1B8($sp)
    ctx->pc = 0x23f624u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 440)));
label_23f628:
    // 0x23f628: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x23f628u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23f62c:
    // 0x23f62c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x23f62cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23f630:
    // 0x23f630: 0x8fa501d8  lw          $a1, 0x1D8($sp)
    ctx->pc = 0x23f630u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
label_23f634:
    // 0x23f634: 0x8ea8004c  lw          $t0, 0x4C($s5)
    ctx->pc = 0x23f634u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
label_23f638:
    // 0x23f638: 0x8fa401b0  lw          $a0, 0x1B0($sp)
    ctx->pc = 0x23f638u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
label_23f63c:
    // 0x23f63c: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x23f63cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_23f640:
    // 0x23f640: 0x1024021  addu        $t0, $t0, $v0
    ctx->pc = 0x23f640u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_23f644:
    // 0x23f644: 0x8d080000  lw          $t0, 0x0($t0)
    ctx->pc = 0x23f644u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_23f648:
    // 0x23f648: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x23f648u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_23f64c:
    // 0x23f64c: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x23f64cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_23f650:
    // 0x23f650: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x23f650u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_23f654:
    // 0x23f654: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x23f654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_23f658:
    // 0x23f658: 0xac870000  sw          $a3, 0x0($a0)
    ctx->pc = 0x23f658u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 7));
label_23f65c:
    // 0x23f65c: 0x95080074  lhu         $t0, 0x74($t0)
    ctx->pc = 0x23f65cu;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 116)));
label_23f660:
    // 0x23f660: 0x1d000003  bgtz        $t0, . + 4 + (0x3 << 2)
label_23f664:
    if (ctx->pc == 0x23F664u) {
        ctx->pc = 0x23F668u;
        goto label_23f668;
    }
    ctx->pc = 0x23F660u;
    {
        const bool branch_taken_0x23f660 = (GPR_S32(ctx, 8) > 0);
        if (branch_taken_0x23f660) {
            ctx->pc = 0x23F670u;
            goto label_23f670;
        }
    }
    ctx->pc = 0x23F668u;
label_23f668:
    // 0x23f668: 0x10000001  b           . + 4 + (0x1 << 2)
label_23f66c:
    if (ctx->pc == 0x23F66Cu) {
        ctx->pc = 0x23F66Cu;
            // 0x23f66c: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23F670u;
        goto label_23f670;
    }
    ctx->pc = 0x23F668u;
    {
        const bool branch_taken_0x23f668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F66Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23F668u;
            // 0x23f66c: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f668) {
            ctx->pc = 0x23F670u;
            goto label_23f670;
        }
    }
    ctx->pc = 0x23F670u;
label_23f670:
    // 0x23f670: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x23f670u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_23f674:
    // 0x23f674: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x23f674u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_23f678:
    // 0x23f678: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x23f678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_23f67c:
    // 0x23f67c: 0x882021  addu        $a0, $a0, $t0
    ctx->pc = 0x23f67cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
label_23f680:
    // 0x23f680: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x23f680u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
label_23f684:
    // 0x23f684: 0x8ea40050  lw          $a0, 0x50($s5)
    ctx->pc = 0x23f684u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
label_23f688:
    // 0x23f688: 0x64202a  slt         $a0, $v1, $a0
    ctx->pc = 0x23f688u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_23f68c:
    // 0x23f68c: 0x1480ffe8  bnez        $a0, . + 4 + (-0x18 << 2)
label_23f690:
    if (ctx->pc == 0x23F690u) {
        ctx->pc = 0x23F690u;
            // 0x23f690: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x23F694u;
        goto label_23f694;
    }
    ctx->pc = 0x23F68Cu;
    {
        const bool branch_taken_0x23f68c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x23F690u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23F68Cu;
            // 0x23f690: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f68c) {
            ctx->pc = 0x23F630u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_23f630;
        }
    }
    ctx->pc = 0x23F694u;
label_23f694:
    // 0x23f694: 0x0  nop
    ctx->pc = 0x23f694u;
    // NOP
label_23f698:
    // 0x23f698: 0x1a00000f  blez        $s0, . + 4 + (0xF << 2)
label_23f69c:
    if (ctx->pc == 0x23F69Cu) {
        ctx->pc = 0x23F69Cu;
            // 0x23f69c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23F6A0u;
        goto label_23f6a0;
    }
    ctx->pc = 0x23F698u;
    {
        const bool branch_taken_0x23f698 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x23F69Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23F698u;
            // 0x23f69c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f698) {
            ctx->pc = 0x23F6D8u;
            goto label_23f6d8;
        }
    }
    ctx->pc = 0x23F6A0u;
label_23f6a0:
    // 0x23f6a0: 0x8fa301b8  lw          $v1, 0x1B8($sp)
    ctx->pc = 0x23f6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 440)));
label_23f6a4:
    // 0x23f6a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23f6a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23f6a8:
    // 0x23f6a8: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x23f6a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_23f6ac:
    // 0x23f6ac: 0x8fa201b0  lw          $v0, 0x1B0($sp)
    ctx->pc = 0x23f6acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
label_23f6b0:
    // 0x23f6b0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x23f6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_23f6b4:
    // 0x23f6b4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x23f6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_23f6b8:
    // 0x23f6b8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_23f6bc:
    if (ctx->pc == 0x23F6BCu) {
        ctx->pc = 0x23F6C0u;
        goto label_23f6c0;
    }
    ctx->pc = 0x23F6B8u;
    {
        const bool branch_taken_0x23f6b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23f6b8) {
            ctx->pc = 0x23F6C8u;
            goto label_23f6c8;
        }
    }
    ctx->pc = 0x23F6C0u;
label_23f6c0:
    // 0x23f6c0: 0x651021  addu        $v0, $v1, $a1
    ctx->pc = 0x23f6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_23f6c4:
    // 0x23f6c4: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x23f6c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_23f6c8:
    // 0x23f6c8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x23f6c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_23f6cc:
    // 0x23f6cc: 0xd0102a  slt         $v0, $a2, $s0
    ctx->pc = 0x23f6ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_23f6d0:
    // 0x23f6d0: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_23f6d4:
    if (ctx->pc == 0x23F6D4u) {
        ctx->pc = 0x23F6D4u;
            // 0x23f6d4: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x23F6D8u;
        goto label_23f6d8;
    }
    ctx->pc = 0x23F6D0u;
    {
        const bool branch_taken_0x23f6d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23F6D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23F6D0u;
            // 0x23f6d4: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f6d0) {
            ctx->pc = 0x23F6ACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_23f6ac;
        }
    }
    ctx->pc = 0x23F6D8u;
label_23f6d8:
    // 0x23f6d8: 0x8faa01b0  lw          $t2, 0x1B0($sp)
    ctx->pc = 0x23f6d8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
label_23f6dc:
    // 0x23f6dc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x23f6dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23f6e0:
    // 0x23f6e0: 0x1a000035  blez        $s0, . + 4 + (0x35 << 2)
label_23f6e4:
    if (ctx->pc == 0x23F6E4u) {
        ctx->pc = 0x23F6E4u;
            // 0x23f6e4: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23F6E8u;
        goto label_23f6e8;
    }
    ctx->pc = 0x23F6E0u;
    {
        const bool branch_taken_0x23f6e0 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x23F6E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23F6E0u;
            // 0x23f6e4: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f6e0) {
            ctx->pc = 0x23F7B8u;
            goto label_23f7b8;
        }
    }
    ctx->pc = 0x23F6E8u;
label_23f6e8:
    // 0x23f6e8: 0x8fa701d0  lw          $a3, 0x1D0($sp)
    ctx->pc = 0x23f6e8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
label_23f6ec:
    // 0x23f6ec: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x23f6ecu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23f6f0:
    // 0x23f6f0: 0x8fa901b8  lw          $t1, 0x1B8($sp)
    ctx->pc = 0x23f6f0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 440)));
label_23f6f4:
    // 0x23f6f4: 0x140682d  daddu       $t5, $t2, $zero
    ctx->pc = 0x23f6f4u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_23f6f8:
    // 0x23f6f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23f6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23f6fc:
    // 0x23f6fc: 0x2408fffe  addiu       $t0, $zero, -0x2
    ctx->pc = 0x23f6fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_23f700:
    // 0x23f700: 0x12e1821  addu        $v1, $t1, $t6
    ctx->pc = 0x23f700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 14)));
label_23f704:
    // 0x23f704: 0x8c740000  lw          $s4, 0x0($v1)
    ctx->pc = 0x23f704u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_23f708:
    // 0x23f708: 0x12880025  beq         $s4, $t0, . + 4 + (0x25 << 2)
label_23f70c:
    if (ctx->pc == 0x23F70Cu) {
        ctx->pc = 0x23F710u;
        goto label_23f710;
    }
    ctx->pc = 0x23F708u;
    {
        const bool branch_taken_0x23f708 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 8));
        if (branch_taken_0x23f708) {
            ctx->pc = 0x23F7A0u;
            goto label_23f7a0;
        }
    }
    ctx->pc = 0x23F710u;
label_23f710:
    // 0x23f710: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x23f710u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_23f714:
    // 0x23f714: 0xf12821  addu        $a1, $a3, $s1
    ctx->pc = 0x23f714u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 17)));
label_23f718:
    // 0x23f718: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x23f718u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_23f71c:
    // 0x23f71c: 0xa0a00000  sb          $zero, 0x0($a1)
    ctx->pc = 0x23f71cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 0));
label_23f720:
    // 0x23f720: 0x680001f  bltz        $s4, . + 4 + (0x1F << 2)
label_23f724:
    if (ctx->pc == 0x23F724u) {
        ctx->pc = 0x23F724u;
            // 0x23f724: 0xadb10000  sw          $s1, 0x0($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 17));
        ctx->pc = 0x23F728u;
        goto label_23f728;
    }
    ctx->pc = 0x23F720u;
    {
        const bool branch_taken_0x23f720 = (GPR_S32(ctx, 20) < 0);
        ctx->pc = 0x23F724u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23F720u;
            // 0x23f724: 0xadb10000  sw          $s1, 0x0($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f720) {
            ctx->pc = 0x23F7A0u;
            goto label_23f7a0;
        }
    }
    ctx->pc = 0x23F728u;
label_23f728:
    // 0x23f728: 0x26cf0001  addiu       $t7, $s6, 0x1
    ctx->pc = 0x23f728u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_23f72c:
    // 0x23f72c: 0x1f0082a  slt         $at, $t7, $s0
    ctx->pc = 0x23f72cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_23f730:
    // 0x23f730: 0x1020001b  beqz        $at, . + 4 + (0x1B << 2)
label_23f734:
    if (ctx->pc == 0x23F734u) {
        ctx->pc = 0x23F738u;
        goto label_23f738;
    }
    ctx->pc = 0x23F730u;
    {
        const bool branch_taken_0x23f730 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x23f730) {
            ctx->pc = 0x23F7A0u;
            goto label_23f7a0;
        }
    }
    ctx->pc = 0x23F738u;
label_23f738:
    // 0x23f738: 0xf6080  sll         $t4, $t7, 2
    ctx->pc = 0x23f738u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
label_23f73c:
    // 0x23f73c: 0x14c5821  addu        $t3, $t2, $t4
    ctx->pc = 0x23f73cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 12)));
label_23f740:
    // 0x23f740: 0x8e6400a4  lw          $a0, 0xA4($s3)
    ctx->pc = 0x23f740u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 164)));
label_23f744:
    // 0x23f744: 0x2683000a  addiu       $v1, $s4, 0xA
    ctx->pc = 0x23f744u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 10));
label_23f748:
    // 0x23f748: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x23f748u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_23f74c:
    // 0x23f74c: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
label_23f750:
    if (ctx->pc == 0x23F750u) {
        ctx->pc = 0x23F754u;
        goto label_23f754;
    }
    ctx->pc = 0x23F74Cu;
    {
        const bool branch_taken_0x23f74c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x23f74c) {
            ctx->pc = 0x23F7A0u;
            goto label_23f7a0;
        }
    }
    ctx->pc = 0x23F754u;
label_23f754:
    // 0x23f754: 0x12c1821  addu        $v1, $t1, $t4
    ctx->pc = 0x23f754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 12)));
label_23f758:
    // 0x23f758: 0x8c770000  lw          $s7, 0x0($v1)
    ctx->pc = 0x23f758u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_23f75c:
    // 0x23f75c: 0x6e0000a  bltz        $s7, . + 4 + (0xA << 2)
label_23f760:
    if (ctx->pc == 0x23F760u) {
        ctx->pc = 0x23F764u;
        goto label_23f764;
    }
    ctx->pc = 0x23F75Cu;
    {
        const bool branch_taken_0x23f75c = (GPR_S32(ctx, 23) < 0);
        if (branch_taken_0x23f75c) {
            ctx->pc = 0x23F788u;
            goto label_23f788;
        }
    }
    ctx->pc = 0x23F764u;
label_23f764:
    // 0x23f764: 0x297b821  addu        $s7, $s4, $s7
    ctx->pc = 0x23f764u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 23)));
label_23f768:
    // 0x23f768: 0x2e4082a  slt         $at, $s7, $a0
    ctx->pc = 0x23f768u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_23f76c:
    // 0x23f76c: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
label_23f770:
    if (ctx->pc == 0x23F770u) {
        ctx->pc = 0x23F774u;
        goto label_23f774;
    }
    ctx->pc = 0x23F76Cu;
    {
        const bool branch_taken_0x23f76c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x23f76c) {
            ctx->pc = 0x23F788u;
            goto label_23f788;
        }
    }
    ctx->pc = 0x23F774u;
label_23f774:
    // 0x23f774: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x23f774u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
label_23f778:
    // 0x23f778: 0x2e0a02d  daddu       $s4, $s7, $zero
    ctx->pc = 0x23f778u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_23f77c:
    // 0x23f77c: 0xad710000  sw          $s1, 0x0($t3)
    ctx->pc = 0x23f77cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 17));
label_23f780:
    // 0x23f780: 0xac680000  sw          $t0, 0x0($v1)
    ctx->pc = 0x23f780u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 8));
label_23f784:
    // 0x23f784: 0x0  nop
    ctx->pc = 0x23f784u;
    // NOP
label_23f788:
    // 0x23f788: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x23f788u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
label_23f78c:
    // 0x23f78c: 0x1f0182a  slt         $v1, $t7, $s0
    ctx->pc = 0x23f78cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_23f790:
    // 0x23f790: 0x258c0004  addiu       $t4, $t4, 0x4
    ctx->pc = 0x23f790u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
label_23f794:
    // 0x23f794: 0x1460ffea  bnez        $v1, . + 4 + (-0x16 << 2)
label_23f798:
    if (ctx->pc == 0x23F798u) {
        ctx->pc = 0x23F798u;
            // 0x23f798: 0x256b0004  addiu       $t3, $t3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
        ctx->pc = 0x23F79Cu;
        goto label_23f79c;
    }
    ctx->pc = 0x23F794u;
    {
        const bool branch_taken_0x23f794 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x23F798u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23F794u;
            // 0x23f798: 0x256b0004  addiu       $t3, $t3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f794) {
            ctx->pc = 0x23F740u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_23f740;
        }
    }
    ctx->pc = 0x23F79Cu;
label_23f79c:
    // 0x23f79c: 0x0  nop
    ctx->pc = 0x23f79cu;
    // NOP
label_23f7a0:
    // 0x23f7a0: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x23f7a0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_23f7a4:
    // 0x23f7a4: 0x2d0182a  slt         $v1, $s6, $s0
    ctx->pc = 0x23f7a4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_23f7a8:
    // 0x23f7a8: 0x25ce0004  addiu       $t6, $t6, 0x4
    ctx->pc = 0x23f7a8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4));
label_23f7ac:
    // 0x23f7ac: 0x1460ffd4  bnez        $v1, . + 4 + (-0x2C << 2)
label_23f7b0:
    if (ctx->pc == 0x23F7B0u) {
        ctx->pc = 0x23F7B0u;
            // 0x23f7b0: 0x25ad0004  addiu       $t5, $t5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4));
        ctx->pc = 0x23F7B4u;
        goto label_23f7b4;
    }
    ctx->pc = 0x23F7ACu;
    {
        const bool branch_taken_0x23f7ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x23F7B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23F7ACu;
            // 0x23f7b0: 0x25ad0004  addiu       $t5, $t5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f7ac) {
            ctx->pc = 0x23F700u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_23f700;
        }
    }
    ctx->pc = 0x23F7B4u;
label_23f7b4:
    // 0x23f7b4: 0x0  nop
    ctx->pc = 0x23f7b4u;
    // NOP
label_23f7b8:
    // 0x23f7b8: 0x27a401d8  addiu       $a0, $sp, 0x1D8
    ctx->pc = 0x23f7b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 472));
label_23f7bc:
    // 0x23f7bc: 0x27a501b0  addiu       $a1, $sp, 0x1B0
    ctx->pc = 0x23f7bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_23f7c0:
    // 0x23f7c0: 0xc0a7d54  jal         func_29F550
label_23f7c4:
    if (ctx->pc == 0x23F7C4u) {
        ctx->pc = 0x23F7C4u;
            // 0x23f7c4: 0x27a70120  addiu       $a3, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->pc = 0x23F7C8u;
        goto label_23f7c8;
    }
    ctx->pc = 0x23F7C0u;
    SET_GPR_U32(ctx, 31, 0x23F7C8u);
    ctx->pc = 0x23F7C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23F7C0u;
            // 0x23f7c4: 0x27a70120  addiu       $a3, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29F550u;
    if (runtime->hasFunction(0x29F550u)) {
        auto targetFn = runtime->lookupFunction(0x29F550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F7C8u; }
        if (ctx->pc != 0x23F7C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029F550_0x29f550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F7C8u; }
        if (ctx->pc != 0x23F7C8u) { return; }
    }
    ctx->pc = 0x23F7C8u;
label_23f7c8:
    // 0x23f7c8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x23f7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_23f7cc:
    // 0x23f7cc: 0x8fa501b0  lw          $a1, 0x1B0($sp)
    ctx->pc = 0x23f7ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
label_23f7d0:
    // 0x23f7d0: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x23f7d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_23f7d4:
    // 0x23f7d4: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x23f7d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
label_23f7d8:
    // 0x23f7d8: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x23f7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_23f7dc:
    // 0x23f7dc: 0x14a20005  bne         $a1, $v0, . + 4 + (0x5 << 2)
label_23f7e0:
    if (ctx->pc == 0x23F7E0u) {
        ctx->pc = 0x23F7E4u;
        goto label_23f7e4;
    }
    ctx->pc = 0x23F7DCu;
    {
        const bool branch_taken_0x23f7dc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x23f7dc) {
            ctx->pc = 0x23F7F4u;
            goto label_23f7f4;
        }
    }
    ctx->pc = 0x23F7E4u;
label_23f7e4:
    // 0x23f7e4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x23f7e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_23f7e8:
    // 0x23f7e8: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x23f7e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_23f7ec:
    // 0x23f7ec: 0x320f809  jalr        $t9
label_23f7f0:
    if (ctx->pc == 0x23F7F0u) {
        ctx->pc = 0x23F7F4u;
        goto label_23f7f4;
    }
    ctx->pc = 0x23F7ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x23F7F4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x23F7F4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23F7F4u; }
            if (ctx->pc != 0x23F7F4u) { return; }
        }
        }
    }
    ctx->pc = 0x23F7F4u;
label_23f7f4:
    // 0x23f7f4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x23f7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_23f7f8:
    // 0x23f7f8: 0x8fa501b8  lw          $a1, 0x1B8($sp)
    ctx->pc = 0x23f7f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 440)));
label_23f7fc:
    // 0x23f7fc: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x23f7fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_23f800:
    // 0x23f800: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x23f800u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
label_23f804:
    // 0x23f804: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x23f804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_23f808:
    // 0x23f808: 0x14a2000c  bne         $a1, $v0, . + 4 + (0xC << 2)
label_23f80c:
    if (ctx->pc == 0x23F80Cu) {
        ctx->pc = 0x23F810u;
        goto label_23f810;
    }
    ctx->pc = 0x23F808u;
    {
        const bool branch_taken_0x23f808 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x23f808) {
            ctx->pc = 0x23F83Cu;
            goto label_23f83c;
        }
    }
    ctx->pc = 0x23F810u;
label_23f810:
    // 0x23f810: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x23f810u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_23f814:
    // 0x23f814: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x23f814u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_23f818:
    // 0x23f818: 0x320f809  jalr        $t9
label_23f81c:
    if (ctx->pc == 0x23F81Cu) {
        ctx->pc = 0x23F820u;
        goto label_23f820;
    }
    ctx->pc = 0x23F818u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x23F820u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x23F820u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23F820u; }
            if (ctx->pc != 0x23F820u) { return; }
        }
        }
    }
    ctx->pc = 0x23F820u;
label_23f820:
    // 0x23f820: 0x10000006  b           . + 4 + (0x6 << 2)
label_23f824:
    if (ctx->pc == 0x23F824u) {
        ctx->pc = 0x23F828u;
        goto label_23f828;
    }
    ctx->pc = 0x23F820u;
    {
        const bool branch_taken_0x23f820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23f820) {
            ctx->pc = 0x23F83Cu;
            goto label_23f83c;
        }
    }
    ctx->pc = 0x23F828u;
label_23f828:
    // 0x23f828: 0x8fa20124  lw          $v0, 0x124($sp)
    ctx->pc = 0x23f828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
label_23f82c:
    // 0x23f82c: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x23f82cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_23f830:
    // 0x23f830: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23f830u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23f834:
    // 0x23f834: 0xc0a8458  jal         func_2A1160
label_23f838:
    if (ctx->pc == 0x23F838u) {
        ctx->pc = 0x23F838u;
            // 0x23f838: 0x24460001  addiu       $a2, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x23F83Cu;
        goto label_23f83c;
    }
    ctx->pc = 0x23F834u;
    SET_GPR_U32(ctx, 31, 0x23F83Cu);
    ctx->pc = 0x23F838u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23F834u;
            // 0x23f838: 0x24460001  addiu       $a2, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A1160u;
    if (runtime->hasFunction(0x2A1160u)) {
        auto targetFn = runtime->lookupFunction(0x2A1160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F83Cu; }
        if (ctx->pc != 0x23F83Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A1160_0x2a1160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F83Cu; }
        if (ctx->pc != 0x23F83Cu) { return; }
    }
    ctx->pc = 0x23F83Cu;
label_23f83c:
    // 0x23f83c: 0x27a401d8  addiu       $a0, $sp, 0x1D8
    ctx->pc = 0x23f83cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 472));
label_23f840:
    // 0x23f840: 0xc0a7cbc  jal         func_29F2F0
label_23f844:
    if (ctx->pc == 0x23F844u) {
        ctx->pc = 0x23F844u;
            // 0x23f844: 0x27a50120  addiu       $a1, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->pc = 0x23F848u;
        goto label_23f848;
    }
    ctx->pc = 0x23F840u;
    SET_GPR_U32(ctx, 31, 0x23F848u);
    ctx->pc = 0x23F844u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23F840u;
            // 0x23f844: 0x27a50120  addiu       $a1, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29F2F0u;
    if (runtime->hasFunction(0x29F2F0u)) {
        auto targetFn = runtime->lookupFunction(0x29F2F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F848u; }
        if (ctx->pc != 0x23F848u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029F2F0_0x29f2f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F848u; }
        if (ctx->pc != 0x23F848u) { return; }
    }
    ctx->pc = 0x23F848u;
label_23f848:
    // 0x23f848: 0x8fa501d0  lw          $a1, 0x1D0($sp)
    ctx->pc = 0x23f848u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
label_23f84c:
    // 0x23f84c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x23f84cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23f850:
    // 0x23f850: 0xa23021  addu        $a2, $a1, $v0
    ctx->pc = 0x23f850u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_23f854:
    // 0x23f854: 0x80a70000  lb          $a3, 0x0($a1)
    ctx->pc = 0x23f854u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_23f858:
    // 0x23f858: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x23f858u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_23f85c:
    // 0x23f85c: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x23f85cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
label_23f860:
    // 0x23f860: 0xa0c70000  sb          $a3, 0x0($a2)
    ctx->pc = 0x23f860u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 7));
label_23f864:
    // 0x23f864: 0x8fa30120  lw          $v1, 0x120($sp)
    ctx->pc = 0x23f864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_23f868:
    // 0x23f868: 0x8fb60124  lw          $s6, 0x124($sp)
    ctx->pc = 0x23f868u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
label_23f86c:
    // 0x23f86c: 0x8eb70050  lw          $s7, 0x50($s5)
    ctx->pc = 0x23f86cu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
label_23f870:
    // 0x23f870: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x23f870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_23f874:
    // 0x23f874: 0x16c40026  bne         $s6, $a0, . + 4 + (0x26 << 2)
label_23f878:
    if (ctx->pc == 0x23F878u) {
        ctx->pc = 0x23F878u;
            // 0x23f878: 0x7fa300a0  sq          $v1, 0xA0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 3));
        ctx->pc = 0x23F87Cu;
        goto label_23f87c;
    }
    ctx->pc = 0x23F874u;
    {
        const bool branch_taken_0x23f874 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 4));
        ctx->pc = 0x23F878u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23F874u;
            // 0x23f878: 0x7fa300a0  sq          $v1, 0xA0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f874) {
            ctx->pc = 0x23F910u;
            goto label_23f910;
        }
    }
    ctx->pc = 0x23F87Cu;
label_23f87c:
    // 0x23f87c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x23f87cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_23f880:
    // 0x23f880: 0x8c64ea40  lw          $a0, -0x15C0($v1)
    ctx->pc = 0x23f880u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961728)));
label_23f884:
    // 0x23f884: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x23f884u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
label_23f888:
    // 0x23f888: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x23f888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_23f88c:
    // 0x23f88c: 0x54a30006  bnel        $a1, $v1, . + 4 + (0x6 << 2)
label_23f890:
    if (ctx->pc == 0x23F890u) {
        ctx->pc = 0x23F890u;
            // 0x23f890: 0x8fa40128  lw          $a0, 0x128($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
        ctx->pc = 0x23F894u;
        goto label_23f894;
    }
    ctx->pc = 0x23F88Cu;
    {
        const bool branch_taken_0x23f88c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x23f88c) {
            ctx->pc = 0x23F890u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23F88Cu;
            // 0x23f890: 0x8fa40128  lw          $a0, 0x128($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23F8A8u;
            goto label_23f8a8;
        }
    }
    ctx->pc = 0x23F894u;
label_23f894:
    // 0x23f894: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x23f894u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_23f898:
    // 0x23f898: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x23f898u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_23f89c:
    // 0x23f89c: 0x320f809  jalr        $t9
label_23f8a0:
    if (ctx->pc == 0x23F8A0u) {
        ctx->pc = 0x23F8A4u;
        goto label_23f8a4;
    }
    ctx->pc = 0x23F89Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x23F8A4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x23F8A4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23F8A4u; }
            if (ctx->pc != 0x23F8A4u) { return; }
        }
        }
    }
    ctx->pc = 0x23F8A4u;
label_23f8a4:
    // 0x23f8a4: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x23f8a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
label_23f8a8:
    // 0x23f8a8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x23f8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_23f8ac:
    // 0x23f8ac: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x23f8acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_23f8b0:
    // 0x23f8b0: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
label_23f8b4:
    if (ctx->pc == 0x23F8B4u) {
        ctx->pc = 0x23F8B8u;
        goto label_23f8b8;
    }
    ctx->pc = 0x23F8B0u;
    {
        const bool branch_taken_0x23f8b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x23f8b0) {
            ctx->pc = 0x23F8DCu;
            goto label_23f8dc;
        }
    }
    ctx->pc = 0x23F8B8u;
label_23f8b8:
    // 0x23f8b8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x23f8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_23f8bc:
    // 0x23f8bc: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x23f8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
label_23f8c0:
    // 0x23f8c0: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x23f8c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_23f8c4:
    // 0x23f8c4: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x23f8c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_23f8c8:
    // 0x23f8c8: 0x8fa50120  lw          $a1, 0x120($sp)
    ctx->pc = 0x23f8c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_23f8cc:
    // 0x23f8cc: 0x310bc  dsll32      $v0, $v1, 2
    ctx->pc = 0x23f8ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 2));
label_23f8d0:
    // 0x23f8d0: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x23f8d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_23f8d4:
    // 0x23f8d4: 0xc0a7ab4  jal         func_29EAD0
label_23f8d8:
    if (ctx->pc == 0x23F8D8u) {
        ctx->pc = 0x23F8D8u;
            // 0x23f8d8: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x23F8DCu;
        goto label_23f8dc;
    }
    ctx->pc = 0x23F8D4u;
    SET_GPR_U32(ctx, 31, 0x23F8DCu);
    ctx->pc = 0x23F8D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23F8D4u;
            // 0x23f8d8: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F8DCu; }
        if (ctx->pc != 0x23F8DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F8DCu; }
        if (ctx->pc != 0x23F8DCu) { return; }
    }
    ctx->pc = 0x23F8DCu;
label_23f8dc:
    // 0x23f8dc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x23f8dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_23f8e0:
    // 0x23f8e0: 0x8fa501e0  lw          $a1, 0x1E0($sp)
    ctx->pc = 0x23f8e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
label_23f8e4:
    // 0x23f8e4: 0x8c64ea40  lw          $a0, -0x15C0($v1)
    ctx->pc = 0x23f8e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961728)));
label_23f8e8:
    // 0x23f8e8: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x23f8e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
label_23f8ec:
    // 0x23f8ec: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x23f8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_23f8f0:
    // 0x23f8f0: 0x14a302a2  bne         $a1, $v1, . + 4 + (0x2A2 << 2)
label_23f8f4:
    if (ctx->pc == 0x23F8F4u) {
        ctx->pc = 0x23F8F8u;
        goto label_23f8f8;
    }
    ctx->pc = 0x23F8F0u;
    {
        const bool branch_taken_0x23f8f0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x23f8f0) {
            ctx->pc = 0x24037Cu;
            goto label_24037c;
        }
    }
    ctx->pc = 0x23F8F8u;
label_23f8f8:
    // 0x23f8f8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x23f8f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_23f8fc:
    // 0x23f8fc: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x23f8fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_23f900:
    // 0x23f900: 0x320f809  jalr        $t9
label_23f904:
    if (ctx->pc == 0x23F904u) {
        ctx->pc = 0x23F908u;
        goto label_23f908;
    }
    ctx->pc = 0x23F900u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x23F908u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x23F908u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23F908u; }
            if (ctx->pc != 0x23F908u) { return; }
        }
        }
    }
    ctx->pc = 0x23F908u;
label_23f908:
    // 0x23f908: 0x1000029c  b           . + 4 + (0x29C << 2)
label_23f90c:
    if (ctx->pc == 0x23F90Cu) {
        ctx->pc = 0x23F910u;
        goto label_23f910;
    }
    ctx->pc = 0x23F908u;
    {
        const bool branch_taken_0x23f908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23f908) {
            ctx->pc = 0x24037Cu;
            goto label_24037c;
        }
    }
    ctx->pc = 0x23F910u;
label_23f910:
    // 0x23f910: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x23f910u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_23f914:
    // 0x23f914: 0x162880  sll         $a1, $s6, 2
    ctx->pc = 0x23f914u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
label_23f918:
    // 0x23f918: 0x8c64ea40  lw          $a0, -0x15C0($v1)
    ctx->pc = 0x23f918u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961728)));
label_23f91c:
    // 0x23f91c: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x23f91cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_23f920:
    // 0x23f920: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x23f920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
label_23f924:
    // 0x23f924: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x23f924u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_23f928:
    // 0x23f928: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x23f928u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_23f92c:
    // 0x23f92c: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x23f92cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_23f930:
    // 0x23f930: 0xe53021  addu        $a2, $a3, $a1
    ctx->pc = 0x23f930u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_23f934:
    // 0x23f934: 0x66082b  sltu        $at, $v1, $a2
    ctx->pc = 0x23f934u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_23f938:
    // 0x23f938: 0x54200004  bnel        $at, $zero, . + 4 + (0x4 << 2)
label_23f93c:
    if (ctx->pc == 0x23F93Cu) {
        ctx->pc = 0x23F93Cu;
            // 0x23f93c: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x23F940u;
        goto label_23f940;
    }
    ctx->pc = 0x23F938u;
    {
        const bool branch_taken_0x23f938 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x23f938) {
            ctx->pc = 0x23F93Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23F938u;
            // 0x23f93c: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23F94Cu;
            goto label_23f94c;
        }
    }
    ctx->pc = 0x23F940u;
label_23f940:
    // 0x23f940: 0x10000006  b           . + 4 + (0x6 << 2)
label_23f944:
    if (ctx->pc == 0x23F944u) {
        ctx->pc = 0x23F944u;
            // 0x23f944: 0xac86000c  sw          $a2, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
        ctx->pc = 0x23F948u;
        goto label_23f948;
    }
    ctx->pc = 0x23F940u;
    {
        const bool branch_taken_0x23f940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F944u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23F940u;
            // 0x23f944: 0xac86000c  sw          $a2, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f940) {
            ctx->pc = 0x23F95Cu;
            goto label_23f95c;
        }
    }
    ctx->pc = 0x23F948u;
label_23f948:
    // 0x23f948: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x23f948u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_23f94c:
    // 0x23f94c: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x23f94cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_23f950:
    // 0x23f950: 0x320f809  jalr        $t9
label_23f954:
    if (ctx->pc == 0x23F954u) {
        ctx->pc = 0x23F958u;
        goto label_23f958;
    }
    ctx->pc = 0x23F950u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x23F958u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x23F958u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23F958u; }
            if (ctx->pc != 0x23F958u) { return; }
        }
        }
    }
    ctx->pc = 0x23F958u;
label_23f958:
    // 0x23f958: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x23f958u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23f95c:
    // 0x23f95c: 0x8fa501d0  lw          $a1, 0x1D0($sp)
    ctx->pc = 0x23f95cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
label_23f960:
    // 0x23f960: 0x2403fff3  addiu       $v1, $zero, -0xD
    ctx->pc = 0x23f960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
label_23f964:
    // 0x23f964: 0x92a40027  lbu         $a0, 0x27($s5)
    ctx->pc = 0x23f964u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 39)));
label_23f968:
    // 0x23f968: 0x2ac10002  slti        $at, $s6, 0x2
    ctx->pc = 0x23f968u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)2) ? 1 : 0);
label_23f96c:
    // 0x23f96c: 0xafa701c8  sw          $a3, 0x1C8($sp)
    ctx->pc = 0x23f96cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 456), GPR_U32(ctx, 7));
label_23f970:
    // 0x23f970: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x23f970u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23f974:
    // 0x23f974: 0x80a50000  lb          $a1, 0x0($a1)
    ctx->pc = 0x23f974u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_23f978:
    // 0x23f978: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x23f978u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_23f97c:
    // 0x23f97c: 0x5202b  sltu        $a0, $zero, $a1
    ctx->pc = 0x23f97cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_23f980:
    // 0x23f980: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x23f980u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_23f984:
    // 0x23f984: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x23f984u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_23f988:
    // 0x23f988: 0xa2a30027  sb          $v1, 0x27($s5)
    ctx->pc = 0x23f988u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 39), (uint8_t)GPR_U32(ctx, 3));
label_23f98c:
    // 0x23f98c: 0x14200048  bnez        $at, . + 4 + (0x48 << 2)
label_23f990:
    if (ctx->pc == 0x23F990u) {
        ctx->pc = 0x23F990u;
            // 0x23f990: 0xacf50000  sw          $s5, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 21));
        ctx->pc = 0x23F994u;
        goto label_23f994;
    }
    ctx->pc = 0x23F98Cu;
    {
        const bool branch_taken_0x23f98c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x23F990u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23F98Cu;
            // 0x23f990: 0xacf50000  sw          $s5, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f98c) {
            ctx->pc = 0x23FAB0u;
            goto label_23fab0;
        }
    }
    ctx->pc = 0x23F994u;
label_23f994:
    // 0x23f994: 0x24140004  addiu       $s4, $zero, 0x4
    ctx->pc = 0x23f994u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_23f998:
    // 0x23f998: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x23f998u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_23f99c:
    // 0x23f99c: 0x24050070  addiu       $a1, $zero, 0x70
    ctx->pc = 0x23f99cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_23f9a0:
    // 0x23f9a0: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x23f9a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_23f9a4:
    // 0x23f9a4: 0xc0a7a88  jal         func_29EA20
label_23f9a8:
    if (ctx->pc == 0x23F9A8u) {
        ctx->pc = 0x23F9A8u;
            // 0x23f9a8: 0x24060030  addiu       $a2, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->pc = 0x23F9ACu;
        goto label_23f9ac;
    }
    ctx->pc = 0x23F9A4u;
    SET_GPR_U32(ctx, 31, 0x23F9ACu);
    ctx->pc = 0x23F9A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23F9A4u;
            // 0x23f9a8: 0x24060030  addiu       $a2, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F9ACu; }
        if (ctx->pc != 0x23F9ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F9ACu; }
        if (ctx->pc != 0x23F9ACu) { return; }
    }
    ctx->pc = 0x23F9ACu;
label_23f9ac:
    // 0x23f9ac: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x23f9acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_23f9b0:
    // 0x23f9b0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x23f9b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23f9b4:
    // 0x23f9b4: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_23f9b8:
    if (ctx->pc == 0x23F9B8u) {
        ctx->pc = 0x23F9B8u;
            // 0x23f9b8: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x23F9BCu;
        goto label_23f9bc;
    }
    ctx->pc = 0x23F9B4u;
    {
        const bool branch_taken_0x23f9b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F9B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23F9B4u;
            // 0x23f9b8: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f9b4) {
            ctx->pc = 0x23F9C8u;
            goto label_23f9c8;
        }
    }
    ctx->pc = 0x23F9BCu;
label_23f9bc:
    // 0x23f9bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23f9bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23f9c0:
    // 0x23f9c0: 0xc08b5a8  jal         func_22D6A0
label_23f9c4:
    if (ctx->pc == 0x23F9C4u) {
        ctx->pc = 0x23F9C4u;
            // 0x23f9c4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23F9C8u;
        goto label_23f9c8;
    }
    ctx->pc = 0x23F9C0u;
    SET_GPR_U32(ctx, 31, 0x23F9C8u);
    ctx->pc = 0x23F9C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23F9C0u;
            // 0x23f9c4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6A0u;
    if (runtime->hasFunction(0x22D6A0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F9C8u; }
        if (ctx->pc != 0x23F9C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6A0_0x22d6a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F9C8u; }
        if (ctx->pc != 0x23F9C8u) { return; }
    }
    ctx->pc = 0x23F9C8u;
label_23f9c8:
    // 0x23f9c8: 0x92030028  lbu         $v1, 0x28($s0)
    ctx->pc = 0x23f9c8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 40)));
label_23f9cc:
    // 0x23f9cc: 0x2406fff3  addiu       $a2, $zero, -0xD
    ctx->pc = 0x23f9ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
label_23f9d0:
    // 0x23f9d0: 0x64070004  daddiu      $a3, $zero, 0x4
    ctx->pc = 0x23f9d0u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)4);
label_23f9d4:
    // 0x23f9d4: 0x2404fffc  addiu       $a0, $zero, -0x4
    ctx->pc = 0x23f9d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_23f9d8:
    // 0x23f9d8: 0x64080001  daddiu      $t0, $zero, 0x1
    ctx->pc = 0x23f9d8u;
    SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_23f9dc:
    // 0x23f9dc: 0x662824  and         $a1, $v1, $a2
    ctx->pc = 0x23f9dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
label_23f9e0:
    // 0x23f9e0: 0xa72825  or          $a1, $a1, $a3
    ctx->pc = 0x23f9e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
label_23f9e4:
    // 0x23f9e4: 0x8fa301d0  lw          $v1, 0x1D0($sp)
    ctx->pc = 0x23f9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
label_23f9e8:
    // 0x23f9e8: 0xa2050028  sb          $a1, 0x28($s0)
    ctx->pc = 0x23f9e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 40), (uint8_t)GPR_U32(ctx, 5));
label_23f9ec:
    // 0x23f9ec: 0x92050028  lbu         $a1, 0x28($s0)
    ctx->pc = 0x23f9ecu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 40)));
label_23f9f0:
    // 0x23f9f0: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x23f9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_23f9f4:
    // 0x23f9f4: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x23f9f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_23f9f8:
    // 0x23f9f8: 0x882025  or          $a0, $a0, $t0
    ctx->pc = 0x23f9f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 8));
label_23f9fc:
    // 0x23f9fc: 0xa2040028  sb          $a0, 0x28($s0)
    ctx->pc = 0x23f9fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 40), (uint8_t)GPR_U32(ctx, 4));
label_23fa00:
    // 0x23fa00: 0x80640000  lb          $a0, 0x0($v1)
    ctx->pc = 0x23fa00u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_23fa04:
    // 0x23fa04: 0x92030027  lbu         $v1, 0x27($s0)
    ctx->pc = 0x23fa04u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 39)));
label_23fa08:
    // 0x23fa08: 0x4202b  sltu        $a0, $zero, $a0
    ctx->pc = 0x23fa08u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_23fa0c:
    // 0x23fa0c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x23fa0cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_23fa10:
    // 0x23fa10: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x23fa10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
label_23fa14:
    // 0x23fa14: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x23fa14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_23fa18:
    // 0x23fa18: 0xa2030027  sb          $v1, 0x27($s0)
    ctx->pc = 0x23fa18u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 39), (uint8_t)GPR_U32(ctx, 3));
label_23fa1c:
    // 0x23fa1c: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x23fa1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_23fa20:
    // 0x23fa20: 0xa6030020  sh          $v1, 0x20($s0)
    ctx->pc = 0x23fa20u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 32), (uint16_t)GPR_U32(ctx, 3));
label_23fa24:
    // 0x23fa24: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x23fa24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_23fa28:
    // 0x23fa28: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x23fa28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_23fa2c:
    // 0x23fa2c: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x23fa2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
label_23fa30:
    // 0x23fa30: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x23fa30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
label_23fa34:
    // 0x23fa34: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
label_23fa38:
    if (ctx->pc == 0x23FA38u) {
        ctx->pc = 0x23FA3Cu;
        goto label_23fa3c;
    }
    ctx->pc = 0x23FA34u;
    {
        const bool branch_taken_0x23fa34 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x23fa34) {
            ctx->pc = 0x23FA48u;
            goto label_23fa48;
        }
    }
    ctx->pc = 0x23FA3Cu;
label_23fa3c:
    // 0x23fa3c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x23fa3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_23fa40:
    // 0x23fa40: 0xc0a728c  jal         func_29CA30
label_23fa44:
    if (ctx->pc == 0x23FA44u) {
        ctx->pc = 0x23FA44u;
            // 0x23fa44: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x23FA48u;
        goto label_23fa48;
    }
    ctx->pc = 0x23FA40u;
    SET_GPR_U32(ctx, 31, 0x23FA48u);
    ctx->pc = 0x23FA44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23FA40u;
            // 0x23fa44: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23FA48u; }
        if (ctx->pc != 0x23FA48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23FA48u; }
        if (ctx->pc != 0x23FA48u) { return; }
    }
    ctx->pc = 0x23FA48u;
label_23fa48:
    // 0x23fa48: 0x8e460004  lw          $a2, 0x4($s2)
    ctx->pc = 0x23fa48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_23fa4c:
    // 0x23fa4c: 0x8fa301c8  lw          $v1, 0x1C8($sp)
    ctx->pc = 0x23fa4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 456)));
label_23fa50:
    // 0x23fa50: 0x24c50001  addiu       $a1, $a2, 0x1
    ctx->pc = 0x23fa50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_23fa54:
    // 0x23fa54: 0xae450004  sw          $a1, 0x4($s2)
    ctx->pc = 0x23fa54u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 5));
label_23fa58:
    // 0x23fa58: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x23fa58u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_23fa5c:
    // 0x23fa5c: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x23fa5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_23fa60:
    // 0x23fa60: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x23fa60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_23fa64:
    // 0x23fa64: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x23fa64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_23fa68:
    // 0x23fa68: 0xacb00000  sw          $s0, 0x0($a1)
    ctx->pc = 0x23fa68u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 16));
label_23fa6c:
    // 0x23fa6c: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x23fa6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
label_23fa70:
    // 0x23fa70: 0x8fa50120  lw          $a1, 0x120($sp)
    ctx->pc = 0x23fa70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_23fa74:
    // 0x23fa74: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x23fa74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_23fa78:
    // 0x23fa78: 0xb42821  addu        $a1, $a1, $s4
    ctx->pc = 0x23fa78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 20)));
label_23fa7c:
    // 0x23fa7c: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x23fa7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_23fa80:
    // 0x23fa80: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x23fa80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
label_23fa84:
    // 0x23fa84: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x23fa84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
label_23fa88:
    // 0x23fa88: 0x65082a  slt         $at, $v1, $a1
    ctx->pc = 0x23fa88u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_23fa8c:
    // 0x23fa8c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_23fa90:
    if (ctx->pc == 0x23FA90u) {
        ctx->pc = 0x23FA90u;
            // 0x23fa90: 0x2604004c  addiu       $a0, $s0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 76));
        ctx->pc = 0x23FA94u;
        goto label_23fa94;
    }
    ctx->pc = 0x23FA8Cu;
    {
        const bool branch_taken_0x23fa8c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x23FA90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23FA8Cu;
            // 0x23fa90: 0x2604004c  addiu       $a0, $s0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fa8c) {
            ctx->pc = 0x23FAA0u;
            goto label_23faa0;
        }
    }
    ctx->pc = 0x23FA94u;
label_23fa94:
    // 0x23fa94: 0xc0a725c  jal         func_29C970
label_23fa98:
    if (ctx->pc == 0x23FA98u) {
        ctx->pc = 0x23FA98u;
            // 0x23fa98: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x23FA9Cu;
        goto label_23fa9c;
    }
    ctx->pc = 0x23FA94u;
    SET_GPR_U32(ctx, 31, 0x23FA9Cu);
    ctx->pc = 0x23FA98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23FA94u;
            // 0x23fa98: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29C970u;
    if (runtime->hasFunction(0x29C970u)) {
        auto targetFn = runtime->lookupFunction(0x29C970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23FA9Cu; }
        if (ctx->pc != 0x23FA9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029C970_0x29c970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23FA9Cu; }
        if (ctx->pc != 0x23FA9Cu) { return; }
    }
    ctx->pc = 0x23FA9Cu;
label_23fa9c:
    // 0x23fa9c: 0x0  nop
    ctx->pc = 0x23fa9cu;
    // NOP
label_23faa0:
    // 0x23faa0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x23faa0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_23faa4:
    // 0x23faa4: 0x236182a  slt         $v1, $s1, $s6
    ctx->pc = 0x23faa4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
label_23faa8:
    // 0x23faa8: 0x1460ffbb  bnez        $v1, . + 4 + (-0x45 << 2)
label_23faac:
    if (ctx->pc == 0x23FAACu) {
        ctx->pc = 0x23FAACu;
            // 0x23faac: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->pc = 0x23FAB0u;
        goto label_23fab0;
    }
    ctx->pc = 0x23FAA8u;
    {
        const bool branch_taken_0x23faa8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x23FAACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23FAA8u;
            // 0x23faac: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23faa8) {
            ctx->pc = 0x23F998u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_23f998;
        }
    }
    ctx->pc = 0x23FAB0u;
label_23fab0:
    // 0x23fab0: 0x8eb00050  lw          $s0, 0x50($s5)
    ctx->pc = 0x23fab0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
label_23fab4:
    // 0x23fab4: 0x13c00012  beqz        $fp, . + 4 + (0x12 << 2)
label_23fab8:
    if (ctx->pc == 0x23FAB8u) {
        ctx->pc = 0x23FAB8u;
            // 0x23fab8: 0x8eb1004c  lw          $s1, 0x4C($s5) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
        ctx->pc = 0x23FABCu;
        goto label_23fabc;
    }
    ctx->pc = 0x23FAB4u;
    {
        const bool branch_taken_0x23fab4 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x23FAB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23FAB4u;
            // 0x23fab8: 0x8eb1004c  lw          $s1, 0x4C($s5) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fab4) {
            ctx->pc = 0x23FB00u;
            goto label_23fb00;
        }
    }
    ctx->pc = 0x23FABCu;
label_23fabc:
    // 0x23fabc: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x23fabcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_23fac0:
    // 0x23fac0: 0xc090994  jal         func_242650
label_23fac4:
    if (ctx->pc == 0x23FAC4u) {
        ctx->pc = 0x23FAC4u;
            // 0x23fac4: 0x26a4004c  addiu       $a0, $s5, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 76));
        ctx->pc = 0x23FAC8u;
        goto label_23fac8;
    }
    ctx->pc = 0x23FAC0u;
    SET_GPR_U32(ctx, 31, 0x23FAC8u);
    ctx->pc = 0x23FAC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23FAC0u;
            // 0x23fac4: 0x26a4004c  addiu       $a0, $s5, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 76));
        ctx->in_delay_slot = false;
    ctx->pc = 0x242650u;
    if (runtime->hasFunction(0x242650u)) {
        auto targetFn = runtime->lookupFunction(0x242650u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23FAC8u; }
        if (ctx->pc != 0x23FAC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00242650_0x242650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23FAC8u; }
        if (ctx->pc != 0x23FAC8u) { return; }
    }
    ctx->pc = 0x23FAC8u;
label_23fac8:
    // 0x23fac8: 0xaea00050  sw          $zero, 0x50($s5)
    ctx->pc = 0x23fac8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 80), GPR_U32(ctx, 0));
label_23facc:
    // 0x23facc: 0x8fa40120  lw          $a0, 0x120($sp)
    ctx->pc = 0x23faccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_23fad0:
    // 0x23fad0: 0x8ea30054  lw          $v1, 0x54($s5)
    ctx->pc = 0x23fad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
label_23fad4:
    // 0x23fad4: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x23fad4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_23fad8:
    // 0x23fad8: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x23fad8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
label_23fadc:
    // 0x23fadc: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x23fadcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
label_23fae0:
    // 0x23fae0: 0x65082a  slt         $at, $v1, $a1
    ctx->pc = 0x23fae0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_23fae4:
    // 0x23fae4: 0x50200008  beql        $at, $zero, . + 4 + (0x8 << 2)
label_23fae8:
    if (ctx->pc == 0x23FAE8u) {
        ctx->pc = 0x23FAE8u;
            // 0x23fae8: 0x782d  daddu       $t7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23FAECu;
        goto label_23faec;
    }
    ctx->pc = 0x23FAE4u;
    {
        const bool branch_taken_0x23fae4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x23fae4) {
            ctx->pc = 0x23FAE8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23FAE4u;
            // 0x23fae8: 0x782d  daddu       $t7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23FB08u;
            goto label_23fb08;
        }
    }
    ctx->pc = 0x23FAECu;
label_23faec:
    // 0x23faec: 0x26a4004c  addiu       $a0, $s5, 0x4C
    ctx->pc = 0x23faecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 76));
label_23faf0:
    // 0x23faf0: 0xc0a725c  jal         func_29C970
label_23faf4:
    if (ctx->pc == 0x23FAF4u) {
        ctx->pc = 0x23FAF4u;
            // 0x23faf4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x23FAF8u;
        goto label_23faf8;
    }
    ctx->pc = 0x23FAF0u;
    SET_GPR_U32(ctx, 31, 0x23FAF8u);
    ctx->pc = 0x23FAF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23FAF0u;
            // 0x23faf4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29C970u;
    if (runtime->hasFunction(0x29C970u)) {
        auto targetFn = runtime->lookupFunction(0x29C970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23FAF8u; }
        if (ctx->pc != 0x23FAF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029C970_0x29c970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23FAF8u; }
        if (ctx->pc != 0x23FAF8u) { return; }
    }
    ctx->pc = 0x23FAF8u;
label_23faf8:
    // 0x23faf8: 0x10000002  b           . + 4 + (0x2 << 2)
label_23fafc:
    if (ctx->pc == 0x23FAFCu) {
        ctx->pc = 0x23FB00u;
        goto label_23fb00;
    }
    ctx->pc = 0x23FAF8u;
    {
        const bool branch_taken_0x23faf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23faf8) {
            ctx->pc = 0x23FB04u;
            goto label_23fb04;
        }
    }
    ctx->pc = 0x23FB00u;
label_23fb00:
    // 0x23fb00: 0xaea00050  sw          $zero, 0x50($s5)
    ctx->pc = 0x23fb00u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 80), GPR_U32(ctx, 0));
label_23fb04:
    // 0x23fb04: 0x782d  daddu       $t7, $zero, $zero
    ctx->pc = 0x23fb04u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23fb08:
    // 0x23fb08: 0x1a000077  blez        $s0, . + 4 + (0x77 << 2)
label_23fb0c:
    if (ctx->pc == 0x23FB0Cu) {
        ctx->pc = 0x23FB10u;
        goto label_23fb10;
    }
    ctx->pc = 0x23FB08u;
    {
        const bool branch_taken_0x23fb08 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x23fb08) {
            ctx->pc = 0x23FCE8u;
            goto label_23fce8;
        }
    }
    ctx->pc = 0x23FB10u;
label_23fb10:
    // 0x23fb10: 0x8fa801c8  lw          $t0, 0x1C8($sp)
    ctx->pc = 0x23fb10u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 456)));
label_23fb14:
    // 0x23fb14: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x23fb14u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23fb18:
    // 0x23fb18: 0x8fa301e0  lw          $v1, 0x1E0($sp)
    ctx->pc = 0x23fb18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
label_23fb1c:
    // 0x23fb1c: 0x8e270000  lw          $a3, 0x0($s1)
    ctx->pc = 0x23fb1cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_23fb20:
    // 0x23fb20: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x23fb20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_23fb24:
    // 0x23fb24: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x23fb24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_23fb28:
    // 0x23fb28: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x23fb28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_23fb2c:
    // 0x23fb2c: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x23fb2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
label_23fb30:
    // 0x23fb30: 0x8c6e0000  lw          $t6, 0x0($v1)
    ctx->pc = 0x23fb30u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_23fb34:
    // 0x23fb34: 0xacee0094  sw          $t6, 0x94($a3)
    ctx->pc = 0x23fb34u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 148), GPR_U32(ctx, 14));
label_23fb38:
    // 0x23fb38: 0x8dc30050  lw          $v1, 0x50($t6)
    ctx->pc = 0x23fb38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 80)));
label_23fb3c:
    // 0x23fb3c: 0xa4e3006c  sh          $v1, 0x6C($a3)
    ctx->pc = 0x23fb3cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 108), (uint16_t)GPR_U32(ctx, 3));
label_23fb40:
    // 0x23fb40: 0x8dc40050  lw          $a0, 0x50($t6)
    ctx->pc = 0x23fb40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 80)));
label_23fb44:
    // 0x23fb44: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x23fb44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_23fb48:
    // 0x23fb48: 0xadc30050  sw          $v1, 0x50($t6)
    ctx->pc = 0x23fb48u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 80), GPR_U32(ctx, 3));
label_23fb4c:
    // 0x23fb4c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x23fb4cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_23fb50:
    // 0x23fb50: 0x8dc3004c  lw          $v1, 0x4C($t6)
    ctx->pc = 0x23fb50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 76)));
label_23fb54:
    // 0x23fb54: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x23fb54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_23fb58:
    // 0x23fb58: 0x12ae005d  beq         $s5, $t6, . + 4 + (0x5D << 2)
label_23fb5c:
    if (ctx->pc == 0x23FB5Cu) {
        ctx->pc = 0x23FB5Cu;
            // 0x23fb5c: 0xac670000  sw          $a3, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
        ctx->pc = 0x23FB60u;
        goto label_23fb60;
    }
    ctx->pc = 0x23FB58u;
    {
        const bool branch_taken_0x23fb58 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 14));
        ctx->pc = 0x23FB5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23FB58u;
            // 0x23fb5c: 0xac670000  sw          $a3, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fb58) {
            ctx->pc = 0x23FCD0u;
            goto label_23fcd0;
        }
    }
    ctx->pc = 0x23FB60u;
label_23fb60:
    // 0x23fb60: 0x94e30074  lhu         $v1, 0x74($a3)
    ctx->pc = 0x23fb60u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 116)));
label_23fb64:
    // 0x23fb64: 0x8ced0070  lw          $t5, 0x70($a3)
    ctx->pc = 0x23fb64u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 112)));
label_23fb68:
    // 0x23fb68: 0x18600059  blez        $v1, . + 4 + (0x59 << 2)
label_23fb6c:
    if (ctx->pc == 0x23FB6Cu) {
        ctx->pc = 0x23FB6Cu;
            // 0x23fb6c: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23FB70u;
        goto label_23fb70;
    }
    ctx->pc = 0x23FB68u;
    {
        const bool branch_taken_0x23fb68 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x23FB6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23FB68u;
            // 0x23fb6c: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fb68) {
            ctx->pc = 0x23FCD0u;
            goto label_23fcd0;
        }
    }
    ctx->pc = 0x23FB70u;
label_23fb70:
    // 0x23fb70: 0x8ea3001c  lw          $v1, 0x1C($s5)
    ctx->pc = 0x23fb70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
label_23fb74:
    // 0x23fb74: 0x95aa0014  lhu         $t2, 0x14($t5)
    ctx->pc = 0x23fb74u;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 20)));
label_23fb78:
    // 0x23fb78: 0x95a60016  lhu         $a2, 0x16($t5)
    ctx->pc = 0x23fb78u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 22)));
label_23fb7c:
    // 0x23fb7c: 0x95a50018  lhu         $a1, 0x18($t5)
    ctx->pc = 0x23fb7cu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 24)));
label_23fb80:
    // 0x23fb80: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x23fb80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_23fb84:
    // 0x23fb84: 0x8eab0008  lw          $t3, 0x8($s5)
    ctx->pc = 0x23fb84u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_23fb88:
    // 0x23fb88: 0xaea3001c  sw          $v1, 0x1C($s5)
    ctx->pc = 0x23fb88u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 28), GPR_U32(ctx, 3));
label_23fb8c:
    // 0x23fb8c: 0x8da30000  lw          $v1, 0x0($t5)
    ctx->pc = 0x23fb8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
label_23fb90:
    // 0x23fb90: 0x8c640028  lw          $a0, 0x28($v1)
    ctx->pc = 0x23fb90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_23fb94:
    // 0x23fb94: 0x10800014  beqz        $a0, . + 4 + (0x14 << 2)
label_23fb98:
    if (ctx->pc == 0x23FB98u) {
        ctx->pc = 0x23FB9Cu;
        goto label_23fb9c;
    }
    ctx->pc = 0x23FB94u;
    {
        const bool branch_taken_0x23fb94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x23fb94) {
            ctx->pc = 0x23FBE8u;
            goto label_23fbe8;
        }
    }
    ctx->pc = 0x23FB9Cu;
label_23fb9c:
    // 0x23fb9c: 0x8ea4000c  lw          $a0, 0xC($s5)
    ctx->pc = 0x23fb9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
label_23fba0:
    // 0x23fba0: 0x8a2023  subu        $a0, $a0, $t2
    ctx->pc = 0x23fba0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
label_23fba4:
    // 0x23fba4: 0xaea4000c  sw          $a0, 0xC($s5)
    ctx->pc = 0x23fba4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 4));
label_23fba8:
    // 0x23fba8: 0x8ea40010  lw          $a0, 0x10($s5)
    ctx->pc = 0x23fba8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
label_23fbac:
    // 0x23fbac: 0x862023  subu        $a0, $a0, $a2
    ctx->pc = 0x23fbacu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_23fbb0:
    // 0x23fbb0: 0xaea40010  sw          $a0, 0x10($s5)
    ctx->pc = 0x23fbb0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 4));
label_23fbb4:
    // 0x23fbb4: 0x8ea40014  lw          $a0, 0x14($s5)
    ctx->pc = 0x23fbb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
label_23fbb8:
    // 0x23fbb8: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x23fbb8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_23fbbc:
    // 0x23fbbc: 0xaea40014  sw          $a0, 0x14($s5)
    ctx->pc = 0x23fbbcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 20), GPR_U32(ctx, 4));
label_23fbc0:
    // 0x23fbc0: 0x8c640028  lw          $a0, 0x28($v1)
    ctx->pc = 0x23fbc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_23fbc4:
    // 0x23fbc4: 0x94920016  lhu         $s2, 0x16($a0)
    ctx->pc = 0x23fbc4u;
    SET_GPR_U32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 22)));
label_23fbc8:
    // 0x23fbc8: 0x94830018  lhu         $v1, 0x18($a0)
    ctx->pc = 0x23fbc8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 24)));
label_23fbcc:
    // 0x23fbcc: 0x94940014  lhu         $s4, 0x14($a0)
    ctx->pc = 0x23fbccu;
    SET_GPR_U32(ctx, 20, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 20)));
label_23fbd0:
    // 0x23fbd0: 0x2469023  subu        $s2, $s2, $a2
    ctx->pc = 0x23fbd0u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
label_23fbd4:
    // 0x23fbd4: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x23fbd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_23fbd8:
    // 0x23fbd8: 0xa4920016  sh          $s2, 0x16($a0)
    ctx->pc = 0x23fbd8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 22), (uint16_t)GPR_U32(ctx, 18));
label_23fbdc:
    // 0x23fbdc: 0x28aa023  subu        $s4, $s4, $t2
    ctx->pc = 0x23fbdcu;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 10)));
label_23fbe0:
    // 0x23fbe0: 0xa4830018  sh          $v1, 0x18($a0)
    ctx->pc = 0x23fbe0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 24), (uint16_t)GPR_U32(ctx, 3));
label_23fbe4:
    // 0x23fbe4: 0xa4940014  sh          $s4, 0x14($a0)
    ctx->pc = 0x23fbe4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 20), (uint16_t)GPR_U32(ctx, 20));
label_23fbe8:
    // 0x23fbe8: 0x8dc3001c  lw          $v1, 0x1C($t6)
    ctx->pc = 0x23fbe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 28)));
label_23fbec:
    // 0x23fbec: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x23fbecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_23fbf0:
    // 0x23fbf0: 0xadc3001c  sw          $v1, 0x1C($t6)
    ctx->pc = 0x23fbf0u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 28), GPR_U32(ctx, 3));
label_23fbf4:
    // 0x23fbf4: 0x8da30000  lw          $v1, 0x0($t5)
    ctx->pc = 0x23fbf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
label_23fbf8:
    // 0x23fbf8: 0xac6e0008  sw          $t6, 0x8($v1)
    ctx->pc = 0x23fbf8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 14));
label_23fbfc:
    // 0x23fbfc: 0x8da40000  lw          $a0, 0x0($t5)
    ctx->pc = 0x23fbfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
label_23fc00:
    // 0x23fc00: 0x8c830028  lw          $v1, 0x28($a0)
    ctx->pc = 0x23fc00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_23fc04:
    // 0x23fc04: 0x1060002c  beqz        $v1, . + 4 + (0x2C << 2)
label_23fc08:
    if (ctx->pc == 0x23FC08u) {
        ctx->pc = 0x23FC0Cu;
        goto label_23fc0c;
    }
    ctx->pc = 0x23FC04u;
    {
        const bool branch_taken_0x23fc04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23fc04) {
            ctx->pc = 0x23FCB8u;
            goto label_23fcb8;
        }
    }
    ctx->pc = 0x23FC0Cu;
label_23fc0c:
    // 0x23fc0c: 0x8dc30008  lw          $v1, 0x8($t6)
    ctx->pc = 0x23fc0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 8)));
label_23fc10:
    // 0x23fc10: 0x163082a  slt         $at, $t3, $v1
    ctx->pc = 0x23fc10u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_23fc14:
    // 0x23fc14: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_23fc18:
    if (ctx->pc == 0x23FC18u) {
        ctx->pc = 0x23FC18u;
            // 0x23fc18: 0x160182d  daddu       $v1, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23FC1Cu;
        goto label_23fc1c;
    }
    ctx->pc = 0x23FC14u;
    {
        const bool branch_taken_0x23fc14 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x23fc14) {
            ctx->pc = 0x23FC18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23FC14u;
            // 0x23fc18: 0x160182d  daddu       $v1, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23FC28u;
            goto label_23fc28;
        }
    }
    ctx->pc = 0x23FC1Cu;
label_23fc1c:
    // 0x23fc1c: 0x10000003  b           . + 4 + (0x3 << 2)
label_23fc20:
    if (ctx->pc == 0x23FC20u) {
        ctx->pc = 0x23FC20u;
            // 0x23fc20: 0x143082a  slt         $at, $t2, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->pc = 0x23FC24u;
        goto label_23fc24;
    }
    ctx->pc = 0x23FC1Cu;
    {
        const bool branch_taken_0x23fc1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23FC20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23FC1Cu;
            // 0x23fc20: 0x143082a  slt         $at, $t2, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fc1c) {
            ctx->pc = 0x23FC2Cu;
            goto label_23fc2c;
        }
    }
    ctx->pc = 0x23FC24u;
label_23fc24:
    // 0x23fc24: 0x160182d  daddu       $v1, $t3, $zero
    ctx->pc = 0x23fc24u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_23fc28:
    // 0x23fc28: 0x143082a  slt         $at, $t2, $v1
    ctx->pc = 0x23fc28u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_23fc2c:
    // 0x23fc2c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_23fc30:
    if (ctx->pc == 0x23FC30u) {
        ctx->pc = 0x23FC30u;
            // 0x23fc30: 0xadc30008  sw          $v1, 0x8($t6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 14), 8), GPR_U32(ctx, 3));
        ctx->pc = 0x23FC34u;
        goto label_23fc34;
    }
    ctx->pc = 0x23FC2Cu;
    {
        const bool branch_taken_0x23fc2c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x23FC30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23FC2Cu;
            // 0x23fc30: 0xadc30008  sw          $v1, 0x8($t6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 14), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fc2c) {
            ctx->pc = 0x23FC3Cu;
            goto label_23fc3c;
        }
    }
    ctx->pc = 0x23FC34u;
label_23fc34:
    // 0x23fc34: 0x10000003  b           . + 4 + (0x3 << 2)
label_23fc38:
    if (ctx->pc == 0x23FC38u) {
        ctx->pc = 0x23FC38u;
            // 0x23fc38: 0xadc30008  sw          $v1, 0x8($t6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 14), 8), GPR_U32(ctx, 3));
        ctx->pc = 0x23FC3Cu;
        goto label_23fc3c;
    }
    ctx->pc = 0x23FC34u;
    {
        const bool branch_taken_0x23fc34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23FC38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23FC34u;
            // 0x23fc38: 0xadc30008  sw          $v1, 0x8($t6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 14), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fc34) {
            ctx->pc = 0x23FC44u;
            goto label_23fc44;
        }
    }
    ctx->pc = 0x23FC3Cu;
label_23fc3c:
    // 0x23fc3c: 0x140182d  daddu       $v1, $t2, $zero
    ctx->pc = 0x23fc3cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_23fc40:
    // 0x23fc40: 0xadc30008  sw          $v1, 0x8($t6)
    ctx->pc = 0x23fc40u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 8), GPR_U32(ctx, 3));
label_23fc44:
    // 0x23fc44: 0x8dc3000c  lw          $v1, 0xC($t6)
    ctx->pc = 0x23fc44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 12)));
label_23fc48:
    // 0x23fc48: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x23fc48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
label_23fc4c:
    // 0x23fc4c: 0xadc3000c  sw          $v1, 0xC($t6)
    ctx->pc = 0x23fc4cu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 12), GPR_U32(ctx, 3));
label_23fc50:
    // 0x23fc50: 0x8dc30010  lw          $v1, 0x10($t6)
    ctx->pc = 0x23fc50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 16)));
label_23fc54:
    // 0x23fc54: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x23fc54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_23fc58:
    // 0x23fc58: 0xadc30010  sw          $v1, 0x10($t6)
    ctx->pc = 0x23fc58u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 16), GPR_U32(ctx, 3));
label_23fc5c:
    // 0x23fc5c: 0x8dc30014  lw          $v1, 0x14($t6)
    ctx->pc = 0x23fc5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 20)));
label_23fc60:
    // 0x23fc60: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x23fc60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_23fc64:
    // 0x23fc64: 0xadc30014  sw          $v1, 0x14($t6)
    ctx->pc = 0x23fc64u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 20), GPR_U32(ctx, 3));
label_23fc68:
    // 0x23fc68: 0x8c830028  lw          $v1, 0x28($a0)
    ctx->pc = 0x23fc68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_23fc6c:
    // 0x23fc6c: 0x94740018  lhu         $s4, 0x18($v1)
    ctx->pc = 0x23fc6cu;
    SET_GPR_U32(ctx, 20, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 24)));
label_23fc70:
    // 0x23fc70: 0x946b0016  lhu         $t3, 0x16($v1)
    ctx->pc = 0x23fc70u;
    SET_GPR_U32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 22)));
label_23fc74:
    // 0x23fc74: 0x94720014  lhu         $s2, 0x14($v1)
    ctx->pc = 0x23fc74u;
    SET_GPR_U32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 20)));
label_23fc78:
    // 0x23fc78: 0x285a021  addu        $s4, $s4, $a1
    ctx->pc = 0x23fc78u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
label_23fc7c:
    // 0x23fc7c: 0x1662821  addu        $a1, $t3, $a2
    ctx->pc = 0x23fc7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 6)));
label_23fc80:
    // 0x23fc80: 0xa4650016  sh          $a1, 0x16($v1)
    ctx->pc = 0x23fc80u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 22), (uint16_t)GPR_U32(ctx, 5));
label_23fc84:
    // 0x23fc84: 0x24a5021  addu        $t2, $s2, $t2
    ctx->pc = 0x23fc84u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 10)));
label_23fc88:
    // 0x23fc88: 0xa4740018  sh          $s4, 0x18($v1)
    ctx->pc = 0x23fc88u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 24), (uint16_t)GPR_U32(ctx, 20));
label_23fc8c:
    // 0x23fc8c: 0xa46a0014  sh          $t2, 0x14($v1)
    ctx->pc = 0x23fc8cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 20), (uint16_t)GPR_U32(ctx, 10));
label_23fc90:
    // 0x23fc90: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x23fc90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_23fc94:
    // 0x23fc94: 0x8dc30008  lw          $v1, 0x8($t6)
    ctx->pc = 0x23fc94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 8)));
label_23fc98:
    // 0x23fc98: 0x94840014  lhu         $a0, 0x14($a0)
    ctx->pc = 0x23fc98u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 20)));
label_23fc9c:
    // 0x23fc9c: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x23fc9cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_23fca0:
    // 0x23fca0: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_23fca4:
    if (ctx->pc == 0x23FCA4u) {
        ctx->pc = 0x23FCA4u;
            // 0x23fca4: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23FCA8u;
        goto label_23fca8;
    }
    ctx->pc = 0x23FCA0u;
    {
        const bool branch_taken_0x23fca0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x23fca0) {
            ctx->pc = 0x23FCA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23FCA0u;
            // 0x23fca4: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23FCB4u;
            goto label_23fcb4;
        }
    }
    ctx->pc = 0x23FCA8u;
label_23fca8:
    // 0x23fca8: 0x10000003  b           . + 4 + (0x3 << 2)
label_23fcac:
    if (ctx->pc == 0x23FCACu) {
        ctx->pc = 0x23FCACu;
            // 0x23fcac: 0xadc30008  sw          $v1, 0x8($t6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 14), 8), GPR_U32(ctx, 3));
        ctx->pc = 0x23FCB0u;
        goto label_23fcb0;
    }
    ctx->pc = 0x23FCA8u;
    {
        const bool branch_taken_0x23fca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23FCACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23FCA8u;
            // 0x23fcac: 0xadc30008  sw          $v1, 0x8($t6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 14), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fca8) {
            ctx->pc = 0x23FCB8u;
            goto label_23fcb8;
        }
    }
    ctx->pc = 0x23FCB0u;
label_23fcb0:
    // 0x23fcb0: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x23fcb0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23fcb4:
    // 0x23fcb4: 0xadc30008  sw          $v1, 0x8($t6)
    ctx->pc = 0x23fcb4u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 8), GPR_U32(ctx, 3));
label_23fcb8:
    // 0x23fcb8: 0x94e30074  lhu         $v1, 0x74($a3)
    ctx->pc = 0x23fcb8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 116)));
label_23fcbc:
    // 0x23fcbc: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x23fcbcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
label_23fcc0:
    // 0x23fcc0: 0x183182a  slt         $v1, $t4, $v1
    ctx->pc = 0x23fcc0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_23fcc4:
    // 0x23fcc4: 0x1460ffaa  bnez        $v1, . + 4 + (-0x56 << 2)
label_23fcc8:
    if (ctx->pc == 0x23FCC8u) {
        ctx->pc = 0x23FCC8u;
            // 0x23fcc8: 0x25ad0024  addiu       $t5, $t5, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 36));
        ctx->pc = 0x23FCCCu;
        goto label_23fccc;
    }
    ctx->pc = 0x23FCC4u;
    {
        const bool branch_taken_0x23fcc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x23FCC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23FCC4u;
            // 0x23fcc8: 0x25ad0024  addiu       $t5, $t5, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fcc4) {
            ctx->pc = 0x23FB70u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_23fb70;
        }
    }
    ctx->pc = 0x23FCCCu;
label_23fccc:
    // 0x23fccc: 0x0  nop
    ctx->pc = 0x23fcccu;
    // NOP
label_23fcd0:
    // 0x23fcd0: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x23fcd0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
label_23fcd4:
    // 0x23fcd4: 0x1f0182a  slt         $v1, $t7, $s0
    ctx->pc = 0x23fcd4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_23fcd8:
    // 0x23fcd8: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x23fcd8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
label_23fcdc:
    // 0x23fcdc: 0x1460ff8e  bnez        $v1, . + 4 + (-0x72 << 2)
label_23fce0:
    if (ctx->pc == 0x23FCE0u) {
        ctx->pc = 0x23FCE0u;
            // 0x23fce0: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x23FCE4u;
        goto label_23fce4;
    }
    ctx->pc = 0x23FCDCu;
    {
        const bool branch_taken_0x23fcdc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x23FCE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23FCDCu;
            // 0x23fce0: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fcdc) {
            ctx->pc = 0x23FB18u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_23fb18;
        }
    }
    ctx->pc = 0x23FCE4u;
label_23fce4:
    // 0x23fce4: 0x0  nop
    ctx->pc = 0x23fce4u;
    // NOP
label_23fce8:
    // 0x23fce8: 0x8e7e0020  lw          $fp, 0x20($s3)
    ctx->pc = 0x23fce8u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_23fcec:
    // 0x23fcec: 0x8eb1003c  lw          $s1, 0x3C($s5)
    ctx->pc = 0x23fcecu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 60)));
label_23fcf0:
    // 0x23fcf0: 0x8eb40040  lw          $s4, 0x40($s5)
    ctx->pc = 0x23fcf0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 64)));
label_23fcf4:
    // 0x23fcf4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x23fcf4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23fcf8:
    // 0x23fcf8: 0x1a800041  blez        $s4, . + 4 + (0x41 << 2)
label_23fcfc:
    if (ctx->pc == 0x23FCFCu) {
        ctx->pc = 0x23FCFCu;
            // 0x23fcfc: 0xaea00040  sw          $zero, 0x40($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 64), GPR_U32(ctx, 0));
        ctx->pc = 0x23FD00u;
        goto label_23fd00;
    }
    ctx->pc = 0x23FCF8u;
    {
        const bool branch_taken_0x23fcf8 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x23FCFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23FCF8u;
            // 0x23fcfc: 0xaea00040  sw          $zero, 0x40($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 64), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fcf8) {
            ctx->pc = 0x23FE00u;
            goto label_23fe00;
        }
    }
    ctx->pc = 0x23FD00u;
label_23fd00:
    // 0x23fd00: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x23fd00u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_23fd04:
    // 0x23fd04: 0x1200003a  beqz        $s0, . + 4 + (0x3A << 2)
label_23fd08:
    if (ctx->pc == 0x23FD08u) {
        ctx->pc = 0x23FD0Cu;
        goto label_23fd0c;
    }
    ctx->pc = 0x23FD04u;
    {
        const bool branch_taken_0x23fd04 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x23fd04) {
            ctx->pc = 0x23FDF0u;
            goto label_23fdf0;
        }
    }
    ctx->pc = 0x23FD0Cu;
label_23fd0c:
    // 0x23fd0c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x23fd0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_23fd10:
    // 0x23fd10: 0x27a300dc  addiu       $v1, $sp, 0xDC
    ctx->pc = 0x23fd10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 220));
label_23fd14:
    // 0x23fd14: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x23fd14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
label_23fd18:
    // 0x23fd18: 0xafa000d4  sw          $zero, 0xD4($sp)
    ctx->pc = 0x23fd18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 0));
label_23fd1c:
    // 0x23fd1c: 0xafa300d0  sw          $v1, 0xD0($sp)
    ctx->pc = 0x23fd1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 3));
label_23fd20:
    // 0x23fd20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23fd20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23fd24:
    // 0x23fd24: 0xafa200d8  sw          $v0, 0xD8($sp)
    ctx->pc = 0x23fd24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
label_23fd28:
    // 0x23fd28: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x23fd28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_23fd2c:
    // 0x23fd2c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x23fd2cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_23fd30:
    // 0x23fd30: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x23fd30u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_23fd34:
    // 0x23fd34: 0x320f809  jalr        $t9
label_23fd38:
    if (ctx->pc == 0x23FD38u) {
        ctx->pc = 0x23FD38u;
            // 0x23fd38: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23FD3Cu;
        goto label_23fd3c;
    }
    ctx->pc = 0x23FD34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x23FD3Cu);
        ctx->pc = 0x23FD38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23FD34u;
            // 0x23fd38: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x23FD3Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23FD3Cu; }
            if (ctx->pc != 0x23FD3Cu) { return; }
        }
        }
    }
    ctx->pc = 0x23FD3Cu;
label_23fd3c:
    // 0x23fd3c: 0x8fa400d4  lw          $a0, 0xD4($sp)
    ctx->pc = 0x23fd3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
label_23fd40:
    // 0x23fd40: 0x1880000b  blez        $a0, . + 4 + (0xB << 2)
label_23fd44:
    if (ctx->pc == 0x23FD44u) {
        ctx->pc = 0x23FD44u;
            // 0x23fd44: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23FD48u;
        goto label_23fd48;
    }
    ctx->pc = 0x23FD40u;
    {
        const bool branch_taken_0x23fd40 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x23FD44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23FD40u;
            // 0x23fd44: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fd40) {
            ctx->pc = 0x23FD70u;
            goto label_23fd70;
        }
    }
    ctx->pc = 0x23FD48u;
label_23fd48:
    // 0x23fd48: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x23fd48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_23fd4c:
    // 0x23fd4c: 0x0  nop
    ctx->pc = 0x23fd4cu;
    // NOP
label_23fd50:
    // 0x23fd50: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x23fd50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_23fd54:
    // 0x23fd54: 0x8c720094  lw          $s2, 0x94($v1)
    ctx->pc = 0x23fd54u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
label_23fd58:
    // 0x23fd58: 0x165e0005  bne         $s2, $fp, . + 4 + (0x5 << 2)
label_23fd5c:
    if (ctx->pc == 0x23FD5Cu) {
        ctx->pc = 0x23FD60u;
        goto label_23fd60;
    }
    ctx->pc = 0x23FD58u;
    {
        const bool branch_taken_0x23fd58 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 30));
        if (branch_taken_0x23fd58) {
            ctx->pc = 0x23FD70u;
            goto label_23fd70;
        }
    }
    ctx->pc = 0x23FD60u;
label_23fd60:
    // 0x23fd60: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x23fd60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_23fd64:
    // 0x23fd64: 0xc4182a  slt         $v1, $a2, $a0
    ctx->pc = 0x23fd64u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_23fd68:
    // 0x23fd68: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_23fd6c:
    if (ctx->pc == 0x23FD6Cu) {
        ctx->pc = 0x23FD6Cu;
            // 0x23fd6c: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x23FD70u;
        goto label_23fd70;
    }
    ctx->pc = 0x23FD68u;
    {
        const bool branch_taken_0x23fd68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x23FD6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23FD68u;
            // 0x23fd6c: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fd68) {
            ctx->pc = 0x23FD50u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_23fd50;
        }
    }
    ctx->pc = 0x23FD70u;
label_23fd70:
    // 0x23fd70: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x23fd70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_23fd74:
    // 0x23fd74: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x23fd74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_23fd78:
    // 0x23fd78: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x23fd78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_23fd7c:
    // 0x23fd7c: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
label_23fd80:
    if (ctx->pc == 0x23FD80u) {
        ctx->pc = 0x23FD84u;
        goto label_23fd84;
    }
    ctx->pc = 0x23FD7Cu;
    {
        const bool branch_taken_0x23fd7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x23fd7c) {
            ctx->pc = 0x23FDA8u;
            goto label_23fda8;
        }
    }
    ctx->pc = 0x23FD84u;
label_23fd84:
    // 0x23fd84: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x23fd84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_23fd88:
    // 0x23fd88: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x23fd88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_23fd8c:
    // 0x23fd8c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x23fd8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_23fd90:
    // 0x23fd90: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x23fd90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_23fd94:
    // 0x23fd94: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x23fd94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_23fd98:
    // 0x23fd98: 0x310bc  dsll32      $v0, $v1, 2
    ctx->pc = 0x23fd98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 2));
label_23fd9c:
    // 0x23fd9c: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x23fd9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_23fda0:
    // 0x23fda0: 0xc0a7ab4  jal         func_29EAD0
label_23fda4:
    if (ctx->pc == 0x23FDA4u) {
        ctx->pc = 0x23FDA4u;
            // 0x23fda4: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x23FDA8u;
        goto label_23fda8;
    }
    ctx->pc = 0x23FDA0u;
    SET_GPR_U32(ctx, 31, 0x23FDA8u);
    ctx->pc = 0x23FDA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23FDA0u;
            // 0x23fda4: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23FDA8u; }
        if (ctx->pc != 0x23FDA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23FDA8u; }
        if (ctx->pc != 0x23FDA8u) { return; }
    }
    ctx->pc = 0x23FDA8u;
label_23fda8:
    // 0x23fda8: 0xae12000c  sw          $s2, 0xC($s0)
    ctx->pc = 0x23fda8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 18));
label_23fdac:
    // 0x23fdac: 0x8e430044  lw          $v1, 0x44($s2)
    ctx->pc = 0x23fdacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
label_23fdb0:
    // 0x23fdb0: 0x8e440040  lw          $a0, 0x40($s2)
    ctx->pc = 0x23fdb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
label_23fdb4:
    // 0x23fdb4: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x23fdb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
label_23fdb8:
    // 0x23fdb8: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x23fdb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
label_23fdbc:
    // 0x23fdbc: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
label_23fdc0:
    if (ctx->pc == 0x23FDC0u) {
        ctx->pc = 0x23FDC4u;
        goto label_23fdc4;
    }
    ctx->pc = 0x23FDBCu;
    {
        const bool branch_taken_0x23fdbc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x23fdbc) {
            ctx->pc = 0x23FDD0u;
            goto label_23fdd0;
        }
    }
    ctx->pc = 0x23FDC4u;
label_23fdc4:
    // 0x23fdc4: 0x2644003c  addiu       $a0, $s2, 0x3C
    ctx->pc = 0x23fdc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 60));
label_23fdc8:
    // 0x23fdc8: 0xc0a728c  jal         func_29CA30
label_23fdcc:
    if (ctx->pc == 0x23FDCCu) {
        ctx->pc = 0x23FDCCu;
            // 0x23fdcc: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x23FDD0u;
        goto label_23fdd0;
    }
    ctx->pc = 0x23FDC8u;
    SET_GPR_U32(ctx, 31, 0x23FDD0u);
    ctx->pc = 0x23FDCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23FDC8u;
            // 0x23fdcc: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23FDD0u; }
        if (ctx->pc != 0x23FDD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23FDD0u; }
        if (ctx->pc != 0x23FDD0u) { return; }
    }
    ctx->pc = 0x23FDD0u;
label_23fdd0:
    // 0x23fdd0: 0x8e440040  lw          $a0, 0x40($s2)
    ctx->pc = 0x23fdd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
label_23fdd4:
    // 0x23fdd4: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x23fdd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_23fdd8:
    // 0x23fdd8: 0xae430040  sw          $v1, 0x40($s2)
    ctx->pc = 0x23fdd8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 3));
label_23fddc:
    // 0x23fddc: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x23fddcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_23fde0:
    // 0x23fde0: 0x8e43003c  lw          $v1, 0x3C($s2)
    ctx->pc = 0x23fde0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
label_23fde4:
    // 0x23fde4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x23fde4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_23fde8:
    // 0x23fde8: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x23fde8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
label_23fdec:
    // 0x23fdec: 0x0  nop
    ctx->pc = 0x23fdecu;
    // NOP
label_23fdf0:
    // 0x23fdf0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x23fdf0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_23fdf4:
    // 0x23fdf4: 0x274182a  slt         $v1, $s3, $s4
    ctx->pc = 0x23fdf4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
label_23fdf8:
    // 0x23fdf8: 0x1460ffc1  bnez        $v1, . + 4 + (-0x3F << 2)
label_23fdfc:
    if (ctx->pc == 0x23FDFCu) {
        ctx->pc = 0x23FDFCu;
            // 0x23fdfc: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x23FE00u;
        goto label_23fe00;
    }
    ctx->pc = 0x23FDF8u;
    {
        const bool branch_taken_0x23fdf8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x23FDFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23FDF8u;
            // 0x23fdfc: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fdf8) {
            ctx->pc = 0x23FD00u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_23fd00;
        }
    }
    ctx->pc = 0x23FE00u;
label_23fe00:
    // 0x23fe00: 0x7ba300a0  lq          $v1, 0xA0($sp)
    ctx->pc = 0x23fe00u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_23fe04:
    // 0x23fe04: 0x2e31823  subu        $v1, $s7, $v1
    ctx->pc = 0x23fe04u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
label_23fe08:
    // 0x23fe08: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x23fe08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_23fe0c:
    // 0x23fe0c: 0x77082a  slt         $at, $v1, $s7
    ctx->pc = 0x23fe0cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
label_23fe10:
    // 0x23fe10: 0x50200042  beql        $at, $zero, . + 4 + (0x42 << 2)
label_23fe14:
    if (ctx->pc == 0x23FE14u) {
        ctx->pc = 0x23FE14u;
            // 0x23fe14: 0x3c038000  lui         $v1, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
        ctx->pc = 0x23FE18u;
        goto label_23fe18;
    }
    ctx->pc = 0x23FE10u;
    {
        const bool branch_taken_0x23fe10 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x23fe10) {
            ctx->pc = 0x23FE14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23FE10u;
            // 0x23fe14: 0x3c038000  lui         $v1, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23FF1Cu;
            goto label_23ff1c;
        }
    }
    ctx->pc = 0x23FE18u;
label_23fe18:
    // 0x23fe18: 0x8ea30064  lw          $v1, 0x64($s5)
    ctx->pc = 0x23fe18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 100)));
label_23fe1c:
    // 0x23fe1c: 0x26b4005c  addiu       $s4, $s5, 0x5C
    ctx->pc = 0x23fe1cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), 92));
label_23fe20:
    // 0x23fe20: 0x186000ab  blez        $v1, . + 4 + (0xAB << 2)
label_23fe24:
    if (ctx->pc == 0x23FE24u) {
        ctx->pc = 0x23FE24u;
            // 0x23fe24: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23FE28u;
        goto label_23fe28;
    }
    ctx->pc = 0x23FE20u;
    {
        const bool branch_taken_0x23fe20 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x23FE24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23FE20u;
            // 0x23fe24: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fe20) {
            ctx->pc = 0x2400D0u;
            goto label_2400d0;
        }
    }
    ctx->pc = 0x23FE28u;
label_23fe28:
    // 0x23fe28: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x23fe28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23fe2c:
    // 0x23fe2c: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x23fe2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_23fe30:
    // 0x23fe30: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x23fe30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_23fe34:
    // 0x23fe34: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x23fe34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_23fe38:
    // 0x23fe38: 0x10000025  b           . + 4 + (0x25 << 2)
label_23fe3c:
    if (ctx->pc == 0x23FE3Cu) {
        ctx->pc = 0x23FE3Cu;
            // 0x23fe3c: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23FE40u;
        goto label_23fe40;
    }
    ctx->pc = 0x23FE38u;
    {
        const bool branch_taken_0x23fe38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23FE3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23FE38u;
            // 0x23fe3c: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fe38) {
            ctx->pc = 0x23FED0u;
            goto label_23fed0;
        }
    }
    ctx->pc = 0x23FE40u;
label_23fe40:
    // 0x23fe40: 0x8e450014  lw          $a1, 0x14($s2)
    ctx->pc = 0x23fe40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_23fe44:
    // 0x23fe44: 0x80a40010  lb          $a0, 0x10($a1)
    ctx->pc = 0x23fe44u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 16)));
label_23fe48:
    // 0x23fe48: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x23fe48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_23fe4c:
    // 0x23fe4c: 0x8c850094  lw          $a1, 0x94($a0)
    ctx->pc = 0x23fe4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 148)));
label_23fe50:
    // 0x23fe50: 0x94a40020  lhu         $a0, 0x20($a1)
    ctx->pc = 0x23fe50u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 32)));
label_23fe54:
    // 0x23fe54: 0x3884ffff  xori        $a0, $a0, 0xFFFF
    ctx->pc = 0x23fe54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)65535);
label_23fe58:
    // 0x23fe58: 0x2c840001  sltiu       $a0, $a0, 0x1
    ctx->pc = 0x23fe58u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_23fe5c:
    // 0x23fe5c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_23fe60:
    if (ctx->pc == 0x23FE60u) {
        ctx->pc = 0x23FE64u;
        goto label_23fe64;
    }
    ctx->pc = 0x23FE5Cu;
    {
        const bool branch_taken_0x23fe5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x23fe5c) {
            ctx->pc = 0x23FE78u;
            goto label_23fe78;
        }
    }
    ctx->pc = 0x23FE64u;
label_23fe64:
    // 0x23fe64: 0x8e450018  lw          $a1, 0x18($s2)
    ctx->pc = 0x23fe64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_23fe68:
    // 0x23fe68: 0x80a40010  lb          $a0, 0x10($a1)
    ctx->pc = 0x23fe68u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 16)));
label_23fe6c:
    // 0x23fe6c: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x23fe6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_23fe70:
    // 0x23fe70: 0x8c850094  lw          $a1, 0x94($a0)
    ctx->pc = 0x23fe70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 148)));
label_23fe74:
    // 0x23fe74: 0x0  nop
    ctx->pc = 0x23fe74u;
    // NOP
label_23fe78:
    // 0x23fe78: 0x14b50005  bne         $a1, $s5, . + 4 + (0x5 << 2)
label_23fe7c:
    if (ctx->pc == 0x23FE7Cu) {
        ctx->pc = 0x23FE80u;
        goto label_23fe80;
    }
    ctx->pc = 0x23FE78u;
    {
        const bool branch_taken_0x23fe78 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 21));
        if (branch_taken_0x23fe78) {
            ctx->pc = 0x23FE90u;
            goto label_23fe90;
        }
    }
    ctx->pc = 0x23FE80u;
label_23fe80:
    // 0x23fe80: 0x92440003  lbu         $a0, 0x3($s2)
    ctx->pc = 0x23fe80u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
label_23fe84:
    // 0x23fe84: 0x10000012  b           . + 4 + (0x12 << 2)
label_23fe88:
    if (ctx->pc == 0x23FE88u) {
        ctx->pc = 0x23FE88u;
            // 0x23fe88: 0x2449021  addu        $s2, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->pc = 0x23FE8Cu;
        goto label_23fe8c;
    }
    ctx->pc = 0x23FE84u;
    {
        const bool branch_taken_0x23fe84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23FE88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23FE84u;
            // 0x23fe88: 0x2449021  addu        $s2, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fe84) {
            ctx->pc = 0x23FED0u;
            goto label_23fed0;
        }
    }
    ctx->pc = 0x23FE8Cu;
label_23fe8c:
    // 0x23fe8c: 0x0  nop
    ctx->pc = 0x23fe8cu;
    // NOP
label_23fe90:
    // 0x23fe90: 0x24a4005c  addiu       $a0, $a1, 0x5C
    ctx->pc = 0x23fe90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 92));
label_23fe94:
    // 0x23fe94: 0x2438023  subu        $s0, $s2, $v1
    ctx->pc = 0x23fe94u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
label_23fe98:
    // 0x23fe98: 0xc0924ec  jal         func_2493B0
label_23fe9c:
    if (ctx->pc == 0x23FE9Cu) {
        ctx->pc = 0x23FE9Cu;
            // 0x23fe9c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23FEA0u;
        goto label_23fea0;
    }
    ctx->pc = 0x23FE98u;
    SET_GPR_U32(ctx, 31, 0x23FEA0u);
    ctx->pc = 0x23FE9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23FE98u;
            // 0x23fe9c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2493B0u;
    if (runtime->hasFunction(0x2493B0u)) {
        auto targetFn = runtime->lookupFunction(0x2493B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23FEA0u; }
        if (ctx->pc != 0x23FEA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002493B0_0x2493b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23FEA0u; }
        if (ctx->pc != 0x23FEA0u) { return; }
    }
    ctx->pc = 0x23FEA0u;
label_23fea0:
    // 0x23fea0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x23fea0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_23fea4:
    // 0x23fea4: 0xc092368  jal         func_248DA0
label_23fea8:
    if (ctx->pc == 0x23FEA8u) {
        ctx->pc = 0x23FEA8u;
            // 0x23fea8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23FEACu;
        goto label_23feac;
    }
    ctx->pc = 0x23FEA4u;
    SET_GPR_U32(ctx, 31, 0x23FEACu);
    ctx->pc = 0x23FEA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23FEA4u;
            // 0x23fea8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x248DA0u;
    if (runtime->hasFunction(0x248DA0u)) {
        auto targetFn = runtime->lookupFunction(0x248DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23FEACu; }
        if (ctx->pc != 0x23FEACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00248DA0_0x248da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23FEACu; }
        if (ctx->pc != 0x23FEACu) { return; }
    }
    ctx->pc = 0x23FEACu;
label_23feac:
    // 0x23feac: 0x8e850008  lw          $a1, 0x8($s4)
    ctx->pc = 0x23feacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_23feb0:
    // 0x23feb0: 0x265082a  slt         $at, $s3, $a1
    ctx->pc = 0x23feb0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_23feb4:
    // 0x23feb4: 0x10200012  beqz        $at, . + 4 + (0x12 << 2)
label_23feb8:
    if (ctx->pc == 0x23FEB8u) {
        ctx->pc = 0x23FEBCu;
        goto label_23febc;
    }
    ctx->pc = 0x23FEB4u;
    {
        const bool branch_taken_0x23feb4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x23feb4) {
            ctx->pc = 0x23FF00u;
            goto label_23ff00;
        }
    }
    ctx->pc = 0x23FEBCu;
label_23febc:
    // 0x23febc: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x23febcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_23fec0:
    // 0x23fec0: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x23fec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_23fec4:
    // 0x23fec4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x23fec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_23fec8:
    // 0x23fec8: 0x709021  addu        $s2, $v1, $s0
    ctx->pc = 0x23fec8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_23fecc:
    // 0x23fecc: 0x0  nop
    ctx->pc = 0x23feccu;
    // NOP
label_23fed0:
    // 0x23fed0: 0x8e850008  lw          $a1, 0x8($s4)
    ctx->pc = 0x23fed0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_23fed4:
    // 0x23fed4: 0x26640001  addiu       $a0, $s3, 0x1
    ctx->pc = 0x23fed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_23fed8:
    // 0x23fed8: 0x50850004  beql        $a0, $a1, . + 4 + (0x4 << 2)
label_23fedc:
    if (ctx->pc == 0x23FEDCu) {
        ctx->pc = 0x23FEDCu;
            // 0x23fedc: 0x8e840000  lw          $a0, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->pc = 0x23FEE0u;
        goto label_23fee0;
    }
    ctx->pc = 0x23FED8u;
    {
        const bool branch_taken_0x23fed8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x23fed8) {
            ctx->pc = 0x23FEDCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23FED8u;
            // 0x23fedc: 0x8e840000  lw          $a0, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23FEECu;
            goto label_23feec;
        }
    }
    ctx->pc = 0x23FEE0u;
label_23fee0:
    // 0x23fee0: 0x10000002  b           . + 4 + (0x2 << 2)
label_23fee4:
    if (ctx->pc == 0x23FEE4u) {
        ctx->pc = 0x23FEE4u;
            // 0x23fee4: 0x24040200  addiu       $a0, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->pc = 0x23FEE8u;
        goto label_23fee8;
    }
    ctx->pc = 0x23FEE0u;
    {
        const bool branch_taken_0x23fee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23FEE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23FEE0u;
            // 0x23fee4: 0x24040200  addiu       $a0, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fee0) {
            ctx->pc = 0x23FEECu;
            goto label_23feec;
        }
    }
    ctx->pc = 0x23FEE8u;
label_23fee8:
    // 0x23fee8: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x23fee8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_23feec:
    // 0x23feec: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x23feecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_23fef0:
    // 0x23fef0: 0x244202b  sltu        $a0, $s2, $a0
    ctx->pc = 0x23fef0u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_23fef4:
    // 0x23fef4: 0x1480ffd2  bnez        $a0, . + 4 + (-0x2E << 2)
label_23fef8:
    if (ctx->pc == 0x23FEF8u) {
        ctx->pc = 0x23FEFCu;
        goto label_23fefc;
    }
    ctx->pc = 0x23FEF4u;
    {
        const bool branch_taken_0x23fef4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x23fef4) {
            ctx->pc = 0x23FE40u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_23fe40;
        }
    }
    ctx->pc = 0x23FEFCu;
label_23fefc:
    // 0x23fefc: 0x0  nop
    ctx->pc = 0x23fefcu;
    // NOP
label_23ff00:
    // 0x23ff00: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x23ff00u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_23ff04:
    // 0x23ff04: 0x265182a  slt         $v1, $s3, $a1
    ctx->pc = 0x23ff04u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_23ff08:
    // 0x23ff08: 0x1460ffc8  bnez        $v1, . + 4 + (-0x38 << 2)
label_23ff0c:
    if (ctx->pc == 0x23FF0Cu) {
        ctx->pc = 0x23FF0Cu;
            // 0x23ff0c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x23FF10u;
        goto label_23ff10;
    }
    ctx->pc = 0x23FF08u;
    {
        const bool branch_taken_0x23ff08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x23FF0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23FF08u;
            // 0x23ff0c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ff08) {
            ctx->pc = 0x23FE2Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_23fe2c;
        }
    }
    ctx->pc = 0x23FF10u;
label_23ff10:
    // 0x23ff10: 0x10000070  b           . + 4 + (0x70 << 2)
label_23ff14:
    if (ctx->pc == 0x23FF14u) {
        ctx->pc = 0x23FF14u;
            // 0x23ff14: 0x8ea40068  lw          $a0, 0x68($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 104)));
        ctx->pc = 0x23FF18u;
        goto label_23ff18;
    }
    ctx->pc = 0x23FF10u;
    {
        const bool branch_taken_0x23ff10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23FF14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23FF10u;
            // 0x23ff14: 0x8ea40068  lw          $a0, 0x68($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 104)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ff10) {
            ctx->pc = 0x2400D4u;
            goto label_2400d4;
        }
    }
    ctx->pc = 0x23FF18u;
label_23ff18:
    // 0x23ff18: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x23ff18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_23ff1c:
    // 0x23ff1c: 0x27a400b4  addiu       $a0, $sp, 0xB4
    ctx->pc = 0x23ff1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 180));
label_23ff20:
    // 0x23ff20: 0x34660001  ori         $a2, $v1, 0x1
    ctx->pc = 0x23ff20u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
label_23ff24:
    // 0x23ff24: 0x24050200  addiu       $a1, $zero, 0x200
    ctx->pc = 0x23ff24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_23ff28:
    // 0x23ff28: 0x2483000c  addiu       $v1, $a0, 0xC
    ctx->pc = 0x23ff28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
label_23ff2c:
    // 0x23ff2c: 0xafa300b4  sw          $v1, 0xB4($sp)
    ctx->pc = 0x23ff2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 3));
label_23ff30:
    // 0x23ff30: 0xafa000b8  sw          $zero, 0xB8($sp)
    ctx->pc = 0x23ff30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 0));
label_23ff34:
    // 0x23ff34: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23ff34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23ff38:
    // 0x23ff38: 0xafa600bc  sw          $a2, 0xBC($sp)
    ctx->pc = 0x23ff38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 6));
label_23ff3c:
    // 0x23ff3c: 0xafa500b0  sw          $a1, 0xB0($sp)
    ctx->pc = 0x23ff3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 5));
label_23ff40:
    // 0x23ff40: 0x8ea50064  lw          $a1, 0x64($s5)
    ctx->pc = 0x23ff40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 100)));
label_23ff44:
    // 0x23ff44: 0x54a3000d  bnel        $a1, $v1, . + 4 + (0xD << 2)
label_23ff48:
    if (ctx->pc == 0x23FF48u) {
        ctx->pc = 0x23FF48u;
            // 0x23ff48: 0x28a10002  slti        $at, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->pc = 0x23FF4Cu;
        goto label_23ff4c;
    }
    ctx->pc = 0x23FF44u;
    {
        const bool branch_taken_0x23ff44 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x23ff44) {
            ctx->pc = 0x23FF48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23FF44u;
            // 0x23ff48: 0x28a10002  slti        $at, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x23FF7Cu;
            goto label_23ff7c;
        }
    }
    ctx->pc = 0x23FF4Cu;
label_23ff4c:
    // 0x23ff4c: 0x8ea50060  lw          $a1, 0x60($s5)
    ctx->pc = 0x23ff4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 96)));
label_23ff50:
    // 0x23ff50: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x23ff50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_23ff54:
    // 0x23ff54: 0x8fa300b4  lw          $v1, 0xB4($sp)
    ctx->pc = 0x23ff54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
label_23ff58:
    // 0x23ff58: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x23ff58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_23ff5c:
    // 0x23ff5c: 0x24850001  addiu       $a1, $a0, 0x1
    ctx->pc = 0x23ff5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_23ff60:
    // 0x23ff60: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x23ff60u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_23ff64:
    // 0x23ff64: 0xafa500b8  sw          $a1, 0xB8($sp)
    ctx->pc = 0x23ff64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 5));
label_23ff68:
    // 0x23ff68: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x23ff68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_23ff6c:
    // 0x23ff6c: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x23ff6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
label_23ff70:
    // 0x23ff70: 0x10000010  b           . + 4 + (0x10 << 2)
label_23ff74:
    if (ctx->pc == 0x23FF74u) {
        ctx->pc = 0x23FF74u;
            // 0x23ff74: 0xaea00064  sw          $zero, 0x64($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 100), GPR_U32(ctx, 0));
        ctx->pc = 0x23FF78u;
        goto label_23ff78;
    }
    ctx->pc = 0x23FF70u;
    {
        const bool branch_taken_0x23ff70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23FF74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23FF70u;
            // 0x23ff74: 0xaea00064  sw          $zero, 0x64($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 100), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ff70) {
            ctx->pc = 0x23FFB4u;
            goto label_23ffb4;
        }
    }
    ctx->pc = 0x23FF78u;
label_23ff78:
    // 0x23ff78: 0x28a10002  slti        $at, $a1, 0x2
    ctx->pc = 0x23ff78u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
label_23ff7c:
    // 0x23ff7c: 0x5420000e  bnel        $at, $zero, . + 4 + (0xE << 2)
label_23ff80:
    if (ctx->pc == 0x23FF80u) {
        ctx->pc = 0x23FF80u;
            // 0x23ff80: 0x8fa400b0  lw          $a0, 0xB0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->pc = 0x23FF84u;
        goto label_23ff84;
    }
    ctx->pc = 0x23FF7Cu;
    {
        const bool branch_taken_0x23ff7c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x23ff7c) {
            ctx->pc = 0x23FF80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23FF7Cu;
            // 0x23ff80: 0x8fa400b0  lw          $a0, 0xB0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23FFB8u;
            goto label_23ffb8;
        }
    }
    ctx->pc = 0x23FF84u;
label_23ff84:
    // 0x23ff84: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x23ff84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_23ff88:
    // 0x23ff88: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x23ff88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
label_23ff8c:
    // 0x23ff8c: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x23ff8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_23ff90:
    // 0x23ff90: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x23ff90u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_23ff94:
    // 0x23ff94: 0x50200005  beql        $at, $zero, . + 4 + (0x5 << 2)
label_23ff98:
    if (ctx->pc == 0x23FF98u) {
        ctx->pc = 0x23FF98u;
            // 0x23ff98: 0x27a400b4  addiu       $a0, $sp, 0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 180));
        ctx->pc = 0x23FF9Cu;
        goto label_23ff9c;
    }
    ctx->pc = 0x23FF94u;
    {
        const bool branch_taken_0x23ff94 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x23ff94) {
            ctx->pc = 0x23FF98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23FF94u;
            // 0x23ff98: 0x27a400b4  addiu       $a0, $sp, 0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 180));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23FFACu;
            goto label_23ffac;
        }
    }
    ctx->pc = 0x23FF9Cu;
label_23ff9c:
    // 0x23ff9c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x23ff9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_23ffa0:
    // 0x23ffa0: 0xc0a725c  jal         func_29C970
label_23ffa4:
    if (ctx->pc == 0x23FFA4u) {
        ctx->pc = 0x23FFA4u;
            // 0x23ffa4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x23FFA8u;
        goto label_23ffa8;
    }
    ctx->pc = 0x23FFA0u;
    SET_GPR_U32(ctx, 31, 0x23FFA8u);
    ctx->pc = 0x23FFA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23FFA0u;
            // 0x23ffa4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29C970u;
    if (runtime->hasFunction(0x29C970u)) {
        auto targetFn = runtime->lookupFunction(0x29C970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23FFA8u; }
        if (ctx->pc != 0x23FFA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029C970_0x29c970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23FFA8u; }
        if (ctx->pc != 0x23FFA8u) { return; }
    }
    ctx->pc = 0x23FFA8u;
label_23ffa8:
    // 0x23ffa8: 0x27a400b4  addiu       $a0, $sp, 0xB4
    ctx->pc = 0x23ffa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 180));
label_23ffac:
    // 0x23ffac: 0xc0909a4  jal         func_242690
label_23ffb0:
    if (ctx->pc == 0x23FFB0u) {
        ctx->pc = 0x23FFB0u;
            // 0x23ffb0: 0x26a50060  addiu       $a1, $s5, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
        ctx->pc = 0x23FFB4u;
        goto label_23ffb4;
    }
    ctx->pc = 0x23FFACu;
    SET_GPR_U32(ctx, 31, 0x23FFB4u);
    ctx->pc = 0x23FFB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23FFACu;
            // 0x23ffb0: 0x26a50060  addiu       $a1, $s5, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x242690u;
    if (runtime->hasFunction(0x242690u)) {
        auto targetFn = runtime->lookupFunction(0x242690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23FFB4u; }
        if (ctx->pc != 0x23FFB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00242690_0x242690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23FFB4u; }
        if (ctx->pc != 0x23FFB4u) { return; }
    }
    ctx->pc = 0x23FFB4u;
label_23ffb4:
    // 0x23ffb4: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x23ffb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_23ffb8:
    // 0x23ffb8: 0x8ea3005c  lw          $v1, 0x5C($s5)
    ctx->pc = 0x23ffb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 92)));
label_23ffbc:
    // 0x23ffbc: 0xafa300b0  sw          $v1, 0xB0($sp)
    ctx->pc = 0x23ffbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
label_23ffc0:
    // 0x23ffc0: 0xaea4005c  sw          $a0, 0x5C($s5)
    ctx->pc = 0x23ffc0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 92), GPR_U32(ctx, 4));
label_23ffc4:
    // 0x23ffc4: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x23ffc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_23ffc8:
    // 0x23ffc8: 0x18600033  blez        $v1, . + 4 + (0x33 << 2)
label_23ffcc:
    if (ctx->pc == 0x23FFCCu) {
        ctx->pc = 0x23FFCCu;
            // 0x23ffcc: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23FFD0u;
        goto label_23ffd0;
    }
    ctx->pc = 0x23FFC8u;
    {
        const bool branch_taken_0x23ffc8 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x23FFCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23FFC8u;
            // 0x23ffcc: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ffc8) {
            ctx->pc = 0x240098u;
            goto label_240098;
        }
    }
    ctx->pc = 0x23FFD0u;
label_23ffd0:
    // 0x23ffd0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x23ffd0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23ffd4:
    // 0x23ffd4: 0x8fa400b4  lw          $a0, 0xB4($sp)
    ctx->pc = 0x23ffd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
label_23ffd8:
    // 0x23ffd8: 0x26630001  addiu       $v1, $s3, 0x1
    ctx->pc = 0x23ffd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_23ffdc:
    // 0x23ffdc: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x23ffdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_23ffe0:
    // 0x23ffe0: 0x942021  addu        $a0, $a0, $s4
    ctx->pc = 0x23ffe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
label_23ffe4:
    // 0x23ffe4: 0x8c920000  lw          $s2, 0x0($a0)
    ctx->pc = 0x23ffe4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_23ffe8:
    // 0x23ffe8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_23ffec:
    if (ctx->pc == 0x23FFECu) {
        ctx->pc = 0x23FFECu;
            // 0x23ffec: 0x240882d  daddu       $s1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23FFF0u;
        goto label_23fff0;
    }
    ctx->pc = 0x23FFE8u;
    {
        const bool branch_taken_0x23ffe8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x23FFECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23FFE8u;
            // 0x23ffec: 0x240882d  daddu       $s1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ffe8) {
            ctx->pc = 0x23FFF8u;
            goto label_23fff8;
        }
    }
    ctx->pc = 0x23FFF0u;
label_23fff0:
    // 0x23fff0: 0x10000002  b           . + 4 + (0x2 << 2)
label_23fff4:
    if (ctx->pc == 0x23FFF4u) {
        ctx->pc = 0x23FFF4u;
            // 0x23fff4: 0x8fa200b0  lw          $v0, 0xB0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->pc = 0x23FFF8u;
        goto label_23fff8;
    }
    ctx->pc = 0x23FFF0u;
    {
        const bool branch_taken_0x23fff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23FFF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23FFF0u;
            // 0x23fff4: 0x8fa200b0  lw          $v0, 0xB0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fff0) {
            ctx->pc = 0x23FFFCu;
            goto label_23fffc;
        }
    }
    ctx->pc = 0x23FFF8u;
label_23fff8:
    // 0x23fff8: 0x24020200  addiu       $v0, $zero, 0x200
    ctx->pc = 0x23fff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_23fffc:
    // 0x23fffc: 0x2428021  addu        $s0, $s2, $v0
    ctx->pc = 0x23fffcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_240000:
    // 0x240000: 0x250082b  sltu        $at, $s2, $s0
    ctx->pc = 0x240000u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_240004:
    // 0x240004: 0x10200018  beqz        $at, . + 4 + (0x18 << 2)
label_240008:
    if (ctx->pc == 0x240008u) {
        ctx->pc = 0x24000Cu;
        goto label_24000c;
    }
    ctx->pc = 0x240004u;
    {
        const bool branch_taken_0x240004 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x240004) {
            ctx->pc = 0x240068u;
            goto label_240068;
        }
    }
    ctx->pc = 0x24000Cu;
label_24000c:
    // 0x24000c: 0x0  nop
    ctx->pc = 0x24000cu;
    // NOP
label_240010:
    // 0x240010: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x240010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_240014:
    // 0x240014: 0x80620010  lb          $v0, 0x10($v1)
    ctx->pc = 0x240014u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 16)));
label_240018:
    // 0x240018: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x240018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_24001c:
    // 0x24001c: 0x8c430094  lw          $v1, 0x94($v0)
    ctx->pc = 0x24001cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
label_240020:
    // 0x240020: 0x94620020  lhu         $v0, 0x20($v1)
    ctx->pc = 0x240020u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 32)));
label_240024:
    // 0x240024: 0x3842ffff  xori        $v0, $v0, 0xFFFF
    ctx->pc = 0x240024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)65535);
label_240028:
    // 0x240028: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x240028u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_24002c:
    // 0x24002c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_240030:
    if (ctx->pc == 0x240030u) {
        ctx->pc = 0x240034u;
        goto label_240034;
    }
    ctx->pc = 0x24002Cu;
    {
        const bool branch_taken_0x24002c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24002c) {
            ctx->pc = 0x240048u;
            goto label_240048;
        }
    }
    ctx->pc = 0x240034u;
label_240034:
    // 0x240034: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x240034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_240038:
    // 0x240038: 0x80620010  lb          $v0, 0x10($v1)
    ctx->pc = 0x240038u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 16)));
label_24003c:
    // 0x24003c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x24003cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_240040:
    // 0x240040: 0x8c430094  lw          $v1, 0x94($v0)
    ctx->pc = 0x240040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
label_240044:
    // 0x240044: 0x0  nop
    ctx->pc = 0x240044u;
    // NOP
label_240048:
    // 0x240048: 0x2464005c  addiu       $a0, $v1, 0x5C
    ctx->pc = 0x240048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 92));
label_24004c:
    // 0x24004c: 0xc0924ec  jal         func_2493B0
label_240050:
    if (ctx->pc == 0x240050u) {
        ctx->pc = 0x240050u;
            // 0x240050: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x240054u;
        goto label_240054;
    }
    ctx->pc = 0x24004Cu;
    SET_GPR_U32(ctx, 31, 0x240054u);
    ctx->pc = 0x240050u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24004Cu;
            // 0x240050: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2493B0u;
    if (runtime->hasFunction(0x2493B0u)) {
        auto targetFn = runtime->lookupFunction(0x2493B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240054u; }
        if (ctx->pc != 0x240054u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002493B0_0x2493b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240054u; }
        if (ctx->pc != 0x240054u) { return; }
    }
    ctx->pc = 0x240054u;
label_240054:
    // 0x240054: 0x92220003  lbu         $v0, 0x3($s1)
    ctx->pc = 0x240054u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
label_240058:
    // 0x240058: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x240058u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_24005c:
    // 0x24005c: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x24005cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_240060:
    // 0x240060: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
label_240064:
    if (ctx->pc == 0x240064u) {
        ctx->pc = 0x240068u;
        goto label_240068;
    }
    ctx->pc = 0x240060u;
    {
        const bool branch_taken_0x240060 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x240060) {
            ctx->pc = 0x240010u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_240010;
        }
    }
    ctx->pc = 0x240068u;
label_240068:
    // 0x240068: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x240068u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_24006c:
    // 0x24006c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x24006cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_240070:
    // 0x240070: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x240070u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_240074:
    // 0x240074: 0x24060200  addiu       $a2, $zero, 0x200
    ctx->pc = 0x240074u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_240078:
    // 0x240078: 0xc0a7ab4  jal         func_29EAD0
label_24007c:
    if (ctx->pc == 0x24007Cu) {
        ctx->pc = 0x24007Cu;
            // 0x24007c: 0x24070025  addiu       $a3, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->pc = 0x240080u;
        goto label_240080;
    }
    ctx->pc = 0x240078u;
    SET_GPR_U32(ctx, 31, 0x240080u);
    ctx->pc = 0x24007Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x240078u;
            // 0x24007c: 0x24070025  addiu       $a3, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240080u; }
        if (ctx->pc != 0x240080u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240080u; }
        if (ctx->pc != 0x240080u) { return; }
    }
    ctx->pc = 0x240080u;
label_240080:
    // 0x240080: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x240080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_240084:
    // 0x240084: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x240084u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_240088:
    // 0x240088: 0x263182a  slt         $v1, $s3, $v1
    ctx->pc = 0x240088u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_24008c:
    // 0x24008c: 0x1460ffd1  bnez        $v1, . + 4 + (-0x2F << 2)
label_240090:
    if (ctx->pc == 0x240090u) {
        ctx->pc = 0x240090u;
            // 0x240090: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->pc = 0x240094u;
        goto label_240094;
    }
    ctx->pc = 0x24008Cu;
    {
        const bool branch_taken_0x24008c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x240090u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24008Cu;
            // 0x240090: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24008c) {
            ctx->pc = 0x23FFD4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_23ffd4;
        }
    }
    ctx->pc = 0x240094u;
label_240094:
    // 0x240094: 0x0  nop
    ctx->pc = 0x240094u;
    // NOP
label_240098:
    // 0x240098: 0x8fa400bc  lw          $a0, 0xBC($sp)
    ctx->pc = 0x240098u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_24009c:
    // 0x24009c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x24009cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_2400a0:
    // 0x2400a0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2400a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_2400a4:
    // 0x2400a4: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
label_2400a8:
    if (ctx->pc == 0x2400A8u) {
        ctx->pc = 0x2400A8u;
            // 0x2400a8: 0xafa000b8  sw          $zero, 0xB8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 0));
        ctx->pc = 0x2400ACu;
        goto label_2400ac;
    }
    ctx->pc = 0x2400A4u;
    {
        const bool branch_taken_0x2400a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2400A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2400A4u;
            // 0x2400a8: 0xafa000b8  sw          $zero, 0xB8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2400a4) {
            ctx->pc = 0x2400D0u;
            goto label_2400d0;
        }
    }
    ctx->pc = 0x2400ACu;
label_2400ac:
    // 0x2400ac: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2400acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2400b0:
    // 0x2400b0: 0x8fa300bc  lw          $v1, 0xBC($sp)
    ctx->pc = 0x2400b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_2400b4:
    // 0x2400b4: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x2400b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_2400b8:
    // 0x2400b8: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x2400b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_2400bc:
    // 0x2400bc: 0x8fa500b4  lw          $a1, 0xB4($sp)
    ctx->pc = 0x2400bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
label_2400c0:
    // 0x2400c0: 0x310bc  dsll32      $v0, $v1, 2
    ctx->pc = 0x2400c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 2));
label_2400c4:
    // 0x2400c4: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x2400c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_2400c8:
    // 0x2400c8: 0xc0a7ab4  jal         func_29EAD0
label_2400cc:
    if (ctx->pc == 0x2400CCu) {
        ctx->pc = 0x2400CCu;
            // 0x2400cc: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x2400D0u;
        goto label_2400d0;
    }
    ctx->pc = 0x2400C8u;
    SET_GPR_U32(ctx, 31, 0x2400D0u);
    ctx->pc = 0x2400CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2400C8u;
            // 0x2400cc: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2400D0u; }
        if (ctx->pc != 0x2400D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2400D0u; }
        if (ctx->pc != 0x2400D0u) { return; }
    }
    ctx->pc = 0x2400D0u;
label_2400d0:
    // 0x2400d0: 0x8ea40068  lw          $a0, 0x68($s5)
    ctx->pc = 0x2400d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 104)));
label_2400d4:
    // 0x2400d4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2400d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_2400d8:
    // 0x2400d8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2400d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_2400dc:
    // 0x2400dc: 0x54600012  bnel        $v1, $zero, . + 4 + (0x12 << 2)
label_2400e0:
    if (ctx->pc == 0x2400E0u) {
        ctx->pc = 0x2400E0u;
            // 0x2400e0: 0x2ac10002  slti        $at, $s6, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->pc = 0x2400E4u;
        goto label_2400e4;
    }
    ctx->pc = 0x2400DCu;
    {
        const bool branch_taken_0x2400dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2400dc) {
            ctx->pc = 0x2400E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2400DCu;
            // 0x2400e0: 0x2ac10002  slti        $at, $s6, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x240128u;
            goto label_240128;
        }
    }
    ctx->pc = 0x2400E4u;
label_2400e4:
    // 0x2400e4: 0x8ea30064  lw          $v1, 0x64($s5)
    ctx->pc = 0x2400e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 100)));
label_2400e8:
    // 0x2400e8: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x2400e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_2400ec:
    // 0x2400ec: 0x58600009  blezl       $v1, . + 4 + (0x9 << 2)
label_2400f0:
    if (ctx->pc == 0x2400F0u) {
        ctx->pc = 0x2400F0u;
            // 0x2400f0: 0x26a40060  addiu       $a0, $s5, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
        ctx->pc = 0x2400F4u;
        goto label_2400f4;
    }
    ctx->pc = 0x2400ECu;
    {
        const bool branch_taken_0x2400ec = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x2400ec) {
            ctx->pc = 0x2400F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2400ECu;
            // 0x2400f0: 0x26a40060  addiu       $a0, $s5, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
        ctx->in_delay_slot = false;
            ctx->pc = 0x240114u;
            goto label_240114;
        }
    }
    ctx->pc = 0x2400F4u;
label_2400f4:
    // 0x2400f4: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x2400f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_2400f8:
    // 0x2400f8: 0x8ea30068  lw          $v1, 0x68($s5)
    ctx->pc = 0x2400f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 104)));
label_2400fc:
    // 0x2400fc: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x2400fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
label_240100:
    // 0x240100: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x240100u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
label_240104:
    // 0x240104: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x240104u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_240108:
    // 0x240108: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
label_24010c:
    if (ctx->pc == 0x24010Cu) {
        ctx->pc = 0x240110u;
        goto label_240110;
    }
    ctx->pc = 0x240108u;
    {
        const bool branch_taken_0x240108 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x240108) {
            ctx->pc = 0x240124u;
            goto label_240124;
        }
    }
    ctx->pc = 0x240110u;
label_240110:
    // 0x240110: 0x26a40060  addiu       $a0, $s5, 0x60
    ctx->pc = 0x240110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
label_240114:
    // 0x240114: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x240114u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_240118:
    // 0x240118: 0x26a6006c  addiu       $a2, $s5, 0x6C
    ctx->pc = 0x240118u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 108));
label_24011c:
    // 0x24011c: 0xc0a72c0  jal         func_29CB00
label_240120:
    if (ctx->pc == 0x240120u) {
        ctx->pc = 0x240120u;
            // 0x240120: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x240124u;
        goto label_240124;
    }
    ctx->pc = 0x24011Cu;
    SET_GPR_U32(ctx, 31, 0x240124u);
    ctx->pc = 0x240120u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24011Cu;
            // 0x240120: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CB00u;
    if (runtime->hasFunction(0x29CB00u)) {
        auto targetFn = runtime->lookupFunction(0x29CB00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240124u; }
        if (ctx->pc != 0x240124u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CB00_0x29cb00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240124u; }
        if (ctx->pc != 0x240124u) { return; }
    }
    ctx->pc = 0x240124u;
label_240124:
    // 0x240124: 0x2ac10002  slti        $at, $s6, 0x2
    ctx->pc = 0x240124u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)2) ? 1 : 0);
label_240128:
    // 0x240128: 0x14200065  bnez        $at, . + 4 + (0x65 << 2)
label_24012c:
    if (ctx->pc == 0x24012Cu) {
        ctx->pc = 0x24012Cu;
            // 0x24012c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x240130u;
        goto label_240130;
    }
    ctx->pc = 0x240128u;
    {
        const bool branch_taken_0x240128 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x24012Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240128u;
            // 0x24012c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240128) {
            ctx->pc = 0x2402C0u;
            goto label_2402c0;
        }
    }
    ctx->pc = 0x240130u;
label_240130:
    // 0x240130: 0x26c3ffff  addiu       $v1, $s6, -0x1
    ctx->pc = 0x240130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
label_240134:
    // 0x240134: 0x28610009  slti        $at, $v1, 0x9
    ctx->pc = 0x240134u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
label_240138:
    // 0x240138: 0x14200051  bnez        $at, . + 4 + (0x51 << 2)
label_24013c:
    if (ctx->pc == 0x24013Cu) {
        ctx->pc = 0x24013Cu;
            // 0x24013c: 0x26c5fff8  addiu       $a1, $s6, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967288));
        ctx->pc = 0x240140u;
        goto label_240140;
    }
    ctx->pc = 0x240138u;
    {
        const bool branch_taken_0x240138 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x24013Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240138u;
            // 0x24013c: 0x26c5fff8  addiu       $a1, $s6, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240138) {
            ctx->pc = 0x240280u;
            goto label_240280;
        }
    }
    ctx->pc = 0x240140u;
label_240140:
    // 0x240140: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x240140u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_240144:
    // 0x240144: 0x1ac00007  blez        $s6, . + 4 + (0x7 << 2)
label_240148:
    if (ctx->pc == 0x240148u) {
        ctx->pc = 0x240148u;
            // 0x240148: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24014Cu;
        goto label_24014c;
    }
    ctx->pc = 0x240144u;
    {
        const bool branch_taken_0x240144 = (GPR_S32(ctx, 22) <= 0);
        ctx->pc = 0x240148u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240144u;
            // 0x240148: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240144) {
            ctx->pc = 0x240164u;
            goto label_240164;
        }
    }
    ctx->pc = 0x24014Cu;
label_24014c:
    // 0x24014c: 0x3c017fff  lui         $at, 0x7FFF
    ctx->pc = 0x24014cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)32767 << 16));
label_240150:
    // 0x240150: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x240150u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
label_240154:
    // 0x240154: 0x2c1082a  slt         $at, $s6, $at
    ctx->pc = 0x240154u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_240158:
    // 0x240158: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_24015c:
    if (ctx->pc == 0x24015Cu) {
        ctx->pc = 0x240160u;
        goto label_240160;
    }
    ctx->pc = 0x240158u;
    {
        const bool branch_taken_0x240158 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x240158) {
            ctx->pc = 0x240164u;
            goto label_240164;
        }
    }
    ctx->pc = 0x240160u;
label_240160:
    // 0x240160: 0x30e300ff  andi        $v1, $a3, 0xFF
    ctx->pc = 0x240160u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
label_240164:
    // 0x240164: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
label_240168:
    if (ctx->pc == 0x240168u) {
        ctx->pc = 0x24016Cu;
        goto label_24016c;
    }
    ctx->pc = 0x240164u;
    {
        const bool branch_taken_0x240164 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x240164) {
            ctx->pc = 0x24019Cu;
            goto label_24019c;
        }
    }
    ctx->pc = 0x24016Cu;
label_24016c:
    // 0x24016c: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x24016cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
label_240170:
    // 0x240170: 0x2c62024  and         $a0, $s6, $a2
    ctx->pc = 0x240170u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 22) & GPR_U64(ctx, 6));
label_240174:
    // 0x240174: 0x14860006  bne         $a0, $a2, . + 4 + (0x6 << 2)
label_240178:
    if (ctx->pc == 0x240178u) {
        ctx->pc = 0x240178u;
            // 0x240178: 0x64080001  daddiu      $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x24017Cu;
        goto label_24017c;
    }
    ctx->pc = 0x240174u;
    {
        const bool branch_taken_0x240174 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        ctx->pc = 0x240178u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240174u;
            // 0x240178: 0x64080001  daddiu      $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x240174) {
            ctx->pc = 0x240190u;
            goto label_240190;
        }
    }
    ctx->pc = 0x24017Cu;
label_24017c:
    // 0x24017c: 0x26c3ffff  addiu       $v1, $s6, -0x1
    ctx->pc = 0x24017cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
label_240180:
    // 0x240180: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x240180u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
label_240184:
    // 0x240184: 0x10830002  beq         $a0, $v1, . + 4 + (0x2 << 2)
label_240188:
    if (ctx->pc == 0x240188u) {
        ctx->pc = 0x24018Cu;
        goto label_24018c;
    }
    ctx->pc = 0x240184u;
    {
        const bool branch_taken_0x240184 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x240184) {
            ctx->pc = 0x240190u;
            goto label_240190;
        }
    }
    ctx->pc = 0x24018Cu;
label_24018c:
    // 0x24018c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x24018cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_240190:
    // 0x240190: 0x11000002  beqz        $t0, . + 4 + (0x2 << 2)
label_240194:
    if (ctx->pc == 0x240194u) {
        ctx->pc = 0x240198u;
        goto label_240198;
    }
    ctx->pc = 0x240190u;
    {
        const bool branch_taken_0x240190 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x240190) {
            ctx->pc = 0x24019Cu;
            goto label_24019c;
        }
    }
    ctx->pc = 0x240198u;
label_240198:
    // 0x240198: 0x64090001  daddiu      $t1, $zero, 0x1
    ctx->pc = 0x240198u;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_24019c:
    // 0x24019c: 0x11200038  beqz        $t1, . + 4 + (0x38 << 2)
label_2401a0:
    if (ctx->pc == 0x2401A0u) {
        ctx->pc = 0x2401A4u;
        goto label_2401a4;
    }
    ctx->pc = 0x24019Cu;
    {
        const bool branch_taken_0x24019c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x24019c) {
            ctx->pc = 0x240280u;
            goto label_240280;
        }
    }
    ctx->pc = 0x2401A4u;
label_2401a4:
    // 0x2401a4: 0x8fa401c8  lw          $a0, 0x1C8($sp)
    ctx->pc = 0x2401a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 456)));
label_2401a8:
    // 0x2401a8: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2401a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2401ac:
    // 0x2401ac: 0x861821  addu        $v1, $a0, $a2
    ctx->pc = 0x2401acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_2401b0:
    // 0x2401b0: 0x92ac0024  lbu         $t4, 0x24($s5)
    ctx->pc = 0x2401b0u;
    SET_GPR_U32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 36)));
label_2401b4:
    // 0x2401b4: 0x8c690000  lw          $t1, 0x0($v1)
    ctx->pc = 0x2401b4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2401b8:
    // 0x2401b8: 0x30ea00ff  andi        $t2, $a3, 0xFF
    ctx->pc = 0x2401b8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
label_2401bc:
    // 0x2401bc: 0x24e80001  addiu       $t0, $a3, 0x1
    ctx->pc = 0x2401bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_2401c0:
    // 0x2401c0: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x2401c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
label_2401c4:
    // 0x2401c4: 0x18a5021  addu        $t2, $t4, $t2
    ctx->pc = 0x2401c4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 10)));
label_2401c8:
    // 0x2401c8: 0x310b00ff  andi        $t3, $t0, 0xFF
    ctx->pc = 0x2401c8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
label_2401cc:
    // 0x2401cc: 0xa12a0024  sb          $t2, 0x24($t1)
    ctx->pc = 0x2401ccu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 36), (uint8_t)GPR_U32(ctx, 10));
label_2401d0:
    // 0x2401d0: 0x24e80002  addiu       $t0, $a3, 0x2
    ctx->pc = 0x2401d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
label_2401d4:
    // 0x2401d4: 0x92ac0024  lbu         $t4, 0x24($s5)
    ctx->pc = 0x2401d4u;
    SET_GPR_U32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 36)));
label_2401d8:
    // 0x2401d8: 0x310f00ff  andi        $t7, $t0, 0xFF
    ctx->pc = 0x2401d8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
label_2401dc:
    // 0x2401dc: 0x8c6a0004  lw          $t2, 0x4($v1)
    ctx->pc = 0x2401dcu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_2401e0:
    // 0x2401e0: 0x24e80003  addiu       $t0, $a3, 0x3
    ctx->pc = 0x2401e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 3));
label_2401e4:
    // 0x2401e4: 0x310e00ff  andi        $t6, $t0, 0xFF
    ctx->pc = 0x2401e4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
label_2401e8:
    // 0x2401e8: 0x24e90005  addiu       $t1, $a3, 0x5
    ctx->pc = 0x2401e8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), 5));
label_2401ec:
    // 0x2401ec: 0x18b5821  addu        $t3, $t4, $t3
    ctx->pc = 0x2401ecu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 11)));
label_2401f0:
    // 0x2401f0: 0x24e80004  addiu       $t0, $a3, 0x4
    ctx->pc = 0x2401f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_2401f4:
    // 0x2401f4: 0xa14b0024  sb          $t3, 0x24($t2)
    ctx->pc = 0x2401f4u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 36), (uint8_t)GPR_U32(ctx, 11));
label_2401f8:
    // 0x2401f8: 0x310d00ff  andi        $t5, $t0, 0xFF
    ctx->pc = 0x2401f8u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
label_2401fc:
    // 0x2401fc: 0x92b00024  lbu         $s0, 0x24($s5)
    ctx->pc = 0x2401fcu;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 36)));
label_240200:
    // 0x240200: 0x24e80006  addiu       $t0, $a3, 0x6
    ctx->pc = 0x240200u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 6));
label_240204:
    // 0x240204: 0x8c6a0008  lw          $t2, 0x8($v1)
    ctx->pc = 0x240204u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_240208:
    // 0x240208: 0x310b00ff  andi        $t3, $t0, 0xFF
    ctx->pc = 0x240208u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
label_24020c:
    // 0x24020c: 0x24e80007  addiu       $t0, $a3, 0x7
    ctx->pc = 0x24020cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 7));
label_240210:
    // 0x240210: 0x312c00ff  andi        $t4, $t1, 0xFF
    ctx->pc = 0x240210u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
label_240214:
    // 0x240214: 0x20f7821  addu        $t7, $s0, $t7
    ctx->pc = 0x240214u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 15)));
label_240218:
    // 0x240218: 0x310900ff  andi        $t1, $t0, 0xFF
    ctx->pc = 0x240218u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
label_24021c:
    // 0x24021c: 0xa14f0024  sb          $t7, 0x24($t2)
    ctx->pc = 0x24021cu;
    WRITE8(ADD32(GPR_U32(ctx, 10), 36), (uint8_t)GPR_U32(ctx, 15));
label_240220:
    // 0x240220: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x240220u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
label_240224:
    // 0x240224: 0x92af0024  lbu         $t7, 0x24($s5)
    ctx->pc = 0x240224u;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 36)));
label_240228:
    // 0x240228: 0xe5402a  slt         $t0, $a3, $a1
    ctx->pc = 0x240228u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_24022c:
    // 0x24022c: 0x8c6a000c  lw          $t2, 0xC($v1)
    ctx->pc = 0x24022cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_240230:
    // 0x240230: 0x1ee7021  addu        $t6, $t7, $t6
    ctx->pc = 0x240230u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
label_240234:
    // 0x240234: 0xa14e0024  sb          $t6, 0x24($t2)
    ctx->pc = 0x240234u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 36), (uint8_t)GPR_U32(ctx, 14));
label_240238:
    // 0x240238: 0x92ae0024  lbu         $t6, 0x24($s5)
    ctx->pc = 0x240238u;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 36)));
label_24023c:
    // 0x24023c: 0x8c6a0010  lw          $t2, 0x10($v1)
    ctx->pc = 0x24023cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_240240:
    // 0x240240: 0x1cd6821  addu        $t5, $t6, $t5
    ctx->pc = 0x240240u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 13)));
label_240244:
    // 0x240244: 0xa14d0024  sb          $t5, 0x24($t2)
    ctx->pc = 0x240244u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 36), (uint8_t)GPR_U32(ctx, 13));
label_240248:
    // 0x240248: 0x92ad0024  lbu         $t5, 0x24($s5)
    ctx->pc = 0x240248u;
    SET_GPR_U32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 36)));
label_24024c:
    // 0x24024c: 0x8c6a0014  lw          $t2, 0x14($v1)
    ctx->pc = 0x24024cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_240250:
    // 0x240250: 0x1ac6021  addu        $t4, $t5, $t4
    ctx->pc = 0x240250u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 12)));
label_240254:
    // 0x240254: 0xa14c0024  sb          $t4, 0x24($t2)
    ctx->pc = 0x240254u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 36), (uint8_t)GPR_U32(ctx, 12));
label_240258:
    // 0x240258: 0x92ac0024  lbu         $t4, 0x24($s5)
    ctx->pc = 0x240258u;
    SET_GPR_U32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 36)));
label_24025c:
    // 0x24025c: 0x8c6a0018  lw          $t2, 0x18($v1)
    ctx->pc = 0x24025cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_240260:
    // 0x240260: 0x18b5821  addu        $t3, $t4, $t3
    ctx->pc = 0x240260u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 11)));
label_240264:
    // 0x240264: 0xa14b0024  sb          $t3, 0x24($t2)
    ctx->pc = 0x240264u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 36), (uint8_t)GPR_U32(ctx, 11));
label_240268:
    // 0x240268: 0x92aa0024  lbu         $t2, 0x24($s5)
    ctx->pc = 0x240268u;
    SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 36)));
label_24026c:
    // 0x24026c: 0x8c63001c  lw          $v1, 0x1C($v1)
    ctx->pc = 0x24026cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_240270:
    // 0x240270: 0x1494821  addu        $t1, $t2, $t1
    ctx->pc = 0x240270u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
label_240274:
    // 0x240274: 0x1500ffcd  bnez        $t0, . + 4 + (-0x33 << 2)
label_240278:
    if (ctx->pc == 0x240278u) {
        ctx->pc = 0x240278u;
            // 0x240278: 0xa0690024  sb          $t1, 0x24($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 36), (uint8_t)GPR_U32(ctx, 9));
        ctx->pc = 0x24027Cu;
        goto label_24027c;
    }
    ctx->pc = 0x240274u;
    {
        const bool branch_taken_0x240274 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x240278u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240274u;
            // 0x240278: 0xa0690024  sb          $t1, 0x24($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 36), (uint8_t)GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240274) {
            ctx->pc = 0x2401ACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2401ac;
        }
    }
    ctx->pc = 0x24027Cu;
label_24027c:
    // 0x24027c: 0x0  nop
    ctx->pc = 0x24027cu;
    // NOP
label_240280:
    // 0x240280: 0xf6082a  slt         $at, $a3, $s6
    ctx->pc = 0x240280u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
label_240284:
    // 0x240284: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
label_240288:
    if (ctx->pc == 0x240288u) {
        ctx->pc = 0x24028Cu;
        goto label_24028c;
    }
    ctx->pc = 0x240284u;
    {
        const bool branch_taken_0x240284 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x240284) {
            ctx->pc = 0x2402C0u;
            goto label_2402c0;
        }
    }
    ctx->pc = 0x24028Cu;
label_24028c:
    // 0x24028c: 0x8fa501c8  lw          $a1, 0x1C8($sp)
    ctx->pc = 0x24028cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 456)));
label_240290:
    // 0x240290: 0x74880  sll         $t1, $a3, 2
    ctx->pc = 0x240290u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_240294:
    // 0x240294: 0xa91821  addu        $v1, $a1, $t1
    ctx->pc = 0x240294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
label_240298:
    // 0x240298: 0x30e600ff  andi        $a2, $a3, 0xFF
    ctx->pc = 0x240298u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
label_24029c:
    // 0x24029c: 0x92a80024  lbu         $t0, 0x24($s5)
    ctx->pc = 0x24029cu;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 36)));
label_2402a0:
    // 0x2402a0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2402a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_2402a4:
    // 0x2402a4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2402a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2402a8:
    // 0x2402a8: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x2402a8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
label_2402ac:
    // 0x2402ac: 0x1063021  addu        $a2, $t0, $a2
    ctx->pc = 0x2402acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
label_2402b0:
    // 0x2402b0: 0xf6182a  slt         $v1, $a3, $s6
    ctx->pc = 0x2402b0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
label_2402b4:
    // 0x2402b4: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
label_2402b8:
    if (ctx->pc == 0x2402B8u) {
        ctx->pc = 0x2402B8u;
            // 0x2402b8: 0xa0860024  sb          $a2, 0x24($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 36), (uint8_t)GPR_U32(ctx, 6));
        ctx->pc = 0x2402BCu;
        goto label_2402bc;
    }
    ctx->pc = 0x2402B4u;
    {
        const bool branch_taken_0x2402b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2402B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2402B4u;
            // 0x2402b8: 0xa0860024  sb          $a2, 0x24($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 36), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2402b4) {
            ctx->pc = 0x240294u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_240294;
        }
    }
    ctx->pc = 0x2402BCu;
label_2402bc:
    // 0x2402bc: 0x0  nop
    ctx->pc = 0x2402bcu;
    // NOP
label_2402c0:
    // 0x2402c0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x2402c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_2402c4:
    // 0x2402c4: 0x8fa501c8  lw          $a1, 0x1C8($sp)
    ctx->pc = 0x2402c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 456)));
label_2402c8:
    // 0x2402c8: 0x8c64ea40  lw          $a0, -0x15C0($v1)
    ctx->pc = 0x2402c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961728)));
label_2402cc:
    // 0x2402cc: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x2402ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
label_2402d0:
    // 0x2402d0: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x2402d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_2402d4:
    // 0x2402d4: 0x14a30005  bne         $a1, $v1, . + 4 + (0x5 << 2)
label_2402d8:
    if (ctx->pc == 0x2402D8u) {
        ctx->pc = 0x2402DCu;
        goto label_2402dc;
    }
    ctx->pc = 0x2402D4u;
    {
        const bool branch_taken_0x2402d4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x2402d4) {
            ctx->pc = 0x2402ECu;
            goto label_2402ec;
        }
    }
    ctx->pc = 0x2402DCu;
label_2402dc:
    // 0x2402dc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2402dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2402e0:
    // 0x2402e0: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x2402e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_2402e4:
    // 0x2402e4: 0x320f809  jalr        $t9
label_2402e8:
    if (ctx->pc == 0x2402E8u) {
        ctx->pc = 0x2402ECu;
        goto label_2402ec;
    }
    ctx->pc = 0x2402E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2402ECu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2402ECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2402ECu; }
            if (ctx->pc != 0x2402ECu) { return; }
        }
        }
    }
    ctx->pc = 0x2402ECu;
label_2402ec:
    // 0x2402ec: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x2402ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_2402f0:
    // 0x2402f0: 0x8fa501d0  lw          $a1, 0x1D0($sp)
    ctx->pc = 0x2402f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
label_2402f4:
    // 0x2402f4: 0x8c64ea40  lw          $a0, -0x15C0($v1)
    ctx->pc = 0x2402f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961728)));
label_2402f8:
    // 0x2402f8: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x2402f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
label_2402fc:
    // 0x2402fc: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x2402fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_240300:
    // 0x240300: 0x54a30006  bnel        $a1, $v1, . + 4 + (0x6 << 2)
label_240304:
    if (ctx->pc == 0x240304u) {
        ctx->pc = 0x240304u;
            // 0x240304: 0x8fa40128  lw          $a0, 0x128($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
        ctx->pc = 0x240308u;
        goto label_240308;
    }
    ctx->pc = 0x240300u;
    {
        const bool branch_taken_0x240300 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x240300) {
            ctx->pc = 0x240304u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x240300u;
            // 0x240304: 0x8fa40128  lw          $a0, 0x128($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x24031Cu;
            goto label_24031c;
        }
    }
    ctx->pc = 0x240308u;
label_240308:
    // 0x240308: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x240308u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_24030c:
    // 0x24030c: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x24030cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_240310:
    // 0x240310: 0x320f809  jalr        $t9
label_240314:
    if (ctx->pc == 0x240314u) {
        ctx->pc = 0x240318u;
        goto label_240318;
    }
    ctx->pc = 0x240310u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x240318u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x240318u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x240318u; }
            if (ctx->pc != 0x240318u) { return; }
        }
        }
    }
    ctx->pc = 0x240318u;
label_240318:
    // 0x240318: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x240318u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
label_24031c:
    // 0x24031c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x24031cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_240320:
    // 0x240320: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x240320u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_240324:
    // 0x240324: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
label_240328:
    if (ctx->pc == 0x240328u) {
        ctx->pc = 0x24032Cu;
        goto label_24032c;
    }
    ctx->pc = 0x240324u;
    {
        const bool branch_taken_0x240324 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x240324) {
            ctx->pc = 0x240350u;
            goto label_240350;
        }
    }
    ctx->pc = 0x24032Cu;
label_24032c:
    // 0x24032c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x24032cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_240330:
    // 0x240330: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x240330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
label_240334:
    // 0x240334: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x240334u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_240338:
    // 0x240338: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x240338u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_24033c:
    // 0x24033c: 0x8fa50120  lw          $a1, 0x120($sp)
    ctx->pc = 0x24033cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_240340:
    // 0x240340: 0x310bc  dsll32      $v0, $v1, 2
    ctx->pc = 0x240340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 2));
label_240344:
    // 0x240344: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x240344u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_240348:
    // 0x240348: 0xc0a7ab4  jal         func_29EAD0
label_24034c:
    if (ctx->pc == 0x24034Cu) {
        ctx->pc = 0x24034Cu;
            // 0x24034c: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x240350u;
        goto label_240350;
    }
    ctx->pc = 0x240348u;
    SET_GPR_U32(ctx, 31, 0x240350u);
    ctx->pc = 0x24034Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x240348u;
            // 0x24034c: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240350u; }
        if (ctx->pc != 0x240350u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240350u; }
        if (ctx->pc != 0x240350u) { return; }
    }
    ctx->pc = 0x240350u;
label_240350:
    // 0x240350: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x240350u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_240354:
    // 0x240354: 0x8fa501e0  lw          $a1, 0x1E0($sp)
    ctx->pc = 0x240354u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
label_240358:
    // 0x240358: 0x8c64ea40  lw          $a0, -0x15C0($v1)
    ctx->pc = 0x240358u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961728)));
label_24035c:
    // 0x24035c: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x24035cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
label_240360:
    // 0x240360: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x240360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_240364:
    // 0x240364: 0x14a30005  bne         $a1, $v1, . + 4 + (0x5 << 2)
label_240368:
    if (ctx->pc == 0x240368u) {
        ctx->pc = 0x24036Cu;
        goto label_24036c;
    }
    ctx->pc = 0x240364u;
    {
        const bool branch_taken_0x240364 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x240364) {
            ctx->pc = 0x24037Cu;
            goto label_24037c;
        }
    }
    ctx->pc = 0x24036Cu;
label_24036c:
    // 0x24036c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x24036cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_240370:
    // 0x240370: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x240370u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_240374:
    // 0x240374: 0x320f809  jalr        $t9
label_240378:
    if (ctx->pc == 0x240378u) {
        ctx->pc = 0x24037Cu;
        goto label_24037c;
    }
    ctx->pc = 0x240374u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x24037Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x24037Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x24037Cu; }
            if (ctx->pc != 0x24037Cu) { return; }
        }
        }
    }
    ctx->pc = 0x24037Cu;
label_24037c:
    // 0x24037c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x24037cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_240380:
    // 0x240380: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x240380u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_240384:
    // 0x240384: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x240384u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_240388:
    // 0x240388: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x240388u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_24038c:
    // 0x24038c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x24038cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_240390:
    // 0x240390: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x240390u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_240394:
    // 0x240394: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x240394u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_240398:
    // 0x240398: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x240398u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_24039c:
    // 0x24039c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x24039cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2403a0:
    // 0x2403a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2403a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2403a4:
    // 0x2403a4: 0x3e00008  jr          $ra
label_2403a8:
    if (ctx->pc == 0x2403A8u) {
        ctx->pc = 0x2403A8u;
            // 0x2403a8: 0x27bd01f0  addiu       $sp, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->pc = 0x2403ACu;
        goto label_2403ac;
    }
    ctx->pc = 0x2403A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2403A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2403A4u;
            // 0x2403a8: 0x27bd01f0  addiu       $sp, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2403ACu;
label_2403ac:
    // 0x2403ac: 0x0  nop
    ctx->pc = 0x2403acu;
    // NOP
}
