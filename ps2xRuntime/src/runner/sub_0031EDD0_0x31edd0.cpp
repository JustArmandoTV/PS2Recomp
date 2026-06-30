#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0031EDD0
// Address: 0x31edd0 - 0x321440
void sub_0031EDD0_0x31edd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031EDD0_0x31edd0");
#endif

    switch (ctx->pc) {
        case 0x31edd0u: goto label_31edd0;
        case 0x31edd4u: goto label_31edd4;
        case 0x31edd8u: goto label_31edd8;
        case 0x31eddcu: goto label_31eddc;
        case 0x31ede0u: goto label_31ede0;
        case 0x31ede4u: goto label_31ede4;
        case 0x31ede8u: goto label_31ede8;
        case 0x31edecu: goto label_31edec;
        case 0x31edf0u: goto label_31edf0;
        case 0x31edf4u: goto label_31edf4;
        case 0x31edf8u: goto label_31edf8;
        case 0x31edfcu: goto label_31edfc;
        case 0x31ee00u: goto label_31ee00;
        case 0x31ee04u: goto label_31ee04;
        case 0x31ee08u: goto label_31ee08;
        case 0x31ee0cu: goto label_31ee0c;
        case 0x31ee10u: goto label_31ee10;
        case 0x31ee14u: goto label_31ee14;
        case 0x31ee18u: goto label_31ee18;
        case 0x31ee1cu: goto label_31ee1c;
        case 0x31ee20u: goto label_31ee20;
        case 0x31ee24u: goto label_31ee24;
        case 0x31ee28u: goto label_31ee28;
        case 0x31ee2cu: goto label_31ee2c;
        case 0x31ee30u: goto label_31ee30;
        case 0x31ee34u: goto label_31ee34;
        case 0x31ee38u: goto label_31ee38;
        case 0x31ee3cu: goto label_31ee3c;
        case 0x31ee40u: goto label_31ee40;
        case 0x31ee44u: goto label_31ee44;
        case 0x31ee48u: goto label_31ee48;
        case 0x31ee4cu: goto label_31ee4c;
        case 0x31ee50u: goto label_31ee50;
        case 0x31ee54u: goto label_31ee54;
        case 0x31ee58u: goto label_31ee58;
        case 0x31ee5cu: goto label_31ee5c;
        case 0x31ee60u: goto label_31ee60;
        case 0x31ee64u: goto label_31ee64;
        case 0x31ee68u: goto label_31ee68;
        case 0x31ee6cu: goto label_31ee6c;
        case 0x31ee70u: goto label_31ee70;
        case 0x31ee74u: goto label_31ee74;
        case 0x31ee78u: goto label_31ee78;
        case 0x31ee7cu: goto label_31ee7c;
        case 0x31ee80u: goto label_31ee80;
        case 0x31ee84u: goto label_31ee84;
        case 0x31ee88u: goto label_31ee88;
        case 0x31ee8cu: goto label_31ee8c;
        case 0x31ee90u: goto label_31ee90;
        case 0x31ee94u: goto label_31ee94;
        case 0x31ee98u: goto label_31ee98;
        case 0x31ee9cu: goto label_31ee9c;
        case 0x31eea0u: goto label_31eea0;
        case 0x31eea4u: goto label_31eea4;
        case 0x31eea8u: goto label_31eea8;
        case 0x31eeacu: goto label_31eeac;
        case 0x31eeb0u: goto label_31eeb0;
        case 0x31eeb4u: goto label_31eeb4;
        case 0x31eeb8u: goto label_31eeb8;
        case 0x31eebcu: goto label_31eebc;
        case 0x31eec0u: goto label_31eec0;
        case 0x31eec4u: goto label_31eec4;
        case 0x31eec8u: goto label_31eec8;
        case 0x31eeccu: goto label_31eecc;
        case 0x31eed0u: goto label_31eed0;
        case 0x31eed4u: goto label_31eed4;
        case 0x31eed8u: goto label_31eed8;
        case 0x31eedcu: goto label_31eedc;
        case 0x31eee0u: goto label_31eee0;
        case 0x31eee4u: goto label_31eee4;
        case 0x31eee8u: goto label_31eee8;
        case 0x31eeecu: goto label_31eeec;
        case 0x31eef0u: goto label_31eef0;
        case 0x31eef4u: goto label_31eef4;
        case 0x31eef8u: goto label_31eef8;
        case 0x31eefcu: goto label_31eefc;
        case 0x31ef00u: goto label_31ef00;
        case 0x31ef04u: goto label_31ef04;
        case 0x31ef08u: goto label_31ef08;
        case 0x31ef0cu: goto label_31ef0c;
        case 0x31ef10u: goto label_31ef10;
        case 0x31ef14u: goto label_31ef14;
        case 0x31ef18u: goto label_31ef18;
        case 0x31ef1cu: goto label_31ef1c;
        case 0x31ef20u: goto label_31ef20;
        case 0x31ef24u: goto label_31ef24;
        case 0x31ef28u: goto label_31ef28;
        case 0x31ef2cu: goto label_31ef2c;
        case 0x31ef30u: goto label_31ef30;
        case 0x31ef34u: goto label_31ef34;
        case 0x31ef38u: goto label_31ef38;
        case 0x31ef3cu: goto label_31ef3c;
        case 0x31ef40u: goto label_31ef40;
        case 0x31ef44u: goto label_31ef44;
        case 0x31ef48u: goto label_31ef48;
        case 0x31ef4cu: goto label_31ef4c;
        case 0x31ef50u: goto label_31ef50;
        case 0x31ef54u: goto label_31ef54;
        case 0x31ef58u: goto label_31ef58;
        case 0x31ef5cu: goto label_31ef5c;
        case 0x31ef60u: goto label_31ef60;
        case 0x31ef64u: goto label_31ef64;
        case 0x31ef68u: goto label_31ef68;
        case 0x31ef6cu: goto label_31ef6c;
        case 0x31ef70u: goto label_31ef70;
        case 0x31ef74u: goto label_31ef74;
        case 0x31ef78u: goto label_31ef78;
        case 0x31ef7cu: goto label_31ef7c;
        case 0x31ef80u: goto label_31ef80;
        case 0x31ef84u: goto label_31ef84;
        case 0x31ef88u: goto label_31ef88;
        case 0x31ef8cu: goto label_31ef8c;
        case 0x31ef90u: goto label_31ef90;
        case 0x31ef94u: goto label_31ef94;
        case 0x31ef98u: goto label_31ef98;
        case 0x31ef9cu: goto label_31ef9c;
        case 0x31efa0u: goto label_31efa0;
        case 0x31efa4u: goto label_31efa4;
        case 0x31efa8u: goto label_31efa8;
        case 0x31efacu: goto label_31efac;
        case 0x31efb0u: goto label_31efb0;
        case 0x31efb4u: goto label_31efb4;
        case 0x31efb8u: goto label_31efb8;
        case 0x31efbcu: goto label_31efbc;
        case 0x31efc0u: goto label_31efc0;
        case 0x31efc4u: goto label_31efc4;
        case 0x31efc8u: goto label_31efc8;
        case 0x31efccu: goto label_31efcc;
        case 0x31efd0u: goto label_31efd0;
        case 0x31efd4u: goto label_31efd4;
        case 0x31efd8u: goto label_31efd8;
        case 0x31efdcu: goto label_31efdc;
        case 0x31efe0u: goto label_31efe0;
        case 0x31efe4u: goto label_31efe4;
        case 0x31efe8u: goto label_31efe8;
        case 0x31efecu: goto label_31efec;
        case 0x31eff0u: goto label_31eff0;
        case 0x31eff4u: goto label_31eff4;
        case 0x31eff8u: goto label_31eff8;
        case 0x31effcu: goto label_31effc;
        case 0x31f000u: goto label_31f000;
        case 0x31f004u: goto label_31f004;
        case 0x31f008u: goto label_31f008;
        case 0x31f00cu: goto label_31f00c;
        case 0x31f010u: goto label_31f010;
        case 0x31f014u: goto label_31f014;
        case 0x31f018u: goto label_31f018;
        case 0x31f01cu: goto label_31f01c;
        case 0x31f020u: goto label_31f020;
        case 0x31f024u: goto label_31f024;
        case 0x31f028u: goto label_31f028;
        case 0x31f02cu: goto label_31f02c;
        case 0x31f030u: goto label_31f030;
        case 0x31f034u: goto label_31f034;
        case 0x31f038u: goto label_31f038;
        case 0x31f03cu: goto label_31f03c;
        case 0x31f040u: goto label_31f040;
        case 0x31f044u: goto label_31f044;
        case 0x31f048u: goto label_31f048;
        case 0x31f04cu: goto label_31f04c;
        case 0x31f050u: goto label_31f050;
        case 0x31f054u: goto label_31f054;
        case 0x31f058u: goto label_31f058;
        case 0x31f05cu: goto label_31f05c;
        case 0x31f060u: goto label_31f060;
        case 0x31f064u: goto label_31f064;
        case 0x31f068u: goto label_31f068;
        case 0x31f06cu: goto label_31f06c;
        case 0x31f070u: goto label_31f070;
        case 0x31f074u: goto label_31f074;
        case 0x31f078u: goto label_31f078;
        case 0x31f07cu: goto label_31f07c;
        case 0x31f080u: goto label_31f080;
        case 0x31f084u: goto label_31f084;
        case 0x31f088u: goto label_31f088;
        case 0x31f08cu: goto label_31f08c;
        case 0x31f090u: goto label_31f090;
        case 0x31f094u: goto label_31f094;
        case 0x31f098u: goto label_31f098;
        case 0x31f09cu: goto label_31f09c;
        case 0x31f0a0u: goto label_31f0a0;
        case 0x31f0a4u: goto label_31f0a4;
        case 0x31f0a8u: goto label_31f0a8;
        case 0x31f0acu: goto label_31f0ac;
        case 0x31f0b0u: goto label_31f0b0;
        case 0x31f0b4u: goto label_31f0b4;
        case 0x31f0b8u: goto label_31f0b8;
        case 0x31f0bcu: goto label_31f0bc;
        case 0x31f0c0u: goto label_31f0c0;
        case 0x31f0c4u: goto label_31f0c4;
        case 0x31f0c8u: goto label_31f0c8;
        case 0x31f0ccu: goto label_31f0cc;
        case 0x31f0d0u: goto label_31f0d0;
        case 0x31f0d4u: goto label_31f0d4;
        case 0x31f0d8u: goto label_31f0d8;
        case 0x31f0dcu: goto label_31f0dc;
        case 0x31f0e0u: goto label_31f0e0;
        case 0x31f0e4u: goto label_31f0e4;
        case 0x31f0e8u: goto label_31f0e8;
        case 0x31f0ecu: goto label_31f0ec;
        case 0x31f0f0u: goto label_31f0f0;
        case 0x31f0f4u: goto label_31f0f4;
        case 0x31f0f8u: goto label_31f0f8;
        case 0x31f0fcu: goto label_31f0fc;
        case 0x31f100u: goto label_31f100;
        case 0x31f104u: goto label_31f104;
        case 0x31f108u: goto label_31f108;
        case 0x31f10cu: goto label_31f10c;
        case 0x31f110u: goto label_31f110;
        case 0x31f114u: goto label_31f114;
        case 0x31f118u: goto label_31f118;
        case 0x31f11cu: goto label_31f11c;
        case 0x31f120u: goto label_31f120;
        case 0x31f124u: goto label_31f124;
        case 0x31f128u: goto label_31f128;
        case 0x31f12cu: goto label_31f12c;
        case 0x31f130u: goto label_31f130;
        case 0x31f134u: goto label_31f134;
        case 0x31f138u: goto label_31f138;
        case 0x31f13cu: goto label_31f13c;
        case 0x31f140u: goto label_31f140;
        case 0x31f144u: goto label_31f144;
        case 0x31f148u: goto label_31f148;
        case 0x31f14cu: goto label_31f14c;
        case 0x31f150u: goto label_31f150;
        case 0x31f154u: goto label_31f154;
        case 0x31f158u: goto label_31f158;
        case 0x31f15cu: goto label_31f15c;
        case 0x31f160u: goto label_31f160;
        case 0x31f164u: goto label_31f164;
        case 0x31f168u: goto label_31f168;
        case 0x31f16cu: goto label_31f16c;
        case 0x31f170u: goto label_31f170;
        case 0x31f174u: goto label_31f174;
        case 0x31f178u: goto label_31f178;
        case 0x31f17cu: goto label_31f17c;
        case 0x31f180u: goto label_31f180;
        case 0x31f184u: goto label_31f184;
        case 0x31f188u: goto label_31f188;
        case 0x31f18cu: goto label_31f18c;
        case 0x31f190u: goto label_31f190;
        case 0x31f194u: goto label_31f194;
        case 0x31f198u: goto label_31f198;
        case 0x31f19cu: goto label_31f19c;
        case 0x31f1a0u: goto label_31f1a0;
        case 0x31f1a4u: goto label_31f1a4;
        case 0x31f1a8u: goto label_31f1a8;
        case 0x31f1acu: goto label_31f1ac;
        case 0x31f1b0u: goto label_31f1b0;
        case 0x31f1b4u: goto label_31f1b4;
        case 0x31f1b8u: goto label_31f1b8;
        case 0x31f1bcu: goto label_31f1bc;
        case 0x31f1c0u: goto label_31f1c0;
        case 0x31f1c4u: goto label_31f1c4;
        case 0x31f1c8u: goto label_31f1c8;
        case 0x31f1ccu: goto label_31f1cc;
        case 0x31f1d0u: goto label_31f1d0;
        case 0x31f1d4u: goto label_31f1d4;
        case 0x31f1d8u: goto label_31f1d8;
        case 0x31f1dcu: goto label_31f1dc;
        case 0x31f1e0u: goto label_31f1e0;
        case 0x31f1e4u: goto label_31f1e4;
        case 0x31f1e8u: goto label_31f1e8;
        case 0x31f1ecu: goto label_31f1ec;
        case 0x31f1f0u: goto label_31f1f0;
        case 0x31f1f4u: goto label_31f1f4;
        case 0x31f1f8u: goto label_31f1f8;
        case 0x31f1fcu: goto label_31f1fc;
        case 0x31f200u: goto label_31f200;
        case 0x31f204u: goto label_31f204;
        case 0x31f208u: goto label_31f208;
        case 0x31f20cu: goto label_31f20c;
        case 0x31f210u: goto label_31f210;
        case 0x31f214u: goto label_31f214;
        case 0x31f218u: goto label_31f218;
        case 0x31f21cu: goto label_31f21c;
        case 0x31f220u: goto label_31f220;
        case 0x31f224u: goto label_31f224;
        case 0x31f228u: goto label_31f228;
        case 0x31f22cu: goto label_31f22c;
        case 0x31f230u: goto label_31f230;
        case 0x31f234u: goto label_31f234;
        case 0x31f238u: goto label_31f238;
        case 0x31f23cu: goto label_31f23c;
        case 0x31f240u: goto label_31f240;
        case 0x31f244u: goto label_31f244;
        case 0x31f248u: goto label_31f248;
        case 0x31f24cu: goto label_31f24c;
        case 0x31f250u: goto label_31f250;
        case 0x31f254u: goto label_31f254;
        case 0x31f258u: goto label_31f258;
        case 0x31f25cu: goto label_31f25c;
        case 0x31f260u: goto label_31f260;
        case 0x31f264u: goto label_31f264;
        case 0x31f268u: goto label_31f268;
        case 0x31f26cu: goto label_31f26c;
        case 0x31f270u: goto label_31f270;
        case 0x31f274u: goto label_31f274;
        case 0x31f278u: goto label_31f278;
        case 0x31f27cu: goto label_31f27c;
        case 0x31f280u: goto label_31f280;
        case 0x31f284u: goto label_31f284;
        case 0x31f288u: goto label_31f288;
        case 0x31f28cu: goto label_31f28c;
        case 0x31f290u: goto label_31f290;
        case 0x31f294u: goto label_31f294;
        case 0x31f298u: goto label_31f298;
        case 0x31f29cu: goto label_31f29c;
        case 0x31f2a0u: goto label_31f2a0;
        case 0x31f2a4u: goto label_31f2a4;
        case 0x31f2a8u: goto label_31f2a8;
        case 0x31f2acu: goto label_31f2ac;
        case 0x31f2b0u: goto label_31f2b0;
        case 0x31f2b4u: goto label_31f2b4;
        case 0x31f2b8u: goto label_31f2b8;
        case 0x31f2bcu: goto label_31f2bc;
        case 0x31f2c0u: goto label_31f2c0;
        case 0x31f2c4u: goto label_31f2c4;
        case 0x31f2c8u: goto label_31f2c8;
        case 0x31f2ccu: goto label_31f2cc;
        case 0x31f2d0u: goto label_31f2d0;
        case 0x31f2d4u: goto label_31f2d4;
        case 0x31f2d8u: goto label_31f2d8;
        case 0x31f2dcu: goto label_31f2dc;
        case 0x31f2e0u: goto label_31f2e0;
        case 0x31f2e4u: goto label_31f2e4;
        case 0x31f2e8u: goto label_31f2e8;
        case 0x31f2ecu: goto label_31f2ec;
        case 0x31f2f0u: goto label_31f2f0;
        case 0x31f2f4u: goto label_31f2f4;
        case 0x31f2f8u: goto label_31f2f8;
        case 0x31f2fcu: goto label_31f2fc;
        case 0x31f300u: goto label_31f300;
        case 0x31f304u: goto label_31f304;
        case 0x31f308u: goto label_31f308;
        case 0x31f30cu: goto label_31f30c;
        case 0x31f310u: goto label_31f310;
        case 0x31f314u: goto label_31f314;
        case 0x31f318u: goto label_31f318;
        case 0x31f31cu: goto label_31f31c;
        case 0x31f320u: goto label_31f320;
        case 0x31f324u: goto label_31f324;
        case 0x31f328u: goto label_31f328;
        case 0x31f32cu: goto label_31f32c;
        case 0x31f330u: goto label_31f330;
        case 0x31f334u: goto label_31f334;
        case 0x31f338u: goto label_31f338;
        case 0x31f33cu: goto label_31f33c;
        case 0x31f340u: goto label_31f340;
        case 0x31f344u: goto label_31f344;
        case 0x31f348u: goto label_31f348;
        case 0x31f34cu: goto label_31f34c;
        case 0x31f350u: goto label_31f350;
        case 0x31f354u: goto label_31f354;
        case 0x31f358u: goto label_31f358;
        case 0x31f35cu: goto label_31f35c;
        case 0x31f360u: goto label_31f360;
        case 0x31f364u: goto label_31f364;
        case 0x31f368u: goto label_31f368;
        case 0x31f36cu: goto label_31f36c;
        case 0x31f370u: goto label_31f370;
        case 0x31f374u: goto label_31f374;
        case 0x31f378u: goto label_31f378;
        case 0x31f37cu: goto label_31f37c;
        case 0x31f380u: goto label_31f380;
        case 0x31f384u: goto label_31f384;
        case 0x31f388u: goto label_31f388;
        case 0x31f38cu: goto label_31f38c;
        case 0x31f390u: goto label_31f390;
        case 0x31f394u: goto label_31f394;
        case 0x31f398u: goto label_31f398;
        case 0x31f39cu: goto label_31f39c;
        case 0x31f3a0u: goto label_31f3a0;
        case 0x31f3a4u: goto label_31f3a4;
        case 0x31f3a8u: goto label_31f3a8;
        case 0x31f3acu: goto label_31f3ac;
        case 0x31f3b0u: goto label_31f3b0;
        case 0x31f3b4u: goto label_31f3b4;
        case 0x31f3b8u: goto label_31f3b8;
        case 0x31f3bcu: goto label_31f3bc;
        case 0x31f3c0u: goto label_31f3c0;
        case 0x31f3c4u: goto label_31f3c4;
        case 0x31f3c8u: goto label_31f3c8;
        case 0x31f3ccu: goto label_31f3cc;
        case 0x31f3d0u: goto label_31f3d0;
        case 0x31f3d4u: goto label_31f3d4;
        case 0x31f3d8u: goto label_31f3d8;
        case 0x31f3dcu: goto label_31f3dc;
        case 0x31f3e0u: goto label_31f3e0;
        case 0x31f3e4u: goto label_31f3e4;
        case 0x31f3e8u: goto label_31f3e8;
        case 0x31f3ecu: goto label_31f3ec;
        case 0x31f3f0u: goto label_31f3f0;
        case 0x31f3f4u: goto label_31f3f4;
        case 0x31f3f8u: goto label_31f3f8;
        case 0x31f3fcu: goto label_31f3fc;
        case 0x31f400u: goto label_31f400;
        case 0x31f404u: goto label_31f404;
        case 0x31f408u: goto label_31f408;
        case 0x31f40cu: goto label_31f40c;
        case 0x31f410u: goto label_31f410;
        case 0x31f414u: goto label_31f414;
        case 0x31f418u: goto label_31f418;
        case 0x31f41cu: goto label_31f41c;
        case 0x31f420u: goto label_31f420;
        case 0x31f424u: goto label_31f424;
        case 0x31f428u: goto label_31f428;
        case 0x31f42cu: goto label_31f42c;
        case 0x31f430u: goto label_31f430;
        case 0x31f434u: goto label_31f434;
        case 0x31f438u: goto label_31f438;
        case 0x31f43cu: goto label_31f43c;
        case 0x31f440u: goto label_31f440;
        case 0x31f444u: goto label_31f444;
        case 0x31f448u: goto label_31f448;
        case 0x31f44cu: goto label_31f44c;
        case 0x31f450u: goto label_31f450;
        case 0x31f454u: goto label_31f454;
        case 0x31f458u: goto label_31f458;
        case 0x31f45cu: goto label_31f45c;
        case 0x31f460u: goto label_31f460;
        case 0x31f464u: goto label_31f464;
        case 0x31f468u: goto label_31f468;
        case 0x31f46cu: goto label_31f46c;
        case 0x31f470u: goto label_31f470;
        case 0x31f474u: goto label_31f474;
        case 0x31f478u: goto label_31f478;
        case 0x31f47cu: goto label_31f47c;
        case 0x31f480u: goto label_31f480;
        case 0x31f484u: goto label_31f484;
        case 0x31f488u: goto label_31f488;
        case 0x31f48cu: goto label_31f48c;
        case 0x31f490u: goto label_31f490;
        case 0x31f494u: goto label_31f494;
        case 0x31f498u: goto label_31f498;
        case 0x31f49cu: goto label_31f49c;
        case 0x31f4a0u: goto label_31f4a0;
        case 0x31f4a4u: goto label_31f4a4;
        case 0x31f4a8u: goto label_31f4a8;
        case 0x31f4acu: goto label_31f4ac;
        case 0x31f4b0u: goto label_31f4b0;
        case 0x31f4b4u: goto label_31f4b4;
        case 0x31f4b8u: goto label_31f4b8;
        case 0x31f4bcu: goto label_31f4bc;
        case 0x31f4c0u: goto label_31f4c0;
        case 0x31f4c4u: goto label_31f4c4;
        case 0x31f4c8u: goto label_31f4c8;
        case 0x31f4ccu: goto label_31f4cc;
        case 0x31f4d0u: goto label_31f4d0;
        case 0x31f4d4u: goto label_31f4d4;
        case 0x31f4d8u: goto label_31f4d8;
        case 0x31f4dcu: goto label_31f4dc;
        case 0x31f4e0u: goto label_31f4e0;
        case 0x31f4e4u: goto label_31f4e4;
        case 0x31f4e8u: goto label_31f4e8;
        case 0x31f4ecu: goto label_31f4ec;
        case 0x31f4f0u: goto label_31f4f0;
        case 0x31f4f4u: goto label_31f4f4;
        case 0x31f4f8u: goto label_31f4f8;
        case 0x31f4fcu: goto label_31f4fc;
        case 0x31f500u: goto label_31f500;
        case 0x31f504u: goto label_31f504;
        case 0x31f508u: goto label_31f508;
        case 0x31f50cu: goto label_31f50c;
        case 0x31f510u: goto label_31f510;
        case 0x31f514u: goto label_31f514;
        case 0x31f518u: goto label_31f518;
        case 0x31f51cu: goto label_31f51c;
        case 0x31f520u: goto label_31f520;
        case 0x31f524u: goto label_31f524;
        case 0x31f528u: goto label_31f528;
        case 0x31f52cu: goto label_31f52c;
        case 0x31f530u: goto label_31f530;
        case 0x31f534u: goto label_31f534;
        case 0x31f538u: goto label_31f538;
        case 0x31f53cu: goto label_31f53c;
        case 0x31f540u: goto label_31f540;
        case 0x31f544u: goto label_31f544;
        case 0x31f548u: goto label_31f548;
        case 0x31f54cu: goto label_31f54c;
        case 0x31f550u: goto label_31f550;
        case 0x31f554u: goto label_31f554;
        case 0x31f558u: goto label_31f558;
        case 0x31f55cu: goto label_31f55c;
        case 0x31f560u: goto label_31f560;
        case 0x31f564u: goto label_31f564;
        case 0x31f568u: goto label_31f568;
        case 0x31f56cu: goto label_31f56c;
        case 0x31f570u: goto label_31f570;
        case 0x31f574u: goto label_31f574;
        case 0x31f578u: goto label_31f578;
        case 0x31f57cu: goto label_31f57c;
        case 0x31f580u: goto label_31f580;
        case 0x31f584u: goto label_31f584;
        case 0x31f588u: goto label_31f588;
        case 0x31f58cu: goto label_31f58c;
        case 0x31f590u: goto label_31f590;
        case 0x31f594u: goto label_31f594;
        case 0x31f598u: goto label_31f598;
        case 0x31f59cu: goto label_31f59c;
        case 0x31f5a0u: goto label_31f5a0;
        case 0x31f5a4u: goto label_31f5a4;
        case 0x31f5a8u: goto label_31f5a8;
        case 0x31f5acu: goto label_31f5ac;
        case 0x31f5b0u: goto label_31f5b0;
        case 0x31f5b4u: goto label_31f5b4;
        case 0x31f5b8u: goto label_31f5b8;
        case 0x31f5bcu: goto label_31f5bc;
        case 0x31f5c0u: goto label_31f5c0;
        case 0x31f5c4u: goto label_31f5c4;
        case 0x31f5c8u: goto label_31f5c8;
        case 0x31f5ccu: goto label_31f5cc;
        case 0x31f5d0u: goto label_31f5d0;
        case 0x31f5d4u: goto label_31f5d4;
        case 0x31f5d8u: goto label_31f5d8;
        case 0x31f5dcu: goto label_31f5dc;
        case 0x31f5e0u: goto label_31f5e0;
        case 0x31f5e4u: goto label_31f5e4;
        case 0x31f5e8u: goto label_31f5e8;
        case 0x31f5ecu: goto label_31f5ec;
        case 0x31f5f0u: goto label_31f5f0;
        case 0x31f5f4u: goto label_31f5f4;
        case 0x31f5f8u: goto label_31f5f8;
        case 0x31f5fcu: goto label_31f5fc;
        case 0x31f600u: goto label_31f600;
        case 0x31f604u: goto label_31f604;
        case 0x31f608u: goto label_31f608;
        case 0x31f60cu: goto label_31f60c;
        case 0x31f610u: goto label_31f610;
        case 0x31f614u: goto label_31f614;
        case 0x31f618u: goto label_31f618;
        case 0x31f61cu: goto label_31f61c;
        case 0x31f620u: goto label_31f620;
        case 0x31f624u: goto label_31f624;
        case 0x31f628u: goto label_31f628;
        case 0x31f62cu: goto label_31f62c;
        case 0x31f630u: goto label_31f630;
        case 0x31f634u: goto label_31f634;
        case 0x31f638u: goto label_31f638;
        case 0x31f63cu: goto label_31f63c;
        case 0x31f640u: goto label_31f640;
        case 0x31f644u: goto label_31f644;
        case 0x31f648u: goto label_31f648;
        case 0x31f64cu: goto label_31f64c;
        case 0x31f650u: goto label_31f650;
        case 0x31f654u: goto label_31f654;
        case 0x31f658u: goto label_31f658;
        case 0x31f65cu: goto label_31f65c;
        case 0x31f660u: goto label_31f660;
        case 0x31f664u: goto label_31f664;
        case 0x31f668u: goto label_31f668;
        case 0x31f66cu: goto label_31f66c;
        case 0x31f670u: goto label_31f670;
        case 0x31f674u: goto label_31f674;
        case 0x31f678u: goto label_31f678;
        case 0x31f67cu: goto label_31f67c;
        case 0x31f680u: goto label_31f680;
        case 0x31f684u: goto label_31f684;
        case 0x31f688u: goto label_31f688;
        case 0x31f68cu: goto label_31f68c;
        case 0x31f690u: goto label_31f690;
        case 0x31f694u: goto label_31f694;
        case 0x31f698u: goto label_31f698;
        case 0x31f69cu: goto label_31f69c;
        case 0x31f6a0u: goto label_31f6a0;
        case 0x31f6a4u: goto label_31f6a4;
        case 0x31f6a8u: goto label_31f6a8;
        case 0x31f6acu: goto label_31f6ac;
        case 0x31f6b0u: goto label_31f6b0;
        case 0x31f6b4u: goto label_31f6b4;
        case 0x31f6b8u: goto label_31f6b8;
        case 0x31f6bcu: goto label_31f6bc;
        case 0x31f6c0u: goto label_31f6c0;
        case 0x31f6c4u: goto label_31f6c4;
        case 0x31f6c8u: goto label_31f6c8;
        case 0x31f6ccu: goto label_31f6cc;
        case 0x31f6d0u: goto label_31f6d0;
        case 0x31f6d4u: goto label_31f6d4;
        case 0x31f6d8u: goto label_31f6d8;
        case 0x31f6dcu: goto label_31f6dc;
        case 0x31f6e0u: goto label_31f6e0;
        case 0x31f6e4u: goto label_31f6e4;
        case 0x31f6e8u: goto label_31f6e8;
        case 0x31f6ecu: goto label_31f6ec;
        case 0x31f6f0u: goto label_31f6f0;
        case 0x31f6f4u: goto label_31f6f4;
        case 0x31f6f8u: goto label_31f6f8;
        case 0x31f6fcu: goto label_31f6fc;
        case 0x31f700u: goto label_31f700;
        case 0x31f704u: goto label_31f704;
        case 0x31f708u: goto label_31f708;
        case 0x31f70cu: goto label_31f70c;
        case 0x31f710u: goto label_31f710;
        case 0x31f714u: goto label_31f714;
        case 0x31f718u: goto label_31f718;
        case 0x31f71cu: goto label_31f71c;
        case 0x31f720u: goto label_31f720;
        case 0x31f724u: goto label_31f724;
        case 0x31f728u: goto label_31f728;
        case 0x31f72cu: goto label_31f72c;
        case 0x31f730u: goto label_31f730;
        case 0x31f734u: goto label_31f734;
        case 0x31f738u: goto label_31f738;
        case 0x31f73cu: goto label_31f73c;
        case 0x31f740u: goto label_31f740;
        case 0x31f744u: goto label_31f744;
        case 0x31f748u: goto label_31f748;
        case 0x31f74cu: goto label_31f74c;
        case 0x31f750u: goto label_31f750;
        case 0x31f754u: goto label_31f754;
        case 0x31f758u: goto label_31f758;
        case 0x31f75cu: goto label_31f75c;
        case 0x31f760u: goto label_31f760;
        case 0x31f764u: goto label_31f764;
        case 0x31f768u: goto label_31f768;
        case 0x31f76cu: goto label_31f76c;
        case 0x31f770u: goto label_31f770;
        case 0x31f774u: goto label_31f774;
        case 0x31f778u: goto label_31f778;
        case 0x31f77cu: goto label_31f77c;
        case 0x31f780u: goto label_31f780;
        case 0x31f784u: goto label_31f784;
        case 0x31f788u: goto label_31f788;
        case 0x31f78cu: goto label_31f78c;
        case 0x31f790u: goto label_31f790;
        case 0x31f794u: goto label_31f794;
        case 0x31f798u: goto label_31f798;
        case 0x31f79cu: goto label_31f79c;
        case 0x31f7a0u: goto label_31f7a0;
        case 0x31f7a4u: goto label_31f7a4;
        case 0x31f7a8u: goto label_31f7a8;
        case 0x31f7acu: goto label_31f7ac;
        case 0x31f7b0u: goto label_31f7b0;
        case 0x31f7b4u: goto label_31f7b4;
        case 0x31f7b8u: goto label_31f7b8;
        case 0x31f7bcu: goto label_31f7bc;
        case 0x31f7c0u: goto label_31f7c0;
        case 0x31f7c4u: goto label_31f7c4;
        case 0x31f7c8u: goto label_31f7c8;
        case 0x31f7ccu: goto label_31f7cc;
        case 0x31f7d0u: goto label_31f7d0;
        case 0x31f7d4u: goto label_31f7d4;
        case 0x31f7d8u: goto label_31f7d8;
        case 0x31f7dcu: goto label_31f7dc;
        case 0x31f7e0u: goto label_31f7e0;
        case 0x31f7e4u: goto label_31f7e4;
        case 0x31f7e8u: goto label_31f7e8;
        case 0x31f7ecu: goto label_31f7ec;
        case 0x31f7f0u: goto label_31f7f0;
        case 0x31f7f4u: goto label_31f7f4;
        case 0x31f7f8u: goto label_31f7f8;
        case 0x31f7fcu: goto label_31f7fc;
        case 0x31f800u: goto label_31f800;
        case 0x31f804u: goto label_31f804;
        case 0x31f808u: goto label_31f808;
        case 0x31f80cu: goto label_31f80c;
        case 0x31f810u: goto label_31f810;
        case 0x31f814u: goto label_31f814;
        case 0x31f818u: goto label_31f818;
        case 0x31f81cu: goto label_31f81c;
        case 0x31f820u: goto label_31f820;
        case 0x31f824u: goto label_31f824;
        case 0x31f828u: goto label_31f828;
        case 0x31f82cu: goto label_31f82c;
        case 0x31f830u: goto label_31f830;
        case 0x31f834u: goto label_31f834;
        case 0x31f838u: goto label_31f838;
        case 0x31f83cu: goto label_31f83c;
        case 0x31f840u: goto label_31f840;
        case 0x31f844u: goto label_31f844;
        case 0x31f848u: goto label_31f848;
        case 0x31f84cu: goto label_31f84c;
        case 0x31f850u: goto label_31f850;
        case 0x31f854u: goto label_31f854;
        case 0x31f858u: goto label_31f858;
        case 0x31f85cu: goto label_31f85c;
        case 0x31f860u: goto label_31f860;
        case 0x31f864u: goto label_31f864;
        case 0x31f868u: goto label_31f868;
        case 0x31f86cu: goto label_31f86c;
        case 0x31f870u: goto label_31f870;
        case 0x31f874u: goto label_31f874;
        case 0x31f878u: goto label_31f878;
        case 0x31f87cu: goto label_31f87c;
        case 0x31f880u: goto label_31f880;
        case 0x31f884u: goto label_31f884;
        case 0x31f888u: goto label_31f888;
        case 0x31f88cu: goto label_31f88c;
        case 0x31f890u: goto label_31f890;
        case 0x31f894u: goto label_31f894;
        case 0x31f898u: goto label_31f898;
        case 0x31f89cu: goto label_31f89c;
        case 0x31f8a0u: goto label_31f8a0;
        case 0x31f8a4u: goto label_31f8a4;
        case 0x31f8a8u: goto label_31f8a8;
        case 0x31f8acu: goto label_31f8ac;
        case 0x31f8b0u: goto label_31f8b0;
        case 0x31f8b4u: goto label_31f8b4;
        case 0x31f8b8u: goto label_31f8b8;
        case 0x31f8bcu: goto label_31f8bc;
        case 0x31f8c0u: goto label_31f8c0;
        case 0x31f8c4u: goto label_31f8c4;
        case 0x31f8c8u: goto label_31f8c8;
        case 0x31f8ccu: goto label_31f8cc;
        case 0x31f8d0u: goto label_31f8d0;
        case 0x31f8d4u: goto label_31f8d4;
        case 0x31f8d8u: goto label_31f8d8;
        case 0x31f8dcu: goto label_31f8dc;
        case 0x31f8e0u: goto label_31f8e0;
        case 0x31f8e4u: goto label_31f8e4;
        case 0x31f8e8u: goto label_31f8e8;
        case 0x31f8ecu: goto label_31f8ec;
        case 0x31f8f0u: goto label_31f8f0;
        case 0x31f8f4u: goto label_31f8f4;
        case 0x31f8f8u: goto label_31f8f8;
        case 0x31f8fcu: goto label_31f8fc;
        case 0x31f900u: goto label_31f900;
        case 0x31f904u: goto label_31f904;
        case 0x31f908u: goto label_31f908;
        case 0x31f90cu: goto label_31f90c;
        case 0x31f910u: goto label_31f910;
        case 0x31f914u: goto label_31f914;
        case 0x31f918u: goto label_31f918;
        case 0x31f91cu: goto label_31f91c;
        case 0x31f920u: goto label_31f920;
        case 0x31f924u: goto label_31f924;
        case 0x31f928u: goto label_31f928;
        case 0x31f92cu: goto label_31f92c;
        case 0x31f930u: goto label_31f930;
        case 0x31f934u: goto label_31f934;
        case 0x31f938u: goto label_31f938;
        case 0x31f93cu: goto label_31f93c;
        case 0x31f940u: goto label_31f940;
        case 0x31f944u: goto label_31f944;
        case 0x31f948u: goto label_31f948;
        case 0x31f94cu: goto label_31f94c;
        case 0x31f950u: goto label_31f950;
        case 0x31f954u: goto label_31f954;
        case 0x31f958u: goto label_31f958;
        case 0x31f95cu: goto label_31f95c;
        case 0x31f960u: goto label_31f960;
        case 0x31f964u: goto label_31f964;
        case 0x31f968u: goto label_31f968;
        case 0x31f96cu: goto label_31f96c;
        case 0x31f970u: goto label_31f970;
        case 0x31f974u: goto label_31f974;
        case 0x31f978u: goto label_31f978;
        case 0x31f97cu: goto label_31f97c;
        case 0x31f980u: goto label_31f980;
        case 0x31f984u: goto label_31f984;
        case 0x31f988u: goto label_31f988;
        case 0x31f98cu: goto label_31f98c;
        case 0x31f990u: goto label_31f990;
        case 0x31f994u: goto label_31f994;
        case 0x31f998u: goto label_31f998;
        case 0x31f99cu: goto label_31f99c;
        case 0x31f9a0u: goto label_31f9a0;
        case 0x31f9a4u: goto label_31f9a4;
        case 0x31f9a8u: goto label_31f9a8;
        case 0x31f9acu: goto label_31f9ac;
        case 0x31f9b0u: goto label_31f9b0;
        case 0x31f9b4u: goto label_31f9b4;
        case 0x31f9b8u: goto label_31f9b8;
        case 0x31f9bcu: goto label_31f9bc;
        case 0x31f9c0u: goto label_31f9c0;
        case 0x31f9c4u: goto label_31f9c4;
        case 0x31f9c8u: goto label_31f9c8;
        case 0x31f9ccu: goto label_31f9cc;
        case 0x31f9d0u: goto label_31f9d0;
        case 0x31f9d4u: goto label_31f9d4;
        case 0x31f9d8u: goto label_31f9d8;
        case 0x31f9dcu: goto label_31f9dc;
        case 0x31f9e0u: goto label_31f9e0;
        case 0x31f9e4u: goto label_31f9e4;
        case 0x31f9e8u: goto label_31f9e8;
        case 0x31f9ecu: goto label_31f9ec;
        case 0x31f9f0u: goto label_31f9f0;
        case 0x31f9f4u: goto label_31f9f4;
        case 0x31f9f8u: goto label_31f9f8;
        case 0x31f9fcu: goto label_31f9fc;
        case 0x31fa00u: goto label_31fa00;
        case 0x31fa04u: goto label_31fa04;
        case 0x31fa08u: goto label_31fa08;
        case 0x31fa0cu: goto label_31fa0c;
        case 0x31fa10u: goto label_31fa10;
        case 0x31fa14u: goto label_31fa14;
        case 0x31fa18u: goto label_31fa18;
        case 0x31fa1cu: goto label_31fa1c;
        case 0x31fa20u: goto label_31fa20;
        case 0x31fa24u: goto label_31fa24;
        case 0x31fa28u: goto label_31fa28;
        case 0x31fa2cu: goto label_31fa2c;
        case 0x31fa30u: goto label_31fa30;
        case 0x31fa34u: goto label_31fa34;
        case 0x31fa38u: goto label_31fa38;
        case 0x31fa3cu: goto label_31fa3c;
        case 0x31fa40u: goto label_31fa40;
        case 0x31fa44u: goto label_31fa44;
        case 0x31fa48u: goto label_31fa48;
        case 0x31fa4cu: goto label_31fa4c;
        case 0x31fa50u: goto label_31fa50;
        case 0x31fa54u: goto label_31fa54;
        case 0x31fa58u: goto label_31fa58;
        case 0x31fa5cu: goto label_31fa5c;
        case 0x31fa60u: goto label_31fa60;
        case 0x31fa64u: goto label_31fa64;
        case 0x31fa68u: goto label_31fa68;
        case 0x31fa6cu: goto label_31fa6c;
        case 0x31fa70u: goto label_31fa70;
        case 0x31fa74u: goto label_31fa74;
        case 0x31fa78u: goto label_31fa78;
        case 0x31fa7cu: goto label_31fa7c;
        case 0x31fa80u: goto label_31fa80;
        case 0x31fa84u: goto label_31fa84;
        case 0x31fa88u: goto label_31fa88;
        case 0x31fa8cu: goto label_31fa8c;
        case 0x31fa90u: goto label_31fa90;
        case 0x31fa94u: goto label_31fa94;
        case 0x31fa98u: goto label_31fa98;
        case 0x31fa9cu: goto label_31fa9c;
        case 0x31faa0u: goto label_31faa0;
        case 0x31faa4u: goto label_31faa4;
        case 0x31faa8u: goto label_31faa8;
        case 0x31faacu: goto label_31faac;
        case 0x31fab0u: goto label_31fab0;
        case 0x31fab4u: goto label_31fab4;
        case 0x31fab8u: goto label_31fab8;
        case 0x31fabcu: goto label_31fabc;
        case 0x31fac0u: goto label_31fac0;
        case 0x31fac4u: goto label_31fac4;
        case 0x31fac8u: goto label_31fac8;
        case 0x31faccu: goto label_31facc;
        case 0x31fad0u: goto label_31fad0;
        case 0x31fad4u: goto label_31fad4;
        case 0x31fad8u: goto label_31fad8;
        case 0x31fadcu: goto label_31fadc;
        case 0x31fae0u: goto label_31fae0;
        case 0x31fae4u: goto label_31fae4;
        case 0x31fae8u: goto label_31fae8;
        case 0x31faecu: goto label_31faec;
        case 0x31faf0u: goto label_31faf0;
        case 0x31faf4u: goto label_31faf4;
        case 0x31faf8u: goto label_31faf8;
        case 0x31fafcu: goto label_31fafc;
        case 0x31fb00u: goto label_31fb00;
        case 0x31fb04u: goto label_31fb04;
        case 0x31fb08u: goto label_31fb08;
        case 0x31fb0cu: goto label_31fb0c;
        case 0x31fb10u: goto label_31fb10;
        case 0x31fb14u: goto label_31fb14;
        case 0x31fb18u: goto label_31fb18;
        case 0x31fb1cu: goto label_31fb1c;
        case 0x31fb20u: goto label_31fb20;
        case 0x31fb24u: goto label_31fb24;
        case 0x31fb28u: goto label_31fb28;
        case 0x31fb2cu: goto label_31fb2c;
        case 0x31fb30u: goto label_31fb30;
        case 0x31fb34u: goto label_31fb34;
        case 0x31fb38u: goto label_31fb38;
        case 0x31fb3cu: goto label_31fb3c;
        case 0x31fb40u: goto label_31fb40;
        case 0x31fb44u: goto label_31fb44;
        case 0x31fb48u: goto label_31fb48;
        case 0x31fb4cu: goto label_31fb4c;
        case 0x31fb50u: goto label_31fb50;
        case 0x31fb54u: goto label_31fb54;
        case 0x31fb58u: goto label_31fb58;
        case 0x31fb5cu: goto label_31fb5c;
        case 0x31fb60u: goto label_31fb60;
        case 0x31fb64u: goto label_31fb64;
        case 0x31fb68u: goto label_31fb68;
        case 0x31fb6cu: goto label_31fb6c;
        case 0x31fb70u: goto label_31fb70;
        case 0x31fb74u: goto label_31fb74;
        case 0x31fb78u: goto label_31fb78;
        case 0x31fb7cu: goto label_31fb7c;
        case 0x31fb80u: goto label_31fb80;
        case 0x31fb84u: goto label_31fb84;
        case 0x31fb88u: goto label_31fb88;
        case 0x31fb8cu: goto label_31fb8c;
        case 0x31fb90u: goto label_31fb90;
        case 0x31fb94u: goto label_31fb94;
        case 0x31fb98u: goto label_31fb98;
        case 0x31fb9cu: goto label_31fb9c;
        case 0x31fba0u: goto label_31fba0;
        case 0x31fba4u: goto label_31fba4;
        case 0x31fba8u: goto label_31fba8;
        case 0x31fbacu: goto label_31fbac;
        case 0x31fbb0u: goto label_31fbb0;
        case 0x31fbb4u: goto label_31fbb4;
        case 0x31fbb8u: goto label_31fbb8;
        case 0x31fbbcu: goto label_31fbbc;
        case 0x31fbc0u: goto label_31fbc0;
        case 0x31fbc4u: goto label_31fbc4;
        case 0x31fbc8u: goto label_31fbc8;
        case 0x31fbccu: goto label_31fbcc;
        case 0x31fbd0u: goto label_31fbd0;
        case 0x31fbd4u: goto label_31fbd4;
        case 0x31fbd8u: goto label_31fbd8;
        case 0x31fbdcu: goto label_31fbdc;
        case 0x31fbe0u: goto label_31fbe0;
        case 0x31fbe4u: goto label_31fbe4;
        case 0x31fbe8u: goto label_31fbe8;
        case 0x31fbecu: goto label_31fbec;
        case 0x31fbf0u: goto label_31fbf0;
        case 0x31fbf4u: goto label_31fbf4;
        case 0x31fbf8u: goto label_31fbf8;
        case 0x31fbfcu: goto label_31fbfc;
        case 0x31fc00u: goto label_31fc00;
        case 0x31fc04u: goto label_31fc04;
        case 0x31fc08u: goto label_31fc08;
        case 0x31fc0cu: goto label_31fc0c;
        case 0x31fc10u: goto label_31fc10;
        case 0x31fc14u: goto label_31fc14;
        case 0x31fc18u: goto label_31fc18;
        case 0x31fc1cu: goto label_31fc1c;
        case 0x31fc20u: goto label_31fc20;
        case 0x31fc24u: goto label_31fc24;
        case 0x31fc28u: goto label_31fc28;
        case 0x31fc2cu: goto label_31fc2c;
        case 0x31fc30u: goto label_31fc30;
        case 0x31fc34u: goto label_31fc34;
        case 0x31fc38u: goto label_31fc38;
        case 0x31fc3cu: goto label_31fc3c;
        case 0x31fc40u: goto label_31fc40;
        case 0x31fc44u: goto label_31fc44;
        case 0x31fc48u: goto label_31fc48;
        case 0x31fc4cu: goto label_31fc4c;
        case 0x31fc50u: goto label_31fc50;
        case 0x31fc54u: goto label_31fc54;
        case 0x31fc58u: goto label_31fc58;
        case 0x31fc5cu: goto label_31fc5c;
        case 0x31fc60u: goto label_31fc60;
        case 0x31fc64u: goto label_31fc64;
        case 0x31fc68u: goto label_31fc68;
        case 0x31fc6cu: goto label_31fc6c;
        case 0x31fc70u: goto label_31fc70;
        case 0x31fc74u: goto label_31fc74;
        case 0x31fc78u: goto label_31fc78;
        case 0x31fc7cu: goto label_31fc7c;
        case 0x31fc80u: goto label_31fc80;
        case 0x31fc84u: goto label_31fc84;
        case 0x31fc88u: goto label_31fc88;
        case 0x31fc8cu: goto label_31fc8c;
        case 0x31fc90u: goto label_31fc90;
        case 0x31fc94u: goto label_31fc94;
        case 0x31fc98u: goto label_31fc98;
        case 0x31fc9cu: goto label_31fc9c;
        case 0x31fca0u: goto label_31fca0;
        case 0x31fca4u: goto label_31fca4;
        case 0x31fca8u: goto label_31fca8;
        case 0x31fcacu: goto label_31fcac;
        case 0x31fcb0u: goto label_31fcb0;
        case 0x31fcb4u: goto label_31fcb4;
        case 0x31fcb8u: goto label_31fcb8;
        case 0x31fcbcu: goto label_31fcbc;
        case 0x31fcc0u: goto label_31fcc0;
        case 0x31fcc4u: goto label_31fcc4;
        case 0x31fcc8u: goto label_31fcc8;
        case 0x31fcccu: goto label_31fccc;
        case 0x31fcd0u: goto label_31fcd0;
        case 0x31fcd4u: goto label_31fcd4;
        case 0x31fcd8u: goto label_31fcd8;
        case 0x31fcdcu: goto label_31fcdc;
        case 0x31fce0u: goto label_31fce0;
        case 0x31fce4u: goto label_31fce4;
        case 0x31fce8u: goto label_31fce8;
        case 0x31fcecu: goto label_31fcec;
        case 0x31fcf0u: goto label_31fcf0;
        case 0x31fcf4u: goto label_31fcf4;
        case 0x31fcf8u: goto label_31fcf8;
        case 0x31fcfcu: goto label_31fcfc;
        case 0x31fd00u: goto label_31fd00;
        case 0x31fd04u: goto label_31fd04;
        case 0x31fd08u: goto label_31fd08;
        case 0x31fd0cu: goto label_31fd0c;
        case 0x31fd10u: goto label_31fd10;
        case 0x31fd14u: goto label_31fd14;
        case 0x31fd18u: goto label_31fd18;
        case 0x31fd1cu: goto label_31fd1c;
        case 0x31fd20u: goto label_31fd20;
        case 0x31fd24u: goto label_31fd24;
        case 0x31fd28u: goto label_31fd28;
        case 0x31fd2cu: goto label_31fd2c;
        case 0x31fd30u: goto label_31fd30;
        case 0x31fd34u: goto label_31fd34;
        case 0x31fd38u: goto label_31fd38;
        case 0x31fd3cu: goto label_31fd3c;
        case 0x31fd40u: goto label_31fd40;
        case 0x31fd44u: goto label_31fd44;
        case 0x31fd48u: goto label_31fd48;
        case 0x31fd4cu: goto label_31fd4c;
        case 0x31fd50u: goto label_31fd50;
        case 0x31fd54u: goto label_31fd54;
        case 0x31fd58u: goto label_31fd58;
        case 0x31fd5cu: goto label_31fd5c;
        case 0x31fd60u: goto label_31fd60;
        case 0x31fd64u: goto label_31fd64;
        case 0x31fd68u: goto label_31fd68;
        case 0x31fd6cu: goto label_31fd6c;
        case 0x31fd70u: goto label_31fd70;
        case 0x31fd74u: goto label_31fd74;
        case 0x31fd78u: goto label_31fd78;
        case 0x31fd7cu: goto label_31fd7c;
        case 0x31fd80u: goto label_31fd80;
        case 0x31fd84u: goto label_31fd84;
        case 0x31fd88u: goto label_31fd88;
        case 0x31fd8cu: goto label_31fd8c;
        case 0x31fd90u: goto label_31fd90;
        case 0x31fd94u: goto label_31fd94;
        case 0x31fd98u: goto label_31fd98;
        case 0x31fd9cu: goto label_31fd9c;
        case 0x31fda0u: goto label_31fda0;
        case 0x31fda4u: goto label_31fda4;
        case 0x31fda8u: goto label_31fda8;
        case 0x31fdacu: goto label_31fdac;
        case 0x31fdb0u: goto label_31fdb0;
        case 0x31fdb4u: goto label_31fdb4;
        case 0x31fdb8u: goto label_31fdb8;
        case 0x31fdbcu: goto label_31fdbc;
        case 0x31fdc0u: goto label_31fdc0;
        case 0x31fdc4u: goto label_31fdc4;
        case 0x31fdc8u: goto label_31fdc8;
        case 0x31fdccu: goto label_31fdcc;
        case 0x31fdd0u: goto label_31fdd0;
        case 0x31fdd4u: goto label_31fdd4;
        case 0x31fdd8u: goto label_31fdd8;
        case 0x31fddcu: goto label_31fddc;
        case 0x31fde0u: goto label_31fde0;
        case 0x31fde4u: goto label_31fde4;
        case 0x31fde8u: goto label_31fde8;
        case 0x31fdecu: goto label_31fdec;
        case 0x31fdf0u: goto label_31fdf0;
        case 0x31fdf4u: goto label_31fdf4;
        case 0x31fdf8u: goto label_31fdf8;
        case 0x31fdfcu: goto label_31fdfc;
        case 0x31fe00u: goto label_31fe00;
        case 0x31fe04u: goto label_31fe04;
        case 0x31fe08u: goto label_31fe08;
        case 0x31fe0cu: goto label_31fe0c;
        case 0x31fe10u: goto label_31fe10;
        case 0x31fe14u: goto label_31fe14;
        case 0x31fe18u: goto label_31fe18;
        case 0x31fe1cu: goto label_31fe1c;
        case 0x31fe20u: goto label_31fe20;
        case 0x31fe24u: goto label_31fe24;
        case 0x31fe28u: goto label_31fe28;
        case 0x31fe2cu: goto label_31fe2c;
        case 0x31fe30u: goto label_31fe30;
        case 0x31fe34u: goto label_31fe34;
        case 0x31fe38u: goto label_31fe38;
        case 0x31fe3cu: goto label_31fe3c;
        case 0x31fe40u: goto label_31fe40;
        case 0x31fe44u: goto label_31fe44;
        case 0x31fe48u: goto label_31fe48;
        case 0x31fe4cu: goto label_31fe4c;
        case 0x31fe50u: goto label_31fe50;
        case 0x31fe54u: goto label_31fe54;
        case 0x31fe58u: goto label_31fe58;
        case 0x31fe5cu: goto label_31fe5c;
        case 0x31fe60u: goto label_31fe60;
        case 0x31fe64u: goto label_31fe64;
        case 0x31fe68u: goto label_31fe68;
        case 0x31fe6cu: goto label_31fe6c;
        case 0x31fe70u: goto label_31fe70;
        case 0x31fe74u: goto label_31fe74;
        case 0x31fe78u: goto label_31fe78;
        case 0x31fe7cu: goto label_31fe7c;
        case 0x31fe80u: goto label_31fe80;
        case 0x31fe84u: goto label_31fe84;
        case 0x31fe88u: goto label_31fe88;
        case 0x31fe8cu: goto label_31fe8c;
        case 0x31fe90u: goto label_31fe90;
        case 0x31fe94u: goto label_31fe94;
        case 0x31fe98u: goto label_31fe98;
        case 0x31fe9cu: goto label_31fe9c;
        case 0x31fea0u: goto label_31fea0;
        case 0x31fea4u: goto label_31fea4;
        case 0x31fea8u: goto label_31fea8;
        case 0x31feacu: goto label_31feac;
        case 0x31feb0u: goto label_31feb0;
        case 0x31feb4u: goto label_31feb4;
        case 0x31feb8u: goto label_31feb8;
        case 0x31febcu: goto label_31febc;
        case 0x31fec0u: goto label_31fec0;
        case 0x31fec4u: goto label_31fec4;
        case 0x31fec8u: goto label_31fec8;
        case 0x31feccu: goto label_31fecc;
        case 0x31fed0u: goto label_31fed0;
        case 0x31fed4u: goto label_31fed4;
        case 0x31fed8u: goto label_31fed8;
        case 0x31fedcu: goto label_31fedc;
        case 0x31fee0u: goto label_31fee0;
        case 0x31fee4u: goto label_31fee4;
        case 0x31fee8u: goto label_31fee8;
        case 0x31feecu: goto label_31feec;
        case 0x31fef0u: goto label_31fef0;
        case 0x31fef4u: goto label_31fef4;
        case 0x31fef8u: goto label_31fef8;
        case 0x31fefcu: goto label_31fefc;
        case 0x31ff00u: goto label_31ff00;
        case 0x31ff04u: goto label_31ff04;
        case 0x31ff08u: goto label_31ff08;
        case 0x31ff0cu: goto label_31ff0c;
        case 0x31ff10u: goto label_31ff10;
        case 0x31ff14u: goto label_31ff14;
        case 0x31ff18u: goto label_31ff18;
        case 0x31ff1cu: goto label_31ff1c;
        case 0x31ff20u: goto label_31ff20;
        case 0x31ff24u: goto label_31ff24;
        case 0x31ff28u: goto label_31ff28;
        case 0x31ff2cu: goto label_31ff2c;
        case 0x31ff30u: goto label_31ff30;
        case 0x31ff34u: goto label_31ff34;
        case 0x31ff38u: goto label_31ff38;
        case 0x31ff3cu: goto label_31ff3c;
        case 0x31ff40u: goto label_31ff40;
        case 0x31ff44u: goto label_31ff44;
        case 0x31ff48u: goto label_31ff48;
        case 0x31ff4cu: goto label_31ff4c;
        case 0x31ff50u: goto label_31ff50;
        case 0x31ff54u: goto label_31ff54;
        case 0x31ff58u: goto label_31ff58;
        case 0x31ff5cu: goto label_31ff5c;
        case 0x31ff60u: goto label_31ff60;
        case 0x31ff64u: goto label_31ff64;
        case 0x31ff68u: goto label_31ff68;
        case 0x31ff6cu: goto label_31ff6c;
        case 0x31ff70u: goto label_31ff70;
        case 0x31ff74u: goto label_31ff74;
        case 0x31ff78u: goto label_31ff78;
        case 0x31ff7cu: goto label_31ff7c;
        case 0x31ff80u: goto label_31ff80;
        case 0x31ff84u: goto label_31ff84;
        case 0x31ff88u: goto label_31ff88;
        case 0x31ff8cu: goto label_31ff8c;
        case 0x31ff90u: goto label_31ff90;
        case 0x31ff94u: goto label_31ff94;
        case 0x31ff98u: goto label_31ff98;
        case 0x31ff9cu: goto label_31ff9c;
        case 0x31ffa0u: goto label_31ffa0;
        case 0x31ffa4u: goto label_31ffa4;
        case 0x31ffa8u: goto label_31ffa8;
        case 0x31ffacu: goto label_31ffac;
        case 0x31ffb0u: goto label_31ffb0;
        case 0x31ffb4u: goto label_31ffb4;
        case 0x31ffb8u: goto label_31ffb8;
        case 0x31ffbcu: goto label_31ffbc;
        case 0x31ffc0u: goto label_31ffc0;
        case 0x31ffc4u: goto label_31ffc4;
        case 0x31ffc8u: goto label_31ffc8;
        case 0x31ffccu: goto label_31ffcc;
        case 0x31ffd0u: goto label_31ffd0;
        case 0x31ffd4u: goto label_31ffd4;
        case 0x31ffd8u: goto label_31ffd8;
        case 0x31ffdcu: goto label_31ffdc;
        case 0x31ffe0u: goto label_31ffe0;
        case 0x31ffe4u: goto label_31ffe4;
        case 0x31ffe8u: goto label_31ffe8;
        case 0x31ffecu: goto label_31ffec;
        case 0x31fff0u: goto label_31fff0;
        case 0x31fff4u: goto label_31fff4;
        case 0x31fff8u: goto label_31fff8;
        case 0x31fffcu: goto label_31fffc;
        case 0x320000u: goto label_320000;
        case 0x320004u: goto label_320004;
        case 0x320008u: goto label_320008;
        case 0x32000cu: goto label_32000c;
        case 0x320010u: goto label_320010;
        case 0x320014u: goto label_320014;
        case 0x320018u: goto label_320018;
        case 0x32001cu: goto label_32001c;
        case 0x320020u: goto label_320020;
        case 0x320024u: goto label_320024;
        case 0x320028u: goto label_320028;
        case 0x32002cu: goto label_32002c;
        case 0x320030u: goto label_320030;
        case 0x320034u: goto label_320034;
        case 0x320038u: goto label_320038;
        case 0x32003cu: goto label_32003c;
        case 0x320040u: goto label_320040;
        case 0x320044u: goto label_320044;
        case 0x320048u: goto label_320048;
        case 0x32004cu: goto label_32004c;
        case 0x320050u: goto label_320050;
        case 0x320054u: goto label_320054;
        case 0x320058u: goto label_320058;
        case 0x32005cu: goto label_32005c;
        case 0x320060u: goto label_320060;
        case 0x320064u: goto label_320064;
        case 0x320068u: goto label_320068;
        case 0x32006cu: goto label_32006c;
        case 0x320070u: goto label_320070;
        case 0x320074u: goto label_320074;
        case 0x320078u: goto label_320078;
        case 0x32007cu: goto label_32007c;
        case 0x320080u: goto label_320080;
        case 0x320084u: goto label_320084;
        case 0x320088u: goto label_320088;
        case 0x32008cu: goto label_32008c;
        case 0x320090u: goto label_320090;
        case 0x320094u: goto label_320094;
        case 0x320098u: goto label_320098;
        case 0x32009cu: goto label_32009c;
        case 0x3200a0u: goto label_3200a0;
        case 0x3200a4u: goto label_3200a4;
        case 0x3200a8u: goto label_3200a8;
        case 0x3200acu: goto label_3200ac;
        case 0x3200b0u: goto label_3200b0;
        case 0x3200b4u: goto label_3200b4;
        case 0x3200b8u: goto label_3200b8;
        case 0x3200bcu: goto label_3200bc;
        case 0x3200c0u: goto label_3200c0;
        case 0x3200c4u: goto label_3200c4;
        case 0x3200c8u: goto label_3200c8;
        case 0x3200ccu: goto label_3200cc;
        case 0x3200d0u: goto label_3200d0;
        case 0x3200d4u: goto label_3200d4;
        case 0x3200d8u: goto label_3200d8;
        case 0x3200dcu: goto label_3200dc;
        case 0x3200e0u: goto label_3200e0;
        case 0x3200e4u: goto label_3200e4;
        case 0x3200e8u: goto label_3200e8;
        case 0x3200ecu: goto label_3200ec;
        case 0x3200f0u: goto label_3200f0;
        case 0x3200f4u: goto label_3200f4;
        case 0x3200f8u: goto label_3200f8;
        case 0x3200fcu: goto label_3200fc;
        case 0x320100u: goto label_320100;
        case 0x320104u: goto label_320104;
        case 0x320108u: goto label_320108;
        case 0x32010cu: goto label_32010c;
        case 0x320110u: goto label_320110;
        case 0x320114u: goto label_320114;
        case 0x320118u: goto label_320118;
        case 0x32011cu: goto label_32011c;
        case 0x320120u: goto label_320120;
        case 0x320124u: goto label_320124;
        case 0x320128u: goto label_320128;
        case 0x32012cu: goto label_32012c;
        case 0x320130u: goto label_320130;
        case 0x320134u: goto label_320134;
        case 0x320138u: goto label_320138;
        case 0x32013cu: goto label_32013c;
        case 0x320140u: goto label_320140;
        case 0x320144u: goto label_320144;
        case 0x320148u: goto label_320148;
        case 0x32014cu: goto label_32014c;
        case 0x320150u: goto label_320150;
        case 0x320154u: goto label_320154;
        case 0x320158u: goto label_320158;
        case 0x32015cu: goto label_32015c;
        case 0x320160u: goto label_320160;
        case 0x320164u: goto label_320164;
        case 0x320168u: goto label_320168;
        case 0x32016cu: goto label_32016c;
        case 0x320170u: goto label_320170;
        case 0x320174u: goto label_320174;
        case 0x320178u: goto label_320178;
        case 0x32017cu: goto label_32017c;
        case 0x320180u: goto label_320180;
        case 0x320184u: goto label_320184;
        case 0x320188u: goto label_320188;
        case 0x32018cu: goto label_32018c;
        case 0x320190u: goto label_320190;
        case 0x320194u: goto label_320194;
        case 0x320198u: goto label_320198;
        case 0x32019cu: goto label_32019c;
        case 0x3201a0u: goto label_3201a0;
        case 0x3201a4u: goto label_3201a4;
        case 0x3201a8u: goto label_3201a8;
        case 0x3201acu: goto label_3201ac;
        case 0x3201b0u: goto label_3201b0;
        case 0x3201b4u: goto label_3201b4;
        case 0x3201b8u: goto label_3201b8;
        case 0x3201bcu: goto label_3201bc;
        case 0x3201c0u: goto label_3201c0;
        case 0x3201c4u: goto label_3201c4;
        case 0x3201c8u: goto label_3201c8;
        case 0x3201ccu: goto label_3201cc;
        case 0x3201d0u: goto label_3201d0;
        case 0x3201d4u: goto label_3201d4;
        case 0x3201d8u: goto label_3201d8;
        case 0x3201dcu: goto label_3201dc;
        case 0x3201e0u: goto label_3201e0;
        case 0x3201e4u: goto label_3201e4;
        case 0x3201e8u: goto label_3201e8;
        case 0x3201ecu: goto label_3201ec;
        case 0x3201f0u: goto label_3201f0;
        case 0x3201f4u: goto label_3201f4;
        case 0x3201f8u: goto label_3201f8;
        case 0x3201fcu: goto label_3201fc;
        case 0x320200u: goto label_320200;
        case 0x320204u: goto label_320204;
        case 0x320208u: goto label_320208;
        case 0x32020cu: goto label_32020c;
        case 0x320210u: goto label_320210;
        case 0x320214u: goto label_320214;
        case 0x320218u: goto label_320218;
        case 0x32021cu: goto label_32021c;
        case 0x320220u: goto label_320220;
        case 0x320224u: goto label_320224;
        case 0x320228u: goto label_320228;
        case 0x32022cu: goto label_32022c;
        case 0x320230u: goto label_320230;
        case 0x320234u: goto label_320234;
        case 0x320238u: goto label_320238;
        case 0x32023cu: goto label_32023c;
        case 0x320240u: goto label_320240;
        case 0x320244u: goto label_320244;
        case 0x320248u: goto label_320248;
        case 0x32024cu: goto label_32024c;
        case 0x320250u: goto label_320250;
        case 0x320254u: goto label_320254;
        case 0x320258u: goto label_320258;
        case 0x32025cu: goto label_32025c;
        case 0x320260u: goto label_320260;
        case 0x320264u: goto label_320264;
        case 0x320268u: goto label_320268;
        case 0x32026cu: goto label_32026c;
        case 0x320270u: goto label_320270;
        case 0x320274u: goto label_320274;
        case 0x320278u: goto label_320278;
        case 0x32027cu: goto label_32027c;
        case 0x320280u: goto label_320280;
        case 0x320284u: goto label_320284;
        case 0x320288u: goto label_320288;
        case 0x32028cu: goto label_32028c;
        case 0x320290u: goto label_320290;
        case 0x320294u: goto label_320294;
        case 0x320298u: goto label_320298;
        case 0x32029cu: goto label_32029c;
        case 0x3202a0u: goto label_3202a0;
        case 0x3202a4u: goto label_3202a4;
        case 0x3202a8u: goto label_3202a8;
        case 0x3202acu: goto label_3202ac;
        case 0x3202b0u: goto label_3202b0;
        case 0x3202b4u: goto label_3202b4;
        case 0x3202b8u: goto label_3202b8;
        case 0x3202bcu: goto label_3202bc;
        case 0x3202c0u: goto label_3202c0;
        case 0x3202c4u: goto label_3202c4;
        case 0x3202c8u: goto label_3202c8;
        case 0x3202ccu: goto label_3202cc;
        case 0x3202d0u: goto label_3202d0;
        case 0x3202d4u: goto label_3202d4;
        case 0x3202d8u: goto label_3202d8;
        case 0x3202dcu: goto label_3202dc;
        case 0x3202e0u: goto label_3202e0;
        case 0x3202e4u: goto label_3202e4;
        case 0x3202e8u: goto label_3202e8;
        case 0x3202ecu: goto label_3202ec;
        case 0x3202f0u: goto label_3202f0;
        case 0x3202f4u: goto label_3202f4;
        case 0x3202f8u: goto label_3202f8;
        case 0x3202fcu: goto label_3202fc;
        case 0x320300u: goto label_320300;
        case 0x320304u: goto label_320304;
        case 0x320308u: goto label_320308;
        case 0x32030cu: goto label_32030c;
        case 0x320310u: goto label_320310;
        case 0x320314u: goto label_320314;
        case 0x320318u: goto label_320318;
        case 0x32031cu: goto label_32031c;
        case 0x320320u: goto label_320320;
        case 0x320324u: goto label_320324;
        case 0x320328u: goto label_320328;
        case 0x32032cu: goto label_32032c;
        case 0x320330u: goto label_320330;
        case 0x320334u: goto label_320334;
        case 0x320338u: goto label_320338;
        case 0x32033cu: goto label_32033c;
        case 0x320340u: goto label_320340;
        case 0x320344u: goto label_320344;
        case 0x320348u: goto label_320348;
        case 0x32034cu: goto label_32034c;
        case 0x320350u: goto label_320350;
        case 0x320354u: goto label_320354;
        case 0x320358u: goto label_320358;
        case 0x32035cu: goto label_32035c;
        case 0x320360u: goto label_320360;
        case 0x320364u: goto label_320364;
        case 0x320368u: goto label_320368;
        case 0x32036cu: goto label_32036c;
        case 0x320370u: goto label_320370;
        case 0x320374u: goto label_320374;
        case 0x320378u: goto label_320378;
        case 0x32037cu: goto label_32037c;
        case 0x320380u: goto label_320380;
        case 0x320384u: goto label_320384;
        case 0x320388u: goto label_320388;
        case 0x32038cu: goto label_32038c;
        case 0x320390u: goto label_320390;
        case 0x320394u: goto label_320394;
        case 0x320398u: goto label_320398;
        case 0x32039cu: goto label_32039c;
        case 0x3203a0u: goto label_3203a0;
        case 0x3203a4u: goto label_3203a4;
        case 0x3203a8u: goto label_3203a8;
        case 0x3203acu: goto label_3203ac;
        case 0x3203b0u: goto label_3203b0;
        case 0x3203b4u: goto label_3203b4;
        case 0x3203b8u: goto label_3203b8;
        case 0x3203bcu: goto label_3203bc;
        case 0x3203c0u: goto label_3203c0;
        case 0x3203c4u: goto label_3203c4;
        case 0x3203c8u: goto label_3203c8;
        case 0x3203ccu: goto label_3203cc;
        case 0x3203d0u: goto label_3203d0;
        case 0x3203d4u: goto label_3203d4;
        case 0x3203d8u: goto label_3203d8;
        case 0x3203dcu: goto label_3203dc;
        case 0x3203e0u: goto label_3203e0;
        case 0x3203e4u: goto label_3203e4;
        case 0x3203e8u: goto label_3203e8;
        case 0x3203ecu: goto label_3203ec;
        case 0x3203f0u: goto label_3203f0;
        case 0x3203f4u: goto label_3203f4;
        case 0x3203f8u: goto label_3203f8;
        case 0x3203fcu: goto label_3203fc;
        case 0x320400u: goto label_320400;
        case 0x320404u: goto label_320404;
        case 0x320408u: goto label_320408;
        case 0x32040cu: goto label_32040c;
        case 0x320410u: goto label_320410;
        case 0x320414u: goto label_320414;
        case 0x320418u: goto label_320418;
        case 0x32041cu: goto label_32041c;
        case 0x320420u: goto label_320420;
        case 0x320424u: goto label_320424;
        case 0x320428u: goto label_320428;
        case 0x32042cu: goto label_32042c;
        case 0x320430u: goto label_320430;
        case 0x320434u: goto label_320434;
        case 0x320438u: goto label_320438;
        case 0x32043cu: goto label_32043c;
        case 0x320440u: goto label_320440;
        case 0x320444u: goto label_320444;
        case 0x320448u: goto label_320448;
        case 0x32044cu: goto label_32044c;
        case 0x320450u: goto label_320450;
        case 0x320454u: goto label_320454;
        case 0x320458u: goto label_320458;
        case 0x32045cu: goto label_32045c;
        case 0x320460u: goto label_320460;
        case 0x320464u: goto label_320464;
        case 0x320468u: goto label_320468;
        case 0x32046cu: goto label_32046c;
        case 0x320470u: goto label_320470;
        case 0x320474u: goto label_320474;
        case 0x320478u: goto label_320478;
        case 0x32047cu: goto label_32047c;
        case 0x320480u: goto label_320480;
        case 0x320484u: goto label_320484;
        case 0x320488u: goto label_320488;
        case 0x32048cu: goto label_32048c;
        case 0x320490u: goto label_320490;
        case 0x320494u: goto label_320494;
        case 0x320498u: goto label_320498;
        case 0x32049cu: goto label_32049c;
        case 0x3204a0u: goto label_3204a0;
        case 0x3204a4u: goto label_3204a4;
        case 0x3204a8u: goto label_3204a8;
        case 0x3204acu: goto label_3204ac;
        case 0x3204b0u: goto label_3204b0;
        case 0x3204b4u: goto label_3204b4;
        case 0x3204b8u: goto label_3204b8;
        case 0x3204bcu: goto label_3204bc;
        case 0x3204c0u: goto label_3204c0;
        case 0x3204c4u: goto label_3204c4;
        case 0x3204c8u: goto label_3204c8;
        case 0x3204ccu: goto label_3204cc;
        case 0x3204d0u: goto label_3204d0;
        case 0x3204d4u: goto label_3204d4;
        case 0x3204d8u: goto label_3204d8;
        case 0x3204dcu: goto label_3204dc;
        case 0x3204e0u: goto label_3204e0;
        case 0x3204e4u: goto label_3204e4;
        case 0x3204e8u: goto label_3204e8;
        case 0x3204ecu: goto label_3204ec;
        case 0x3204f0u: goto label_3204f0;
        case 0x3204f4u: goto label_3204f4;
        case 0x3204f8u: goto label_3204f8;
        case 0x3204fcu: goto label_3204fc;
        case 0x320500u: goto label_320500;
        case 0x320504u: goto label_320504;
        case 0x320508u: goto label_320508;
        case 0x32050cu: goto label_32050c;
        case 0x320510u: goto label_320510;
        case 0x320514u: goto label_320514;
        case 0x320518u: goto label_320518;
        case 0x32051cu: goto label_32051c;
        case 0x320520u: goto label_320520;
        case 0x320524u: goto label_320524;
        case 0x320528u: goto label_320528;
        case 0x32052cu: goto label_32052c;
        case 0x320530u: goto label_320530;
        case 0x320534u: goto label_320534;
        case 0x320538u: goto label_320538;
        case 0x32053cu: goto label_32053c;
        case 0x320540u: goto label_320540;
        case 0x320544u: goto label_320544;
        case 0x320548u: goto label_320548;
        case 0x32054cu: goto label_32054c;
        case 0x320550u: goto label_320550;
        case 0x320554u: goto label_320554;
        case 0x320558u: goto label_320558;
        case 0x32055cu: goto label_32055c;
        case 0x320560u: goto label_320560;
        case 0x320564u: goto label_320564;
        case 0x320568u: goto label_320568;
        case 0x32056cu: goto label_32056c;
        case 0x320570u: goto label_320570;
        case 0x320574u: goto label_320574;
        case 0x320578u: goto label_320578;
        case 0x32057cu: goto label_32057c;
        case 0x320580u: goto label_320580;
        case 0x320584u: goto label_320584;
        case 0x320588u: goto label_320588;
        case 0x32058cu: goto label_32058c;
        case 0x320590u: goto label_320590;
        case 0x320594u: goto label_320594;
        case 0x320598u: goto label_320598;
        case 0x32059cu: goto label_32059c;
        case 0x3205a0u: goto label_3205a0;
        case 0x3205a4u: goto label_3205a4;
        case 0x3205a8u: goto label_3205a8;
        case 0x3205acu: goto label_3205ac;
        case 0x3205b0u: goto label_3205b0;
        case 0x3205b4u: goto label_3205b4;
        case 0x3205b8u: goto label_3205b8;
        case 0x3205bcu: goto label_3205bc;
        case 0x3205c0u: goto label_3205c0;
        case 0x3205c4u: goto label_3205c4;
        case 0x3205c8u: goto label_3205c8;
        case 0x3205ccu: goto label_3205cc;
        case 0x3205d0u: goto label_3205d0;
        case 0x3205d4u: goto label_3205d4;
        case 0x3205d8u: goto label_3205d8;
        case 0x3205dcu: goto label_3205dc;
        case 0x3205e0u: goto label_3205e0;
        case 0x3205e4u: goto label_3205e4;
        case 0x3205e8u: goto label_3205e8;
        case 0x3205ecu: goto label_3205ec;
        case 0x3205f0u: goto label_3205f0;
        case 0x3205f4u: goto label_3205f4;
        case 0x3205f8u: goto label_3205f8;
        case 0x3205fcu: goto label_3205fc;
        case 0x320600u: goto label_320600;
        case 0x320604u: goto label_320604;
        case 0x320608u: goto label_320608;
        case 0x32060cu: goto label_32060c;
        case 0x320610u: goto label_320610;
        case 0x320614u: goto label_320614;
        case 0x320618u: goto label_320618;
        case 0x32061cu: goto label_32061c;
        case 0x320620u: goto label_320620;
        case 0x320624u: goto label_320624;
        case 0x320628u: goto label_320628;
        case 0x32062cu: goto label_32062c;
        case 0x320630u: goto label_320630;
        case 0x320634u: goto label_320634;
        case 0x320638u: goto label_320638;
        case 0x32063cu: goto label_32063c;
        case 0x320640u: goto label_320640;
        case 0x320644u: goto label_320644;
        case 0x320648u: goto label_320648;
        case 0x32064cu: goto label_32064c;
        case 0x320650u: goto label_320650;
        case 0x320654u: goto label_320654;
        case 0x320658u: goto label_320658;
        case 0x32065cu: goto label_32065c;
        case 0x320660u: goto label_320660;
        case 0x320664u: goto label_320664;
        case 0x320668u: goto label_320668;
        case 0x32066cu: goto label_32066c;
        case 0x320670u: goto label_320670;
        case 0x320674u: goto label_320674;
        case 0x320678u: goto label_320678;
        case 0x32067cu: goto label_32067c;
        case 0x320680u: goto label_320680;
        case 0x320684u: goto label_320684;
        case 0x320688u: goto label_320688;
        case 0x32068cu: goto label_32068c;
        case 0x320690u: goto label_320690;
        case 0x320694u: goto label_320694;
        case 0x320698u: goto label_320698;
        case 0x32069cu: goto label_32069c;
        case 0x3206a0u: goto label_3206a0;
        case 0x3206a4u: goto label_3206a4;
        case 0x3206a8u: goto label_3206a8;
        case 0x3206acu: goto label_3206ac;
        case 0x3206b0u: goto label_3206b0;
        case 0x3206b4u: goto label_3206b4;
        case 0x3206b8u: goto label_3206b8;
        case 0x3206bcu: goto label_3206bc;
        case 0x3206c0u: goto label_3206c0;
        case 0x3206c4u: goto label_3206c4;
        case 0x3206c8u: goto label_3206c8;
        case 0x3206ccu: goto label_3206cc;
        case 0x3206d0u: goto label_3206d0;
        case 0x3206d4u: goto label_3206d4;
        case 0x3206d8u: goto label_3206d8;
        case 0x3206dcu: goto label_3206dc;
        case 0x3206e0u: goto label_3206e0;
        case 0x3206e4u: goto label_3206e4;
        case 0x3206e8u: goto label_3206e8;
        case 0x3206ecu: goto label_3206ec;
        case 0x3206f0u: goto label_3206f0;
        case 0x3206f4u: goto label_3206f4;
        case 0x3206f8u: goto label_3206f8;
        case 0x3206fcu: goto label_3206fc;
        case 0x320700u: goto label_320700;
        case 0x320704u: goto label_320704;
        case 0x320708u: goto label_320708;
        case 0x32070cu: goto label_32070c;
        case 0x320710u: goto label_320710;
        case 0x320714u: goto label_320714;
        case 0x320718u: goto label_320718;
        case 0x32071cu: goto label_32071c;
        case 0x320720u: goto label_320720;
        case 0x320724u: goto label_320724;
        case 0x320728u: goto label_320728;
        case 0x32072cu: goto label_32072c;
        case 0x320730u: goto label_320730;
        case 0x320734u: goto label_320734;
        case 0x320738u: goto label_320738;
        case 0x32073cu: goto label_32073c;
        case 0x320740u: goto label_320740;
        case 0x320744u: goto label_320744;
        case 0x320748u: goto label_320748;
        case 0x32074cu: goto label_32074c;
        case 0x320750u: goto label_320750;
        case 0x320754u: goto label_320754;
        case 0x320758u: goto label_320758;
        case 0x32075cu: goto label_32075c;
        case 0x320760u: goto label_320760;
        case 0x320764u: goto label_320764;
        case 0x320768u: goto label_320768;
        case 0x32076cu: goto label_32076c;
        case 0x320770u: goto label_320770;
        case 0x320774u: goto label_320774;
        case 0x320778u: goto label_320778;
        case 0x32077cu: goto label_32077c;
        case 0x320780u: goto label_320780;
        case 0x320784u: goto label_320784;
        case 0x320788u: goto label_320788;
        case 0x32078cu: goto label_32078c;
        case 0x320790u: goto label_320790;
        case 0x320794u: goto label_320794;
        case 0x320798u: goto label_320798;
        case 0x32079cu: goto label_32079c;
        case 0x3207a0u: goto label_3207a0;
        case 0x3207a4u: goto label_3207a4;
        case 0x3207a8u: goto label_3207a8;
        case 0x3207acu: goto label_3207ac;
        case 0x3207b0u: goto label_3207b0;
        case 0x3207b4u: goto label_3207b4;
        case 0x3207b8u: goto label_3207b8;
        case 0x3207bcu: goto label_3207bc;
        case 0x3207c0u: goto label_3207c0;
        case 0x3207c4u: goto label_3207c4;
        case 0x3207c8u: goto label_3207c8;
        case 0x3207ccu: goto label_3207cc;
        case 0x3207d0u: goto label_3207d0;
        case 0x3207d4u: goto label_3207d4;
        case 0x3207d8u: goto label_3207d8;
        case 0x3207dcu: goto label_3207dc;
        case 0x3207e0u: goto label_3207e0;
        case 0x3207e4u: goto label_3207e4;
        case 0x3207e8u: goto label_3207e8;
        case 0x3207ecu: goto label_3207ec;
        case 0x3207f0u: goto label_3207f0;
        case 0x3207f4u: goto label_3207f4;
        case 0x3207f8u: goto label_3207f8;
        case 0x3207fcu: goto label_3207fc;
        case 0x320800u: goto label_320800;
        case 0x320804u: goto label_320804;
        case 0x320808u: goto label_320808;
        case 0x32080cu: goto label_32080c;
        case 0x320810u: goto label_320810;
        case 0x320814u: goto label_320814;
        case 0x320818u: goto label_320818;
        case 0x32081cu: goto label_32081c;
        case 0x320820u: goto label_320820;
        case 0x320824u: goto label_320824;
        case 0x320828u: goto label_320828;
        case 0x32082cu: goto label_32082c;
        case 0x320830u: goto label_320830;
        case 0x320834u: goto label_320834;
        case 0x320838u: goto label_320838;
        case 0x32083cu: goto label_32083c;
        case 0x320840u: goto label_320840;
        case 0x320844u: goto label_320844;
        case 0x320848u: goto label_320848;
        case 0x32084cu: goto label_32084c;
        case 0x320850u: goto label_320850;
        case 0x320854u: goto label_320854;
        case 0x320858u: goto label_320858;
        case 0x32085cu: goto label_32085c;
        case 0x320860u: goto label_320860;
        case 0x320864u: goto label_320864;
        case 0x320868u: goto label_320868;
        case 0x32086cu: goto label_32086c;
        case 0x320870u: goto label_320870;
        case 0x320874u: goto label_320874;
        case 0x320878u: goto label_320878;
        case 0x32087cu: goto label_32087c;
        case 0x320880u: goto label_320880;
        case 0x320884u: goto label_320884;
        case 0x320888u: goto label_320888;
        case 0x32088cu: goto label_32088c;
        case 0x320890u: goto label_320890;
        case 0x320894u: goto label_320894;
        case 0x320898u: goto label_320898;
        case 0x32089cu: goto label_32089c;
        case 0x3208a0u: goto label_3208a0;
        case 0x3208a4u: goto label_3208a4;
        case 0x3208a8u: goto label_3208a8;
        case 0x3208acu: goto label_3208ac;
        case 0x3208b0u: goto label_3208b0;
        case 0x3208b4u: goto label_3208b4;
        case 0x3208b8u: goto label_3208b8;
        case 0x3208bcu: goto label_3208bc;
        case 0x3208c0u: goto label_3208c0;
        case 0x3208c4u: goto label_3208c4;
        case 0x3208c8u: goto label_3208c8;
        case 0x3208ccu: goto label_3208cc;
        case 0x3208d0u: goto label_3208d0;
        case 0x3208d4u: goto label_3208d4;
        case 0x3208d8u: goto label_3208d8;
        case 0x3208dcu: goto label_3208dc;
        case 0x3208e0u: goto label_3208e0;
        case 0x3208e4u: goto label_3208e4;
        case 0x3208e8u: goto label_3208e8;
        case 0x3208ecu: goto label_3208ec;
        case 0x3208f0u: goto label_3208f0;
        case 0x3208f4u: goto label_3208f4;
        case 0x3208f8u: goto label_3208f8;
        case 0x3208fcu: goto label_3208fc;
        case 0x320900u: goto label_320900;
        case 0x320904u: goto label_320904;
        case 0x320908u: goto label_320908;
        case 0x32090cu: goto label_32090c;
        case 0x320910u: goto label_320910;
        case 0x320914u: goto label_320914;
        case 0x320918u: goto label_320918;
        case 0x32091cu: goto label_32091c;
        case 0x320920u: goto label_320920;
        case 0x320924u: goto label_320924;
        case 0x320928u: goto label_320928;
        case 0x32092cu: goto label_32092c;
        case 0x320930u: goto label_320930;
        case 0x320934u: goto label_320934;
        case 0x320938u: goto label_320938;
        case 0x32093cu: goto label_32093c;
        case 0x320940u: goto label_320940;
        case 0x320944u: goto label_320944;
        case 0x320948u: goto label_320948;
        case 0x32094cu: goto label_32094c;
        case 0x320950u: goto label_320950;
        case 0x320954u: goto label_320954;
        case 0x320958u: goto label_320958;
        case 0x32095cu: goto label_32095c;
        case 0x320960u: goto label_320960;
        case 0x320964u: goto label_320964;
        case 0x320968u: goto label_320968;
        case 0x32096cu: goto label_32096c;
        case 0x320970u: goto label_320970;
        case 0x320974u: goto label_320974;
        case 0x320978u: goto label_320978;
        case 0x32097cu: goto label_32097c;
        case 0x320980u: goto label_320980;
        case 0x320984u: goto label_320984;
        case 0x320988u: goto label_320988;
        case 0x32098cu: goto label_32098c;
        case 0x320990u: goto label_320990;
        case 0x320994u: goto label_320994;
        case 0x320998u: goto label_320998;
        case 0x32099cu: goto label_32099c;
        case 0x3209a0u: goto label_3209a0;
        case 0x3209a4u: goto label_3209a4;
        case 0x3209a8u: goto label_3209a8;
        case 0x3209acu: goto label_3209ac;
        case 0x3209b0u: goto label_3209b0;
        case 0x3209b4u: goto label_3209b4;
        case 0x3209b8u: goto label_3209b8;
        case 0x3209bcu: goto label_3209bc;
        case 0x3209c0u: goto label_3209c0;
        case 0x3209c4u: goto label_3209c4;
        case 0x3209c8u: goto label_3209c8;
        case 0x3209ccu: goto label_3209cc;
        case 0x3209d0u: goto label_3209d0;
        case 0x3209d4u: goto label_3209d4;
        case 0x3209d8u: goto label_3209d8;
        case 0x3209dcu: goto label_3209dc;
        case 0x3209e0u: goto label_3209e0;
        case 0x3209e4u: goto label_3209e4;
        case 0x3209e8u: goto label_3209e8;
        case 0x3209ecu: goto label_3209ec;
        case 0x3209f0u: goto label_3209f0;
        case 0x3209f4u: goto label_3209f4;
        case 0x3209f8u: goto label_3209f8;
        case 0x3209fcu: goto label_3209fc;
        case 0x320a00u: goto label_320a00;
        case 0x320a04u: goto label_320a04;
        case 0x320a08u: goto label_320a08;
        case 0x320a0cu: goto label_320a0c;
        case 0x320a10u: goto label_320a10;
        case 0x320a14u: goto label_320a14;
        case 0x320a18u: goto label_320a18;
        case 0x320a1cu: goto label_320a1c;
        case 0x320a20u: goto label_320a20;
        case 0x320a24u: goto label_320a24;
        case 0x320a28u: goto label_320a28;
        case 0x320a2cu: goto label_320a2c;
        case 0x320a30u: goto label_320a30;
        case 0x320a34u: goto label_320a34;
        case 0x320a38u: goto label_320a38;
        case 0x320a3cu: goto label_320a3c;
        case 0x320a40u: goto label_320a40;
        case 0x320a44u: goto label_320a44;
        case 0x320a48u: goto label_320a48;
        case 0x320a4cu: goto label_320a4c;
        case 0x320a50u: goto label_320a50;
        case 0x320a54u: goto label_320a54;
        case 0x320a58u: goto label_320a58;
        case 0x320a5cu: goto label_320a5c;
        case 0x320a60u: goto label_320a60;
        case 0x320a64u: goto label_320a64;
        case 0x320a68u: goto label_320a68;
        case 0x320a6cu: goto label_320a6c;
        case 0x320a70u: goto label_320a70;
        case 0x320a74u: goto label_320a74;
        case 0x320a78u: goto label_320a78;
        case 0x320a7cu: goto label_320a7c;
        case 0x320a80u: goto label_320a80;
        case 0x320a84u: goto label_320a84;
        case 0x320a88u: goto label_320a88;
        case 0x320a8cu: goto label_320a8c;
        case 0x320a90u: goto label_320a90;
        case 0x320a94u: goto label_320a94;
        case 0x320a98u: goto label_320a98;
        case 0x320a9cu: goto label_320a9c;
        case 0x320aa0u: goto label_320aa0;
        case 0x320aa4u: goto label_320aa4;
        case 0x320aa8u: goto label_320aa8;
        case 0x320aacu: goto label_320aac;
        case 0x320ab0u: goto label_320ab0;
        case 0x320ab4u: goto label_320ab4;
        case 0x320ab8u: goto label_320ab8;
        case 0x320abcu: goto label_320abc;
        case 0x320ac0u: goto label_320ac0;
        case 0x320ac4u: goto label_320ac4;
        case 0x320ac8u: goto label_320ac8;
        case 0x320accu: goto label_320acc;
        case 0x320ad0u: goto label_320ad0;
        case 0x320ad4u: goto label_320ad4;
        case 0x320ad8u: goto label_320ad8;
        case 0x320adcu: goto label_320adc;
        case 0x320ae0u: goto label_320ae0;
        case 0x320ae4u: goto label_320ae4;
        case 0x320ae8u: goto label_320ae8;
        case 0x320aecu: goto label_320aec;
        case 0x320af0u: goto label_320af0;
        case 0x320af4u: goto label_320af4;
        case 0x320af8u: goto label_320af8;
        case 0x320afcu: goto label_320afc;
        case 0x320b00u: goto label_320b00;
        case 0x320b04u: goto label_320b04;
        case 0x320b08u: goto label_320b08;
        case 0x320b0cu: goto label_320b0c;
        case 0x320b10u: goto label_320b10;
        case 0x320b14u: goto label_320b14;
        case 0x320b18u: goto label_320b18;
        case 0x320b1cu: goto label_320b1c;
        case 0x320b20u: goto label_320b20;
        case 0x320b24u: goto label_320b24;
        case 0x320b28u: goto label_320b28;
        case 0x320b2cu: goto label_320b2c;
        case 0x320b30u: goto label_320b30;
        case 0x320b34u: goto label_320b34;
        case 0x320b38u: goto label_320b38;
        case 0x320b3cu: goto label_320b3c;
        case 0x320b40u: goto label_320b40;
        case 0x320b44u: goto label_320b44;
        case 0x320b48u: goto label_320b48;
        case 0x320b4cu: goto label_320b4c;
        case 0x320b50u: goto label_320b50;
        case 0x320b54u: goto label_320b54;
        case 0x320b58u: goto label_320b58;
        case 0x320b5cu: goto label_320b5c;
        case 0x320b60u: goto label_320b60;
        case 0x320b64u: goto label_320b64;
        case 0x320b68u: goto label_320b68;
        case 0x320b6cu: goto label_320b6c;
        case 0x320b70u: goto label_320b70;
        case 0x320b74u: goto label_320b74;
        case 0x320b78u: goto label_320b78;
        case 0x320b7cu: goto label_320b7c;
        case 0x320b80u: goto label_320b80;
        case 0x320b84u: goto label_320b84;
        case 0x320b88u: goto label_320b88;
        case 0x320b8cu: goto label_320b8c;
        case 0x320b90u: goto label_320b90;
        case 0x320b94u: goto label_320b94;
        case 0x320b98u: goto label_320b98;
        case 0x320b9cu: goto label_320b9c;
        case 0x320ba0u: goto label_320ba0;
        case 0x320ba4u: goto label_320ba4;
        case 0x320ba8u: goto label_320ba8;
        case 0x320bacu: goto label_320bac;
        case 0x320bb0u: goto label_320bb0;
        case 0x320bb4u: goto label_320bb4;
        case 0x320bb8u: goto label_320bb8;
        case 0x320bbcu: goto label_320bbc;
        case 0x320bc0u: goto label_320bc0;
        case 0x320bc4u: goto label_320bc4;
        case 0x320bc8u: goto label_320bc8;
        case 0x320bccu: goto label_320bcc;
        case 0x320bd0u: goto label_320bd0;
        case 0x320bd4u: goto label_320bd4;
        case 0x320bd8u: goto label_320bd8;
        case 0x320bdcu: goto label_320bdc;
        case 0x320be0u: goto label_320be0;
        case 0x320be4u: goto label_320be4;
        case 0x320be8u: goto label_320be8;
        case 0x320becu: goto label_320bec;
        case 0x320bf0u: goto label_320bf0;
        case 0x320bf4u: goto label_320bf4;
        case 0x320bf8u: goto label_320bf8;
        case 0x320bfcu: goto label_320bfc;
        case 0x320c00u: goto label_320c00;
        case 0x320c04u: goto label_320c04;
        case 0x320c08u: goto label_320c08;
        case 0x320c0cu: goto label_320c0c;
        case 0x320c10u: goto label_320c10;
        case 0x320c14u: goto label_320c14;
        case 0x320c18u: goto label_320c18;
        case 0x320c1cu: goto label_320c1c;
        case 0x320c20u: goto label_320c20;
        case 0x320c24u: goto label_320c24;
        case 0x320c28u: goto label_320c28;
        case 0x320c2cu: goto label_320c2c;
        case 0x320c30u: goto label_320c30;
        case 0x320c34u: goto label_320c34;
        case 0x320c38u: goto label_320c38;
        case 0x320c3cu: goto label_320c3c;
        case 0x320c40u: goto label_320c40;
        case 0x320c44u: goto label_320c44;
        case 0x320c48u: goto label_320c48;
        case 0x320c4cu: goto label_320c4c;
        case 0x320c50u: goto label_320c50;
        case 0x320c54u: goto label_320c54;
        case 0x320c58u: goto label_320c58;
        case 0x320c5cu: goto label_320c5c;
        case 0x320c60u: goto label_320c60;
        case 0x320c64u: goto label_320c64;
        case 0x320c68u: goto label_320c68;
        case 0x320c6cu: goto label_320c6c;
        case 0x320c70u: goto label_320c70;
        case 0x320c74u: goto label_320c74;
        case 0x320c78u: goto label_320c78;
        case 0x320c7cu: goto label_320c7c;
        case 0x320c80u: goto label_320c80;
        case 0x320c84u: goto label_320c84;
        case 0x320c88u: goto label_320c88;
        case 0x320c8cu: goto label_320c8c;
        case 0x320c90u: goto label_320c90;
        case 0x320c94u: goto label_320c94;
        case 0x320c98u: goto label_320c98;
        case 0x320c9cu: goto label_320c9c;
        case 0x320ca0u: goto label_320ca0;
        case 0x320ca4u: goto label_320ca4;
        case 0x320ca8u: goto label_320ca8;
        case 0x320cacu: goto label_320cac;
        case 0x320cb0u: goto label_320cb0;
        case 0x320cb4u: goto label_320cb4;
        case 0x320cb8u: goto label_320cb8;
        case 0x320cbcu: goto label_320cbc;
        case 0x320cc0u: goto label_320cc0;
        case 0x320cc4u: goto label_320cc4;
        case 0x320cc8u: goto label_320cc8;
        case 0x320cccu: goto label_320ccc;
        case 0x320cd0u: goto label_320cd0;
        case 0x320cd4u: goto label_320cd4;
        case 0x320cd8u: goto label_320cd8;
        case 0x320cdcu: goto label_320cdc;
        case 0x320ce0u: goto label_320ce0;
        case 0x320ce4u: goto label_320ce4;
        case 0x320ce8u: goto label_320ce8;
        case 0x320cecu: goto label_320cec;
        case 0x320cf0u: goto label_320cf0;
        case 0x320cf4u: goto label_320cf4;
        case 0x320cf8u: goto label_320cf8;
        case 0x320cfcu: goto label_320cfc;
        case 0x320d00u: goto label_320d00;
        case 0x320d04u: goto label_320d04;
        case 0x320d08u: goto label_320d08;
        case 0x320d0cu: goto label_320d0c;
        case 0x320d10u: goto label_320d10;
        case 0x320d14u: goto label_320d14;
        case 0x320d18u: goto label_320d18;
        case 0x320d1cu: goto label_320d1c;
        case 0x320d20u: goto label_320d20;
        case 0x320d24u: goto label_320d24;
        case 0x320d28u: goto label_320d28;
        case 0x320d2cu: goto label_320d2c;
        case 0x320d30u: goto label_320d30;
        case 0x320d34u: goto label_320d34;
        case 0x320d38u: goto label_320d38;
        case 0x320d3cu: goto label_320d3c;
        case 0x320d40u: goto label_320d40;
        case 0x320d44u: goto label_320d44;
        case 0x320d48u: goto label_320d48;
        case 0x320d4cu: goto label_320d4c;
        case 0x320d50u: goto label_320d50;
        case 0x320d54u: goto label_320d54;
        case 0x320d58u: goto label_320d58;
        case 0x320d5cu: goto label_320d5c;
        case 0x320d60u: goto label_320d60;
        case 0x320d64u: goto label_320d64;
        case 0x320d68u: goto label_320d68;
        case 0x320d6cu: goto label_320d6c;
        case 0x320d70u: goto label_320d70;
        case 0x320d74u: goto label_320d74;
        case 0x320d78u: goto label_320d78;
        case 0x320d7cu: goto label_320d7c;
        case 0x320d80u: goto label_320d80;
        case 0x320d84u: goto label_320d84;
        case 0x320d88u: goto label_320d88;
        case 0x320d8cu: goto label_320d8c;
        case 0x320d90u: goto label_320d90;
        case 0x320d94u: goto label_320d94;
        case 0x320d98u: goto label_320d98;
        case 0x320d9cu: goto label_320d9c;
        case 0x320da0u: goto label_320da0;
        case 0x320da4u: goto label_320da4;
        case 0x320da8u: goto label_320da8;
        case 0x320dacu: goto label_320dac;
        case 0x320db0u: goto label_320db0;
        case 0x320db4u: goto label_320db4;
        case 0x320db8u: goto label_320db8;
        case 0x320dbcu: goto label_320dbc;
        case 0x320dc0u: goto label_320dc0;
        case 0x320dc4u: goto label_320dc4;
        case 0x320dc8u: goto label_320dc8;
        case 0x320dccu: goto label_320dcc;
        case 0x320dd0u: goto label_320dd0;
        case 0x320dd4u: goto label_320dd4;
        case 0x320dd8u: goto label_320dd8;
        case 0x320ddcu: goto label_320ddc;
        case 0x320de0u: goto label_320de0;
        case 0x320de4u: goto label_320de4;
        case 0x320de8u: goto label_320de8;
        case 0x320decu: goto label_320dec;
        case 0x320df0u: goto label_320df0;
        case 0x320df4u: goto label_320df4;
        case 0x320df8u: goto label_320df8;
        case 0x320dfcu: goto label_320dfc;
        case 0x320e00u: goto label_320e00;
        case 0x320e04u: goto label_320e04;
        case 0x320e08u: goto label_320e08;
        case 0x320e0cu: goto label_320e0c;
        case 0x320e10u: goto label_320e10;
        case 0x320e14u: goto label_320e14;
        case 0x320e18u: goto label_320e18;
        case 0x320e1cu: goto label_320e1c;
        case 0x320e20u: goto label_320e20;
        case 0x320e24u: goto label_320e24;
        case 0x320e28u: goto label_320e28;
        case 0x320e2cu: goto label_320e2c;
        case 0x320e30u: goto label_320e30;
        case 0x320e34u: goto label_320e34;
        case 0x320e38u: goto label_320e38;
        case 0x320e3cu: goto label_320e3c;
        case 0x320e40u: goto label_320e40;
        case 0x320e44u: goto label_320e44;
        case 0x320e48u: goto label_320e48;
        case 0x320e4cu: goto label_320e4c;
        case 0x320e50u: goto label_320e50;
        case 0x320e54u: goto label_320e54;
        case 0x320e58u: goto label_320e58;
        case 0x320e5cu: goto label_320e5c;
        case 0x320e60u: goto label_320e60;
        case 0x320e64u: goto label_320e64;
        case 0x320e68u: goto label_320e68;
        case 0x320e6cu: goto label_320e6c;
        case 0x320e70u: goto label_320e70;
        case 0x320e74u: goto label_320e74;
        case 0x320e78u: goto label_320e78;
        case 0x320e7cu: goto label_320e7c;
        case 0x320e80u: goto label_320e80;
        case 0x320e84u: goto label_320e84;
        case 0x320e88u: goto label_320e88;
        case 0x320e8cu: goto label_320e8c;
        case 0x320e90u: goto label_320e90;
        case 0x320e94u: goto label_320e94;
        case 0x320e98u: goto label_320e98;
        case 0x320e9cu: goto label_320e9c;
        case 0x320ea0u: goto label_320ea0;
        case 0x320ea4u: goto label_320ea4;
        case 0x320ea8u: goto label_320ea8;
        case 0x320eacu: goto label_320eac;
        case 0x320eb0u: goto label_320eb0;
        case 0x320eb4u: goto label_320eb4;
        case 0x320eb8u: goto label_320eb8;
        case 0x320ebcu: goto label_320ebc;
        case 0x320ec0u: goto label_320ec0;
        case 0x320ec4u: goto label_320ec4;
        case 0x320ec8u: goto label_320ec8;
        case 0x320eccu: goto label_320ecc;
        case 0x320ed0u: goto label_320ed0;
        case 0x320ed4u: goto label_320ed4;
        case 0x320ed8u: goto label_320ed8;
        case 0x320edcu: goto label_320edc;
        case 0x320ee0u: goto label_320ee0;
        case 0x320ee4u: goto label_320ee4;
        case 0x320ee8u: goto label_320ee8;
        case 0x320eecu: goto label_320eec;
        case 0x320ef0u: goto label_320ef0;
        case 0x320ef4u: goto label_320ef4;
        case 0x320ef8u: goto label_320ef8;
        case 0x320efcu: goto label_320efc;
        case 0x320f00u: goto label_320f00;
        case 0x320f04u: goto label_320f04;
        case 0x320f08u: goto label_320f08;
        case 0x320f0cu: goto label_320f0c;
        case 0x320f10u: goto label_320f10;
        case 0x320f14u: goto label_320f14;
        case 0x320f18u: goto label_320f18;
        case 0x320f1cu: goto label_320f1c;
        case 0x320f20u: goto label_320f20;
        case 0x320f24u: goto label_320f24;
        case 0x320f28u: goto label_320f28;
        case 0x320f2cu: goto label_320f2c;
        case 0x320f30u: goto label_320f30;
        case 0x320f34u: goto label_320f34;
        case 0x320f38u: goto label_320f38;
        case 0x320f3cu: goto label_320f3c;
        case 0x320f40u: goto label_320f40;
        case 0x320f44u: goto label_320f44;
        case 0x320f48u: goto label_320f48;
        case 0x320f4cu: goto label_320f4c;
        case 0x320f50u: goto label_320f50;
        case 0x320f54u: goto label_320f54;
        case 0x320f58u: goto label_320f58;
        case 0x320f5cu: goto label_320f5c;
        case 0x320f60u: goto label_320f60;
        case 0x320f64u: goto label_320f64;
        case 0x320f68u: goto label_320f68;
        case 0x320f6cu: goto label_320f6c;
        case 0x320f70u: goto label_320f70;
        case 0x320f74u: goto label_320f74;
        case 0x320f78u: goto label_320f78;
        case 0x320f7cu: goto label_320f7c;
        case 0x320f80u: goto label_320f80;
        case 0x320f84u: goto label_320f84;
        case 0x320f88u: goto label_320f88;
        case 0x320f8cu: goto label_320f8c;
        case 0x320f90u: goto label_320f90;
        case 0x320f94u: goto label_320f94;
        case 0x320f98u: goto label_320f98;
        case 0x320f9cu: goto label_320f9c;
        case 0x320fa0u: goto label_320fa0;
        case 0x320fa4u: goto label_320fa4;
        case 0x320fa8u: goto label_320fa8;
        case 0x320facu: goto label_320fac;
        case 0x320fb0u: goto label_320fb0;
        case 0x320fb4u: goto label_320fb4;
        case 0x320fb8u: goto label_320fb8;
        case 0x320fbcu: goto label_320fbc;
        case 0x320fc0u: goto label_320fc0;
        case 0x320fc4u: goto label_320fc4;
        case 0x320fc8u: goto label_320fc8;
        case 0x320fccu: goto label_320fcc;
        case 0x320fd0u: goto label_320fd0;
        case 0x320fd4u: goto label_320fd4;
        case 0x320fd8u: goto label_320fd8;
        case 0x320fdcu: goto label_320fdc;
        case 0x320fe0u: goto label_320fe0;
        case 0x320fe4u: goto label_320fe4;
        case 0x320fe8u: goto label_320fe8;
        case 0x320fecu: goto label_320fec;
        case 0x320ff0u: goto label_320ff0;
        case 0x320ff4u: goto label_320ff4;
        case 0x320ff8u: goto label_320ff8;
        case 0x320ffcu: goto label_320ffc;
        case 0x321000u: goto label_321000;
        case 0x321004u: goto label_321004;
        case 0x321008u: goto label_321008;
        case 0x32100cu: goto label_32100c;
        case 0x321010u: goto label_321010;
        case 0x321014u: goto label_321014;
        case 0x321018u: goto label_321018;
        case 0x32101cu: goto label_32101c;
        case 0x321020u: goto label_321020;
        case 0x321024u: goto label_321024;
        case 0x321028u: goto label_321028;
        case 0x32102cu: goto label_32102c;
        case 0x321030u: goto label_321030;
        case 0x321034u: goto label_321034;
        case 0x321038u: goto label_321038;
        case 0x32103cu: goto label_32103c;
        case 0x321040u: goto label_321040;
        case 0x321044u: goto label_321044;
        case 0x321048u: goto label_321048;
        case 0x32104cu: goto label_32104c;
        case 0x321050u: goto label_321050;
        case 0x321054u: goto label_321054;
        case 0x321058u: goto label_321058;
        case 0x32105cu: goto label_32105c;
        case 0x321060u: goto label_321060;
        case 0x321064u: goto label_321064;
        case 0x321068u: goto label_321068;
        case 0x32106cu: goto label_32106c;
        case 0x321070u: goto label_321070;
        case 0x321074u: goto label_321074;
        case 0x321078u: goto label_321078;
        case 0x32107cu: goto label_32107c;
        case 0x321080u: goto label_321080;
        case 0x321084u: goto label_321084;
        case 0x321088u: goto label_321088;
        case 0x32108cu: goto label_32108c;
        case 0x321090u: goto label_321090;
        case 0x321094u: goto label_321094;
        case 0x321098u: goto label_321098;
        case 0x32109cu: goto label_32109c;
        case 0x3210a0u: goto label_3210a0;
        case 0x3210a4u: goto label_3210a4;
        case 0x3210a8u: goto label_3210a8;
        case 0x3210acu: goto label_3210ac;
        case 0x3210b0u: goto label_3210b0;
        case 0x3210b4u: goto label_3210b4;
        case 0x3210b8u: goto label_3210b8;
        case 0x3210bcu: goto label_3210bc;
        case 0x3210c0u: goto label_3210c0;
        case 0x3210c4u: goto label_3210c4;
        case 0x3210c8u: goto label_3210c8;
        case 0x3210ccu: goto label_3210cc;
        case 0x3210d0u: goto label_3210d0;
        case 0x3210d4u: goto label_3210d4;
        case 0x3210d8u: goto label_3210d8;
        case 0x3210dcu: goto label_3210dc;
        case 0x3210e0u: goto label_3210e0;
        case 0x3210e4u: goto label_3210e4;
        case 0x3210e8u: goto label_3210e8;
        case 0x3210ecu: goto label_3210ec;
        case 0x3210f0u: goto label_3210f0;
        case 0x3210f4u: goto label_3210f4;
        case 0x3210f8u: goto label_3210f8;
        case 0x3210fcu: goto label_3210fc;
        case 0x321100u: goto label_321100;
        case 0x321104u: goto label_321104;
        case 0x321108u: goto label_321108;
        case 0x32110cu: goto label_32110c;
        case 0x321110u: goto label_321110;
        case 0x321114u: goto label_321114;
        case 0x321118u: goto label_321118;
        case 0x32111cu: goto label_32111c;
        case 0x321120u: goto label_321120;
        case 0x321124u: goto label_321124;
        case 0x321128u: goto label_321128;
        case 0x32112cu: goto label_32112c;
        case 0x321130u: goto label_321130;
        case 0x321134u: goto label_321134;
        case 0x321138u: goto label_321138;
        case 0x32113cu: goto label_32113c;
        case 0x321140u: goto label_321140;
        case 0x321144u: goto label_321144;
        case 0x321148u: goto label_321148;
        case 0x32114cu: goto label_32114c;
        case 0x321150u: goto label_321150;
        case 0x321154u: goto label_321154;
        case 0x321158u: goto label_321158;
        case 0x32115cu: goto label_32115c;
        case 0x321160u: goto label_321160;
        case 0x321164u: goto label_321164;
        case 0x321168u: goto label_321168;
        case 0x32116cu: goto label_32116c;
        case 0x321170u: goto label_321170;
        case 0x321174u: goto label_321174;
        case 0x321178u: goto label_321178;
        case 0x32117cu: goto label_32117c;
        case 0x321180u: goto label_321180;
        case 0x321184u: goto label_321184;
        case 0x321188u: goto label_321188;
        case 0x32118cu: goto label_32118c;
        case 0x321190u: goto label_321190;
        case 0x321194u: goto label_321194;
        case 0x321198u: goto label_321198;
        case 0x32119cu: goto label_32119c;
        case 0x3211a0u: goto label_3211a0;
        case 0x3211a4u: goto label_3211a4;
        case 0x3211a8u: goto label_3211a8;
        case 0x3211acu: goto label_3211ac;
        case 0x3211b0u: goto label_3211b0;
        case 0x3211b4u: goto label_3211b4;
        case 0x3211b8u: goto label_3211b8;
        case 0x3211bcu: goto label_3211bc;
        case 0x3211c0u: goto label_3211c0;
        case 0x3211c4u: goto label_3211c4;
        case 0x3211c8u: goto label_3211c8;
        case 0x3211ccu: goto label_3211cc;
        case 0x3211d0u: goto label_3211d0;
        case 0x3211d4u: goto label_3211d4;
        case 0x3211d8u: goto label_3211d8;
        case 0x3211dcu: goto label_3211dc;
        case 0x3211e0u: goto label_3211e0;
        case 0x3211e4u: goto label_3211e4;
        case 0x3211e8u: goto label_3211e8;
        case 0x3211ecu: goto label_3211ec;
        case 0x3211f0u: goto label_3211f0;
        case 0x3211f4u: goto label_3211f4;
        case 0x3211f8u: goto label_3211f8;
        case 0x3211fcu: goto label_3211fc;
        case 0x321200u: goto label_321200;
        case 0x321204u: goto label_321204;
        case 0x321208u: goto label_321208;
        case 0x32120cu: goto label_32120c;
        case 0x321210u: goto label_321210;
        case 0x321214u: goto label_321214;
        case 0x321218u: goto label_321218;
        case 0x32121cu: goto label_32121c;
        case 0x321220u: goto label_321220;
        case 0x321224u: goto label_321224;
        case 0x321228u: goto label_321228;
        case 0x32122cu: goto label_32122c;
        case 0x321230u: goto label_321230;
        case 0x321234u: goto label_321234;
        case 0x321238u: goto label_321238;
        case 0x32123cu: goto label_32123c;
        case 0x321240u: goto label_321240;
        case 0x321244u: goto label_321244;
        case 0x321248u: goto label_321248;
        case 0x32124cu: goto label_32124c;
        case 0x321250u: goto label_321250;
        case 0x321254u: goto label_321254;
        case 0x321258u: goto label_321258;
        case 0x32125cu: goto label_32125c;
        case 0x321260u: goto label_321260;
        case 0x321264u: goto label_321264;
        case 0x321268u: goto label_321268;
        case 0x32126cu: goto label_32126c;
        case 0x321270u: goto label_321270;
        case 0x321274u: goto label_321274;
        case 0x321278u: goto label_321278;
        case 0x32127cu: goto label_32127c;
        case 0x321280u: goto label_321280;
        case 0x321284u: goto label_321284;
        case 0x321288u: goto label_321288;
        case 0x32128cu: goto label_32128c;
        case 0x321290u: goto label_321290;
        case 0x321294u: goto label_321294;
        case 0x321298u: goto label_321298;
        case 0x32129cu: goto label_32129c;
        case 0x3212a0u: goto label_3212a0;
        case 0x3212a4u: goto label_3212a4;
        case 0x3212a8u: goto label_3212a8;
        case 0x3212acu: goto label_3212ac;
        case 0x3212b0u: goto label_3212b0;
        case 0x3212b4u: goto label_3212b4;
        case 0x3212b8u: goto label_3212b8;
        case 0x3212bcu: goto label_3212bc;
        case 0x3212c0u: goto label_3212c0;
        case 0x3212c4u: goto label_3212c4;
        case 0x3212c8u: goto label_3212c8;
        case 0x3212ccu: goto label_3212cc;
        case 0x3212d0u: goto label_3212d0;
        case 0x3212d4u: goto label_3212d4;
        case 0x3212d8u: goto label_3212d8;
        case 0x3212dcu: goto label_3212dc;
        case 0x3212e0u: goto label_3212e0;
        case 0x3212e4u: goto label_3212e4;
        case 0x3212e8u: goto label_3212e8;
        case 0x3212ecu: goto label_3212ec;
        case 0x3212f0u: goto label_3212f0;
        case 0x3212f4u: goto label_3212f4;
        case 0x3212f8u: goto label_3212f8;
        case 0x3212fcu: goto label_3212fc;
        case 0x321300u: goto label_321300;
        case 0x321304u: goto label_321304;
        case 0x321308u: goto label_321308;
        case 0x32130cu: goto label_32130c;
        case 0x321310u: goto label_321310;
        case 0x321314u: goto label_321314;
        case 0x321318u: goto label_321318;
        case 0x32131cu: goto label_32131c;
        case 0x321320u: goto label_321320;
        case 0x321324u: goto label_321324;
        case 0x321328u: goto label_321328;
        case 0x32132cu: goto label_32132c;
        case 0x321330u: goto label_321330;
        case 0x321334u: goto label_321334;
        case 0x321338u: goto label_321338;
        case 0x32133cu: goto label_32133c;
        case 0x321340u: goto label_321340;
        case 0x321344u: goto label_321344;
        case 0x321348u: goto label_321348;
        case 0x32134cu: goto label_32134c;
        case 0x321350u: goto label_321350;
        case 0x321354u: goto label_321354;
        case 0x321358u: goto label_321358;
        case 0x32135cu: goto label_32135c;
        case 0x321360u: goto label_321360;
        case 0x321364u: goto label_321364;
        case 0x321368u: goto label_321368;
        case 0x32136cu: goto label_32136c;
        case 0x321370u: goto label_321370;
        case 0x321374u: goto label_321374;
        case 0x321378u: goto label_321378;
        case 0x32137cu: goto label_32137c;
        case 0x321380u: goto label_321380;
        case 0x321384u: goto label_321384;
        case 0x321388u: goto label_321388;
        case 0x32138cu: goto label_32138c;
        case 0x321390u: goto label_321390;
        case 0x321394u: goto label_321394;
        case 0x321398u: goto label_321398;
        case 0x32139cu: goto label_32139c;
        case 0x3213a0u: goto label_3213a0;
        case 0x3213a4u: goto label_3213a4;
        case 0x3213a8u: goto label_3213a8;
        case 0x3213acu: goto label_3213ac;
        case 0x3213b0u: goto label_3213b0;
        case 0x3213b4u: goto label_3213b4;
        case 0x3213b8u: goto label_3213b8;
        case 0x3213bcu: goto label_3213bc;
        case 0x3213c0u: goto label_3213c0;
        case 0x3213c4u: goto label_3213c4;
        case 0x3213c8u: goto label_3213c8;
        case 0x3213ccu: goto label_3213cc;
        case 0x3213d0u: goto label_3213d0;
        case 0x3213d4u: goto label_3213d4;
        case 0x3213d8u: goto label_3213d8;
        case 0x3213dcu: goto label_3213dc;
        case 0x3213e0u: goto label_3213e0;
        case 0x3213e4u: goto label_3213e4;
        case 0x3213e8u: goto label_3213e8;
        case 0x3213ecu: goto label_3213ec;
        case 0x3213f0u: goto label_3213f0;
        case 0x3213f4u: goto label_3213f4;
        case 0x3213f8u: goto label_3213f8;
        case 0x3213fcu: goto label_3213fc;
        case 0x321400u: goto label_321400;
        case 0x321404u: goto label_321404;
        case 0x321408u: goto label_321408;
        case 0x32140cu: goto label_32140c;
        case 0x321410u: goto label_321410;
        case 0x321414u: goto label_321414;
        case 0x321418u: goto label_321418;
        case 0x32141cu: goto label_32141c;
        case 0x321420u: goto label_321420;
        case 0x321424u: goto label_321424;
        case 0x321428u: goto label_321428;
        case 0x32142cu: goto label_32142c;
        case 0x321430u: goto label_321430;
        case 0x321434u: goto label_321434;
        case 0x321438u: goto label_321438;
        case 0x32143cu: goto label_32143c;
        default: break;
    }

    ctx->pc = 0x31edd0u;

label_31edd0:
    // 0x31edd0: 0x27bdfb10  addiu       $sp, $sp, -0x4F0
    ctx->pc = 0x31edd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966032));
label_31edd4:
    // 0x31edd4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x31edd4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_31edd8:
    // 0x31edd8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x31edd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_31eddc:
    // 0x31eddc: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x31eddcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_31ede0:
    // 0x31ede0: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x31ede0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_31ede4:
    // 0x31ede4: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x31ede4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_31ede8:
    // 0x31ede8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x31ede8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_31edec:
    // 0x31edec: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x31edecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_31edf0:
    // 0x31edf0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x31edf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_31edf4:
    // 0x31edf4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x31edf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_31edf8:
    // 0x31edf8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x31edf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_31edfc:
    // 0x31edfc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x31edfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_31ee00:
    // 0x31ee00: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x31ee00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_31ee04:
    // 0x31ee04: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x31ee04u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_31ee08:
    // 0x31ee08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x31ee08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_31ee0c:
    // 0x31ee0c: 0x24500234  addiu       $s0, $v0, 0x234
    ctx->pc = 0x31ee0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 564));
label_31ee10:
    // 0x31ee10: 0xafa401f8  sw          $a0, 0x1F8($sp)
    ctx->pc = 0x31ee10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 504), GPR_U32(ctx, 4));
label_31ee14:
    // 0x31ee14: 0x8c620ec8  lw          $v0, 0xEC8($v1)
    ctx->pc = 0x31ee14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3784)));
label_31ee18:
    // 0x31ee18: 0x8c840238  lw          $a0, 0x238($a0)
    ctx->pc = 0x31ee18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 568)));
label_31ee1c:
    // 0x31ee1c: 0x8c540008  lw          $s4, 0x8($v0)
    ctx->pc = 0x31ee1cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_31ee20:
    // 0x31ee20: 0xc123328  jal         func_48CCA0
label_31ee24:
    if (ctx->pc == 0x31EE24u) {
        ctx->pc = 0x31EE24u;
            // 0x31ee24: 0xafa701fc  sw          $a3, 0x1FC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 508), GPR_U32(ctx, 7));
        ctx->pc = 0x31EE28u;
        goto label_31ee28;
    }
    ctx->pc = 0x31EE20u;
    SET_GPR_U32(ctx, 31, 0x31EE28u);
    ctx->pc = 0x31EE24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31EE20u;
            // 0x31ee24: 0xafa701fc  sw          $a3, 0x1FC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 508), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CCA0u;
    if (runtime->hasFunction(0x48CCA0u)) {
        auto targetFn = runtime->lookupFunction(0x48CCA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31EE28u; }
        if (ctx->pc != 0x31EE28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CCA0_0x48cca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31EE28u; }
        if (ctx->pc != 0x31EE28u) { return; }
    }
    ctx->pc = 0x31EE28u;
label_31ee28:
    // 0x31ee28: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x31ee28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_31ee2c:
    // 0x31ee2c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x31ee2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31ee30:
    // 0x31ee30: 0xc123328  jal         func_48CCA0
label_31ee34:
    if (ctx->pc == 0x31EE34u) {
        ctx->pc = 0x31EE34u;
            // 0x31ee34: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x31EE38u;
        goto label_31ee38;
    }
    ctx->pc = 0x31EE30u;
    SET_GPR_U32(ctx, 31, 0x31EE38u);
    ctx->pc = 0x31EE34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31EE30u;
            // 0x31ee34: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CCA0u;
    if (runtime->hasFunction(0x48CCA0u)) {
        auto targetFn = runtime->lookupFunction(0x48CCA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31EE38u; }
        if (ctx->pc != 0x31EE38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CCA0_0x48cca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31EE38u; }
        if (ctx->pc != 0x31EE38u) { return; }
    }
    ctx->pc = 0x31EE38u;
label_31ee38:
    // 0x31ee38: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x31ee38u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31ee3c:
    // 0x31ee3c: 0x56600003  bnel        $s3, $zero, . + 4 + (0x3 << 2)
label_31ee40:
    if (ctx->pc == 0x31EE40u) {
        ctx->pc = 0x31EE40u;
            // 0x31ee40: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x31EE44u;
        goto label_31ee44;
    }
    ctx->pc = 0x31EE3Cu;
    {
        const bool branch_taken_0x31ee3c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x31ee3c) {
            ctx->pc = 0x31EE40u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x31EE3Cu;
            // 0x31ee40: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x31EE4Cu;
            goto label_31ee4c;
        }
    }
    ctx->pc = 0x31EE44u;
label_31ee44:
    // 0x31ee44: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x31ee44u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31ee48:
    // 0x31ee48: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x31ee48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_31ee4c:
    // 0x31ee4c: 0xc123328  jal         func_48CCA0
label_31ee50:
    if (ctx->pc == 0x31EE50u) {
        ctx->pc = 0x31EE50u;
            // 0x31ee50: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x31EE54u;
        goto label_31ee54;
    }
    ctx->pc = 0x31EE4Cu;
    SET_GPR_U32(ctx, 31, 0x31EE54u);
    ctx->pc = 0x31EE50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31EE4Cu;
            // 0x31ee50: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CCA0u;
    if (runtime->hasFunction(0x48CCA0u)) {
        auto targetFn = runtime->lookupFunction(0x48CCA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31EE54u; }
        if (ctx->pc != 0x31EE54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CCA0_0x48cca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31EE54u; }
        if (ctx->pc != 0x31EE54u) { return; }
    }
    ctx->pc = 0x31EE54u;
label_31ee54:
    // 0x31ee54: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x31ee54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_31ee58:
    // 0x31ee58: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x31ee58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_31ee5c:
    // 0x31ee5c: 0xc123328  jal         func_48CCA0
label_31ee60:
    if (ctx->pc == 0x31EE60u) {
        ctx->pc = 0x31EE60u;
            // 0x31ee60: 0x7fa200e0  sq          $v0, 0xE0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
        ctx->pc = 0x31EE64u;
        goto label_31ee64;
    }
    ctx->pc = 0x31EE5Cu;
    SET_GPR_U32(ctx, 31, 0x31EE64u);
    ctx->pc = 0x31EE60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31EE5Cu;
            // 0x31ee60: 0x7fa200e0  sq          $v0, 0xE0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CCA0u;
    if (runtime->hasFunction(0x48CCA0u)) {
        auto targetFn = runtime->lookupFunction(0x48CCA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31EE64u; }
        if (ctx->pc != 0x31EE64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CCA0_0x48cca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31EE64u; }
        if (ctx->pc != 0x31EE64u) { return; }
    }
    ctx->pc = 0x31EE64u;
label_31ee64:
    // 0x31ee64: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x31ee64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_31ee68:
    // 0x31ee68: 0x1246087a  beq         $s2, $a2, . + 4 + (0x87A << 2)
label_31ee6c:
    if (ctx->pc == 0x31EE6Cu) {
        ctx->pc = 0x31EE6Cu;
            // 0x31ee6c: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x31EE70u;
        goto label_31ee70;
    }
    ctx->pc = 0x31EE68u;
    {
        const bool branch_taken_0x31ee68 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 6));
        ctx->pc = 0x31EE6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31EE68u;
            // 0x31ee6c: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ee68) {
            ctx->pc = 0x321054u;
            goto label_321054;
        }
    }
    ctx->pc = 0x31EE70u;
label_31ee70:
    // 0x31ee70: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x31ee70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_31ee74:
    // 0x31ee74: 0x5242036f  beql        $s2, $v0, . + 4 + (0x36F << 2)
label_31ee78:
    if (ctx->pc == 0x31EE78u) {
        ctx->pc = 0x31EE78u;
            // 0x31ee78: 0x32a20002  andi        $v0, $s5, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)2);
        ctx->pc = 0x31EE7Cu;
        goto label_31ee7c;
    }
    ctx->pc = 0x31EE74u;
    {
        const bool branch_taken_0x31ee74 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x31ee74) {
            ctx->pc = 0x31EE78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x31EE74u;
            // 0x31ee78: 0x32a20002  andi        $v0, $s5, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
            ctx->pc = 0x31FC34u;
            goto label_31fc34;
        }
    }
    ctx->pc = 0x31EE7Cu;
label_31ee7c:
    // 0x31ee7c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x31ee7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_31ee80:
    // 0x31ee80: 0x524402f3  beql        $s2, $a0, . + 4 + (0x2F3 << 2)
label_31ee84:
    if (ctx->pc == 0x31EE84u) {
        ctx->pc = 0x31EE84u;
            // 0x31ee84: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x31EE88u;
        goto label_31ee88;
    }
    ctx->pc = 0x31EE80u;
    {
        const bool branch_taken_0x31ee80 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 4));
        if (branch_taken_0x31ee80) {
            ctx->pc = 0x31EE84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x31EE80u;
            // 0x31ee84: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x31FA50u;
            goto label_31fa50;
        }
    }
    ctx->pc = 0x31EE88u;
label_31ee88:
    // 0x31ee88: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x31ee88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31ee8c:
    // 0x31ee8c: 0x12450038  beq         $s2, $a1, . + 4 + (0x38 << 2)
label_31ee90:
    if (ctx->pc == 0x31EE90u) {
        ctx->pc = 0x31EE94u;
        goto label_31ee94;
    }
    ctx->pc = 0x31EE8Cu;
    {
        const bool branch_taken_0x31ee8c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 5));
        if (branch_taken_0x31ee8c) {
            ctx->pc = 0x31EF70u;
            goto label_31ef70;
        }
    }
    ctx->pc = 0x31EE94u;
label_31ee94:
    // 0x31ee94: 0x52400003  beql        $s2, $zero, . + 4 + (0x3 << 2)
label_31ee98:
    if (ctx->pc == 0x31EE98u) {
        ctx->pc = 0x31EE98u;
            // 0x31ee98: 0x8fa201f8  lw          $v0, 0x1F8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
        ctx->pc = 0x31EE9Cu;
        goto label_31ee9c;
    }
    ctx->pc = 0x31EE94u;
    {
        const bool branch_taken_0x31ee94 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x31ee94) {
            ctx->pc = 0x31EE98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x31EE94u;
            // 0x31ee98: 0x8fa201f8  lw          $v0, 0x1F8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x31EEA4u;
            goto label_31eea4;
        }
    }
    ctx->pc = 0x31EE9Cu;
label_31ee9c:
    // 0x31ee9c: 0x1000095c  b           . + 4 + (0x95C << 2)
label_31eea0:
    if (ctx->pc == 0x31EEA0u) {
        ctx->pc = 0x31EEA0u;
            // 0x31eea0: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->pc = 0x31EEA4u;
        goto label_31eea4;
    }
    ctx->pc = 0x31EE9Cu;
    {
        const bool branch_taken_0x31ee9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31EEA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31EE9Cu;
            // 0x31eea0: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ee9c) {
            ctx->pc = 0x321410u;
            goto label_321410;
        }
    }
    ctx->pc = 0x31EEA4u;
label_31eea4:
    // 0x31eea4: 0x245205ec  addiu       $s2, $v0, 0x5EC
    ctx->pc = 0x31eea4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 1516));
label_31eea8:
    // 0x31eea8: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x31eea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_31eeac:
    // 0x31eeac: 0x5222001f  beql        $s1, $v0, . + 4 + (0x1F << 2)
label_31eeb0:
    if (ctx->pc == 0x31EEB0u) {
        ctx->pc = 0x31EEB0u;
            // 0x31eeb0: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x31EEB4u;
        goto label_31eeb4;
    }
    ctx->pc = 0x31EEACu;
    {
        const bool branch_taken_0x31eeac = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x31eeac) {
            ctx->pc = 0x31EEB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x31EEACu;
            // 0x31eeb0: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x31EF2Cu;
            goto label_31ef2c;
        }
    }
    ctx->pc = 0x31EEB4u;
label_31eeb4:
    // 0x31eeb4: 0x52200003  beql        $s1, $zero, . + 4 + (0x3 << 2)
label_31eeb8:
    if (ctx->pc == 0x31EEB8u) {
        ctx->pc = 0x31EEB8u;
            // 0x31eeb8: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x31EEBCu;
        goto label_31eebc;
    }
    ctx->pc = 0x31EEB4u;
    {
        const bool branch_taken_0x31eeb4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x31eeb4) {
            ctx->pc = 0x31EEB8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x31EEB4u;
            // 0x31eeb8: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x31EEC4u;
            goto label_31eec4;
        }
    }
    ctx->pc = 0x31EEBCu;
label_31eebc:
    // 0x31eebc: 0x10000953  b           . + 4 + (0x953 << 2)
label_31eec0:
    if (ctx->pc == 0x31EEC0u) {
        ctx->pc = 0x31EEC4u;
        goto label_31eec4;
    }
    ctx->pc = 0x31EEBCu;
    {
        const bool branch_taken_0x31eebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31eebc) {
            ctx->pc = 0x32140Cu;
            goto label_32140c;
        }
    }
    ctx->pc = 0x31EEC4u;
label_31eec4:
    // 0x31eec4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x31eec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_31eec8:
    // 0x31eec8: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x31eec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_31eecc:
    // 0x31eecc: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x31eeccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_31eed0:
    // 0x31eed0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x31eed0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_31eed4:
    // 0x31eed4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31eed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_31eed8:
    // 0x31eed8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x31eed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_31eedc:
    // 0x31eedc: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x31eedcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_31eee0:
    // 0x31eee0: 0x8fa201f8  lw          $v0, 0x1F8($sp)
    ctx->pc = 0x31eee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
label_31eee4:
    // 0x31eee4: 0xac430158  sw          $v1, 0x158($v0)
    ctx->pc = 0x31eee4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 344), GPR_U32(ctx, 3));
label_31eee8:
    // 0x31eee8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x31eee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_31eeec:
    // 0x31eeec: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x31eeecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_31eef0:
    // 0x31eef0: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x31eef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_31eef4:
    // 0x31eef4: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x31eef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_31eef8:
    // 0x31eef8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x31eef8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_31eefc:
    // 0x31eefc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31eefcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_31ef00:
    // 0x31ef00: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x31ef00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_31ef04:
    // 0x31ef04: 0xa4400046  sh          $zero, 0x46($v0)
    ctx->pc = 0x31ef04u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 70), (uint16_t)GPR_U32(ctx, 0));
label_31ef08:
    // 0x31ef08: 0xc12307c  jal         func_48C1F0
label_31ef0c:
    if (ctx->pc == 0x31EF0Cu) {
        ctx->pc = 0x31EF0Cu;
            // 0x31ef0c: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->pc = 0x31EF10u;
        goto label_31ef10;
    }
    ctx->pc = 0x31EF08u;
    SET_GPR_U32(ctx, 31, 0x31EF10u);
    ctx->pc = 0x31EF0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31EF08u;
            // 0x31ef0c: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48C1F0u;
    if (runtime->hasFunction(0x48C1F0u)) {
        auto targetFn = runtime->lookupFunction(0x48C1F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31EF10u; }
        if (ctx->pc != 0x31EF10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048C1F0_0x48c1f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31EF10u; }
        if (ctx->pc != 0x31EF10u) { return; }
    }
    ctx->pc = 0x31EF10u;
label_31ef10:
    // 0x31ef10: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x31ef10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_31ef14:
    // 0x31ef14: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x31ef14u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_31ef18:
    // 0x31ef18: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x31ef18u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_31ef1c:
    // 0x31ef1c: 0x320f809  jalr        $t9
label_31ef20:
    if (ctx->pc == 0x31EF20u) {
        ctx->pc = 0x31EF24u;
        goto label_31ef24;
    }
    ctx->pc = 0x31EF1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x31EF24u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x31EF24u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x31EF24u; }
            if (ctx->pc != 0x31EF24u) { return; }
        }
        }
    }
    ctx->pc = 0x31EF24u;
label_31ef24:
    // 0x31ef24: 0x10000939  b           . + 4 + (0x939 << 2)
label_31ef28:
    if (ctx->pc == 0x31EF28u) {
        ctx->pc = 0x31EF2Cu;
        goto label_31ef2c;
    }
    ctx->pc = 0x31EF24u;
    {
        const bool branch_taken_0x31ef24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31ef24) {
            ctx->pc = 0x32140Cu;
            goto label_32140c;
        }
    }
    ctx->pc = 0x31EF2Cu;
label_31ef2c:
    // 0x31ef2c: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x31ef2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_31ef30:
    // 0x31ef30: 0xc1232d8  jal         func_48CB60
label_31ef34:
    if (ctx->pc == 0x31EF34u) {
        ctx->pc = 0x31EF34u;
            // 0x31ef34: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x31EF38u;
        goto label_31ef38;
    }
    ctx->pc = 0x31EF30u;
    SET_GPR_U32(ctx, 31, 0x31EF38u);
    ctx->pc = 0x31EF34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31EF30u;
            // 0x31ef34: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CB60u;
    if (runtime->hasFunction(0x48CB60u)) {
        auto targetFn = runtime->lookupFunction(0x48CB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31EF38u; }
        if (ctx->pc != 0x31EF38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CB60_0x48cb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31EF38u; }
        if (ctx->pc != 0x31EF38u) { return; }
    }
    ctx->pc = 0x31EF38u;
label_31ef38:
    // 0x31ef38: 0x8fa201f8  lw          $v0, 0x1F8($sp)
    ctx->pc = 0x31ef38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
label_31ef3c:
    // 0x31ef3c: 0x8c450158  lw          $a1, 0x158($v0)
    ctx->pc = 0x31ef3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 344)));
label_31ef40:
    // 0x31ef40: 0xc12307c  jal         func_48C1F0
label_31ef44:
    if (ctx->pc == 0x31EF44u) {
        ctx->pc = 0x31EF44u;
            // 0x31ef44: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x31EF48u;
        goto label_31ef48;
    }
    ctx->pc = 0x31EF40u;
    SET_GPR_U32(ctx, 31, 0x31EF48u);
    ctx->pc = 0x31EF44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31EF40u;
            // 0x31ef44: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48C1F0u;
    if (runtime->hasFunction(0x48C1F0u)) {
        auto targetFn = runtime->lookupFunction(0x48C1F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31EF48u; }
        if (ctx->pc != 0x31EF48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048C1F0_0x48c1f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31EF48u; }
        if (ctx->pc != 0x31EF48u) { return; }
    }
    ctx->pc = 0x31EF48u;
label_31ef48:
    // 0x31ef48: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x31ef48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_31ef4c:
    // 0x31ef4c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x31ef4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31ef50:
    // 0x31ef50: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x31ef50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_31ef54:
    // 0x31ef54: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x31ef54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_31ef58:
    // 0x31ef58: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x31ef58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_31ef5c:
    // 0x31ef5c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x31ef5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_31ef60:
    // 0x31ef60: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31ef60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_31ef64:
    // 0x31ef64: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x31ef64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_31ef68:
    // 0x31ef68: 0x10000928  b           . + 4 + (0x928 << 2)
label_31ef6c:
    if (ctx->pc == 0x31EF6Cu) {
        ctx->pc = 0x31EF6Cu;
            // 0x31ef6c: 0xa4440046  sh          $a0, 0x46($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 70), (uint16_t)GPR_U32(ctx, 4));
        ctx->pc = 0x31EF70u;
        goto label_31ef70;
    }
    ctx->pc = 0x31EF68u;
    {
        const bool branch_taken_0x31ef68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31EF6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31EF68u;
            // 0x31ef6c: 0xa4440046  sh          $a0, 0x46($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 70), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ef68) {
            ctx->pc = 0x32140Cu;
            goto label_32140c;
        }
    }
    ctx->pc = 0x31EF70u;
label_31ef70:
    // 0x31ef70: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x31ef70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_31ef74:
    // 0x31ef74: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x31ef74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_31ef78:
    // 0x31ef78: 0xc440f9c8  lwc1        $f0, -0x638($v0)
    ctx->pc = 0x31ef78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31ef7c:
    // 0x31ef7c: 0xc461f9cc  lwc1        $f1, -0x634($v1)
    ctx->pc = 0x31ef7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294965708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_31ef80:
    // 0x31ef80: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x31ef80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_31ef84:
    // 0x31ef84: 0xc442f9d0  lwc1        $f2, -0x630($v0)
    ctx->pc = 0x31ef84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_31ef88:
    // 0x31ef88: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x31ef88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_31ef8c:
    // 0x31ef8c: 0xe7a004e0  swc1        $f0, 0x4E0($sp)
    ctx->pc = 0x31ef8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1248), bits); }
label_31ef90:
    // 0x31ef90: 0xe7a104e4  swc1        $f1, 0x4E4($sp)
    ctx->pc = 0x31ef90u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1252), bits); }
label_31ef94:
    // 0x31ef94: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x31ef94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_31ef98:
    // 0x31ef98: 0xc460f9d8  lwc1        $f0, -0x628($v1)
    ctx->pc = 0x31ef98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294965720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31ef9c:
    // 0x31ef9c: 0xc441f9dc  lwc1        $f1, -0x624($v0)
    ctx->pc = 0x31ef9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965724)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_31efa0:
    // 0x31efa0: 0xe7a204e8  swc1        $f2, 0x4E8($sp)
    ctx->pc = 0x31efa0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1256), bits); }
label_31efa4:
    // 0x31efa4: 0xe7a004d0  swc1        $f0, 0x4D0($sp)
    ctx->pc = 0x31efa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1232), bits); }
label_31efa8:
    // 0x31efa8: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x31efa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_31efac:
    // 0x31efac: 0xc440f9e0  lwc1        $f0, -0x620($v0)
    ctx->pc = 0x31efacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31efb0:
    // 0x31efb0: 0xe7a104d4  swc1        $f1, 0x4D4($sp)
    ctx->pc = 0x31efb0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1236), bits); }
label_31efb4:
    // 0x31efb4: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x31efb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_31efb8:
    // 0x31efb8: 0x2442c420  addiu       $v0, $v0, -0x3BE0
    ctx->pc = 0x31efb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951968));
label_31efbc:
    // 0x31efbc: 0xafa201d0  sw          $v0, 0x1D0($sp)
    ctx->pc = 0x31efbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 464), GPR_U32(ctx, 2));
label_31efc0:
    // 0x31efc0: 0xafa201c0  sw          $v0, 0x1C0($sp)
    ctx->pc = 0x31efc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 448), GPR_U32(ctx, 2));
label_31efc4:
    // 0x31efc4: 0x7ba200e0  lq          $v0, 0xE0($sp)
    ctx->pc = 0x31efc4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_31efc8:
    // 0x31efc8: 0x104601aa  beq         $v0, $a2, . + 4 + (0x1AA << 2)
label_31efcc:
    if (ctx->pc == 0x31EFCCu) {
        ctx->pc = 0x31EFCCu;
            // 0x31efcc: 0xe7a004d8  swc1        $f0, 0x4D8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1240), bits); }
        ctx->pc = 0x31EFD0u;
        goto label_31efd0;
    }
    ctx->pc = 0x31EFC8u;
    {
        const bool branch_taken_0x31efc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x31EFCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31EFC8u;
            // 0x31efcc: 0xe7a004d8  swc1        $f0, 0x4D8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1240), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31efc8) {
            ctx->pc = 0x31F674u;
            goto label_31f674;
        }
    }
    ctx->pc = 0x31EFD0u;
label_31efd0:
    // 0x31efd0: 0x504401a9  beql        $v0, $a0, . + 4 + (0x1A9 << 2)
label_31efd4:
    if (ctx->pc == 0x31EFD4u) {
        ctx->pc = 0x31EFD4u;
            // 0x31efd4: 0x8fa201f8  lw          $v0, 0x1F8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
        ctx->pc = 0x31EFD8u;
        goto label_31efd8;
    }
    ctx->pc = 0x31EFD0u;
    {
        const bool branch_taken_0x31efd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x31efd0) {
            ctx->pc = 0x31EFD4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x31EFD0u;
            // 0x31efd4: 0x8fa201f8  lw          $v0, 0x1F8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x31F678u;
            goto label_31f678;
        }
    }
    ctx->pc = 0x31EFD8u;
label_31efd8:
    // 0x31efd8: 0x104501a6  beq         $v0, $a1, . + 4 + (0x1A6 << 2)
label_31efdc:
    if (ctx->pc == 0x31EFDCu) {
        ctx->pc = 0x31EFE0u;
        goto label_31efe0;
    }
    ctx->pc = 0x31EFD8u;
    {
        const bool branch_taken_0x31efd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x31efd8) {
            ctx->pc = 0x31F674u;
            goto label_31f674;
        }
    }
    ctx->pc = 0x31EFE0u;
label_31efe0:
    // 0x31efe0: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_31efe4:
    if (ctx->pc == 0x31EFE4u) {
        ctx->pc = 0x31EFE4u;
            // 0x31efe4: 0x27a30480  addiu       $v1, $sp, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1152));
        ctx->pc = 0x31EFE8u;
        goto label_31efe8;
    }
    ctx->pc = 0x31EFE0u;
    {
        const bool branch_taken_0x31efe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31efe0) {
            ctx->pc = 0x31EFE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x31EFE0u;
            // 0x31efe4: 0x27a30480  addiu       $v1, $sp, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1152));
        ctx->in_delay_slot = false;
            ctx->pc = 0x31EFF0u;
            goto label_31eff0;
        }
    }
    ctx->pc = 0x31EFE8u;
label_31efe8:
    // 0x31efe8: 0x100001ef  b           . + 4 + (0x1EF << 2)
label_31efec:
    if (ctx->pc == 0x31EFECu) {
        ctx->pc = 0x31EFECu;
            // 0x31efec: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x31EFF0u;
        goto label_31eff0;
    }
    ctx->pc = 0x31EFE8u;
    {
        const bool branch_taken_0x31efe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31EFECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31EFE8u;
            // 0x31efec: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31efe8) {
            ctx->pc = 0x31F7A8u;
            goto label_31f7a8;
        }
    }
    ctx->pc = 0x31EFF0u;
label_31eff0:
    // 0x31eff0: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_31eff4:
    if (ctx->pc == 0x31EFF4u) {
        ctx->pc = 0x31EFF4u;
            // 0x31eff4: 0x2402001c  addiu       $v0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->pc = 0x31EFF8u;
        goto label_31eff8;
    }
    ctx->pc = 0x31EFF0u;
    {
        const bool branch_taken_0x31eff0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x31EFF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31EFF0u;
            // 0x31eff4: 0x2402001c  addiu       $v0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31eff0) {
            ctx->pc = 0x31F014u;
            goto label_31f014;
        }
    }
    ctx->pc = 0x31EFF8u;
label_31eff8:
    // 0x31eff8: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x31eff8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_31effc:
    // 0x31effc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x31effcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_31f000:
    // 0x31f000: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x31f000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_31f004:
    // 0x31f004: 0x0  nop
    ctx->pc = 0x31f004u;
    // NOP
label_31f008:
    // 0x31f008: 0x0  nop
    ctx->pc = 0x31f008u;
    // NOP
label_31f00c:
    // 0x31f00c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_31f010:
    if (ctx->pc == 0x31F010u) {
        ctx->pc = 0x31F014u;
        goto label_31f014;
    }
    ctx->pc = 0x31F00Cu;
    {
        const bool branch_taken_0x31f00c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31f00c) {
            ctx->pc = 0x31EFF8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_31eff8;
        }
    }
    ctx->pc = 0x31F014u;
label_31f014:
    // 0x31f014: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x31f014u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_31f018:
    // 0x31f018: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x31f018u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_31f01c:
    // 0x31f01c: 0x24a5c298  addiu       $a1, $a1, -0x3D68
    ctx->pc = 0x31f01cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951576));
label_31f020:
    // 0x31f020: 0xc123944  jal         func_48E510
label_31f024:
    if (ctx->pc == 0x31F024u) {
        ctx->pc = 0x31F024u;
            // 0x31f024: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x31F028u;
        goto label_31f028;
    }
    ctx->pc = 0x31F020u;
    SET_GPR_U32(ctx, 31, 0x31F028u);
    ctx->pc = 0x31F024u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31F020u;
            // 0x31f024: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F028u; }
        if (ctx->pc != 0x31F028u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F028u; }
        if (ctx->pc != 0x31F028u) { return; }
    }
    ctx->pc = 0x31F028u;
label_31f028:
    // 0x31f028: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x31f028u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_31f02c:
    // 0x31f02c: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x31f02cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_31f030:
    // 0x31f030: 0xafa20480  sw          $v0, 0x480($sp)
    ctx->pc = 0x31f030u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1152), GPR_U32(ctx, 2));
label_31f034:
    // 0x31f034: 0x24a5c2a8  addiu       $a1, $a1, -0x3D58
    ctx->pc = 0x31f034u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951592));
label_31f038:
    // 0x31f038: 0xc123944  jal         func_48E510
label_31f03c:
    if (ctx->pc == 0x31F03Cu) {
        ctx->pc = 0x31F03Cu;
            // 0x31f03c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x31F040u;
        goto label_31f040;
    }
    ctx->pc = 0x31F038u;
    SET_GPR_U32(ctx, 31, 0x31F040u);
    ctx->pc = 0x31F03Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31F038u;
            // 0x31f03c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F040u; }
        if (ctx->pc != 0x31F040u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F040u; }
        if (ctx->pc != 0x31F040u) { return; }
    }
    ctx->pc = 0x31F040u;
label_31f040:
    // 0x31f040: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x31f040u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_31f044:
    // 0x31f044: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x31f044u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_31f048:
    // 0x31f048: 0xafa20484  sw          $v0, 0x484($sp)
    ctx->pc = 0x31f048u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1156), GPR_U32(ctx, 2));
label_31f04c:
    // 0x31f04c: 0x24a5c2b8  addiu       $a1, $a1, -0x3D48
    ctx->pc = 0x31f04cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951608));
label_31f050:
    // 0x31f050: 0xc123944  jal         func_48E510
label_31f054:
    if (ctx->pc == 0x31F054u) {
        ctx->pc = 0x31F054u;
            // 0x31f054: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x31F058u;
        goto label_31f058;
    }
    ctx->pc = 0x31F050u;
    SET_GPR_U32(ctx, 31, 0x31F058u);
    ctx->pc = 0x31F054u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31F050u;
            // 0x31f054: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F058u; }
        if (ctx->pc != 0x31F058u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F058u; }
        if (ctx->pc != 0x31F058u) { return; }
    }
    ctx->pc = 0x31F058u;
label_31f058:
    // 0x31f058: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x31f058u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_31f05c:
    // 0x31f05c: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x31f05cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_31f060:
    // 0x31f060: 0xafa20488  sw          $v0, 0x488($sp)
    ctx->pc = 0x31f060u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1160), GPR_U32(ctx, 2));
label_31f064:
    // 0x31f064: 0x24a5c2c8  addiu       $a1, $a1, -0x3D38
    ctx->pc = 0x31f064u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951624));
label_31f068:
    // 0x31f068: 0xc123944  jal         func_48E510
label_31f06c:
    if (ctx->pc == 0x31F06Cu) {
        ctx->pc = 0x31F06Cu;
            // 0x31f06c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x31F070u;
        goto label_31f070;
    }
    ctx->pc = 0x31F068u;
    SET_GPR_U32(ctx, 31, 0x31F070u);
    ctx->pc = 0x31F06Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31F068u;
            // 0x31f06c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F070u; }
        if (ctx->pc != 0x31F070u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F070u; }
        if (ctx->pc != 0x31F070u) { return; }
    }
    ctx->pc = 0x31F070u;
label_31f070:
    // 0x31f070: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x31f070u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_31f074:
    // 0x31f074: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x31f074u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_31f078:
    // 0x31f078: 0xafa2048c  sw          $v0, 0x48C($sp)
    ctx->pc = 0x31f078u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1164), GPR_U32(ctx, 2));
label_31f07c:
    // 0x31f07c: 0x24a5c2d8  addiu       $a1, $a1, -0x3D28
    ctx->pc = 0x31f07cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951640));
label_31f080:
    // 0x31f080: 0xc123944  jal         func_48E510
label_31f084:
    if (ctx->pc == 0x31F084u) {
        ctx->pc = 0x31F084u;
            // 0x31f084: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x31F088u;
        goto label_31f088;
    }
    ctx->pc = 0x31F080u;
    SET_GPR_U32(ctx, 31, 0x31F088u);
    ctx->pc = 0x31F084u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31F080u;
            // 0x31f084: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F088u; }
        if (ctx->pc != 0x31F088u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F088u; }
        if (ctx->pc != 0x31F088u) { return; }
    }
    ctx->pc = 0x31F088u;
label_31f088:
    // 0x31f088: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x31f088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_31f08c:
    // 0x31f08c: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x31f08cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_31f090:
    // 0x31f090: 0xafa20490  sw          $v0, 0x490($sp)
    ctx->pc = 0x31f090u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1168), GPR_U32(ctx, 2));
label_31f094:
    // 0x31f094: 0x24a5c2e8  addiu       $a1, $a1, -0x3D18
    ctx->pc = 0x31f094u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951656));
label_31f098:
    // 0x31f098: 0xc123944  jal         func_48E510
label_31f09c:
    if (ctx->pc == 0x31F09Cu) {
        ctx->pc = 0x31F09Cu;
            // 0x31f09c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x31F0A0u;
        goto label_31f0a0;
    }
    ctx->pc = 0x31F098u;
    SET_GPR_U32(ctx, 31, 0x31F0A0u);
    ctx->pc = 0x31F09Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31F098u;
            // 0x31f09c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F0A0u; }
        if (ctx->pc != 0x31F0A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F0A0u; }
        if (ctx->pc != 0x31F0A0u) { return; }
    }
    ctx->pc = 0x31F0A0u;
label_31f0a0:
    // 0x31f0a0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x31f0a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_31f0a4:
    // 0x31f0a4: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x31f0a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_31f0a8:
    // 0x31f0a8: 0xafa20494  sw          $v0, 0x494($sp)
    ctx->pc = 0x31f0a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1172), GPR_U32(ctx, 2));
label_31f0ac:
    // 0x31f0ac: 0x24a5c2f8  addiu       $a1, $a1, -0x3D08
    ctx->pc = 0x31f0acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951672));
label_31f0b0:
    // 0x31f0b0: 0xc123944  jal         func_48E510
label_31f0b4:
    if (ctx->pc == 0x31F0B4u) {
        ctx->pc = 0x31F0B4u;
            // 0x31f0b4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x31F0B8u;
        goto label_31f0b8;
    }
    ctx->pc = 0x31F0B0u;
    SET_GPR_U32(ctx, 31, 0x31F0B8u);
    ctx->pc = 0x31F0B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31F0B0u;
            // 0x31f0b4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F0B8u; }
        if (ctx->pc != 0x31F0B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F0B8u; }
        if (ctx->pc != 0x31F0B8u) { return; }
    }
    ctx->pc = 0x31F0B8u;
label_31f0b8:
    // 0x31f0b8: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x31f0b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_31f0bc:
    // 0x31f0bc: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x31f0bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_31f0c0:
    // 0x31f0c0: 0xafa20498  sw          $v0, 0x498($sp)
    ctx->pc = 0x31f0c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1176), GPR_U32(ctx, 2));
label_31f0c4:
    // 0x31f0c4: 0x24a5c428  addiu       $a1, $a1, -0x3BD8
    ctx->pc = 0x31f0c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951976));
label_31f0c8:
    // 0x31f0c8: 0xc123944  jal         func_48E510
label_31f0cc:
    if (ctx->pc == 0x31F0CCu) {
        ctx->pc = 0x31F0CCu;
            // 0x31f0cc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x31F0D0u;
        goto label_31f0d0;
    }
    ctx->pc = 0x31F0C8u;
    SET_GPR_U32(ctx, 31, 0x31F0D0u);
    ctx->pc = 0x31F0CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31F0C8u;
            // 0x31f0cc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F0D0u; }
        if (ctx->pc != 0x31F0D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F0D0u; }
        if (ctx->pc != 0x31F0D0u) { return; }
    }
    ctx->pc = 0x31F0D0u;
label_31f0d0:
    // 0x31f0d0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x31f0d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_31f0d4:
    // 0x31f0d4: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x31f0d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_31f0d8:
    // 0x31f0d8: 0xafa201bc  sw          $v0, 0x1BC($sp)
    ctx->pc = 0x31f0d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 444), GPR_U32(ctx, 2));
label_31f0dc:
    // 0x31f0dc: 0x24a5c438  addiu       $a1, $a1, -0x3BC8
    ctx->pc = 0x31f0dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951992));
label_31f0e0:
    // 0x31f0e0: 0xc123944  jal         func_48E510
label_31f0e4:
    if (ctx->pc == 0x31F0E4u) {
        ctx->pc = 0x31F0E4u;
            // 0x31f0e4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x31F0E8u;
        goto label_31f0e8;
    }
    ctx->pc = 0x31F0E0u;
    SET_GPR_U32(ctx, 31, 0x31F0E8u);
    ctx->pc = 0x31F0E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31F0E0u;
            // 0x31f0e4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F0E8u; }
        if (ctx->pc != 0x31F0E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F0E8u; }
        if (ctx->pc != 0x31F0E8u) { return; }
    }
    ctx->pc = 0x31F0E8u;
label_31f0e8:
    // 0x31f0e8: 0x27a30460  addiu       $v1, $sp, 0x460
    ctx->pc = 0x31f0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1120));
label_31f0ec:
    // 0x31f0ec: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_31f0f0:
    if (ctx->pc == 0x31F0F0u) {
        ctx->pc = 0x31F0F0u;
            // 0x31f0f0: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->pc = 0x31F0F4u;
        goto label_31f0f4;
    }
    ctx->pc = 0x31F0ECu;
    {
        const bool branch_taken_0x31f0ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F0F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31F0ECu;
            // 0x31f0f0: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f0ec) {
            ctx->pc = 0x31F110u;
            goto label_31f110;
        }
    }
    ctx->pc = 0x31F0F4u;
label_31f0f4:
    // 0x31f0f4: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x31f0f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_31f0f8:
    // 0x31f0f8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x31f0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_31f0fc:
    // 0x31f0fc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x31f0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_31f100:
    // 0x31f100: 0x0  nop
    ctx->pc = 0x31f100u;
    // NOP
label_31f104:
    // 0x31f104: 0x0  nop
    ctx->pc = 0x31f104u;
    // NOP
label_31f108:
    // 0x31f108: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_31f10c:
    if (ctx->pc == 0x31F10Cu) {
        ctx->pc = 0x31F110u;
        goto label_31f110;
    }
    ctx->pc = 0x31F108u;
    {
        const bool branch_taken_0x31f108 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31f108) {
            ctx->pc = 0x31F0F4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_31f0f4;
        }
    }
    ctx->pc = 0x31F110u;
label_31f110:
    // 0x31f110: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x31f110u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_31f114:
    // 0x31f114: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x31f114u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_31f118:
    // 0x31f118: 0x24a5c448  addiu       $a1, $a1, -0x3BB8
    ctx->pc = 0x31f118u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952008));
label_31f11c:
    // 0x31f11c: 0xc123944  jal         func_48E510
label_31f120:
    if (ctx->pc == 0x31F120u) {
        ctx->pc = 0x31F120u;
            // 0x31f120: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x31F124u;
        goto label_31f124;
    }
    ctx->pc = 0x31F11Cu;
    SET_GPR_U32(ctx, 31, 0x31F124u);
    ctx->pc = 0x31F120u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31F11Cu;
            // 0x31f120: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F124u; }
        if (ctx->pc != 0x31F124u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F124u; }
        if (ctx->pc != 0x31F124u) { return; }
    }
    ctx->pc = 0x31F124u;
label_31f124:
    // 0x31f124: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x31f124u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_31f128:
    // 0x31f128: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x31f128u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_31f12c:
    // 0x31f12c: 0xafa20460  sw          $v0, 0x460($sp)
    ctx->pc = 0x31f12cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1120), GPR_U32(ctx, 2));
label_31f130:
    // 0x31f130: 0x24a5c458  addiu       $a1, $a1, -0x3BA8
    ctx->pc = 0x31f130u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952024));
label_31f134:
    // 0x31f134: 0xc123944  jal         func_48E510
label_31f138:
    if (ctx->pc == 0x31F138u) {
        ctx->pc = 0x31F138u;
            // 0x31f138: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x31F13Cu;
        goto label_31f13c;
    }
    ctx->pc = 0x31F134u;
    SET_GPR_U32(ctx, 31, 0x31F13Cu);
    ctx->pc = 0x31F138u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31F134u;
            // 0x31f138: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F13Cu; }
        if (ctx->pc != 0x31F13Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F13Cu; }
        if (ctx->pc != 0x31F13Cu) { return; }
    }
    ctx->pc = 0x31F13Cu;
label_31f13c:
    // 0x31f13c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x31f13cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_31f140:
    // 0x31f140: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x31f140u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_31f144:
    // 0x31f144: 0xafa20464  sw          $v0, 0x464($sp)
    ctx->pc = 0x31f144u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1124), GPR_U32(ctx, 2));
label_31f148:
    // 0x31f148: 0x24a5c468  addiu       $a1, $a1, -0x3B98
    ctx->pc = 0x31f148u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952040));
label_31f14c:
    // 0x31f14c: 0xc123944  jal         func_48E510
label_31f150:
    if (ctx->pc == 0x31F150u) {
        ctx->pc = 0x31F150u;
            // 0x31f150: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x31F154u;
        goto label_31f154;
    }
    ctx->pc = 0x31F14Cu;
    SET_GPR_U32(ctx, 31, 0x31F154u);
    ctx->pc = 0x31F150u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31F14Cu;
            // 0x31f150: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F154u; }
        if (ctx->pc != 0x31F154u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F154u; }
        if (ctx->pc != 0x31F154u) { return; }
    }
    ctx->pc = 0x31F154u;
label_31f154:
    // 0x31f154: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x31f154u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_31f158:
    // 0x31f158: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x31f158u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_31f15c:
    // 0x31f15c: 0xafa20468  sw          $v0, 0x468($sp)
    ctx->pc = 0x31f15cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1128), GPR_U32(ctx, 2));
label_31f160:
    // 0x31f160: 0x24a5c478  addiu       $a1, $a1, -0x3B88
    ctx->pc = 0x31f160u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952056));
label_31f164:
    // 0x31f164: 0xc123944  jal         func_48E510
label_31f168:
    if (ctx->pc == 0x31F168u) {
        ctx->pc = 0x31F168u;
            // 0x31f168: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x31F16Cu;
        goto label_31f16c;
    }
    ctx->pc = 0x31F164u;
    SET_GPR_U32(ctx, 31, 0x31F16Cu);
    ctx->pc = 0x31F168u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31F164u;
            // 0x31f168: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F16Cu; }
        if (ctx->pc != 0x31F16Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F16Cu; }
        if (ctx->pc != 0x31F16Cu) { return; }
    }
    ctx->pc = 0x31F16Cu;
label_31f16c:
    // 0x31f16c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x31f16cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_31f170:
    // 0x31f170: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x31f170u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_31f174:
    // 0x31f174: 0xafa2046c  sw          $v0, 0x46C($sp)
    ctx->pc = 0x31f174u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1132), GPR_U32(ctx, 2));
label_31f178:
    // 0x31f178: 0x24a5c488  addiu       $a1, $a1, -0x3B78
    ctx->pc = 0x31f178u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952072));
label_31f17c:
    // 0x31f17c: 0xc123944  jal         func_48E510
label_31f180:
    if (ctx->pc == 0x31F180u) {
        ctx->pc = 0x31F180u;
            // 0x31f180: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x31F184u;
        goto label_31f184;
    }
    ctx->pc = 0x31F17Cu;
    SET_GPR_U32(ctx, 31, 0x31F184u);
    ctx->pc = 0x31F180u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31F17Cu;
            // 0x31f180: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F184u; }
        if (ctx->pc != 0x31F184u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F184u; }
        if (ctx->pc != 0x31F184u) { return; }
    }
    ctx->pc = 0x31F184u;
label_31f184:
    // 0x31f184: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x31f184u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_31f188:
    // 0x31f188: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x31f188u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_31f18c:
    // 0x31f18c: 0xafa20470  sw          $v0, 0x470($sp)
    ctx->pc = 0x31f18cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1136), GPR_U32(ctx, 2));
label_31f190:
    // 0x31f190: 0x24a5c498  addiu       $a1, $a1, -0x3B68
    ctx->pc = 0x31f190u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952088));
label_31f194:
    // 0x31f194: 0xc123944  jal         func_48E510
label_31f198:
    if (ctx->pc == 0x31F198u) {
        ctx->pc = 0x31F198u;
            // 0x31f198: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x31F19Cu;
        goto label_31f19c;
    }
    ctx->pc = 0x31F194u;
    SET_GPR_U32(ctx, 31, 0x31F19Cu);
    ctx->pc = 0x31F198u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31F194u;
            // 0x31f198: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F19Cu; }
        if (ctx->pc != 0x31F19Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F19Cu; }
        if (ctx->pc != 0x31F19Cu) { return; }
    }
    ctx->pc = 0x31F19Cu;
label_31f19c:
    // 0x31f19c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x31f19cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_31f1a0:
    // 0x31f1a0: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x31f1a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_31f1a4:
    // 0x31f1a4: 0xafa20474  sw          $v0, 0x474($sp)
    ctx->pc = 0x31f1a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1140), GPR_U32(ctx, 2));
label_31f1a8:
    // 0x31f1a8: 0x24a5c4a8  addiu       $a1, $a1, -0x3B58
    ctx->pc = 0x31f1a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952104));
label_31f1ac:
    // 0x31f1ac: 0xc123944  jal         func_48E510
label_31f1b0:
    if (ctx->pc == 0x31F1B0u) {
        ctx->pc = 0x31F1B0u;
            // 0x31f1b0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x31F1B4u;
        goto label_31f1b4;
    }
    ctx->pc = 0x31F1ACu;
    SET_GPR_U32(ctx, 31, 0x31F1B4u);
    ctx->pc = 0x31F1B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31F1ACu;
            // 0x31f1b0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F1B4u; }
        if (ctx->pc != 0x31F1B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F1B4u; }
        if (ctx->pc != 0x31F1B4u) { return; }
    }
    ctx->pc = 0x31F1B4u;
label_31f1b4:
    // 0x31f1b4: 0xafa20478  sw          $v0, 0x478($sp)
    ctx->pc = 0x31f1b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1144), GPR_U32(ctx, 2));
label_31f1b8:
    // 0x31f1b8: 0x27a30440  addiu       $v1, $sp, 0x440
    ctx->pc = 0x31f1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
label_31f1bc:
    // 0x31f1bc: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_31f1c0:
    if (ctx->pc == 0x31F1C0u) {
        ctx->pc = 0x31F1C0u;
            // 0x31f1c0: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->pc = 0x31F1C4u;
        goto label_31f1c4;
    }
    ctx->pc = 0x31F1BCu;
    {
        const bool branch_taken_0x31f1bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F1C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31F1BCu;
            // 0x31f1c0: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f1bc) {
            ctx->pc = 0x31F1E0u;
            goto label_31f1e0;
        }
    }
    ctx->pc = 0x31F1C4u;
label_31f1c4:
    // 0x31f1c4: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x31f1c4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_31f1c8:
    // 0x31f1c8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x31f1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_31f1cc:
    // 0x31f1cc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x31f1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_31f1d0:
    // 0x31f1d0: 0x0  nop
    ctx->pc = 0x31f1d0u;
    // NOP
label_31f1d4:
    // 0x31f1d4: 0x0  nop
    ctx->pc = 0x31f1d4u;
    // NOP
label_31f1d8:
    // 0x31f1d8: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_31f1dc:
    if (ctx->pc == 0x31F1DCu) {
        ctx->pc = 0x31F1E0u;
        goto label_31f1e0;
    }
    ctx->pc = 0x31F1D8u;
    {
        const bool branch_taken_0x31f1d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31f1d8) {
            ctx->pc = 0x31F1C4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_31f1c4;
        }
    }
    ctx->pc = 0x31F1E0u;
label_31f1e0:
    // 0x31f1e0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x31f1e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_31f1e4:
    // 0x31f1e4: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x31f1e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_31f1e8:
    // 0x31f1e8: 0x24a5c4b8  addiu       $a1, $a1, -0x3B48
    ctx->pc = 0x31f1e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952120));
label_31f1ec:
    // 0x31f1ec: 0xc123944  jal         func_48E510
label_31f1f0:
    if (ctx->pc == 0x31F1F0u) {
        ctx->pc = 0x31F1F0u;
            // 0x31f1f0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x31F1F4u;
        goto label_31f1f4;
    }
    ctx->pc = 0x31F1ECu;
    SET_GPR_U32(ctx, 31, 0x31F1F4u);
    ctx->pc = 0x31F1F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31F1ECu;
            // 0x31f1f0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F1F4u; }
        if (ctx->pc != 0x31F1F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F1F4u; }
        if (ctx->pc != 0x31F1F4u) { return; }
    }
    ctx->pc = 0x31F1F4u;
label_31f1f4:
    // 0x31f1f4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x31f1f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_31f1f8:
    // 0x31f1f8: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x31f1f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_31f1fc:
    // 0x31f1fc: 0xafa20440  sw          $v0, 0x440($sp)
    ctx->pc = 0x31f1fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1088), GPR_U32(ctx, 2));
label_31f200:
    // 0x31f200: 0x24a5c4c8  addiu       $a1, $a1, -0x3B38
    ctx->pc = 0x31f200u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952136));
label_31f204:
    // 0x31f204: 0xc123944  jal         func_48E510
label_31f208:
    if (ctx->pc == 0x31F208u) {
        ctx->pc = 0x31F208u;
            // 0x31f208: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x31F20Cu;
        goto label_31f20c;
    }
    ctx->pc = 0x31F204u;
    SET_GPR_U32(ctx, 31, 0x31F20Cu);
    ctx->pc = 0x31F208u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31F204u;
            // 0x31f208: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F20Cu; }
        if (ctx->pc != 0x31F20Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F20Cu; }
        if (ctx->pc != 0x31F20Cu) { return; }
    }
    ctx->pc = 0x31F20Cu;
label_31f20c:
    // 0x31f20c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x31f20cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_31f210:
    // 0x31f210: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x31f210u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_31f214:
    // 0x31f214: 0xafa20444  sw          $v0, 0x444($sp)
    ctx->pc = 0x31f214u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1092), GPR_U32(ctx, 2));
label_31f218:
    // 0x31f218: 0x24a5c4d8  addiu       $a1, $a1, -0x3B28
    ctx->pc = 0x31f218u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952152));
label_31f21c:
    // 0x31f21c: 0xc123944  jal         func_48E510
label_31f220:
    if (ctx->pc == 0x31F220u) {
        ctx->pc = 0x31F220u;
            // 0x31f220: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x31F224u;
        goto label_31f224;
    }
    ctx->pc = 0x31F21Cu;
    SET_GPR_U32(ctx, 31, 0x31F224u);
    ctx->pc = 0x31F220u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31F21Cu;
            // 0x31f220: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F224u; }
        if (ctx->pc != 0x31F224u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F224u; }
        if (ctx->pc != 0x31F224u) { return; }
    }
    ctx->pc = 0x31F224u;
label_31f224:
    // 0x31f224: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x31f224u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_31f228:
    // 0x31f228: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x31f228u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_31f22c:
    // 0x31f22c: 0xafa20448  sw          $v0, 0x448($sp)
    ctx->pc = 0x31f22cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1096), GPR_U32(ctx, 2));
label_31f230:
    // 0x31f230: 0x24a5c4e8  addiu       $a1, $a1, -0x3B18
    ctx->pc = 0x31f230u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952168));
label_31f234:
    // 0x31f234: 0xc123944  jal         func_48E510
label_31f238:
    if (ctx->pc == 0x31F238u) {
        ctx->pc = 0x31F238u;
            // 0x31f238: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x31F23Cu;
        goto label_31f23c;
    }
    ctx->pc = 0x31F234u;
    SET_GPR_U32(ctx, 31, 0x31F23Cu);
    ctx->pc = 0x31F238u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31F234u;
            // 0x31f238: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F23Cu; }
        if (ctx->pc != 0x31F23Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F23Cu; }
        if (ctx->pc != 0x31F23Cu) { return; }
    }
    ctx->pc = 0x31F23Cu;
label_31f23c:
    // 0x31f23c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x31f23cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_31f240:
    // 0x31f240: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x31f240u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_31f244:
    // 0x31f244: 0xafa2044c  sw          $v0, 0x44C($sp)
    ctx->pc = 0x31f244u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1100), GPR_U32(ctx, 2));
label_31f248:
    // 0x31f248: 0x24a5c4f8  addiu       $a1, $a1, -0x3B08
    ctx->pc = 0x31f248u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952184));
label_31f24c:
    // 0x31f24c: 0xc123944  jal         func_48E510
label_31f250:
    if (ctx->pc == 0x31F250u) {
        ctx->pc = 0x31F250u;
            // 0x31f250: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x31F254u;
        goto label_31f254;
    }
    ctx->pc = 0x31F24Cu;
    SET_GPR_U32(ctx, 31, 0x31F254u);
    ctx->pc = 0x31F250u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31F24Cu;
            // 0x31f250: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F254u; }
        if (ctx->pc != 0x31F254u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F254u; }
        if (ctx->pc != 0x31F254u) { return; }
    }
    ctx->pc = 0x31F254u;
label_31f254:
    // 0x31f254: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x31f254u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_31f258:
    // 0x31f258: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x31f258u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_31f25c:
    // 0x31f25c: 0xafa20450  sw          $v0, 0x450($sp)
    ctx->pc = 0x31f25cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1104), GPR_U32(ctx, 2));
label_31f260:
    // 0x31f260: 0x24a5c508  addiu       $a1, $a1, -0x3AF8
    ctx->pc = 0x31f260u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952200));
label_31f264:
    // 0x31f264: 0xc123944  jal         func_48E510
label_31f268:
    if (ctx->pc == 0x31F268u) {
        ctx->pc = 0x31F268u;
            // 0x31f268: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x31F26Cu;
        goto label_31f26c;
    }
    ctx->pc = 0x31F264u;
    SET_GPR_U32(ctx, 31, 0x31F26Cu);
    ctx->pc = 0x31F268u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31F264u;
            // 0x31f268: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F26Cu; }
        if (ctx->pc != 0x31F26Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F26Cu; }
        if (ctx->pc != 0x31F26Cu) { return; }
    }
    ctx->pc = 0x31F26Cu;
label_31f26c:
    // 0x31f26c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x31f26cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_31f270:
    // 0x31f270: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x31f270u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_31f274:
    // 0x31f274: 0xafa20454  sw          $v0, 0x454($sp)
    ctx->pc = 0x31f274u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1108), GPR_U32(ctx, 2));
label_31f278:
    // 0x31f278: 0x24a5c518  addiu       $a1, $a1, -0x3AE8
    ctx->pc = 0x31f278u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952216));
label_31f27c:
    // 0x31f27c: 0xc123944  jal         func_48E510
label_31f280:
    if (ctx->pc == 0x31F280u) {
        ctx->pc = 0x31F280u;
            // 0x31f280: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x31F284u;
        goto label_31f284;
    }
    ctx->pc = 0x31F27Cu;
    SET_GPR_U32(ctx, 31, 0x31F284u);
    ctx->pc = 0x31F280u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31F27Cu;
            // 0x31f280: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F284u; }
        if (ctx->pc != 0x31F284u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F284u; }
        if (ctx->pc != 0x31F284u) { return; }
    }
    ctx->pc = 0x31F284u;
label_31f284:
    // 0x31f284: 0xafa20458  sw          $v0, 0x458($sp)
    ctx->pc = 0x31f284u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1112), GPR_U32(ctx, 2));
label_31f288:
    // 0x31f288: 0x32a20002  andi        $v0, $s5, 0x2
    ctx->pc = 0x31f288u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)2);
label_31f28c:
    // 0x31f28c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_31f290:
    if (ctx->pc == 0x31F290u) {
        ctx->pc = 0x31F290u;
            // 0x31f290: 0xafb301b8  sw          $s3, 0x1B8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 440), GPR_U32(ctx, 19));
        ctx->pc = 0x31F294u;
        goto label_31f294;
    }
    ctx->pc = 0x31F28Cu;
    {
        const bool branch_taken_0x31f28c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F290u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31F28Cu;
            // 0x31f290: 0xafb301b8  sw          $s3, 0x1B8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 440), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f28c) {
            ctx->pc = 0x31F2D8u;
            goto label_31f2d8;
        }
    }
    ctx->pc = 0x31F294u;
label_31f294:
    // 0x31f294: 0x8fa201f8  lw          $v0, 0x1F8($sp)
    ctx->pc = 0x31f294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
label_31f298:
    // 0x31f298: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x31f298u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_31f29c:
    // 0x31f29c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x31f29cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_31f2a0:
    // 0x31f2a0: 0x24a5c530  addiu       $a1, $a1, -0x3AD0
    ctx->pc = 0x31f2a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952240));
label_31f2a4:
    // 0x31f2a4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x31f2a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31f2a8:
    // 0x31f2a8: 0x24420604  addiu       $v0, $v0, 0x604
    ctx->pc = 0x31f2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1540));
label_31f2ac:
    // 0x31f2ac: 0xafa201e0  sw          $v0, 0x1E0($sp)
    ctx->pc = 0x31f2acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 480), GPR_U32(ctx, 2));
label_31f2b0:
    // 0x31f2b0: 0x8fa204e8  lw          $v0, 0x4E8($sp)
    ctx->pc = 0x31f2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1256)));
label_31f2b4:
    // 0x31f2b4: 0xafa201d0  sw          $v0, 0x1D0($sp)
    ctx->pc = 0x31f2b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 464), GPR_U32(ctx, 2));
label_31f2b8:
    // 0x31f2b8: 0x8fa204d8  lw          $v0, 0x4D8($sp)
    ctx->pc = 0x31f2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1240)));
label_31f2bc:
    // 0x31f2bc: 0xc123944  jal         func_48E510
label_31f2c0:
    if (ctx->pc == 0x31F2C0u) {
        ctx->pc = 0x31F2C0u;
            // 0x31f2c0: 0xafa201c0  sw          $v0, 0x1C0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 448), GPR_U32(ctx, 2));
        ctx->pc = 0x31F2C4u;
        goto label_31f2c4;
    }
    ctx->pc = 0x31F2BCu;
    SET_GPR_U32(ctx, 31, 0x31F2C4u);
    ctx->pc = 0x31F2C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31F2BCu;
            // 0x31f2c0: 0xafa201c0  sw          $v0, 0x1C0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 448), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F2C4u; }
        if (ctx->pc != 0x31F2C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F2C4u; }
        if (ctx->pc != 0x31F2C4u) { return; }
    }
    ctx->pc = 0x31F2C4u;
label_31f2c4:
    // 0x31f2c4: 0x2e610009  sltiu       $at, $s3, 0x9
    ctx->pc = 0x31f2c4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_31f2c8:
    // 0x31f2c8: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
label_31f2cc:
    if (ctx->pc == 0x31F2CCu) {
        ctx->pc = 0x31F2CCu;
            // 0x31f2cc: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x31F2D0u;
        goto label_31f2d0;
    }
    ctx->pc = 0x31F2C8u;
    {
        const bool branch_taken_0x31f2c8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F2CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31F2C8u;
            // 0x31f2cc: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f2c8) {
            ctx->pc = 0x31F30Cu;
            goto label_31f30c;
        }
    }
    ctx->pc = 0x31F2D0u;
label_31f2d0:
    // 0x31f2d0: 0x1000000e  b           . + 4 + (0xE << 2)
label_31f2d4:
    if (ctx->pc == 0x31F2D4u) {
        ctx->pc = 0x31F2D4u;
            // 0x31f2d4: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->pc = 0x31F2D8u;
        goto label_31f2d8;
    }
    ctx->pc = 0x31F2D0u;
    {
        const bool branch_taken_0x31f2d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F2D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31F2D0u;
            // 0x31f2d4: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f2d0) {
            ctx->pc = 0x31F30Cu;
            goto label_31f30c;
        }
    }
    ctx->pc = 0x31F2D8u;
label_31f2d8:
    // 0x31f2d8: 0x8fa201f8  lw          $v0, 0x1F8($sp)
    ctx->pc = 0x31f2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
label_31f2dc:
    // 0x31f2dc: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x31f2dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_31f2e0:
    // 0x31f2e0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x31f2e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_31f2e4:
    // 0x31f2e4: 0x24a5c550  addiu       $a1, $a1, -0x3AB0
    ctx->pc = 0x31f2e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952272));
label_31f2e8:
    // 0x31f2e8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x31f2e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31f2ec:
    // 0x31f2ec: 0x244205fc  addiu       $v0, $v0, 0x5FC
    ctx->pc = 0x31f2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1532));
label_31f2f0:
    // 0x31f2f0: 0xafa201e0  sw          $v0, 0x1E0($sp)
    ctx->pc = 0x31f2f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 480), GPR_U32(ctx, 2));
label_31f2f4:
    // 0x31f2f4: 0x8fa204e4  lw          $v0, 0x4E4($sp)
    ctx->pc = 0x31f2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1252)));
label_31f2f8:
    // 0x31f2f8: 0xafa201d0  sw          $v0, 0x1D0($sp)
    ctx->pc = 0x31f2f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 464), GPR_U32(ctx, 2));
label_31f2fc:
    // 0x31f2fc: 0x8fa204d4  lw          $v0, 0x4D4($sp)
    ctx->pc = 0x31f2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1236)));
label_31f300:
    // 0x31f300: 0xc123944  jal         func_48E510
label_31f304:
    if (ctx->pc == 0x31F304u) {
        ctx->pc = 0x31F304u;
            // 0x31f304: 0xafa201c0  sw          $v0, 0x1C0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 448), GPR_U32(ctx, 2));
        ctx->pc = 0x31F308u;
        goto label_31f308;
    }
    ctx->pc = 0x31F300u;
    SET_GPR_U32(ctx, 31, 0x31F308u);
    ctx->pc = 0x31F304u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31F300u;
            // 0x31f304: 0xafa201c0  sw          $v0, 0x1C0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 448), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F308u; }
        if (ctx->pc != 0x31F308u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F308u; }
        if (ctx->pc != 0x31F308u) { return; }
    }
    ctx->pc = 0x31F308u;
label_31f308:
    // 0x31f308: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x31f308u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31f30c:
    // 0x31f30c: 0x2665ffff  addiu       $a1, $s3, -0x1
    ctx->pc = 0x31f30cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_31f310:
    // 0x31f310: 0x26840030  addiu       $a0, $s4, 0x30
    ctx->pc = 0x31f310u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
label_31f314:
    // 0x31f314: 0xc0b90e0  jal         func_2E4380
label_31f318:
    if (ctx->pc == 0x31F318u) {
        ctx->pc = 0x31F318u;
            // 0x31f318: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x31F31Cu;
        goto label_31f31c;
    }
    ctx->pc = 0x31F314u;
    SET_GPR_U32(ctx, 31, 0x31F31Cu);
    ctx->pc = 0x31F318u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31F314u;
            // 0x31f318: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4380u;
    if (runtime->hasFunction(0x2E4380u)) {
        auto targetFn = runtime->lookupFunction(0x2E4380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F31Cu; }
        if (ctx->pc != 0x31F31Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4380_0x2e4380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F31Cu; }
        if (ctx->pc != 0x31F31Cu) { return; }
    }
    ctx->pc = 0x31F31Cu;
label_31f31c:
    // 0x31f31c: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_31f320:
    if (ctx->pc == 0x31F320u) {
        ctx->pc = 0x31F320u;
            // 0x31f320: 0x2662ffff  addiu       $v0, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->pc = 0x31F324u;
        goto label_31f324;
    }
    ctx->pc = 0x31F31Cu;
    {
        const bool branch_taken_0x31f31c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31f31c) {
            ctx->pc = 0x31F320u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x31F31Cu;
            // 0x31f320: 0x2662ffff  addiu       $v0, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x31F32Cu;
            goto label_31f32c;
        }
    }
    ctx->pc = 0x31F324u;
label_31f324:
    // 0x31f324: 0x36d6000f  ori         $s6, $s6, 0xF
    ctx->pc = 0x31f324u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) | (uint64_t)(uint16_t)15);
label_31f328:
    // 0x31f328: 0x2662ffff  addiu       $v0, $s3, -0x1
    ctx->pc = 0x31f328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_31f32c:
    // 0x31f32c: 0x2684003c  addiu       $a0, $s4, 0x3C
    ctx->pc = 0x31f32cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 60));
label_31f330:
    // 0x31f330: 0xc0b90e0  jal         func_2E4380
label_31f334:
    if (ctx->pc == 0x31F334u) {
        ctx->pc = 0x31F334u;
            // 0x31f334: 0x228c0  sll         $a1, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->pc = 0x31F338u;
        goto label_31f338;
    }
    ctx->pc = 0x31F330u;
    SET_GPR_U32(ctx, 31, 0x31F338u);
    ctx->pc = 0x31F334u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31F330u;
            // 0x31f334: 0x228c0  sll         $a1, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4380u;
    if (runtime->hasFunction(0x2E4380u)) {
        auto targetFn = runtime->lookupFunction(0x2E4380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F338u; }
        if (ctx->pc != 0x31F338u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4380_0x2e4380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F338u; }
        if (ctx->pc != 0x31F338u) { return; }
    }
    ctx->pc = 0x31F338u;
label_31f338:
    // 0x31f338: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
label_31f33c:
    if (ctx->pc == 0x31F33Cu) {
        ctx->pc = 0x31F33Cu;
            // 0x31f33c: 0x2662ffff  addiu       $v0, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->pc = 0x31F340u;
        goto label_31f340;
    }
    ctx->pc = 0x31F338u;
    {
        const bool branch_taken_0x31f338 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31f338) {
            ctx->pc = 0x31F33Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x31F338u;
            // 0x31f33c: 0x2662ffff  addiu       $v0, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x31F38Cu;
            goto label_31f38c;
        }
    }
    ctx->pc = 0x31F340u;
label_31f340:
    // 0x31f340: 0x2662ffff  addiu       $v0, $s3, -0x1
    ctx->pc = 0x31f340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_31f344:
    // 0x31f344: 0x2684003c  addiu       $a0, $s4, 0x3C
    ctx->pc = 0x31f344u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 60));
label_31f348:
    // 0x31f348: 0x290c0  sll         $s2, $v0, 3
    ctx->pc = 0x31f348u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_31f34c:
    // 0x31f34c: 0xc0b90e0  jal         func_2E4380
label_31f350:
    if (ctx->pc == 0x31F350u) {
        ctx->pc = 0x31F350u;
            // 0x31f350: 0x26450001  addiu       $a1, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->pc = 0x31F354u;
        goto label_31f354;
    }
    ctx->pc = 0x31F34Cu;
    SET_GPR_U32(ctx, 31, 0x31F354u);
    ctx->pc = 0x31F350u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31F34Cu;
            // 0x31f350: 0x26450001  addiu       $a1, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4380u;
    if (runtime->hasFunction(0x2E4380u)) {
        auto targetFn = runtime->lookupFunction(0x2E4380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F354u; }
        if (ctx->pc != 0x31F354u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4380_0x2e4380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F354u; }
        if (ctx->pc != 0x31F354u) { return; }
    }
    ctx->pc = 0x31F354u;
label_31f354:
    // 0x31f354: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_31f358:
    if (ctx->pc == 0x31F358u) {
        ctx->pc = 0x31F35Cu;
        goto label_31f35c;
    }
    ctx->pc = 0x31F354u;
    {
        const bool branch_taken_0x31f354 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31f354) {
            ctx->pc = 0x31F388u;
            goto label_31f388;
        }
    }
    ctx->pc = 0x31F35Cu;
label_31f35c:
    // 0x31f35c: 0x26450002  addiu       $a1, $s2, 0x2
    ctx->pc = 0x31f35cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
label_31f360:
    // 0x31f360: 0xc0b90e0  jal         func_2E4380
label_31f364:
    if (ctx->pc == 0x31F364u) {
        ctx->pc = 0x31F364u;
            // 0x31f364: 0x2684003c  addiu       $a0, $s4, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 60));
        ctx->pc = 0x31F368u;
        goto label_31f368;
    }
    ctx->pc = 0x31F360u;
    SET_GPR_U32(ctx, 31, 0x31F368u);
    ctx->pc = 0x31F364u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31F360u;
            // 0x31f364: 0x2684003c  addiu       $a0, $s4, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4380u;
    if (runtime->hasFunction(0x2E4380u)) {
        auto targetFn = runtime->lookupFunction(0x2E4380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F368u; }
        if (ctx->pc != 0x31F368u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4380_0x2e4380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F368u; }
        if (ctx->pc != 0x31F368u) { return; }
    }
    ctx->pc = 0x31F368u;
label_31f368:
    // 0x31f368: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_31f36c:
    if (ctx->pc == 0x31F36Cu) {
        ctx->pc = 0x31F370u;
        goto label_31f370;
    }
    ctx->pc = 0x31F368u;
    {
        const bool branch_taken_0x31f368 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31f368) {
            ctx->pc = 0x31F388u;
            goto label_31f388;
        }
    }
    ctx->pc = 0x31F370u;
label_31f370:
    // 0x31f370: 0x26450003  addiu       $a1, $s2, 0x3
    ctx->pc = 0x31f370u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 3));
label_31f374:
    // 0x31f374: 0xc0b90e0  jal         func_2E4380
label_31f378:
    if (ctx->pc == 0x31F378u) {
        ctx->pc = 0x31F378u;
            // 0x31f378: 0x2684003c  addiu       $a0, $s4, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 60));
        ctx->pc = 0x31F37Cu;
        goto label_31f37c;
    }
    ctx->pc = 0x31F374u;
    SET_GPR_U32(ctx, 31, 0x31F37Cu);
    ctx->pc = 0x31F378u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31F374u;
            // 0x31f378: 0x2684003c  addiu       $a0, $s4, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4380u;
    if (runtime->hasFunction(0x2E4380u)) {
        auto targetFn = runtime->lookupFunction(0x2E4380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F37Cu; }
        if (ctx->pc != 0x31F37Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4380_0x2e4380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F37Cu; }
        if (ctx->pc != 0x31F37Cu) { return; }
    }
    ctx->pc = 0x31F37Cu;
label_31f37c:
    // 0x31f37c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_31f380:
    if (ctx->pc == 0x31F380u) {
        ctx->pc = 0x31F384u;
        goto label_31f384;
    }
    ctx->pc = 0x31F37Cu;
    {
        const bool branch_taken_0x31f37c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31f37c) {
            ctx->pc = 0x31F388u;
            goto label_31f388;
        }
    }
    ctx->pc = 0x31F384u;
label_31f384:
    // 0x31f384: 0x36d60010  ori         $s6, $s6, 0x10
    ctx->pc = 0x31f384u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) | (uint64_t)(uint16_t)16);
label_31f388:
    // 0x31f388: 0x2662ffff  addiu       $v0, $s3, -0x1
    ctx->pc = 0x31f388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_31f38c:
    // 0x31f38c: 0x2684003c  addiu       $a0, $s4, 0x3C
    ctx->pc = 0x31f38cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 60));
label_31f390:
    // 0x31f390: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x31f390u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_31f394:
    // 0x31f394: 0xafa20110  sw          $v0, 0x110($sp)
    ctx->pc = 0x31f394u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 2));
label_31f398:
    // 0x31f398: 0xc0b90e0  jal         func_2E4380
label_31f39c:
    if (ctx->pc == 0x31F39Cu) {
        ctx->pc = 0x31F39Cu;
            // 0x31f39c: 0x24450004  addiu       $a1, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x31F3A0u;
        goto label_31f3a0;
    }
    ctx->pc = 0x31F398u;
    SET_GPR_U32(ctx, 31, 0x31F3A0u);
    ctx->pc = 0x31F39Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31F398u;
            // 0x31f39c: 0x24450004  addiu       $a1, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4380u;
    if (runtime->hasFunction(0x2E4380u)) {
        auto targetFn = runtime->lookupFunction(0x2E4380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F3A0u; }
        if (ctx->pc != 0x31F3A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4380_0x2e4380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F3A0u; }
        if (ctx->pc != 0x31F3A0u) { return; }
    }
    ctx->pc = 0x31F3A0u;
label_31f3a0:
    // 0x31f3a0: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_31f3a4:
    if (ctx->pc == 0x31F3A4u) {
        ctx->pc = 0x31F3A4u;
            // 0x31f3a4: 0x8fa20110  lw          $v0, 0x110($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->pc = 0x31F3A8u;
        goto label_31f3a8;
    }
    ctx->pc = 0x31F3A0u;
    {
        const bool branch_taken_0x31f3a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31f3a0) {
            ctx->pc = 0x31F3A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x31F3A0u;
            // 0x31f3a4: 0x8fa20110  lw          $v0, 0x110($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x31F3B0u;
            goto label_31f3b0;
        }
    }
    ctx->pc = 0x31F3A8u;
label_31f3a8:
    // 0x31f3a8: 0x36d60020  ori         $s6, $s6, 0x20
    ctx->pc = 0x31f3a8u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) | (uint64_t)(uint16_t)32);
label_31f3ac:
    // 0x31f3ac: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x31f3acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_31f3b0:
    // 0x31f3b0: 0x2684003c  addiu       $a0, $s4, 0x3C
    ctx->pc = 0x31f3b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 60));
label_31f3b4:
    // 0x31f3b4: 0xc0b90e0  jal         func_2E4380
label_31f3b8:
    if (ctx->pc == 0x31F3B8u) {
        ctx->pc = 0x31F3B8u;
            // 0x31f3b8: 0x24450005  addiu       $a1, $v0, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
        ctx->pc = 0x31F3BCu;
        goto label_31f3bc;
    }
    ctx->pc = 0x31F3B4u;
    SET_GPR_U32(ctx, 31, 0x31F3BCu);
    ctx->pc = 0x31F3B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31F3B4u;
            // 0x31f3b8: 0x24450005  addiu       $a1, $v0, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4380u;
    if (runtime->hasFunction(0x2E4380u)) {
        auto targetFn = runtime->lookupFunction(0x2E4380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F3BCu; }
        if (ctx->pc != 0x31F3BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4380_0x2e4380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F3BCu; }
        if (ctx->pc != 0x31F3BCu) { return; }
    }
    ctx->pc = 0x31F3BCu;
label_31f3bc:
    // 0x31f3bc: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_31f3c0:
    if (ctx->pc == 0x31F3C0u) {
        ctx->pc = 0x31F3C0u;
            // 0x31f3c0: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x31F3C4u;
        goto label_31f3c4;
    }
    ctx->pc = 0x31F3BCu;
    {
        const bool branch_taken_0x31f3bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31f3bc) {
            ctx->pc = 0x31F3C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x31F3BCu;
            // 0x31f3c0: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x31F3CCu;
            goto label_31f3cc;
        }
    }
    ctx->pc = 0x31F3C4u;
label_31f3c4:
    // 0x31f3c4: 0x36d60040  ori         $s6, $s6, 0x40
    ctx->pc = 0x31f3c4u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) | (uint64_t)(uint16_t)64);
label_31f3c8:
    // 0x31f3c8: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x31f3c8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31f3cc:
    // 0x31f3cc: 0x27b20460  addiu       $s2, $sp, 0x460
    ctx->pc = 0x31f3ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 1120));
label_31f3d0:
    // 0x31f3d0: 0x27b70480  addiu       $s7, $sp, 0x480
    ctx->pc = 0x31f3d0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 1152));
label_31f3d4:
    // 0x31f3d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31f3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31f3d8:
    // 0x31f3d8: 0x2a21004  sllv        $v0, $v0, $s5
    ctx->pc = 0x31f3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 21) & 0x1F));
label_31f3dc:
    // 0x31f3dc: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x31f3dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_31f3e0:
    // 0x31f3e0: 0x2c21024  and         $v0, $s6, $v0
    ctx->pc = 0x31f3e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & GPR_U64(ctx, 2));
label_31f3e4:
    // 0x31f3e4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_31f3e8:
    if (ctx->pc == 0x31F3E8u) {
        ctx->pc = 0x31F3ECu;
        goto label_31f3ec;
    }
    ctx->pc = 0x31F3E4u;
    {
        const bool branch_taken_0x31f3e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31f3e4) {
            ctx->pc = 0x31F410u;
            goto label_31f410;
        }
    }
    ctx->pc = 0x31F3ECu;
label_31f3ec:
    // 0x31f3ec: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x31f3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_31f3f0:
    // 0x31f3f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x31f3f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_31f3f4:
    // 0x31f3f4: 0x8ee60000  lw          $a2, 0x0($s7)
    ctx->pc = 0x31f3f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_31f3f8:
    // 0x31f3f8: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x31f3f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_31f3fc:
    // 0x31f3fc: 0xc123654  jal         func_48D950
label_31f400:
    if (ctx->pc == 0x31F400u) {
        ctx->pc = 0x31F400u;
            // 0x31f400: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x31F404u;
        goto label_31f404;
    }
    ctx->pc = 0x31F3FCu;
    SET_GPR_U32(ctx, 31, 0x31F404u);
    ctx->pc = 0x31F400u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31F3FCu;
            // 0x31f400: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F404u; }
        if (ctx->pc != 0x31F404u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F404u; }
        if (ctx->pc != 0x31F404u) { return; }
    }
    ctx->pc = 0x31F404u;
label_31f404:
    // 0x31f404: 0x10000008  b           . + 4 + (0x8 << 2)
label_31f408:
    if (ctx->pc == 0x31F408u) {
        ctx->pc = 0x31F40Cu;
        goto label_31f40c;
    }
    ctx->pc = 0x31F404u;
    {
        const bool branch_taken_0x31f404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31f404) {
            ctx->pc = 0x31F428u;
            goto label_31f428;
        }
    }
    ctx->pc = 0x31F40Cu;
label_31f40c:
    // 0x31f40c: 0x0  nop
    ctx->pc = 0x31f40cu;
    // NOP
label_31f410:
    // 0x31f410: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x31f410u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_31f414:
    // 0x31f414: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x31f414u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_31f418:
    // 0x31f418: 0x8cc50008  lw          $a1, 0x8($a2)
    ctx->pc = 0x31f418u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_31f41c:
    // 0x31f41c: 0xc123654  jal         func_48D950
label_31f420:
    if (ctx->pc == 0x31F420u) {
        ctx->pc = 0x31F420u;
            // 0x31f420: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x31F424u;
        goto label_31f424;
    }
    ctx->pc = 0x31F41Cu;
    SET_GPR_U32(ctx, 31, 0x31F424u);
    ctx->pc = 0x31F420u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31F41Cu;
            // 0x31f420: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F424u; }
        if (ctx->pc != 0x31F424u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F424u; }
        if (ctx->pc != 0x31F424u) { return; }
    }
    ctx->pc = 0x31F424u;
label_31f424:
    // 0x31f424: 0x0  nop
    ctx->pc = 0x31f424u;
    // NOP
label_31f428:
    // 0x31f428: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x31f428u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_31f42c:
    // 0x31f42c: 0x2aa20007  slti        $v0, $s5, 0x7
    ctx->pc = 0x31f42cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)7) ? 1 : 0);
label_31f430:
    // 0x31f430: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x31f430u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_31f434:
    // 0x31f434: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
label_31f438:
    if (ctx->pc == 0x31F438u) {
        ctx->pc = 0x31F438u;
            // 0x31f438: 0x26f70004  addiu       $s7, $s7, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4));
        ctx->pc = 0x31F43Cu;
        goto label_31f43c;
    }
    ctx->pc = 0x31F434u;
    {
        const bool branch_taken_0x31f434 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31F438u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31F434u;
            // 0x31f438: 0x26f70004  addiu       $s7, $s7, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f434) {
            ctx->pc = 0x31F3D4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_31f3d4;
        }
    }
    ctx->pc = 0x31F43Cu;
label_31f43c:
    // 0x31f43c: 0x1310c0  sll         $v0, $s3, 3
    ctx->pc = 0x31f43cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
label_31f440:
    // 0x31f440: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x31f440u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31f444:
    // 0x31f444: 0x27b50440  addiu       $s5, $sp, 0x440
    ctx->pc = 0x31f444u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
label_31f448:
    // 0x31f448: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x31f448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
label_31f44c:
    // 0x31f44c: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x31f44cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_31f450:
    // 0x31f450: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x31f450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31f454:
    // 0x31f454: 0x26840048  addiu       $a0, $s4, 0x48
    ctx->pc = 0x31f454u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 72));
label_31f458:
    // 0x31f458: 0x242b821  addu        $s7, $s2, $v0
    ctx->pc = 0x31f458u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_31f45c:
    // 0x31f45c: 0x2431004  sllv        $v0, $v1, $s2
    ctx->pc = 0x31f45cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 18) & 0x1F));
label_31f460:
    // 0x31f460: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x31f460u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_31f464:
    // 0x31f464: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x31f464u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_31f468:
    // 0x31f468: 0x2c21024  and         $v0, $s6, $v0
    ctx->pc = 0x31f468u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & GPR_U64(ctx, 2));
label_31f46c:
    // 0x31f46c: 0xc0b90e0  jal         func_2E4380
label_31f470:
    if (ctx->pc == 0x31F470u) {
        ctx->pc = 0x31F470u;
            // 0x31f470: 0x2f02b  sltu        $fp, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 30, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x31F474u;
        goto label_31f474;
    }
    ctx->pc = 0x31F46Cu;
    SET_GPR_U32(ctx, 31, 0x31F474u);
    ctx->pc = 0x31F470u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31F46Cu;
            // 0x31f470: 0x2f02b  sltu        $fp, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 30, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4380u;
    if (runtime->hasFunction(0x2E4380u)) {
        auto targetFn = runtime->lookupFunction(0x2E4380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F474u; }
        if (ctx->pc != 0x31F474u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4380_0x2e4380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F474u; }
        if (ctx->pc != 0x31F474u) { return; }
    }
    ctx->pc = 0x31F474u;
label_31f474:
    // 0x31f474: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31f474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_31f478:
    // 0x31f478: 0x10400045  beqz        $v0, . + 4 + (0x45 << 2)
label_31f47c:
    if (ctx->pc == 0x31F47Cu) {
        ctx->pc = 0x31F480u;
        goto label_31f480;
    }
    ctx->pc = 0x31F478u;
    {
        const bool branch_taken_0x31f478 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31f478) {
            ctx->pc = 0x31F590u;
            goto label_31f590;
        }
    }
    ctx->pc = 0x31F480u;
label_31f480:
    // 0x31f480: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x31f480u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_31f484:
    // 0x31f484: 0xc0b90e0  jal         func_2E4380
label_31f488:
    if (ctx->pc == 0x31F488u) {
        ctx->pc = 0x31F488u;
            // 0x31f488: 0x2684003c  addiu       $a0, $s4, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 60));
        ctx->pc = 0x31F48Cu;
        goto label_31f48c;
    }
    ctx->pc = 0x31F484u;
    SET_GPR_U32(ctx, 31, 0x31F48Cu);
    ctx->pc = 0x31F488u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31F484u;
            // 0x31f488: 0x2684003c  addiu       $a0, $s4, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4380u;
    if (runtime->hasFunction(0x2E4380u)) {
        auto targetFn = runtime->lookupFunction(0x2E4380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F48Cu; }
        if (ctx->pc != 0x31F48Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4380_0x2e4380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F48Cu; }
        if (ctx->pc != 0x31F48Cu) { return; }
    }
    ctx->pc = 0x31F48Cu;
label_31f48c:
    // 0x31f48c: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
label_31f490:
    if (ctx->pc == 0x31F490u) {
        ctx->pc = 0x31F494u;
        goto label_31f494;
    }
    ctx->pc = 0x31F48Cu;
    {
        const bool branch_taken_0x31f48c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31f48c) {
            ctx->pc = 0x31F570u;
            goto label_31f570;
        }
    }
    ctx->pc = 0x31F494u;
label_31f494:
    // 0x31f494: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x31f494u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_31f498:
    // 0x31f498: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x31f498u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_31f49c:
    // 0x31f49c: 0x24a5c568  addiu       $a1, $a1, -0x3A98
    ctx->pc = 0x31f49cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952296));
label_31f4a0:
    // 0x31f4a0: 0xc123944  jal         func_48E510
label_31f4a4:
    if (ctx->pc == 0x31F4A4u) {
        ctx->pc = 0x31F4A4u;
            // 0x31f4a4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x31F4A8u;
        goto label_31f4a8;
    }
    ctx->pc = 0x31F4A0u;
    SET_GPR_U32(ctx, 31, 0x31F4A8u);
    ctx->pc = 0x31F4A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31F4A0u;
            // 0x31f4a4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F4A8u; }
        if (ctx->pc != 0x31F4A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F4A8u; }
        if (ctx->pc != 0x31F4A8u) { return; }
    }
    ctx->pc = 0x31F4A8u;
label_31f4a8:
    // 0x31f4a8: 0x8e850004  lw          $a1, 0x4($s4)
    ctx->pc = 0x31f4a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_31f4ac:
    // 0x31f4ac: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x31f4acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_31f4b0:
    // 0x31f4b0: 0x7ba300d0  lq          $v1, 0xD0($sp)
    ctx->pc = 0x31f4b0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_31f4b4:
    // 0x31f4b4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x31f4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_31f4b8:
    // 0x31f4b8: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x31f4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_31f4bc:
    // 0x31f4bc: 0x90650440  lbu         $a1, 0x440($v1)
    ctx->pc = 0x31f4bcu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1088)));
label_31f4c0:
    // 0x31f4c0: 0x10a4001d  beq         $a1, $a0, . + 4 + (0x1D << 2)
label_31f4c4:
    if (ctx->pc == 0x31F4C4u) {
        ctx->pc = 0x31F4C8u;
        goto label_31f4c8;
    }
    ctx->pc = 0x31F4C0u;
    {
        const bool branch_taken_0x31f4c0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x31f4c0) {
            ctx->pc = 0x31F538u;
            goto label_31f538;
        }
    }
    ctx->pc = 0x31F4C8u;
label_31f4c8:
    // 0x31f4c8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x31f4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_31f4cc:
    // 0x31f4cc: 0x10a30012  beq         $a1, $v1, . + 4 + (0x12 << 2)
label_31f4d0:
    if (ctx->pc == 0x31F4D0u) {
        ctx->pc = 0x31F4D4u;
        goto label_31f4d4;
    }
    ctx->pc = 0x31F4CCu;
    {
        const bool branch_taken_0x31f4cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x31f4cc) {
            ctx->pc = 0x31F518u;
            goto label_31f518;
        }
    }
    ctx->pc = 0x31F4D4u;
label_31f4d4:
    // 0x31f4d4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x31f4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31f4d8:
    // 0x31f4d8: 0x10a30007  beq         $a1, $v1, . + 4 + (0x7 << 2)
label_31f4dc:
    if (ctx->pc == 0x31F4DCu) {
        ctx->pc = 0x31F4E0u;
        goto label_31f4e0;
    }
    ctx->pc = 0x31F4D8u;
    {
        const bool branch_taken_0x31f4d8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x31f4d8) {
            ctx->pc = 0x31F4F8u;
            goto label_31f4f8;
        }
    }
    ctx->pc = 0x31F4E0u;
label_31f4e0:
    // 0x31f4e0: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_31f4e4:
    if (ctx->pc == 0x31F4E4u) {
        ctx->pc = 0x31F4E8u;
        goto label_31f4e8;
    }
    ctx->pc = 0x31F4E0u;
    {
        const bool branch_taken_0x31f4e0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x31f4e0) {
            ctx->pc = 0x31F4F0u;
            goto label_31f4f0;
        }
    }
    ctx->pc = 0x31F4E8u;
label_31f4e8:
    // 0x31f4e8: 0x10000019  b           . + 4 + (0x19 << 2)
label_31f4ec:
    if (ctx->pc == 0x31F4ECu) {
        ctx->pc = 0x31F4F0u;
        goto label_31f4f0;
    }
    ctx->pc = 0x31F4E8u;
    {
        const bool branch_taken_0x31f4e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31f4e8) {
            ctx->pc = 0x31F550u;
            goto label_31f550;
        }
    }
    ctx->pc = 0x31F4F0u;
label_31f4f0:
    // 0x31f4f0: 0x10000017  b           . + 4 + (0x17 << 2)
label_31f4f4:
    if (ctx->pc == 0x31F4F4u) {
        ctx->pc = 0x31F4F4u;
            // 0x31f4f4: 0x8ea20000  lw          $v0, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->pc = 0x31F4F8u;
        goto label_31f4f8;
    }
    ctx->pc = 0x31F4F0u;
    {
        const bool branch_taken_0x31f4f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F4F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31F4F0u;
            // 0x31f4f4: 0x8ea20000  lw          $v0, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f4f0) {
            ctx->pc = 0x31F550u;
            goto label_31f550;
        }
    }
    ctx->pc = 0x31F4F8u;
label_31f4f8:
    // 0x31f4f8: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x31f4f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_31f4fc:
    // 0x31f4fc: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x31f4fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_31f500:
    // 0x31f500: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x31f500u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31f504:
    // 0x31f504: 0xc123944  jal         func_48E510
label_31f508:
    if (ctx->pc == 0x31F508u) {
        ctx->pc = 0x31F508u;
            // 0x31f508: 0x24a5c570  addiu       $a1, $a1, -0x3A90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952304));
        ctx->pc = 0x31F50Cu;
        goto label_31f50c;
    }
    ctx->pc = 0x31F504u;
    SET_GPR_U32(ctx, 31, 0x31F50Cu);
    ctx->pc = 0x31F508u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31F504u;
            // 0x31f508: 0x24a5c570  addiu       $a1, $a1, -0x3A90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F50Cu; }
        if (ctx->pc != 0x31F50Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F50Cu; }
        if (ctx->pc != 0x31F50Cu) { return; }
    }
    ctx->pc = 0x31F50Cu;
label_31f50c:
    // 0x31f50c: 0x10000010  b           . + 4 + (0x10 << 2)
label_31f510:
    if (ctx->pc == 0x31F510u) {
        ctx->pc = 0x31F514u;
        goto label_31f514;
    }
    ctx->pc = 0x31F50Cu;
    {
        const bool branch_taken_0x31f50c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31f50c) {
            ctx->pc = 0x31F550u;
            goto label_31f550;
        }
    }
    ctx->pc = 0x31F514u;
label_31f514:
    // 0x31f514: 0x0  nop
    ctx->pc = 0x31f514u;
    // NOP
label_31f518:
    // 0x31f518: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x31f518u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_31f51c:
    // 0x31f51c: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x31f51cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_31f520:
    // 0x31f520: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x31f520u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31f524:
    // 0x31f524: 0xc123944  jal         func_48E510
label_31f528:
    if (ctx->pc == 0x31F528u) {
        ctx->pc = 0x31F528u;
            // 0x31f528: 0x24a5c578  addiu       $a1, $a1, -0x3A88 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952312));
        ctx->pc = 0x31F52Cu;
        goto label_31f52c;
    }
    ctx->pc = 0x31F524u;
    SET_GPR_U32(ctx, 31, 0x31F52Cu);
    ctx->pc = 0x31F528u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31F524u;
            // 0x31f528: 0x24a5c578  addiu       $a1, $a1, -0x3A88 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952312));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F52Cu; }
        if (ctx->pc != 0x31F52Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F52Cu; }
        if (ctx->pc != 0x31F52Cu) { return; }
    }
    ctx->pc = 0x31F52Cu;
label_31f52c:
    // 0x31f52c: 0x10000008  b           . + 4 + (0x8 << 2)
label_31f530:
    if (ctx->pc == 0x31F530u) {
        ctx->pc = 0x31F534u;
        goto label_31f534;
    }
    ctx->pc = 0x31F52Cu;
    {
        const bool branch_taken_0x31f52c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31f52c) {
            ctx->pc = 0x31F550u;
            goto label_31f550;
        }
    }
    ctx->pc = 0x31F534u;
label_31f534:
    // 0x31f534: 0x0  nop
    ctx->pc = 0x31f534u;
    // NOP
label_31f538:
    // 0x31f538: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x31f538u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_31f53c:
    // 0x31f53c: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x31f53cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_31f540:
    // 0x31f540: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x31f540u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31f544:
    // 0x31f544: 0xc123944  jal         func_48E510
label_31f548:
    if (ctx->pc == 0x31F548u) {
        ctx->pc = 0x31F548u;
            // 0x31f548: 0x24a5c580  addiu       $a1, $a1, -0x3A80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952320));
        ctx->pc = 0x31F54Cu;
        goto label_31f54c;
    }
    ctx->pc = 0x31F544u;
    SET_GPR_U32(ctx, 31, 0x31F54Cu);
    ctx->pc = 0x31F548u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31F544u;
            // 0x31f548: 0x24a5c580  addiu       $a1, $a1, -0x3A80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F54Cu; }
        if (ctx->pc != 0x31F54Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F54Cu; }
        if (ctx->pc != 0x31F54Cu) { return; }
    }
    ctx->pc = 0x31F54Cu;
label_31f54c:
    // 0x31f54c: 0x0  nop
    ctx->pc = 0x31f54cu;
    // NOP
label_31f550:
    // 0x31f550: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x31f550u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31f554:
    // 0x31f554: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x31f554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_31f558:
    // 0x31f558: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x31f558u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_31f55c:
    // 0x31f55c: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x31f55cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_31f560:
    // 0x31f560: 0xc123654  jal         func_48D950
label_31f564:
    if (ctx->pc == 0x31F564u) {
        ctx->pc = 0x31F564u;
            // 0x31f564: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x31F568u;
        goto label_31f568;
    }
    ctx->pc = 0x31F560u;
    SET_GPR_U32(ctx, 31, 0x31F568u);
    ctx->pc = 0x31F564u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31F560u;
            // 0x31f564: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F568u; }
        if (ctx->pc != 0x31F568u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F568u; }
        if (ctx->pc != 0x31F568u) { return; }
    }
    ctx->pc = 0x31F568u;
label_31f568:
    // 0x31f568: 0x10000019  b           . + 4 + (0x19 << 2)
label_31f56c:
    if (ctx->pc == 0x31F56Cu) {
        ctx->pc = 0x31F570u;
        goto label_31f570;
    }
    ctx->pc = 0x31F568u;
    {
        const bool branch_taken_0x31f568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31f568) {
            ctx->pc = 0x31F5D0u;
            goto label_31f5d0;
        }
    }
    ctx->pc = 0x31F570u;
label_31f570:
    // 0x31f570: 0x8ea60000  lw          $a2, 0x0($s5)
    ctx->pc = 0x31f570u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_31f574:
    // 0x31f574: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x31f574u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_31f578:
    // 0x31f578: 0x8cc50008  lw          $a1, 0x8($a2)
    ctx->pc = 0x31f578u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_31f57c:
    // 0x31f57c: 0xc123654  jal         func_48D950
label_31f580:
    if (ctx->pc == 0x31F580u) {
        ctx->pc = 0x31F580u;
            // 0x31f580: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x31F584u;
        goto label_31f584;
    }
    ctx->pc = 0x31F57Cu;
    SET_GPR_U32(ctx, 31, 0x31F584u);
    ctx->pc = 0x31F580u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31F57Cu;
            // 0x31f580: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F584u; }
        if (ctx->pc != 0x31F584u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F584u; }
        if (ctx->pc != 0x31F584u) { return; }
    }
    ctx->pc = 0x31F584u;
label_31f584:
    // 0x31f584: 0x10000012  b           . + 4 + (0x12 << 2)
label_31f588:
    if (ctx->pc == 0x31F588u) {
        ctx->pc = 0x31F58Cu;
        goto label_31f58c;
    }
    ctx->pc = 0x31F584u;
    {
        const bool branch_taken_0x31f584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31f584) {
            ctx->pc = 0x31F5D0u;
            goto label_31f5d0;
        }
    }
    ctx->pc = 0x31F58Cu;
label_31f58c:
    // 0x31f58c: 0x0  nop
    ctx->pc = 0x31f58cu;
    // NOP
label_31f590:
    // 0x31f590: 0x13c00009  beqz        $fp, . + 4 + (0x9 << 2)
label_31f594:
    if (ctx->pc == 0x31F594u) {
        ctx->pc = 0x31F598u;
        goto label_31f598;
    }
    ctx->pc = 0x31F590u;
    {
        const bool branch_taken_0x31f590 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x31f590) {
            ctx->pc = 0x31F5B8u;
            goto label_31f5b8;
        }
    }
    ctx->pc = 0x31F598u;
label_31f598:
    // 0x31f598: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x31f598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_31f59c:
    // 0x31f59c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x31f59cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_31f5a0:
    // 0x31f5a0: 0x8fa601bc  lw          $a2, 0x1BC($sp)
    ctx->pc = 0x31f5a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 444)));
label_31f5a4:
    // 0x31f5a4: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x31f5a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_31f5a8:
    // 0x31f5a8: 0xc123654  jal         func_48D950
label_31f5ac:
    if (ctx->pc == 0x31F5ACu) {
        ctx->pc = 0x31F5ACu;
            // 0x31f5ac: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x31F5B0u;
        goto label_31f5b0;
    }
    ctx->pc = 0x31F5A8u;
    SET_GPR_U32(ctx, 31, 0x31F5B0u);
    ctx->pc = 0x31F5ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31F5A8u;
            // 0x31f5ac: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F5B0u; }
        if (ctx->pc != 0x31F5B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F5B0u; }
        if (ctx->pc != 0x31F5B0u) { return; }
    }
    ctx->pc = 0x31F5B0u;
label_31f5b0:
    // 0x31f5b0: 0x10000007  b           . + 4 + (0x7 << 2)
label_31f5b4:
    if (ctx->pc == 0x31F5B4u) {
        ctx->pc = 0x31F5B8u;
        goto label_31f5b8;
    }
    ctx->pc = 0x31F5B0u;
    {
        const bool branch_taken_0x31f5b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31f5b0) {
            ctx->pc = 0x31F5D0u;
            goto label_31f5d0;
        }
    }
    ctx->pc = 0x31F5B8u;
label_31f5b8:
    // 0x31f5b8: 0x8ea60000  lw          $a2, 0x0($s5)
    ctx->pc = 0x31f5b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_31f5bc:
    // 0x31f5bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x31f5bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_31f5c0:
    // 0x31f5c0: 0x8cc50008  lw          $a1, 0x8($a2)
    ctx->pc = 0x31f5c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_31f5c4:
    // 0x31f5c4: 0xc123654  jal         func_48D950
label_31f5c8:
    if (ctx->pc == 0x31F5C8u) {
        ctx->pc = 0x31F5C8u;
            // 0x31f5c8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x31F5CCu;
        goto label_31f5cc;
    }
    ctx->pc = 0x31F5C4u;
    SET_GPR_U32(ctx, 31, 0x31F5CCu);
    ctx->pc = 0x31F5C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31F5C4u;
            // 0x31f5c8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F5CCu; }
        if (ctx->pc != 0x31F5CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F5CCu; }
        if (ctx->pc != 0x31F5CCu) { return; }
    }
    ctx->pc = 0x31F5CCu;
label_31f5cc:
    // 0x31f5cc: 0x0  nop
    ctx->pc = 0x31f5ccu;
    // NOP
label_31f5d0:
    // 0x31f5d0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x31f5d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_31f5d4:
    // 0x31f5d4: 0x2a420007  slti        $v0, $s2, 0x7
    ctx->pc = 0x31f5d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)7) ? 1 : 0);
label_31f5d8:
    // 0x31f5d8: 0x1440ff9c  bnez        $v0, . + 4 + (-0x64 << 2)
label_31f5dc:
    if (ctx->pc == 0x31F5DCu) {
        ctx->pc = 0x31F5DCu;
            // 0x31f5dc: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->pc = 0x31F5E0u;
        goto label_31f5e0;
    }
    ctx->pc = 0x31F5D8u;
    {
        const bool branch_taken_0x31f5d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31F5DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31F5D8u;
            // 0x31f5dc: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f5d8) {
            ctx->pc = 0x31F44Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_31f44c;
        }
    }
    ctx->pc = 0x31F5E0u;
label_31f5e0:
    // 0x31f5e0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x31f5e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_31f5e4:
    // 0x31f5e4: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x31f5e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_31f5e8:
    // 0x31f5e8: 0x24a5c590  addiu       $a1, $a1, -0x3A70
    ctx->pc = 0x31f5e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952336));
label_31f5ec:
    // 0x31f5ec: 0xc123944  jal         func_48E510
label_31f5f0:
    if (ctx->pc == 0x31F5F0u) {
        ctx->pc = 0x31F5F0u;
            // 0x31f5f0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x31F5F4u;
        goto label_31f5f4;
    }
    ctx->pc = 0x31F5ECu;
    SET_GPR_U32(ctx, 31, 0x31F5F4u);
    ctx->pc = 0x31F5F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31F5ECu;
            // 0x31f5f0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F5F4u; }
        if (ctx->pc != 0x31F5F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F5F4u; }
        if (ctx->pc != 0x31F5F4u) { return; }
    }
    ctx->pc = 0x31F5F4u;
label_31f5f4:
    // 0x31f5f4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x31f5f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_31f5f8:
    // 0x31f5f8: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x31f5f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_31f5fc:
    // 0x31f5fc: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x31f5fcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31f600:
    // 0x31f600: 0x24a5c5a8  addiu       $a1, $a1, -0x3A58
    ctx->pc = 0x31f600u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952360));
label_31f604:
    // 0x31f604: 0xc123944  jal         func_48E510
label_31f608:
    if (ctx->pc == 0x31F608u) {
        ctx->pc = 0x31F608u;
            // 0x31f608: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x31F60Cu;
        goto label_31f60c;
    }
    ctx->pc = 0x31F604u;
    SET_GPR_U32(ctx, 31, 0x31F60Cu);
    ctx->pc = 0x31F608u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31F604u;
            // 0x31f608: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F60Cu; }
        if (ctx->pc != 0x31F60Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F60Cu; }
        if (ctx->pc != 0x31F60Cu) { return; }
    }
    ctx->pc = 0x31F60Cu;
label_31f60c:
    // 0x31f60c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x31f60cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_31f610:
    // 0x31f610: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x31f610u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_31f614:
    // 0x31f614: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x31f614u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31f618:
    // 0x31f618: 0x24a5c5b0  addiu       $a1, $a1, -0x3A50
    ctx->pc = 0x31f618u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952368));
label_31f61c:
    // 0x31f61c: 0xc123944  jal         func_48E510
label_31f620:
    if (ctx->pc == 0x31F620u) {
        ctx->pc = 0x31F620u;
            // 0x31f620: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x31F624u;
        goto label_31f624;
    }
    ctx->pc = 0x31F61Cu;
    SET_GPR_U32(ctx, 31, 0x31F624u);
    ctx->pc = 0x31F620u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31F61Cu;
            // 0x31f620: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F624u; }
        if (ctx->pc != 0x31F624u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F624u; }
        if (ctx->pc != 0x31F624u) { return; }
    }
    ctx->pc = 0x31F624u;
label_31f624:
    // 0x31f624: 0x2665ffff  addiu       $a1, $s3, -0x1
    ctx->pc = 0x31f624u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_31f628:
    // 0x31f628: 0x26840030  addiu       $a0, $s4, 0x30
    ctx->pc = 0x31f628u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
label_31f62c:
    // 0x31f62c: 0xc0b90e0  jal         func_2E4380
label_31f630:
    if (ctx->pc == 0x31F630u) {
        ctx->pc = 0x31F630u;
            // 0x31f630: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x31F634u;
        goto label_31f634;
    }
    ctx->pc = 0x31F62Cu;
    SET_GPR_U32(ctx, 31, 0x31F634u);
    ctx->pc = 0x31F630u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31F62Cu;
            // 0x31f630: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4380u;
    if (runtime->hasFunction(0x2E4380u)) {
        auto targetFn = runtime->lookupFunction(0x2E4380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F634u; }
        if (ctx->pc != 0x31F634u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4380_0x2e4380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F634u; }
        if (ctx->pc != 0x31F634u) { return; }
    }
    ctx->pc = 0x31F634u;
label_31f634:
    // 0x31f634: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_31f638:
    if (ctx->pc == 0x31F638u) {
        ctx->pc = 0x31F638u;
            // 0x31f638: 0x8e450008  lw          $a1, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->pc = 0x31F63Cu;
        goto label_31f63c;
    }
    ctx->pc = 0x31F634u;
    {
        const bool branch_taken_0x31f634 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31f634) {
            ctx->pc = 0x31F638u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x31F634u;
            // 0x31f638: 0x8e450008  lw          $a1, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x31F658u;
            goto label_31f658;
        }
    }
    ctx->pc = 0x31F63Cu;
label_31f63c:
    // 0x31f63c: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x31f63cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_31f640:
    // 0x31f640: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x31f640u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_31f644:
    // 0x31f644: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x31f644u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_31f648:
    // 0x31f648: 0xc123654  jal         func_48D950
label_31f64c:
    if (ctx->pc == 0x31F64Cu) {
        ctx->pc = 0x31F64Cu;
            // 0x31f64c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x31F650u;
        goto label_31f650;
    }
    ctx->pc = 0x31F648u;
    SET_GPR_U32(ctx, 31, 0x31F650u);
    ctx->pc = 0x31F64Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31F648u;
            // 0x31f64c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F650u; }
        if (ctx->pc != 0x31F650u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F650u; }
        if (ctx->pc != 0x31F650u) { return; }
    }
    ctx->pc = 0x31F650u;
label_31f650:
    // 0x31f650: 0x10000006  b           . + 4 + (0x6 << 2)
label_31f654:
    if (ctx->pc == 0x31F654u) {
        ctx->pc = 0x31F654u;
            // 0x31f654: 0x8fb301b8  lw          $s3, 0x1B8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 440)));
        ctx->pc = 0x31F658u;
        goto label_31f658;
    }
    ctx->pc = 0x31F650u;
    {
        const bool branch_taken_0x31f650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F654u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31F650u;
            // 0x31f654: 0x8fb301b8  lw          $s3, 0x1B8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 440)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f650) {
            ctx->pc = 0x31F66Cu;
            goto label_31f66c;
        }
    }
    ctx->pc = 0x31F658u;
label_31f658:
    // 0x31f658: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x31f658u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_31f65c:
    // 0x31f65c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x31f65cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_31f660:
    // 0x31f660: 0xc123654  jal         func_48D950
label_31f664:
    if (ctx->pc == 0x31F664u) {
        ctx->pc = 0x31F664u;
            // 0x31f664: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x31F668u;
        goto label_31f668;
    }
    ctx->pc = 0x31F660u;
    SET_GPR_U32(ctx, 31, 0x31F668u);
    ctx->pc = 0x31F664u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31F660u;
            // 0x31f664: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F668u; }
        if (ctx->pc != 0x31F668u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F668u; }
        if (ctx->pc != 0x31F668u) { return; }
    }
    ctx->pc = 0x31F668u;
label_31f668:
    // 0x31f668: 0x8fb301b8  lw          $s3, 0x1B8($sp)
    ctx->pc = 0x31f668u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 440)));
label_31f66c:
    // 0x31f66c: 0x1000004d  b           . + 4 + (0x4D << 2)
label_31f670:
    if (ctx->pc == 0x31F670u) {
        ctx->pc = 0x31F674u;
        goto label_31f674;
    }
    ctx->pc = 0x31F66Cu;
    {
        const bool branch_taken_0x31f66c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31f66c) {
            ctx->pc = 0x31F7A4u;
            goto label_31f7a4;
        }
    }
    ctx->pc = 0x31F674u;
label_31f674:
    // 0x31f674: 0x8fa201f8  lw          $v0, 0x1F8($sp)
    ctx->pc = 0x31f674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
label_31f678:
    // 0x31f678: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x31f678u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_31f67c:
    // 0x31f67c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x31f67cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_31f680:
    // 0x31f680: 0x24a5c5c0  addiu       $a1, $a1, -0x3A40
    ctx->pc = 0x31f680u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952384));
label_31f684:
    // 0x31f684: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x31f684u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31f688:
    // 0x31f688: 0x244205f4  addiu       $v0, $v0, 0x5F4
    ctx->pc = 0x31f688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1524));
label_31f68c:
    // 0x31f68c: 0xafa201e0  sw          $v0, 0x1E0($sp)
    ctx->pc = 0x31f68cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 480), GPR_U32(ctx, 2));
label_31f690:
    // 0x31f690: 0x8fa204e0  lw          $v0, 0x4E0($sp)
    ctx->pc = 0x31f690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1248)));
label_31f694:
    // 0x31f694: 0xafa201d0  sw          $v0, 0x1D0($sp)
    ctx->pc = 0x31f694u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 464), GPR_U32(ctx, 2));
label_31f698:
    // 0x31f698: 0x8fa204d0  lw          $v0, 0x4D0($sp)
    ctx->pc = 0x31f698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1232)));
label_31f69c:
    // 0x31f69c: 0xc123944  jal         func_48E510
label_31f6a0:
    if (ctx->pc == 0x31F6A0u) {
        ctx->pc = 0x31F6A0u;
            // 0x31f6a0: 0xafa201c0  sw          $v0, 0x1C0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 448), GPR_U32(ctx, 2));
        ctx->pc = 0x31F6A4u;
        goto label_31f6a4;
    }
    ctx->pc = 0x31F69Cu;
    SET_GPR_U32(ctx, 31, 0x31F6A4u);
    ctx->pc = 0x31F6A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31F69Cu;
            // 0x31f6a0: 0xafa201c0  sw          $v0, 0x1C0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 448), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F6A4u; }
        if (ctx->pc != 0x31F6A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F6A4u; }
        if (ctx->pc != 0x31F6A4u) { return; }
    }
    ctx->pc = 0x31F6A4u;
label_31f6a4:
    // 0x31f6a4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x31f6a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_31f6a8:
    // 0x31f6a8: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x31f6a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_31f6ac:
    // 0x31f6ac: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x31f6acu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31f6b0:
    // 0x31f6b0: 0x24a5c4b8  addiu       $a1, $a1, -0x3B48
    ctx->pc = 0x31f6b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952120));
label_31f6b4:
    // 0x31f6b4: 0xc123944  jal         func_48E510
label_31f6b8:
    if (ctx->pc == 0x31F6B8u) {
        ctx->pc = 0x31F6B8u;
            // 0x31f6b8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x31F6BCu;
        goto label_31f6bc;
    }
    ctx->pc = 0x31F6B4u;
    SET_GPR_U32(ctx, 31, 0x31F6BCu);
    ctx->pc = 0x31F6B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31F6B4u;
            // 0x31f6b8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F6BCu; }
        if (ctx->pc != 0x31F6BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F6BCu; }
        if (ctx->pc != 0x31F6BCu) { return; }
    }
    ctx->pc = 0x31F6BCu;
label_31f6bc:
    // 0x31f6bc: 0x26840024  addiu       $a0, $s4, 0x24
    ctx->pc = 0x31f6bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 36));
label_31f6c0:
    // 0x31f6c0: 0x2e630009  sltiu       $v1, $s3, 0x9
    ctx->pc = 0x31f6c0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_31f6c4:
    // 0x31f6c4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x31f6c4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31f6c8:
    // 0x31f6c8: 0x390c0  sll         $s2, $v1, 3
    ctx->pc = 0x31f6c8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_31f6cc:
    // 0x31f6cc: 0x2662ffff  addiu       $v0, $s3, -0x1
    ctx->pc = 0x31f6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_31f6d0:
    // 0x31f6d0: 0x528821  addu        $s1, $v0, $s2
    ctx->pc = 0x31f6d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_31f6d4:
    // 0x31f6d4: 0xc0b90e0  jal         func_2E4380
label_31f6d8:
    if (ctx->pc == 0x31F6D8u) {
        ctx->pc = 0x31F6D8u;
            // 0x31f6d8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x31F6DCu;
        goto label_31f6dc;
    }
    ctx->pc = 0x31F6D4u;
    SET_GPR_U32(ctx, 31, 0x31F6DCu);
    ctx->pc = 0x31F6D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31F6D4u;
            // 0x31f6d8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4380u;
    if (runtime->hasFunction(0x2E4380u)) {
        auto targetFn = runtime->lookupFunction(0x2E4380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F6DCu; }
        if (ctx->pc != 0x31F6DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4380_0x2e4380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F6DCu; }
        if (ctx->pc != 0x31F6DCu) { return; }
    }
    ctx->pc = 0x31F6DCu;
label_31f6dc:
    // 0x31f6dc: 0x2e21000e  sltiu       $at, $s1, 0xE
    ctx->pc = 0x31f6dcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)14) ? 1 : 0);
label_31f6e0:
    // 0x31f6e0: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
label_31f6e4:
    if (ctx->pc == 0x31F6E4u) {
        ctx->pc = 0x31F6E4u;
            // 0x31f6e4: 0x304400ff  andi        $a0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x31F6E8u;
        goto label_31f6e8;
    }
    ctx->pc = 0x31F6E0u;
    {
        const bool branch_taken_0x31f6e0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F6E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31F6E0u;
            // 0x31f6e4: 0x304400ff  andi        $a0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f6e0) {
            ctx->pc = 0x31F720u;
            goto label_31f720;
        }
    }
    ctx->pc = 0x31F6E8u;
label_31f6e8:
    // 0x31f6e8: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x31f6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
label_31f6ec:
    // 0x31f6ec: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x31f6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_31f6f0:
    // 0x31f6f0: 0x2463c790  addiu       $v1, $v1, -0x3870
    ctx->pc = 0x31f6f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952848));
label_31f6f4:
    // 0x31f6f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31f6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_31f6f8:
    // 0x31f6f8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x31f6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_31f6fc:
    // 0x31f6fc: 0x400008  jr          $v0
label_31f700:
    if (ctx->pc == 0x31F700u) {
        ctx->pc = 0x31F704u;
        goto label_31f704;
    }
    ctx->pc = 0x31F6FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x31F704u: goto label_31f704;
            case 0x31F720u: goto label_31f720;
            default: break;
        }
        return;
    }
    ctx->pc = 0x31F704u;
label_31f704:
    // 0x31f704: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x31f704u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_31f708:
    // 0x31f708: 0x8c4289d0  lw          $v0, -0x7630($v0)
    ctx->pc = 0x31f708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
label_31f70c:
    // 0x31f70c: 0x8042008e  lb          $v0, 0x8E($v0)
    ctx->pc = 0x31f70cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 142)));
label_31f710:
    // 0x31f710: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x31f710u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_31f714:
    // 0x31f714: 0x18400002  blez        $v0, . + 4 + (0x2 << 2)
label_31f718:
    if (ctx->pc == 0x31F718u) {
        ctx->pc = 0x31F71Cu;
        goto label_31f71c;
    }
    ctx->pc = 0x31F714u;
    {
        const bool branch_taken_0x31f714 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x31f714) {
            ctx->pc = 0x31F720u;
            goto label_31f720;
        }
    }
    ctx->pc = 0x31F71Cu;
label_31f71c:
    // 0x31f71c: 0x64040001  daddiu      $a0, $zero, 0x1
    ctx->pc = 0x31f71cu;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_31f720:
    // 0x31f720: 0x50800017  beql        $a0, $zero, . + 4 + (0x17 << 2)
label_31f724:
    if (ctx->pc == 0x31F724u) {
        ctx->pc = 0x31F724u;
            // 0x31f724: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x31F728u;
        goto label_31f728;
    }
    ctx->pc = 0x31F720u;
    {
        const bool branch_taken_0x31f720 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x31f720) {
            ctx->pc = 0x31F724u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x31F720u;
            // 0x31f724: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x31F780u;
            goto label_31f780;
        }
    }
    ctx->pc = 0x31F728u;
label_31f728:
    // 0x31f728: 0x27a303d0  addiu       $v1, $sp, 0x3D0
    ctx->pc = 0x31f728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 976));
label_31f72c:
    // 0x31f72c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_31f730:
    if (ctx->pc == 0x31F730u) {
        ctx->pc = 0x31F730u;
            // 0x31f730: 0x24020064  addiu       $v0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->pc = 0x31F734u;
        goto label_31f734;
    }
    ctx->pc = 0x31F72Cu;
    {
        const bool branch_taken_0x31f72c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F730u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31F72Cu;
            // 0x31f730: 0x24020064  addiu       $v0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f72c) {
            ctx->pc = 0x31F750u;
            goto label_31f750;
        }
    }
    ctx->pc = 0x31F734u;
label_31f734:
    // 0x31f734: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x31f734u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_31f738:
    // 0x31f738: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x31f738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_31f73c:
    // 0x31f73c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x31f73cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_31f740:
    // 0x31f740: 0x0  nop
    ctx->pc = 0x31f740u;
    // NOP
label_31f744:
    // 0x31f744: 0x0  nop
    ctx->pc = 0x31f744u;
    // NOP
label_31f748:
    // 0x31f748: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_31f74c:
    if (ctx->pc == 0x31F74Cu) {
        ctx->pc = 0x31F750u;
        goto label_31f750;
    }
    ctx->pc = 0x31F748u;
    {
        const bool branch_taken_0x31f748 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31f748) {
            ctx->pc = 0x31F734u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_31f734;
        }
    }
    ctx->pc = 0x31F750u;
label_31f750:
    // 0x31f750: 0x3c060065  lui         $a2, 0x65
    ctx->pc = 0x31f750u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)101 << 16));
label_31f754:
    // 0x31f754: 0x2723821  addu        $a3, $s3, $s2
    ctx->pc = 0x31f754u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
label_31f758:
    // 0x31f758: 0x27a403d0  addiu       $a0, $sp, 0x3D0
    ctx->pc = 0x31f758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 976));
label_31f75c:
    // 0x31f75c: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x31f75cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_31f760:
    // 0x31f760: 0xc043be4  jal         func_10EF90
label_31f764:
    if (ctx->pc == 0x31F764u) {
        ctx->pc = 0x31F764u;
            // 0x31f764: 0x24c6c5d8  addiu       $a2, $a2, -0x3A28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294952408));
        ctx->pc = 0x31F768u;
        goto label_31f768;
    }
    ctx->pc = 0x31F760u;
    SET_GPR_U32(ctx, 31, 0x31F768u);
    ctx->pc = 0x31F764u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31F760u;
            // 0x31f764: 0x24c6c5d8  addiu       $a2, $a2, -0x3A28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294952408));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EF90u;
    if (runtime->hasFunction(0x10EF90u)) {
        auto targetFn = runtime->lookupFunction(0x10EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F768u; }
        if (ctx->pc != 0x31F768u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010EF90_0x10ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F768u; }
        if (ctx->pc != 0x31F768u) { return; }
    }
    ctx->pc = 0x31F768u;
label_31f768:
    // 0x31f768: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x31f768u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_31f76c:
    // 0x31f76c: 0x27a503d0  addiu       $a1, $sp, 0x3D0
    ctx->pc = 0x31f76cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 976));
label_31f770:
    // 0x31f770: 0xc123944  jal         func_48E510
label_31f774:
    if (ctx->pc == 0x31F774u) {
        ctx->pc = 0x31F774u;
            // 0x31f774: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x31F778u;
        goto label_31f778;
    }
    ctx->pc = 0x31F770u;
    SET_GPR_U32(ctx, 31, 0x31F778u);
    ctx->pc = 0x31F774u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31F770u;
            // 0x31f774: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F778u; }
        if (ctx->pc != 0x31F778u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F778u; }
        if (ctx->pc != 0x31F778u) { return; }
    }
    ctx->pc = 0x31F778u;
label_31f778:
    // 0x31f778: 0x10000006  b           . + 4 + (0x6 << 2)
label_31f77c:
    if (ctx->pc == 0x31F77Cu) {
        ctx->pc = 0x31F77Cu;
            // 0x31f77c: 0x8e850008  lw          $a1, 0x8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
        ctx->pc = 0x31F780u;
        goto label_31f780;
    }
    ctx->pc = 0x31F778u;
    {
        const bool branch_taken_0x31f778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F77Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31F778u;
            // 0x31f77c: 0x8e850008  lw          $a1, 0x8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f778) {
            ctx->pc = 0x31F794u;
            goto label_31f794;
        }
    }
    ctx->pc = 0x31F780u;
label_31f780:
    // 0x31f780: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x31f780u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_31f784:
    // 0x31f784: 0x24a5c5e8  addiu       $a1, $a1, -0x3A18
    ctx->pc = 0x31f784u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952424));
label_31f788:
    // 0x31f788: 0xc123944  jal         func_48E510
label_31f78c:
    if (ctx->pc == 0x31F78Cu) {
        ctx->pc = 0x31F78Cu;
            // 0x31f78c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x31F790u;
        goto label_31f790;
    }
    ctx->pc = 0x31F788u;
    SET_GPR_U32(ctx, 31, 0x31F790u);
    ctx->pc = 0x31F78Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31F788u;
            // 0x31f78c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F790u; }
        if (ctx->pc != 0x31F790u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F790u; }
        if (ctx->pc != 0x31F790u) { return; }
    }
    ctx->pc = 0x31F790u;
label_31f790:
    // 0x31f790: 0x8e850008  lw          $a1, 0x8($s4)
    ctx->pc = 0x31f790u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_31f794:
    // 0x31f794: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x31f794u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_31f798:
    // 0x31f798: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x31f798u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31f79c:
    // 0x31f79c: 0xc123654  jal         func_48D950
label_31f7a0:
    if (ctx->pc == 0x31F7A0u) {
        ctx->pc = 0x31F7A0u;
            // 0x31f7a0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x31F7A4u;
        goto label_31f7a4;
    }
    ctx->pc = 0x31F79Cu;
    SET_GPR_U32(ctx, 31, 0x31F7A4u);
    ctx->pc = 0x31F7A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31F79Cu;
            // 0x31f7a0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F7A4u; }
        if (ctx->pc != 0x31F7A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F7A4u; }
        if (ctx->pc != 0x31F7A4u) { return; }
    }
    ctx->pc = 0x31F7A4u;
label_31f7a4:
    // 0x31f7a4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x31f7a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_31f7a8:
    // 0x31f7a8: 0xc123328  jal         func_48CCA0
label_31f7ac:
    if (ctx->pc == 0x31F7ACu) {
        ctx->pc = 0x31F7ACu;
            // 0x31f7ac: 0x24050028  addiu       $a1, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->pc = 0x31F7B0u;
        goto label_31f7b0;
    }
    ctx->pc = 0x31F7A8u;
    SET_GPR_U32(ctx, 31, 0x31F7B0u);
    ctx->pc = 0x31F7ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31F7A8u;
            // 0x31f7ac: 0x24050028  addiu       $a1, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CCA0u;
    if (runtime->hasFunction(0x48CCA0u)) {
        auto targetFn = runtime->lookupFunction(0x48CCA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F7B0u; }
        if (ctx->pc != 0x31F7B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CCA0_0x48cca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F7B0u; }
        if (ctx->pc != 0x31F7B0u) { return; }
    }
    ctx->pc = 0x31F7B0u;
label_31f7b0:
    // 0x31f7b0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x31f7b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_31f7b4:
    // 0x31f7b4: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x31f7b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_31f7b8:
    // 0x31f7b8: 0x24a5c600  addiu       $a1, $a1, -0x3A00
    ctx->pc = 0x31f7b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952448));
label_31f7bc:
    // 0x31f7bc: 0xc123944  jal         func_48E510
label_31f7c0:
    if (ctx->pc == 0x31F7C0u) {
        ctx->pc = 0x31F7C0u;
            // 0x31f7c0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x31F7C4u;
        goto label_31f7c4;
    }
    ctx->pc = 0x31F7BCu;
    SET_GPR_U32(ctx, 31, 0x31F7C4u);
    ctx->pc = 0x31F7C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31F7BCu;
            // 0x31f7c0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F7C4u; }
        if (ctx->pc != 0x31F7C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F7C4u; }
        if (ctx->pc != 0x31F7C4u) { return; }
    }
    ctx->pc = 0x31F7C4u;
label_31f7c4:
    // 0x31f7c4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x31f7c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_31f7c8:
    // 0x31f7c8: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x31f7c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_31f7cc:
    // 0x31f7cc: 0x24a5c610  addiu       $a1, $a1, -0x39F0
    ctx->pc = 0x31f7ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952464));
label_31f7d0:
    // 0x31f7d0: 0xc123944  jal         func_48E510
label_31f7d4:
    if (ctx->pc == 0x31F7D4u) {
        ctx->pc = 0x31F7D4u;
            // 0x31f7d4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x31F7D8u;
        goto label_31f7d8;
    }
    ctx->pc = 0x31F7D0u;
    SET_GPR_U32(ctx, 31, 0x31F7D8u);
    ctx->pc = 0x31F7D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31F7D0u;
            // 0x31f7d4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F7D8u; }
        if (ctx->pc != 0x31F7D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F7D8u; }
        if (ctx->pc != 0x31F7D8u) { return; }
    }
    ctx->pc = 0x31F7D8u;
label_31f7d8:
    // 0x31f7d8: 0x8fa201fc  lw          $v0, 0x1FC($sp)
    ctx->pc = 0x31f7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
label_31f7dc:
    // 0x31f7dc: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x31f7dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_31f7e0:
    // 0x31f7e0: 0x50450093  beql        $v0, $a1, . + 4 + (0x93 << 2)
label_31f7e4:
    if (ctx->pc == 0x31F7E4u) {
        ctx->pc = 0x31F7E4u;
            // 0x31f7e4: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x31F7E8u;
        goto label_31f7e8;
    }
    ctx->pc = 0x31F7E0u;
    {
        const bool branch_taken_0x31f7e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x31f7e0) {
            ctx->pc = 0x31F7E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x31F7E0u;
            // 0x31f7e4: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x31FA30u;
            goto label_31fa30;
        }
    }
    ctx->pc = 0x31F7E8u;
label_31f7e8:
    // 0x31f7e8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x31f7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_31f7ec:
    // 0x31f7ec: 0x50430072  beql        $v0, $v1, . + 4 + (0x72 << 2)
label_31f7f0:
    if (ctx->pc == 0x31F7F0u) {
        ctx->pc = 0x31F7F0u;
            // 0x31f7f0: 0x7ba200e0  lq          $v0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->pc = 0x31F7F4u;
        goto label_31f7f4;
    }
    ctx->pc = 0x31F7ECu;
    {
        const bool branch_taken_0x31f7ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x31f7ec) {
            ctx->pc = 0x31F7F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x31F7ECu;
            // 0x31f7f0: 0x7ba200e0  lq          $v0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x31F9B8u;
            goto label_31f9b8;
        }
    }
    ctx->pc = 0x31F7F4u;
label_31f7f4:
    // 0x31f7f4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x31f7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31f7f8:
    // 0x31f7f8: 0x50430028  beql        $v0, $v1, . + 4 + (0x28 << 2)
label_31f7fc:
    if (ctx->pc == 0x31F7FCu) {
        ctx->pc = 0x31F7FCu;
            // 0x31f7fc: 0x7ba200e0  lq          $v0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->pc = 0x31F800u;
        goto label_31f800;
    }
    ctx->pc = 0x31F7F8u;
    {
        const bool branch_taken_0x31f7f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x31f7f8) {
            ctx->pc = 0x31F7FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x31F7F8u;
            // 0x31f7fc: 0x7ba200e0  lq          $v0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x31F89Cu;
            goto label_31f89c;
        }
    }
    ctx->pc = 0x31F800u;
label_31f800:
    // 0x31f800: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_31f804:
    if (ctx->pc == 0x31F804u) {
        ctx->pc = 0x31F804u;
            // 0x31f804: 0x7ba200e0  lq          $v0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->pc = 0x31F808u;
        goto label_31f808;
    }
    ctx->pc = 0x31F800u;
    {
        const bool branch_taken_0x31f800 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31f800) {
            ctx->pc = 0x31F804u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x31F800u;
            // 0x31f804: 0x7ba200e0  lq          $v0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x31F810u;
            goto label_31f810;
        }
    }
    ctx->pc = 0x31F808u;
label_31f808:
    // 0x31f808: 0x10000700  b           . + 4 + (0x700 << 2)
label_31f80c:
    if (ctx->pc == 0x31F80Cu) {
        ctx->pc = 0x31F810u;
        goto label_31f810;
    }
    ctx->pc = 0x31F808u;
    {
        const bool branch_taken_0x31f808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31f808) {
            ctx->pc = 0x32140Cu;
            goto label_32140c;
        }
    }
    ctx->pc = 0x31F810u;
label_31f810:
    // 0x31f810: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
label_31f814:
    if (ctx->pc == 0x31F814u) {
        ctx->pc = 0x31F814u;
            // 0x31f814: 0x8fa201e0  lw          $v0, 0x1E0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
        ctx->pc = 0x31F818u;
        goto label_31f818;
    }
    ctx->pc = 0x31F810u;
    {
        const bool branch_taken_0x31f810 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31f810) {
            ctx->pc = 0x31F814u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x31F810u;
            // 0x31f814: 0x8fa201e0  lw          $v0, 0x1E0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x31F850u;
            goto label_31f850;
        }
    }
    ctx->pc = 0x31F818u;
label_31f818:
    // 0x31f818: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x31f818u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_31f81c:
    // 0x31f81c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x31f81cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_31f820:
    // 0x31f820: 0x8c440e68  lw          $a0, 0xE68($v0)
    ctx->pc = 0x31f820u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3688)));
label_31f824:
    // 0x31f824: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x31f824u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31f828:
    // 0x31f828: 0xc0fd020  jal         func_3F4080
label_31f82c:
    if (ctx->pc == 0x31F82Cu) {
        ctx->pc = 0x31F82Cu;
            // 0x31f82c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x31F830u;
        goto label_31f830;
    }
    ctx->pc = 0x31F828u;
    SET_GPR_U32(ctx, 31, 0x31F830u);
    ctx->pc = 0x31F82Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31F828u;
            // 0x31f82c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F4080u;
    if (runtime->hasFunction(0x3F4080u)) {
        auto targetFn = runtime->lookupFunction(0x3F4080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F830u; }
        if (ctx->pc != 0x31F830u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F4080_0x3f4080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F830u; }
        if (ctx->pc != 0x31F830u) { return; }
    }
    ctx->pc = 0x31F830u;
label_31f830:
    // 0x31f830: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x31f830u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_31f834:
    // 0x31f834: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x31f834u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_31f838:
    // 0x31f838: 0x8c440e68  lw          $a0, 0xE68($v0)
    ctx->pc = 0x31f838u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3688)));
label_31f83c:
    // 0x31f83c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x31f83cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_31f840:
    // 0x31f840: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x31f840u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31f844:
    // 0x31f844: 0xc0fd020  jal         func_3F4080
label_31f848:
    if (ctx->pc == 0x31F848u) {
        ctx->pc = 0x31F848u;
            // 0x31f848: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x31F84Cu;
        goto label_31f84c;
    }
    ctx->pc = 0x31F844u;
    SET_GPR_U32(ctx, 31, 0x31F84Cu);
    ctx->pc = 0x31F848u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31F844u;
            // 0x31f848: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F4080u;
    if (runtime->hasFunction(0x3F4080u)) {
        auto targetFn = runtime->lookupFunction(0x3F4080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F84Cu; }
        if (ctx->pc != 0x31F84Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F4080_0x3f4080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F84Cu; }
        if (ctx->pc != 0x31F84Cu) { return; }
    }
    ctx->pc = 0x31F84Cu;
label_31f84c:
    // 0x31f84c: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x31f84cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
label_31f850:
    // 0x31f850: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x31f850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_31f854:
    // 0x31f854: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x31f854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_31f858:
    // 0x31f858: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x31f858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_31f85c:
    // 0x31f85c: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x31f85cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_31f860:
    // 0x31f860: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x31f860u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_31f864:
    // 0x31f864: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31f864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_31f868:
    // 0x31f868: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x31f868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_31f86c:
    // 0x31f86c: 0xa4400046  sh          $zero, 0x46($v0)
    ctx->pc = 0x31f86cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 70), (uint16_t)GPR_U32(ctx, 0));
label_31f870:
    // 0x31f870: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x31f870u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_31f874:
    // 0x31f874: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x31f874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_31f878:
    // 0x31f878: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x31f878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_31f87c:
    // 0x31f87c: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x31f87cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_31f880:
    // 0x31f880: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x31f880u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_31f884:
    // 0x31f884: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31f884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_31f888:
    // 0x31f888: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x31f888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_31f88c:
    // 0x31f88c: 0xc12307c  jal         func_48C1F0
label_31f890:
    if (ctx->pc == 0x31F890u) {
        ctx->pc = 0x31F890u;
            // 0x31f890: 0x8c450014  lw          $a1, 0x14($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
        ctx->pc = 0x31F894u;
        goto label_31f894;
    }
    ctx->pc = 0x31F88Cu;
    SET_GPR_U32(ctx, 31, 0x31F894u);
    ctx->pc = 0x31F890u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31F88Cu;
            // 0x31f890: 0x8c450014  lw          $a1, 0x14($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48C1F0u;
    if (runtime->hasFunction(0x48C1F0u)) {
        auto targetFn = runtime->lookupFunction(0x48C1F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F894u; }
        if (ctx->pc != 0x31F894u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048C1F0_0x48c1f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F894u; }
        if (ctx->pc != 0x31F894u) { return; }
    }
    ctx->pc = 0x31F894u;
label_31f894:
    // 0x31f894: 0x100006dd  b           . + 4 + (0x6DD << 2)
label_31f898:
    if (ctx->pc == 0x31F898u) {
        ctx->pc = 0x31F89Cu;
        goto label_31f89c;
    }
    ctx->pc = 0x31F894u;
    {
        const bool branch_taken_0x31f894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31f894) {
            ctx->pc = 0x32140Cu;
            goto label_32140c;
        }
    }
    ctx->pc = 0x31F89Cu;
label_31f89c:
    // 0x31f89c: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_31f8a0:
    if (ctx->pc == 0x31F8A0u) {
        ctx->pc = 0x31F8A0u;
            // 0x31f8a0: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x31F8A4u;
        goto label_31f8a4;
    }
    ctx->pc = 0x31F89Cu;
    {
        const bool branch_taken_0x31f89c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31f89c) {
            ctx->pc = 0x31F8A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x31F89Cu;
            // 0x31f8a0: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x31F8BCu;
            goto label_31f8bc;
        }
    }
    ctx->pc = 0x31F8A4u;
label_31f8a4:
    // 0x31f8a4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x31f8a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_31f8a8:
    // 0x31f8a8: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x31f8a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_31f8ac:
    // 0x31f8ac: 0xc1232d8  jal         func_48CB60
label_31f8b0:
    if (ctx->pc == 0x31F8B0u) {
        ctx->pc = 0x31F8B0u;
            // 0x31f8b0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x31F8B4u;
        goto label_31f8b4;
    }
    ctx->pc = 0x31F8ACu;
    SET_GPR_U32(ctx, 31, 0x31F8B4u);
    ctx->pc = 0x31F8B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31F8ACu;
            // 0x31f8b0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CB60u;
    if (runtime->hasFunction(0x48CB60u)) {
        auto targetFn = runtime->lookupFunction(0x48CB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F8B4u; }
        if (ctx->pc != 0x31F8B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CB60_0x48cb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F8B4u; }
        if (ctx->pc != 0x31F8B4u) { return; }
    }
    ctx->pc = 0x31F8B4u;
label_31f8b4:
    // 0x31f8b4: 0x1000000a  b           . + 4 + (0xA << 2)
label_31f8b8:
    if (ctx->pc == 0x31F8B8u) {
        ctx->pc = 0x31F8B8u;
            // 0x31f8b8: 0x2e610009  sltiu       $at, $s3, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
        ctx->pc = 0x31F8BCu;
        goto label_31f8bc;
    }
    ctx->pc = 0x31F8B4u;
    {
        const bool branch_taken_0x31f8b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F8B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31F8B4u;
            // 0x31f8b8: 0x2e610009  sltiu       $at, $s3, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f8b4) {
            ctx->pc = 0x31F8E0u;
            goto label_31f8e0;
        }
    }
    ctx->pc = 0x31F8BCu;
label_31f8bc:
    // 0x31f8bc: 0xc123328  jal         func_48CCA0
label_31f8c0:
    if (ctx->pc == 0x31F8C0u) {
        ctx->pc = 0x31F8C0u;
            // 0x31f8c0: 0x24050030  addiu       $a1, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->pc = 0x31F8C4u;
        goto label_31f8c4;
    }
    ctx->pc = 0x31F8BCu;
    SET_GPR_U32(ctx, 31, 0x31F8C4u);
    ctx->pc = 0x31F8C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31F8BCu;
            // 0x31f8c0: 0x24050030  addiu       $a1, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CCA0u;
    if (runtime->hasFunction(0x48CCA0u)) {
        auto targetFn = runtime->lookupFunction(0x48CCA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F8C4u; }
        if (ctx->pc != 0x31F8C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CCA0_0x48cca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F8C4u; }
        if (ctx->pc != 0x31F8C4u) { return; }
    }
    ctx->pc = 0x31F8C4u;
label_31f8c4:
    // 0x31f8c4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_31f8c8:
    if (ctx->pc == 0x31F8C8u) {
        ctx->pc = 0x31F8CCu;
        goto label_31f8cc;
    }
    ctx->pc = 0x31F8C4u;
    {
        const bool branch_taken_0x31f8c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31f8c4) {
            ctx->pc = 0x31F8DCu;
            goto label_31f8dc;
        }
    }
    ctx->pc = 0x31F8CCu;
label_31f8cc:
    // 0x31f8cc: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x31f8ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_31f8d0:
    // 0x31f8d0: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x31f8d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_31f8d4:
    // 0x31f8d4: 0xc1232d8  jal         func_48CB60
label_31f8d8:
    if (ctx->pc == 0x31F8D8u) {
        ctx->pc = 0x31F8D8u;
            // 0x31f8d8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x31F8DCu;
        goto label_31f8dc;
    }
    ctx->pc = 0x31F8D4u;
    SET_GPR_U32(ctx, 31, 0x31F8DCu);
    ctx->pc = 0x31F8D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31F8D4u;
            // 0x31f8d8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CB60u;
    if (runtime->hasFunction(0x48CB60u)) {
        auto targetFn = runtime->lookupFunction(0x48CB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F8DCu; }
        if (ctx->pc != 0x31F8DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CB60_0x48cb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F8DCu; }
        if (ctx->pc != 0x31F8DCu) { return; }
    }
    ctx->pc = 0x31F8DCu;
label_31f8dc:
    // 0x31f8dc: 0x2e610009  sltiu       $at, $s3, 0x9
    ctx->pc = 0x31f8dcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_31f8e0:
    // 0x31f8e0: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_31f8e4:
    if (ctx->pc == 0x31F8E4u) {
        ctx->pc = 0x31F8E8u;
        goto label_31f8e8;
    }
    ctx->pc = 0x31F8E0u;
    {
        const bool branch_taken_0x31f8e0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x31f8e0) {
            ctx->pc = 0x31F8ECu;
            goto label_31f8ec;
        }
    }
    ctx->pc = 0x31F8E8u;
label_31f8e8:
    // 0x31f8e8: 0x2673fff8  addiu       $s3, $s3, -0x8
    ctx->pc = 0x31f8e8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967288));
label_31f8ec:
    // 0x31f8ec: 0x126006c7  beqz        $s3, . + 4 + (0x6C7 << 2)
label_31f8f0:
    if (ctx->pc == 0x31F8F0u) {
        ctx->pc = 0x31F8F4u;
        goto label_31f8f4;
    }
    ctx->pc = 0x31F8ECu;
    {
        const bool branch_taken_0x31f8ec = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x31f8ec) {
            ctx->pc = 0x32140Cu;
            goto label_32140c;
        }
    }
    ctx->pc = 0x31F8F4u;
label_31f8f4:
    // 0x31f8f4: 0x2e610009  sltiu       $at, $s3, 0x9
    ctx->pc = 0x31f8f4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_31f8f8:
    // 0x31f8f8: 0x102006c4  beqz        $at, . + 4 + (0x6C4 << 2)
label_31f8fc:
    if (ctx->pc == 0x31F8FCu) {
        ctx->pc = 0x31F900u;
        goto label_31f900;
    }
    ctx->pc = 0x31F8F8u;
    {
        const bool branch_taken_0x31f8f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x31f8f8) {
            ctx->pc = 0x32140Cu;
            goto label_32140c;
        }
    }
    ctx->pc = 0x31F900u;
label_31f900:
    // 0x31f900: 0x27a302d0  addiu       $v1, $sp, 0x2D0
    ctx->pc = 0x31f900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
label_31f904:
    // 0x31f904: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_31f908:
    if (ctx->pc == 0x31F908u) {
        ctx->pc = 0x31F908u;
            // 0x31f908: 0x24020100  addiu       $v0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->pc = 0x31F90Cu;
        goto label_31f90c;
    }
    ctx->pc = 0x31F904u;
    {
        const bool branch_taken_0x31f904 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F908u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31F904u;
            // 0x31f908: 0x24020100  addiu       $v0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f904) {
            ctx->pc = 0x31F928u;
            goto label_31f928;
        }
    }
    ctx->pc = 0x31F90Cu;
label_31f90c:
    // 0x31f90c: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x31f90cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_31f910:
    // 0x31f910: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x31f910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_31f914:
    // 0x31f914: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x31f914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_31f918:
    // 0x31f918: 0x0  nop
    ctx->pc = 0x31f918u;
    // NOP
label_31f91c:
    // 0x31f91c: 0x0  nop
    ctx->pc = 0x31f91cu;
    // NOP
label_31f920:
    // 0x31f920: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_31f924:
    if (ctx->pc == 0x31F924u) {
        ctx->pc = 0x31F928u;
        goto label_31f928;
    }
    ctx->pc = 0x31F920u;
    {
        const bool branch_taken_0x31f920 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31f920) {
            ctx->pc = 0x31F90Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_31f90c;
        }
    }
    ctx->pc = 0x31F928u;
label_31f928:
    // 0x31f928: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x31f928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_31f92c:
    // 0x31f92c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x31f92cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_31f930:
    // 0x31f930: 0x8fa601d0  lw          $a2, 0x1D0($sp)
    ctx->pc = 0x31f930u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
label_31f934:
    // 0x31f934: 0x27a402d0  addiu       $a0, $sp, 0x2D0
    ctx->pc = 0x31f934u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
label_31f938:
    // 0x31f938: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x31f938u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_31f93c:
    // 0x31f93c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x31f93cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_31f940:
    // 0x31f940: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x31f940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_31f944:
    // 0x31f944: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x31f944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_31f948:
    // 0x31f948: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x31f948u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_31f94c:
    // 0x31f94c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31f94cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_31f950:
    // 0x31f950: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x31f950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_31f954:
    // 0x31f954: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x31f954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_31f958:
    // 0x31f958: 0x8fa201f8  lw          $v0, 0x1F8($sp)
    ctx->pc = 0x31f958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
label_31f95c:
    // 0x31f95c: 0xc043be4  jal         func_10EF90
label_31f960:
    if (ctx->pc == 0x31F960u) {
        ctx->pc = 0x31F960u;
            // 0x31f960: 0xac430158  sw          $v1, 0x158($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 344), GPR_U32(ctx, 3));
        ctx->pc = 0x31F964u;
        goto label_31f964;
    }
    ctx->pc = 0x31F95Cu;
    SET_GPR_U32(ctx, 31, 0x31F964u);
    ctx->pc = 0x31F960u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31F95Cu;
            // 0x31f960: 0xac430158  sw          $v1, 0x158($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 344), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EF90u;
    if (runtime->hasFunction(0x10EF90u)) {
        auto targetFn = runtime->lookupFunction(0x10EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F964u; }
        if (ctx->pc != 0x31F964u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010EF90_0x10ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F964u; }
        if (ctx->pc != 0x31F964u) { return; }
    }
    ctx->pc = 0x31F964u;
label_31f964:
    // 0x31f964: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x31f964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
label_31f968:
    // 0x31f968: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x31f968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_31f96c:
    // 0x31f96c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x31f96cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_31f970:
    // 0x31f970: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x31f970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_31f974:
    // 0x31f974: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x31f974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_31f978:
    // 0x31f978: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x31f978u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_31f97c:
    // 0x31f97c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31f97cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_31f980:
    // 0x31f980: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x31f980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_31f984:
    // 0x31f984: 0xa4400046  sh          $zero, 0x46($v0)
    ctx->pc = 0x31f984u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 70), (uint16_t)GPR_U32(ctx, 0));
label_31f988:
    // 0x31f988: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x31f988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
label_31f98c:
    // 0x31f98c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x31f98cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_31f990:
    // 0x31f990: 0xc123020  jal         func_48C080
label_31f994:
    if (ctx->pc == 0x31F994u) {
        ctx->pc = 0x31F994u;
            // 0x31f994: 0x27a502d0  addiu       $a1, $sp, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
        ctx->pc = 0x31F998u;
        goto label_31f998;
    }
    ctx->pc = 0x31F990u;
    SET_GPR_U32(ctx, 31, 0x31F998u);
    ctx->pc = 0x31F994u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31F990u;
            // 0x31f994: 0x27a502d0  addiu       $a1, $sp, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48C080u;
    if (runtime->hasFunction(0x48C080u)) {
        auto targetFn = runtime->lookupFunction(0x48C080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F998u; }
        if (ctx->pc != 0x31F998u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048C080_0x48c080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F998u; }
        if (ctx->pc != 0x31F998u) { return; }
    }
    ctx->pc = 0x31F998u;
label_31f998:
    // 0x31f998: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x31f998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
label_31f99c:
    // 0x31f99c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x31f99cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_31f9a0:
    // 0x31f9a0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x31f9a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_31f9a4:
    // 0x31f9a4: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x31f9a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_31f9a8:
    // 0x31f9a8: 0x320f809  jalr        $t9
label_31f9ac:
    if (ctx->pc == 0x31F9ACu) {
        ctx->pc = 0x31F9B0u;
        goto label_31f9b0;
    }
    ctx->pc = 0x31F9A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x31F9B0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x31F9B0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x31F9B0u; }
            if (ctx->pc != 0x31F9B0u) { return; }
        }
        }
    }
    ctx->pc = 0x31F9B0u;
label_31f9b0:
    // 0x31f9b0: 0x10000696  b           . + 4 + (0x696 << 2)
label_31f9b4:
    if (ctx->pc == 0x31F9B4u) {
        ctx->pc = 0x31F9B8u;
        goto label_31f9b8;
    }
    ctx->pc = 0x31F9B0u;
    {
        const bool branch_taken_0x31f9b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31f9b0) {
            ctx->pc = 0x32140Cu;
            goto label_32140c;
        }
    }
    ctx->pc = 0x31F9B8u;
label_31f9b8:
    // 0x31f9b8: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_31f9bc:
    if (ctx->pc == 0x31F9BCu) {
        ctx->pc = 0x31F9BCu;
            // 0x31f9bc: 0x8fa201e0  lw          $v0, 0x1E0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
        ctx->pc = 0x31F9C0u;
        goto label_31f9c0;
    }
    ctx->pc = 0x31F9B8u;
    {
        const bool branch_taken_0x31f9b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31f9b8) {
            ctx->pc = 0x31F9BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x31F9B8u;
            // 0x31f9bc: 0x8fa201e0  lw          $v0, 0x1E0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x31F9E0u;
            goto label_31f9e0;
        }
    }
    ctx->pc = 0x31F9C0u;
label_31f9c0:
    // 0x31f9c0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x31f9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_31f9c4:
    // 0x31f9c4: 0xc0fd080  jal         func_3F4200
label_31f9c8:
    if (ctx->pc == 0x31F9C8u) {
        ctx->pc = 0x31F9C8u;
            // 0x31f9c8: 0x8c440e68  lw          $a0, 0xE68($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3688)));
        ctx->pc = 0x31F9CCu;
        goto label_31f9cc;
    }
    ctx->pc = 0x31F9C4u;
    SET_GPR_U32(ctx, 31, 0x31F9CCu);
    ctx->pc = 0x31F9C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31F9C4u;
            // 0x31f9c8: 0x8c440e68  lw          $a0, 0xE68($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3688)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F4200u;
    if (runtime->hasFunction(0x3F4200u)) {
        auto targetFn = runtime->lookupFunction(0x3F4200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F9CCu; }
        if (ctx->pc != 0x31F9CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F4200_0x3f4200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F9CCu; }
        if (ctx->pc != 0x31F9CCu) { return; }
    }
    ctx->pc = 0x31F9CCu;
label_31f9cc:
    // 0x31f9cc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x31f9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_31f9d0:
    // 0x31f9d0: 0x8c440e68  lw          $a0, 0xE68($v0)
    ctx->pc = 0x31f9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3688)));
label_31f9d4:
    // 0x31f9d4: 0xc0fd080  jal         func_3F4200
label_31f9d8:
    if (ctx->pc == 0x31F9D8u) {
        ctx->pc = 0x31F9D8u;
            // 0x31f9d8: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->pc = 0x31F9DCu;
        goto label_31f9dc;
    }
    ctx->pc = 0x31F9D4u;
    SET_GPR_U32(ctx, 31, 0x31F9DCu);
    ctx->pc = 0x31F9D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31F9D4u;
            // 0x31f9d8: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F4200u;
    if (runtime->hasFunction(0x3F4200u)) {
        auto targetFn = runtime->lookupFunction(0x3F4200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F9DCu; }
        if (ctx->pc != 0x31F9DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F4200_0x3f4200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F9DCu; }
        if (ctx->pc != 0x31F9DCu) { return; }
    }
    ctx->pc = 0x31F9DCu;
label_31f9dc:
    // 0x31f9dc: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x31f9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
label_31f9e0:
    // 0x31f9e0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x31f9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_31f9e4:
    // 0x31f9e4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x31f9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_31f9e8:
    // 0x31f9e8: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x31f9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_31f9ec:
    // 0x31f9ec: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x31f9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_31f9f0:
    // 0x31f9f0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x31f9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_31f9f4:
    // 0x31f9f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31f9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_31f9f8:
    // 0x31f9f8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x31f9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_31f9fc:
    // 0x31f9fc: 0xa4400046  sh          $zero, 0x46($v0)
    ctx->pc = 0x31f9fcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 70), (uint16_t)GPR_U32(ctx, 0));
label_31fa00:
    // 0x31fa00: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x31fa00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
label_31fa04:
    // 0x31fa04: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x31fa04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_31fa08:
    // 0x31fa08: 0xc123020  jal         func_48C080
label_31fa0c:
    if (ctx->pc == 0x31FA0Cu) {
        ctx->pc = 0x31FA0Cu;
            // 0x31fa0c: 0x8fa501c0  lw          $a1, 0x1C0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
        ctx->pc = 0x31FA10u;
        goto label_31fa10;
    }
    ctx->pc = 0x31FA08u;
    SET_GPR_U32(ctx, 31, 0x31FA10u);
    ctx->pc = 0x31FA0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31FA08u;
            // 0x31fa0c: 0x8fa501c0  lw          $a1, 0x1C0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48C080u;
    if (runtime->hasFunction(0x48C080u)) {
        auto targetFn = runtime->lookupFunction(0x48C080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31FA10u; }
        if (ctx->pc != 0x31FA10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048C080_0x48c080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31FA10u; }
        if (ctx->pc != 0x31FA10u) { return; }
    }
    ctx->pc = 0x31FA10u;
label_31fa10:
    // 0x31fa10: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x31fa10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
label_31fa14:
    // 0x31fa14: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x31fa14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_31fa18:
    // 0x31fa18: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x31fa18u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_31fa1c:
    // 0x31fa1c: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x31fa1cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_31fa20:
    // 0x31fa20: 0x320f809  jalr        $t9
label_31fa24:
    if (ctx->pc == 0x31FA24u) {
        ctx->pc = 0x31FA28u;
        goto label_31fa28;
    }
    ctx->pc = 0x31FA20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x31FA28u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x31FA28u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x31FA28u; }
            if (ctx->pc != 0x31FA28u) { return; }
        }
        }
    }
    ctx->pc = 0x31FA28u;
label_31fa28:
    // 0x31fa28: 0x10000678  b           . + 4 + (0x678 << 2)
label_31fa2c:
    if (ctx->pc == 0x31FA2Cu) {
        ctx->pc = 0x31FA30u;
        goto label_31fa30;
    }
    ctx->pc = 0x31FA28u;
    {
        const bool branch_taken_0x31fa28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31fa28) {
            ctx->pc = 0x32140Cu;
            goto label_32140c;
        }
    }
    ctx->pc = 0x31FA30u;
label_31fa30:
    // 0x31fa30: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x31fa30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_31fa34:
    // 0x31fa34: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x31fa34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_31fa38:
    // 0x31fa38: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x31fa38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_31fa3c:
    // 0x31fa3c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x31fa3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_31fa40:
    // 0x31fa40: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31fa40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_31fa44:
    // 0x31fa44: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x31fa44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_31fa48:
    // 0x31fa48: 0x10000670  b           . + 4 + (0x670 << 2)
label_31fa4c:
    if (ctx->pc == 0x31FA4Cu) {
        ctx->pc = 0x31FA4Cu;
            // 0x31fa4c: 0xa4400046  sh          $zero, 0x46($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 70), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x31FA50u;
        goto label_31fa50;
    }
    ctx->pc = 0x31FA48u;
    {
        const bool branch_taken_0x31fa48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31FA4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31FA48u;
            // 0x31fa4c: 0xa4400046  sh          $zero, 0x46($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 70), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fa48) {
            ctx->pc = 0x32140Cu;
            goto label_32140c;
        }
    }
    ctx->pc = 0x31FA50u;
label_31fa50:
    // 0x31fa50: 0xc123328  jal         func_48CCA0
label_31fa54:
    if (ctx->pc == 0x31FA54u) {
        ctx->pc = 0x31FA54u;
            // 0x31fa54: 0x24050028  addiu       $a1, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->pc = 0x31FA58u;
        goto label_31fa58;
    }
    ctx->pc = 0x31FA50u;
    SET_GPR_U32(ctx, 31, 0x31FA58u);
    ctx->pc = 0x31FA54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31FA50u;
            // 0x31fa54: 0x24050028  addiu       $a1, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CCA0u;
    if (runtime->hasFunction(0x48CCA0u)) {
        auto targetFn = runtime->lookupFunction(0x48CCA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31FA58u; }
        if (ctx->pc != 0x31FA58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CCA0_0x48cca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31FA58u; }
        if (ctx->pc != 0x31FA58u) { return; }
    }
    ctx->pc = 0x31FA58u;
label_31fa58:
    // 0x31fa58: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x31fa58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_31fa5c:
    // 0x31fa5c: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x31fa5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_31fa60:
    // 0x31fa60: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x31fa60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31fa64:
    // 0x31fa64: 0x24a5c600  addiu       $a1, $a1, -0x3A00
    ctx->pc = 0x31fa64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952448));
label_31fa68:
    // 0x31fa68: 0xc123944  jal         func_48E510
label_31fa6c:
    if (ctx->pc == 0x31FA6Cu) {
        ctx->pc = 0x31FA6Cu;
            // 0x31fa6c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x31FA70u;
        goto label_31fa70;
    }
    ctx->pc = 0x31FA68u;
    SET_GPR_U32(ctx, 31, 0x31FA70u);
    ctx->pc = 0x31FA6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31FA68u;
            // 0x31fa6c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31FA70u; }
        if (ctx->pc != 0x31FA70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31FA70u; }
        if (ctx->pc != 0x31FA70u) { return; }
    }
    ctx->pc = 0x31FA70u;
label_31fa70:
    // 0x31fa70: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x31fa70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_31fa74:
    // 0x31fa74: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x31fa74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_31fa78:
    // 0x31fa78: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x31fa78u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31fa7c:
    // 0x31fa7c: 0x24a5c610  addiu       $a1, $a1, -0x39F0
    ctx->pc = 0x31fa7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952464));
label_31fa80:
    // 0x31fa80: 0xc123944  jal         func_48E510
label_31fa84:
    if (ctx->pc == 0x31FA84u) {
        ctx->pc = 0x31FA84u;
            // 0x31fa84: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x31FA88u;
        goto label_31fa88;
    }
    ctx->pc = 0x31FA80u;
    SET_GPR_U32(ctx, 31, 0x31FA88u);
    ctx->pc = 0x31FA84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31FA80u;
            // 0x31fa84: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31FA88u; }
        if (ctx->pc != 0x31FA88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31FA88u; }
        if (ctx->pc != 0x31FA88u) { return; }
    }
    ctx->pc = 0x31FA88u;
label_31fa88:
    // 0x31fa88: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x31fa88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_31fa8c:
    // 0x31fa8c: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x31fa8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_31fa90:
    // 0x31fa90: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x31fa90u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31fa94:
    // 0x31fa94: 0x24a5c5c0  addiu       $a1, $a1, -0x3A40
    ctx->pc = 0x31fa94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952384));
label_31fa98:
    // 0x31fa98: 0xc123944  jal         func_48E510
label_31fa9c:
    if (ctx->pc == 0x31FA9Cu) {
        ctx->pc = 0x31FA9Cu;
            // 0x31fa9c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x31FAA0u;
        goto label_31faa0;
    }
    ctx->pc = 0x31FA98u;
    SET_GPR_U32(ctx, 31, 0x31FAA0u);
    ctx->pc = 0x31FA9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31FA98u;
            // 0x31fa9c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31FAA0u; }
        if (ctx->pc != 0x31FAA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31FAA0u; }
        if (ctx->pc != 0x31FAA0u) { return; }
    }
    ctx->pc = 0x31FAA0u;
label_31faa0:
    // 0x31faa0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x31faa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_31faa4:
    // 0x31faa4: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x31faa4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_31faa8:
    // 0x31faa8: 0x24a5c4b8  addiu       $a1, $a1, -0x3B48
    ctx->pc = 0x31faa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952120));
label_31faac:
    // 0x31faac: 0xc123944  jal         func_48E510
label_31fab0:
    if (ctx->pc == 0x31FAB0u) {
        ctx->pc = 0x31FAB0u;
            // 0x31fab0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x31FAB4u;
        goto label_31fab4;
    }
    ctx->pc = 0x31FAACu;
    SET_GPR_U32(ctx, 31, 0x31FAB4u);
    ctx->pc = 0x31FAB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31FAACu;
            // 0x31fab0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31FAB4u; }
        if (ctx->pc != 0x31FAB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31FAB4u; }
        if (ctx->pc != 0x31FAB4u) { return; }
    }
    ctx->pc = 0x31FAB4u;
label_31fab4:
    // 0x31fab4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x31fab4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_31fab8:
    // 0x31fab8: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x31fab8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_31fabc:
    // 0x31fabc: 0x24a5c618  addiu       $a1, $a1, -0x39E8
    ctx->pc = 0x31fabcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952472));
label_31fac0:
    // 0x31fac0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x31fac0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31fac4:
    // 0x31fac4: 0xc123944  jal         func_48E510
label_31fac8:
    if (ctx->pc == 0x31FAC8u) {
        ctx->pc = 0x31FAC8u;
            // 0x31fac8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x31FACCu;
        goto label_31facc;
    }
    ctx->pc = 0x31FAC4u;
    SET_GPR_U32(ctx, 31, 0x31FACCu);
    ctx->pc = 0x31FAC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31FAC4u;
            // 0x31fac8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31FACCu; }
        if (ctx->pc != 0x31FACCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31FACCu; }
        if (ctx->pc != 0x31FACCu) { return; }
    }
    ctx->pc = 0x31FACCu;
label_31facc:
    // 0x31facc: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x31faccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_31fad0:
    // 0x31fad0: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x31fad0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_31fad4:
    // 0x31fad4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x31fad4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31fad8:
    // 0x31fad8: 0x24a5c630  addiu       $a1, $a1, -0x39D0
    ctx->pc = 0x31fad8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952496));
label_31fadc:
    // 0x31fadc: 0xc123944  jal         func_48E510
label_31fae0:
    if (ctx->pc == 0x31FAE0u) {
        ctx->pc = 0x31FAE0u;
            // 0x31fae0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x31FAE4u;
        goto label_31fae4;
    }
    ctx->pc = 0x31FADCu;
    SET_GPR_U32(ctx, 31, 0x31FAE4u);
    ctx->pc = 0x31FAE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31FADCu;
            // 0x31fae0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31FAE4u; }
        if (ctx->pc != 0x31FAE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31FAE4u; }
        if (ctx->pc != 0x31FAE4u) { return; }
    }
    ctx->pc = 0x31FAE4u;
label_31fae4:
    // 0x31fae4: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x31fae4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31fae8:
    // 0x31fae8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x31fae8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_31faec:
    // 0x31faec: 0x8fa201fc  lw          $v0, 0x1FC($sp)
    ctx->pc = 0x31faecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
label_31faf0:
    // 0x31faf0: 0x50430040  beql        $v0, $v1, . + 4 + (0x40 << 2)
label_31faf4:
    if (ctx->pc == 0x31FAF4u) {
        ctx->pc = 0x31FAF4u;
            // 0x31faf4: 0x8fa401f8  lw          $a0, 0x1F8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
        ctx->pc = 0x31FAF8u;
        goto label_31faf8;
    }
    ctx->pc = 0x31FAF0u;
    {
        const bool branch_taken_0x31faf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x31faf0) {
            ctx->pc = 0x31FAF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x31FAF0u;
            // 0x31faf4: 0x8fa401f8  lw          $a0, 0x1F8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x31FBF4u;
            goto label_31fbf4;
        }
    }
    ctx->pc = 0x31FAF8u;
label_31faf8:
    // 0x31faf8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x31faf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31fafc:
    // 0x31fafc: 0x50450021  beql        $v0, $a1, . + 4 + (0x21 << 2)
label_31fb00:
    if (ctx->pc == 0x31FB00u) {
        ctx->pc = 0x31FB00u;
            // 0x31fb00: 0x8fa401f8  lw          $a0, 0x1F8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
        ctx->pc = 0x31FB04u;
        goto label_31fb04;
    }
    ctx->pc = 0x31FAFCu;
    {
        const bool branch_taken_0x31fafc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x31fafc) {
            ctx->pc = 0x31FB00u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x31FAFCu;
            // 0x31fb00: 0x8fa401f8  lw          $a0, 0x1F8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x31FB84u;
            goto label_31fb84;
        }
    }
    ctx->pc = 0x31FB04u;
label_31fb04:
    // 0x31fb04: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_31fb08:
    if (ctx->pc == 0x31FB08u) {
        ctx->pc = 0x31FB08u;
            // 0x31fb08: 0x8fa401f8  lw          $a0, 0x1F8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
        ctx->pc = 0x31FB0Cu;
        goto label_31fb0c;
    }
    ctx->pc = 0x31FB04u;
    {
        const bool branch_taken_0x31fb04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31fb04) {
            ctx->pc = 0x31FB08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x31FB04u;
            // 0x31fb08: 0x8fa401f8  lw          $a0, 0x1F8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x31FB14u;
            goto label_31fb14;
        }
    }
    ctx->pc = 0x31FB0Cu;
label_31fb0c:
    // 0x31fb0c: 0x10000043  b           . + 4 + (0x43 << 2)
label_31fb10:
    if (ctx->pc == 0x31FB10u) {
        ctx->pc = 0x31FB10u;
            // 0x31fb10: 0x8ec50008  lw          $a1, 0x8($s6) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
        ctx->pc = 0x31FB14u;
        goto label_31fb14;
    }
    ctx->pc = 0x31FB0Cu;
    {
        const bool branch_taken_0x31fb0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31FB10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31FB0Cu;
            // 0x31fb10: 0x8ec50008  lw          $a1, 0x8($s6) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fb0c) {
            ctx->pc = 0x31FC1Cu;
            goto label_31fc1c;
        }
    }
    ctx->pc = 0x31FB14u;
label_31fb14:
    // 0x31fb14: 0xc0c9334  jal         func_324CD0
label_31fb18:
    if (ctx->pc == 0x31FB18u) {
        ctx->pc = 0x31FB18u;
            // 0x31fb18: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x31FB1Cu;
        goto label_31fb1c;
    }
    ctx->pc = 0x31FB14u;
    SET_GPR_U32(ctx, 31, 0x31FB1Cu);
    ctx->pc = 0x31FB18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31FB14u;
            // 0x31fb18: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x324CD0u;
    if (runtime->hasFunction(0x324CD0u)) {
        auto targetFn = runtime->lookupFunction(0x324CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31FB1Cu; }
        if (ctx->pc != 0x31FB1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00324CD0_0x324cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31FB1Cu; }
        if (ctx->pc != 0x31FB1Cu) { return; }
    }
    ctx->pc = 0x31FB1Cu;
label_31fb1c:
    // 0x31fb1c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x31fb1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_31fb20:
    // 0x31fb20: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x31fb20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_31fb24:
    // 0x31fb24: 0x24a5c630  addiu       $a1, $a1, -0x39D0
    ctx->pc = 0x31fb24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952496));
label_31fb28:
    // 0x31fb28: 0xc123944  jal         func_48E510
label_31fb2c:
    if (ctx->pc == 0x31FB2Cu) {
        ctx->pc = 0x31FB2Cu;
            // 0x31fb2c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x31FB30u;
        goto label_31fb30;
    }
    ctx->pc = 0x31FB28u;
    SET_GPR_U32(ctx, 31, 0x31FB30u);
    ctx->pc = 0x31FB2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31FB28u;
            // 0x31fb2c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31FB30u; }
        if (ctx->pc != 0x31FB30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31FB30u; }
        if (ctx->pc != 0x31FB30u) { return; }
    }
    ctx->pc = 0x31FB30u;
label_31fb30:
    // 0x31fb30: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x31fb30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_31fb34:
    // 0x31fb34: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x31fb34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_31fb38:
    // 0x31fb38: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x31fb38u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31fb3c:
    // 0x31fb3c: 0x24a5c550  addiu       $a1, $a1, -0x3AB0
    ctx->pc = 0x31fb3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952272));
label_31fb40:
    // 0x31fb40: 0xc123944  jal         func_48E510
label_31fb44:
    if (ctx->pc == 0x31FB44u) {
        ctx->pc = 0x31FB44u;
            // 0x31fb44: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x31FB48u;
        goto label_31fb48;
    }
    ctx->pc = 0x31FB40u;
    SET_GPR_U32(ctx, 31, 0x31FB48u);
    ctx->pc = 0x31FB44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31FB40u;
            // 0x31fb44: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31FB48u; }
        if (ctx->pc != 0x31FB48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31FB48u; }
        if (ctx->pc != 0x31FB48u) { return; }
    }
    ctx->pc = 0x31FB48u;
label_31fb48:
    // 0x31fb48: 0x52200008  beql        $s1, $zero, . + 4 + (0x8 << 2)
label_31fb4c:
    if (ctx->pc == 0x31FB4Cu) {
        ctx->pc = 0x31FB4Cu;
            // 0x31fb4c: 0x8ea50008  lw          $a1, 0x8($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
        ctx->pc = 0x31FB50u;
        goto label_31fb50;
    }
    ctx->pc = 0x31FB48u;
    {
        const bool branch_taken_0x31fb48 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x31fb48) {
            ctx->pc = 0x31FB4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x31FB48u;
            // 0x31fb4c: 0x8ea50008  lw          $a1, 0x8($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x31FB6Cu;
            goto label_31fb6c;
        }
    }
    ctx->pc = 0x31FB50u;
label_31fb50:
    // 0x31fb50: 0x8ea50008  lw          $a1, 0x8($s5)
    ctx->pc = 0x31fb50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_31fb54:
    // 0x31fb54: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x31fb54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31fb58:
    // 0x31fb58: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x31fb58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_31fb5c:
    // 0x31fb5c: 0xc123654  jal         func_48D950
label_31fb60:
    if (ctx->pc == 0x31FB60u) {
        ctx->pc = 0x31FB60u;
            // 0x31fb60: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x31FB64u;
        goto label_31fb64;
    }
    ctx->pc = 0x31FB5Cu;
    SET_GPR_U32(ctx, 31, 0x31FB64u);
    ctx->pc = 0x31FB60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31FB5Cu;
            // 0x31fb60: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31FB64u; }
        if (ctx->pc != 0x31FB64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31FB64u; }
        if (ctx->pc != 0x31FB64u) { return; }
    }
    ctx->pc = 0x31FB64u;
label_31fb64:
    // 0x31fb64: 0x1000002c  b           . + 4 + (0x2C << 2)
label_31fb68:
    if (ctx->pc == 0x31FB68u) {
        ctx->pc = 0x31FB6Cu;
        goto label_31fb6c;
    }
    ctx->pc = 0x31FB64u;
    {
        const bool branch_taken_0x31fb64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31fb64) {
            ctx->pc = 0x31FC18u;
            goto label_31fc18;
        }
    }
    ctx->pc = 0x31FB6Cu;
label_31fb6c:
    // 0x31fb6c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x31fb6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31fb70:
    // 0x31fb70: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x31fb70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_31fb74:
    // 0x31fb74: 0xc123654  jal         func_48D950
label_31fb78:
    if (ctx->pc == 0x31FB78u) {
        ctx->pc = 0x31FB78u;
            // 0x31fb78: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x31FB7Cu;
        goto label_31fb7c;
    }
    ctx->pc = 0x31FB74u;
    SET_GPR_U32(ctx, 31, 0x31FB7Cu);
    ctx->pc = 0x31FB78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31FB74u;
            // 0x31fb78: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31FB7Cu; }
        if (ctx->pc != 0x31FB7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31FB7Cu; }
        if (ctx->pc != 0x31FB7Cu) { return; }
    }
    ctx->pc = 0x31FB7Cu;
label_31fb7c:
    // 0x31fb7c: 0x10000026  b           . + 4 + (0x26 << 2)
label_31fb80:
    if (ctx->pc == 0x31FB80u) {
        ctx->pc = 0x31FB84u;
        goto label_31fb84;
    }
    ctx->pc = 0x31FB7Cu;
    {
        const bool branch_taken_0x31fb7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31fb7c) {
            ctx->pc = 0x31FC18u;
            goto label_31fc18;
        }
    }
    ctx->pc = 0x31FB84u;
label_31fb84:
    // 0x31fb84: 0xc0c9334  jal         func_324CD0
label_31fb88:
    if (ctx->pc == 0x31FB88u) {
        ctx->pc = 0x31FB88u;
            // 0x31fb88: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x31FB8Cu;
        goto label_31fb8c;
    }
    ctx->pc = 0x31FB84u;
    SET_GPR_U32(ctx, 31, 0x31FB8Cu);
    ctx->pc = 0x31FB88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31FB84u;
            // 0x31fb88: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x324CD0u;
    if (runtime->hasFunction(0x324CD0u)) {
        auto targetFn = runtime->lookupFunction(0x324CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31FB8Cu; }
        if (ctx->pc != 0x31FB8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00324CD0_0x324cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31FB8Cu; }
        if (ctx->pc != 0x31FB8Cu) { return; }
    }
    ctx->pc = 0x31FB8Cu;
label_31fb8c:
    // 0x31fb8c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x31fb8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_31fb90:
    // 0x31fb90: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x31fb90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_31fb94:
    // 0x31fb94: 0x24a5c650  addiu       $a1, $a1, -0x39B0
    ctx->pc = 0x31fb94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952528));
label_31fb98:
    // 0x31fb98: 0xc123944  jal         func_48E510
label_31fb9c:
    if (ctx->pc == 0x31FB9Cu) {
        ctx->pc = 0x31FB9Cu;
            // 0x31fb9c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x31FBA0u;
        goto label_31fba0;
    }
    ctx->pc = 0x31FB98u;
    SET_GPR_U32(ctx, 31, 0x31FBA0u);
    ctx->pc = 0x31FB9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31FB98u;
            // 0x31fb9c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31FBA0u; }
        if (ctx->pc != 0x31FBA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31FBA0u; }
        if (ctx->pc != 0x31FBA0u) { return; }
    }
    ctx->pc = 0x31FBA0u;
label_31fba0:
    // 0x31fba0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x31fba0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_31fba4:
    // 0x31fba4: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x31fba4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_31fba8:
    // 0x31fba8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x31fba8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31fbac:
    // 0x31fbac: 0x24a5c530  addiu       $a1, $a1, -0x3AD0
    ctx->pc = 0x31fbacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952240));
label_31fbb0:
    // 0x31fbb0: 0xc123944  jal         func_48E510
label_31fbb4:
    if (ctx->pc == 0x31FBB4u) {
        ctx->pc = 0x31FBB4u;
            // 0x31fbb4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x31FBB8u;
        goto label_31fbb8;
    }
    ctx->pc = 0x31FBB0u;
    SET_GPR_U32(ctx, 31, 0x31FBB8u);
    ctx->pc = 0x31FBB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31FBB0u;
            // 0x31fbb4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31FBB8u; }
        if (ctx->pc != 0x31FBB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31FBB8u; }
        if (ctx->pc != 0x31FBB8u) { return; }
    }
    ctx->pc = 0x31FBB8u;
label_31fbb8:
    // 0x31fbb8: 0x52200008  beql        $s1, $zero, . + 4 + (0x8 << 2)
label_31fbbc:
    if (ctx->pc == 0x31FBBCu) {
        ctx->pc = 0x31FBBCu;
            // 0x31fbbc: 0x8ea50008  lw          $a1, 0x8($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
        ctx->pc = 0x31FBC0u;
        goto label_31fbc0;
    }
    ctx->pc = 0x31FBB8u;
    {
        const bool branch_taken_0x31fbb8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x31fbb8) {
            ctx->pc = 0x31FBBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x31FBB8u;
            // 0x31fbbc: 0x8ea50008  lw          $a1, 0x8($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x31FBDCu;
            goto label_31fbdc;
        }
    }
    ctx->pc = 0x31FBC0u;
label_31fbc0:
    // 0x31fbc0: 0x8ea50008  lw          $a1, 0x8($s5)
    ctx->pc = 0x31fbc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_31fbc4:
    // 0x31fbc4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x31fbc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31fbc8:
    // 0x31fbc8: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x31fbc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_31fbcc:
    // 0x31fbcc: 0xc123654  jal         func_48D950
label_31fbd0:
    if (ctx->pc == 0x31FBD0u) {
        ctx->pc = 0x31FBD0u;
            // 0x31fbd0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x31FBD4u;
        goto label_31fbd4;
    }
    ctx->pc = 0x31FBCCu;
    SET_GPR_U32(ctx, 31, 0x31FBD4u);
    ctx->pc = 0x31FBD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31FBCCu;
            // 0x31fbd0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31FBD4u; }
        if (ctx->pc != 0x31FBD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31FBD4u; }
        if (ctx->pc != 0x31FBD4u) { return; }
    }
    ctx->pc = 0x31FBD4u;
label_31fbd4:
    // 0x31fbd4: 0x10000010  b           . + 4 + (0x10 << 2)
label_31fbd8:
    if (ctx->pc == 0x31FBD8u) {
        ctx->pc = 0x31FBDCu;
        goto label_31fbdc;
    }
    ctx->pc = 0x31FBD4u;
    {
        const bool branch_taken_0x31fbd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31fbd4) {
            ctx->pc = 0x31FC18u;
            goto label_31fc18;
        }
    }
    ctx->pc = 0x31FBDCu;
label_31fbdc:
    // 0x31fbdc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x31fbdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31fbe0:
    // 0x31fbe0: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x31fbe0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_31fbe4:
    // 0x31fbe4: 0xc123654  jal         func_48D950
label_31fbe8:
    if (ctx->pc == 0x31FBE8u) {
        ctx->pc = 0x31FBE8u;
            // 0x31fbe8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x31FBECu;
        goto label_31fbec;
    }
    ctx->pc = 0x31FBE4u;
    SET_GPR_U32(ctx, 31, 0x31FBECu);
    ctx->pc = 0x31FBE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31FBE4u;
            // 0x31fbe8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31FBECu; }
        if (ctx->pc != 0x31FBECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31FBECu; }
        if (ctx->pc != 0x31FBECu) { return; }
    }
    ctx->pc = 0x31FBECu;
label_31fbec:
    // 0x31fbec: 0x1000000a  b           . + 4 + (0xA << 2)
label_31fbf0:
    if (ctx->pc == 0x31FBF0u) {
        ctx->pc = 0x31FBF4u;
        goto label_31fbf4;
    }
    ctx->pc = 0x31FBECu;
    {
        const bool branch_taken_0x31fbec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31fbec) {
            ctx->pc = 0x31FC18u;
            goto label_31fc18;
        }
    }
    ctx->pc = 0x31FBF4u;
label_31fbf4:
    // 0x31fbf4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x31fbf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31fbf8:
    // 0x31fbf8: 0xc0c9334  jal         func_324CD0
label_31fbfc:
    if (ctx->pc == 0x31FBFCu) {
        ctx->pc = 0x31FBFCu;
            // 0x31fbfc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x31FC00u;
        goto label_31fc00;
    }
    ctx->pc = 0x31FBF8u;
    SET_GPR_U32(ctx, 31, 0x31FC00u);
    ctx->pc = 0x31FBFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31FBF8u;
            // 0x31fbfc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x324CD0u;
    if (runtime->hasFunction(0x324CD0u)) {
        auto targetFn = runtime->lookupFunction(0x324CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31FC00u; }
        if (ctx->pc != 0x31FC00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00324CD0_0x324cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31FC00u; }
        if (ctx->pc != 0x31FC00u) { return; }
    }
    ctx->pc = 0x31FC00u;
label_31fc00:
    // 0x31fc00: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x31fc00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_31fc04:
    // 0x31fc04: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x31fc04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_31fc08:
    // 0x31fc08: 0x24a5c630  addiu       $a1, $a1, -0x39D0
    ctx->pc = 0x31fc08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952496));
label_31fc0c:
    // 0x31fc0c: 0xc123944  jal         func_48E510
label_31fc10:
    if (ctx->pc == 0x31FC10u) {
        ctx->pc = 0x31FC10u;
            // 0x31fc10: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x31FC14u;
        goto label_31fc14;
    }
    ctx->pc = 0x31FC0Cu;
    SET_GPR_U32(ctx, 31, 0x31FC14u);
    ctx->pc = 0x31FC10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31FC0Cu;
            // 0x31fc10: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31FC14u; }
        if (ctx->pc != 0x31FC14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31FC14u; }
        if (ctx->pc != 0x31FC14u) { return; }
    }
    ctx->pc = 0x31FC14u;
label_31fc14:
    // 0x31fc14: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x31fc14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31fc18:
    // 0x31fc18: 0x8ec50008  lw          $a1, 0x8($s6)
    ctx->pc = 0x31fc18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
label_31fc1c:
    // 0x31fc1c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x31fc1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_31fc20:
    // 0x31fc20: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x31fc20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_31fc24:
    // 0x31fc24: 0xc123654  jal         func_48D950
label_31fc28:
    if (ctx->pc == 0x31FC28u) {
        ctx->pc = 0x31FC28u;
            // 0x31fc28: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x31FC2Cu;
        goto label_31fc2c;
    }
    ctx->pc = 0x31FC24u;
    SET_GPR_U32(ctx, 31, 0x31FC2Cu);
    ctx->pc = 0x31FC28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31FC24u;
            // 0x31fc28: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31FC2Cu; }
        if (ctx->pc != 0x31FC2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31FC2Cu; }
        if (ctx->pc != 0x31FC2Cu) { return; }
    }
    ctx->pc = 0x31FC2Cu;
label_31fc2c:
    // 0x31fc2c: 0x100005f7  b           . + 4 + (0x5F7 << 2)
label_31fc30:
    if (ctx->pc == 0x31FC30u) {
        ctx->pc = 0x31FC34u;
        goto label_31fc34;
    }
    ctx->pc = 0x31FC2Cu;
    {
        const bool branch_taken_0x31fc2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31fc2c) {
            ctx->pc = 0x32140Cu;
            goto label_32140c;
        }
    }
    ctx->pc = 0x31FC34u;
label_31fc34:
    // 0x31fc34: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_31fc38:
    if (ctx->pc == 0x31FC38u) {
        ctx->pc = 0x31FC38u;
            // 0x31fc38: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x31FC3Cu;
        goto label_31fc3c;
    }
    ctx->pc = 0x31FC34u;
    {
        const bool branch_taken_0x31fc34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31fc34) {
            ctx->pc = 0x31FC38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x31FC34u;
            // 0x31fc38: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x31FC64u;
            goto label_31fc64;
        }
    }
    ctx->pc = 0x31FC3Cu;
label_31fc3c:
    // 0x31fc3c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x31fc3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_31fc40:
    // 0x31fc40: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x31fc40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_31fc44:
    // 0x31fc44: 0x24a5c530  addiu       $a1, $a1, -0x3AD0
    ctx->pc = 0x31fc44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952240));
label_31fc48:
    // 0x31fc48: 0xc123944  jal         func_48E510
label_31fc4c:
    if (ctx->pc == 0x31FC4Cu) {
        ctx->pc = 0x31FC4Cu;
            // 0x31fc4c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x31FC50u;
        goto label_31fc50;
    }
    ctx->pc = 0x31FC48u;
    SET_GPR_U32(ctx, 31, 0x31FC50u);
    ctx->pc = 0x31FC4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31FC48u;
            // 0x31fc4c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31FC50u; }
        if (ctx->pc != 0x31FC50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31FC50u; }
        if (ctx->pc != 0x31FC50u) { return; }
    }
    ctx->pc = 0x31FC50u;
label_31fc50:
    // 0x31fc50: 0x2e610009  sltiu       $at, $s3, 0x9
    ctx->pc = 0x31fc50u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_31fc54:
    // 0x31fc54: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
label_31fc58:
    if (ctx->pc == 0x31FC58u) {
        ctx->pc = 0x31FC58u;
            // 0x31fc58: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x31FC5Cu;
        goto label_31fc5c;
    }
    ctx->pc = 0x31FC54u;
    {
        const bool branch_taken_0x31fc54 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x31FC58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31FC54u;
            // 0x31fc58: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fc54) {
            ctx->pc = 0x31FC78u;
            goto label_31fc78;
        }
    }
    ctx->pc = 0x31FC5Cu;
label_31fc5c:
    // 0x31fc5c: 0x10000006  b           . + 4 + (0x6 << 2)
label_31fc60:
    if (ctx->pc == 0x31FC60u) {
        ctx->pc = 0x31FC60u;
            // 0x31fc60: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->pc = 0x31FC64u;
        goto label_31fc64;
    }
    ctx->pc = 0x31FC5Cu;
    {
        const bool branch_taken_0x31fc5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31FC60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31FC5Cu;
            // 0x31fc60: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fc5c) {
            ctx->pc = 0x31FC78u;
            goto label_31fc78;
        }
    }
    ctx->pc = 0x31FC64u;
label_31fc64:
    // 0x31fc64: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x31fc64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_31fc68:
    // 0x31fc68: 0x24a5c550  addiu       $a1, $a1, -0x3AB0
    ctx->pc = 0x31fc68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952272));
label_31fc6c:
    // 0x31fc6c: 0xc123944  jal         func_48E510
label_31fc70:
    if (ctx->pc == 0x31FC70u) {
        ctx->pc = 0x31FC70u;
            // 0x31fc70: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x31FC74u;
        goto label_31fc74;
    }
    ctx->pc = 0x31FC6Cu;
    SET_GPR_U32(ctx, 31, 0x31FC74u);
    ctx->pc = 0x31FC70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31FC6Cu;
            // 0x31fc70: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31FC74u; }
        if (ctx->pc != 0x31FC74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31FC74u; }
        if (ctx->pc != 0x31FC74u) { return; }
    }
    ctx->pc = 0x31FC74u;
label_31fc74:
    // 0x31fc74: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x31fc74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31fc78:
    // 0x31fc78: 0x27a30260  addiu       $v1, $sp, 0x260
    ctx->pc = 0x31fc78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
label_31fc7c:
    // 0x31fc7c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_31fc80:
    if (ctx->pc == 0x31FC80u) {
        ctx->pc = 0x31FC80u;
            // 0x31fc80: 0x24020064  addiu       $v0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->pc = 0x31FC84u;
        goto label_31fc84;
    }
    ctx->pc = 0x31FC7Cu;
    {
        const bool branch_taken_0x31fc7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x31FC80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31FC7Cu;
            // 0x31fc80: 0x24020064  addiu       $v0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fc7c) {
            ctx->pc = 0x31FCA0u;
            goto label_31fca0;
        }
    }
    ctx->pc = 0x31FC84u;
label_31fc84:
    // 0x31fc84: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x31fc84u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_31fc88:
    // 0x31fc88: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x31fc88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_31fc8c:
    // 0x31fc8c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x31fc8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_31fc90:
    // 0x31fc90: 0x0  nop
    ctx->pc = 0x31fc90u;
    // NOP
label_31fc94:
    // 0x31fc94: 0x0  nop
    ctx->pc = 0x31fc94u;
    // NOP
label_31fc98:
    // 0x31fc98: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_31fc9c:
    if (ctx->pc == 0x31FC9Cu) {
        ctx->pc = 0x31FCA0u;
        goto label_31fca0;
    }
    ctx->pc = 0x31FC98u;
    {
        const bool branch_taken_0x31fc98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31fc98) {
            ctx->pc = 0x31FC84u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_31fc84;
        }
    }
    ctx->pc = 0x31FCA0u;
label_31fca0:
    // 0x31fca0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x31fca0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_31fca4:
    // 0x31fca4: 0xc123328  jal         func_48CCA0
label_31fca8:
    if (ctx->pc == 0x31FCA8u) {
        ctx->pc = 0x31FCA8u;
            // 0x31fca8: 0x2405002d  addiu       $a1, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->pc = 0x31FCACu;
        goto label_31fcac;
    }
    ctx->pc = 0x31FCA4u;
    SET_GPR_U32(ctx, 31, 0x31FCACu);
    ctx->pc = 0x31FCA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31FCA4u;
            // 0x31fca8: 0x2405002d  addiu       $a1, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CCA0u;
    if (runtime->hasFunction(0x48CCA0u)) {
        auto targetFn = runtime->lookupFunction(0x48CCA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31FCACu; }
        if (ctx->pc != 0x31FCACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CCA0_0x48cca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31FCACu; }
        if (ctx->pc != 0x31FCACu) { return; }
    }
    ctx->pc = 0x31FCACu;
label_31fcac:
    // 0x31fcac: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x31fcacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_31fcb0:
    // 0x31fcb0: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x31fcb0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31fcb4:
    // 0x31fcb4: 0xc123328  jal         func_48CCA0
label_31fcb8:
    if (ctx->pc == 0x31FCB8u) {
        ctx->pc = 0x31FCB8u;
            // 0x31fcb8: 0x2405002e  addiu       $a1, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->pc = 0x31FCBCu;
        goto label_31fcbc;
    }
    ctx->pc = 0x31FCB4u;
    SET_GPR_U32(ctx, 31, 0x31FCBCu);
    ctx->pc = 0x31FCB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31FCB4u;
            // 0x31fcb8: 0x2405002e  addiu       $a1, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CCA0u;
    if (runtime->hasFunction(0x48CCA0u)) {
        auto targetFn = runtime->lookupFunction(0x48CCA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31FCBCu; }
        if (ctx->pc != 0x31FCBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CCA0_0x48cca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31FCBCu; }
        if (ctx->pc != 0x31FCBCu) { return; }
    }
    ctx->pc = 0x31FCBCu;
label_31fcbc:
    // 0x31fcbc: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x31fcbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_31fcc0:
    // 0x31fcc0: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x31fcc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_31fcc4:
    // 0x31fcc4: 0xc123328  jal         func_48CCA0
label_31fcc8:
    if (ctx->pc == 0x31FCC8u) {
        ctx->pc = 0x31FCC8u;
            // 0x31fcc8: 0xafa201a0  sw          $v0, 0x1A0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 2));
        ctx->pc = 0x31FCCCu;
        goto label_31fccc;
    }
    ctx->pc = 0x31FCC4u;
    SET_GPR_U32(ctx, 31, 0x31FCCCu);
    ctx->pc = 0x31FCC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31FCC4u;
            // 0x31fcc8: 0xafa201a0  sw          $v0, 0x1A0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CCA0u;
    if (runtime->hasFunction(0x48CCA0u)) {
        auto targetFn = runtime->lookupFunction(0x48CCA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31FCCCu; }
        if (ctx->pc != 0x31FCCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CCA0_0x48cca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31FCCCu; }
        if (ctx->pc != 0x31FCCCu) { return; }
    }
    ctx->pc = 0x31FCCCu;
label_31fccc:
    // 0x31fccc: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x31fcccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_31fcd0:
    // 0x31fcd0: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x31fcd0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_31fcd4:
    // 0x31fcd4: 0x24a5c600  addiu       $a1, $a1, -0x3A00
    ctx->pc = 0x31fcd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952448));
label_31fcd8:
    // 0x31fcd8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x31fcd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31fcdc:
    // 0x31fcdc: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x31fcdcu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31fce0:
    // 0x31fce0: 0xa3a00190  sb          $zero, 0x190($sp)
    ctx->pc = 0x31fce0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 400), (uint8_t)GPR_U32(ctx, 0));
label_31fce4:
    // 0x31fce4: 0xa3a00180  sb          $zero, 0x180($sp)
    ctx->pc = 0x31fce4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 384), (uint8_t)GPR_U32(ctx, 0));
label_31fce8:
    // 0x31fce8: 0xc123944  jal         func_48E510
label_31fcec:
    if (ctx->pc == 0x31FCECu) {
        ctx->pc = 0x31FCECu;
            // 0x31fcec: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x31FCF0u;
        goto label_31fcf0;
    }
    ctx->pc = 0x31FCE8u;
    SET_GPR_U32(ctx, 31, 0x31FCF0u);
    ctx->pc = 0x31FCECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31FCE8u;
            // 0x31fcec: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31FCF0u; }
        if (ctx->pc != 0x31FCF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31FCF0u; }
        if (ctx->pc != 0x31FCF0u) { return; }
    }
    ctx->pc = 0x31FCF0u;
label_31fcf0:
    // 0x31fcf0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x31fcf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_31fcf4:
    // 0x31fcf4: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x31fcf4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_31fcf8:
    // 0x31fcf8: 0xafa2017c  sw          $v0, 0x17C($sp)
    ctx->pc = 0x31fcf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 380), GPR_U32(ctx, 2));
label_31fcfc:
    // 0x31fcfc: 0x24a5c610  addiu       $a1, $a1, -0x39F0
    ctx->pc = 0x31fcfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952464));
label_31fd00:
    // 0x31fd00: 0xc123944  jal         func_48E510
label_31fd04:
    if (ctx->pc == 0x31FD04u) {
        ctx->pc = 0x31FD04u;
            // 0x31fd04: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x31FD08u;
        goto label_31fd08;
    }
    ctx->pc = 0x31FD00u;
    SET_GPR_U32(ctx, 31, 0x31FD08u);
    ctx->pc = 0x31FD04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31FD00u;
            // 0x31fd04: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31FD08u; }
        if (ctx->pc != 0x31FD08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31FD08u; }
        if (ctx->pc != 0x31FD08u) { return; }
    }
    ctx->pc = 0x31FD08u;
label_31fd08:
    // 0x31fd08: 0x3c060065  lui         $a2, 0x65
    ctx->pc = 0x31fd08u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)101 << 16));
label_31fd0c:
    // 0x31fd0c: 0xafa20178  sw          $v0, 0x178($sp)
    ctx->pc = 0x31fd0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 376), GPR_U32(ctx, 2));
label_31fd10:
    // 0x31fd10: 0x27a40260  addiu       $a0, $sp, 0x260
    ctx->pc = 0x31fd10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
label_31fd14:
    // 0x31fd14: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x31fd14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_31fd18:
    // 0x31fd18: 0x24c6c5d8  addiu       $a2, $a2, -0x3A28
    ctx->pc = 0x31fd18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294952408));
label_31fd1c:
    // 0x31fd1c: 0xc043be4  jal         func_10EF90
label_31fd20:
    if (ctx->pc == 0x31FD20u) {
        ctx->pc = 0x31FD20u;
            // 0x31fd20: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x31FD24u;
        goto label_31fd24;
    }
    ctx->pc = 0x31FD1Cu;
    SET_GPR_U32(ctx, 31, 0x31FD24u);
    ctx->pc = 0x31FD20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31FD1Cu;
            // 0x31fd20: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EF90u;
    if (runtime->hasFunction(0x10EF90u)) {
        auto targetFn = runtime->lookupFunction(0x10EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31FD24u; }
        if (ctx->pc != 0x31FD24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010EF90_0x10ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31FD24u; }
        if (ctx->pc != 0x31FD24u) { return; }
    }
    ctx->pc = 0x31FD24u;
label_31fd24:
    // 0x31fd24: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x31fd24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_31fd28:
    // 0x31fd28: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x31fd28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_31fd2c:
    // 0x31fd2c: 0x24a5c668  addiu       $a1, $a1, -0x3998
    ctx->pc = 0x31fd2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952552));
label_31fd30:
    // 0x31fd30: 0xc123944  jal         func_48E510
label_31fd34:
    if (ctx->pc == 0x31FD34u) {
        ctx->pc = 0x31FD34u;
            // 0x31fd34: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x31FD38u;
        goto label_31fd38;
    }
    ctx->pc = 0x31FD30u;
    SET_GPR_U32(ctx, 31, 0x31FD38u);
    ctx->pc = 0x31FD34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31FD30u;
            // 0x31fd34: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31FD38u; }
        if (ctx->pc != 0x31FD38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31FD38u; }
        if (ctx->pc != 0x31FD38u) { return; }
    }
    ctx->pc = 0x31FD38u;
label_31fd38:
    // 0x31fd38: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x31fd38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_31fd3c:
    // 0x31fd3c: 0x27a50260  addiu       $a1, $sp, 0x260
    ctx->pc = 0x31fd3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
label_31fd40:
    // 0x31fd40: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x31fd40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
label_31fd44:
    // 0x31fd44: 0xc123944  jal         func_48E510
label_31fd48:
    if (ctx->pc == 0x31FD48u) {
        ctx->pc = 0x31FD48u;
            // 0x31fd48: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x31FD4Cu;
        goto label_31fd4c;
    }
    ctx->pc = 0x31FD44u;
    SET_GPR_U32(ctx, 31, 0x31FD4Cu);
    ctx->pc = 0x31FD48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31FD44u;
            // 0x31fd48: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31FD4Cu; }
        if (ctx->pc != 0x31FD4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31FD4Cu; }
        if (ctx->pc != 0x31FD4Cu) { return; }
    }
    ctx->pc = 0x31FD4Cu;
label_31fd4c:
    // 0x31fd4c: 0xafa20174  sw          $v0, 0x174($sp)
    ctx->pc = 0x31fd4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 372), GPR_U32(ctx, 2));
label_31fd50:
    // 0x31fd50: 0x27a304c0  addiu       $v1, $sp, 0x4C0
    ctx->pc = 0x31fd50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1216));
label_31fd54:
    // 0x31fd54: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_31fd58:
    if (ctx->pc == 0x31FD58u) {
        ctx->pc = 0x31FD58u;
            // 0x31fd58: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->pc = 0x31FD5Cu;
        goto label_31fd5c;
    }
    ctx->pc = 0x31FD54u;
    {
        const bool branch_taken_0x31fd54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x31FD58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31FD54u;
            // 0x31fd58: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fd54) {
            ctx->pc = 0x31FD78u;
            goto label_31fd78;
        }
    }
    ctx->pc = 0x31FD5Cu;
label_31fd5c:
    // 0x31fd5c: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x31fd5cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_31fd60:
    // 0x31fd60: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x31fd60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_31fd64:
    // 0x31fd64: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x31fd64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_31fd68:
    // 0x31fd68: 0x0  nop
    ctx->pc = 0x31fd68u;
    // NOP
label_31fd6c:
    // 0x31fd6c: 0x0  nop
    ctx->pc = 0x31fd6cu;
    // NOP
label_31fd70:
    // 0x31fd70: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_31fd74:
    if (ctx->pc == 0x31FD74u) {
        ctx->pc = 0x31FD78u;
        goto label_31fd78;
    }
    ctx->pc = 0x31FD70u;
    {
        const bool branch_taken_0x31fd70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31fd70) {
            ctx->pc = 0x31FD5Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_31fd5c;
        }
    }
    ctx->pc = 0x31FD78u;
label_31fd78:
    // 0x31fd78: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x31fd78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_31fd7c:
    // 0x31fd7c: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x31fd7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_31fd80:
    // 0x31fd80: 0x24a5c4b8  addiu       $a1, $a1, -0x3B48
    ctx->pc = 0x31fd80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952120));
label_31fd84:
    // 0x31fd84: 0xc123944  jal         func_48E510
label_31fd88:
    if (ctx->pc == 0x31FD88u) {
        ctx->pc = 0x31FD88u;
            // 0x31fd88: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x31FD8Cu;
        goto label_31fd8c;
    }
    ctx->pc = 0x31FD84u;
    SET_GPR_U32(ctx, 31, 0x31FD8Cu);
    ctx->pc = 0x31FD88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31FD84u;
            // 0x31fd88: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31FD8Cu; }
        if (ctx->pc != 0x31FD8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31FD8Cu; }
        if (ctx->pc != 0x31FD8Cu) { return; }
    }
    ctx->pc = 0x31FD8Cu;
label_31fd8c:
    // 0x31fd8c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x31fd8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_31fd90:
    // 0x31fd90: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x31fd90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_31fd94:
    // 0x31fd94: 0xafa204c0  sw          $v0, 0x4C0($sp)
    ctx->pc = 0x31fd94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1216), GPR_U32(ctx, 2));
label_31fd98:
    // 0x31fd98: 0x24a5c4c8  addiu       $a1, $a1, -0x3B38
    ctx->pc = 0x31fd98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952136));
label_31fd9c:
    // 0x31fd9c: 0xc123944  jal         func_48E510
label_31fda0:
    if (ctx->pc == 0x31FDA0u) {
        ctx->pc = 0x31FDA0u;
            // 0x31fda0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x31FDA4u;
        goto label_31fda4;
    }
    ctx->pc = 0x31FD9Cu;
    SET_GPR_U32(ctx, 31, 0x31FDA4u);
    ctx->pc = 0x31FDA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31FD9Cu;
            // 0x31fda0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31FDA4u; }
        if (ctx->pc != 0x31FDA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31FDA4u; }
        if (ctx->pc != 0x31FDA4u) { return; }
    }
    ctx->pc = 0x31FDA4u;
label_31fda4:
    // 0x31fda4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x31fda4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_31fda8:
    // 0x31fda8: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x31fda8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_31fdac:
    // 0x31fdac: 0xafa204c4  sw          $v0, 0x4C4($sp)
    ctx->pc = 0x31fdacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1220), GPR_U32(ctx, 2));
label_31fdb0:
    // 0x31fdb0: 0x24a5c4d8  addiu       $a1, $a1, -0x3B28
    ctx->pc = 0x31fdb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952152));
label_31fdb4:
    // 0x31fdb4: 0xc123944  jal         func_48E510
label_31fdb8:
    if (ctx->pc == 0x31FDB8u) {
        ctx->pc = 0x31FDB8u;
            // 0x31fdb8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x31FDBCu;
        goto label_31fdbc;
    }
    ctx->pc = 0x31FDB4u;
    SET_GPR_U32(ctx, 31, 0x31FDBCu);
    ctx->pc = 0x31FDB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31FDB4u;
            // 0x31fdb8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31FDBCu; }
        if (ctx->pc != 0x31FDBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31FDBCu; }
        if (ctx->pc != 0x31FDBCu) { return; }
    }
    ctx->pc = 0x31FDBCu;
label_31fdbc:
    // 0x31fdbc: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x31fdbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_31fdc0:
    // 0x31fdc0: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x31fdc0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_31fdc4:
    // 0x31fdc4: 0xafa204c8  sw          $v0, 0x4C8($sp)
    ctx->pc = 0x31fdc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1224), GPR_U32(ctx, 2));
label_31fdc8:
    // 0x31fdc8: 0x24a5c428  addiu       $a1, $a1, -0x3BD8
    ctx->pc = 0x31fdc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951976));
label_31fdcc:
    // 0x31fdcc: 0xc123944  jal         func_48E510
label_31fdd0:
    if (ctx->pc == 0x31FDD0u) {
        ctx->pc = 0x31FDD0u;
            // 0x31fdd0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x31FDD4u;
        goto label_31fdd4;
    }
    ctx->pc = 0x31FDCCu;
    SET_GPR_U32(ctx, 31, 0x31FDD4u);
    ctx->pc = 0x31FDD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31FDCCu;
            // 0x31fdd0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31FDD4u; }
        if (ctx->pc != 0x31FDD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31FDD4u; }
        if (ctx->pc != 0x31FDD4u) { return; }
    }
    ctx->pc = 0x31FDD4u;
label_31fdd4:
    // 0x31fdd4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x31fdd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_31fdd8:
    // 0x31fdd8: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x31fdd8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_31fddc:
    // 0x31fddc: 0xafa20170  sw          $v0, 0x170($sp)
    ctx->pc = 0x31fddcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 2));
label_31fde0:
    // 0x31fde0: 0x24a5c580  addiu       $a1, $a1, -0x3A80
    ctx->pc = 0x31fde0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952320));
label_31fde4:
    // 0x31fde4: 0xc123944  jal         func_48E510
label_31fde8:
    if (ctx->pc == 0x31FDE8u) {
        ctx->pc = 0x31FDE8u;
            // 0x31fde8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x31FDECu;
        goto label_31fdec;
    }
    ctx->pc = 0x31FDE4u;
    SET_GPR_U32(ctx, 31, 0x31FDECu);
    ctx->pc = 0x31FDE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31FDE4u;
            // 0x31fde8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31FDECu; }
        if (ctx->pc != 0x31FDECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31FDECu; }
        if (ctx->pc != 0x31FDECu) { return; }
    }
    ctx->pc = 0x31FDECu;
label_31fdec:
    // 0x31fdec: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x31fdecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_31fdf0:
    // 0x31fdf0: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x31fdf0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_31fdf4:
    // 0x31fdf4: 0xafa2016c  sw          $v0, 0x16C($sp)
    ctx->pc = 0x31fdf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 364), GPR_U32(ctx, 2));
label_31fdf8:
    // 0x31fdf8: 0x24a5c578  addiu       $a1, $a1, -0x3A88
    ctx->pc = 0x31fdf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952312));
label_31fdfc:
    // 0x31fdfc: 0xc123944  jal         func_48E510
label_31fe00:
    if (ctx->pc == 0x31FE00u) {
        ctx->pc = 0x31FE00u;
            // 0x31fe00: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x31FE04u;
        goto label_31fe04;
    }
    ctx->pc = 0x31FDFCu;
    SET_GPR_U32(ctx, 31, 0x31FE04u);
    ctx->pc = 0x31FE00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31FDFCu;
            // 0x31fe00: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31FE04u; }
        if (ctx->pc != 0x31FE04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31FE04u; }
        if (ctx->pc != 0x31FE04u) { return; }
    }
    ctx->pc = 0x31FE04u;
label_31fe04:
    // 0x31fe04: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x31fe04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_31fe08:
    // 0x31fe08: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x31fe08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_31fe0c:
    // 0x31fe0c: 0xafa20168  sw          $v0, 0x168($sp)
    ctx->pc = 0x31fe0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 360), GPR_U32(ctx, 2));
label_31fe10:
    // 0x31fe10: 0x24a5c570  addiu       $a1, $a1, -0x3A90
    ctx->pc = 0x31fe10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952304));
label_31fe14:
    // 0x31fe14: 0xc123944  jal         func_48E510
label_31fe18:
    if (ctx->pc == 0x31FE18u) {
        ctx->pc = 0x31FE18u;
            // 0x31fe18: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x31FE1Cu;
        goto label_31fe1c;
    }
    ctx->pc = 0x31FE14u;
    SET_GPR_U32(ctx, 31, 0x31FE1Cu);
    ctx->pc = 0x31FE18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31FE14u;
            // 0x31fe18: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31FE1Cu; }
        if (ctx->pc != 0x31FE1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31FE1Cu; }
        if (ctx->pc != 0x31FE1Cu) { return; }
    }
    ctx->pc = 0x31FE1Cu;
label_31fe1c:
    // 0x31fe1c: 0xafa20164  sw          $v0, 0x164($sp)
    ctx->pc = 0x31fe1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 356), GPR_U32(ctx, 2));
label_31fe20:
    // 0x31fe20: 0x27a304b0  addiu       $v1, $sp, 0x4B0
    ctx->pc = 0x31fe20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1200));
label_31fe24:
    // 0x31fe24: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_31fe28:
    if (ctx->pc == 0x31FE28u) {
        ctx->pc = 0x31FE28u;
            // 0x31fe28: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->pc = 0x31FE2Cu;
        goto label_31fe2c;
    }
    ctx->pc = 0x31FE24u;
    {
        const bool branch_taken_0x31fe24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x31FE28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31FE24u;
            // 0x31fe28: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fe24) {
            ctx->pc = 0x31FE48u;
            goto label_31fe48;
        }
    }
    ctx->pc = 0x31FE2Cu;
label_31fe2c:
    // 0x31fe2c: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x31fe2cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_31fe30:
    // 0x31fe30: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x31fe30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_31fe34:
    // 0x31fe34: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x31fe34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_31fe38:
    // 0x31fe38: 0x0  nop
    ctx->pc = 0x31fe38u;
    // NOP
label_31fe3c:
    // 0x31fe3c: 0x0  nop
    ctx->pc = 0x31fe3cu;
    // NOP
label_31fe40:
    // 0x31fe40: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_31fe44:
    if (ctx->pc == 0x31FE44u) {
        ctx->pc = 0x31FE48u;
        goto label_31fe48;
    }
    ctx->pc = 0x31FE40u;
    {
        const bool branch_taken_0x31fe40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31fe40) {
            ctx->pc = 0x31FE2Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_31fe2c;
        }
    }
    ctx->pc = 0x31FE48u;
label_31fe48:
    // 0x31fe48: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x31fe48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_31fe4c:
    // 0x31fe4c: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x31fe4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_31fe50:
    // 0x31fe50: 0x24a5c448  addiu       $a1, $a1, -0x3BB8
    ctx->pc = 0x31fe50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952008));
label_31fe54:
    // 0x31fe54: 0xc123944  jal         func_48E510
label_31fe58:
    if (ctx->pc == 0x31FE58u) {
        ctx->pc = 0x31FE58u;
            // 0x31fe58: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x31FE5Cu;
        goto label_31fe5c;
    }
    ctx->pc = 0x31FE54u;
    SET_GPR_U32(ctx, 31, 0x31FE5Cu);
    ctx->pc = 0x31FE58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31FE54u;
            // 0x31fe58: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31FE5Cu; }
        if (ctx->pc != 0x31FE5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31FE5Cu; }
        if (ctx->pc != 0x31FE5Cu) { return; }
    }
    ctx->pc = 0x31FE5Cu;
label_31fe5c:
    // 0x31fe5c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x31fe5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_31fe60:
    // 0x31fe60: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x31fe60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_31fe64:
    // 0x31fe64: 0xafa204b0  sw          $v0, 0x4B0($sp)
    ctx->pc = 0x31fe64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1200), GPR_U32(ctx, 2));
label_31fe68:
    // 0x31fe68: 0x24a5c458  addiu       $a1, $a1, -0x3BA8
    ctx->pc = 0x31fe68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952024));
label_31fe6c:
    // 0x31fe6c: 0xc123944  jal         func_48E510
label_31fe70:
    if (ctx->pc == 0x31FE70u) {
        ctx->pc = 0x31FE70u;
            // 0x31fe70: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x31FE74u;
        goto label_31fe74;
    }
    ctx->pc = 0x31FE6Cu;
    SET_GPR_U32(ctx, 31, 0x31FE74u);
    ctx->pc = 0x31FE70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31FE6Cu;
            // 0x31fe70: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31FE74u; }
        if (ctx->pc != 0x31FE74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31FE74u; }
        if (ctx->pc != 0x31FE74u) { return; }
    }
    ctx->pc = 0x31FE74u;
label_31fe74:
    // 0x31fe74: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x31fe74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_31fe78:
    // 0x31fe78: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x31fe78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_31fe7c:
    // 0x31fe7c: 0xafa204b4  sw          $v0, 0x4B4($sp)
    ctx->pc = 0x31fe7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1204), GPR_U32(ctx, 2));
label_31fe80:
    // 0x31fe80: 0x24a5c468  addiu       $a1, $a1, -0x3B98
    ctx->pc = 0x31fe80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952040));
label_31fe84:
    // 0x31fe84: 0xc123944  jal         func_48E510
label_31fe88:
    if (ctx->pc == 0x31FE88u) {
        ctx->pc = 0x31FE88u;
            // 0x31fe88: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x31FE8Cu;
        goto label_31fe8c;
    }
    ctx->pc = 0x31FE84u;
    SET_GPR_U32(ctx, 31, 0x31FE8Cu);
    ctx->pc = 0x31FE88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31FE84u;
            // 0x31fe88: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31FE8Cu; }
        if (ctx->pc != 0x31FE8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31FE8Cu; }
        if (ctx->pc != 0x31FE8Cu) { return; }
    }
    ctx->pc = 0x31FE8Cu;
label_31fe8c:
    // 0x31fe8c: 0xafa204b8  sw          $v0, 0x4B8($sp)
    ctx->pc = 0x31fe8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1208), GPR_U32(ctx, 2));
label_31fe90:
    // 0x31fe90: 0x27a30250  addiu       $v1, $sp, 0x250
    ctx->pc = 0x31fe90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
label_31fe94:
    // 0x31fe94: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_31fe98:
    if (ctx->pc == 0x31FE98u) {
        ctx->pc = 0x31FE98u;
            // 0x31fe98: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x31FE9Cu;
        goto label_31fe9c;
    }
    ctx->pc = 0x31FE94u;
    {
        const bool branch_taken_0x31fe94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x31FE98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31FE94u;
            // 0x31fe98: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fe94) {
            ctx->pc = 0x31FEB8u;
            goto label_31feb8;
        }
    }
    ctx->pc = 0x31FE9Cu;
label_31fe9c:
    // 0x31fe9c: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x31fe9cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_31fea0:
    // 0x31fea0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x31fea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_31fea4:
    // 0x31fea4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x31fea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_31fea8:
    // 0x31fea8: 0x0  nop
    ctx->pc = 0x31fea8u;
    // NOP
label_31feac:
    // 0x31feac: 0x0  nop
    ctx->pc = 0x31feacu;
    // NOP
label_31feb0:
    // 0x31feb0: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_31feb4:
    if (ctx->pc == 0x31FEB4u) {
        ctx->pc = 0x31FEB8u;
        goto label_31feb8;
    }
    ctx->pc = 0x31FEB0u;
    {
        const bool branch_taken_0x31feb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31feb0) {
            ctx->pc = 0x31FE9Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_31fe9c;
        }
    }
    ctx->pc = 0x31FEB8u;
label_31feb8:
    // 0x31feb8: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x31feb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_31febc:
    // 0x31febc: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x31febcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_31fec0:
    // 0x31fec0: 0x24a5c680  addiu       $a1, $a1, -0x3980
    ctx->pc = 0x31fec0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952576));
label_31fec4:
    // 0x31fec4: 0xc123944  jal         func_48E510
label_31fec8:
    if (ctx->pc == 0x31FEC8u) {
        ctx->pc = 0x31FEC8u;
            // 0x31fec8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x31FECCu;
        goto label_31fecc;
    }
    ctx->pc = 0x31FEC4u;
    SET_GPR_U32(ctx, 31, 0x31FECCu);
    ctx->pc = 0x31FEC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31FEC4u;
            // 0x31fec8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31FECCu; }
        if (ctx->pc != 0x31FECCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31FECCu; }
        if (ctx->pc != 0x31FECCu) { return; }
    }
    ctx->pc = 0x31FECCu;
label_31fecc:
    // 0x31fecc: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x31feccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_31fed0:
    // 0x31fed0: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x31fed0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_31fed4:
    // 0x31fed4: 0xafa20250  sw          $v0, 0x250($sp)
    ctx->pc = 0x31fed4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 592), GPR_U32(ctx, 2));
label_31fed8:
    // 0x31fed8: 0x24a5c6a0  addiu       $a1, $a1, -0x3960
    ctx->pc = 0x31fed8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952608));
label_31fedc:
    // 0x31fedc: 0xc123944  jal         func_48E510
label_31fee0:
    if (ctx->pc == 0x31FEE0u) {
        ctx->pc = 0x31FEE0u;
            // 0x31fee0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x31FEE4u;
        goto label_31fee4;
    }
    ctx->pc = 0x31FEDCu;
    SET_GPR_U32(ctx, 31, 0x31FEE4u);
    ctx->pc = 0x31FEE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31FEDCu;
            // 0x31fee0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31FEE4u; }
        if (ctx->pc != 0x31FEE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31FEE4u; }
        if (ctx->pc != 0x31FEE4u) { return; }
    }
    ctx->pc = 0x31FEE4u;
label_31fee4:
    // 0x31fee4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x31fee4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_31fee8:
    // 0x31fee8: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x31fee8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_31feec:
    // 0x31feec: 0xafa20254  sw          $v0, 0x254($sp)
    ctx->pc = 0x31feecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 596), GPR_U32(ctx, 2));
label_31fef0:
    // 0x31fef0: 0x24a5c6c0  addiu       $a1, $a1, -0x3940
    ctx->pc = 0x31fef0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952640));
label_31fef4:
    // 0x31fef4: 0xc123944  jal         func_48E510
label_31fef8:
    if (ctx->pc == 0x31FEF8u) {
        ctx->pc = 0x31FEF8u;
            // 0x31fef8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x31FEFCu;
        goto label_31fefc;
    }
    ctx->pc = 0x31FEF4u;
    SET_GPR_U32(ctx, 31, 0x31FEFCu);
    ctx->pc = 0x31FEF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31FEF4u;
            // 0x31fef8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31FEFCu; }
        if (ctx->pc != 0x31FEFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31FEFCu; }
        if (ctx->pc != 0x31FEFCu) { return; }
    }
    ctx->pc = 0x31FEFCu;
label_31fefc:
    // 0x31fefc: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x31fefcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_31ff00:
    // 0x31ff00: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x31ff00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_31ff04:
    // 0x31ff04: 0xafa20258  sw          $v0, 0x258($sp)
    ctx->pc = 0x31ff04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 600), GPR_U32(ctx, 2));
label_31ff08:
    // 0x31ff08: 0x24a5c6e0  addiu       $a1, $a1, -0x3920
    ctx->pc = 0x31ff08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952672));
label_31ff0c:
    // 0x31ff0c: 0xc123944  jal         func_48E510
label_31ff10:
    if (ctx->pc == 0x31FF10u) {
        ctx->pc = 0x31FF10u;
            // 0x31ff10: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x31FF14u;
        goto label_31ff14;
    }
    ctx->pc = 0x31FF0Cu;
    SET_GPR_U32(ctx, 31, 0x31FF14u);
    ctx->pc = 0x31FF10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31FF0Cu;
            // 0x31ff10: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31FF14u; }
        if (ctx->pc != 0x31FF14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31FF14u; }
        if (ctx->pc != 0x31FF14u) { return; }
    }
    ctx->pc = 0x31FF14u;
label_31ff14:
    // 0x31ff14: 0xafa2025c  sw          $v0, 0x25C($sp)
    ctx->pc = 0x31ff14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 604), GPR_U32(ctx, 2));
label_31ff18:
    // 0x31ff18: 0x27a30230  addiu       $v1, $sp, 0x230
    ctx->pc = 0x31ff18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
label_31ff1c:
    // 0x31ff1c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_31ff20:
    if (ctx->pc == 0x31FF20u) {
        ctx->pc = 0x31FF20u;
            // 0x31ff20: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->pc = 0x31FF24u;
        goto label_31ff24;
    }
    ctx->pc = 0x31FF1Cu;
    {
        const bool branch_taken_0x31ff1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x31FF20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31FF1Cu;
            // 0x31ff20: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ff1c) {
            ctx->pc = 0x31FF40u;
            goto label_31ff40;
        }
    }
    ctx->pc = 0x31FF24u;
label_31ff24:
    // 0x31ff24: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x31ff24u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_31ff28:
    // 0x31ff28: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x31ff28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_31ff2c:
    // 0x31ff2c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x31ff2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_31ff30:
    // 0x31ff30: 0x0  nop
    ctx->pc = 0x31ff30u;
    // NOP
label_31ff34:
    // 0x31ff34: 0x0  nop
    ctx->pc = 0x31ff34u;
    // NOP
label_31ff38:
    // 0x31ff38: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_31ff3c:
    if (ctx->pc == 0x31FF3Cu) {
        ctx->pc = 0x31FF40u;
        goto label_31ff40;
    }
    ctx->pc = 0x31FF38u;
    {
        const bool branch_taken_0x31ff38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31ff38) {
            ctx->pc = 0x31FF24u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_31ff24;
        }
    }
    ctx->pc = 0x31FF40u;
label_31ff40:
    // 0x31ff40: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x31ff40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_31ff44:
    // 0x31ff44: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x31ff44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_31ff48:
    // 0x31ff48: 0x24a5c288  addiu       $a1, $a1, -0x3D78
    ctx->pc = 0x31ff48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951560));
label_31ff4c:
    // 0x31ff4c: 0xc123944  jal         func_48E510
label_31ff50:
    if (ctx->pc == 0x31FF50u) {
        ctx->pc = 0x31FF50u;
            // 0x31ff50: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x31FF54u;
        goto label_31ff54;
    }
    ctx->pc = 0x31FF4Cu;
    SET_GPR_U32(ctx, 31, 0x31FF54u);
    ctx->pc = 0x31FF50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31FF4Cu;
            // 0x31ff50: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31FF54u; }
        if (ctx->pc != 0x31FF54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31FF54u; }
        if (ctx->pc != 0x31FF54u) { return; }
    }
    ctx->pc = 0x31FF54u;
label_31ff54:
    // 0x31ff54: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x31ff54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_31ff58:
    // 0x31ff58: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x31ff58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_31ff5c:
    // 0x31ff5c: 0xafa20230  sw          $v0, 0x230($sp)
    ctx->pc = 0x31ff5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 560), GPR_U32(ctx, 2));
label_31ff60:
    // 0x31ff60: 0x24a5c298  addiu       $a1, $a1, -0x3D68
    ctx->pc = 0x31ff60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951576));
label_31ff64:
    // 0x31ff64: 0xc123944  jal         func_48E510
label_31ff68:
    if (ctx->pc == 0x31FF68u) {
        ctx->pc = 0x31FF68u;
            // 0x31ff68: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x31FF6Cu;
        goto label_31ff6c;
    }
    ctx->pc = 0x31FF64u;
    SET_GPR_U32(ctx, 31, 0x31FF6Cu);
    ctx->pc = 0x31FF68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31FF64u;
            // 0x31ff68: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31FF6Cu; }
        if (ctx->pc != 0x31FF6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31FF6Cu; }
        if (ctx->pc != 0x31FF6Cu) { return; }
    }
    ctx->pc = 0x31FF6Cu;
label_31ff6c:
    // 0x31ff6c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x31ff6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_31ff70:
    // 0x31ff70: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x31ff70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_31ff74:
    // 0x31ff74: 0xafa20234  sw          $v0, 0x234($sp)
    ctx->pc = 0x31ff74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 564), GPR_U32(ctx, 2));
label_31ff78:
    // 0x31ff78: 0x24a5c2a8  addiu       $a1, $a1, -0x3D58
    ctx->pc = 0x31ff78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951592));
label_31ff7c:
    // 0x31ff7c: 0xc123944  jal         func_48E510
label_31ff80:
    if (ctx->pc == 0x31FF80u) {
        ctx->pc = 0x31FF80u;
            // 0x31ff80: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x31FF84u;
        goto label_31ff84;
    }
    ctx->pc = 0x31FF7Cu;
    SET_GPR_U32(ctx, 31, 0x31FF84u);
    ctx->pc = 0x31FF80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31FF7Cu;
            // 0x31ff80: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31FF84u; }
        if (ctx->pc != 0x31FF84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31FF84u; }
        if (ctx->pc != 0x31FF84u) { return; }
    }
    ctx->pc = 0x31FF84u;
label_31ff84:
    // 0x31ff84: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x31ff84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_31ff88:
    // 0x31ff88: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x31ff88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_31ff8c:
    // 0x31ff8c: 0xafa20238  sw          $v0, 0x238($sp)
    ctx->pc = 0x31ff8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 568), GPR_U32(ctx, 2));
label_31ff90:
    // 0x31ff90: 0x24a5c2b8  addiu       $a1, $a1, -0x3D48
    ctx->pc = 0x31ff90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951608));
label_31ff94:
    // 0x31ff94: 0xc123944  jal         func_48E510
label_31ff98:
    if (ctx->pc == 0x31FF98u) {
        ctx->pc = 0x31FF98u;
            // 0x31ff98: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x31FF9Cu;
        goto label_31ff9c;
    }
    ctx->pc = 0x31FF94u;
    SET_GPR_U32(ctx, 31, 0x31FF9Cu);
    ctx->pc = 0x31FF98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31FF94u;
            // 0x31ff98: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31FF9Cu; }
        if (ctx->pc != 0x31FF9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31FF9Cu; }
        if (ctx->pc != 0x31FF9Cu) { return; }
    }
    ctx->pc = 0x31FF9Cu;
label_31ff9c:
    // 0x31ff9c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x31ff9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_31ffa0:
    // 0x31ffa0: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x31ffa0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_31ffa4:
    // 0x31ffa4: 0xafa2023c  sw          $v0, 0x23C($sp)
    ctx->pc = 0x31ffa4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 572), GPR_U32(ctx, 2));
label_31ffa8:
    // 0x31ffa8: 0x24a5c2c8  addiu       $a1, $a1, -0x3D38
    ctx->pc = 0x31ffa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951624));
label_31ffac:
    // 0x31ffac: 0xc123944  jal         func_48E510
label_31ffb0:
    if (ctx->pc == 0x31FFB0u) {
        ctx->pc = 0x31FFB0u;
            // 0x31ffb0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x31FFB4u;
        goto label_31ffb4;
    }
    ctx->pc = 0x31FFACu;
    SET_GPR_U32(ctx, 31, 0x31FFB4u);
    ctx->pc = 0x31FFB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31FFACu;
            // 0x31ffb0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31FFB4u; }
        if (ctx->pc != 0x31FFB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31FFB4u; }
        if (ctx->pc != 0x31FFB4u) { return; }
    }
    ctx->pc = 0x31FFB4u;
label_31ffb4:
    // 0x31ffb4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x31ffb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_31ffb8:
    // 0x31ffb8: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x31ffb8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_31ffbc:
    // 0x31ffbc: 0xafa20240  sw          $v0, 0x240($sp)
    ctx->pc = 0x31ffbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 576), GPR_U32(ctx, 2));
label_31ffc0:
    // 0x31ffc0: 0x24a5c2d8  addiu       $a1, $a1, -0x3D28
    ctx->pc = 0x31ffc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951640));
label_31ffc4:
    // 0x31ffc4: 0xc123944  jal         func_48E510
label_31ffc8:
    if (ctx->pc == 0x31FFC8u) {
        ctx->pc = 0x31FFC8u;
            // 0x31ffc8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x31FFCCu;
        goto label_31ffcc;
    }
    ctx->pc = 0x31FFC4u;
    SET_GPR_U32(ctx, 31, 0x31FFCCu);
    ctx->pc = 0x31FFC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31FFC4u;
            // 0x31ffc8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31FFCCu; }
        if (ctx->pc != 0x31FFCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31FFCCu; }
        if (ctx->pc != 0x31FFCCu) { return; }
    }
    ctx->pc = 0x31FFCCu;
label_31ffcc:
    // 0x31ffcc: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x31ffccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_31ffd0:
    // 0x31ffd0: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x31ffd0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_31ffd4:
    // 0x31ffd4: 0xafa20244  sw          $v0, 0x244($sp)
    ctx->pc = 0x31ffd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 580), GPR_U32(ctx, 2));
label_31ffd8:
    // 0x31ffd8: 0x24a5c2e8  addiu       $a1, $a1, -0x3D18
    ctx->pc = 0x31ffd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951656));
label_31ffdc:
    // 0x31ffdc: 0xc123944  jal         func_48E510
label_31ffe0:
    if (ctx->pc == 0x31FFE0u) {
        ctx->pc = 0x31FFE0u;
            // 0x31ffe0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x31FFE4u;
        goto label_31ffe4;
    }
    ctx->pc = 0x31FFDCu;
    SET_GPR_U32(ctx, 31, 0x31FFE4u);
    ctx->pc = 0x31FFE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31FFDCu;
            // 0x31ffe0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31FFE4u; }
        if (ctx->pc != 0x31FFE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31FFE4u; }
        if (ctx->pc != 0x31FFE4u) { return; }
    }
    ctx->pc = 0x31FFE4u;
label_31ffe4:
    // 0x31ffe4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x31ffe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_31ffe8:
    // 0x31ffe8: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x31ffe8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_31ffec:
    // 0x31ffec: 0xafa20248  sw          $v0, 0x248($sp)
    ctx->pc = 0x31ffecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 584), GPR_U32(ctx, 2));
label_31fff0:
    // 0x31fff0: 0x24a5c2f8  addiu       $a1, $a1, -0x3D08
    ctx->pc = 0x31fff0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951672));
label_31fff4:
    // 0x31fff4: 0xc123944  jal         func_48E510
label_31fff8:
    if (ctx->pc == 0x31FFF8u) {
        ctx->pc = 0x31FFF8u;
            // 0x31fff8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x31FFFCu;
        goto label_31fffc;
    }
    ctx->pc = 0x31FFF4u;
    SET_GPR_U32(ctx, 31, 0x31FFFCu);
    ctx->pc = 0x31FFF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31FFF4u;
            // 0x31fff8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31FFFCu; }
        if (ctx->pc != 0x31FFFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31FFFCu; }
        if (ctx->pc != 0x31FFFCu) { return; }
    }
    ctx->pc = 0x31FFFCu;
label_31fffc:
    // 0x31fffc: 0xafa2024c  sw          $v0, 0x24C($sp)
    ctx->pc = 0x31fffcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 588), GPR_U32(ctx, 2));
label_320000:
    // 0x320000: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x320000u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_320004:
    // 0x320004: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x320004u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_320008:
    // 0x320008: 0xc440f9f0  lwc1        $f0, -0x610($v0)
    ctx->pc = 0x320008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_32000c:
    // 0x32000c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x32000cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_320010:
    // 0x320010: 0xc442f9f4  lwc1        $f2, -0x60C($v0)
    ctx->pc = 0x320010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_320014:
    // 0x320014: 0xe7a00210  swc1        $f0, 0x210($sp)
    ctx->pc = 0x320014u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 528), bits); }
label_320018:
    // 0x320018: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x320018u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_32001c:
    // 0x32001c: 0xc441f9f8  lwc1        $f1, -0x608($v0)
    ctx->pc = 0x32001cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_320020:
    // 0x320020: 0xe7a20214  swc1        $f2, 0x214($sp)
    ctx->pc = 0x320020u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 532), bits); }
label_320024:
    // 0x320024: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x320024u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_320028:
    // 0x320028: 0xc440f9fc  lwc1        $f0, -0x604($v0)
    ctx->pc = 0x320028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965756)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_32002c:
    // 0x32002c: 0xe7a10218  swc1        $f1, 0x218($sp)
    ctx->pc = 0x32002cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 536), bits); }
label_320030:
    // 0x320030: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x320030u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_320034:
    // 0x320034: 0xc441fa00  lwc1        $f1, -0x600($v0)
    ctx->pc = 0x320034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_320038:
    // 0x320038: 0xe7a0021c  swc1        $f0, 0x21C($sp)
    ctx->pc = 0x320038u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 540), bits); }
label_32003c:
    // 0x32003c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x32003cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_320040:
    // 0x320040: 0xc440fa04  lwc1        $f0, -0x5FC($v0)
    ctx->pc = 0x320040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965764)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_320044:
    // 0x320044: 0xe7a10220  swc1        $f1, 0x220($sp)
    ctx->pc = 0x320044u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 544), bits); }
label_320048:
    // 0x320048: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x320048u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_32004c:
    // 0x32004c: 0xc441fa08  lwc1        $f1, -0x5F8($v0)
    ctx->pc = 0x32004cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_320050:
    // 0x320050: 0xe7a00224  swc1        $f0, 0x224($sp)
    ctx->pc = 0x320050u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 548), bits); }
label_320054:
    // 0x320054: 0xc460fa0c  lwc1        $f0, -0x5F4($v1)
    ctx->pc = 0x320054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294965772)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_320058:
    // 0x320058: 0x64020001  daddiu      $v0, $zero, 0x1
    ctx->pc = 0x320058u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_32005c:
    // 0x32005c: 0xa3a20150  sb          $v0, 0x150($sp)
    ctx->pc = 0x32005cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 336), (uint8_t)GPR_U32(ctx, 2));
label_320060:
    // 0x320060: 0xe7a10228  swc1        $f1, 0x228($sp)
    ctx->pc = 0x320060u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 552), bits); }
label_320064:
    // 0x320064: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x320064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_320068:
    // 0x320068: 0x12620009  beq         $s3, $v0, . + 4 + (0x9 << 2)
label_32006c:
    if (ctx->pc == 0x32006Cu) {
        ctx->pc = 0x32006Cu;
            // 0x32006c: 0xe7a0022c  swc1        $f0, 0x22C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 556), bits); }
        ctx->pc = 0x320070u;
        goto label_320070;
    }
    ctx->pc = 0x320068u;
    {
        const bool branch_taken_0x320068 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x32006Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x320068u;
            // 0x32006c: 0xe7a0022c  swc1        $f0, 0x22C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 556), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x320068) {
            ctx->pc = 0x320090u;
            goto label_320090;
        }
    }
    ctx->pc = 0x320070u;
label_320070:
    // 0x320070: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x320070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_320074:
    // 0x320074: 0x52620007  beql        $s3, $v0, . + 4 + (0x7 << 2)
label_320078:
    if (ctx->pc == 0x320078u) {
        ctx->pc = 0x320078u;
            // 0x320078: 0xa3a00150  sb          $zero, 0x150($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 336), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x32007Cu;
        goto label_32007c;
    }
    ctx->pc = 0x320074u;
    {
        const bool branch_taken_0x320074 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x320074) {
            ctx->pc = 0x320078u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x320074u;
            // 0x320078: 0xa3a00150  sb          $zero, 0x150($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 336), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x320094u;
            goto label_320094;
        }
    }
    ctx->pc = 0x32007Cu;
label_32007c:
    // 0x32007c: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x32007cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_320080:
    // 0x320080: 0x12620003  beq         $s3, $v0, . + 4 + (0x3 << 2)
label_320084:
    if (ctx->pc == 0x320084u) {
        ctx->pc = 0x320088u;
        goto label_320088;
    }
    ctx->pc = 0x320080u;
    {
        const bool branch_taken_0x320080 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x320080) {
            ctx->pc = 0x320090u;
            goto label_320090;
        }
    }
    ctx->pc = 0x320088u;
label_320088:
    // 0x320088: 0x10000003  b           . + 4 + (0x3 << 2)
label_32008c:
    if (ctx->pc == 0x32008Cu) {
        ctx->pc = 0x32008Cu;
            // 0x32008c: 0x2665ffff  addiu       $a1, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->pc = 0x320090u;
        goto label_320090;
    }
    ctx->pc = 0x320088u;
    {
        const bool branch_taken_0x320088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32008Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x320088u;
            // 0x32008c: 0x2665ffff  addiu       $a1, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320088) {
            ctx->pc = 0x320098u;
            goto label_320098;
        }
    }
    ctx->pc = 0x320090u;
label_320090:
    // 0x320090: 0xa3a00150  sb          $zero, 0x150($sp)
    ctx->pc = 0x320090u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 336), (uint8_t)GPR_U32(ctx, 0));
label_320094:
    // 0x320094: 0x2665ffff  addiu       $a1, $s3, -0x1
    ctx->pc = 0x320094u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_320098:
    // 0x320098: 0x26840030  addiu       $a0, $s4, 0x30
    ctx->pc = 0x320098u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
label_32009c:
    // 0x32009c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x32009cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3200a0:
    // 0x3200a0: 0xc0b90e0  jal         func_2E4380
label_3200a4:
    if (ctx->pc == 0x3200A4u) {
        ctx->pc = 0x3200A4u;
            // 0x3200a4: 0xafa00140  sw          $zero, 0x140($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 0));
        ctx->pc = 0x3200A8u;
        goto label_3200a8;
    }
    ctx->pc = 0x3200A0u;
    SET_GPR_U32(ctx, 31, 0x3200A8u);
    ctx->pc = 0x3200A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3200A0u;
            // 0x3200a4: 0xafa00140  sw          $zero, 0x140($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4380u;
    if (runtime->hasFunction(0x2E4380u)) {
        auto targetFn = runtime->lookupFunction(0x2E4380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3200A8u; }
        if (ctx->pc != 0x3200A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4380_0x2e4380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3200A8u; }
        if (ctx->pc != 0x3200A8u) { return; }
    }
    ctx->pc = 0x3200A8u;
label_3200a8:
    // 0x3200a8: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_3200ac:
    if (ctx->pc == 0x3200ACu) {
        ctx->pc = 0x3200ACu;
            // 0x3200ac: 0x2662ffff  addiu       $v0, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->pc = 0x3200B0u;
        goto label_3200b0;
    }
    ctx->pc = 0x3200A8u;
    {
        const bool branch_taken_0x3200a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3200a8) {
            ctx->pc = 0x3200ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3200A8u;
            // 0x3200ac: 0x2662ffff  addiu       $v0, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3200C4u;
            goto label_3200c4;
        }
    }
    ctx->pc = 0x3200B0u;
label_3200b0:
    // 0x3200b0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3200b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3200b4:
    // 0x3200b4: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x3200b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_3200b8:
    // 0x3200b8: 0x3442000f  ori         $v0, $v0, 0xF
    ctx->pc = 0x3200b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)15);
label_3200bc:
    // 0x3200bc: 0xafa20140  sw          $v0, 0x140($sp)
    ctx->pc = 0x3200bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 2));
label_3200c0:
    // 0x3200c0: 0x2662ffff  addiu       $v0, $s3, -0x1
    ctx->pc = 0x3200c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_3200c4:
    // 0x3200c4: 0x2684003c  addiu       $a0, $s4, 0x3C
    ctx->pc = 0x3200c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 60));
label_3200c8:
    // 0x3200c8: 0xc0b90e0  jal         func_2E4380
label_3200cc:
    if (ctx->pc == 0x3200CCu) {
        ctx->pc = 0x3200CCu;
            // 0x3200cc: 0x228c0  sll         $a1, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->pc = 0x3200D0u;
        goto label_3200d0;
    }
    ctx->pc = 0x3200C8u;
    SET_GPR_U32(ctx, 31, 0x3200D0u);
    ctx->pc = 0x3200CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3200C8u;
            // 0x3200cc: 0x228c0  sll         $a1, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4380u;
    if (runtime->hasFunction(0x2E4380u)) {
        auto targetFn = runtime->lookupFunction(0x2E4380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3200D0u; }
        if (ctx->pc != 0x3200D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4380_0x2e4380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3200D0u; }
        if (ctx->pc != 0x3200D0u) { return; }
    }
    ctx->pc = 0x3200D0u;
label_3200d0:
    // 0x3200d0: 0x50400017  beql        $v0, $zero, . + 4 + (0x17 << 2)
label_3200d4:
    if (ctx->pc == 0x3200D4u) {
        ctx->pc = 0x3200D4u;
            // 0x3200d4: 0x2662ffff  addiu       $v0, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->pc = 0x3200D8u;
        goto label_3200d8;
    }
    ctx->pc = 0x3200D0u;
    {
        const bool branch_taken_0x3200d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3200d0) {
            ctx->pc = 0x3200D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3200D0u;
            // 0x3200d4: 0x2662ffff  addiu       $v0, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x320130u;
            goto label_320130;
        }
    }
    ctx->pc = 0x3200D8u;
label_3200d8:
    // 0x3200d8: 0x2662ffff  addiu       $v0, $s3, -0x1
    ctx->pc = 0x3200d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_3200dc:
    // 0x3200dc: 0x2684003c  addiu       $a0, $s4, 0x3C
    ctx->pc = 0x3200dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 60));
label_3200e0:
    // 0x3200e0: 0x2b8c0  sll         $s7, $v0, 3
    ctx->pc = 0x3200e0u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_3200e4:
    // 0x3200e4: 0xc0b90e0  jal         func_2E4380
label_3200e8:
    if (ctx->pc == 0x3200E8u) {
        ctx->pc = 0x3200E8u;
            // 0x3200e8: 0x26e50001  addiu       $a1, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->pc = 0x3200ECu;
        goto label_3200ec;
    }
    ctx->pc = 0x3200E4u;
    SET_GPR_U32(ctx, 31, 0x3200ECu);
    ctx->pc = 0x3200E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3200E4u;
            // 0x3200e8: 0x26e50001  addiu       $a1, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4380u;
    if (runtime->hasFunction(0x2E4380u)) {
        auto targetFn = runtime->lookupFunction(0x2E4380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3200ECu; }
        if (ctx->pc != 0x3200ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4380_0x2e4380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3200ECu; }
        if (ctx->pc != 0x3200ECu) { return; }
    }
    ctx->pc = 0x3200ECu;
label_3200ec:
    // 0x3200ec: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_3200f0:
    if (ctx->pc == 0x3200F0u) {
        ctx->pc = 0x3200F4u;
        goto label_3200f4;
    }
    ctx->pc = 0x3200ECu;
    {
        const bool branch_taken_0x3200ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3200ec) {
            ctx->pc = 0x32012Cu;
            goto label_32012c;
        }
    }
    ctx->pc = 0x3200F4u;
label_3200f4:
    // 0x3200f4: 0x26e50002  addiu       $a1, $s7, 0x2
    ctx->pc = 0x3200f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 2));
label_3200f8:
    // 0x3200f8: 0xc0b90e0  jal         func_2E4380
label_3200fc:
    if (ctx->pc == 0x3200FCu) {
        ctx->pc = 0x3200FCu;
            // 0x3200fc: 0x2684003c  addiu       $a0, $s4, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 60));
        ctx->pc = 0x320100u;
        goto label_320100;
    }
    ctx->pc = 0x3200F8u;
    SET_GPR_U32(ctx, 31, 0x320100u);
    ctx->pc = 0x3200FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3200F8u;
            // 0x3200fc: 0x2684003c  addiu       $a0, $s4, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4380u;
    if (runtime->hasFunction(0x2E4380u)) {
        auto targetFn = runtime->lookupFunction(0x2E4380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320100u; }
        if (ctx->pc != 0x320100u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4380_0x2e4380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320100u; }
        if (ctx->pc != 0x320100u) { return; }
    }
    ctx->pc = 0x320100u;
label_320100:
    // 0x320100: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_320104:
    if (ctx->pc == 0x320104u) {
        ctx->pc = 0x320108u;
        goto label_320108;
    }
    ctx->pc = 0x320100u;
    {
        const bool branch_taken_0x320100 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x320100) {
            ctx->pc = 0x32012Cu;
            goto label_32012c;
        }
    }
    ctx->pc = 0x320108u;
label_320108:
    // 0x320108: 0x26e50003  addiu       $a1, $s7, 0x3
    ctx->pc = 0x320108u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 3));
label_32010c:
    // 0x32010c: 0xc0b90e0  jal         func_2E4380
label_320110:
    if (ctx->pc == 0x320110u) {
        ctx->pc = 0x320110u;
            // 0x320110: 0x2684003c  addiu       $a0, $s4, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 60));
        ctx->pc = 0x320114u;
        goto label_320114;
    }
    ctx->pc = 0x32010Cu;
    SET_GPR_U32(ctx, 31, 0x320114u);
    ctx->pc = 0x320110u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32010Cu;
            // 0x320110: 0x2684003c  addiu       $a0, $s4, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4380u;
    if (runtime->hasFunction(0x2E4380u)) {
        auto targetFn = runtime->lookupFunction(0x2E4380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320114u; }
        if (ctx->pc != 0x320114u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4380_0x2e4380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320114u; }
        if (ctx->pc != 0x320114u) { return; }
    }
    ctx->pc = 0x320114u;
label_320114:
    // 0x320114: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_320118:
    if (ctx->pc == 0x320118u) {
        ctx->pc = 0x32011Cu;
        goto label_32011c;
    }
    ctx->pc = 0x320114u;
    {
        const bool branch_taken_0x320114 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x320114) {
            ctx->pc = 0x32012Cu;
            goto label_32012c;
        }
    }
    ctx->pc = 0x32011Cu;
label_32011c:
    // 0x32011c: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x32011cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_320120:
    // 0x320120: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x320120u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_320124:
    // 0x320124: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x320124u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
label_320128:
    // 0x320128: 0xafa20140  sw          $v0, 0x140($sp)
    ctx->pc = 0x320128u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 2));
label_32012c:
    // 0x32012c: 0x2662ffff  addiu       $v0, $s3, -0x1
    ctx->pc = 0x32012cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_320130:
    // 0x320130: 0x2684003c  addiu       $a0, $s4, 0x3C
    ctx->pc = 0x320130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 60));
label_320134:
    // 0x320134: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x320134u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_320138:
    // 0x320138: 0xafa20100  sw          $v0, 0x100($sp)
    ctx->pc = 0x320138u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
label_32013c:
    // 0x32013c: 0xc0b90e0  jal         func_2E4380
label_320140:
    if (ctx->pc == 0x320140u) {
        ctx->pc = 0x320140u;
            // 0x320140: 0x24450004  addiu       $a1, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x320144u;
        goto label_320144;
    }
    ctx->pc = 0x32013Cu;
    SET_GPR_U32(ctx, 31, 0x320144u);
    ctx->pc = 0x320140u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32013Cu;
            // 0x320140: 0x24450004  addiu       $a1, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4380u;
    if (runtime->hasFunction(0x2E4380u)) {
        auto targetFn = runtime->lookupFunction(0x2E4380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320144u; }
        if (ctx->pc != 0x320144u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4380_0x2e4380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320144u; }
        if (ctx->pc != 0x320144u) { return; }
    }
    ctx->pc = 0x320144u;
label_320144:
    // 0x320144: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_320148:
    if (ctx->pc == 0x320148u) {
        ctx->pc = 0x320148u;
            // 0x320148: 0x8fa20100  lw          $v0, 0x100($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->pc = 0x32014Cu;
        goto label_32014c;
    }
    ctx->pc = 0x320144u;
    {
        const bool branch_taken_0x320144 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x320144) {
            ctx->pc = 0x320148u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x320144u;
            // 0x320148: 0x8fa20100  lw          $v0, 0x100($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x320160u;
            goto label_320160;
        }
    }
    ctx->pc = 0x32014Cu;
label_32014c:
    // 0x32014c: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x32014cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_320150:
    // 0x320150: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x320150u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_320154:
    // 0x320154: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x320154u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
label_320158:
    // 0x320158: 0xafa20140  sw          $v0, 0x140($sp)
    ctx->pc = 0x320158u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 2));
label_32015c:
    // 0x32015c: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x32015cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_320160:
    // 0x320160: 0x2684003c  addiu       $a0, $s4, 0x3C
    ctx->pc = 0x320160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 60));
label_320164:
    // 0x320164: 0xc0b90e0  jal         func_2E4380
label_320168:
    if (ctx->pc == 0x320168u) {
        ctx->pc = 0x320168u;
            // 0x320168: 0x24450005  addiu       $a1, $v0, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
        ctx->pc = 0x32016Cu;
        goto label_32016c;
    }
    ctx->pc = 0x320164u;
    SET_GPR_U32(ctx, 31, 0x32016Cu);
    ctx->pc = 0x320168u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x320164u;
            // 0x320168: 0x24450005  addiu       $a1, $v0, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4380u;
    if (runtime->hasFunction(0x2E4380u)) {
        auto targetFn = runtime->lookupFunction(0x2E4380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32016Cu; }
        if (ctx->pc != 0x32016Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4380_0x2e4380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32016Cu; }
        if (ctx->pc != 0x32016Cu) { return; }
    }
    ctx->pc = 0x32016Cu;
label_32016c:
    // 0x32016c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_320170:
    if (ctx->pc == 0x320170u) {
        ctx->pc = 0x320170u;
            // 0x320170: 0x93a20150  lbu         $v0, 0x150($sp) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 336)));
        ctx->pc = 0x320174u;
        goto label_320174;
    }
    ctx->pc = 0x32016Cu;
    {
        const bool branch_taken_0x32016c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32016c) {
            ctx->pc = 0x320170u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32016Cu;
            // 0x320170: 0x93a20150  lbu         $v0, 0x150($sp) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 336)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x320188u;
            goto label_320188;
        }
    }
    ctx->pc = 0x320174u;
label_320174:
    // 0x320174: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x320174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_320178:
    // 0x320178: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x320178u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_32017c:
    // 0x32017c: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x32017cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
label_320180:
    // 0x320180: 0xafa20140  sw          $v0, 0x140($sp)
    ctx->pc = 0x320180u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 2));
label_320184:
    // 0x320184: 0x93a20150  lbu         $v0, 0x150($sp)
    ctx->pc = 0x320184u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 336)));
label_320188:
    // 0x320188: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_32018c:
    if (ctx->pc == 0x32018Cu) {
        ctx->pc = 0x32018Cu;
            // 0x32018c: 0x8fa201fc  lw          $v0, 0x1FC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
        ctx->pc = 0x320190u;
        goto label_320190;
    }
    ctx->pc = 0x320188u;
    {
        const bool branch_taken_0x320188 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x320188) {
            ctx->pc = 0x32018Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x320188u;
            // 0x32018c: 0x8fa201fc  lw          $v0, 0x1FC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x320198u;
            goto label_320198;
        }
    }
    ctx->pc = 0x320190u;
label_320190:
    // 0x320190: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x320190u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_320194:
    // 0x320194: 0x8fa201fc  lw          $v0, 0x1FC($sp)
    ctx->pc = 0x320194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
label_320198:
    // 0x320198: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x320198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_32019c:
    // 0x32019c: 0x50430029  beql        $v0, $v1, . + 4 + (0x29 << 2)
label_3201a0:
    if (ctx->pc == 0x3201A0u) {
        ctx->pc = 0x3201A0u;
            // 0x3201a0: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x3201A4u;
        goto label_3201a4;
    }
    ctx->pc = 0x32019Cu;
    {
        const bool branch_taken_0x32019c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x32019c) {
            ctx->pc = 0x3201A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32019Cu;
            // 0x3201a0: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
            ctx->pc = 0x320244u;
            goto label_320244;
        }
    }
    ctx->pc = 0x3201A4u;
label_3201a4:
    // 0x3201a4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3201a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3201a8:
    // 0x3201a8: 0x50430024  beql        $v0, $v1, . + 4 + (0x24 << 2)
label_3201ac:
    if (ctx->pc == 0x3201ACu) {
        ctx->pc = 0x3201ACu;
            // 0x3201ac: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x3201B0u;
        goto label_3201b0;
    }
    ctx->pc = 0x3201A8u;
    {
        const bool branch_taken_0x3201a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3201a8) {
            ctx->pc = 0x3201ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3201A8u;
            // 0x3201ac: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
            ctx->pc = 0x32023Cu;
            goto label_32023c;
        }
    }
    ctx->pc = 0x3201B0u;
label_3201b0:
    // 0x3201b0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x3201b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3201b4:
    // 0x3201b4: 0x50440041  beql        $v0, $a0, . + 4 + (0x41 << 2)
label_3201b8:
    if (ctx->pc == 0x3201B8u) {
        ctx->pc = 0x3201B8u;
            // 0x3201b8: 0x64150001  daddiu      $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 21, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x3201BCu;
        goto label_3201bc;
    }
    ctx->pc = 0x3201B4u;
    {
        const bool branch_taken_0x3201b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x3201b4) {
            ctx->pc = 0x3201B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3201B4u;
            // 0x3201b8: 0x64150001  daddiu      $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 21, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
            ctx->pc = 0x3202BCu;
            goto label_3202bc;
        }
    }
    ctx->pc = 0x3201BCu;
label_3201bc:
    // 0x3201bc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3201bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3201c0:
    // 0x3201c0: 0x10430010  beq         $v0, $v1, . + 4 + (0x10 << 2)
label_3201c4:
    if (ctx->pc == 0x3201C4u) {
        ctx->pc = 0x3201C8u;
        goto label_3201c8;
    }
    ctx->pc = 0x3201C0u;
    {
        const bool branch_taken_0x3201c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3201c0) {
            ctx->pc = 0x320204u;
            goto label_320204;
        }
    }
    ctx->pc = 0x3201C8u;
label_3201c8:
    // 0x3201c8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_3201cc:
    if (ctx->pc == 0x3201CCu) {
        ctx->pc = 0x3201D0u;
        goto label_3201d0;
    }
    ctx->pc = 0x3201C8u;
    {
        const bool branch_taken_0x3201c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3201c8) {
            ctx->pc = 0x3201D8u;
            goto label_3201d8;
        }
    }
    ctx->pc = 0x3201D0u;
label_3201d0:
    // 0x3201d0: 0x1000003b  b           . + 4 + (0x3B << 2)
label_3201d4:
    if (ctx->pc == 0x3201D4u) {
        ctx->pc = 0x3201D4u;
            // 0x3201d4: 0x93a20190  lbu         $v0, 0x190($sp) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 400)));
        ctx->pc = 0x3201D8u;
        goto label_3201d8;
    }
    ctx->pc = 0x3201D0u;
    {
        const bool branch_taken_0x3201d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3201D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3201D0u;
            // 0x3201d4: 0x93a20190  lbu         $v0, 0x190($sp) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3201d0) {
            ctx->pc = 0x3202C0u;
            goto label_3202c0;
        }
    }
    ctx->pc = 0x3201D8u;
label_3201d8:
    // 0x3201d8: 0x56c00038  bnel        $s6, $zero, . + 4 + (0x38 << 2)
label_3201dc:
    if (ctx->pc == 0x3201DCu) {
        ctx->pc = 0x3201DCu;
            // 0x3201dc: 0x26d6ffff  addiu       $s6, $s6, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
        ctx->pc = 0x3201E0u;
        goto label_3201e0;
    }
    ctx->pc = 0x3201D8u;
    {
        const bool branch_taken_0x3201d8 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x3201d8) {
            ctx->pc = 0x3201DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3201D8u;
            // 0x3201dc: 0x26d6ffff  addiu       $s6, $s6, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3202BCu;
            goto label_3202bc;
        }
    }
    ctx->pc = 0x3201E0u;
label_3201e0:
    // 0x3201e0: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x3201e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_3201e4:
    // 0x3201e4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_3201e8:
    if (ctx->pc == 0x3201E8u) {
        ctx->pc = 0x3201E8u;
            // 0x3201e8: 0x2622fffd  addiu       $v0, $s1, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967293));
        ctx->pc = 0x3201ECu;
        goto label_3201ec;
    }
    ctx->pc = 0x3201E4u;
    {
        const bool branch_taken_0x3201e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3201e4) {
            ctx->pc = 0x3201E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3201E4u;
            // 0x3201e8: 0x2622fffd  addiu       $v0, $s1, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967293));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3201F8u;
            goto label_3201f8;
        }
    }
    ctx->pc = 0x3201ECu;
label_3201ec:
    // 0x3201ec: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3201ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3201f0:
    // 0x3201f0: 0x10000032  b           . + 4 + (0x32 << 2)
label_3201f4:
    if (ctx->pc == 0x3201F4u) {
        ctx->pc = 0x3201F4u;
            // 0x3201f4: 0xafa201a0  sw          $v0, 0x1A0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 2));
        ctx->pc = 0x3201F8u;
        goto label_3201f8;
    }
    ctx->pc = 0x3201F0u;
    {
        const bool branch_taken_0x3201f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3201F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3201F0u;
            // 0x3201f4: 0xafa201a0  sw          $v0, 0x1A0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3201f0) {
            ctx->pc = 0x3202BCu;
            goto label_3202bc;
        }
    }
    ctx->pc = 0x3201F8u;
label_3201f8:
    // 0x3201f8: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x3201f8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3201fc:
    // 0x3201fc: 0x1000002f  b           . + 4 + (0x2F << 2)
label_320200:
    if (ctx->pc == 0x320200u) {
        ctx->pc = 0x320200u;
            // 0x320200: 0xafa201a0  sw          $v0, 0x1A0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 2));
        ctx->pc = 0x320204u;
        goto label_320204;
    }
    ctx->pc = 0x3201FCu;
    {
        const bool branch_taken_0x3201fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x320200u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3201FCu;
            // 0x320200: 0xafa201a0  sw          $v0, 0x1A0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3201fc) {
            ctx->pc = 0x3202BCu;
            goto label_3202bc;
        }
    }
    ctx->pc = 0x320204u;
label_320204:
    // 0x320204: 0x56c4002d  bnel        $s6, $a0, . + 4 + (0x2D << 2)
label_320208:
    if (ctx->pc == 0x320208u) {
        ctx->pc = 0x320208u;
            // 0x320208: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->pc = 0x32020Cu;
        goto label_32020c;
    }
    ctx->pc = 0x320204u;
    {
        const bool branch_taken_0x320204 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 4));
        if (branch_taken_0x320204) {
            ctx->pc = 0x320208u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x320204u;
            // 0x320208: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3202BCu;
            goto label_3202bc;
        }
    }
    ctx->pc = 0x32020Cu;
label_32020c:
    // 0x32020c: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x32020cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_320210:
    // 0x320210: 0x24430002  addiu       $v1, $v0, 0x2
    ctx->pc = 0x320210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_320214:
    // 0x320214: 0x2622ffff  addiu       $v0, $s1, -0x1
    ctx->pc = 0x320214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_320218:
    // 0x320218: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x320218u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_32021c:
    // 0x32021c: 0x50200005  beql        $at, $zero, . + 4 + (0x5 << 2)
label_320220:
    if (ctx->pc == 0x320220u) {
        ctx->pc = 0x320220u;
            // 0x320220: 0xafa001a0  sw          $zero, 0x1A0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 0));
        ctx->pc = 0x320224u;
        goto label_320224;
    }
    ctx->pc = 0x32021Cu;
    {
        const bool branch_taken_0x32021c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x32021c) {
            ctx->pc = 0x320220u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32021Cu;
            // 0x320220: 0xafa001a0  sw          $zero, 0x1A0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x320234u;
            goto label_320234;
        }
    }
    ctx->pc = 0x320224u;
label_320224:
    // 0x320224: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x320224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_320228:
    // 0x320228: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x320228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_32022c:
    // 0x32022c: 0x10000023  b           . + 4 + (0x23 << 2)
label_320230:
    if (ctx->pc == 0x320230u) {
        ctx->pc = 0x320230u;
            // 0x320230: 0xafa201a0  sw          $v0, 0x1A0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 2));
        ctx->pc = 0x320234u;
        goto label_320234;
    }
    ctx->pc = 0x32022Cu;
    {
        const bool branch_taken_0x32022c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x320230u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32022Cu;
            // 0x320230: 0xafa201a0  sw          $v0, 0x1A0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32022c) {
            ctx->pc = 0x3202BCu;
            goto label_3202bc;
        }
    }
    ctx->pc = 0x320234u;
label_320234:
    // 0x320234: 0x10000021  b           . + 4 + (0x21 << 2)
label_320238:
    if (ctx->pc == 0x320238u) {
        ctx->pc = 0x320238u;
            // 0x320238: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32023Cu;
        goto label_32023c;
    }
    ctx->pc = 0x320234u;
    {
        const bool branch_taken_0x320234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x320238u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x320234u;
            // 0x320238: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320234) {
            ctx->pc = 0x3202BCu;
            goto label_3202bc;
        }
    }
    ctx->pc = 0x32023Cu;
label_32023c:
    // 0x32023c: 0x1000001f  b           . + 4 + (0x1F << 2)
label_320240:
    if (ctx->pc == 0x320240u) {
        ctx->pc = 0x320240u;
            // 0x320240: 0xa3a20190  sb          $v0, 0x190($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 400), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x320244u;
        goto label_320244;
    }
    ctx->pc = 0x32023Cu;
    {
        const bool branch_taken_0x32023c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x320240u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32023Cu;
            // 0x320240: 0xa3a20190  sb          $v0, 0x190($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 400), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32023c) {
            ctx->pc = 0x3202BCu;
            goto label_3202bc;
        }
    }
    ctx->pc = 0x320244u;
label_320244:
    // 0x320244: 0xa3a20180  sb          $v0, 0x180($sp)
    ctx->pc = 0x320244u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 384), (uint8_t)GPR_U32(ctx, 2));
label_320248:
    // 0x320248: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x320248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_32024c:
    // 0x32024c: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x32024cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_320250:
    // 0x320250: 0x51102b  sltu        $v0, $v0, $s1
    ctx->pc = 0x320250u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_320254:
    // 0x320254: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_320258:
    if (ctx->pc == 0x320258u) {
        ctx->pc = 0x320258u;
            // 0x320258: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x32025Cu;
        goto label_32025c;
    }
    ctx->pc = 0x320254u;
    {
        const bool branch_taken_0x320254 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x320254) {
            ctx->pc = 0x320258u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x320254u;
            // 0x320258: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x320268u;
            goto label_320268;
        }
    }
    ctx->pc = 0x32025Cu;
label_32025c:
    // 0x32025c: 0xafa001a0  sw          $zero, 0x1A0($sp)
    ctx->pc = 0x32025cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 0));
label_320260:
    // 0x320260: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x320260u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_320264:
    // 0x320264: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x320264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_320268:
    // 0x320268: 0x52620014  beql        $s3, $v0, . + 4 + (0x14 << 2)
label_32026c:
    if (ctx->pc == 0x32026Cu) {
        ctx->pc = 0x32026Cu;
            // 0x32026c: 0x641e0001  daddiu      $fp, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 30, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x320270u;
        goto label_320270;
    }
    ctx->pc = 0x320268u;
    {
        const bool branch_taken_0x320268 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x320268) {
            ctx->pc = 0x32026Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x320268u;
            // 0x32026c: 0x641e0001  daddiu      $fp, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 30, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
            ctx->pc = 0x3202BCu;
            goto label_3202bc;
        }
    }
    ctx->pc = 0x320270u;
label_320270:
    // 0x320270: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x320270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_320274:
    // 0x320274: 0x12620006  beq         $s3, $v0, . + 4 + (0x6 << 2)
label_320278:
    if (ctx->pc == 0x320278u) {
        ctx->pc = 0x32027Cu;
        goto label_32027c;
    }
    ctx->pc = 0x320274u;
    {
        const bool branch_taken_0x320274 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x320274) {
            ctx->pc = 0x320290u;
            goto label_320290;
        }
    }
    ctx->pc = 0x32027Cu;
label_32027c:
    // 0x32027c: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x32027cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_320280:
    // 0x320280: 0x12620003  beq         $s3, $v0, . + 4 + (0x3 << 2)
label_320284:
    if (ctx->pc == 0x320284u) {
        ctx->pc = 0x320288u;
        goto label_320288;
    }
    ctx->pc = 0x320280u;
    {
        const bool branch_taken_0x320280 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x320280) {
            ctx->pc = 0x320290u;
            goto label_320290;
        }
    }
    ctx->pc = 0x320288u;
label_320288:
    // 0x320288: 0x10000004  b           . + 4 + (0x4 << 2)
label_32028c:
    if (ctx->pc == 0x32028Cu) {
        ctx->pc = 0x32028Cu;
            // 0x32028c: 0x8fa201a0  lw          $v0, 0x1A0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
        ctx->pc = 0x320290u;
        goto label_320290;
    }
    ctx->pc = 0x320288u;
    {
        const bool branch_taken_0x320288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32028Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x320288u;
            // 0x32028c: 0x8fa201a0  lw          $v0, 0x1A0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320288) {
            ctx->pc = 0x32029Cu;
            goto label_32029c;
        }
    }
    ctx->pc = 0x320290u;
label_320290:
    // 0x320290: 0x641e0001  daddiu      $fp, $zero, 0x1
    ctx->pc = 0x320290u;
    SET_GPR_S64(ctx, 30, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_320294:
    // 0x320294: 0x10000009  b           . + 4 + (0x9 << 2)
label_320298:
    if (ctx->pc == 0x320298u) {
        ctx->pc = 0x32029Cu;
        goto label_32029c;
    }
    ctx->pc = 0x320294u;
    {
        const bool branch_taken_0x320294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x320294) {
            ctx->pc = 0x3202BCu;
            goto label_3202bc;
        }
    }
    ctx->pc = 0x32029Cu;
label_32029c:
    // 0x32029c: 0x401026  xor         $v0, $v0, $zero
    ctx->pc = 0x32029cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
label_3202a0:
    // 0x3202a0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x3202a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_3202a4:
    // 0x3202a4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_3202a8:
    if (ctx->pc == 0x3202A8u) {
        ctx->pc = 0x3202A8u;
            // 0x3202a8: 0x38420001  xori        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->pc = 0x3202ACu;
        goto label_3202ac;
    }
    ctx->pc = 0x3202A4u;
    {
        const bool branch_taken_0x3202a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3202a4) {
            ctx->pc = 0x3202A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3202A4u;
            // 0x3202a8: 0x38420001  xori        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
            ctx->pc = 0x3202B8u;
            goto label_3202b8;
        }
    }
    ctx->pc = 0x3202ACu;
label_3202ac:
    // 0x3202ac: 0x2c01026  xor         $v0, $s6, $zero
    ctx->pc = 0x3202acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) ^ GPR_U64(ctx, 0));
label_3202b0:
    // 0x3202b0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x3202b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_3202b4:
    // 0x3202b4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x3202b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_3202b8:
    // 0x3202b8: 0x305e00ff  andi        $fp, $v0, 0xFF
    ctx->pc = 0x3202b8u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_3202bc:
    // 0x3202bc: 0x93a20190  lbu         $v0, 0x190($sp)
    ctx->pc = 0x3202bcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 400)));
label_3202c0:
    // 0x3202c0: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
label_3202c4:
    if (ctx->pc == 0x3202C4u) {
        ctx->pc = 0x3202C4u;
            // 0x3202c4: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x3202C8u;
        goto label_3202c8;
    }
    ctx->pc = 0x3202C0u;
    {
        const bool branch_taken_0x3202c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3202c0) {
            ctx->pc = 0x3202C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3202C0u;
            // 0x3202c4: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x320304u;
            goto label_320304;
        }
    }
    ctx->pc = 0x3202C8u;
label_3202c8:
    // 0x3202c8: 0x17c0000d  bnez        $fp, . + 4 + (0xD << 2)
label_3202cc:
    if (ctx->pc == 0x3202CCu) {
        ctx->pc = 0x3202D0u;
        goto label_3202d0;
    }
    ctx->pc = 0x3202C8u;
    {
        const bool branch_taken_0x3202c8 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        if (branch_taken_0x3202c8) {
            ctx->pc = 0x320300u;
            goto label_320300;
        }
    }
    ctx->pc = 0x3202D0u;
label_3202d0:
    // 0x3202d0: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x3202d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_3202d4:
    // 0x3202d4: 0x401026  xor         $v0, $v0, $zero
    ctx->pc = 0x3202d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
label_3202d8:
    // 0x3202d8: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x3202d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_3202dc:
    // 0x3202dc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_3202e0:
    if (ctx->pc == 0x3202E0u) {
        ctx->pc = 0x3202E4u;
        goto label_3202e4;
    }
    ctx->pc = 0x3202DCu;
    {
        const bool branch_taken_0x3202dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3202dc) {
            ctx->pc = 0x3202ECu;
            goto label_3202ec;
        }
    }
    ctx->pc = 0x3202E4u;
label_3202e4:
    // 0x3202e4: 0x2c01026  xor         $v0, $s6, $zero
    ctx->pc = 0x3202e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) ^ GPR_U64(ctx, 0));
label_3202e8:
    // 0x3202e8: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x3202e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_3202ec:
    // 0x3202ec: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_3202f0:
    if (ctx->pc == 0x3202F0u) {
        ctx->pc = 0x3202F0u;
            // 0x3202f0: 0xa3a20190  sb          $v0, 0x190($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 400), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x3202F4u;
        goto label_3202f4;
    }
    ctx->pc = 0x3202ECu;
    {
        const bool branch_taken_0x3202ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3202ec) {
            ctx->pc = 0x3202F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3202ECu;
            // 0x3202f0: 0xa3a20190  sb          $v0, 0x190($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 400), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x320300u;
            goto label_320300;
        }
    }
    ctx->pc = 0x3202F4u;
label_3202f4:
    // 0x3202f4: 0x93a20150  lbu         $v0, 0x150($sp)
    ctx->pc = 0x3202f4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 336)));
label_3202f8:
    // 0x3202f8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x3202f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3202fc:
    // 0x3202fc: 0xa3a20190  sb          $v0, 0x190($sp)
    ctx->pc = 0x3202fcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 400), (uint8_t)GPR_U32(ctx, 2));
label_320300:
    // 0x320300: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x320300u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_320304:
    // 0x320304: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x320304u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_320308:
    // 0x320308: 0x24a5c680  addiu       $a1, $a1, -0x3980
    ctx->pc = 0x320308u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952576));
label_32030c:
    // 0x32030c: 0xc123944  jal         func_48E510
label_320310:
    if (ctx->pc == 0x320310u) {
        ctx->pc = 0x320310u;
            // 0x320310: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x320314u;
        goto label_320314;
    }
    ctx->pc = 0x32030Cu;
    SET_GPR_U32(ctx, 31, 0x320314u);
    ctx->pc = 0x320310u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32030Cu;
            // 0x320310: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320314u; }
        if (ctx->pc != 0x320314u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320314u; }
        if (ctx->pc != 0x320314u) { return; }
    }
    ctx->pc = 0x320314u;
label_320314:
    // 0x320314: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x320314u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_320318:
    // 0x320318: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x320318u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_32031c:
    // 0x32031c: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x32031cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_320320:
    // 0x320320: 0x24a5c6a0  addiu       $a1, $a1, -0x3960
    ctx->pc = 0x320320u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952608));
label_320324:
    // 0x320324: 0xc123944  jal         func_48E510
label_320328:
    if (ctx->pc == 0x320328u) {
        ctx->pc = 0x320328u;
            // 0x320328: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32032Cu;
        goto label_32032c;
    }
    ctx->pc = 0x320324u;
    SET_GPR_U32(ctx, 31, 0x32032Cu);
    ctx->pc = 0x320328u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x320324u;
            // 0x320328: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32032Cu; }
        if (ctx->pc != 0x32032Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32032Cu; }
        if (ctx->pc != 0x32032Cu) { return; }
    }
    ctx->pc = 0x32032Cu;
label_32032c:
    // 0x32032c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x32032cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_320330:
    // 0x320330: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x320330u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_320334:
    // 0x320334: 0xafa2013c  sw          $v0, 0x13C($sp)
    ctx->pc = 0x320334u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 2));
label_320338:
    // 0x320338: 0x24a5c6c0  addiu       $a1, $a1, -0x3940
    ctx->pc = 0x320338u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952640));
label_32033c:
    // 0x32033c: 0xc123944  jal         func_48E510
label_320340:
    if (ctx->pc == 0x320340u) {
        ctx->pc = 0x320340u;
            // 0x320340: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x320344u;
        goto label_320344;
    }
    ctx->pc = 0x32033Cu;
    SET_GPR_U32(ctx, 31, 0x320344u);
    ctx->pc = 0x320340u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32033Cu;
            // 0x320340: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320344u; }
        if (ctx->pc != 0x320344u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320344u; }
        if (ctx->pc != 0x320344u) { return; }
    }
    ctx->pc = 0x320344u;
label_320344:
    // 0x320344: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x320344u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_320348:
    // 0x320348: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x320348u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_32034c:
    // 0x32034c: 0xafa20138  sw          $v0, 0x138($sp)
    ctx->pc = 0x32034cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 2));
label_320350:
    // 0x320350: 0x24a5c6e0  addiu       $a1, $a1, -0x3920
    ctx->pc = 0x320350u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952672));
label_320354:
    // 0x320354: 0xc123944  jal         func_48E510
label_320358:
    if (ctx->pc == 0x320358u) {
        ctx->pc = 0x320358u;
            // 0x320358: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32035Cu;
        goto label_32035c;
    }
    ctx->pc = 0x320354u;
    SET_GPR_U32(ctx, 31, 0x32035Cu);
    ctx->pc = 0x320358u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x320354u;
            // 0x320358: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32035Cu; }
        if (ctx->pc != 0x32035Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32035Cu; }
        if (ctx->pc != 0x32035Cu) { return; }
    }
    ctx->pc = 0x32035Cu;
label_32035c:
    // 0x32035c: 0xafa20134  sw          $v0, 0x134($sp)
    ctx->pc = 0x32035cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 2));
label_320360:
    // 0x320360: 0x27a30200  addiu       $v1, $sp, 0x200
    ctx->pc = 0x320360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
label_320364:
    // 0x320364: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_320368:
    if (ctx->pc == 0x320368u) {
        ctx->pc = 0x320368u;
            // 0x320368: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x32036Cu;
        goto label_32036c;
    }
    ctx->pc = 0x320364u;
    {
        const bool branch_taken_0x320364 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x320368u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x320364u;
            // 0x320368: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320364) {
            ctx->pc = 0x320388u;
            goto label_320388;
        }
    }
    ctx->pc = 0x32036Cu;
label_32036c:
    // 0x32036c: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x32036cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_320370:
    // 0x320370: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x320370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_320374:
    // 0x320374: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x320374u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_320378:
    // 0x320378: 0x0  nop
    ctx->pc = 0x320378u;
    // NOP
label_32037c:
    // 0x32037c: 0x0  nop
    ctx->pc = 0x32037cu;
    // NOP
label_320380:
    // 0x320380: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_320384:
    if (ctx->pc == 0x320384u) {
        ctx->pc = 0x320388u;
        goto label_320388;
    }
    ctx->pc = 0x320380u;
    {
        const bool branch_taken_0x320380 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x320380) {
            ctx->pc = 0x32036Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_32036c;
        }
    }
    ctx->pc = 0x320388u;
label_320388:
    // 0x320388: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x320388u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_32038c:
    // 0x32038c: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x32038cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_320390:
    // 0x320390: 0x24a5c478  addiu       $a1, $a1, -0x3B88
    ctx->pc = 0x320390u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952056));
label_320394:
    // 0x320394: 0xc123944  jal         func_48E510
label_320398:
    if (ctx->pc == 0x320398u) {
        ctx->pc = 0x320398u;
            // 0x320398: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32039Cu;
        goto label_32039c;
    }
    ctx->pc = 0x320394u;
    SET_GPR_U32(ctx, 31, 0x32039Cu);
    ctx->pc = 0x320398u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x320394u;
            // 0x320398: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32039Cu; }
        if (ctx->pc != 0x32039Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32039Cu; }
        if (ctx->pc != 0x32039Cu) { return; }
    }
    ctx->pc = 0x32039Cu;
label_32039c:
    // 0x32039c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x32039cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3203a0:
    // 0x3203a0: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x3203a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_3203a4:
    // 0x3203a4: 0xafa20200  sw          $v0, 0x200($sp)
    ctx->pc = 0x3203a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 512), GPR_U32(ctx, 2));
label_3203a8:
    // 0x3203a8: 0x24a5c488  addiu       $a1, $a1, -0x3B78
    ctx->pc = 0x3203a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952072));
label_3203ac:
    // 0x3203ac: 0xc123944  jal         func_48E510
label_3203b0:
    if (ctx->pc == 0x3203B0u) {
        ctx->pc = 0x3203B0u;
            // 0x3203b0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3203B4u;
        goto label_3203b4;
    }
    ctx->pc = 0x3203ACu;
    SET_GPR_U32(ctx, 31, 0x3203B4u);
    ctx->pc = 0x3203B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3203ACu;
            // 0x3203b0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3203B4u; }
        if (ctx->pc != 0x3203B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3203B4u; }
        if (ctx->pc != 0x3203B4u) { return; }
    }
    ctx->pc = 0x3203B4u;
label_3203b4:
    // 0x3203b4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x3203b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3203b8:
    // 0x3203b8: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x3203b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_3203bc:
    // 0x3203bc: 0xafa20204  sw          $v0, 0x204($sp)
    ctx->pc = 0x3203bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 516), GPR_U32(ctx, 2));
label_3203c0:
    // 0x3203c0: 0x24a5c4a8  addiu       $a1, $a1, -0x3B58
    ctx->pc = 0x3203c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952104));
label_3203c4:
    // 0x3203c4: 0xc123944  jal         func_48E510
label_3203c8:
    if (ctx->pc == 0x3203C8u) {
        ctx->pc = 0x3203C8u;
            // 0x3203c8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3203CCu;
        goto label_3203cc;
    }
    ctx->pc = 0x3203C4u;
    SET_GPR_U32(ctx, 31, 0x3203CCu);
    ctx->pc = 0x3203C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3203C4u;
            // 0x3203c8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3203CCu; }
        if (ctx->pc != 0x3203CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3203CCu; }
        if (ctx->pc != 0x3203CCu) { return; }
    }
    ctx->pc = 0x3203CCu;
label_3203cc:
    // 0x3203cc: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x3203ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3203d0:
    // 0x3203d0: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x3203d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_3203d4:
    // 0x3203d4: 0xafa20208  sw          $v0, 0x208($sp)
    ctx->pc = 0x3203d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 520), GPR_U32(ctx, 2));
label_3203d8:
    // 0x3203d8: 0x24a5c498  addiu       $a1, $a1, -0x3B68
    ctx->pc = 0x3203d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952088));
label_3203dc:
    // 0x3203dc: 0xc123944  jal         func_48E510
label_3203e0:
    if (ctx->pc == 0x3203E0u) {
        ctx->pc = 0x3203E0u;
            // 0x3203e0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3203E4u;
        goto label_3203e4;
    }
    ctx->pc = 0x3203DCu;
    SET_GPR_U32(ctx, 31, 0x3203E4u);
    ctx->pc = 0x3203E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3203DCu;
            // 0x3203e0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3203E4u; }
        if (ctx->pc != 0x3203E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3203E4u; }
        if (ctx->pc != 0x3203E4u) { return; }
    }
    ctx->pc = 0x3203E4u;
label_3203e4:
    // 0x3203e4: 0x2e210002  sltiu       $at, $s1, 0x2
    ctx->pc = 0x3203e4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_3203e8:
    // 0x3203e8: 0x1020003e  beqz        $at, . + 4 + (0x3E << 2)
label_3203ec:
    if (ctx->pc == 0x3203ECu) {
        ctx->pc = 0x3203ECu;
            // 0x3203ec: 0xafa2020c  sw          $v0, 0x20C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 524), GPR_U32(ctx, 2));
        ctx->pc = 0x3203F0u;
        goto label_3203f0;
    }
    ctx->pc = 0x3203E8u;
    {
        const bool branch_taken_0x3203e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3203ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3203E8u;
            // 0x3203ec: 0xafa2020c  sw          $v0, 0x20C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 524), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3203e8) {
            ctx->pc = 0x3204E4u;
            goto label_3204e4;
        }
    }
    ctx->pc = 0x3203F0u;
label_3203f0:
    // 0x3203f0: 0x93a20150  lbu         $v0, 0x150($sp)
    ctx->pc = 0x3203f0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 336)));
label_3203f4:
    // 0x3203f4: 0x5040003c  beql        $v0, $zero, . + 4 + (0x3C << 2)
label_3203f8:
    if (ctx->pc == 0x3203F8u) {
        ctx->pc = 0x3203F8u;
            // 0x3203f8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x3203FCu;
        goto label_3203fc;
    }
    ctx->pc = 0x3203F4u;
    {
        const bool branch_taken_0x3203f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3203f4) {
            ctx->pc = 0x3203F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3203F4u;
            // 0x3203f8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3204E8u;
            goto label_3204e8;
        }
    }
    ctx->pc = 0x3203FCu;
label_3203fc:
    // 0x3203fc: 0x8fa60200  lw          $a2, 0x200($sp)
    ctx->pc = 0x3203fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
label_320400:
    // 0x320400: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x320400u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_320404:
    // 0x320404: 0x8cc50008  lw          $a1, 0x8($a2)
    ctx->pc = 0x320404u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_320408:
    // 0x320408: 0xc123654  jal         func_48D950
label_32040c:
    if (ctx->pc == 0x32040Cu) {
        ctx->pc = 0x32040Cu;
            // 0x32040c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x320410u;
        goto label_320410;
    }
    ctx->pc = 0x320408u;
    SET_GPR_U32(ctx, 31, 0x320410u);
    ctx->pc = 0x32040Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x320408u;
            // 0x32040c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320410u; }
        if (ctx->pc != 0x320410u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320410u; }
        if (ctx->pc != 0x320410u) { return; }
    }
    ctx->pc = 0x320410u;
label_320410:
    // 0x320410: 0x8fa20204  lw          $v0, 0x204($sp)
    ctx->pc = 0x320410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 516)));
label_320414:
    // 0x320414: 0x8fa4013c  lw          $a0, 0x13C($sp)
    ctx->pc = 0x320414u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
label_320418:
    // 0x320418: 0x8fa60200  lw          $a2, 0x200($sp)
    ctx->pc = 0x320418u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
label_32041c:
    // 0x32041c: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x32041cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_320420:
    // 0x320420: 0xc123654  jal         func_48D950
label_320424:
    if (ctx->pc == 0x320424u) {
        ctx->pc = 0x320424u;
            // 0x320424: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x320428u;
        goto label_320428;
    }
    ctx->pc = 0x320420u;
    SET_GPR_U32(ctx, 31, 0x320428u);
    ctx->pc = 0x320424u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x320420u;
            // 0x320424: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320428u; }
        if (ctx->pc != 0x320428u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320428u; }
        if (ctx->pc != 0x320428u) { return; }
    }
    ctx->pc = 0x320428u;
label_320428:
    // 0x320428: 0x8fa20208  lw          $v0, 0x208($sp)
    ctx->pc = 0x320428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
label_32042c:
    // 0x32042c: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x32042cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_320430:
    // 0x320430: 0x8fa60230  lw          $a2, 0x230($sp)
    ctx->pc = 0x320430u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
label_320434:
    // 0x320434: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x320434u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_320438:
    // 0x320438: 0xc123654  jal         func_48D950
label_32043c:
    if (ctx->pc == 0x32043Cu) {
        ctx->pc = 0x32043Cu;
            // 0x32043c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x320440u;
        goto label_320440;
    }
    ctx->pc = 0x320438u;
    SET_GPR_U32(ctx, 31, 0x320440u);
    ctx->pc = 0x32043Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x320438u;
            // 0x32043c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320440u; }
        if (ctx->pc != 0x320440u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320440u; }
        if (ctx->pc != 0x320440u) { return; }
    }
    ctx->pc = 0x320440u;
label_320440:
    // 0x320440: 0x8fa2020c  lw          $v0, 0x20C($sp)
    ctx->pc = 0x320440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 524)));
label_320444:
    // 0x320444: 0x8fa40134  lw          $a0, 0x134($sp)
    ctx->pc = 0x320444u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
label_320448:
    // 0x320448: 0x8fa60230  lw          $a2, 0x230($sp)
    ctx->pc = 0x320448u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
label_32044c:
    // 0x32044c: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x32044cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_320450:
    // 0x320450: 0xc123654  jal         func_48D950
label_320454:
    if (ctx->pc == 0x320454u) {
        ctx->pc = 0x320454u;
            // 0x320454: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x320458u;
        goto label_320458;
    }
    ctx->pc = 0x320450u;
    SET_GPR_U32(ctx, 31, 0x320458u);
    ctx->pc = 0x320454u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x320450u;
            // 0x320454: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320458u; }
        if (ctx->pc != 0x320458u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320458u; }
        if (ctx->pc != 0x320458u) { return; }
    }
    ctx->pc = 0x320458u;
label_320458:
    // 0x320458: 0x8fa204b0  lw          $v0, 0x4B0($sp)
    ctx->pc = 0x320458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1200)));
label_32045c:
    // 0x32045c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x32045cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_320460:
    // 0x320460: 0x8fa60258  lw          $a2, 0x258($sp)
    ctx->pc = 0x320460u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 600)));
label_320464:
    // 0x320464: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x320464u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_320468:
    // 0x320468: 0xc123654  jal         func_48D950
label_32046c:
    if (ctx->pc == 0x32046Cu) {
        ctx->pc = 0x32046Cu;
            // 0x32046c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x320470u;
        goto label_320470;
    }
    ctx->pc = 0x320468u;
    SET_GPR_U32(ctx, 31, 0x320470u);
    ctx->pc = 0x32046Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x320468u;
            // 0x32046c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320470u; }
        if (ctx->pc != 0x320470u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320470u; }
        if (ctx->pc != 0x320470u) { return; }
    }
    ctx->pc = 0x320470u;
label_320470:
    // 0x320470: 0x8fa204b4  lw          $v0, 0x4B4($sp)
    ctx->pc = 0x320470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1204)));
label_320474:
    // 0x320474: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x320474u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_320478:
    // 0x320478: 0x8fa60250  lw          $a2, 0x250($sp)
    ctx->pc = 0x320478u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
label_32047c:
    // 0x32047c: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x32047cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_320480:
    // 0x320480: 0xc123654  jal         func_48D950
label_320484:
    if (ctx->pc == 0x320484u) {
        ctx->pc = 0x320484u;
            // 0x320484: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x320488u;
        goto label_320488;
    }
    ctx->pc = 0x320480u;
    SET_GPR_U32(ctx, 31, 0x320488u);
    ctx->pc = 0x320484u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x320480u;
            // 0x320484: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320488u; }
        if (ctx->pc != 0x320488u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320488u; }
        if (ctx->pc != 0x320488u) { return; }
    }
    ctx->pc = 0x320488u;
label_320488:
    // 0x320488: 0x8fa204b8  lw          $v0, 0x4B8($sp)
    ctx->pc = 0x320488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1208)));
label_32048c:
    // 0x32048c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x32048cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_320490:
    // 0x320490: 0x8fa60254  lw          $a2, 0x254($sp)
    ctx->pc = 0x320490u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 596)));
label_320494:
    // 0x320494: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x320494u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_320498:
    // 0x320498: 0xc123654  jal         func_48D950
label_32049c:
    if (ctx->pc == 0x32049Cu) {
        ctx->pc = 0x32049Cu;
            // 0x32049c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3204A0u;
        goto label_3204a0;
    }
    ctx->pc = 0x320498u;
    SET_GPR_U32(ctx, 31, 0x3204A0u);
    ctx->pc = 0x32049Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x320498u;
            // 0x32049c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3204A0u; }
        if (ctx->pc != 0x3204A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3204A0u; }
        if (ctx->pc != 0x3204A0u) { return; }
    }
    ctx->pc = 0x3204A0u;
label_3204a0:
    // 0x3204a0: 0x8fa604c0  lw          $a2, 0x4C0($sp)
    ctx->pc = 0x3204a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1216)));
label_3204a4:
    // 0x3204a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3204a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3204a8:
    // 0x3204a8: 0x8cc50008  lw          $a1, 0x8($a2)
    ctx->pc = 0x3204a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_3204ac:
    // 0x3204ac: 0xc123654  jal         func_48D950
label_3204b0:
    if (ctx->pc == 0x3204B0u) {
        ctx->pc = 0x3204B0u;
            // 0x3204b0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3204B4u;
        goto label_3204b4;
    }
    ctx->pc = 0x3204ACu;
    SET_GPR_U32(ctx, 31, 0x3204B4u);
    ctx->pc = 0x3204B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3204ACu;
            // 0x3204b0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3204B4u; }
        if (ctx->pc != 0x3204B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3204B4u; }
        if (ctx->pc != 0x3204B4u) { return; }
    }
    ctx->pc = 0x3204B4u;
label_3204b4:
    // 0x3204b4: 0x8fa604c4  lw          $a2, 0x4C4($sp)
    ctx->pc = 0x3204b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1220)));
label_3204b8:
    // 0x3204b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3204b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3204bc:
    // 0x3204bc: 0x8cc50008  lw          $a1, 0x8($a2)
    ctx->pc = 0x3204bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_3204c0:
    // 0x3204c0: 0xc123654  jal         func_48D950
label_3204c4:
    if (ctx->pc == 0x3204C4u) {
        ctx->pc = 0x3204C4u;
            // 0x3204c4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3204C8u;
        goto label_3204c8;
    }
    ctx->pc = 0x3204C0u;
    SET_GPR_U32(ctx, 31, 0x3204C8u);
    ctx->pc = 0x3204C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3204C0u;
            // 0x3204c4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3204C8u; }
        if (ctx->pc != 0x3204C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3204C8u; }
        if (ctx->pc != 0x3204C8u) { return; }
    }
    ctx->pc = 0x3204C8u;
label_3204c8:
    // 0x3204c8: 0x8fa604c8  lw          $a2, 0x4C8($sp)
    ctx->pc = 0x3204c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1224)));
label_3204cc:
    // 0x3204cc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3204ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3204d0:
    // 0x3204d0: 0x8cc50008  lw          $a1, 0x8($a2)
    ctx->pc = 0x3204d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_3204d4:
    // 0x3204d4: 0xc123654  jal         func_48D950
label_3204d8:
    if (ctx->pc == 0x3204D8u) {
        ctx->pc = 0x3204D8u;
            // 0x3204d8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3204DCu;
        goto label_3204dc;
    }
    ctx->pc = 0x3204D4u;
    SET_GPR_U32(ctx, 31, 0x3204DCu);
    ctx->pc = 0x3204D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3204D4u;
            // 0x3204d8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3204DCu; }
        if (ctx->pc != 0x3204DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3204DCu; }
        if (ctx->pc != 0x3204DCu) { return; }
    }
    ctx->pc = 0x3204DCu;
label_3204dc:
    // 0x3204dc: 0x10000130  b           . + 4 + (0x130 << 2)
label_3204e0:
    if (ctx->pc == 0x3204E0u) {
        ctx->pc = 0x3204E4u;
        goto label_3204e4;
    }
    ctx->pc = 0x3204DCu;
    {
        const bool branch_taken_0x3204dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3204dc) {
            ctx->pc = 0x3209A0u;
            goto label_3209a0;
        }
    }
    ctx->pc = 0x3204E4u;
label_3204e4:
    // 0x3204e4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3204e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3204e8:
    // 0x3204e8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x3204e8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3204ec:
    // 0x3204ec: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3204ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3204f0:
    // 0x3204f0: 0x12c2001e  beq         $s6, $v0, . + 4 + (0x1E << 2)
label_3204f4:
    if (ctx->pc == 0x3204F4u) {
        ctx->pc = 0x3204F4u;
            // 0x3204f4: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3204F8u;
        goto label_3204f8;
    }
    ctx->pc = 0x3204F0u;
    {
        const bool branch_taken_0x3204f0 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 2));
        ctx->pc = 0x3204F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3204F0u;
            // 0x3204f4: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3204f0) {
            ctx->pc = 0x32056Cu;
            goto label_32056c;
        }
    }
    ctx->pc = 0x3204F8u;
label_3204f8:
    // 0x3204f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3204f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3204fc:
    // 0x3204fc: 0x52c20010  beql        $s6, $v0, . + 4 + (0x10 << 2)
label_320500:
    if (ctx->pc == 0x320500u) {
        ctx->pc = 0x320500u;
            // 0x320500: 0x8fa201a0  lw          $v0, 0x1A0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
        ctx->pc = 0x320504u;
        goto label_320504;
    }
    ctx->pc = 0x3204FCu;
    {
        const bool branch_taken_0x3204fc = (GPR_U64(ctx, 22) == GPR_U64(ctx, 2));
        if (branch_taken_0x3204fc) {
            ctx->pc = 0x320500u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3204FCu;
            // 0x320500: 0x8fa201a0  lw          $v0, 0x1A0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x320540u;
            goto label_320540;
        }
    }
    ctx->pc = 0x320504u;
label_320504:
    // 0x320504: 0x52c00003  beql        $s6, $zero, . + 4 + (0x3 << 2)
label_320508:
    if (ctx->pc == 0x320508u) {
        ctx->pc = 0x320508u;
            // 0x320508: 0x8fa201a0  lw          $v0, 0x1A0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
        ctx->pc = 0x32050Cu;
        goto label_32050c;
    }
    ctx->pc = 0x320504u;
    {
        const bool branch_taken_0x320504 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x320504) {
            ctx->pc = 0x320508u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x320504u;
            // 0x320508: 0x8fa201a0  lw          $v0, 0x1A0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x320514u;
            goto label_320514;
        }
    }
    ctx->pc = 0x32050Cu;
label_32050c:
    // 0x32050c: 0x10000023  b           . + 4 + (0x23 << 2)
label_320510:
    if (ctx->pc == 0x320510u) {
        ctx->pc = 0x320510u;
            // 0x320510: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->pc = 0x320514u;
        goto label_320514;
    }
    ctx->pc = 0x32050Cu;
    {
        const bool branch_taken_0x32050c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x320510u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32050Cu;
            // 0x320510: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32050c) {
            ctx->pc = 0x32059Cu;
            goto label_32059c;
        }
    }
    ctx->pc = 0x320514u;
label_320514:
    // 0x320514: 0x562821  addu        $a1, $v0, $s6
    ctx->pc = 0x320514u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_320518:
    // 0x320518: 0x93a20150  lbu         $v0, 0x150($sp)
    ctx->pc = 0x320518u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 336)));
label_32051c:
    // 0x32051c: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x32051cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_320520:
    // 0x320520: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x320520u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_320524:
    // 0x320524: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x320524u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_320528:
    // 0x320528: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x320528u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_32052c:
    // 0x32052c: 0x24a20002  addiu       $v0, $a1, 0x2
    ctx->pc = 0x32052cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
label_320530:
    // 0x320530: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x320530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_320534:
    // 0x320534: 0x828821  addu        $s1, $a0, $v0
    ctx->pc = 0x320534u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_320538:
    // 0x320538: 0x10000017  b           . + 4 + (0x17 << 2)
label_32053c:
    if (ctx->pc == 0x32053Cu) {
        ctx->pc = 0x32053Cu;
            // 0x32053c: 0x85b821  addu        $s7, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->pc = 0x320540u;
        goto label_320540;
    }
    ctx->pc = 0x320538u;
    {
        const bool branch_taken_0x320538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32053Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x320538u;
            // 0x32053c: 0x85b821  addu        $s7, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320538) {
            ctx->pc = 0x320598u;
            goto label_320598;
        }
    }
    ctx->pc = 0x320540u;
label_320540:
    // 0x320540: 0x562821  addu        $a1, $v0, $s6
    ctx->pc = 0x320540u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_320544:
    // 0x320544: 0x93a20150  lbu         $v0, 0x150($sp)
    ctx->pc = 0x320544u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 336)));
label_320548:
    // 0x320548: 0x24a3ffff  addiu       $v1, $a1, -0x1
    ctx->pc = 0x320548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_32054c:
    // 0x32054c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x32054cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_320550:
    // 0x320550: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x320550u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_320554:
    // 0x320554: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x320554u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_320558:
    // 0x320558: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x320558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_32055c:
    // 0x32055c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x32055cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_320560:
    // 0x320560: 0x828821  addu        $s1, $a0, $v0
    ctx->pc = 0x320560u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_320564:
    // 0x320564: 0x1000000c  b           . + 4 + (0xC << 2)
label_320568:
    if (ctx->pc == 0x320568u) {
        ctx->pc = 0x320568u;
            // 0x320568: 0x85b821  addu        $s7, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->pc = 0x32056Cu;
        goto label_32056c;
    }
    ctx->pc = 0x320564u;
    {
        const bool branch_taken_0x320564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x320568u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x320564u;
            // 0x320568: 0x85b821  addu        $s7, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320564) {
            ctx->pc = 0x320598u;
            goto label_320598;
        }
    }
    ctx->pc = 0x32056Cu;
label_32056c:
    // 0x32056c: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x32056cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_320570:
    // 0x320570: 0x562821  addu        $a1, $v0, $s6
    ctx->pc = 0x320570u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_320574:
    // 0x320574: 0x93a20150  lbu         $v0, 0x150($sp)
    ctx->pc = 0x320574u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 336)));
label_320578:
    // 0x320578: 0x24a3fffe  addiu       $v1, $a1, -0x2
    ctx->pc = 0x320578u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967294));
label_32057c:
    // 0x32057c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x32057cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_320580:
    // 0x320580: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x320580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_320584:
    // 0x320584: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x320584u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_320588:
    // 0x320588: 0x24a2ffff  addiu       $v0, $a1, -0x1
    ctx->pc = 0x320588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_32058c:
    // 0x32058c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x32058cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_320590:
    // 0x320590: 0x828821  addu        $s1, $a0, $v0
    ctx->pc = 0x320590u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_320594:
    // 0x320594: 0x85b821  addu        $s7, $a0, $a1
    ctx->pc = 0x320594u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_320598:
    // 0x320598: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x320598u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_32059c:
    // 0x32059c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x32059cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3205a0:
    // 0x3205a0: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x3205a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_3205a4:
    // 0x3205a4: 0x8fa30200  lw          $v1, 0x200($sp)
    ctx->pc = 0x3205a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
label_3205a8:
    // 0x3205a8: 0x8c450210  lw          $a1, 0x210($v0)
    ctx->pc = 0x3205a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 528)));
label_3205ac:
    // 0x3205ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3205acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3205b0:
    // 0x3205b0: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x3205b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_3205b4:
    // 0x3205b4: 0xc123944  jal         func_48E510
label_3205b8:
    if (ctx->pc == 0x3205B8u) {
        ctx->pc = 0x3205B8u;
            // 0x3205b8: 0xafa20120  sw          $v0, 0x120($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 2));
        ctx->pc = 0x3205BCu;
        goto label_3205bc;
    }
    ctx->pc = 0x3205B4u;
    SET_GPR_U32(ctx, 31, 0x3205BCu);
    ctx->pc = 0x3205B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3205B4u;
            // 0x3205b8: 0xafa20120  sw          $v0, 0x120($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3205BCu; }
        if (ctx->pc != 0x3205BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3205BCu; }
        if (ctx->pc != 0x3205BCu) { return; }
    }
    ctx->pc = 0x3205BCu;
label_3205bc:
    // 0x3205bc: 0x8fa50120  lw          $a1, 0x120($sp)
    ctx->pc = 0x3205bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_3205c0:
    // 0x3205c0: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x3205c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3205c4:
    // 0x3205c4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3205c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3205c8:
    // 0x3205c8: 0xc123654  jal         func_48D950
label_3205cc:
    if (ctx->pc == 0x3205CCu) {
        ctx->pc = 0x3205CCu;
            // 0x3205cc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3205D0u;
        goto label_3205d0;
    }
    ctx->pc = 0x3205C8u;
    SET_GPR_U32(ctx, 31, 0x3205D0u);
    ctx->pc = 0x3205CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3205C8u;
            // 0x3205cc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3205D0u; }
        if (ctx->pc != 0x3205D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3205D0u; }
        if (ctx->pc != 0x3205D0u) { return; }
    }
    ctx->pc = 0x3205D0u;
label_3205d0:
    // 0x3205d0: 0x8fa30204  lw          $v1, 0x204($sp)
    ctx->pc = 0x3205d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 516)));
label_3205d4:
    // 0x3205d4: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x3205d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_3205d8:
    // 0x3205d8: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x3205d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_3205dc:
    // 0x3205dc: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x3205dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3205e0:
    // 0x3205e0: 0x8c450210  lw          $a1, 0x210($v0)
    ctx->pc = 0x3205e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 528)));
label_3205e4:
    // 0x3205e4: 0x8c710008  lw          $s1, 0x8($v1)
    ctx->pc = 0x3205e4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_3205e8:
    // 0x3205e8: 0xc123944  jal         func_48E510
label_3205ec:
    if (ctx->pc == 0x3205ECu) {
        ctx->pc = 0x3205ECu;
            // 0x3205ec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3205F0u;
        goto label_3205f0;
    }
    ctx->pc = 0x3205E8u;
    SET_GPR_U32(ctx, 31, 0x3205F0u);
    ctx->pc = 0x3205ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3205E8u;
            // 0x3205ec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3205F0u; }
        if (ctx->pc != 0x3205F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3205F0u; }
        if (ctx->pc != 0x3205F0u) { return; }
    }
    ctx->pc = 0x3205F0u;
label_3205f0:
    // 0x3205f0: 0x8fa4013c  lw          $a0, 0x13C($sp)
    ctx->pc = 0x3205f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
label_3205f4:
    // 0x3205f4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3205f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3205f8:
    // 0x3205f8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3205f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3205fc:
    // 0x3205fc: 0xc123654  jal         func_48D950
label_320600:
    if (ctx->pc == 0x320600u) {
        ctx->pc = 0x320600u;
            // 0x320600: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x320604u;
        goto label_320604;
    }
    ctx->pc = 0x3205FCu;
    SET_GPR_U32(ctx, 31, 0x320604u);
    ctx->pc = 0x320600u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3205FCu;
            // 0x320600: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320604u; }
        if (ctx->pc != 0x320604u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320604u; }
        if (ctx->pc != 0x320604u) { return; }
    }
    ctx->pc = 0x320604u;
label_320604:
    // 0x320604: 0x171080  sll         $v0, $s7, 2
    ctx->pc = 0x320604u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
label_320608:
    // 0x320608: 0x8fa30208  lw          $v1, 0x208($sp)
    ctx->pc = 0x320608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
label_32060c:
    // 0x32060c: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x32060cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_320610:
    // 0x320610: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x320610u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_320614:
    // 0x320614: 0x8c510210  lw          $s1, 0x210($v0)
    ctx->pc = 0x320614u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 528)));
label_320618:
    // 0x320618: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x320618u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32061c:
    // 0x32061c: 0x8c770008  lw          $s7, 0x8($v1)
    ctx->pc = 0x32061cu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_320620:
    // 0x320620: 0xc123944  jal         func_48E510
label_320624:
    if (ctx->pc == 0x320624u) {
        ctx->pc = 0x320624u;
            // 0x320624: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x320628u;
        goto label_320628;
    }
    ctx->pc = 0x320620u;
    SET_GPR_U32(ctx, 31, 0x320628u);
    ctx->pc = 0x320624u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x320620u;
            // 0x320624: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320628u; }
        if (ctx->pc != 0x320628u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320628u; }
        if (ctx->pc != 0x320628u) { return; }
    }
    ctx->pc = 0x320628u;
label_320628:
    // 0x320628: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x320628u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_32062c:
    // 0x32062c: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x32062cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_320630:
    // 0x320630: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x320630u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_320634:
    // 0x320634: 0xc123654  jal         func_48D950
label_320638:
    if (ctx->pc == 0x320638u) {
        ctx->pc = 0x320638u;
            // 0x320638: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32063Cu;
        goto label_32063c;
    }
    ctx->pc = 0x320634u;
    SET_GPR_U32(ctx, 31, 0x32063Cu);
    ctx->pc = 0x320638u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x320634u;
            // 0x320638: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32063Cu; }
        if (ctx->pc != 0x32063Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32063Cu; }
        if (ctx->pc != 0x32063Cu) { return; }
    }
    ctx->pc = 0x32063Cu;
label_32063c:
    // 0x32063c: 0x8fa2020c  lw          $v0, 0x20C($sp)
    ctx->pc = 0x32063cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 524)));
label_320640:
    // 0x320640: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x320640u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_320644:
    // 0x320644: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x320644u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_320648:
    // 0x320648: 0x8c510008  lw          $s1, 0x8($v0)
    ctx->pc = 0x320648u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_32064c:
    // 0x32064c: 0xc123944  jal         func_48E510
label_320650:
    if (ctx->pc == 0x320650u) {
        ctx->pc = 0x320650u;
            // 0x320650: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x320654u;
        goto label_320654;
    }
    ctx->pc = 0x32064Cu;
    SET_GPR_U32(ctx, 31, 0x320654u);
    ctx->pc = 0x320650u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32064Cu;
            // 0x320650: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320654u; }
        if (ctx->pc != 0x320654u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320654u; }
        if (ctx->pc != 0x320654u) { return; }
    }
    ctx->pc = 0x320654u;
label_320654:
    // 0x320654: 0x8fa40134  lw          $a0, 0x134($sp)
    ctx->pc = 0x320654u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
label_320658:
    // 0x320658: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x320658u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_32065c:
    // 0x32065c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x32065cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_320660:
    // 0x320660: 0xc123654  jal         func_48D950
label_320664:
    if (ctx->pc == 0x320664u) {
        ctx->pc = 0x320664u;
            // 0x320664: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x320668u;
        goto label_320668;
    }
    ctx->pc = 0x320660u;
    SET_GPR_U32(ctx, 31, 0x320668u);
    ctx->pc = 0x320664u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x320660u;
            // 0x320664: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320668u; }
        if (ctx->pc != 0x320668u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320668u; }
        if (ctx->pc != 0x320668u) { return; }
    }
    ctx->pc = 0x320668u;
label_320668:
    // 0x320668: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x320668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_32066c:
    // 0x32066c: 0x52c20034  beql        $s6, $v0, . + 4 + (0x34 << 2)
label_320670:
    if (ctx->pc == 0x320670u) {
        ctx->pc = 0x320670u;
            // 0x320670: 0x8fa204b0  lw          $v0, 0x4B0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1200)));
        ctx->pc = 0x320674u;
        goto label_320674;
    }
    ctx->pc = 0x32066Cu;
    {
        const bool branch_taken_0x32066c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 2));
        if (branch_taken_0x32066c) {
            ctx->pc = 0x320670u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32066Cu;
            // 0x320670: 0x8fa204b0  lw          $v0, 0x4B0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1200)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x320740u;
            goto label_320740;
        }
    }
    ctx->pc = 0x320674u;
label_320674:
    // 0x320674: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x320674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_320678:
    // 0x320678: 0x52c2001b  beql        $s6, $v0, . + 4 + (0x1B << 2)
label_32067c:
    if (ctx->pc == 0x32067Cu) {
        ctx->pc = 0x32067Cu;
            // 0x32067c: 0x8fa204b0  lw          $v0, 0x4B0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1200)));
        ctx->pc = 0x320680u;
        goto label_320680;
    }
    ctx->pc = 0x320678u;
    {
        const bool branch_taken_0x320678 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 2));
        if (branch_taken_0x320678) {
            ctx->pc = 0x32067Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x320678u;
            // 0x32067c: 0x8fa204b0  lw          $v0, 0x4B0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1200)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3206E8u;
            goto label_3206e8;
        }
    }
    ctx->pc = 0x320680u;
label_320680:
    // 0x320680: 0x52c00003  beql        $s6, $zero, . + 4 + (0x3 << 2)
label_320684:
    if (ctx->pc == 0x320684u) {
        ctx->pc = 0x320684u;
            // 0x320684: 0x32a200ff  andi        $v0, $s5, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x320688u;
        goto label_320688;
    }
    ctx->pc = 0x320680u;
    {
        const bool branch_taken_0x320680 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x320680) {
            ctx->pc = 0x320684u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x320680u;
            // 0x320684: 0x32a200ff  andi        $v0, $s5, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
            ctx->pc = 0x320690u;
            goto label_320690;
        }
    }
    ctx->pc = 0x320688u;
label_320688:
    // 0x320688: 0x10000042  b           . + 4 + (0x42 << 2)
label_32068c:
    if (ctx->pc == 0x32068Cu) {
        ctx->pc = 0x32068Cu;
            // 0x32068c: 0x27a304a0  addiu       $v1, $sp, 0x4A0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1184));
        ctx->pc = 0x320690u;
        goto label_320690;
    }
    ctx->pc = 0x320688u;
    {
        const bool branch_taken_0x320688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32068Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x320688u;
            // 0x32068c: 0x27a304a0  addiu       $v1, $sp, 0x4A0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1184));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320688) {
            ctx->pc = 0x320794u;
            goto label_320794;
        }
    }
    ctx->pc = 0x320690u;
label_320690:
    // 0x320690: 0x8fa304b0  lw          $v1, 0x4B0($sp)
    ctx->pc = 0x320690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1200)));
label_320694:
    // 0x320694: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x320694u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_320698:
    // 0x320698: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x320698u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_32069c:
    // 0x32069c: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x32069cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_3206a0:
    // 0x3206a0: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x3206a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_3206a4:
    // 0x3206a4: 0x8c460258  lw          $a2, 0x258($v0)
    ctx->pc = 0x3206a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 600)));
label_3206a8:
    // 0x3206a8: 0xc123654  jal         func_48D950
label_3206ac:
    if (ctx->pc == 0x3206ACu) {
        ctx->pc = 0x3206ACu;
            // 0x3206ac: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3206B0u;
        goto label_3206b0;
    }
    ctx->pc = 0x3206A8u;
    SET_GPR_U32(ctx, 31, 0x3206B0u);
    ctx->pc = 0x3206ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3206A8u;
            // 0x3206ac: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3206B0u; }
        if (ctx->pc != 0x3206B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3206B0u; }
        if (ctx->pc != 0x3206B0u) { return; }
    }
    ctx->pc = 0x3206B0u;
label_3206b0:
    // 0x3206b0: 0x8fa204b4  lw          $v0, 0x4B4($sp)
    ctx->pc = 0x3206b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1204)));
label_3206b4:
    // 0x3206b4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3206b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3206b8:
    // 0x3206b8: 0x8fa60250  lw          $a2, 0x250($sp)
    ctx->pc = 0x3206b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
label_3206bc:
    // 0x3206bc: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x3206bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3206c0:
    // 0x3206c0: 0xc123654  jal         func_48D950
label_3206c4:
    if (ctx->pc == 0x3206C4u) {
        ctx->pc = 0x3206C4u;
            // 0x3206c4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3206C8u;
        goto label_3206c8;
    }
    ctx->pc = 0x3206C0u;
    SET_GPR_U32(ctx, 31, 0x3206C8u);
    ctx->pc = 0x3206C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3206C0u;
            // 0x3206c4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3206C8u; }
        if (ctx->pc != 0x3206C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3206C8u; }
        if (ctx->pc != 0x3206C8u) { return; }
    }
    ctx->pc = 0x3206C8u;
label_3206c8:
    // 0x3206c8: 0x8fa204b8  lw          $v0, 0x4B8($sp)
    ctx->pc = 0x3206c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1208)));
label_3206cc:
    // 0x3206cc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3206ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3206d0:
    // 0x3206d0: 0x8fa60254  lw          $a2, 0x254($sp)
    ctx->pc = 0x3206d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 596)));
label_3206d4:
    // 0x3206d4: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x3206d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3206d8:
    // 0x3206d8: 0xc123654  jal         func_48D950
label_3206dc:
    if (ctx->pc == 0x3206DCu) {
        ctx->pc = 0x3206DCu;
            // 0x3206dc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3206E0u;
        goto label_3206e0;
    }
    ctx->pc = 0x3206D8u;
    SET_GPR_U32(ctx, 31, 0x3206E0u);
    ctx->pc = 0x3206DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3206D8u;
            // 0x3206dc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3206E0u; }
        if (ctx->pc != 0x3206E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3206E0u; }
        if (ctx->pc != 0x3206E0u) { return; }
    }
    ctx->pc = 0x3206E0u;
label_3206e0:
    // 0x3206e0: 0x1000002b  b           . + 4 + (0x2B << 2)
label_3206e4:
    if (ctx->pc == 0x3206E4u) {
        ctx->pc = 0x3206E8u;
        goto label_3206e8;
    }
    ctx->pc = 0x3206E0u;
    {
        const bool branch_taken_0x3206e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3206e0) {
            ctx->pc = 0x320790u;
            goto label_320790;
        }
    }
    ctx->pc = 0x3206E8u;
label_3206e8:
    // 0x3206e8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3206e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3206ec:
    // 0x3206ec: 0x8fa60250  lw          $a2, 0x250($sp)
    ctx->pc = 0x3206ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
label_3206f0:
    // 0x3206f0: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x3206f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3206f4:
    // 0x3206f4: 0xc123654  jal         func_48D950
label_3206f8:
    if (ctx->pc == 0x3206F8u) {
        ctx->pc = 0x3206F8u;
            // 0x3206f8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3206FCu;
        goto label_3206fc;
    }
    ctx->pc = 0x3206F4u;
    SET_GPR_U32(ctx, 31, 0x3206FCu);
    ctx->pc = 0x3206F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3206F4u;
            // 0x3206f8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3206FCu; }
        if (ctx->pc != 0x3206FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3206FCu; }
        if (ctx->pc != 0x3206FCu) { return; }
    }
    ctx->pc = 0x3206FCu;
label_3206fc:
    // 0x3206fc: 0x32a200ff  andi        $v0, $s5, 0xFF
    ctx->pc = 0x3206fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
label_320700:
    // 0x320700: 0x8fa304b4  lw          $v1, 0x4B4($sp)
    ctx->pc = 0x320700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1204)));
label_320704:
    // 0x320704: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x320704u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_320708:
    // 0x320708: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x320708u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_32070c:
    // 0x32070c: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x32070cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_320710:
    // 0x320710: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x320710u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_320714:
    // 0x320714: 0x8c460258  lw          $a2, 0x258($v0)
    ctx->pc = 0x320714u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 600)));
label_320718:
    // 0x320718: 0xc123654  jal         func_48D950
label_32071c:
    if (ctx->pc == 0x32071Cu) {
        ctx->pc = 0x32071Cu;
            // 0x32071c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x320720u;
        goto label_320720;
    }
    ctx->pc = 0x320718u;
    SET_GPR_U32(ctx, 31, 0x320720u);
    ctx->pc = 0x32071Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x320718u;
            // 0x32071c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320720u; }
        if (ctx->pc != 0x320720u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320720u; }
        if (ctx->pc != 0x320720u) { return; }
    }
    ctx->pc = 0x320720u;
label_320720:
    // 0x320720: 0x8fa204b8  lw          $v0, 0x4B8($sp)
    ctx->pc = 0x320720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1208)));
label_320724:
    // 0x320724: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x320724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_320728:
    // 0x320728: 0x8fa60254  lw          $a2, 0x254($sp)
    ctx->pc = 0x320728u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 596)));
label_32072c:
    // 0x32072c: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x32072cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_320730:
    // 0x320730: 0xc123654  jal         func_48D950
label_320734:
    if (ctx->pc == 0x320734u) {
        ctx->pc = 0x320734u;
            // 0x320734: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x320738u;
        goto label_320738;
    }
    ctx->pc = 0x320730u;
    SET_GPR_U32(ctx, 31, 0x320738u);
    ctx->pc = 0x320734u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x320730u;
            // 0x320734: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320738u; }
        if (ctx->pc != 0x320738u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320738u; }
        if (ctx->pc != 0x320738u) { return; }
    }
    ctx->pc = 0x320738u;
label_320738:
    // 0x320738: 0x10000015  b           . + 4 + (0x15 << 2)
label_32073c:
    if (ctx->pc == 0x32073Cu) {
        ctx->pc = 0x320740u;
        goto label_320740;
    }
    ctx->pc = 0x320738u;
    {
        const bool branch_taken_0x320738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x320738) {
            ctx->pc = 0x320790u;
            goto label_320790;
        }
    }
    ctx->pc = 0x320740u;
label_320740:
    // 0x320740: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x320740u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_320744:
    // 0x320744: 0x8fa60250  lw          $a2, 0x250($sp)
    ctx->pc = 0x320744u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
label_320748:
    // 0x320748: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x320748u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_32074c:
    // 0x32074c: 0xc123654  jal         func_48D950
label_320750:
    if (ctx->pc == 0x320750u) {
        ctx->pc = 0x320750u;
            // 0x320750: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x320754u;
        goto label_320754;
    }
    ctx->pc = 0x32074Cu;
    SET_GPR_U32(ctx, 31, 0x320754u);
    ctx->pc = 0x320750u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32074Cu;
            // 0x320750: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320754u; }
        if (ctx->pc != 0x320754u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320754u; }
        if (ctx->pc != 0x320754u) { return; }
    }
    ctx->pc = 0x320754u;
label_320754:
    // 0x320754: 0x8fa204b4  lw          $v0, 0x4B4($sp)
    ctx->pc = 0x320754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1204)));
label_320758:
    // 0x320758: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x320758u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_32075c:
    // 0x32075c: 0x8fa60254  lw          $a2, 0x254($sp)
    ctx->pc = 0x32075cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 596)));
label_320760:
    // 0x320760: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x320760u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_320764:
    // 0x320764: 0xc123654  jal         func_48D950
label_320768:
    if (ctx->pc == 0x320768u) {
        ctx->pc = 0x320768u;
            // 0x320768: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32076Cu;
        goto label_32076c;
    }
    ctx->pc = 0x320764u;
    SET_GPR_U32(ctx, 31, 0x32076Cu);
    ctx->pc = 0x320768u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x320764u;
            // 0x320768: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32076Cu; }
        if (ctx->pc != 0x32076Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32076Cu; }
        if (ctx->pc != 0x32076Cu) { return; }
    }
    ctx->pc = 0x32076Cu;
label_32076c:
    // 0x32076c: 0x32a200ff  andi        $v0, $s5, 0xFF
    ctx->pc = 0x32076cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
label_320770:
    // 0x320770: 0x8fa304b8  lw          $v1, 0x4B8($sp)
    ctx->pc = 0x320770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1208)));
label_320774:
    // 0x320774: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x320774u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_320778:
    // 0x320778: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x320778u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_32077c:
    // 0x32077c: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x32077cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_320780:
    // 0x320780: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x320780u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_320784:
    // 0x320784: 0x8c460258  lw          $a2, 0x258($v0)
    ctx->pc = 0x320784u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 600)));
label_320788:
    // 0x320788: 0xc123654  jal         func_48D950
label_32078c:
    if (ctx->pc == 0x32078Cu) {
        ctx->pc = 0x32078Cu;
            // 0x32078c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x320790u;
        goto label_320790;
    }
    ctx->pc = 0x320788u;
    SET_GPR_U32(ctx, 31, 0x320790u);
    ctx->pc = 0x32078Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x320788u;
            // 0x32078c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320790u; }
        if (ctx->pc != 0x320790u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320790u; }
        if (ctx->pc != 0x320790u) { return; }
    }
    ctx->pc = 0x320790u;
label_320790:
    // 0x320790: 0x27a304a0  addiu       $v1, $sp, 0x4A0
    ctx->pc = 0x320790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1184));
label_320794:
    // 0x320794: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_320798:
    if (ctx->pc == 0x320798u) {
        ctx->pc = 0x320798u;
            // 0x320798: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->pc = 0x32079Cu;
        goto label_32079c;
    }
    ctx->pc = 0x320794u;
    {
        const bool branch_taken_0x320794 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x320798u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x320794u;
            // 0x320798: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320794) {
            ctx->pc = 0x3207B8u;
            goto label_3207b8;
        }
    }
    ctx->pc = 0x32079Cu;
label_32079c:
    // 0x32079c: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x32079cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_3207a0:
    // 0x3207a0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3207a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3207a4:
    // 0x3207a4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3207a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3207a8:
    // 0x3207a8: 0x0  nop
    ctx->pc = 0x3207a8u;
    // NOP
label_3207ac:
    // 0x3207ac: 0x0  nop
    ctx->pc = 0x3207acu;
    // NOP
label_3207b0:
    // 0x3207b0: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_3207b4:
    if (ctx->pc == 0x3207B4u) {
        ctx->pc = 0x3207B8u;
        goto label_3207b8;
    }
    ctx->pc = 0x3207B0u;
    {
        const bool branch_taken_0x3207b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3207b0) {
            ctx->pc = 0x32079Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_32079c;
        }
    }
    ctx->pc = 0x3207B8u;
label_3207b8:
    // 0x3207b8: 0x93a20150  lbu         $v0, 0x150($sp)
    ctx->pc = 0x3207b8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 336)));
label_3207bc:
    // 0x3207bc: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x3207bcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3207c0:
    // 0x3207c0: 0x27be04a0  addiu       $fp, $sp, 0x4A0
    ctx->pc = 0x3207c0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 1184));
label_3207c4:
    // 0x3207c4: 0x27b104c0  addiu       $s1, $sp, 0x4C0
    ctx->pc = 0x3207c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 1216));
label_3207c8:
    // 0x3207c8: 0x2202b  sltu        $a0, $zero, $v0
    ctx->pc = 0x3207c8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3207cc:
    // 0x3207cc: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x3207ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_3207d0:
    // 0x3207d0: 0x38840001  xori        $a0, $a0, 0x1
    ctx->pc = 0x3207d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
label_3207d4:
    // 0x3207d4: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x3207d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_3207d8:
    // 0x3207d8: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x3207d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3207dc:
    // 0x3207dc: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x3207dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_3207e0:
    // 0x3207e0: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x3207e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_3207e4:
    // 0x3207e4: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x3207e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_3207e8:
    // 0x3207e8: 0xafa404a4  sw          $a0, 0x4A4($sp)
    ctx->pc = 0x3207e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1188), GPR_U32(ctx, 4));
label_3207ec:
    // 0x3207ec: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x3207ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_3207f0:
    // 0x3207f0: 0xafa304a8  sw          $v1, 0x4A8($sp)
    ctx->pc = 0x3207f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1192), GPR_U32(ctx, 3));
label_3207f4:
    // 0x3207f4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x3207f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_3207f8:
    // 0x3207f8: 0xafa204a0  sw          $v0, 0x4A0($sp)
    ctx->pc = 0x3207f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1184), GPR_U32(ctx, 2));
label_3207fc:
    // 0x3207fc: 0x1310c0  sll         $v0, $s3, 3
    ctx->pc = 0x3207fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
label_320800:
    // 0x320800: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x320800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_320804:
    // 0x320804: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x320804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_320808:
    // 0x320808: 0x2455ffff  addiu       $s5, $v0, -0x1
    ctx->pc = 0x320808u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_32080c:
    // 0x32080c: 0x6a10008  bgez        $s5, . + 4 + (0x8 << 2)
label_320810:
    if (ctx->pc == 0x320810u) {
        ctx->pc = 0x320814u;
        goto label_320814;
    }
    ctx->pc = 0x32080Cu;
    {
        const bool branch_taken_0x32080c = (GPR_S32(ctx, 21) >= 0);
        if (branch_taken_0x32080c) {
            ctx->pc = 0x320830u;
            goto label_320830;
        }
    }
    ctx->pc = 0x320814u;
label_320814:
    // 0x320814: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x320814u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_320818:
    // 0x320818: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x320818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_32081c:
    // 0x32081c: 0x8cc50008  lw          $a1, 0x8($a2)
    ctx->pc = 0x32081cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_320820:
    // 0x320820: 0xc123654  jal         func_48D950
label_320824:
    if (ctx->pc == 0x320824u) {
        ctx->pc = 0x320824u;
            // 0x320824: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x320828u;
        goto label_320828;
    }
    ctx->pc = 0x320820u;
    SET_GPR_U32(ctx, 31, 0x320828u);
    ctx->pc = 0x320824u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x320820u;
            // 0x320824: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320828u; }
        if (ctx->pc != 0x320828u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320828u; }
        if (ctx->pc != 0x320828u) { return; }
    }
    ctx->pc = 0x320828u;
label_320828:
    // 0x320828: 0x10000057  b           . + 4 + (0x57 << 2)
label_32082c:
    if (ctx->pc == 0x32082Cu) {
        ctx->pc = 0x320830u;
        goto label_320830;
    }
    ctx->pc = 0x320828u;
    {
        const bool branch_taken_0x320828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x320828) {
            ctx->pc = 0x320988u;
            goto label_320988;
        }
    }
    ctx->pc = 0x320830u;
label_320830:
    // 0x320830: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x320830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_320834:
    // 0x320834: 0x2a21804  sllv        $v1, $v0, $s5
    ctx->pc = 0x320834u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 21) & 0x1F));
label_320838:
    // 0x320838: 0x26840048  addiu       $a0, $s4, 0x48
    ctx->pc = 0x320838u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 72));
label_32083c:
    // 0x32083c: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x32083cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_320840:
    // 0x320840: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x320840u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_320844:
    // 0x320844: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x320844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_320848:
    // 0x320848: 0xafa200f0  sw          $v0, 0xF0($sp)
    ctx->pc = 0x320848u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
label_32084c:
    // 0x32084c: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x32084cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_320850:
    // 0x320850: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x320850u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_320854:
    // 0x320854: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x320854u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_320858:
    // 0x320858: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x320858u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_32085c:
    // 0x32085c: 0xc0b90e0  jal         func_2E4380
label_320860:
    if (ctx->pc == 0x320860u) {
        ctx->pc = 0x320860u;
            // 0x320860: 0x7fa200a0  sq          $v0, 0xA0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
        ctx->pc = 0x320864u;
        goto label_320864;
    }
    ctx->pc = 0x32085Cu;
    SET_GPR_U32(ctx, 31, 0x320864u);
    ctx->pc = 0x320860u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32085Cu;
            // 0x320860: 0x7fa200a0  sq          $v0, 0xA0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4380u;
    if (runtime->hasFunction(0x2E4380u)) {
        auto targetFn = runtime->lookupFunction(0x2E4380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320864u; }
        if (ctx->pc != 0x320864u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4380_0x2e4380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320864u; }
        if (ctx->pc != 0x320864u) { return; }
    }
    ctx->pc = 0x320864u;
label_320864:
    // 0x320864: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x320864u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_320868:
    // 0x320868: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
label_32086c:
    if (ctx->pc == 0x32086Cu) {
        ctx->pc = 0x320870u;
        goto label_320870;
    }
    ctx->pc = 0x320868u;
    {
        const bool branch_taken_0x320868 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x320868) {
            ctx->pc = 0x320940u;
            goto label_320940;
        }
    }
    ctx->pc = 0x320870u;
label_320870:
    // 0x320870: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x320870u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_320874:
    // 0x320874: 0xc0b90e0  jal         func_2E4380
label_320878:
    if (ctx->pc == 0x320878u) {
        ctx->pc = 0x320878u;
            // 0x320878: 0x2684003c  addiu       $a0, $s4, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 60));
        ctx->pc = 0x32087Cu;
        goto label_32087c;
    }
    ctx->pc = 0x320874u;
    SET_GPR_U32(ctx, 31, 0x32087Cu);
    ctx->pc = 0x320878u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x320874u;
            // 0x320878: 0x2684003c  addiu       $a0, $s4, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4380u;
    if (runtime->hasFunction(0x2E4380u)) {
        auto targetFn = runtime->lookupFunction(0x2E4380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32087Cu; }
        if (ctx->pc != 0x32087Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4380_0x2e4380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32087Cu; }
        if (ctx->pc != 0x32087Cu) { return; }
    }
    ctx->pc = 0x32087Cu;
label_32087c:
    // 0x32087c: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_320880:
    if (ctx->pc == 0x320880u) {
        ctx->pc = 0x320884u;
        goto label_320884;
    }
    ctx->pc = 0x32087Cu;
    {
        const bool branch_taken_0x32087c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32087c) {
            ctx->pc = 0x320920u;
            goto label_320920;
        }
    }
    ctx->pc = 0x320884u;
label_320884:
    // 0x320884: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x320884u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_320888:
    // 0x320888: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x320888u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_32088c:
    // 0x32088c: 0x24a5c568  addiu       $a1, $a1, -0x3A98
    ctx->pc = 0x32088cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952296));
label_320890:
    // 0x320890: 0xc123944  jal         func_48E510
label_320894:
    if (ctx->pc == 0x320894u) {
        ctx->pc = 0x320894u;
            // 0x320894: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x320898u;
        goto label_320898;
    }
    ctx->pc = 0x320890u;
    SET_GPR_U32(ctx, 31, 0x320898u);
    ctx->pc = 0x320894u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x320890u;
            // 0x320894: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320898u; }
        if (ctx->pc != 0x320898u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320898u; }
        if (ctx->pc != 0x320898u) { return; }
    }
    ctx->pc = 0x320898u;
label_320898:
    // 0x320898: 0x8e850004  lw          $a1, 0x4($s4)
    ctx->pc = 0x320898u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_32089c:
    // 0x32089c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x32089cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3208a0:
    // 0x3208a0: 0x7ba300b0  lq          $v1, 0xB0($sp)
    ctx->pc = 0x3208a0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_3208a4:
    // 0x3208a4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3208a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_3208a8:
    // 0x3208a8: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x3208a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
label_3208ac:
    // 0x3208ac: 0x90650440  lbu         $a1, 0x440($v1)
    ctx->pc = 0x3208acu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1088)));
label_3208b0:
    // 0x3208b0: 0x10a40011  beq         $a1, $a0, . + 4 + (0x11 << 2)
label_3208b4:
    if (ctx->pc == 0x3208B4u) {
        ctx->pc = 0x3208B8u;
        goto label_3208b8;
    }
    ctx->pc = 0x3208B0u;
    {
        const bool branch_taken_0x3208b0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x3208b0) {
            ctx->pc = 0x3208F8u;
            goto label_3208f8;
        }
    }
    ctx->pc = 0x3208B8u;
label_3208b8:
    // 0x3208b8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3208b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3208bc:
    // 0x3208bc: 0x10a3000c  beq         $a1, $v1, . + 4 + (0xC << 2)
label_3208c0:
    if (ctx->pc == 0x3208C0u) {
        ctx->pc = 0x3208C4u;
        goto label_3208c4;
    }
    ctx->pc = 0x3208BCu;
    {
        const bool branch_taken_0x3208bc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3208bc) {
            ctx->pc = 0x3208F0u;
            goto label_3208f0;
        }
    }
    ctx->pc = 0x3208C4u;
label_3208c4:
    // 0x3208c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3208c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3208c8:
    // 0x3208c8: 0x10a30007  beq         $a1, $v1, . + 4 + (0x7 << 2)
label_3208cc:
    if (ctx->pc == 0x3208CCu) {
        ctx->pc = 0x3208D0u;
        goto label_3208d0;
    }
    ctx->pc = 0x3208C8u;
    {
        const bool branch_taken_0x3208c8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3208c8) {
            ctx->pc = 0x3208E8u;
            goto label_3208e8;
        }
    }
    ctx->pc = 0x3208D0u;
label_3208d0:
    // 0x3208d0: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_3208d4:
    if (ctx->pc == 0x3208D4u) {
        ctx->pc = 0x3208D8u;
        goto label_3208d8;
    }
    ctx->pc = 0x3208D0u;
    {
        const bool branch_taken_0x3208d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3208d0) {
            ctx->pc = 0x3208E0u;
            goto label_3208e0;
        }
    }
    ctx->pc = 0x3208D8u;
label_3208d8:
    // 0x3208d8: 0x10000009  b           . + 4 + (0x9 << 2)
label_3208dc:
    if (ctx->pc == 0x3208DCu) {
        ctx->pc = 0x3208E0u;
        goto label_3208e0;
    }
    ctx->pc = 0x3208D8u;
    {
        const bool branch_taken_0x3208d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3208d8) {
            ctx->pc = 0x320900u;
            goto label_320900;
        }
    }
    ctx->pc = 0x3208E0u;
label_3208e0:
    // 0x3208e0: 0x10000007  b           . + 4 + (0x7 << 2)
label_3208e4:
    if (ctx->pc == 0x3208E4u) {
        ctx->pc = 0x3208E4u;
            // 0x3208e4: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x3208E8u;
        goto label_3208e8;
    }
    ctx->pc = 0x3208E0u;
    {
        const bool branch_taken_0x3208e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3208E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3208E0u;
            // 0x3208e4: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3208e0) {
            ctx->pc = 0x320900u;
            goto label_320900;
        }
    }
    ctx->pc = 0x3208E8u;
label_3208e8:
    // 0x3208e8: 0x10000005  b           . + 4 + (0x5 << 2)
label_3208ec:
    if (ctx->pc == 0x3208ECu) {
        ctx->pc = 0x3208ECu;
            // 0x3208ec: 0x8fa20164  lw          $v0, 0x164($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 356)));
        ctx->pc = 0x3208F0u;
        goto label_3208f0;
    }
    ctx->pc = 0x3208E8u;
    {
        const bool branch_taken_0x3208e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3208ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3208E8u;
            // 0x3208ec: 0x8fa20164  lw          $v0, 0x164($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 356)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3208e8) {
            ctx->pc = 0x320900u;
            goto label_320900;
        }
    }
    ctx->pc = 0x3208F0u;
label_3208f0:
    // 0x3208f0: 0x10000003  b           . + 4 + (0x3 << 2)
label_3208f4:
    if (ctx->pc == 0x3208F4u) {
        ctx->pc = 0x3208F4u;
            // 0x3208f4: 0x8fa20168  lw          $v0, 0x168($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
        ctx->pc = 0x3208F8u;
        goto label_3208f8;
    }
    ctx->pc = 0x3208F0u;
    {
        const bool branch_taken_0x3208f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3208F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3208F0u;
            // 0x3208f4: 0x8fa20168  lw          $v0, 0x168($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3208f0) {
            ctx->pc = 0x320900u;
            goto label_320900;
        }
    }
    ctx->pc = 0x3208F8u;
label_3208f8:
    // 0x3208f8: 0x8fa2016c  lw          $v0, 0x16C($sp)
    ctx->pc = 0x3208f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 364)));
label_3208fc:
    // 0x3208fc: 0x0  nop
    ctx->pc = 0x3208fcu;
    // NOP
label_320900:
    // 0x320900: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x320900u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_320904:
    // 0x320904: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x320904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_320908:
    // 0x320908: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x320908u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_32090c:
    // 0x32090c: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x32090cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_320910:
    // 0x320910: 0xc123654  jal         func_48D950
label_320914:
    if (ctx->pc == 0x320914u) {
        ctx->pc = 0x320914u;
            // 0x320914: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x320918u;
        goto label_320918;
    }
    ctx->pc = 0x320910u;
    SET_GPR_U32(ctx, 31, 0x320918u);
    ctx->pc = 0x320914u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x320910u;
            // 0x320914: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320918u; }
        if (ctx->pc != 0x320918u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320918u; }
        if (ctx->pc != 0x320918u) { return; }
    }
    ctx->pc = 0x320918u;
label_320918:
    // 0x320918: 0x1000001b  b           . + 4 + (0x1B << 2)
label_32091c:
    if (ctx->pc == 0x32091Cu) {
        ctx->pc = 0x320920u;
        goto label_320920;
    }
    ctx->pc = 0x320918u;
    {
        const bool branch_taken_0x320918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x320918) {
            ctx->pc = 0x320988u;
            goto label_320988;
        }
    }
    ctx->pc = 0x320920u;
label_320920:
    // 0x320920: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x320920u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_320924:
    // 0x320924: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x320924u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_320928:
    // 0x320928: 0x8cc50008  lw          $a1, 0x8($a2)
    ctx->pc = 0x320928u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_32092c:
    // 0x32092c: 0xc123654  jal         func_48D950
label_320930:
    if (ctx->pc == 0x320930u) {
        ctx->pc = 0x320930u;
            // 0x320930: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x320934u;
        goto label_320934;
    }
    ctx->pc = 0x32092Cu;
    SET_GPR_U32(ctx, 31, 0x320934u);
    ctx->pc = 0x320930u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32092Cu;
            // 0x320930: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320934u; }
        if (ctx->pc != 0x320934u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320934u; }
        if (ctx->pc != 0x320934u) { return; }
    }
    ctx->pc = 0x320934u;
label_320934:
    // 0x320934: 0x10000014  b           . + 4 + (0x14 << 2)
label_320938:
    if (ctx->pc == 0x320938u) {
        ctx->pc = 0x32093Cu;
        goto label_32093c;
    }
    ctx->pc = 0x320934u;
    {
        const bool branch_taken_0x320934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x320934) {
            ctx->pc = 0x320988u;
            goto label_320988;
        }
    }
    ctx->pc = 0x32093Cu;
label_32093c:
    // 0x32093c: 0x0  nop
    ctx->pc = 0x32093cu;
    // NOP
label_320940:
    // 0x320940: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x320940u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_320944:
    // 0x320944: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_320948:
    if (ctx->pc == 0x320948u) {
        ctx->pc = 0x32094Cu;
        goto label_32094c;
    }
    ctx->pc = 0x320944u;
    {
        const bool branch_taken_0x320944 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x320944) {
            ctx->pc = 0x320970u;
            goto label_320970;
        }
    }
    ctx->pc = 0x32094Cu;
label_32094c:
    // 0x32094c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x32094cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_320950:
    // 0x320950: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x320950u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_320954:
    // 0x320954: 0x8fa60170  lw          $a2, 0x170($sp)
    ctx->pc = 0x320954u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_320958:
    // 0x320958: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x320958u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_32095c:
    // 0x32095c: 0xc123654  jal         func_48D950
label_320960:
    if (ctx->pc == 0x320960u) {
        ctx->pc = 0x320960u;
            // 0x320960: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x320964u;
        goto label_320964;
    }
    ctx->pc = 0x32095Cu;
    SET_GPR_U32(ctx, 31, 0x320964u);
    ctx->pc = 0x320960u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32095Cu;
            // 0x320960: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320964u; }
        if (ctx->pc != 0x320964u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320964u; }
        if (ctx->pc != 0x320964u) { return; }
    }
    ctx->pc = 0x320964u;
label_320964:
    // 0x320964: 0x10000008  b           . + 4 + (0x8 << 2)
label_320968:
    if (ctx->pc == 0x320968u) {
        ctx->pc = 0x32096Cu;
        goto label_32096c;
    }
    ctx->pc = 0x320964u;
    {
        const bool branch_taken_0x320964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x320964) {
            ctx->pc = 0x320988u;
            goto label_320988;
        }
    }
    ctx->pc = 0x32096Cu;
label_32096c:
    // 0x32096c: 0x0  nop
    ctx->pc = 0x32096cu;
    // NOP
label_320970:
    // 0x320970: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x320970u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_320974:
    // 0x320974: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x320974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_320978:
    // 0x320978: 0x8cc50008  lw          $a1, 0x8($a2)
    ctx->pc = 0x320978u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_32097c:
    // 0x32097c: 0xc123654  jal         func_48D950
label_320980:
    if (ctx->pc == 0x320980u) {
        ctx->pc = 0x320980u;
            // 0x320980: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x320984u;
        goto label_320984;
    }
    ctx->pc = 0x32097Cu;
    SET_GPR_U32(ctx, 31, 0x320984u);
    ctx->pc = 0x320980u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32097Cu;
            // 0x320980: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320984u; }
        if (ctx->pc != 0x320984u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320984u; }
        if (ctx->pc != 0x320984u) { return; }
    }
    ctx->pc = 0x320984u;
label_320984:
    // 0x320984: 0x0  nop
    ctx->pc = 0x320984u;
    // NOP
label_320988:
    // 0x320988: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x320988u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_32098c:
    // 0x32098c: 0x2ae20003  slti        $v0, $s7, 0x3
    ctx->pc = 0x32098cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)3) ? 1 : 0);
label_320990:
    // 0x320990: 0x27de0004  addiu       $fp, $fp, 0x4
    ctx->pc = 0x320990u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
label_320994:
    // 0x320994: 0x1440ff9b  bnez        $v0, . + 4 + (-0x65 << 2)
label_320998:
    if (ctx->pc == 0x320998u) {
        ctx->pc = 0x320998u;
            // 0x320998: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x32099Cu;
        goto label_32099c;
    }
    ctx->pc = 0x320994u;
    {
        const bool branch_taken_0x320994 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x320998u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x320994u;
            // 0x320998: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320994) {
            ctx->pc = 0x320804u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_320804;
        }
    }
    ctx->pc = 0x32099Cu;
label_32099c:
    // 0x32099c: 0x0  nop
    ctx->pc = 0x32099cu;
    // NOP
label_3209a0:
    // 0x3209a0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x3209a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3209a4:
    // 0x3209a4: 0x2405002d  addiu       $a1, $zero, 0x2D
    ctx->pc = 0x3209a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_3209a8:
    // 0x3209a8: 0xc1232d8  jal         func_48CB60
label_3209ac:
    if (ctx->pc == 0x3209ACu) {
        ctx->pc = 0x3209ACu;
            // 0x3209ac: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3209B0u;
        goto label_3209b0;
    }
    ctx->pc = 0x3209A8u;
    SET_GPR_U32(ctx, 31, 0x3209B0u);
    ctx->pc = 0x3209ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3209A8u;
            // 0x3209ac: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CB60u;
    if (runtime->hasFunction(0x48CB60u)) {
        auto targetFn = runtime->lookupFunction(0x48CB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3209B0u; }
        if (ctx->pc != 0x3209B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CB60_0x48cb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3209B0u; }
        if (ctx->pc != 0x3209B0u) { return; }
    }
    ctx->pc = 0x3209B0u;
label_3209b0:
    // 0x3209b0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x3209b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3209b4:
    // 0x3209b4: 0x8fa601a0  lw          $a2, 0x1A0($sp)
    ctx->pc = 0x3209b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_3209b8:
    // 0x3209b8: 0xc1232d8  jal         func_48CB60
label_3209bc:
    if (ctx->pc == 0x3209BCu) {
        ctx->pc = 0x3209BCu;
            // 0x3209bc: 0x2405002e  addiu       $a1, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->pc = 0x3209C0u;
        goto label_3209c0;
    }
    ctx->pc = 0x3209B8u;
    SET_GPR_U32(ctx, 31, 0x3209C0u);
    ctx->pc = 0x3209BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3209B8u;
            // 0x3209bc: 0x2405002e  addiu       $a1, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CB60u;
    if (runtime->hasFunction(0x48CB60u)) {
        auto targetFn = runtime->lookupFunction(0x48CB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3209C0u; }
        if (ctx->pc != 0x3209C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CB60_0x48cb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3209C0u; }
        if (ctx->pc != 0x3209C0u) { return; }
    }
    ctx->pc = 0x3209C0u;
label_3209c0:
    // 0x3209c0: 0x8fa201fc  lw          $v0, 0x1FC($sp)
    ctx->pc = 0x3209c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
label_3209c4:
    // 0x3209c4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3209c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3209c8:
    // 0x3209c8: 0x50430003  beql        $v0, $v1, . + 4 + (0x3 << 2)
label_3209cc:
    if (ctx->pc == 0x3209CCu) {
        ctx->pc = 0x3209CCu;
            // 0x3209cc: 0x7ba200e0  lq          $v0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->pc = 0x3209D0u;
        goto label_3209d0;
    }
    ctx->pc = 0x3209C8u;
    {
        const bool branch_taken_0x3209c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3209c8) {
            ctx->pc = 0x3209CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3209C8u;
            // 0x3209cc: 0x7ba200e0  lq          $v0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3209D8u;
            goto label_3209d8;
        }
    }
    ctx->pc = 0x3209D0u;
label_3209d0:
    // 0x3209d0: 0x1000000c  b           . + 4 + (0xC << 2)
label_3209d4:
    if (ctx->pc == 0x3209D4u) {
        ctx->pc = 0x3209D4u;
            // 0x3209d4: 0x8fa201a0  lw          $v0, 0x1A0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
        ctx->pc = 0x3209D8u;
        goto label_3209d8;
    }
    ctx->pc = 0x3209D0u;
    {
        const bool branch_taken_0x3209d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3209D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3209D0u;
            // 0x3209d4: 0x8fa201a0  lw          $v0, 0x1A0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3209d0) {
            ctx->pc = 0x320A04u;
            goto label_320a04;
        }
    }
    ctx->pc = 0x3209D8u;
label_3209d8:
    // 0x3209d8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_3209dc:
    if (ctx->pc == 0x3209DCu) {
        ctx->pc = 0x3209E0u;
        goto label_3209e0;
    }
    ctx->pc = 0x3209D8u;
    {
        const bool branch_taken_0x3209d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3209d8) {
            ctx->pc = 0x320A00u;
            goto label_320a00;
        }
    }
    ctx->pc = 0x3209E0u;
label_3209e0:
    // 0x3209e0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x3209e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3209e4:
    // 0x3209e4: 0x2405002d  addiu       $a1, $zero, 0x2D
    ctx->pc = 0x3209e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_3209e8:
    // 0x3209e8: 0xc1232d8  jal         func_48CB60
label_3209ec:
    if (ctx->pc == 0x3209ECu) {
        ctx->pc = 0x3209ECu;
            // 0x3209ec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3209F0u;
        goto label_3209f0;
    }
    ctx->pc = 0x3209E8u;
    SET_GPR_U32(ctx, 31, 0x3209F0u);
    ctx->pc = 0x3209ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3209E8u;
            // 0x3209ec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CB60u;
    if (runtime->hasFunction(0x48CB60u)) {
        auto targetFn = runtime->lookupFunction(0x48CB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3209F0u; }
        if (ctx->pc != 0x3209F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CB60_0x48cb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3209F0u; }
        if (ctx->pc != 0x3209F0u) { return; }
    }
    ctx->pc = 0x3209F0u;
label_3209f0:
    // 0x3209f0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x3209f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3209f4:
    // 0x3209f4: 0x2405002e  addiu       $a1, $zero, 0x2E
    ctx->pc = 0x3209f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
label_3209f8:
    // 0x3209f8: 0xc1232d8  jal         func_48CB60
label_3209fc:
    if (ctx->pc == 0x3209FCu) {
        ctx->pc = 0x3209FCu;
            // 0x3209fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x320A00u;
        goto label_320a00;
    }
    ctx->pc = 0x3209F8u;
    SET_GPR_U32(ctx, 31, 0x320A00u);
    ctx->pc = 0x3209FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3209F8u;
            // 0x3209fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CB60u;
    if (runtime->hasFunction(0x48CB60u)) {
        auto targetFn = runtime->lookupFunction(0x48CB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320A00u; }
        if (ctx->pc != 0x320A00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CB60_0x48cb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320A00u; }
        if (ctx->pc != 0x320A00u) { return; }
    }
    ctx->pc = 0x320A00u;
label_320a00:
    // 0x320a00: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x320a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_320a04:
    // 0x320a04: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
label_320a08:
    if (ctx->pc == 0x320A08u) {
        ctx->pc = 0x320A08u;
            // 0x320a08: 0x8fa201a0  lw          $v0, 0x1A0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
        ctx->pc = 0x320A0Cu;
        goto label_320a0c;
    }
    ctx->pc = 0x320A04u;
    {
        const bool branch_taken_0x320a04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x320a04) {
            ctx->pc = 0x320A08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x320A04u;
            // 0x320a08: 0x8fa201a0  lw          $v0, 0x1A0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x320A4Cu;
            goto label_320a4c;
        }
    }
    ctx->pc = 0x320A0Cu;
label_320a0c:
    // 0x320a0c: 0x16c0000e  bnez        $s6, . + 4 + (0xE << 2)
label_320a10:
    if (ctx->pc == 0x320A10u) {
        ctx->pc = 0x320A14u;
        goto label_320a14;
    }
    ctx->pc = 0x320A0Cu;
    {
        const bool branch_taken_0x320a0c = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x320a0c) {
            ctx->pc = 0x320A48u;
            goto label_320a48;
        }
    }
    ctx->pc = 0x320A14u;
label_320a14:
    // 0x320a14: 0x93a20150  lbu         $v0, 0x150($sp)
    ctx->pc = 0x320a14u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 336)));
label_320a18:
    // 0x320a18: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_320a1c:
    if (ctx->pc == 0x320A1Cu) {
        ctx->pc = 0x320A20u;
        goto label_320a20;
    }
    ctx->pc = 0x320A18u;
    {
        const bool branch_taken_0x320a18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x320a18) {
            ctx->pc = 0x320A48u;
            goto label_320a48;
        }
    }
    ctx->pc = 0x320A20u;
label_320a20:
    // 0x320a20: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x320a20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_320a24:
    // 0x320a24: 0x2405002b  addiu       $a1, $zero, 0x2B
    ctx->pc = 0x320a24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_320a28:
    // 0x320a28: 0xc1232d8  jal         func_48CB60
label_320a2c:
    if (ctx->pc == 0x320A2Cu) {
        ctx->pc = 0x320A2Cu;
            // 0x320a2c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x320A30u;
        goto label_320a30;
    }
    ctx->pc = 0x320A28u;
    SET_GPR_U32(ctx, 31, 0x320A30u);
    ctx->pc = 0x320A2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x320A28u;
            // 0x320a2c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CB60u;
    if (runtime->hasFunction(0x48CB60u)) {
        auto targetFn = runtime->lookupFunction(0x48CB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320A30u; }
        if (ctx->pc != 0x320A30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CB60_0x48cb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320A30u; }
        if (ctx->pc != 0x320A30u) { return; }
    }
    ctx->pc = 0x320A30u;
label_320a30:
    // 0x320a30: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x320a30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_320a34:
    // 0x320a34: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x320a34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_320a38:
    // 0x320a38: 0xc1232d8  jal         func_48CB60
label_320a3c:
    if (ctx->pc == 0x320A3Cu) {
        ctx->pc = 0x320A3Cu;
            // 0x320a3c: 0x2406003c  addiu       $a2, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->pc = 0x320A40u;
        goto label_320a40;
    }
    ctx->pc = 0x320A38u;
    SET_GPR_U32(ctx, 31, 0x320A40u);
    ctx->pc = 0x320A3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x320A38u;
            // 0x320a3c: 0x2406003c  addiu       $a2, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CB60u;
    if (runtime->hasFunction(0x48CB60u)) {
        auto targetFn = runtime->lookupFunction(0x48CB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320A40u; }
        if (ctx->pc != 0x320A40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CB60_0x48cb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320A40u; }
        if (ctx->pc != 0x320A40u) { return; }
    }
    ctx->pc = 0x320A40u;
label_320a40:
    // 0x320a40: 0x1000013c  b           . + 4 + (0x13C << 2)
label_320a44:
    if (ctx->pc == 0x320A44u) {
        ctx->pc = 0x320A44u;
            // 0x320a44: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x320A48u;
        goto label_320a48;
    }
    ctx->pc = 0x320A40u;
    {
        const bool branch_taken_0x320a40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x320A44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x320A40u;
            // 0x320a44: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320a40) {
            ctx->pc = 0x320F34u;
            goto label_320f34;
        }
    }
    ctx->pc = 0x320A48u;
label_320a48:
    // 0x320a48: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x320a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_320a4c:
    // 0x320a4c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x320a4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_320a50:
    // 0x320a50: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x320a50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_320a54:
    // 0x320a54: 0x561821  addu        $v1, $v0, $s6
    ctx->pc = 0x320a54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_320a58:
    // 0x320a58: 0x93a20150  lbu         $v0, 0x150($sp)
    ctx->pc = 0x320a58u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 336)));
label_320a5c:
    // 0x320a5c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x320a5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_320a60:
    // 0x320a60: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x320a60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_320a64:
    // 0x320a64: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x320a64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_320a68:
    // 0x320a68: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x320a68u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_320a6c:
    // 0x320a6c: 0xc1232d8  jal         func_48CB60
label_320a70:
    if (ctx->pc == 0x320A70u) {
        ctx->pc = 0x320A70u;
            // 0x320a70: 0x2626003c  addiu       $a2, $s1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 60));
        ctx->pc = 0x320A74u;
        goto label_320a74;
    }
    ctx->pc = 0x320A6Cu;
    SET_GPR_U32(ctx, 31, 0x320A74u);
    ctx->pc = 0x320A70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x320A6Cu;
            // 0x320a70: 0x2626003c  addiu       $a2, $s1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CB60u;
    if (runtime->hasFunction(0x48CB60u)) {
        auto targetFn = runtime->lookupFunction(0x48CB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320A74u; }
        if (ctx->pc != 0x320A74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CB60_0x48cb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320A74u; }
        if (ctx->pc != 0x320A74u) { return; }
    }
    ctx->pc = 0x320A74u;
label_320a74:
    // 0x320a74: 0x2e610011  sltiu       $at, $s3, 0x11
    ctx->pc = 0x320a74u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
label_320a78:
    // 0x320a78: 0x1020012d  beqz        $at, . + 4 + (0x12D << 2)
label_320a7c:
    if (ctx->pc == 0x320A7Cu) {
        ctx->pc = 0x320A80u;
        goto label_320a80;
    }
    ctx->pc = 0x320A78u;
    {
        const bool branch_taken_0x320a78 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x320a78) {
            ctx->pc = 0x320F30u;
            goto label_320f30;
        }
    }
    ctx->pc = 0x320A80u;
label_320a80:
    // 0x320a80: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x320a80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
label_320a84:
    // 0x320a84: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x320a84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_320a88:
    // 0x320a88: 0x2463c740  addiu       $v1, $v1, -0x38C0
    ctx->pc = 0x320a88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952768));
label_320a8c:
    // 0x320a8c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x320a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_320a90:
    // 0x320a90: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x320a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_320a94:
    // 0x320a94: 0x400008  jr          $v0
label_320a98:
    if (ctx->pc == 0x320A98u) {
        ctx->pc = 0x320A9Cu;
        goto label_320a9c;
    }
    ctx->pc = 0x320A94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x320A9Cu: goto label_320a9c;
            case 0x320AE8u: goto label_320ae8;
            case 0x320B24u: goto label_320b24;
            case 0x320B70u: goto label_320b70;
            case 0x320BC8u: goto label_320bc8;
            case 0x320C04u: goto label_320c04;
            case 0x320C50u: goto label_320c50;
            case 0x320C9Cu: goto label_320c9c;
            case 0x320CE8u: goto label_320ce8;
            case 0x320D34u: goto label_320d34;
            case 0x320D80u: goto label_320d80;
            case 0x320DCCu: goto label_320dcc;
            case 0x320E18u: goto label_320e18;
            case 0x320E64u: goto label_320e64;
            case 0x320EA0u: goto label_320ea0;
            case 0x320EECu: goto label_320eec;
            case 0x320F30u: goto label_320f30;
            default: break;
        }
        return;
    }
    ctx->pc = 0x320A9Cu;
label_320a9c:
    // 0x320a9c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x320a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_320aa0:
    // 0x320aa0: 0x52220007  beql        $s1, $v0, . + 4 + (0x7 << 2)
label_320aa4:
    if (ctx->pc == 0x320AA4u) {
        ctx->pc = 0x320AA4u;
            // 0x320aa4: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x320AA8u;
        goto label_320aa8;
    }
    ctx->pc = 0x320AA0u;
    {
        const bool branch_taken_0x320aa0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x320aa0) {
            ctx->pc = 0x320AA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x320AA0u;
            // 0x320aa4: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x320AC0u;
            goto label_320ac0;
        }
    }
    ctx->pc = 0x320AA8u;
label_320aa8:
    // 0x320aa8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x320aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_320aac:
    // 0x320aac: 0x12220003  beq         $s1, $v0, . + 4 + (0x3 << 2)
label_320ab0:
    if (ctx->pc == 0x320AB0u) {
        ctx->pc = 0x320AB4u;
        goto label_320ab4;
    }
    ctx->pc = 0x320AACu;
    {
        const bool branch_taken_0x320aac = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x320aac) {
            ctx->pc = 0x320ABCu;
            goto label_320abc;
        }
    }
    ctx->pc = 0x320AB4u;
label_320ab4:
    // 0x320ab4: 0x10000007  b           . + 4 + (0x7 << 2)
label_320ab8:
    if (ctx->pc == 0x320AB8u) {
        ctx->pc = 0x320AB8u;
            // 0x320ab8: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x320ABCu;
        goto label_320abc;
    }
    ctx->pc = 0x320AB4u;
    {
        const bool branch_taken_0x320ab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x320AB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x320AB4u;
            // 0x320ab8: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320ab4) {
            ctx->pc = 0x320AD4u;
            goto label_320ad4;
        }
    }
    ctx->pc = 0x320ABCu;
label_320abc:
    // 0x320abc: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x320abcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_320ac0:
    // 0x320ac0: 0x2405002b  addiu       $a1, $zero, 0x2B
    ctx->pc = 0x320ac0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_320ac4:
    // 0x320ac4: 0xc1232d8  jal         func_48CB60
label_320ac8:
    if (ctx->pc == 0x320AC8u) {
        ctx->pc = 0x320AC8u;
            // 0x320ac8: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x320ACCu;
        goto label_320acc;
    }
    ctx->pc = 0x320AC4u;
    SET_GPR_U32(ctx, 31, 0x320ACCu);
    ctx->pc = 0x320AC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x320AC4u;
            // 0x320ac8: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CB60u;
    if (runtime->hasFunction(0x48CB60u)) {
        auto targetFn = runtime->lookupFunction(0x48CB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320ACCu; }
        if (ctx->pc != 0x320ACCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CB60_0x48cb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320ACCu; }
        if (ctx->pc != 0x320ACCu) { return; }
    }
    ctx->pc = 0x320ACCu;
label_320acc:
    // 0x320acc: 0x10000118  b           . + 4 + (0x118 << 2)
label_320ad0:
    if (ctx->pc == 0x320AD0u) {
        ctx->pc = 0x320AD4u;
        goto label_320ad4;
    }
    ctx->pc = 0x320ACCu;
    {
        const bool branch_taken_0x320acc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x320acc) {
            ctx->pc = 0x320F30u;
            goto label_320f30;
        }
    }
    ctx->pc = 0x320AD4u;
label_320ad4:
    // 0x320ad4: 0x2405002b  addiu       $a1, $zero, 0x2B
    ctx->pc = 0x320ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_320ad8:
    // 0x320ad8: 0xc1232d8  jal         func_48CB60
label_320adc:
    if (ctx->pc == 0x320ADCu) {
        ctx->pc = 0x320ADCu;
            // 0x320adc: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x320AE0u;
        goto label_320ae0;
    }
    ctx->pc = 0x320AD8u;
    SET_GPR_U32(ctx, 31, 0x320AE0u);
    ctx->pc = 0x320ADCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x320AD8u;
            // 0x320adc: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CB60u;
    if (runtime->hasFunction(0x48CB60u)) {
        auto targetFn = runtime->lookupFunction(0x48CB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320AE0u; }
        if (ctx->pc != 0x320AE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CB60_0x48cb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320AE0u; }
        if (ctx->pc != 0x320AE0u) { return; }
    }
    ctx->pc = 0x320AE0u;
label_320ae0:
    // 0x320ae0: 0x10000113  b           . + 4 + (0x113 << 2)
label_320ae4:
    if (ctx->pc == 0x320AE4u) {
        ctx->pc = 0x320AE8u;
        goto label_320ae8;
    }
    ctx->pc = 0x320AE0u;
    {
        const bool branch_taken_0x320ae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x320ae0) {
            ctx->pc = 0x320F30u;
            goto label_320f30;
        }
    }
    ctx->pc = 0x320AE8u;
label_320ae8:
    // 0x320ae8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x320ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_320aec:
    // 0x320aec: 0x52220003  beql        $s1, $v0, . + 4 + (0x3 << 2)
label_320af0:
    if (ctx->pc == 0x320AF0u) {
        ctx->pc = 0x320AF0u;
            // 0x320af0: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x320AF4u;
        goto label_320af4;
    }
    ctx->pc = 0x320AECu;
    {
        const bool branch_taken_0x320aec = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x320aec) {
            ctx->pc = 0x320AF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x320AECu;
            // 0x320af0: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x320AFCu;
            goto label_320afc;
        }
    }
    ctx->pc = 0x320AF4u;
label_320af4:
    // 0x320af4: 0x10000006  b           . + 4 + (0x6 << 2)
label_320af8:
    if (ctx->pc == 0x320AF8u) {
        ctx->pc = 0x320AF8u;
            // 0x320af8: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x320AFCu;
        goto label_320afc;
    }
    ctx->pc = 0x320AF4u;
    {
        const bool branch_taken_0x320af4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x320AF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x320AF4u;
            // 0x320af8: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320af4) {
            ctx->pc = 0x320B10u;
            goto label_320b10;
        }
    }
    ctx->pc = 0x320AFCu;
label_320afc:
    // 0x320afc: 0x2405002b  addiu       $a1, $zero, 0x2B
    ctx->pc = 0x320afcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_320b00:
    // 0x320b00: 0xc1232d8  jal         func_48CB60
label_320b04:
    if (ctx->pc == 0x320B04u) {
        ctx->pc = 0x320B04u;
            // 0x320b04: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x320B08u;
        goto label_320b08;
    }
    ctx->pc = 0x320B00u;
    SET_GPR_U32(ctx, 31, 0x320B08u);
    ctx->pc = 0x320B04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x320B00u;
            // 0x320b04: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CB60u;
    if (runtime->hasFunction(0x48CB60u)) {
        auto targetFn = runtime->lookupFunction(0x48CB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320B08u; }
        if (ctx->pc != 0x320B08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CB60_0x48cb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320B08u; }
        if (ctx->pc != 0x320B08u) { return; }
    }
    ctx->pc = 0x320B08u;
label_320b08:
    // 0x320b08: 0x10000109  b           . + 4 + (0x109 << 2)
label_320b0c:
    if (ctx->pc == 0x320B0Cu) {
        ctx->pc = 0x320B10u;
        goto label_320b10;
    }
    ctx->pc = 0x320B08u;
    {
        const bool branch_taken_0x320b08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x320b08) {
            ctx->pc = 0x320F30u;
            goto label_320f30;
        }
    }
    ctx->pc = 0x320B10u;
label_320b10:
    // 0x320b10: 0x2405002b  addiu       $a1, $zero, 0x2B
    ctx->pc = 0x320b10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_320b14:
    // 0x320b14: 0xc1232d8  jal         func_48CB60
label_320b18:
    if (ctx->pc == 0x320B18u) {
        ctx->pc = 0x320B18u;
            // 0x320b18: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x320B1Cu;
        goto label_320b1c;
    }
    ctx->pc = 0x320B14u;
    SET_GPR_U32(ctx, 31, 0x320B1Cu);
    ctx->pc = 0x320B18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x320B14u;
            // 0x320b18: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CB60u;
    if (runtime->hasFunction(0x48CB60u)) {
        auto targetFn = runtime->lookupFunction(0x48CB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320B1Cu; }
        if (ctx->pc != 0x320B1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CB60_0x48cb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320B1Cu; }
        if (ctx->pc != 0x320B1Cu) { return; }
    }
    ctx->pc = 0x320B1Cu;
label_320b1c:
    // 0x320b1c: 0x10000104  b           . + 4 + (0x104 << 2)
label_320b20:
    if (ctx->pc == 0x320B20u) {
        ctx->pc = 0x320B24u;
        goto label_320b24;
    }
    ctx->pc = 0x320B1Cu;
    {
        const bool branch_taken_0x320b1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x320b1c) {
            ctx->pc = 0x320F30u;
            goto label_320f30;
        }
    }
    ctx->pc = 0x320B24u;
label_320b24:
    // 0x320b24: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x320b24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_320b28:
    // 0x320b28: 0x52220007  beql        $s1, $v0, . + 4 + (0x7 << 2)
label_320b2c:
    if (ctx->pc == 0x320B2Cu) {
        ctx->pc = 0x320B2Cu;
            // 0x320b2c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x320B30u;
        goto label_320b30;
    }
    ctx->pc = 0x320B28u;
    {
        const bool branch_taken_0x320b28 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x320b28) {
            ctx->pc = 0x320B2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x320B28u;
            // 0x320b2c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x320B48u;
            goto label_320b48;
        }
    }
    ctx->pc = 0x320B30u;
label_320b30:
    // 0x320b30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x320b30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_320b34:
    // 0x320b34: 0x12220003  beq         $s1, $v0, . + 4 + (0x3 << 2)
label_320b38:
    if (ctx->pc == 0x320B38u) {
        ctx->pc = 0x320B3Cu;
        goto label_320b3c;
    }
    ctx->pc = 0x320B34u;
    {
        const bool branch_taken_0x320b34 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x320b34) {
            ctx->pc = 0x320B44u;
            goto label_320b44;
        }
    }
    ctx->pc = 0x320B3Cu;
label_320b3c:
    // 0x320b3c: 0x10000007  b           . + 4 + (0x7 << 2)
label_320b40:
    if (ctx->pc == 0x320B40u) {
        ctx->pc = 0x320B40u;
            // 0x320b40: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x320B44u;
        goto label_320b44;
    }
    ctx->pc = 0x320B3Cu;
    {
        const bool branch_taken_0x320b3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x320B40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x320B3Cu;
            // 0x320b40: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320b3c) {
            ctx->pc = 0x320B5Cu;
            goto label_320b5c;
        }
    }
    ctx->pc = 0x320B44u;
label_320b44:
    // 0x320b44: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x320b44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_320b48:
    // 0x320b48: 0x2405002b  addiu       $a1, $zero, 0x2B
    ctx->pc = 0x320b48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_320b4c:
    // 0x320b4c: 0xc1232d8  jal         func_48CB60
label_320b50:
    if (ctx->pc == 0x320B50u) {
        ctx->pc = 0x320B50u;
            // 0x320b50: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x320B54u;
        goto label_320b54;
    }
    ctx->pc = 0x320B4Cu;
    SET_GPR_U32(ctx, 31, 0x320B54u);
    ctx->pc = 0x320B50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x320B4Cu;
            // 0x320b50: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CB60u;
    if (runtime->hasFunction(0x48CB60u)) {
        auto targetFn = runtime->lookupFunction(0x48CB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320B54u; }
        if (ctx->pc != 0x320B54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CB60_0x48cb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320B54u; }
        if (ctx->pc != 0x320B54u) { return; }
    }
    ctx->pc = 0x320B54u;
label_320b54:
    // 0x320b54: 0x100000f6  b           . + 4 + (0xF6 << 2)
label_320b58:
    if (ctx->pc == 0x320B58u) {
        ctx->pc = 0x320B5Cu;
        goto label_320b5c;
    }
    ctx->pc = 0x320B54u;
    {
        const bool branch_taken_0x320b54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x320b54) {
            ctx->pc = 0x320F30u;
            goto label_320f30;
        }
    }
    ctx->pc = 0x320B5Cu;
label_320b5c:
    // 0x320b5c: 0x2405002b  addiu       $a1, $zero, 0x2B
    ctx->pc = 0x320b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_320b60:
    // 0x320b60: 0xc1232d8  jal         func_48CB60
label_320b64:
    if (ctx->pc == 0x320B64u) {
        ctx->pc = 0x320B64u;
            // 0x320b64: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x320B68u;
        goto label_320b68;
    }
    ctx->pc = 0x320B60u;
    SET_GPR_U32(ctx, 31, 0x320B68u);
    ctx->pc = 0x320B64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x320B60u;
            // 0x320b64: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CB60u;
    if (runtime->hasFunction(0x48CB60u)) {
        auto targetFn = runtime->lookupFunction(0x48CB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320B68u; }
        if (ctx->pc != 0x320B68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CB60_0x48cb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320B68u; }
        if (ctx->pc != 0x320B68u) { return; }
    }
    ctx->pc = 0x320B68u;
label_320b68:
    // 0x320b68: 0x100000f1  b           . + 4 + (0xF1 << 2)
label_320b6c:
    if (ctx->pc == 0x320B6Cu) {
        ctx->pc = 0x320B70u;
        goto label_320b70;
    }
    ctx->pc = 0x320B68u;
    {
        const bool branch_taken_0x320b68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x320b68) {
            ctx->pc = 0x320F30u;
            goto label_320f30;
        }
    }
    ctx->pc = 0x320B70u;
label_320b70:
    // 0x320b70: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x320b70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_320b74:
    // 0x320b74: 0x5222000a  beql        $s1, $v0, . + 4 + (0xA << 2)
label_320b78:
    if (ctx->pc == 0x320B78u) {
        ctx->pc = 0x320B78u;
            // 0x320b78: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x320B7Cu;
        goto label_320b7c;
    }
    ctx->pc = 0x320B74u;
    {
        const bool branch_taken_0x320b74 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x320b74) {
            ctx->pc = 0x320B78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x320B74u;
            // 0x320b78: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x320BA0u;
            goto label_320ba0;
        }
    }
    ctx->pc = 0x320B7Cu;
label_320b7c:
    // 0x320b7c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x320b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_320b80:
    // 0x320b80: 0x12220006  beq         $s1, $v0, . + 4 + (0x6 << 2)
label_320b84:
    if (ctx->pc == 0x320B84u) {
        ctx->pc = 0x320B88u;
        goto label_320b88;
    }
    ctx->pc = 0x320B80u;
    {
        const bool branch_taken_0x320b80 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x320b80) {
            ctx->pc = 0x320B9Cu;
            goto label_320b9c;
        }
    }
    ctx->pc = 0x320B88u;
label_320b88:
    // 0x320b88: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x320b88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_320b8c:
    // 0x320b8c: 0x12220003  beq         $s1, $v0, . + 4 + (0x3 << 2)
label_320b90:
    if (ctx->pc == 0x320B90u) {
        ctx->pc = 0x320B94u;
        goto label_320b94;
    }
    ctx->pc = 0x320B8Cu;
    {
        const bool branch_taken_0x320b8c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x320b8c) {
            ctx->pc = 0x320B9Cu;
            goto label_320b9c;
        }
    }
    ctx->pc = 0x320B94u;
label_320b94:
    // 0x320b94: 0x10000007  b           . + 4 + (0x7 << 2)
label_320b98:
    if (ctx->pc == 0x320B98u) {
        ctx->pc = 0x320B98u;
            // 0x320b98: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x320B9Cu;
        goto label_320b9c;
    }
    ctx->pc = 0x320B94u;
    {
        const bool branch_taken_0x320b94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x320B98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x320B94u;
            // 0x320b98: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320b94) {
            ctx->pc = 0x320BB4u;
            goto label_320bb4;
        }
    }
    ctx->pc = 0x320B9Cu;
label_320b9c:
    // 0x320b9c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x320b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_320ba0:
    // 0x320ba0: 0x2405002b  addiu       $a1, $zero, 0x2B
    ctx->pc = 0x320ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_320ba4:
    // 0x320ba4: 0xc1232d8  jal         func_48CB60
label_320ba8:
    if (ctx->pc == 0x320BA8u) {
        ctx->pc = 0x320BA8u;
            // 0x320ba8: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x320BACu;
        goto label_320bac;
    }
    ctx->pc = 0x320BA4u;
    SET_GPR_U32(ctx, 31, 0x320BACu);
    ctx->pc = 0x320BA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x320BA4u;
            // 0x320ba8: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CB60u;
    if (runtime->hasFunction(0x48CB60u)) {
        auto targetFn = runtime->lookupFunction(0x48CB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320BACu; }
        if (ctx->pc != 0x320BACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CB60_0x48cb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320BACu; }
        if (ctx->pc != 0x320BACu) { return; }
    }
    ctx->pc = 0x320BACu;
label_320bac:
    // 0x320bac: 0x100000e0  b           . + 4 + (0xE0 << 2)
label_320bb0:
    if (ctx->pc == 0x320BB0u) {
        ctx->pc = 0x320BB4u;
        goto label_320bb4;
    }
    ctx->pc = 0x320BACu;
    {
        const bool branch_taken_0x320bac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x320bac) {
            ctx->pc = 0x320F30u;
            goto label_320f30;
        }
    }
    ctx->pc = 0x320BB4u;
label_320bb4:
    // 0x320bb4: 0x2405002b  addiu       $a1, $zero, 0x2B
    ctx->pc = 0x320bb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_320bb8:
    // 0x320bb8: 0xc1232d8  jal         func_48CB60
label_320bbc:
    if (ctx->pc == 0x320BBCu) {
        ctx->pc = 0x320BBCu;
            // 0x320bbc: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x320BC0u;
        goto label_320bc0;
    }
    ctx->pc = 0x320BB8u;
    SET_GPR_U32(ctx, 31, 0x320BC0u);
    ctx->pc = 0x320BBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x320BB8u;
            // 0x320bbc: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CB60u;
    if (runtime->hasFunction(0x48CB60u)) {
        auto targetFn = runtime->lookupFunction(0x48CB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320BC0u; }
        if (ctx->pc != 0x320BC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CB60_0x48cb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320BC0u; }
        if (ctx->pc != 0x320BC0u) { return; }
    }
    ctx->pc = 0x320BC0u;
label_320bc0:
    // 0x320bc0: 0x100000db  b           . + 4 + (0xDB << 2)
label_320bc4:
    if (ctx->pc == 0x320BC4u) {
        ctx->pc = 0x320BC8u;
        goto label_320bc8;
    }
    ctx->pc = 0x320BC0u;
    {
        const bool branch_taken_0x320bc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x320bc0) {
            ctx->pc = 0x320F30u;
            goto label_320f30;
        }
    }
    ctx->pc = 0x320BC8u;
label_320bc8:
    // 0x320bc8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x320bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_320bcc:
    // 0x320bcc: 0x52220003  beql        $s1, $v0, . + 4 + (0x3 << 2)
label_320bd0:
    if (ctx->pc == 0x320BD0u) {
        ctx->pc = 0x320BD0u;
            // 0x320bd0: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x320BD4u;
        goto label_320bd4;
    }
    ctx->pc = 0x320BCCu;
    {
        const bool branch_taken_0x320bcc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x320bcc) {
            ctx->pc = 0x320BD0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x320BCCu;
            // 0x320bd0: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x320BDCu;
            goto label_320bdc;
        }
    }
    ctx->pc = 0x320BD4u;
label_320bd4:
    // 0x320bd4: 0x10000006  b           . + 4 + (0x6 << 2)
label_320bd8:
    if (ctx->pc == 0x320BD8u) {
        ctx->pc = 0x320BD8u;
            // 0x320bd8: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x320BDCu;
        goto label_320bdc;
    }
    ctx->pc = 0x320BD4u;
    {
        const bool branch_taken_0x320bd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x320BD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x320BD4u;
            // 0x320bd8: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320bd4) {
            ctx->pc = 0x320BF0u;
            goto label_320bf0;
        }
    }
    ctx->pc = 0x320BDCu;
label_320bdc:
    // 0x320bdc: 0x2405002b  addiu       $a1, $zero, 0x2B
    ctx->pc = 0x320bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_320be0:
    // 0x320be0: 0xc1232d8  jal         func_48CB60
label_320be4:
    if (ctx->pc == 0x320BE4u) {
        ctx->pc = 0x320BE4u;
            // 0x320be4: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x320BE8u;
        goto label_320be8;
    }
    ctx->pc = 0x320BE0u;
    SET_GPR_U32(ctx, 31, 0x320BE8u);
    ctx->pc = 0x320BE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x320BE0u;
            // 0x320be4: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CB60u;
    if (runtime->hasFunction(0x48CB60u)) {
        auto targetFn = runtime->lookupFunction(0x48CB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320BE8u; }
        if (ctx->pc != 0x320BE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CB60_0x48cb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320BE8u; }
        if (ctx->pc != 0x320BE8u) { return; }
    }
    ctx->pc = 0x320BE8u;
label_320be8:
    // 0x320be8: 0x100000d1  b           . + 4 + (0xD1 << 2)
label_320bec:
    if (ctx->pc == 0x320BECu) {
        ctx->pc = 0x320BF0u;
        goto label_320bf0;
    }
    ctx->pc = 0x320BE8u;
    {
        const bool branch_taken_0x320be8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x320be8) {
            ctx->pc = 0x320F30u;
            goto label_320f30;
        }
    }
    ctx->pc = 0x320BF0u;
label_320bf0:
    // 0x320bf0: 0x2405002b  addiu       $a1, $zero, 0x2B
    ctx->pc = 0x320bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_320bf4:
    // 0x320bf4: 0xc1232d8  jal         func_48CB60
label_320bf8:
    if (ctx->pc == 0x320BF8u) {
        ctx->pc = 0x320BF8u;
            // 0x320bf8: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x320BFCu;
        goto label_320bfc;
    }
    ctx->pc = 0x320BF4u;
    SET_GPR_U32(ctx, 31, 0x320BFCu);
    ctx->pc = 0x320BF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x320BF4u;
            // 0x320bf8: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CB60u;
    if (runtime->hasFunction(0x48CB60u)) {
        auto targetFn = runtime->lookupFunction(0x48CB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320BFCu; }
        if (ctx->pc != 0x320BFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CB60_0x48cb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320BFCu; }
        if (ctx->pc != 0x320BFCu) { return; }
    }
    ctx->pc = 0x320BFCu;
label_320bfc:
    // 0x320bfc: 0x100000cc  b           . + 4 + (0xCC << 2)
label_320c00:
    if (ctx->pc == 0x320C00u) {
        ctx->pc = 0x320C04u;
        goto label_320c04;
    }
    ctx->pc = 0x320BFCu;
    {
        const bool branch_taken_0x320bfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x320bfc) {
            ctx->pc = 0x320F30u;
            goto label_320f30;
        }
    }
    ctx->pc = 0x320C04u;
label_320c04:
    // 0x320c04: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x320c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_320c08:
    // 0x320c08: 0x52220007  beql        $s1, $v0, . + 4 + (0x7 << 2)
label_320c0c:
    if (ctx->pc == 0x320C0Cu) {
        ctx->pc = 0x320C0Cu;
            // 0x320c0c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x320C10u;
        goto label_320c10;
    }
    ctx->pc = 0x320C08u;
    {
        const bool branch_taken_0x320c08 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x320c08) {
            ctx->pc = 0x320C0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x320C08u;
            // 0x320c0c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x320C28u;
            goto label_320c28;
        }
    }
    ctx->pc = 0x320C10u;
label_320c10:
    // 0x320c10: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x320c10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_320c14:
    // 0x320c14: 0x12220003  beq         $s1, $v0, . + 4 + (0x3 << 2)
label_320c18:
    if (ctx->pc == 0x320C18u) {
        ctx->pc = 0x320C1Cu;
        goto label_320c1c;
    }
    ctx->pc = 0x320C14u;
    {
        const bool branch_taken_0x320c14 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x320c14) {
            ctx->pc = 0x320C24u;
            goto label_320c24;
        }
    }
    ctx->pc = 0x320C1Cu;
label_320c1c:
    // 0x320c1c: 0x10000007  b           . + 4 + (0x7 << 2)
label_320c20:
    if (ctx->pc == 0x320C20u) {
        ctx->pc = 0x320C20u;
            // 0x320c20: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x320C24u;
        goto label_320c24;
    }
    ctx->pc = 0x320C1Cu;
    {
        const bool branch_taken_0x320c1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x320C20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x320C1Cu;
            // 0x320c20: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320c1c) {
            ctx->pc = 0x320C3Cu;
            goto label_320c3c;
        }
    }
    ctx->pc = 0x320C24u;
label_320c24:
    // 0x320c24: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x320c24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_320c28:
    // 0x320c28: 0x2405002b  addiu       $a1, $zero, 0x2B
    ctx->pc = 0x320c28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_320c2c:
    // 0x320c2c: 0xc1232d8  jal         func_48CB60
label_320c30:
    if (ctx->pc == 0x320C30u) {
        ctx->pc = 0x320C30u;
            // 0x320c30: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x320C34u;
        goto label_320c34;
    }
    ctx->pc = 0x320C2Cu;
    SET_GPR_U32(ctx, 31, 0x320C34u);
    ctx->pc = 0x320C30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x320C2Cu;
            // 0x320c30: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CB60u;
    if (runtime->hasFunction(0x48CB60u)) {
        auto targetFn = runtime->lookupFunction(0x48CB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320C34u; }
        if (ctx->pc != 0x320C34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CB60_0x48cb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320C34u; }
        if (ctx->pc != 0x320C34u) { return; }
    }
    ctx->pc = 0x320C34u;
label_320c34:
    // 0x320c34: 0x100000be  b           . + 4 + (0xBE << 2)
label_320c38:
    if (ctx->pc == 0x320C38u) {
        ctx->pc = 0x320C3Cu;
        goto label_320c3c;
    }
    ctx->pc = 0x320C34u;
    {
        const bool branch_taken_0x320c34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x320c34) {
            ctx->pc = 0x320F30u;
            goto label_320f30;
        }
    }
    ctx->pc = 0x320C3Cu;
label_320c3c:
    // 0x320c3c: 0x2405002b  addiu       $a1, $zero, 0x2B
    ctx->pc = 0x320c3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_320c40:
    // 0x320c40: 0xc1232d8  jal         func_48CB60
label_320c44:
    if (ctx->pc == 0x320C44u) {
        ctx->pc = 0x320C44u;
            // 0x320c44: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x320C48u;
        goto label_320c48;
    }
    ctx->pc = 0x320C40u;
    SET_GPR_U32(ctx, 31, 0x320C48u);
    ctx->pc = 0x320C44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x320C40u;
            // 0x320c44: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CB60u;
    if (runtime->hasFunction(0x48CB60u)) {
        auto targetFn = runtime->lookupFunction(0x48CB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320C48u; }
        if (ctx->pc != 0x320C48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CB60_0x48cb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320C48u; }
        if (ctx->pc != 0x320C48u) { return; }
    }
    ctx->pc = 0x320C48u;
label_320c48:
    // 0x320c48: 0x100000b9  b           . + 4 + (0xB9 << 2)
label_320c4c:
    if (ctx->pc == 0x320C4Cu) {
        ctx->pc = 0x320C50u;
        goto label_320c50;
    }
    ctx->pc = 0x320C48u;
    {
        const bool branch_taken_0x320c48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x320c48) {
            ctx->pc = 0x320F30u;
            goto label_320f30;
        }
    }
    ctx->pc = 0x320C50u;
label_320c50:
    // 0x320c50: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x320c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_320c54:
    // 0x320c54: 0x52220007  beql        $s1, $v0, . + 4 + (0x7 << 2)
label_320c58:
    if (ctx->pc == 0x320C58u) {
        ctx->pc = 0x320C58u;
            // 0x320c58: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x320C5Cu;
        goto label_320c5c;
    }
    ctx->pc = 0x320C54u;
    {
        const bool branch_taken_0x320c54 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x320c54) {
            ctx->pc = 0x320C58u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x320C54u;
            // 0x320c58: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x320C74u;
            goto label_320c74;
        }
    }
    ctx->pc = 0x320C5Cu;
label_320c5c:
    // 0x320c5c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x320c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_320c60:
    // 0x320c60: 0x12220003  beq         $s1, $v0, . + 4 + (0x3 << 2)
label_320c64:
    if (ctx->pc == 0x320C64u) {
        ctx->pc = 0x320C68u;
        goto label_320c68;
    }
    ctx->pc = 0x320C60u;
    {
        const bool branch_taken_0x320c60 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x320c60) {
            ctx->pc = 0x320C70u;
            goto label_320c70;
        }
    }
    ctx->pc = 0x320C68u;
label_320c68:
    // 0x320c68: 0x10000007  b           . + 4 + (0x7 << 2)
label_320c6c:
    if (ctx->pc == 0x320C6Cu) {
        ctx->pc = 0x320C6Cu;
            // 0x320c6c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x320C70u;
        goto label_320c70;
    }
    ctx->pc = 0x320C68u;
    {
        const bool branch_taken_0x320c68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x320C6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x320C68u;
            // 0x320c6c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320c68) {
            ctx->pc = 0x320C88u;
            goto label_320c88;
        }
    }
    ctx->pc = 0x320C70u;
label_320c70:
    // 0x320c70: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x320c70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_320c74:
    // 0x320c74: 0x2405002b  addiu       $a1, $zero, 0x2B
    ctx->pc = 0x320c74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_320c78:
    // 0x320c78: 0xc1232d8  jal         func_48CB60
label_320c7c:
    if (ctx->pc == 0x320C7Cu) {
        ctx->pc = 0x320C7Cu;
            // 0x320c7c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x320C80u;
        goto label_320c80;
    }
    ctx->pc = 0x320C78u;
    SET_GPR_U32(ctx, 31, 0x320C80u);
    ctx->pc = 0x320C7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x320C78u;
            // 0x320c7c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CB60u;
    if (runtime->hasFunction(0x48CB60u)) {
        auto targetFn = runtime->lookupFunction(0x48CB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320C80u; }
        if (ctx->pc != 0x320C80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CB60_0x48cb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320C80u; }
        if (ctx->pc != 0x320C80u) { return; }
    }
    ctx->pc = 0x320C80u;
label_320c80:
    // 0x320c80: 0x100000ab  b           . + 4 + (0xAB << 2)
label_320c84:
    if (ctx->pc == 0x320C84u) {
        ctx->pc = 0x320C88u;
        goto label_320c88;
    }
    ctx->pc = 0x320C80u;
    {
        const bool branch_taken_0x320c80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x320c80) {
            ctx->pc = 0x320F30u;
            goto label_320f30;
        }
    }
    ctx->pc = 0x320C88u;
label_320c88:
    // 0x320c88: 0x2405002b  addiu       $a1, $zero, 0x2B
    ctx->pc = 0x320c88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_320c8c:
    // 0x320c8c: 0xc1232d8  jal         func_48CB60
label_320c90:
    if (ctx->pc == 0x320C90u) {
        ctx->pc = 0x320C90u;
            // 0x320c90: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x320C94u;
        goto label_320c94;
    }
    ctx->pc = 0x320C8Cu;
    SET_GPR_U32(ctx, 31, 0x320C94u);
    ctx->pc = 0x320C90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x320C8Cu;
            // 0x320c90: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CB60u;
    if (runtime->hasFunction(0x48CB60u)) {
        auto targetFn = runtime->lookupFunction(0x48CB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320C94u; }
        if (ctx->pc != 0x320C94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CB60_0x48cb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320C94u; }
        if (ctx->pc != 0x320C94u) { return; }
    }
    ctx->pc = 0x320C94u;
label_320c94:
    // 0x320c94: 0x100000a6  b           . + 4 + (0xA6 << 2)
label_320c98:
    if (ctx->pc == 0x320C98u) {
        ctx->pc = 0x320C9Cu;
        goto label_320c9c;
    }
    ctx->pc = 0x320C94u;
    {
        const bool branch_taken_0x320c94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x320c94) {
            ctx->pc = 0x320F30u;
            goto label_320f30;
        }
    }
    ctx->pc = 0x320C9Cu;
label_320c9c:
    // 0x320c9c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x320c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_320ca0:
    // 0x320ca0: 0x52220007  beql        $s1, $v0, . + 4 + (0x7 << 2)
label_320ca4:
    if (ctx->pc == 0x320CA4u) {
        ctx->pc = 0x320CA4u;
            // 0x320ca4: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x320CA8u;
        goto label_320ca8;
    }
    ctx->pc = 0x320CA0u;
    {
        const bool branch_taken_0x320ca0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x320ca0) {
            ctx->pc = 0x320CA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x320CA0u;
            // 0x320ca4: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x320CC0u;
            goto label_320cc0;
        }
    }
    ctx->pc = 0x320CA8u;
label_320ca8:
    // 0x320ca8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x320ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_320cac:
    // 0x320cac: 0x12220003  beq         $s1, $v0, . + 4 + (0x3 << 2)
label_320cb0:
    if (ctx->pc == 0x320CB0u) {
        ctx->pc = 0x320CB4u;
        goto label_320cb4;
    }
    ctx->pc = 0x320CACu;
    {
        const bool branch_taken_0x320cac = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x320cac) {
            ctx->pc = 0x320CBCu;
            goto label_320cbc;
        }
    }
    ctx->pc = 0x320CB4u;
label_320cb4:
    // 0x320cb4: 0x10000007  b           . + 4 + (0x7 << 2)
label_320cb8:
    if (ctx->pc == 0x320CB8u) {
        ctx->pc = 0x320CB8u;
            // 0x320cb8: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x320CBCu;
        goto label_320cbc;
    }
    ctx->pc = 0x320CB4u;
    {
        const bool branch_taken_0x320cb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x320CB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x320CB4u;
            // 0x320cb8: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320cb4) {
            ctx->pc = 0x320CD4u;
            goto label_320cd4;
        }
    }
    ctx->pc = 0x320CBCu;
label_320cbc:
    // 0x320cbc: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x320cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_320cc0:
    // 0x320cc0: 0x2405002b  addiu       $a1, $zero, 0x2B
    ctx->pc = 0x320cc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_320cc4:
    // 0x320cc4: 0xc1232d8  jal         func_48CB60
label_320cc8:
    if (ctx->pc == 0x320CC8u) {
        ctx->pc = 0x320CC8u;
            // 0x320cc8: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x320CCCu;
        goto label_320ccc;
    }
    ctx->pc = 0x320CC4u;
    SET_GPR_U32(ctx, 31, 0x320CCCu);
    ctx->pc = 0x320CC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x320CC4u;
            // 0x320cc8: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CB60u;
    if (runtime->hasFunction(0x48CB60u)) {
        auto targetFn = runtime->lookupFunction(0x48CB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320CCCu; }
        if (ctx->pc != 0x320CCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CB60_0x48cb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320CCCu; }
        if (ctx->pc != 0x320CCCu) { return; }
    }
    ctx->pc = 0x320CCCu;
label_320ccc:
    // 0x320ccc: 0x10000098  b           . + 4 + (0x98 << 2)
label_320cd0:
    if (ctx->pc == 0x320CD0u) {
        ctx->pc = 0x320CD4u;
        goto label_320cd4;
    }
    ctx->pc = 0x320CCCu;
    {
        const bool branch_taken_0x320ccc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x320ccc) {
            ctx->pc = 0x320F30u;
            goto label_320f30;
        }
    }
    ctx->pc = 0x320CD4u;
label_320cd4:
    // 0x320cd4: 0x2405002b  addiu       $a1, $zero, 0x2B
    ctx->pc = 0x320cd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_320cd8:
    // 0x320cd8: 0xc1232d8  jal         func_48CB60
label_320cdc:
    if (ctx->pc == 0x320CDCu) {
        ctx->pc = 0x320CDCu;
            // 0x320cdc: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x320CE0u;
        goto label_320ce0;
    }
    ctx->pc = 0x320CD8u;
    SET_GPR_U32(ctx, 31, 0x320CE0u);
    ctx->pc = 0x320CDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x320CD8u;
            // 0x320cdc: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CB60u;
    if (runtime->hasFunction(0x48CB60u)) {
        auto targetFn = runtime->lookupFunction(0x48CB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320CE0u; }
        if (ctx->pc != 0x320CE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CB60_0x48cb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320CE0u; }
        if (ctx->pc != 0x320CE0u) { return; }
    }
    ctx->pc = 0x320CE0u;
label_320ce0:
    // 0x320ce0: 0x10000093  b           . + 4 + (0x93 << 2)
label_320ce4:
    if (ctx->pc == 0x320CE4u) {
        ctx->pc = 0x320CE8u;
        goto label_320ce8;
    }
    ctx->pc = 0x320CE0u;
    {
        const bool branch_taken_0x320ce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x320ce0) {
            ctx->pc = 0x320F30u;
            goto label_320f30;
        }
    }
    ctx->pc = 0x320CE8u;
label_320ce8:
    // 0x320ce8: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x320ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_320cec:
    // 0x320cec: 0x52220007  beql        $s1, $v0, . + 4 + (0x7 << 2)
label_320cf0:
    if (ctx->pc == 0x320CF0u) {
        ctx->pc = 0x320CF0u;
            // 0x320cf0: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x320CF4u;
        goto label_320cf4;
    }
    ctx->pc = 0x320CECu;
    {
        const bool branch_taken_0x320cec = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x320cec) {
            ctx->pc = 0x320CF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x320CECu;
            // 0x320cf0: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x320D0Cu;
            goto label_320d0c;
        }
    }
    ctx->pc = 0x320CF4u;
label_320cf4:
    // 0x320cf4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x320cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_320cf8:
    // 0x320cf8: 0x12220003  beq         $s1, $v0, . + 4 + (0x3 << 2)
label_320cfc:
    if (ctx->pc == 0x320CFCu) {
        ctx->pc = 0x320D00u;
        goto label_320d00;
    }
    ctx->pc = 0x320CF8u;
    {
        const bool branch_taken_0x320cf8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x320cf8) {
            ctx->pc = 0x320D08u;
            goto label_320d08;
        }
    }
    ctx->pc = 0x320D00u;
label_320d00:
    // 0x320d00: 0x10000007  b           . + 4 + (0x7 << 2)
label_320d04:
    if (ctx->pc == 0x320D04u) {
        ctx->pc = 0x320D04u;
            // 0x320d04: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x320D08u;
        goto label_320d08;
    }
    ctx->pc = 0x320D00u;
    {
        const bool branch_taken_0x320d00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x320D04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x320D00u;
            // 0x320d04: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320d00) {
            ctx->pc = 0x320D20u;
            goto label_320d20;
        }
    }
    ctx->pc = 0x320D08u;
label_320d08:
    // 0x320d08: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x320d08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_320d0c:
    // 0x320d0c: 0x2405002b  addiu       $a1, $zero, 0x2B
    ctx->pc = 0x320d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_320d10:
    // 0x320d10: 0xc1232d8  jal         func_48CB60
label_320d14:
    if (ctx->pc == 0x320D14u) {
        ctx->pc = 0x320D14u;
            // 0x320d14: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x320D18u;
        goto label_320d18;
    }
    ctx->pc = 0x320D10u;
    SET_GPR_U32(ctx, 31, 0x320D18u);
    ctx->pc = 0x320D14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x320D10u;
            // 0x320d14: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CB60u;
    if (runtime->hasFunction(0x48CB60u)) {
        auto targetFn = runtime->lookupFunction(0x48CB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320D18u; }
        if (ctx->pc != 0x320D18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CB60_0x48cb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320D18u; }
        if (ctx->pc != 0x320D18u) { return; }
    }
    ctx->pc = 0x320D18u;
label_320d18:
    // 0x320d18: 0x10000085  b           . + 4 + (0x85 << 2)
label_320d1c:
    if (ctx->pc == 0x320D1Cu) {
        ctx->pc = 0x320D20u;
        goto label_320d20;
    }
    ctx->pc = 0x320D18u;
    {
        const bool branch_taken_0x320d18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x320d18) {
            ctx->pc = 0x320F30u;
            goto label_320f30;
        }
    }
    ctx->pc = 0x320D20u;
label_320d20:
    // 0x320d20: 0x2405002b  addiu       $a1, $zero, 0x2B
    ctx->pc = 0x320d20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_320d24:
    // 0x320d24: 0xc1232d8  jal         func_48CB60
label_320d28:
    if (ctx->pc == 0x320D28u) {
        ctx->pc = 0x320D28u;
            // 0x320d28: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x320D2Cu;
        goto label_320d2c;
    }
    ctx->pc = 0x320D24u;
    SET_GPR_U32(ctx, 31, 0x320D2Cu);
    ctx->pc = 0x320D28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x320D24u;
            // 0x320d28: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CB60u;
    if (runtime->hasFunction(0x48CB60u)) {
        auto targetFn = runtime->lookupFunction(0x48CB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320D2Cu; }
        if (ctx->pc != 0x320D2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CB60_0x48cb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320D2Cu; }
        if (ctx->pc != 0x320D2Cu) { return; }
    }
    ctx->pc = 0x320D2Cu;
label_320d2c:
    // 0x320d2c: 0x10000080  b           . + 4 + (0x80 << 2)
label_320d30:
    if (ctx->pc == 0x320D30u) {
        ctx->pc = 0x320D34u;
        goto label_320d34;
    }
    ctx->pc = 0x320D2Cu;
    {
        const bool branch_taken_0x320d2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x320d2c) {
            ctx->pc = 0x320F30u;
            goto label_320f30;
        }
    }
    ctx->pc = 0x320D34u;
label_320d34:
    // 0x320d34: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x320d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_320d38:
    // 0x320d38: 0x52220007  beql        $s1, $v0, . + 4 + (0x7 << 2)
label_320d3c:
    if (ctx->pc == 0x320D3Cu) {
        ctx->pc = 0x320D3Cu;
            // 0x320d3c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x320D40u;
        goto label_320d40;
    }
    ctx->pc = 0x320D38u;
    {
        const bool branch_taken_0x320d38 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x320d38) {
            ctx->pc = 0x320D3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x320D38u;
            // 0x320d3c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x320D58u;
            goto label_320d58;
        }
    }
    ctx->pc = 0x320D40u;
label_320d40:
    // 0x320d40: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x320d40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_320d44:
    // 0x320d44: 0x12220003  beq         $s1, $v0, . + 4 + (0x3 << 2)
label_320d48:
    if (ctx->pc == 0x320D48u) {
        ctx->pc = 0x320D4Cu;
        goto label_320d4c;
    }
    ctx->pc = 0x320D44u;
    {
        const bool branch_taken_0x320d44 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x320d44) {
            ctx->pc = 0x320D54u;
            goto label_320d54;
        }
    }
    ctx->pc = 0x320D4Cu;
label_320d4c:
    // 0x320d4c: 0x10000007  b           . + 4 + (0x7 << 2)
label_320d50:
    if (ctx->pc == 0x320D50u) {
        ctx->pc = 0x320D50u;
            // 0x320d50: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x320D54u;
        goto label_320d54;
    }
    ctx->pc = 0x320D4Cu;
    {
        const bool branch_taken_0x320d4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x320D50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x320D4Cu;
            // 0x320d50: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320d4c) {
            ctx->pc = 0x320D6Cu;
            goto label_320d6c;
        }
    }
    ctx->pc = 0x320D54u;
label_320d54:
    // 0x320d54: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x320d54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_320d58:
    // 0x320d58: 0x2405002b  addiu       $a1, $zero, 0x2B
    ctx->pc = 0x320d58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_320d5c:
    // 0x320d5c: 0xc1232d8  jal         func_48CB60
label_320d60:
    if (ctx->pc == 0x320D60u) {
        ctx->pc = 0x320D60u;
            // 0x320d60: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x320D64u;
        goto label_320d64;
    }
    ctx->pc = 0x320D5Cu;
    SET_GPR_U32(ctx, 31, 0x320D64u);
    ctx->pc = 0x320D60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x320D5Cu;
            // 0x320d60: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CB60u;
    if (runtime->hasFunction(0x48CB60u)) {
        auto targetFn = runtime->lookupFunction(0x48CB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320D64u; }
        if (ctx->pc != 0x320D64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CB60_0x48cb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320D64u; }
        if (ctx->pc != 0x320D64u) { return; }
    }
    ctx->pc = 0x320D64u;
label_320d64:
    // 0x320d64: 0x10000072  b           . + 4 + (0x72 << 2)
label_320d68:
    if (ctx->pc == 0x320D68u) {
        ctx->pc = 0x320D6Cu;
        goto label_320d6c;
    }
    ctx->pc = 0x320D64u;
    {
        const bool branch_taken_0x320d64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x320d64) {
            ctx->pc = 0x320F30u;
            goto label_320f30;
        }
    }
    ctx->pc = 0x320D6Cu;
label_320d6c:
    // 0x320d6c: 0x2405002b  addiu       $a1, $zero, 0x2B
    ctx->pc = 0x320d6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_320d70:
    // 0x320d70: 0xc1232d8  jal         func_48CB60
label_320d74:
    if (ctx->pc == 0x320D74u) {
        ctx->pc = 0x320D74u;
            // 0x320d74: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x320D78u;
        goto label_320d78;
    }
    ctx->pc = 0x320D70u;
    SET_GPR_U32(ctx, 31, 0x320D78u);
    ctx->pc = 0x320D74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x320D70u;
            // 0x320d74: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CB60u;
    if (runtime->hasFunction(0x48CB60u)) {
        auto targetFn = runtime->lookupFunction(0x48CB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320D78u; }
        if (ctx->pc != 0x320D78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CB60_0x48cb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320D78u; }
        if (ctx->pc != 0x320D78u) { return; }
    }
    ctx->pc = 0x320D78u;
label_320d78:
    // 0x320d78: 0x1000006d  b           . + 4 + (0x6D << 2)
label_320d7c:
    if (ctx->pc == 0x320D7Cu) {
        ctx->pc = 0x320D80u;
        goto label_320d80;
    }
    ctx->pc = 0x320D78u;
    {
        const bool branch_taken_0x320d78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x320d78) {
            ctx->pc = 0x320F30u;
            goto label_320f30;
        }
    }
    ctx->pc = 0x320D80u;
label_320d80:
    // 0x320d80: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x320d80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_320d84:
    // 0x320d84: 0x52220007  beql        $s1, $v0, . + 4 + (0x7 << 2)
label_320d88:
    if (ctx->pc == 0x320D88u) {
        ctx->pc = 0x320D88u;
            // 0x320d88: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x320D8Cu;
        goto label_320d8c;
    }
    ctx->pc = 0x320D84u;
    {
        const bool branch_taken_0x320d84 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x320d84) {
            ctx->pc = 0x320D88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x320D84u;
            // 0x320d88: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x320DA4u;
            goto label_320da4;
        }
    }
    ctx->pc = 0x320D8Cu;
label_320d8c:
    // 0x320d8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x320d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_320d90:
    // 0x320d90: 0x12220003  beq         $s1, $v0, . + 4 + (0x3 << 2)
label_320d94:
    if (ctx->pc == 0x320D94u) {
        ctx->pc = 0x320D98u;
        goto label_320d98;
    }
    ctx->pc = 0x320D90u;
    {
        const bool branch_taken_0x320d90 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x320d90) {
            ctx->pc = 0x320DA0u;
            goto label_320da0;
        }
    }
    ctx->pc = 0x320D98u;
label_320d98:
    // 0x320d98: 0x10000007  b           . + 4 + (0x7 << 2)
label_320d9c:
    if (ctx->pc == 0x320D9Cu) {
        ctx->pc = 0x320D9Cu;
            // 0x320d9c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x320DA0u;
        goto label_320da0;
    }
    ctx->pc = 0x320D98u;
    {
        const bool branch_taken_0x320d98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x320D9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x320D98u;
            // 0x320d9c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320d98) {
            ctx->pc = 0x320DB8u;
            goto label_320db8;
        }
    }
    ctx->pc = 0x320DA0u;
label_320da0:
    // 0x320da0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x320da0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_320da4:
    // 0x320da4: 0x2405002b  addiu       $a1, $zero, 0x2B
    ctx->pc = 0x320da4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_320da8:
    // 0x320da8: 0xc1232d8  jal         func_48CB60
label_320dac:
    if (ctx->pc == 0x320DACu) {
        ctx->pc = 0x320DACu;
            // 0x320dac: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x320DB0u;
        goto label_320db0;
    }
    ctx->pc = 0x320DA8u;
    SET_GPR_U32(ctx, 31, 0x320DB0u);
    ctx->pc = 0x320DACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x320DA8u;
            // 0x320dac: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CB60u;
    if (runtime->hasFunction(0x48CB60u)) {
        auto targetFn = runtime->lookupFunction(0x48CB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320DB0u; }
        if (ctx->pc != 0x320DB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CB60_0x48cb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320DB0u; }
        if (ctx->pc != 0x320DB0u) { return; }
    }
    ctx->pc = 0x320DB0u;
label_320db0:
    // 0x320db0: 0x1000005f  b           . + 4 + (0x5F << 2)
label_320db4:
    if (ctx->pc == 0x320DB4u) {
        ctx->pc = 0x320DB8u;
        goto label_320db8;
    }
    ctx->pc = 0x320DB0u;
    {
        const bool branch_taken_0x320db0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x320db0) {
            ctx->pc = 0x320F30u;
            goto label_320f30;
        }
    }
    ctx->pc = 0x320DB8u;
label_320db8:
    // 0x320db8: 0x2405002b  addiu       $a1, $zero, 0x2B
    ctx->pc = 0x320db8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_320dbc:
    // 0x320dbc: 0xc1232d8  jal         func_48CB60
label_320dc0:
    if (ctx->pc == 0x320DC0u) {
        ctx->pc = 0x320DC0u;
            // 0x320dc0: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x320DC4u;
        goto label_320dc4;
    }
    ctx->pc = 0x320DBCu;
    SET_GPR_U32(ctx, 31, 0x320DC4u);
    ctx->pc = 0x320DC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x320DBCu;
            // 0x320dc0: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CB60u;
    if (runtime->hasFunction(0x48CB60u)) {
        auto targetFn = runtime->lookupFunction(0x48CB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320DC4u; }
        if (ctx->pc != 0x320DC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CB60_0x48cb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320DC4u; }
        if (ctx->pc != 0x320DC4u) { return; }
    }
    ctx->pc = 0x320DC4u;
label_320dc4:
    // 0x320dc4: 0x1000005a  b           . + 4 + (0x5A << 2)
label_320dc8:
    if (ctx->pc == 0x320DC8u) {
        ctx->pc = 0x320DCCu;
        goto label_320dcc;
    }
    ctx->pc = 0x320DC4u;
    {
        const bool branch_taken_0x320dc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x320dc4) {
            ctx->pc = 0x320F30u;
            goto label_320f30;
        }
    }
    ctx->pc = 0x320DCCu;
label_320dcc:
    // 0x320dcc: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x320dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_320dd0:
    // 0x320dd0: 0x52220007  beql        $s1, $v0, . + 4 + (0x7 << 2)
label_320dd4:
    if (ctx->pc == 0x320DD4u) {
        ctx->pc = 0x320DD4u;
            // 0x320dd4: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x320DD8u;
        goto label_320dd8;
    }
    ctx->pc = 0x320DD0u;
    {
        const bool branch_taken_0x320dd0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x320dd0) {
            ctx->pc = 0x320DD4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x320DD0u;
            // 0x320dd4: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x320DF0u;
            goto label_320df0;
        }
    }
    ctx->pc = 0x320DD8u;
label_320dd8:
    // 0x320dd8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x320dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_320ddc:
    // 0x320ddc: 0x12220003  beq         $s1, $v0, . + 4 + (0x3 << 2)
label_320de0:
    if (ctx->pc == 0x320DE0u) {
        ctx->pc = 0x320DE4u;
        goto label_320de4;
    }
    ctx->pc = 0x320DDCu;
    {
        const bool branch_taken_0x320ddc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x320ddc) {
            ctx->pc = 0x320DECu;
            goto label_320dec;
        }
    }
    ctx->pc = 0x320DE4u;
label_320de4:
    // 0x320de4: 0x10000007  b           . + 4 + (0x7 << 2)
label_320de8:
    if (ctx->pc == 0x320DE8u) {
        ctx->pc = 0x320DE8u;
            // 0x320de8: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x320DECu;
        goto label_320dec;
    }
    ctx->pc = 0x320DE4u;
    {
        const bool branch_taken_0x320de4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x320DE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x320DE4u;
            // 0x320de8: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320de4) {
            ctx->pc = 0x320E04u;
            goto label_320e04;
        }
    }
    ctx->pc = 0x320DECu;
label_320dec:
    // 0x320dec: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x320decu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_320df0:
    // 0x320df0: 0x2405002b  addiu       $a1, $zero, 0x2B
    ctx->pc = 0x320df0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_320df4:
    // 0x320df4: 0xc1232d8  jal         func_48CB60
label_320df8:
    if (ctx->pc == 0x320DF8u) {
        ctx->pc = 0x320DF8u;
            // 0x320df8: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x320DFCu;
        goto label_320dfc;
    }
    ctx->pc = 0x320DF4u;
    SET_GPR_U32(ctx, 31, 0x320DFCu);
    ctx->pc = 0x320DF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x320DF4u;
            // 0x320df8: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CB60u;
    if (runtime->hasFunction(0x48CB60u)) {
        auto targetFn = runtime->lookupFunction(0x48CB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320DFCu; }
        if (ctx->pc != 0x320DFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CB60_0x48cb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320DFCu; }
        if (ctx->pc != 0x320DFCu) { return; }
    }
    ctx->pc = 0x320DFCu;
label_320dfc:
    // 0x320dfc: 0x1000004c  b           . + 4 + (0x4C << 2)
label_320e00:
    if (ctx->pc == 0x320E00u) {
        ctx->pc = 0x320E04u;
        goto label_320e04;
    }
    ctx->pc = 0x320DFCu;
    {
        const bool branch_taken_0x320dfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x320dfc) {
            ctx->pc = 0x320F30u;
            goto label_320f30;
        }
    }
    ctx->pc = 0x320E04u;
label_320e04:
    // 0x320e04: 0x2405002b  addiu       $a1, $zero, 0x2B
    ctx->pc = 0x320e04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_320e08:
    // 0x320e08: 0xc1232d8  jal         func_48CB60
label_320e0c:
    if (ctx->pc == 0x320E0Cu) {
        ctx->pc = 0x320E0Cu;
            // 0x320e0c: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x320E10u;
        goto label_320e10;
    }
    ctx->pc = 0x320E08u;
    SET_GPR_U32(ctx, 31, 0x320E10u);
    ctx->pc = 0x320E0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x320E08u;
            // 0x320e0c: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CB60u;
    if (runtime->hasFunction(0x48CB60u)) {
        auto targetFn = runtime->lookupFunction(0x48CB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320E10u; }
        if (ctx->pc != 0x320E10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CB60_0x48cb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320E10u; }
        if (ctx->pc != 0x320E10u) { return; }
    }
    ctx->pc = 0x320E10u;
label_320e10:
    // 0x320e10: 0x10000047  b           . + 4 + (0x47 << 2)
label_320e14:
    if (ctx->pc == 0x320E14u) {
        ctx->pc = 0x320E18u;
        goto label_320e18;
    }
    ctx->pc = 0x320E10u;
    {
        const bool branch_taken_0x320e10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x320e10) {
            ctx->pc = 0x320F30u;
            goto label_320f30;
        }
    }
    ctx->pc = 0x320E18u;
label_320e18:
    // 0x320e18: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x320e18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_320e1c:
    // 0x320e1c: 0x52220007  beql        $s1, $v0, . + 4 + (0x7 << 2)
label_320e20:
    if (ctx->pc == 0x320E20u) {
        ctx->pc = 0x320E20u;
            // 0x320e20: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x320E24u;
        goto label_320e24;
    }
    ctx->pc = 0x320E1Cu;
    {
        const bool branch_taken_0x320e1c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x320e1c) {
            ctx->pc = 0x320E20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x320E1Cu;
            // 0x320e20: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x320E3Cu;
            goto label_320e3c;
        }
    }
    ctx->pc = 0x320E24u;
label_320e24:
    // 0x320e24: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x320e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_320e28:
    // 0x320e28: 0x12220003  beq         $s1, $v0, . + 4 + (0x3 << 2)
label_320e2c:
    if (ctx->pc == 0x320E2Cu) {
        ctx->pc = 0x320E30u;
        goto label_320e30;
    }
    ctx->pc = 0x320E28u;
    {
        const bool branch_taken_0x320e28 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x320e28) {
            ctx->pc = 0x320E38u;
            goto label_320e38;
        }
    }
    ctx->pc = 0x320E30u;
label_320e30:
    // 0x320e30: 0x10000007  b           . + 4 + (0x7 << 2)
label_320e34:
    if (ctx->pc == 0x320E34u) {
        ctx->pc = 0x320E34u;
            // 0x320e34: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x320E38u;
        goto label_320e38;
    }
    ctx->pc = 0x320E30u;
    {
        const bool branch_taken_0x320e30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x320E34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x320E30u;
            // 0x320e34: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320e30) {
            ctx->pc = 0x320E50u;
            goto label_320e50;
        }
    }
    ctx->pc = 0x320E38u;
label_320e38:
    // 0x320e38: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x320e38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_320e3c:
    // 0x320e3c: 0x2405002b  addiu       $a1, $zero, 0x2B
    ctx->pc = 0x320e3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_320e40:
    // 0x320e40: 0xc1232d8  jal         func_48CB60
label_320e44:
    if (ctx->pc == 0x320E44u) {
        ctx->pc = 0x320E44u;
            // 0x320e44: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x320E48u;
        goto label_320e48;
    }
    ctx->pc = 0x320E40u;
    SET_GPR_U32(ctx, 31, 0x320E48u);
    ctx->pc = 0x320E44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x320E40u;
            // 0x320e44: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CB60u;
    if (runtime->hasFunction(0x48CB60u)) {
        auto targetFn = runtime->lookupFunction(0x48CB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320E48u; }
        if (ctx->pc != 0x320E48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CB60_0x48cb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320E48u; }
        if (ctx->pc != 0x320E48u) { return; }
    }
    ctx->pc = 0x320E48u;
label_320e48:
    // 0x320e48: 0x10000039  b           . + 4 + (0x39 << 2)
label_320e4c:
    if (ctx->pc == 0x320E4Cu) {
        ctx->pc = 0x320E50u;
        goto label_320e50;
    }
    ctx->pc = 0x320E48u;
    {
        const bool branch_taken_0x320e48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x320e48) {
            ctx->pc = 0x320F30u;
            goto label_320f30;
        }
    }
    ctx->pc = 0x320E50u;
label_320e50:
    // 0x320e50: 0x2405002b  addiu       $a1, $zero, 0x2B
    ctx->pc = 0x320e50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_320e54:
    // 0x320e54: 0xc1232d8  jal         func_48CB60
label_320e58:
    if (ctx->pc == 0x320E58u) {
        ctx->pc = 0x320E58u;
            // 0x320e58: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x320E5Cu;
        goto label_320e5c;
    }
    ctx->pc = 0x320E54u;
    SET_GPR_U32(ctx, 31, 0x320E5Cu);
    ctx->pc = 0x320E58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x320E54u;
            // 0x320e58: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CB60u;
    if (runtime->hasFunction(0x48CB60u)) {
        auto targetFn = runtime->lookupFunction(0x48CB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320E5Cu; }
        if (ctx->pc != 0x320E5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CB60_0x48cb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320E5Cu; }
        if (ctx->pc != 0x320E5Cu) { return; }
    }
    ctx->pc = 0x320E5Cu;
label_320e5c:
    // 0x320e5c: 0x10000034  b           . + 4 + (0x34 << 2)
label_320e60:
    if (ctx->pc == 0x320E60u) {
        ctx->pc = 0x320E64u;
        goto label_320e64;
    }
    ctx->pc = 0x320E5Cu;
    {
        const bool branch_taken_0x320e5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x320e5c) {
            ctx->pc = 0x320F30u;
            goto label_320f30;
        }
    }
    ctx->pc = 0x320E64u;
label_320e64:
    // 0x320e64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x320e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_320e68:
    // 0x320e68: 0x52220003  beql        $s1, $v0, . + 4 + (0x3 << 2)
label_320e6c:
    if (ctx->pc == 0x320E6Cu) {
        ctx->pc = 0x320E6Cu;
            // 0x320e6c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x320E70u;
        goto label_320e70;
    }
    ctx->pc = 0x320E68u;
    {
        const bool branch_taken_0x320e68 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x320e68) {
            ctx->pc = 0x320E6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x320E68u;
            // 0x320e6c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x320E78u;
            goto label_320e78;
        }
    }
    ctx->pc = 0x320E70u;
label_320e70:
    // 0x320e70: 0x10000006  b           . + 4 + (0x6 << 2)
label_320e74:
    if (ctx->pc == 0x320E74u) {
        ctx->pc = 0x320E74u;
            // 0x320e74: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x320E78u;
        goto label_320e78;
    }
    ctx->pc = 0x320E70u;
    {
        const bool branch_taken_0x320e70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x320E74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x320E70u;
            // 0x320e74: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320e70) {
            ctx->pc = 0x320E8Cu;
            goto label_320e8c;
        }
    }
    ctx->pc = 0x320E78u;
label_320e78:
    // 0x320e78: 0x2405002b  addiu       $a1, $zero, 0x2B
    ctx->pc = 0x320e78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_320e7c:
    // 0x320e7c: 0xc1232d8  jal         func_48CB60
label_320e80:
    if (ctx->pc == 0x320E80u) {
        ctx->pc = 0x320E80u;
            // 0x320e80: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x320E84u;
        goto label_320e84;
    }
    ctx->pc = 0x320E7Cu;
    SET_GPR_U32(ctx, 31, 0x320E84u);
    ctx->pc = 0x320E80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x320E7Cu;
            // 0x320e80: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CB60u;
    if (runtime->hasFunction(0x48CB60u)) {
        auto targetFn = runtime->lookupFunction(0x48CB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320E84u; }
        if (ctx->pc != 0x320E84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CB60_0x48cb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320E84u; }
        if (ctx->pc != 0x320E84u) { return; }
    }
    ctx->pc = 0x320E84u;
label_320e84:
    // 0x320e84: 0x1000002a  b           . + 4 + (0x2A << 2)
label_320e88:
    if (ctx->pc == 0x320E88u) {
        ctx->pc = 0x320E8Cu;
        goto label_320e8c;
    }
    ctx->pc = 0x320E84u;
    {
        const bool branch_taken_0x320e84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x320e84) {
            ctx->pc = 0x320F30u;
            goto label_320f30;
        }
    }
    ctx->pc = 0x320E8Cu;
label_320e8c:
    // 0x320e8c: 0x2405002b  addiu       $a1, $zero, 0x2B
    ctx->pc = 0x320e8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_320e90:
    // 0x320e90: 0xc1232d8  jal         func_48CB60
label_320e94:
    if (ctx->pc == 0x320E94u) {
        ctx->pc = 0x320E94u;
            // 0x320e94: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x320E98u;
        goto label_320e98;
    }
    ctx->pc = 0x320E90u;
    SET_GPR_U32(ctx, 31, 0x320E98u);
    ctx->pc = 0x320E94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x320E90u;
            // 0x320e94: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CB60u;
    if (runtime->hasFunction(0x48CB60u)) {
        auto targetFn = runtime->lookupFunction(0x48CB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320E98u; }
        if (ctx->pc != 0x320E98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CB60_0x48cb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320E98u; }
        if (ctx->pc != 0x320E98u) { return; }
    }
    ctx->pc = 0x320E98u;
label_320e98:
    // 0x320e98: 0x10000025  b           . + 4 + (0x25 << 2)
label_320e9c:
    if (ctx->pc == 0x320E9Cu) {
        ctx->pc = 0x320EA0u;
        goto label_320ea0;
    }
    ctx->pc = 0x320E98u;
    {
        const bool branch_taken_0x320e98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x320e98) {
            ctx->pc = 0x320F30u;
            goto label_320f30;
        }
    }
    ctx->pc = 0x320EA0u;
label_320ea0:
    // 0x320ea0: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x320ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_320ea4:
    // 0x320ea4: 0x52220007  beql        $s1, $v0, . + 4 + (0x7 << 2)
label_320ea8:
    if (ctx->pc == 0x320EA8u) {
        ctx->pc = 0x320EA8u;
            // 0x320ea8: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x320EACu;
        goto label_320eac;
    }
    ctx->pc = 0x320EA4u;
    {
        const bool branch_taken_0x320ea4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x320ea4) {
            ctx->pc = 0x320EA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x320EA4u;
            // 0x320ea8: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x320EC4u;
            goto label_320ec4;
        }
    }
    ctx->pc = 0x320EACu;
label_320eac:
    // 0x320eac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x320eacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_320eb0:
    // 0x320eb0: 0x12220003  beq         $s1, $v0, . + 4 + (0x3 << 2)
label_320eb4:
    if (ctx->pc == 0x320EB4u) {
        ctx->pc = 0x320EB8u;
        goto label_320eb8;
    }
    ctx->pc = 0x320EB0u;
    {
        const bool branch_taken_0x320eb0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x320eb0) {
            ctx->pc = 0x320EC0u;
            goto label_320ec0;
        }
    }
    ctx->pc = 0x320EB8u;
label_320eb8:
    // 0x320eb8: 0x10000007  b           . + 4 + (0x7 << 2)
label_320ebc:
    if (ctx->pc == 0x320EBCu) {
        ctx->pc = 0x320EBCu;
            // 0x320ebc: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x320EC0u;
        goto label_320ec0;
    }
    ctx->pc = 0x320EB8u;
    {
        const bool branch_taken_0x320eb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x320EBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x320EB8u;
            // 0x320ebc: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320eb8) {
            ctx->pc = 0x320ED8u;
            goto label_320ed8;
        }
    }
    ctx->pc = 0x320EC0u;
label_320ec0:
    // 0x320ec0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x320ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_320ec4:
    // 0x320ec4: 0x2405002b  addiu       $a1, $zero, 0x2B
    ctx->pc = 0x320ec4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_320ec8:
    // 0x320ec8: 0xc1232d8  jal         func_48CB60
label_320ecc:
    if (ctx->pc == 0x320ECCu) {
        ctx->pc = 0x320ECCu;
            // 0x320ecc: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x320ED0u;
        goto label_320ed0;
    }
    ctx->pc = 0x320EC8u;
    SET_GPR_U32(ctx, 31, 0x320ED0u);
    ctx->pc = 0x320ECCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x320EC8u;
            // 0x320ecc: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CB60u;
    if (runtime->hasFunction(0x48CB60u)) {
        auto targetFn = runtime->lookupFunction(0x48CB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320ED0u; }
        if (ctx->pc != 0x320ED0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CB60_0x48cb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320ED0u; }
        if (ctx->pc != 0x320ED0u) { return; }
    }
    ctx->pc = 0x320ED0u;
label_320ed0:
    // 0x320ed0: 0x10000017  b           . + 4 + (0x17 << 2)
label_320ed4:
    if (ctx->pc == 0x320ED4u) {
        ctx->pc = 0x320ED8u;
        goto label_320ed8;
    }
    ctx->pc = 0x320ED0u;
    {
        const bool branch_taken_0x320ed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x320ed0) {
            ctx->pc = 0x320F30u;
            goto label_320f30;
        }
    }
    ctx->pc = 0x320ED8u;
label_320ed8:
    // 0x320ed8: 0x2405002b  addiu       $a1, $zero, 0x2B
    ctx->pc = 0x320ed8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_320edc:
    // 0x320edc: 0xc1232d8  jal         func_48CB60
label_320ee0:
    if (ctx->pc == 0x320EE0u) {
        ctx->pc = 0x320EE0u;
            // 0x320ee0: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x320EE4u;
        goto label_320ee4;
    }
    ctx->pc = 0x320EDCu;
    SET_GPR_U32(ctx, 31, 0x320EE4u);
    ctx->pc = 0x320EE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x320EDCu;
            // 0x320ee0: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CB60u;
    if (runtime->hasFunction(0x48CB60u)) {
        auto targetFn = runtime->lookupFunction(0x48CB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320EE4u; }
        if (ctx->pc != 0x320EE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CB60_0x48cb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320EE4u; }
        if (ctx->pc != 0x320EE4u) { return; }
    }
    ctx->pc = 0x320EE4u;
label_320ee4:
    // 0x320ee4: 0x10000012  b           . + 4 + (0x12 << 2)
label_320ee8:
    if (ctx->pc == 0x320EE8u) {
        ctx->pc = 0x320EECu;
        goto label_320eec;
    }
    ctx->pc = 0x320EE4u;
    {
        const bool branch_taken_0x320ee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x320ee4) {
            ctx->pc = 0x320F30u;
            goto label_320f30;
        }
    }
    ctx->pc = 0x320EECu;
label_320eec:
    // 0x320eec: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x320eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_320ef0:
    // 0x320ef0: 0x52220007  beql        $s1, $v0, . + 4 + (0x7 << 2)
label_320ef4:
    if (ctx->pc == 0x320EF4u) {
        ctx->pc = 0x320EF4u;
            // 0x320ef4: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x320EF8u;
        goto label_320ef8;
    }
    ctx->pc = 0x320EF0u;
    {
        const bool branch_taken_0x320ef0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x320ef0) {
            ctx->pc = 0x320EF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x320EF0u;
            // 0x320ef4: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x320F10u;
            goto label_320f10;
        }
    }
    ctx->pc = 0x320EF8u;
label_320ef8:
    // 0x320ef8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x320ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_320efc:
    // 0x320efc: 0x12220003  beq         $s1, $v0, . + 4 + (0x3 << 2)
label_320f00:
    if (ctx->pc == 0x320F00u) {
        ctx->pc = 0x320F04u;
        goto label_320f04;
    }
    ctx->pc = 0x320EFCu;
    {
        const bool branch_taken_0x320efc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x320efc) {
            ctx->pc = 0x320F0Cu;
            goto label_320f0c;
        }
    }
    ctx->pc = 0x320F04u;
label_320f04:
    // 0x320f04: 0x10000007  b           . + 4 + (0x7 << 2)
label_320f08:
    if (ctx->pc == 0x320F08u) {
        ctx->pc = 0x320F08u;
            // 0x320f08: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x320F0Cu;
        goto label_320f0c;
    }
    ctx->pc = 0x320F04u;
    {
        const bool branch_taken_0x320f04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x320F08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x320F04u;
            // 0x320f08: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320f04) {
            ctx->pc = 0x320F24u;
            goto label_320f24;
        }
    }
    ctx->pc = 0x320F0Cu;
label_320f0c:
    // 0x320f0c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x320f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_320f10:
    // 0x320f10: 0x2405002b  addiu       $a1, $zero, 0x2B
    ctx->pc = 0x320f10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_320f14:
    // 0x320f14: 0xc1232d8  jal         func_48CB60
label_320f18:
    if (ctx->pc == 0x320F18u) {
        ctx->pc = 0x320F18u;
            // 0x320f18: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x320F1Cu;
        goto label_320f1c;
    }
    ctx->pc = 0x320F14u;
    SET_GPR_U32(ctx, 31, 0x320F1Cu);
    ctx->pc = 0x320F18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x320F14u;
            // 0x320f18: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CB60u;
    if (runtime->hasFunction(0x48CB60u)) {
        auto targetFn = runtime->lookupFunction(0x48CB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320F1Cu; }
        if (ctx->pc != 0x320F1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CB60_0x48cb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320F1Cu; }
        if (ctx->pc != 0x320F1Cu) { return; }
    }
    ctx->pc = 0x320F1Cu;
label_320f1c:
    // 0x320f1c: 0x10000004  b           . + 4 + (0x4 << 2)
label_320f20:
    if (ctx->pc == 0x320F20u) {
        ctx->pc = 0x320F24u;
        goto label_320f24;
    }
    ctx->pc = 0x320F1Cu;
    {
        const bool branch_taken_0x320f1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x320f1c) {
            ctx->pc = 0x320F30u;
            goto label_320f30;
        }
    }
    ctx->pc = 0x320F24u;
label_320f24:
    // 0x320f24: 0x2405002b  addiu       $a1, $zero, 0x2B
    ctx->pc = 0x320f24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_320f28:
    // 0x320f28: 0xc1232d8  jal         func_48CB60
label_320f2c:
    if (ctx->pc == 0x320F2Cu) {
        ctx->pc = 0x320F2Cu;
            // 0x320f2c: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x320F30u;
        goto label_320f30;
    }
    ctx->pc = 0x320F28u;
    SET_GPR_U32(ctx, 31, 0x320F30u);
    ctx->pc = 0x320F2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x320F28u;
            // 0x320f2c: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CB60u;
    if (runtime->hasFunction(0x48CB60u)) {
        auto targetFn = runtime->lookupFunction(0x48CB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320F30u; }
        if (ctx->pc != 0x320F30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CB60_0x48cb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320F30u; }
        if (ctx->pc != 0x320F30u) { return; }
    }
    ctx->pc = 0x320F30u;
label_320f30:
    // 0x320f30: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x320f30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_320f34:
    // 0x320f34: 0xc123328  jal         func_48CCA0
label_320f38:
    if (ctx->pc == 0x320F38u) {
        ctx->pc = 0x320F38u;
            // 0x320f38: 0x2405002f  addiu       $a1, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->pc = 0x320F3Cu;
        goto label_320f3c;
    }
    ctx->pc = 0x320F34u;
    SET_GPR_U32(ctx, 31, 0x320F3Cu);
    ctx->pc = 0x320F38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x320F34u;
            // 0x320f38: 0x2405002f  addiu       $a1, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CCA0u;
    if (runtime->hasFunction(0x48CCA0u)) {
        auto targetFn = runtime->lookupFunction(0x48CCA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320F3Cu; }
        if (ctx->pc != 0x320F3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CCA0_0x48cca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320F3Cu; }
        if (ctx->pc != 0x320F3Cu) { return; }
    }
    ctx->pc = 0x320F3Cu;
label_320f3c:
    // 0x320f3c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x320f3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_320f40:
    // 0x320f40: 0x93a20190  lbu         $v0, 0x190($sp)
    ctx->pc = 0x320f40u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 400)));
label_320f44:
    // 0x320f44: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_320f48:
    if (ctx->pc == 0x320F48u) {
        ctx->pc = 0x320F48u;
            // 0x320f48: 0x8fa2017c  lw          $v0, 0x17C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 380)));
        ctx->pc = 0x320F4Cu;
        goto label_320f4c;
    }
    ctx->pc = 0x320F44u;
    {
        const bool branch_taken_0x320f44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x320f44) {
            ctx->pc = 0x320F48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x320F44u;
            // 0x320f48: 0x8fa2017c  lw          $v0, 0x17C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 380)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x320F6Cu;
            goto label_320f6c;
        }
    }
    ctx->pc = 0x320F4Cu;
label_320f4c:
    // 0x320f4c: 0x8fa2017c  lw          $v0, 0x17C($sp)
    ctx->pc = 0x320f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 380)));
label_320f50:
    // 0x320f50: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x320f50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_320f54:
    // 0x320f54: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x320f54u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_320f58:
    // 0x320f58: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x320f58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_320f5c:
    // 0x320f5c: 0xc123654  jal         func_48D950
label_320f60:
    if (ctx->pc == 0x320F60u) {
        ctx->pc = 0x320F60u;
            // 0x320f60: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x320F64u;
        goto label_320f64;
    }
    ctx->pc = 0x320F5Cu;
    SET_GPR_U32(ctx, 31, 0x320F64u);
    ctx->pc = 0x320F60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x320F5Cu;
            // 0x320f60: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320F64u; }
        if (ctx->pc != 0x320F64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320F64u; }
        if (ctx->pc != 0x320F64u) { return; }
    }
    ctx->pc = 0x320F64u;
label_320f64:
    // 0x320f64: 0x10000008  b           . + 4 + (0x8 << 2)
label_320f68:
    if (ctx->pc == 0x320F68u) {
        ctx->pc = 0x320F68u;
            // 0x320f68: 0x36310004  ori         $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)4);
        ctx->pc = 0x320F6Cu;
        goto label_320f6c;
    }
    ctx->pc = 0x320F64u;
    {
        const bool branch_taken_0x320f64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x320F68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x320F64u;
            // 0x320f68: 0x36310004  ori         $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x320f64) {
            ctx->pc = 0x320F88u;
            goto label_320f88;
        }
    }
    ctx->pc = 0x320F6Cu;
label_320f6c:
    // 0x320f6c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x320f6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_320f70:
    // 0x320f70: 0x8fa60178  lw          $a2, 0x178($sp)
    ctx->pc = 0x320f70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
label_320f74:
    // 0x320f74: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x320f74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_320f78:
    // 0x320f78: 0xc123654  jal         func_48D950
label_320f7c:
    if (ctx->pc == 0x320F7Cu) {
        ctx->pc = 0x320F7Cu;
            // 0x320f7c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x320F80u;
        goto label_320f80;
    }
    ctx->pc = 0x320F78u;
    SET_GPR_U32(ctx, 31, 0x320F80u);
    ctx->pc = 0x320F7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x320F78u;
            // 0x320f7c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320F80u; }
        if (ctx->pc != 0x320F80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320F80u; }
        if (ctx->pc != 0x320F80u) { return; }
    }
    ctx->pc = 0x320F80u;
label_320f80:
    // 0x320f80: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x320f80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_320f84:
    // 0x320f84: 0x2228824  and         $s1, $s1, $v0
    ctx->pc = 0x320f84u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
label_320f88:
    // 0x320f88: 0x93a20180  lbu         $v0, 0x180($sp)
    ctx->pc = 0x320f88u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 384)));
label_320f8c:
    // 0x320f8c: 0x5040002c  beql        $v0, $zero, . + 4 + (0x2C << 2)
label_320f90:
    if (ctx->pc == 0x320F90u) {
        ctx->pc = 0x320F90u;
            // 0x320f90: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x320F94u;
        goto label_320f94;
    }
    ctx->pc = 0x320F8Cu;
    {
        const bool branch_taken_0x320f8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x320f8c) {
            ctx->pc = 0x320F90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x320F8Cu;
            // 0x320f90: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x321040u;
            goto label_321040;
        }
    }
    ctx->pc = 0x320F94u;
label_320f94:
    // 0x320f94: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x320f94u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_320f98:
    // 0x320f98: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x320f98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_320f9c:
    // 0x320f9c: 0x8fa60174  lw          $a2, 0x174($sp)
    ctx->pc = 0x320f9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 372)));
label_320fa0:
    // 0x320fa0: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x320fa0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_320fa4:
    // 0x320fa4: 0xc123654  jal         func_48D950
label_320fa8:
    if (ctx->pc == 0x320FA8u) {
        ctx->pc = 0x320FA8u;
            // 0x320fa8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x320FACu;
        goto label_320fac;
    }
    ctx->pc = 0x320FA4u;
    SET_GPR_U32(ctx, 31, 0x320FACu);
    ctx->pc = 0x320FA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x320FA4u;
            // 0x320fa8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320FACu; }
        if (ctx->pc != 0x320FACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320FACu; }
        if (ctx->pc != 0x320FACu) { return; }
    }
    ctx->pc = 0x320FACu;
label_320fac:
    // 0x320fac: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x320facu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_320fb0:
    // 0x320fb0: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x320fb0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_320fb4:
    // 0x320fb4: 0x24a5c5a8  addiu       $a1, $a1, -0x3A58
    ctx->pc = 0x320fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952360));
label_320fb8:
    // 0x320fb8: 0xc123944  jal         func_48E510
label_320fbc:
    if (ctx->pc == 0x320FBCu) {
        ctx->pc = 0x320FBCu;
            // 0x320fbc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x320FC0u;
        goto label_320fc0;
    }
    ctx->pc = 0x320FB8u;
    SET_GPR_U32(ctx, 31, 0x320FC0u);
    ctx->pc = 0x320FBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x320FB8u;
            // 0x320fbc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320FC0u; }
        if (ctx->pc != 0x320FC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320FC0u; }
        if (ctx->pc != 0x320FC0u) { return; }
    }
    ctx->pc = 0x320FC0u;
label_320fc0:
    // 0x320fc0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x320fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_320fc4:
    // 0x320fc4: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x320fc4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_320fc8:
    // 0x320fc8: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x320fc8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_320fcc:
    // 0x320fcc: 0x24a5c590  addiu       $a1, $a1, -0x3A70
    ctx->pc = 0x320fccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952336));
label_320fd0:
    // 0x320fd0: 0xc123944  jal         func_48E510
label_320fd4:
    if (ctx->pc == 0x320FD4u) {
        ctx->pc = 0x320FD4u;
            // 0x320fd4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x320FD8u;
        goto label_320fd8;
    }
    ctx->pc = 0x320FD0u;
    SET_GPR_U32(ctx, 31, 0x320FD8u);
    ctx->pc = 0x320FD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x320FD0u;
            // 0x320fd4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320FD8u; }
        if (ctx->pc != 0x320FD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320FD8u; }
        if (ctx->pc != 0x320FD8u) { return; }
    }
    ctx->pc = 0x320FD8u;
label_320fd8:
    // 0x320fd8: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x320fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_320fdc:
    // 0x320fdc: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x320fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_320fe0:
    // 0x320fe0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x320fe0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_320fe4:
    // 0x320fe4: 0x24a5c5b0  addiu       $a1, $a1, -0x3A50
    ctx->pc = 0x320fe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952368));
label_320fe8:
    // 0x320fe8: 0xc123944  jal         func_48E510
label_320fec:
    if (ctx->pc == 0x320FECu) {
        ctx->pc = 0x320FECu;
            // 0x320fec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x320FF0u;
        goto label_320ff0;
    }
    ctx->pc = 0x320FE8u;
    SET_GPR_U32(ctx, 31, 0x320FF0u);
    ctx->pc = 0x320FECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x320FE8u;
            // 0x320fec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320FF0u; }
        if (ctx->pc != 0x320FF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320FF0u; }
        if (ctx->pc != 0x320FF0u) { return; }
    }
    ctx->pc = 0x320FF0u;
label_320ff0:
    // 0x320ff0: 0x2665ffff  addiu       $a1, $s3, -0x1
    ctx->pc = 0x320ff0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_320ff4:
    // 0x320ff4: 0x26840030  addiu       $a0, $s4, 0x30
    ctx->pc = 0x320ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
label_320ff8:
    // 0x320ff8: 0xc0b90e0  jal         func_2E4380
label_320ffc:
    if (ctx->pc == 0x320FFCu) {
        ctx->pc = 0x320FFCu;
            // 0x320ffc: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x321000u;
        goto label_321000;
    }
    ctx->pc = 0x320FF8u;
    SET_GPR_U32(ctx, 31, 0x321000u);
    ctx->pc = 0x320FFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x320FF8u;
            // 0x320ffc: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4380u;
    if (runtime->hasFunction(0x2E4380u)) {
        auto targetFn = runtime->lookupFunction(0x2E4380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321000u; }
        if (ctx->pc != 0x321000u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4380_0x2e4380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321000u; }
        if (ctx->pc != 0x321000u) { return; }
    }
    ctx->pc = 0x321000u;
label_321000:
    // 0x321000: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_321004:
    if (ctx->pc == 0x321004u) {
        ctx->pc = 0x321004u;
            // 0x321004: 0x8ea50008  lw          $a1, 0x8($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
        ctx->pc = 0x321008u;
        goto label_321008;
    }
    ctx->pc = 0x321000u;
    {
        const bool branch_taken_0x321000 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x321000) {
            ctx->pc = 0x321004u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x321000u;
            // 0x321004: 0x8ea50008  lw          $a1, 0x8($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x321024u;
            goto label_321024;
        }
    }
    ctx->pc = 0x321008u;
label_321008:
    // 0x321008: 0x8ea50008  lw          $a1, 0x8($s5)
    ctx->pc = 0x321008u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_32100c:
    // 0x32100c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x32100cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_321010:
    // 0x321010: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x321010u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_321014:
    // 0x321014: 0xc123654  jal         func_48D950
label_321018:
    if (ctx->pc == 0x321018u) {
        ctx->pc = 0x321018u;
            // 0x321018: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32101Cu;
        goto label_32101c;
    }
    ctx->pc = 0x321014u;
    SET_GPR_U32(ctx, 31, 0x32101Cu);
    ctx->pc = 0x321018u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x321014u;
            // 0x321018: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32101Cu; }
        if (ctx->pc != 0x32101Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32101Cu; }
        if (ctx->pc != 0x32101Cu) { return; }
    }
    ctx->pc = 0x32101Cu;
label_32101c:
    // 0x32101c: 0x10000007  b           . + 4 + (0x7 << 2)
label_321020:
    if (ctx->pc == 0x321020u) {
        ctx->pc = 0x321020u;
            // 0x321020: 0x36310002  ori         $s1, $s1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)2);
        ctx->pc = 0x321024u;
        goto label_321024;
    }
    ctx->pc = 0x32101Cu;
    {
        const bool branch_taken_0x32101c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x321020u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32101Cu;
            // 0x321020: 0x36310002  ori         $s1, $s1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32101c) {
            ctx->pc = 0x32103Cu;
            goto label_32103c;
        }
    }
    ctx->pc = 0x321024u;
label_321024:
    // 0x321024: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x321024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_321028:
    // 0x321028: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x321028u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_32102c:
    // 0x32102c: 0xc123654  jal         func_48D950
label_321030:
    if (ctx->pc == 0x321030u) {
        ctx->pc = 0x321030u;
            // 0x321030: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x321034u;
        goto label_321034;
    }
    ctx->pc = 0x32102Cu;
    SET_GPR_U32(ctx, 31, 0x321034u);
    ctx->pc = 0x321030u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32102Cu;
            // 0x321030: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321034u; }
        if (ctx->pc != 0x321034u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321034u; }
        if (ctx->pc != 0x321034u) { return; }
    }
    ctx->pc = 0x321034u;
label_321034:
    // 0x321034: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x321034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_321038:
    // 0x321038: 0x2228824  and         $s1, $s1, $v0
    ctx->pc = 0x321038u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
label_32103c:
    // 0x32103c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x32103cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_321040:
    // 0x321040: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x321040u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_321044:
    // 0x321044: 0xc1232d8  jal         func_48CB60
label_321048:
    if (ctx->pc == 0x321048u) {
        ctx->pc = 0x321048u;
            // 0x321048: 0x2405002f  addiu       $a1, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->pc = 0x32104Cu;
        goto label_32104c;
    }
    ctx->pc = 0x321044u;
    SET_GPR_U32(ctx, 31, 0x32104Cu);
    ctx->pc = 0x321048u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x321044u;
            // 0x321048: 0x2405002f  addiu       $a1, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CB60u;
    if (runtime->hasFunction(0x48CB60u)) {
        auto targetFn = runtime->lookupFunction(0x48CB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32104Cu; }
        if (ctx->pc != 0x32104Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CB60_0x48cb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32104Cu; }
        if (ctx->pc != 0x32104Cu) { return; }
    }
    ctx->pc = 0x32104Cu;
label_32104c:
    // 0x32104c: 0x100000ef  b           . + 4 + (0xEF << 2)
label_321050:
    if (ctx->pc == 0x321050u) {
        ctx->pc = 0x321054u;
        goto label_321054;
    }
    ctx->pc = 0x32104Cu;
    {
        const bool branch_taken_0x32104c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32104c) {
            ctx->pc = 0x32140Cu;
            goto label_32140c;
        }
    }
    ctx->pc = 0x321054u;
label_321054:
    // 0x321054: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x321054u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_321058:
    // 0x321058: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x321058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_32105c:
    // 0x32105c: 0x8c5189d0  lw          $s1, -0x7630($v0)
    ctx->pc = 0x32105cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
label_321060:
    // 0x321060: 0x8fa201fc  lw          $v0, 0x1FC($sp)
    ctx->pc = 0x321060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
label_321064:
    // 0x321064: 0x50430071  beql        $v0, $v1, . + 4 + (0x71 << 2)
label_321068:
    if (ctx->pc == 0x321068u) {
        ctx->pc = 0x321068u;
            // 0x321068: 0x7ba200e0  lq          $v0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->pc = 0x32106Cu;
        goto label_32106c;
    }
    ctx->pc = 0x321064u;
    {
        const bool branch_taken_0x321064 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x321064) {
            ctx->pc = 0x321068u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x321064u;
            // 0x321068: 0x7ba200e0  lq          $v0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32122Cu;
            goto label_32122c;
        }
    }
    ctx->pc = 0x32106Cu;
label_32106c:
    // 0x32106c: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_321070:
    if (ctx->pc == 0x321070u) {
        ctx->pc = 0x321070u;
            // 0x321070: 0x7ba200e0  lq          $v0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->pc = 0x321074u;
        goto label_321074;
    }
    ctx->pc = 0x32106Cu;
    {
        const bool branch_taken_0x32106c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32106c) {
            ctx->pc = 0x321070u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32106Cu;
            // 0x321070: 0x7ba200e0  lq          $v0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32107Cu;
            goto label_32107c;
        }
    }
    ctx->pc = 0x321074u;
label_321074:
    // 0x321074: 0x100000e5  b           . + 4 + (0xE5 << 2)
label_321078:
    if (ctx->pc == 0x321078u) {
        ctx->pc = 0x32107Cu;
        goto label_32107c;
    }
    ctx->pc = 0x321074u;
    {
        const bool branch_taken_0x321074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x321074) {
            ctx->pc = 0x32140Cu;
            goto label_32140c;
        }
    }
    ctx->pc = 0x32107Cu;
label_32107c:
    // 0x32107c: 0x2c410007  sltiu       $at, $v0, 0x7
    ctx->pc = 0x32107cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_321080:
    // 0x321080: 0x102000e2  beqz        $at, . + 4 + (0xE2 << 2)
label_321084:
    if (ctx->pc == 0x321084u) {
        ctx->pc = 0x321088u;
        goto label_321088;
    }
    ctx->pc = 0x321080u;
    {
        const bool branch_taken_0x321080 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x321080) {
            ctx->pc = 0x32140Cu;
            goto label_32140c;
        }
    }
    ctx->pc = 0x321088u;
label_321088:
    // 0x321088: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x321088u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
label_32108c:
    // 0x32108c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x32108cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_321090:
    // 0x321090: 0x2463c720  addiu       $v1, $v1, -0x38E0
    ctx->pc = 0x321090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952736));
label_321094:
    // 0x321094: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x321094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_321098:
    // 0x321098: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x321098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_32109c:
    // 0x32109c: 0x400008  jr          $v0
label_3210a0:
    if (ctx->pc == 0x3210A0u) {
        ctx->pc = 0x3210A4u;
        goto label_3210a4;
    }
    ctx->pc = 0x32109Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3210A4u: goto label_3210a4;
            case 0x3210C4u: goto label_3210c4;
            case 0x321114u: goto label_321114;
            case 0x321134u: goto label_321134;
            case 0x321154u: goto label_321154;
            case 0x3211A4u: goto label_3211a4;
            case 0x3211DCu: goto label_3211dc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x3210A4u;
label_3210a4:
    // 0x3210a4: 0xc0b8c44  jal         func_2E3110
label_3210a8:
    if (ctx->pc == 0x3210A8u) {
        ctx->pc = 0x3210A8u;
            // 0x3210a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3210ACu;
        goto label_3210ac;
    }
    ctx->pc = 0x3210A4u;
    SET_GPR_U32(ctx, 31, 0x3210ACu);
    ctx->pc = 0x3210A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3210A4u;
            // 0x3210a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3110u;
    if (runtime->hasFunction(0x2E3110u)) {
        auto targetFn = runtime->lookupFunction(0x2E3110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3210ACu; }
        if (ctx->pc != 0x3210ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E3110_0x2e3110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3210ACu; }
        if (ctx->pc != 0x3210ACu) { return; }
    }
    ctx->pc = 0x3210ACu;
label_3210ac:
    // 0x3210ac: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x3210acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3210b0:
    // 0x3210b0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3210b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3210b4:
    // 0x3210b4: 0xc1232d8  jal         func_48CB60
label_3210b8:
    if (ctx->pc == 0x3210B8u) {
        ctx->pc = 0x3210B8u;
            // 0x3210b8: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->pc = 0x3210BCu;
        goto label_3210bc;
    }
    ctx->pc = 0x3210B4u;
    SET_GPR_U32(ctx, 31, 0x3210BCu);
    ctx->pc = 0x3210B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3210B4u;
            // 0x3210b8: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CB60u;
    if (runtime->hasFunction(0x48CB60u)) {
        auto targetFn = runtime->lookupFunction(0x48CB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3210BCu; }
        if (ctx->pc != 0x3210BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CB60_0x48cb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3210BCu; }
        if (ctx->pc != 0x3210BCu) { return; }
    }
    ctx->pc = 0x3210BCu;
label_3210bc:
    // 0x3210bc: 0x100000d3  b           . + 4 + (0xD3 << 2)
label_3210c0:
    if (ctx->pc == 0x3210C0u) {
        ctx->pc = 0x3210C4u;
        goto label_3210c4;
    }
    ctx->pc = 0x3210BCu;
    {
        const bool branch_taken_0x3210bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3210bc) {
            ctx->pc = 0x32140Cu;
            goto label_32140c;
        }
    }
    ctx->pc = 0x3210C4u;
label_3210c4:
    // 0x3210c4: 0xc0b8c3c  jal         func_2E30F0
label_3210c8:
    if (ctx->pc == 0x3210C8u) {
        ctx->pc = 0x3210C8u;
            // 0x3210c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3210CCu;
        goto label_3210cc;
    }
    ctx->pc = 0x3210C4u;
    SET_GPR_U32(ctx, 31, 0x3210CCu);
    ctx->pc = 0x3210C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3210C4u;
            // 0x3210c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E30F0u;
    if (runtime->hasFunction(0x2E30F0u)) {
        auto targetFn = runtime->lookupFunction(0x2E30F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3210CCu; }
        if (ctx->pc != 0x3210CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E30F0_0x2e30f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3210CCu; }
        if (ctx->pc != 0x3210CCu) { return; }
    }
    ctx->pc = 0x3210CCu;
label_3210cc:
    // 0x3210cc: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x3210ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3210d0:
    // 0x3210d0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3210d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3210d4:
    // 0x3210d4: 0xc1232d8  jal         func_48CB60
label_3210d8:
    if (ctx->pc == 0x3210D8u) {
        ctx->pc = 0x3210D8u;
            // 0x3210d8: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->pc = 0x3210DCu;
        goto label_3210dc;
    }
    ctx->pc = 0x3210D4u;
    SET_GPR_U32(ctx, 31, 0x3210DCu);
    ctx->pc = 0x3210D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3210D4u;
            // 0x3210d8: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CB60u;
    if (runtime->hasFunction(0x48CB60u)) {
        auto targetFn = runtime->lookupFunction(0x48CB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3210DCu; }
        if (ctx->pc != 0x3210DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CB60_0x48cb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3210DCu; }
        if (ctx->pc != 0x3210DCu) { return; }
    }
    ctx->pc = 0x3210DCu;
label_3210dc:
    // 0x3210dc: 0xc0b8c34  jal         func_2E30D0
label_3210e0:
    if (ctx->pc == 0x3210E0u) {
        ctx->pc = 0x3210E0u;
            // 0x3210e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3210E4u;
        goto label_3210e4;
    }
    ctx->pc = 0x3210DCu;
    SET_GPR_U32(ctx, 31, 0x3210E4u);
    ctx->pc = 0x3210E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3210DCu;
            // 0x3210e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E30D0u;
    if (runtime->hasFunction(0x2E30D0u)) {
        auto targetFn = runtime->lookupFunction(0x2E30D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3210E4u; }
        if (ctx->pc != 0x3210E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E30D0_0x2e30d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3210E4u; }
        if (ctx->pc != 0x3210E4u) { return; }
    }
    ctx->pc = 0x3210E4u;
label_3210e4:
    // 0x3210e4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x3210e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3210e8:
    // 0x3210e8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3210e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3210ec:
    // 0x3210ec: 0xc1232d8  jal         func_48CB60
label_3210f0:
    if (ctx->pc == 0x3210F0u) {
        ctx->pc = 0x3210F0u;
            // 0x3210f0: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x3210F4u;
        goto label_3210f4;
    }
    ctx->pc = 0x3210ECu;
    SET_GPR_U32(ctx, 31, 0x3210F4u);
    ctx->pc = 0x3210F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3210ECu;
            // 0x3210f0: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CB60u;
    if (runtime->hasFunction(0x48CB60u)) {
        auto targetFn = runtime->lookupFunction(0x48CB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3210F4u; }
        if (ctx->pc != 0x3210F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CB60_0x48cb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3210F4u; }
        if (ctx->pc != 0x3210F4u) { return; }
    }
    ctx->pc = 0x3210F4u;
label_3210f4:
    // 0x3210f4: 0xc0b8c2c  jal         func_2E30B0
label_3210f8:
    if (ctx->pc == 0x3210F8u) {
        ctx->pc = 0x3210F8u;
            // 0x3210f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3210FCu;
        goto label_3210fc;
    }
    ctx->pc = 0x3210F4u;
    SET_GPR_U32(ctx, 31, 0x3210FCu);
    ctx->pc = 0x3210F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3210F4u;
            // 0x3210f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E30B0u;
    if (runtime->hasFunction(0x2E30B0u)) {
        auto targetFn = runtime->lookupFunction(0x2E30B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3210FCu; }
        if (ctx->pc != 0x3210FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E30B0_0x2e30b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3210FCu; }
        if (ctx->pc != 0x3210FCu) { return; }
    }
    ctx->pc = 0x3210FCu;
label_3210fc:
    // 0x3210fc: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x3210fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_321100:
    // 0x321100: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x321100u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_321104:
    // 0x321104: 0xc1232d8  jal         func_48CB60
label_321108:
    if (ctx->pc == 0x321108u) {
        ctx->pc = 0x321108u;
            // 0x321108: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->pc = 0x32110Cu;
        goto label_32110c;
    }
    ctx->pc = 0x321104u;
    SET_GPR_U32(ctx, 31, 0x32110Cu);
    ctx->pc = 0x321108u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x321104u;
            // 0x321108: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CB60u;
    if (runtime->hasFunction(0x48CB60u)) {
        auto targetFn = runtime->lookupFunction(0x48CB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32110Cu; }
        if (ctx->pc != 0x32110Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CB60_0x48cb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32110Cu; }
        if (ctx->pc != 0x32110Cu) { return; }
    }
    ctx->pc = 0x32110Cu;
label_32110c:
    // 0x32110c: 0x100000bf  b           . + 4 + (0xBF << 2)
label_321110:
    if (ctx->pc == 0x321110u) {
        ctx->pc = 0x321114u;
        goto label_321114;
    }
    ctx->pc = 0x32110Cu;
    {
        const bool branch_taken_0x32110c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32110c) {
            ctx->pc = 0x32140Cu;
            goto label_32140c;
        }
    }
    ctx->pc = 0x321114u;
label_321114:
    // 0x321114: 0xc0b8c24  jal         func_2E3090
label_321118:
    if (ctx->pc == 0x321118u) {
        ctx->pc = 0x321118u;
            // 0x321118: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32111Cu;
        goto label_32111c;
    }
    ctx->pc = 0x321114u;
    SET_GPR_U32(ctx, 31, 0x32111Cu);
    ctx->pc = 0x321118u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x321114u;
            // 0x321118: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3090u;
    if (runtime->hasFunction(0x2E3090u)) {
        auto targetFn = runtime->lookupFunction(0x2E3090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32111Cu; }
        if (ctx->pc != 0x32111Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E3090_0x2e3090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32111Cu; }
        if (ctx->pc != 0x32111Cu) { return; }
    }
    ctx->pc = 0x32111Cu;
label_32111c:
    // 0x32111c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x32111cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_321120:
    // 0x321120: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x321120u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_321124:
    // 0x321124: 0xc1232d8  jal         func_48CB60
label_321128:
    if (ctx->pc == 0x321128u) {
        ctx->pc = 0x321128u;
            // 0x321128: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->pc = 0x32112Cu;
        goto label_32112c;
    }
    ctx->pc = 0x321124u;
    SET_GPR_U32(ctx, 31, 0x32112Cu);
    ctx->pc = 0x321128u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x321124u;
            // 0x321128: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CB60u;
    if (runtime->hasFunction(0x48CB60u)) {
        auto targetFn = runtime->lookupFunction(0x48CB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32112Cu; }
        if (ctx->pc != 0x32112Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CB60_0x48cb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32112Cu; }
        if (ctx->pc != 0x32112Cu) { return; }
    }
    ctx->pc = 0x32112Cu;
label_32112c:
    // 0x32112c: 0x100000b7  b           . + 4 + (0xB7 << 2)
label_321130:
    if (ctx->pc == 0x321130u) {
        ctx->pc = 0x321134u;
        goto label_321134;
    }
    ctx->pc = 0x32112Cu;
    {
        const bool branch_taken_0x32112c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32112c) {
            ctx->pc = 0x32140Cu;
            goto label_32140c;
        }
    }
    ctx->pc = 0x321134u;
label_321134:
    // 0x321134: 0xc0b8c1c  jal         func_2E3070
label_321138:
    if (ctx->pc == 0x321138u) {
        ctx->pc = 0x321138u;
            // 0x321138: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32113Cu;
        goto label_32113c;
    }
    ctx->pc = 0x321134u;
    SET_GPR_U32(ctx, 31, 0x32113Cu);
    ctx->pc = 0x321138u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x321134u;
            // 0x321138: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3070u;
    if (runtime->hasFunction(0x2E3070u)) {
        auto targetFn = runtime->lookupFunction(0x2E3070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32113Cu; }
        if (ctx->pc != 0x32113Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E3070_0x2e3070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32113Cu; }
        if (ctx->pc != 0x32113Cu) { return; }
    }
    ctx->pc = 0x32113Cu;
label_32113c:
    // 0x32113c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x32113cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_321140:
    // 0x321140: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x321140u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_321144:
    // 0x321144: 0xc1232d8  jal         func_48CB60
label_321148:
    if (ctx->pc == 0x321148u) {
        ctx->pc = 0x321148u;
            // 0x321148: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->pc = 0x32114Cu;
        goto label_32114c;
    }
    ctx->pc = 0x321144u;
    SET_GPR_U32(ctx, 31, 0x32114Cu);
    ctx->pc = 0x321148u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x321144u;
            // 0x321148: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CB60u;
    if (runtime->hasFunction(0x48CB60u)) {
        auto targetFn = runtime->lookupFunction(0x48CB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32114Cu; }
        if (ctx->pc != 0x32114Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CB60_0x48cb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32114Cu; }
        if (ctx->pc != 0x32114Cu) { return; }
    }
    ctx->pc = 0x32114Cu;
label_32114c:
    // 0x32114c: 0x100000af  b           . + 4 + (0xAF << 2)
label_321150:
    if (ctx->pc == 0x321150u) {
        ctx->pc = 0x321154u;
        goto label_321154;
    }
    ctx->pc = 0x32114Cu;
    {
        const bool branch_taken_0x32114c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32114c) {
            ctx->pc = 0x32140Cu;
            goto label_32140c;
        }
    }
    ctx->pc = 0x321154u;
label_321154:
    // 0x321154: 0xc0b8c14  jal         func_2E3050
label_321158:
    if (ctx->pc == 0x321158u) {
        ctx->pc = 0x321158u;
            // 0x321158: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32115Cu;
        goto label_32115c;
    }
    ctx->pc = 0x321154u;
    SET_GPR_U32(ctx, 31, 0x32115Cu);
    ctx->pc = 0x321158u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x321154u;
            // 0x321158: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3050u;
    if (runtime->hasFunction(0x2E3050u)) {
        auto targetFn = runtime->lookupFunction(0x2E3050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32115Cu; }
        if (ctx->pc != 0x32115Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E3050_0x2e3050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32115Cu; }
        if (ctx->pc != 0x32115Cu) { return; }
    }
    ctx->pc = 0x32115Cu;
label_32115c:
    // 0x32115c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x32115cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_321160:
    // 0x321160: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x321160u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_321164:
    // 0x321164: 0xc1232d8  jal         func_48CB60
label_321168:
    if (ctx->pc == 0x321168u) {
        ctx->pc = 0x321168u;
            // 0x321168: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->pc = 0x32116Cu;
        goto label_32116c;
    }
    ctx->pc = 0x321164u;
    SET_GPR_U32(ctx, 31, 0x32116Cu);
    ctx->pc = 0x321168u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x321164u;
            // 0x321168: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CB60u;
    if (runtime->hasFunction(0x48CB60u)) {
        auto targetFn = runtime->lookupFunction(0x48CB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32116Cu; }
        if (ctx->pc != 0x32116Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CB60_0x48cb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32116Cu; }
        if (ctx->pc != 0x32116Cu) { return; }
    }
    ctx->pc = 0x32116Cu;
label_32116c:
    // 0x32116c: 0xc0b8c0c  jal         func_2E3030
label_321170:
    if (ctx->pc == 0x321170u) {
        ctx->pc = 0x321170u;
            // 0x321170: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x321174u;
        goto label_321174;
    }
    ctx->pc = 0x32116Cu;
    SET_GPR_U32(ctx, 31, 0x321174u);
    ctx->pc = 0x321170u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32116Cu;
            // 0x321170: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3030u;
    if (runtime->hasFunction(0x2E3030u)) {
        auto targetFn = runtime->lookupFunction(0x2E3030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321174u; }
        if (ctx->pc != 0x321174u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E3030_0x2e3030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321174u; }
        if (ctx->pc != 0x321174u) { return; }
    }
    ctx->pc = 0x321174u;
label_321174:
    // 0x321174: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x321174u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_321178:
    // 0x321178: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x321178u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32117c:
    // 0x32117c: 0xc1232d8  jal         func_48CB60
label_321180:
    if (ctx->pc == 0x321180u) {
        ctx->pc = 0x321180u;
            // 0x321180: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x321184u;
        goto label_321184;
    }
    ctx->pc = 0x32117Cu;
    SET_GPR_U32(ctx, 31, 0x321184u);
    ctx->pc = 0x321180u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32117Cu;
            // 0x321180: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CB60u;
    if (runtime->hasFunction(0x48CB60u)) {
        auto targetFn = runtime->lookupFunction(0x48CB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321184u; }
        if (ctx->pc != 0x321184u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CB60_0x48cb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321184u; }
        if (ctx->pc != 0x321184u) { return; }
    }
    ctx->pc = 0x321184u;
label_321184:
    // 0x321184: 0xc0b8bdc  jal         func_2E2F70
label_321188:
    if (ctx->pc == 0x321188u) {
        ctx->pc = 0x321188u;
            // 0x321188: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32118Cu;
        goto label_32118c;
    }
    ctx->pc = 0x321184u;
    SET_GPR_U32(ctx, 31, 0x32118Cu);
    ctx->pc = 0x321188u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x321184u;
            // 0x321188: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2F70u;
    if (runtime->hasFunction(0x2E2F70u)) {
        auto targetFn = runtime->lookupFunction(0x2E2F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32118Cu; }
        if (ctx->pc != 0x32118Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E2F70_0x2e2f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32118Cu; }
        if (ctx->pc != 0x32118Cu) { return; }
    }
    ctx->pc = 0x32118Cu;
label_32118c:
    // 0x32118c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x32118cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_321190:
    // 0x321190: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x321190u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_321194:
    // 0x321194: 0xc1232d8  jal         func_48CB60
label_321198:
    if (ctx->pc == 0x321198u) {
        ctx->pc = 0x321198u;
            // 0x321198: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->pc = 0x32119Cu;
        goto label_32119c;
    }
    ctx->pc = 0x321194u;
    SET_GPR_U32(ctx, 31, 0x32119Cu);
    ctx->pc = 0x321198u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x321194u;
            // 0x321198: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CB60u;
    if (runtime->hasFunction(0x48CB60u)) {
        auto targetFn = runtime->lookupFunction(0x48CB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32119Cu; }
        if (ctx->pc != 0x32119Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CB60_0x48cb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32119Cu; }
        if (ctx->pc != 0x32119Cu) { return; }
    }
    ctx->pc = 0x32119Cu;
label_32119c:
    // 0x32119c: 0x1000009b  b           . + 4 + (0x9B << 2)
label_3211a0:
    if (ctx->pc == 0x3211A0u) {
        ctx->pc = 0x3211A4u;
        goto label_3211a4;
    }
    ctx->pc = 0x32119Cu;
    {
        const bool branch_taken_0x32119c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32119c) {
            ctx->pc = 0x32140Cu;
            goto label_32140c;
        }
    }
    ctx->pc = 0x3211A4u;
label_3211a4:
    // 0x3211a4: 0xc0b8bfc  jal         func_2E2FF0
label_3211a8:
    if (ctx->pc == 0x3211A8u) {
        ctx->pc = 0x3211A8u;
            // 0x3211a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3211ACu;
        goto label_3211ac;
    }
    ctx->pc = 0x3211A4u;
    SET_GPR_U32(ctx, 31, 0x3211ACu);
    ctx->pc = 0x3211A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3211A4u;
            // 0x3211a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2FF0u;
    if (runtime->hasFunction(0x2E2FF0u)) {
        auto targetFn = runtime->lookupFunction(0x2E2FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3211ACu; }
        if (ctx->pc != 0x3211ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E2FF0_0x2e2ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3211ACu; }
        if (ctx->pc != 0x3211ACu) { return; }
    }
    ctx->pc = 0x3211ACu;
label_3211ac:
    // 0x3211ac: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x3211acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3211b0:
    // 0x3211b0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3211b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3211b4:
    // 0x3211b4: 0xc1232d8  jal         func_48CB60
label_3211b8:
    if (ctx->pc == 0x3211B8u) {
        ctx->pc = 0x3211B8u;
            // 0x3211b8: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->pc = 0x3211BCu;
        goto label_3211bc;
    }
    ctx->pc = 0x3211B4u;
    SET_GPR_U32(ctx, 31, 0x3211BCu);
    ctx->pc = 0x3211B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3211B4u;
            // 0x3211b8: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CB60u;
    if (runtime->hasFunction(0x48CB60u)) {
        auto targetFn = runtime->lookupFunction(0x48CB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3211BCu; }
        if (ctx->pc != 0x3211BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CB60_0x48cb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3211BCu; }
        if (ctx->pc != 0x3211BCu) { return; }
    }
    ctx->pc = 0x3211BCu;
label_3211bc:
    // 0x3211bc: 0xc0b8c04  jal         func_2E3010
label_3211c0:
    if (ctx->pc == 0x3211C0u) {
        ctx->pc = 0x3211C0u;
            // 0x3211c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3211C4u;
        goto label_3211c4;
    }
    ctx->pc = 0x3211BCu;
    SET_GPR_U32(ctx, 31, 0x3211C4u);
    ctx->pc = 0x3211C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3211BCu;
            // 0x3211c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3010u;
    if (runtime->hasFunction(0x2E3010u)) {
        auto targetFn = runtime->lookupFunction(0x2E3010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3211C4u; }
        if (ctx->pc != 0x3211C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E3010_0x2e3010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3211C4u; }
        if (ctx->pc != 0x3211C4u) { return; }
    }
    ctx->pc = 0x3211C4u;
label_3211c4:
    // 0x3211c4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x3211c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3211c8:
    // 0x3211c8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3211c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3211cc:
    // 0x3211cc: 0xc1232d8  jal         func_48CB60
label_3211d0:
    if (ctx->pc == 0x3211D0u) {
        ctx->pc = 0x3211D0u;
            // 0x3211d0: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->pc = 0x3211D4u;
        goto label_3211d4;
    }
    ctx->pc = 0x3211CCu;
    SET_GPR_U32(ctx, 31, 0x3211D4u);
    ctx->pc = 0x3211D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3211CCu;
            // 0x3211d0: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CB60u;
    if (runtime->hasFunction(0x48CB60u)) {
        auto targetFn = runtime->lookupFunction(0x48CB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3211D4u; }
        if (ctx->pc != 0x3211D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CB60_0x48cb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3211D4u; }
        if (ctx->pc != 0x3211D4u) { return; }
    }
    ctx->pc = 0x3211D4u;
label_3211d4:
    // 0x3211d4: 0x1000008d  b           . + 4 + (0x8D << 2)
label_3211d8:
    if (ctx->pc == 0x3211D8u) {
        ctx->pc = 0x3211DCu;
        goto label_3211dc;
    }
    ctx->pc = 0x3211D4u;
    {
        const bool branch_taken_0x3211d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3211d4) {
            ctx->pc = 0x32140Cu;
            goto label_32140c;
        }
    }
    ctx->pc = 0x3211DCu;
label_3211dc:
    // 0x3211dc: 0xc0b8bec  jal         func_2E2FB0
label_3211e0:
    if (ctx->pc == 0x3211E0u) {
        ctx->pc = 0x3211E0u;
            // 0x3211e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3211E4u;
        goto label_3211e4;
    }
    ctx->pc = 0x3211DCu;
    SET_GPR_U32(ctx, 31, 0x3211E4u);
    ctx->pc = 0x3211E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3211DCu;
            // 0x3211e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2FB0u;
    if (runtime->hasFunction(0x2E2FB0u)) {
        auto targetFn = runtime->lookupFunction(0x2E2FB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3211E4u; }
        if (ctx->pc != 0x3211E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E2FB0_0x2e2fb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3211E4u; }
        if (ctx->pc != 0x3211E4u) { return; }
    }
    ctx->pc = 0x3211E4u;
label_3211e4:
    // 0x3211e4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x3211e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3211e8:
    // 0x3211e8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3211e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3211ec:
    // 0x3211ec: 0xc1232d8  jal         func_48CB60
label_3211f0:
    if (ctx->pc == 0x3211F0u) {
        ctx->pc = 0x3211F0u;
            // 0x3211f0: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->pc = 0x3211F4u;
        goto label_3211f4;
    }
    ctx->pc = 0x3211ECu;
    SET_GPR_U32(ctx, 31, 0x3211F4u);
    ctx->pc = 0x3211F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3211ECu;
            // 0x3211f0: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CB60u;
    if (runtime->hasFunction(0x48CB60u)) {
        auto targetFn = runtime->lookupFunction(0x48CB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3211F4u; }
        if (ctx->pc != 0x3211F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CB60_0x48cb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3211F4u; }
        if (ctx->pc != 0x3211F4u) { return; }
    }
    ctx->pc = 0x3211F4u;
label_3211f4:
    // 0x3211f4: 0xc0b8be4  jal         func_2E2F90
label_3211f8:
    if (ctx->pc == 0x3211F8u) {
        ctx->pc = 0x3211F8u;
            // 0x3211f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3211FCu;
        goto label_3211fc;
    }
    ctx->pc = 0x3211F4u;
    SET_GPR_U32(ctx, 31, 0x3211FCu);
    ctx->pc = 0x3211F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3211F4u;
            // 0x3211f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2F90u;
    if (runtime->hasFunction(0x2E2F90u)) {
        auto targetFn = runtime->lookupFunction(0x2E2F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3211FCu; }
        if (ctx->pc != 0x3211FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E2F90_0x2e2f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3211FCu; }
        if (ctx->pc != 0x3211FCu) { return; }
    }
    ctx->pc = 0x3211FCu;
label_3211fc:
    // 0x3211fc: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x3211fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_321200:
    // 0x321200: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x321200u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_321204:
    // 0x321204: 0xc1232d8  jal         func_48CB60
label_321208:
    if (ctx->pc == 0x321208u) {
        ctx->pc = 0x321208u;
            // 0x321208: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->pc = 0x32120Cu;
        goto label_32120c;
    }
    ctx->pc = 0x321204u;
    SET_GPR_U32(ctx, 31, 0x32120Cu);
    ctx->pc = 0x321208u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x321204u;
            // 0x321208: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CB60u;
    if (runtime->hasFunction(0x48CB60u)) {
        auto targetFn = runtime->lookupFunction(0x48CB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32120Cu; }
        if (ctx->pc != 0x32120Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CB60_0x48cb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32120Cu; }
        if (ctx->pc != 0x32120Cu) { return; }
    }
    ctx->pc = 0x32120Cu;
label_32120c:
    // 0x32120c: 0xc0b8bf4  jal         func_2E2FD0
label_321210:
    if (ctx->pc == 0x321210u) {
        ctx->pc = 0x321210u;
            // 0x321210: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x321214u;
        goto label_321214;
    }
    ctx->pc = 0x32120Cu;
    SET_GPR_U32(ctx, 31, 0x321214u);
    ctx->pc = 0x321210u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32120Cu;
            // 0x321210: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2FD0u;
    if (runtime->hasFunction(0x2E2FD0u)) {
        auto targetFn = runtime->lookupFunction(0x2E2FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321214u; }
        if (ctx->pc != 0x321214u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E2FD0_0x2e2fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321214u; }
        if (ctx->pc != 0x321214u) { return; }
    }
    ctx->pc = 0x321214u;
label_321214:
    // 0x321214: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x321214u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_321218:
    // 0x321218: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x321218u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32121c:
    // 0x32121c: 0xc1232d8  jal         func_48CB60
label_321220:
    if (ctx->pc == 0x321220u) {
        ctx->pc = 0x321220u;
            // 0x321220: 0x24050039  addiu       $a1, $zero, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
        ctx->pc = 0x321224u;
        goto label_321224;
    }
    ctx->pc = 0x32121Cu;
    SET_GPR_U32(ctx, 31, 0x321224u);
    ctx->pc = 0x321220u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32121Cu;
            // 0x321220: 0x24050039  addiu       $a1, $zero, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CB60u;
    if (runtime->hasFunction(0x48CB60u)) {
        auto targetFn = runtime->lookupFunction(0x48CB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321224u; }
        if (ctx->pc != 0x321224u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CB60_0x48cb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321224u; }
        if (ctx->pc != 0x321224u) { return; }
    }
    ctx->pc = 0x321224u;
label_321224:
    // 0x321224: 0x10000079  b           . + 4 + (0x79 << 2)
label_321228:
    if (ctx->pc == 0x321228u) {
        ctx->pc = 0x32122Cu;
        goto label_32122c;
    }
    ctx->pc = 0x321224u;
    {
        const bool branch_taken_0x321224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x321224) {
            ctx->pc = 0x32140Cu;
            goto label_32140c;
        }
    }
    ctx->pc = 0x32122Cu;
label_32122c:
    // 0x32122c: 0x2c410007  sltiu       $at, $v0, 0x7
    ctx->pc = 0x32122cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_321230:
    // 0x321230: 0x10200076  beqz        $at, . + 4 + (0x76 << 2)
label_321234:
    if (ctx->pc == 0x321234u) {
        ctx->pc = 0x321238u;
        goto label_321238;
    }
    ctx->pc = 0x321230u;
    {
        const bool branch_taken_0x321230 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x321230) {
            ctx->pc = 0x32140Cu;
            goto label_32140c;
        }
    }
    ctx->pc = 0x321238u;
label_321238:
    // 0x321238: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x321238u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
label_32123c:
    // 0x32123c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x32123cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_321240:
    // 0x321240: 0x2463c700  addiu       $v1, $v1, -0x3900
    ctx->pc = 0x321240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952704));
label_321244:
    // 0x321244: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x321244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_321248:
    // 0x321248: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x321248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_32124c:
    // 0x32124c: 0x400008  jr          $v0
label_321250:
    if (ctx->pc == 0x321250u) {
        ctx->pc = 0x321254u;
        goto label_321254;
    }
    ctx->pc = 0x32124Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x321254u: goto label_321254;
            case 0x321278u: goto label_321278;
            case 0x3212D4u: goto label_3212d4;
            case 0x3212F8u: goto label_3212f8;
            case 0x32131Cu: goto label_32131c;
            case 0x321378u: goto label_321378;
            case 0x3213B8u: goto label_3213b8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x321254u;
label_321254:
    // 0x321254: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x321254u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_321258:
    // 0x321258: 0xc123328  jal         func_48CCA0
label_32125c:
    if (ctx->pc == 0x32125Cu) {
        ctx->pc = 0x32125Cu;
            // 0x32125c: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->pc = 0x321260u;
        goto label_321260;
    }
    ctx->pc = 0x321258u;
    SET_GPR_U32(ctx, 31, 0x321260u);
    ctx->pc = 0x32125Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x321258u;
            // 0x32125c: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CCA0u;
    if (runtime->hasFunction(0x48CCA0u)) {
        auto targetFn = runtime->lookupFunction(0x48CCA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321260u; }
        if (ctx->pc != 0x321260u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CCA0_0x48cca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321260u; }
        if (ctx->pc != 0x321260u) { return; }
    }
    ctx->pc = 0x321260u;
label_321260:
    // 0x321260: 0x22e3c  dsll32      $a1, $v0, 24
    ctx->pc = 0x321260u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 24));
label_321264:
    // 0x321264: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x321264u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_321268:
    // 0x321268: 0xc0b8cb4  jal         func_2E32D0
label_32126c:
    if (ctx->pc == 0x32126Cu) {
        ctx->pc = 0x32126Cu;
            // 0x32126c: 0x52e3f  dsra32      $a1, $a1, 24 (Delay Slot)
        SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
        ctx->pc = 0x321270u;
        goto label_321270;
    }
    ctx->pc = 0x321268u;
    SET_GPR_U32(ctx, 31, 0x321270u);
    ctx->pc = 0x32126Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x321268u;
            // 0x32126c: 0x52e3f  dsra32      $a1, $a1, 24 (Delay Slot)
        SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E32D0u;
    if (runtime->hasFunction(0x2E32D0u)) {
        auto targetFn = runtime->lookupFunction(0x2E32D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321270u; }
        if (ctx->pc != 0x321270u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E32D0_0x2e32d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321270u; }
        if (ctx->pc != 0x321270u) { return; }
    }
    ctx->pc = 0x321270u;
label_321270:
    // 0x321270: 0x10000066  b           . + 4 + (0x66 << 2)
label_321274:
    if (ctx->pc == 0x321274u) {
        ctx->pc = 0x321278u;
        goto label_321278;
    }
    ctx->pc = 0x321270u;
    {
        const bool branch_taken_0x321270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x321270) {
            ctx->pc = 0x32140Cu;
            goto label_32140c;
        }
    }
    ctx->pc = 0x321278u;
label_321278:
    // 0x321278: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x321278u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_32127c:
    // 0x32127c: 0xc123328  jal         func_48CCA0
label_321280:
    if (ctx->pc == 0x321280u) {
        ctx->pc = 0x321280u;
            // 0x321280: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->pc = 0x321284u;
        goto label_321284;
    }
    ctx->pc = 0x32127Cu;
    SET_GPR_U32(ctx, 31, 0x321284u);
    ctx->pc = 0x321280u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32127Cu;
            // 0x321280: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CCA0u;
    if (runtime->hasFunction(0x48CCA0u)) {
        auto targetFn = runtime->lookupFunction(0x48CCA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321284u; }
        if (ctx->pc != 0x321284u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CCA0_0x48cca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321284u; }
        if (ctx->pc != 0x321284u) { return; }
    }
    ctx->pc = 0x321284u;
label_321284:
    // 0x321284: 0x22e3c  dsll32      $a1, $v0, 24
    ctx->pc = 0x321284u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 24));
label_321288:
    // 0x321288: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x321288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_32128c:
    // 0x32128c: 0xc0b8cac  jal         func_2E32B0
label_321290:
    if (ctx->pc == 0x321290u) {
        ctx->pc = 0x321290u;
            // 0x321290: 0x52e3f  dsra32      $a1, $a1, 24 (Delay Slot)
        SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
        ctx->pc = 0x321294u;
        goto label_321294;
    }
    ctx->pc = 0x32128Cu;
    SET_GPR_U32(ctx, 31, 0x321294u);
    ctx->pc = 0x321290u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32128Cu;
            // 0x321290: 0x52e3f  dsra32      $a1, $a1, 24 (Delay Slot)
        SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E32B0u;
    if (runtime->hasFunction(0x2E32B0u)) {
        auto targetFn = runtime->lookupFunction(0x2E32B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321294u; }
        if (ctx->pc != 0x321294u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E32B0_0x2e32b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321294u; }
        if (ctx->pc != 0x321294u) { return; }
    }
    ctx->pc = 0x321294u;
label_321294:
    // 0x321294: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x321294u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_321298:
    // 0x321298: 0xc123328  jal         func_48CCA0
label_32129c:
    if (ctx->pc == 0x32129Cu) {
        ctx->pc = 0x32129Cu;
            // 0x32129c: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x3212A0u;
        goto label_3212a0;
    }
    ctx->pc = 0x321298u;
    SET_GPR_U32(ctx, 31, 0x3212A0u);
    ctx->pc = 0x32129Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x321298u;
            // 0x32129c: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CCA0u;
    if (runtime->hasFunction(0x48CCA0u)) {
        auto targetFn = runtime->lookupFunction(0x48CCA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3212A0u; }
        if (ctx->pc != 0x3212A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CCA0_0x48cca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3212A0u; }
        if (ctx->pc != 0x3212A0u) { return; }
    }
    ctx->pc = 0x3212A0u;
label_3212a0:
    // 0x3212a0: 0x22e3c  dsll32      $a1, $v0, 24
    ctx->pc = 0x3212a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 24));
label_3212a4:
    // 0x3212a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3212a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3212a8:
    // 0x3212a8: 0xc0b8ca4  jal         func_2E3290
label_3212ac:
    if (ctx->pc == 0x3212ACu) {
        ctx->pc = 0x3212ACu;
            // 0x3212ac: 0x52e3f  dsra32      $a1, $a1, 24 (Delay Slot)
        SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
        ctx->pc = 0x3212B0u;
        goto label_3212b0;
    }
    ctx->pc = 0x3212A8u;
    SET_GPR_U32(ctx, 31, 0x3212B0u);
    ctx->pc = 0x3212ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3212A8u;
            // 0x3212ac: 0x52e3f  dsra32      $a1, $a1, 24 (Delay Slot)
        SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3290u;
    if (runtime->hasFunction(0x2E3290u)) {
        auto targetFn = runtime->lookupFunction(0x2E3290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3212B0u; }
        if (ctx->pc != 0x3212B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E3290_0x2e3290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3212B0u; }
        if (ctx->pc != 0x3212B0u) { return; }
    }
    ctx->pc = 0x3212B0u;
label_3212b0:
    // 0x3212b0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x3212b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3212b4:
    // 0x3212b4: 0xc123328  jal         func_48CCA0
label_3212b8:
    if (ctx->pc == 0x3212B8u) {
        ctx->pc = 0x3212B8u;
            // 0x3212b8: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->pc = 0x3212BCu;
        goto label_3212bc;
    }
    ctx->pc = 0x3212B4u;
    SET_GPR_U32(ctx, 31, 0x3212BCu);
    ctx->pc = 0x3212B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3212B4u;
            // 0x3212b8: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CCA0u;
    if (runtime->hasFunction(0x48CCA0u)) {
        auto targetFn = runtime->lookupFunction(0x48CCA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3212BCu; }
        if (ctx->pc != 0x3212BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CCA0_0x48cca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3212BCu; }
        if (ctx->pc != 0x3212BCu) { return; }
    }
    ctx->pc = 0x3212BCu;
label_3212bc:
    // 0x3212bc: 0x22e3c  dsll32      $a1, $v0, 24
    ctx->pc = 0x3212bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 24));
label_3212c0:
    // 0x3212c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3212c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3212c4:
    // 0x3212c4: 0xc0b8c9c  jal         func_2E3270
label_3212c8:
    if (ctx->pc == 0x3212C8u) {
        ctx->pc = 0x3212C8u;
            // 0x3212c8: 0x52e3f  dsra32      $a1, $a1, 24 (Delay Slot)
        SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
        ctx->pc = 0x3212CCu;
        goto label_3212cc;
    }
    ctx->pc = 0x3212C4u;
    SET_GPR_U32(ctx, 31, 0x3212CCu);
    ctx->pc = 0x3212C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3212C4u;
            // 0x3212c8: 0x52e3f  dsra32      $a1, $a1, 24 (Delay Slot)
        SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3270u;
    if (runtime->hasFunction(0x2E3270u)) {
        auto targetFn = runtime->lookupFunction(0x2E3270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3212CCu; }
        if (ctx->pc != 0x3212CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E3270_0x2e3270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3212CCu; }
        if (ctx->pc != 0x3212CCu) { return; }
    }
    ctx->pc = 0x3212CCu;
label_3212cc:
    // 0x3212cc: 0x1000004f  b           . + 4 + (0x4F << 2)
label_3212d0:
    if (ctx->pc == 0x3212D0u) {
        ctx->pc = 0x3212D4u;
        goto label_3212d4;
    }
    ctx->pc = 0x3212CCu;
    {
        const bool branch_taken_0x3212cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3212cc) {
            ctx->pc = 0x32140Cu;
            goto label_32140c;
        }
    }
    ctx->pc = 0x3212D4u;
label_3212d4:
    // 0x3212d4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x3212d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3212d8:
    // 0x3212d8: 0xc123328  jal         func_48CCA0
label_3212dc:
    if (ctx->pc == 0x3212DCu) {
        ctx->pc = 0x3212DCu;
            // 0x3212dc: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->pc = 0x3212E0u;
        goto label_3212e0;
    }
    ctx->pc = 0x3212D8u;
    SET_GPR_U32(ctx, 31, 0x3212E0u);
    ctx->pc = 0x3212DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3212D8u;
            // 0x3212dc: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CCA0u;
    if (runtime->hasFunction(0x48CCA0u)) {
        auto targetFn = runtime->lookupFunction(0x48CCA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3212E0u; }
        if (ctx->pc != 0x3212E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CCA0_0x48cca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3212E0u; }
        if (ctx->pc != 0x3212E0u) { return; }
    }
    ctx->pc = 0x3212E0u;
label_3212e0:
    // 0x3212e0: 0x22e3c  dsll32      $a1, $v0, 24
    ctx->pc = 0x3212e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 24));
label_3212e4:
    // 0x3212e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3212e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3212e8:
    // 0x3212e8: 0xc0b8c94  jal         func_2E3250
label_3212ec:
    if (ctx->pc == 0x3212ECu) {
        ctx->pc = 0x3212ECu;
            // 0x3212ec: 0x52e3f  dsra32      $a1, $a1, 24 (Delay Slot)
        SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
        ctx->pc = 0x3212F0u;
        goto label_3212f0;
    }
    ctx->pc = 0x3212E8u;
    SET_GPR_U32(ctx, 31, 0x3212F0u);
    ctx->pc = 0x3212ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3212E8u;
            // 0x3212ec: 0x52e3f  dsra32      $a1, $a1, 24 (Delay Slot)
        SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3250u;
    if (runtime->hasFunction(0x2E3250u)) {
        auto targetFn = runtime->lookupFunction(0x2E3250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3212F0u; }
        if (ctx->pc != 0x3212F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E3250_0x2e3250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3212F0u; }
        if (ctx->pc != 0x3212F0u) { return; }
    }
    ctx->pc = 0x3212F0u;
label_3212f0:
    // 0x3212f0: 0x10000046  b           . + 4 + (0x46 << 2)
label_3212f4:
    if (ctx->pc == 0x3212F4u) {
        ctx->pc = 0x3212F8u;
        goto label_3212f8;
    }
    ctx->pc = 0x3212F0u;
    {
        const bool branch_taken_0x3212f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3212f0) {
            ctx->pc = 0x32140Cu;
            goto label_32140c;
        }
    }
    ctx->pc = 0x3212F8u;
label_3212f8:
    // 0x3212f8: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x3212f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3212fc:
    // 0x3212fc: 0xc123328  jal         func_48CCA0
label_321300:
    if (ctx->pc == 0x321300u) {
        ctx->pc = 0x321300u;
            // 0x321300: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->pc = 0x321304u;
        goto label_321304;
    }
    ctx->pc = 0x3212FCu;
    SET_GPR_U32(ctx, 31, 0x321304u);
    ctx->pc = 0x321300u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3212FCu;
            // 0x321300: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CCA0u;
    if (runtime->hasFunction(0x48CCA0u)) {
        auto targetFn = runtime->lookupFunction(0x48CCA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321304u; }
        if (ctx->pc != 0x321304u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CCA0_0x48cca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321304u; }
        if (ctx->pc != 0x321304u) { return; }
    }
    ctx->pc = 0x321304u;
label_321304:
    // 0x321304: 0x22e3c  dsll32      $a1, $v0, 24
    ctx->pc = 0x321304u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 24));
label_321308:
    // 0x321308: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x321308u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_32130c:
    // 0x32130c: 0xc0b8c8c  jal         func_2E3230
label_321310:
    if (ctx->pc == 0x321310u) {
        ctx->pc = 0x321310u;
            // 0x321310: 0x52e3f  dsra32      $a1, $a1, 24 (Delay Slot)
        SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
        ctx->pc = 0x321314u;
        goto label_321314;
    }
    ctx->pc = 0x32130Cu;
    SET_GPR_U32(ctx, 31, 0x321314u);
    ctx->pc = 0x321310u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32130Cu;
            // 0x321310: 0x52e3f  dsra32      $a1, $a1, 24 (Delay Slot)
        SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3230u;
    if (runtime->hasFunction(0x2E3230u)) {
        auto targetFn = runtime->lookupFunction(0x2E3230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321314u; }
        if (ctx->pc != 0x321314u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E3230_0x2e3230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321314u; }
        if (ctx->pc != 0x321314u) { return; }
    }
    ctx->pc = 0x321314u;
label_321314:
    // 0x321314: 0x1000003d  b           . + 4 + (0x3D << 2)
label_321318:
    if (ctx->pc == 0x321318u) {
        ctx->pc = 0x32131Cu;
        goto label_32131c;
    }
    ctx->pc = 0x321314u;
    {
        const bool branch_taken_0x321314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x321314) {
            ctx->pc = 0x32140Cu;
            goto label_32140c;
        }
    }
    ctx->pc = 0x32131Cu;
label_32131c:
    // 0x32131c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x32131cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_321320:
    // 0x321320: 0xc123328  jal         func_48CCA0
label_321324:
    if (ctx->pc == 0x321324u) {
        ctx->pc = 0x321324u;
            // 0x321324: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->pc = 0x321328u;
        goto label_321328;
    }
    ctx->pc = 0x321320u;
    SET_GPR_U32(ctx, 31, 0x321328u);
    ctx->pc = 0x321324u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x321320u;
            // 0x321324: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CCA0u;
    if (runtime->hasFunction(0x48CCA0u)) {
        auto targetFn = runtime->lookupFunction(0x48CCA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321328u; }
        if (ctx->pc != 0x321328u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CCA0_0x48cca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321328u; }
        if (ctx->pc != 0x321328u) { return; }
    }
    ctx->pc = 0x321328u;
label_321328:
    // 0x321328: 0x22e3c  dsll32      $a1, $v0, 24
    ctx->pc = 0x321328u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 24));
label_32132c:
    // 0x32132c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32132cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_321330:
    // 0x321330: 0xc0b8c84  jal         func_2E3210
label_321334:
    if (ctx->pc == 0x321334u) {
        ctx->pc = 0x321334u;
            // 0x321334: 0x52e3f  dsra32      $a1, $a1, 24 (Delay Slot)
        SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
        ctx->pc = 0x321338u;
        goto label_321338;
    }
    ctx->pc = 0x321330u;
    SET_GPR_U32(ctx, 31, 0x321338u);
    ctx->pc = 0x321334u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x321330u;
            // 0x321334: 0x52e3f  dsra32      $a1, $a1, 24 (Delay Slot)
        SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3210u;
    if (runtime->hasFunction(0x2E3210u)) {
        auto targetFn = runtime->lookupFunction(0x2E3210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321338u; }
        if (ctx->pc != 0x321338u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E3210_0x2e3210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321338u; }
        if (ctx->pc != 0x321338u) { return; }
    }
    ctx->pc = 0x321338u;
label_321338:
    // 0x321338: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x321338u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_32133c:
    // 0x32133c: 0xc123328  jal         func_48CCA0
label_321340:
    if (ctx->pc == 0x321340u) {
        ctx->pc = 0x321340u;
            // 0x321340: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x321344u;
        goto label_321344;
    }
    ctx->pc = 0x32133Cu;
    SET_GPR_U32(ctx, 31, 0x321344u);
    ctx->pc = 0x321340u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32133Cu;
            // 0x321340: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CCA0u;
    if (runtime->hasFunction(0x48CCA0u)) {
        auto targetFn = runtime->lookupFunction(0x48CCA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321344u; }
        if (ctx->pc != 0x321344u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CCA0_0x48cca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321344u; }
        if (ctx->pc != 0x321344u) { return; }
    }
    ctx->pc = 0x321344u;
label_321344:
    // 0x321344: 0x22e3c  dsll32      $a1, $v0, 24
    ctx->pc = 0x321344u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 24));
label_321348:
    // 0x321348: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x321348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_32134c:
    // 0x32134c: 0xc0b8c7c  jal         func_2E31F0
label_321350:
    if (ctx->pc == 0x321350u) {
        ctx->pc = 0x321350u;
            // 0x321350: 0x52e3f  dsra32      $a1, $a1, 24 (Delay Slot)
        SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
        ctx->pc = 0x321354u;
        goto label_321354;
    }
    ctx->pc = 0x32134Cu;
    SET_GPR_U32(ctx, 31, 0x321354u);
    ctx->pc = 0x321350u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32134Cu;
            // 0x321350: 0x52e3f  dsra32      $a1, $a1, 24 (Delay Slot)
        SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E31F0u;
    if (runtime->hasFunction(0x2E31F0u)) {
        auto targetFn = runtime->lookupFunction(0x2E31F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321354u; }
        if (ctx->pc != 0x321354u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E31F0_0x2e31f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321354u; }
        if (ctx->pc != 0x321354u) { return; }
    }
    ctx->pc = 0x321354u;
label_321354:
    // 0x321354: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x321354u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_321358:
    // 0x321358: 0xc123328  jal         func_48CCA0
label_32135c:
    if (ctx->pc == 0x32135Cu) {
        ctx->pc = 0x32135Cu;
            // 0x32135c: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->pc = 0x321360u;
        goto label_321360;
    }
    ctx->pc = 0x321358u;
    SET_GPR_U32(ctx, 31, 0x321360u);
    ctx->pc = 0x32135Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x321358u;
            // 0x32135c: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CCA0u;
    if (runtime->hasFunction(0x48CCA0u)) {
        auto targetFn = runtime->lookupFunction(0x48CCA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321360u; }
        if (ctx->pc != 0x321360u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CCA0_0x48cca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321360u; }
        if (ctx->pc != 0x321360u) { return; }
    }
    ctx->pc = 0x321360u;
label_321360:
    // 0x321360: 0x22e3c  dsll32      $a1, $v0, 24
    ctx->pc = 0x321360u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 24));
label_321364:
    // 0x321364: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x321364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_321368:
    // 0x321368: 0xc0b8c4c  jal         func_2E3130
label_32136c:
    if (ctx->pc == 0x32136Cu) {
        ctx->pc = 0x32136Cu;
            // 0x32136c: 0x52e3f  dsra32      $a1, $a1, 24 (Delay Slot)
        SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
        ctx->pc = 0x321370u;
        goto label_321370;
    }
    ctx->pc = 0x321368u;
    SET_GPR_U32(ctx, 31, 0x321370u);
    ctx->pc = 0x32136Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x321368u;
            // 0x32136c: 0x52e3f  dsra32      $a1, $a1, 24 (Delay Slot)
        SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3130u;
    if (runtime->hasFunction(0x2E3130u)) {
        auto targetFn = runtime->lookupFunction(0x2E3130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321370u; }
        if (ctx->pc != 0x321370u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E3130_0x2e3130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321370u; }
        if (ctx->pc != 0x321370u) { return; }
    }
    ctx->pc = 0x321370u;
label_321370:
    // 0x321370: 0x10000026  b           . + 4 + (0x26 << 2)
label_321374:
    if (ctx->pc == 0x321374u) {
        ctx->pc = 0x321378u;
        goto label_321378;
    }
    ctx->pc = 0x321370u;
    {
        const bool branch_taken_0x321370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x321370) {
            ctx->pc = 0x32140Cu;
            goto label_32140c;
        }
    }
    ctx->pc = 0x321378u;
label_321378:
    // 0x321378: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x321378u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_32137c:
    // 0x32137c: 0xc123328  jal         func_48CCA0
label_321380:
    if (ctx->pc == 0x321380u) {
        ctx->pc = 0x321380u;
            // 0x321380: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->pc = 0x321384u;
        goto label_321384;
    }
    ctx->pc = 0x32137Cu;
    SET_GPR_U32(ctx, 31, 0x321384u);
    ctx->pc = 0x321380u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32137Cu;
            // 0x321380: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CCA0u;
    if (runtime->hasFunction(0x48CCA0u)) {
        auto targetFn = runtime->lookupFunction(0x48CCA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321384u; }
        if (ctx->pc != 0x321384u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CCA0_0x48cca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321384u; }
        if (ctx->pc != 0x321384u) { return; }
    }
    ctx->pc = 0x321384u;
label_321384:
    // 0x321384: 0x22e3c  dsll32      $a1, $v0, 24
    ctx->pc = 0x321384u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 24));
label_321388:
    // 0x321388: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x321388u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_32138c:
    // 0x32138c: 0xc0b8c6c  jal         func_2E31B0
label_321390:
    if (ctx->pc == 0x321390u) {
        ctx->pc = 0x321390u;
            // 0x321390: 0x52e3f  dsra32      $a1, $a1, 24 (Delay Slot)
        SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
        ctx->pc = 0x321394u;
        goto label_321394;
    }
    ctx->pc = 0x32138Cu;
    SET_GPR_U32(ctx, 31, 0x321394u);
    ctx->pc = 0x321390u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32138Cu;
            // 0x321390: 0x52e3f  dsra32      $a1, $a1, 24 (Delay Slot)
        SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E31B0u;
    if (runtime->hasFunction(0x2E31B0u)) {
        auto targetFn = runtime->lookupFunction(0x2E31B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321394u; }
        if (ctx->pc != 0x321394u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E31B0_0x2e31b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321394u; }
        if (ctx->pc != 0x321394u) { return; }
    }
    ctx->pc = 0x321394u;
label_321394:
    // 0x321394: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x321394u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_321398:
    // 0x321398: 0xc123328  jal         func_48CCA0
label_32139c:
    if (ctx->pc == 0x32139Cu) {
        ctx->pc = 0x32139Cu;
            // 0x32139c: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->pc = 0x3213A0u;
        goto label_3213a0;
    }
    ctx->pc = 0x321398u;
    SET_GPR_U32(ctx, 31, 0x3213A0u);
    ctx->pc = 0x32139Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x321398u;
            // 0x32139c: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CCA0u;
    if (runtime->hasFunction(0x48CCA0u)) {
        auto targetFn = runtime->lookupFunction(0x48CCA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3213A0u; }
        if (ctx->pc != 0x3213A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CCA0_0x48cca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3213A0u; }
        if (ctx->pc != 0x3213A0u) { return; }
    }
    ctx->pc = 0x3213A0u;
label_3213a0:
    // 0x3213a0: 0x22e3c  dsll32      $a1, $v0, 24
    ctx->pc = 0x3213a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 24));
label_3213a4:
    // 0x3213a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3213a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3213a8:
    // 0x3213a8: 0xc0b8c74  jal         func_2E31D0
label_3213ac:
    if (ctx->pc == 0x3213ACu) {
        ctx->pc = 0x3213ACu;
            // 0x3213ac: 0x52e3f  dsra32      $a1, $a1, 24 (Delay Slot)
        SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
        ctx->pc = 0x3213B0u;
        goto label_3213b0;
    }
    ctx->pc = 0x3213A8u;
    SET_GPR_U32(ctx, 31, 0x3213B0u);
    ctx->pc = 0x3213ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3213A8u;
            // 0x3213ac: 0x52e3f  dsra32      $a1, $a1, 24 (Delay Slot)
        SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E31D0u;
    if (runtime->hasFunction(0x2E31D0u)) {
        auto targetFn = runtime->lookupFunction(0x2E31D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3213B0u; }
        if (ctx->pc != 0x3213B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E31D0_0x2e31d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3213B0u; }
        if (ctx->pc != 0x3213B0u) { return; }
    }
    ctx->pc = 0x3213B0u;
label_3213b0:
    // 0x3213b0: 0x10000016  b           . + 4 + (0x16 << 2)
label_3213b4:
    if (ctx->pc == 0x3213B4u) {
        ctx->pc = 0x3213B8u;
        goto label_3213b8;
    }
    ctx->pc = 0x3213B0u;
    {
        const bool branch_taken_0x3213b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3213b0) {
            ctx->pc = 0x32140Cu;
            goto label_32140c;
        }
    }
    ctx->pc = 0x3213B8u;
label_3213b8:
    // 0x3213b8: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x3213b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3213bc:
    // 0x3213bc: 0xc123328  jal         func_48CCA0
label_3213c0:
    if (ctx->pc == 0x3213C0u) {
        ctx->pc = 0x3213C0u;
            // 0x3213c0: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->pc = 0x3213C4u;
        goto label_3213c4;
    }
    ctx->pc = 0x3213BCu;
    SET_GPR_U32(ctx, 31, 0x3213C4u);
    ctx->pc = 0x3213C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3213BCu;
            // 0x3213c0: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CCA0u;
    if (runtime->hasFunction(0x48CCA0u)) {
        auto targetFn = runtime->lookupFunction(0x48CCA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3213C4u; }
        if (ctx->pc != 0x3213C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CCA0_0x48cca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3213C4u; }
        if (ctx->pc != 0x3213C4u) { return; }
    }
    ctx->pc = 0x3213C4u;
label_3213c4:
    // 0x3213c4: 0x22e3c  dsll32      $a1, $v0, 24
    ctx->pc = 0x3213c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 24));
label_3213c8:
    // 0x3213c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3213c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3213cc:
    // 0x3213cc: 0xc0b8c5c  jal         func_2E3170
label_3213d0:
    if (ctx->pc == 0x3213D0u) {
        ctx->pc = 0x3213D0u;
            // 0x3213d0: 0x52e3f  dsra32      $a1, $a1, 24 (Delay Slot)
        SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
        ctx->pc = 0x3213D4u;
        goto label_3213d4;
    }
    ctx->pc = 0x3213CCu;
    SET_GPR_U32(ctx, 31, 0x3213D4u);
    ctx->pc = 0x3213D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3213CCu;
            // 0x3213d0: 0x52e3f  dsra32      $a1, $a1, 24 (Delay Slot)
        SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3170u;
    if (runtime->hasFunction(0x2E3170u)) {
        auto targetFn = runtime->lookupFunction(0x2E3170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3213D4u; }
        if (ctx->pc != 0x3213D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E3170_0x2e3170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3213D4u; }
        if (ctx->pc != 0x3213D4u) { return; }
    }
    ctx->pc = 0x3213D4u;
label_3213d4:
    // 0x3213d4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x3213d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3213d8:
    // 0x3213d8: 0xc123328  jal         func_48CCA0
label_3213dc:
    if (ctx->pc == 0x3213DCu) {
        ctx->pc = 0x3213DCu;
            // 0x3213dc: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->pc = 0x3213E0u;
        goto label_3213e0;
    }
    ctx->pc = 0x3213D8u;
    SET_GPR_U32(ctx, 31, 0x3213E0u);
    ctx->pc = 0x3213DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3213D8u;
            // 0x3213dc: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CCA0u;
    if (runtime->hasFunction(0x48CCA0u)) {
        auto targetFn = runtime->lookupFunction(0x48CCA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3213E0u; }
        if (ctx->pc != 0x3213E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CCA0_0x48cca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3213E0u; }
        if (ctx->pc != 0x3213E0u) { return; }
    }
    ctx->pc = 0x3213E0u;
label_3213e0:
    // 0x3213e0: 0x22e3c  dsll32      $a1, $v0, 24
    ctx->pc = 0x3213e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 24));
label_3213e4:
    // 0x3213e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3213e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3213e8:
    // 0x3213e8: 0xc0b8c54  jal         func_2E3150
label_3213ec:
    if (ctx->pc == 0x3213ECu) {
        ctx->pc = 0x3213ECu;
            // 0x3213ec: 0x52e3f  dsra32      $a1, $a1, 24 (Delay Slot)
        SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
        ctx->pc = 0x3213F0u;
        goto label_3213f0;
    }
    ctx->pc = 0x3213E8u;
    SET_GPR_U32(ctx, 31, 0x3213F0u);
    ctx->pc = 0x3213ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3213E8u;
            // 0x3213ec: 0x52e3f  dsra32      $a1, $a1, 24 (Delay Slot)
        SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3150u;
    if (runtime->hasFunction(0x2E3150u)) {
        auto targetFn = runtime->lookupFunction(0x2E3150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3213F0u; }
        if (ctx->pc != 0x3213F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E3150_0x2e3150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3213F0u; }
        if (ctx->pc != 0x3213F0u) { return; }
    }
    ctx->pc = 0x3213F0u;
label_3213f0:
    // 0x3213f0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x3213f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3213f4:
    // 0x3213f4: 0xc123328  jal         func_48CCA0
label_3213f8:
    if (ctx->pc == 0x3213F8u) {
        ctx->pc = 0x3213F8u;
            // 0x3213f8: 0x24050039  addiu       $a1, $zero, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
        ctx->pc = 0x3213FCu;
        goto label_3213fc;
    }
    ctx->pc = 0x3213F4u;
    SET_GPR_U32(ctx, 31, 0x3213FCu);
    ctx->pc = 0x3213F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3213F4u;
            // 0x3213f8: 0x24050039  addiu       $a1, $zero, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CCA0u;
    if (runtime->hasFunction(0x48CCA0u)) {
        auto targetFn = runtime->lookupFunction(0x48CCA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3213FCu; }
        if (ctx->pc != 0x3213FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CCA0_0x48cca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3213FCu; }
        if (ctx->pc != 0x3213FCu) { return; }
    }
    ctx->pc = 0x3213FCu;
label_3213fc:
    // 0x3213fc: 0x22e3c  dsll32      $a1, $v0, 24
    ctx->pc = 0x3213fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 24));
label_321400:
    // 0x321400: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x321400u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_321404:
    // 0x321404: 0xc0b8c64  jal         func_2E3190
label_321408:
    if (ctx->pc == 0x321408u) {
        ctx->pc = 0x321408u;
            // 0x321408: 0x52e3f  dsra32      $a1, $a1, 24 (Delay Slot)
        SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
        ctx->pc = 0x32140Cu;
        goto label_32140c;
    }
    ctx->pc = 0x321404u;
    SET_GPR_U32(ctx, 31, 0x32140Cu);
    ctx->pc = 0x321408u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x321404u;
            // 0x321408: 0x52e3f  dsra32      $a1, $a1, 24 (Delay Slot)
        SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3190u;
    if (runtime->hasFunction(0x2E3190u)) {
        auto targetFn = runtime->lookupFunction(0x2E3190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32140Cu; }
        if (ctx->pc != 0x32140Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E3190_0x2e3190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32140Cu; }
        if (ctx->pc != 0x32140Cu) { return; }
    }
    ctx->pc = 0x32140Cu;
label_32140c:
    // 0x32140c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x32140cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_321410:
    // 0x321410: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x321410u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_321414:
    // 0x321414: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x321414u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_321418:
    // 0x321418: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x321418u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_32141c:
    // 0x32141c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x32141cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_321420:
    // 0x321420: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x321420u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_321424:
    // 0x321424: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x321424u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_321428:
    // 0x321428: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x321428u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_32142c:
    // 0x32142c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x32142cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_321430:
    // 0x321430: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x321430u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_321434:
    // 0x321434: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x321434u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_321438:
    // 0x321438: 0x3e00008  jr          $ra
label_32143c:
    if (ctx->pc == 0x32143Cu) {
        ctx->pc = 0x32143Cu;
            // 0x32143c: 0x27bd04f0  addiu       $sp, $sp, 0x4F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1264));
        ctx->pc = 0x321440u;
        goto label_fallthrough_0x321438;
    }
    ctx->pc = 0x321438u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32143Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x321438u;
            // 0x32143c: 0x27bd04f0  addiu       $sp, $sp, 0x4F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1264));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x321438:
    ctx->pc = 0x321440u;
}
